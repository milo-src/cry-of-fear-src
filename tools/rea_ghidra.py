"""Static Ghidra queries through a private REA MCP process (no target execution).

Windows REA does not support persistent Ghidra projects. Batch selectors share
one import; complete MCP results and a canonical Evidence bundle are retained.
Use --requests for other read-only queries after opening the selected DLL.
"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import queue
import subprocess
import threading
import time

ROOT = Path(__file__).resolve().parents[1]
LOCAL_REA = Path(os.environ.get('LOCALAPPDATA', '')) / 'REA'
GHIDRA = ROOT / 'deps/rea-tools/ghidra_12.1.4_PUBLIC'
ALLOWED = {'procedure_pseudo_code', 'procedure_assembly', 'procedure_info',
           'analyze_function', 'list_procedures', 'search_procedures',
           'search_strings', 'get_xrefs', 'read_bytes', 'list_names',
           'inspect_native_instruction', 'inspect_native_load_image',
           'resolve_native_call_targets', 'trace_native_values'}


class MCP:
    def __init__(self, command, env, log, timeout):
        self.process = subprocess.Popen(command, stdin=subprocess.PIPE,
            stdout=subprocess.PIPE, stderr=log, text=True, encoding='utf-8',
            env=env, cwd=ROOT, creationflags=getattr(subprocess, 'CREATE_NO_WINDOW', 0))
        self.responses = queue.Queue()
        self.counter = 0
        self.timeout = timeout
        threading.Thread(target=self._read, daemon=True).start()

    def _read(self):
        try:
            for line in self.process.stdout:
                self.responses.put(json.loads(line))
        except Exception as error:
            self.responses.put(error)
        finally:
            self.responses.put(EOFError('REA process closed stdout'))

    def notify(self, method, params):
        self.process.stdin.write(json.dumps(dict(jsonrpc='2.0', method=method, params=params)) + '\n')
        self.process.stdin.flush()

    def request(self, method, params):
        self.counter += 1
        self.process.stdin.write(json.dumps(dict(jsonrpc='2.0', id=self.counter,
            method=method, params=params)) + '\n')
        self.process.stdin.flush()
        deadline = time.monotonic() + self.timeout
        while True:
            response = self.responses.get(timeout=max(0.1, deadline - time.monotonic()))
            if isinstance(response, Exception):
                raise response
            if response.get('id') != self.counter:
                continue
            if 'error' in response:
                raise RuntimeError(response['error'])
            return response['result']

    def tool(self, name, arguments):
        return self.request('tools/call', dict(name=name, arguments=arguments))

    def stop(self):
        self.process.stdin.close()
        try:
            self.process.wait(timeout=30)
        except subprocess.TimeoutExpired:
            self.process.terminate()
            self.process.wait(timeout=30)


def save(path, value):
    path.write_text(json.dumps(value, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('procedures', nargs='*', help='Symbols or preferred VAs, e.g. ram:0x100183d0')
    parser.add_argument('--output', type=Path, required=True, help='New result directory; refuses overwrite')
    parser.add_argument('--requests', type=Path, help='JSON list of {name, arguments} read-only MCP queries')
    parser.add_argument('--node', type=Path)
    parser.add_argument('--rea', type=Path, default=LOCAL_REA / 'packages/node_modules/rea-agents/scripts/rea.mjs')
    parser.add_argument('--ghidra', type=Path, default=GHIDRA)
    parser.add_argument('--java-home', type=Path, default=Path(os.environ.get('JAVA_HOME', 'C:/Program Files/Java/jdk-26.0.1')))
    parser.add_argument('--startup-seconds', type=int, default=1800)
    args = parser.parse_args()
    node = args.node or next(iter(sorted(LOCAL_REA.glob('node-*-win-x64/node.exe'), reverse=True)), None)
    for path in (node, args.rea, args.ghidra / 'support/analyzeHeadless.bat', args.java_home / 'bin/java.exe', args.binary):
        if path is None or not path.is_file():
            parser.error(f'Missing prerequisite: {path}; see analysis/native-toolchain.md')
    queries = [dict(name='procedure_pseudo_code', arguments=dict(procedure=p, detail='complete')) for p in args.procedures]
    if args.requests:
        queries.extend(json.loads(args.requests.read_text(encoding='utf-8-sig')))
    if not queries:
        parser.error('Supply at least one procedure or --requests')
    for query in queries:
        if query.get('name') not in ALLOWED or not isinstance(query.get('arguments'), dict):
            parser.error(f'Unsupported query: {query}')
    binary = args.binary.resolve()
    digest = hashlib.sha256(binary.read_bytes()).hexdigest()
    output = args.output.resolve()
    output.mkdir(parents=True, exist_ok=False)
    env = os.environ.copy()
    # Keep the selected private process independent of any live MCP environment.
    for key in list(env):
        if key.startswith('REA_GHIDRA_'):
            del env[key]
    env.update(GHIDRA_INSTALL_DIR=str(args.ghidra.resolve()), JAVA_HOME=str(args.java_home.resolve()),
               REA_ANALYSIS_PROVIDER='ghidra', REA_GHIDRA_STARTUP_TIMEOUT_MS=str(args.startup_seconds * 1000))
    command = [str(node.resolve()), str(args.rea.resolve()), 'mcp']
    save(output / 'request.json', dict(binary=str(binary), sha256=digest, queries=queries,
        node=str(node), rea=str(args.rea), ghidra=str(args.ghidra), java_home=str(args.java_home),
        target_executed=False, persistence='saved Evidence; ephemeral Windows Ghidra import'))
    success = True
    with (output / 'rea-stderr.log').open('w', encoding='utf-8') as log:
        client = MCP(command, env, log, args.startup_seconds + 180)
        try:
            save(output / 'initialize.json', client.request('initialize', dict(protocolVersion='2024-11-05',
                capabilities={}, clientInfo=dict(name='cof-static-analysis', version='1.0'))))
            client.notify('notifications/initialized', {})
            available = client.request('tools/list', {})
            wanted = {'open_binary', 'close_binary', 'export_evidence_bundle', 'reset_investigation'} | {q['name'] for q in queries}
            selected = [t for t in available['tools'] if t['name'] in wanted]
            save(output / 'tool-schemas.json', selected)
            missing = wanted - {t['name'] for t in selected}
            if missing:
                raise RuntimeError(f'This REA version lacks tools: {sorted(missing)}')
            print('Opening immutable DLL snapshot with Ghidra; first analysis can take several minutes', flush=True)
            opened = client.tool('open_binary', dict(path=str(binary), provider_id='ghidra'))
            save(output / 'open.json', opened)
            if opened.get('isError'):
                raise RuntimeError(f'REA refused open; see {output / "open.json"}')
            for index, query in enumerate(queries):
                print(f'Query {index + 1}/{len(queries)}: {query["name"]} {query["arguments"]}', flush=True)
                result = client.tool(query['name'], query['arguments'])
                save(output / f'{index:03d}-{query["name"]}.json', result)
                success = success and not result.get('isError', False)
                value = result.get('structuredContent', {}).get('normalized_result')
                if isinstance(value, str) and query['name'] == 'procedure_pseudo_code':
                    (output / f'{index:03d}-pseudocode.c').write_text(value, encoding='utf-8')
            exported = client.tool('export_evidence_bundle', dict(path=str(output / 'evidence.json')))
            save(output / 'export.json', exported)
            success = success and not exported.get('isError', False)
        finally:
            try:
                closed = client.tool('close_binary', {})
                save(output / 'close.json', closed)
                success = success and not closed.get('isError', False)
                reset = client.tool('reset_investigation', dict(save_path=str(output / 'final-evidence.json')))
                save(output / 'reset.json', reset)
                success = success and not reset.get('isError', False)
            finally:
                client.stop()
    unchanged = hashlib.sha256(binary.read_bytes()).hexdigest() == digest
    save(output / 'verification.json', dict(input_unchanged=unchanged, queries_succeeded=success,
        target_executed=False, rea_exit_code=client.process.returncode))
    if not unchanged or not success or client.process.returncode != 0:
        raise SystemExit('Capture includes failures; inspect saved Evidence')
    print(f'Saved static Evidence to {output}; original DLL SHA256 unchanged', flush=True)


if __name__ == '__main__':
    main()
