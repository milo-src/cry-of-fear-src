"""Read-only shader evidence inventory; never loads an original DLL.

Inventories loose shader sources and recognizable NUL-terminated ARB/NV
assembly programs in the three original renderer-bearing PE modules.
This is a bounded static scan, not proof of complete shader execution coverage.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import struct

from index_evidence import pe_metadata

ROOT = Path(__file__).resolve().parents[1]
EXTENSIONS = {'.cg', '.glsl', '.vsh', '.fsh', '.vert', '.frag', '.vp', '.fp'}
MODULES = ('cryoffear/cl_dlls/client.dll', 'hw.dll', 'opengl32.dll')


def sha(data):
    return hashlib.sha256(data).hexdigest()


def inventory(installation):
    sources = []
    containers = []
    for path in sorted(installation.rglob('*')):
        if path.is_file() and path.suffix.lower() in {'.pak', '.pk3', '.zip', '.vpk'}:
            data = path.read_bytes()
            containers.append(dict(path=path.relative_to(installation).as_posix(),
                                   bytes=len(data), sha256=sha(data),
                                   members_inspected=False))
        if not path.is_file() or path.suffix.lower() not in EXTENSIONS:
            continue
        data = path.read_bytes()
        source = data.decode('ascii', errors='replace')
        sources.append(dict(path=path.relative_to(installation).as_posix(),
                            bytes=len(data), sha256=sha(data),
                            uniforms=re.findall(r'uniform\s+(\w+)\s+(\w+)(?:\s*:\s*(\w+))?', source),
                            texture_lookups=re.findall(r'\b(tex2D|offsettex2D)\s*\(\s*(\w+)', source),
                            source=source))
    modules = []
    for relative in MODULES:
        data = (installation / relative).read_bytes()
        meta = pe_metadata(data)
        base = int(meta['image_base'], 16)

        def address(offset):
            return next((base + int(s['rva'], 16) + offset - s['raw_offset']
                         for s in meta['sections']
                         if s['raw_offset'] <= offset < s['raw_offset'] + s['raw_size']), None)

        programs = []
        for match in re.finditer(rb'!!(?:ARB|FP|VP|RC|TS)[^\x00]{0,65536}', data):
            program = match.group()
            va = address(match.start())
            candidates = []
            if va is not None:
                for ref in re.finditer(re.escape(struct.pack('<I', va)), data):
                    location = address(ref.start())
                    candidates.append(dict(file_offset=hex(ref.start()),
                                           address=hex(location) if location else None))
            programs.append(dict(file_offset=hex(match.start()), address=hex(va) if va else None,
                                 bytes=len(program), sha256=sha(program),
                                 nul_terminated=match.end() < len(data) and data[match.end()] == 0,
                                 source=program.decode('ascii', errors='replace'),
                                 raw_pointer_candidates=candidates,
                                 pointer_candidates_are_not_validated_xrefs=True))
        modules.append(dict(path=relative, bytes=len(data), sha256=sha(data), programs=programs))
    return dict(schema=1, target_executed=False,
                installation=str(installation), loose_source_extensions=sorted(EXTENSIONS),
                container_extensions=['.pak', '.pk3', '.zip', '.vpk'],
                containers=containers,
                scan_boundary='all loose matching files under install; ASCII assembly markers in client.dll, hw.dll and opengl32.dll',
                limitations=['Does not identify dynamically assembled shaders or register-combiner state machines.',
                             'Container discovery is complete for the declared extensions; any found container requires a separate member-table inspection.',
                             'Does not analyze third-party Cg compiler libraries.',
                             'Raw pointer occurrences are candidates, not validated code references.',
                             'Shader source existence does not prove an active call path or pixel parity.'],
                loose_sources=sources, renderer_modules=modules)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--installation', type=Path,
                        default=Path('D:/Steam/steamapps/common/Cry of Fear'))
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'analysis/graphics/shader-coverage.json')
    args = parser.parse_args()
    report = inventory(args.installation.resolve())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(f"Loose sources: {len(report['loose_sources'])}; embedded programs: "
          f"{sum(len(m['programs']) for m in report['renderer_modules'])}")


if __name__ == '__main__':
    main()
