"""Read-only, hash-pinned GameUI options resource/string evidence capture."""
import argparse
import hashlib
import json
import re
import struct
import shutil
import subprocess
from pathlib import Path
from index_evidence import pe_metadata

EXPECTED = '9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198'
TOKEN = re.compile(r'//[^\r\n]*|"((?:\\.|[^"\\])*)"|([{}])|([^\s{}"]+)')

def keyvalues(text):
    text = text.split('\0', 1)[0]  # Valve text loader treats trailing NUL as EOF.
    tokens = [(m.group(1) if m.group(1) is not None else m.group(2) or m.group(3))
              for m in TOKEN.finditer(text) if not m.group().startswith('//')]
    pos = 0
    def pairs(nested=False):
        nonlocal pos
        result = []
        while pos < len(tokens):
            key = tokens[pos]; pos += 1
            if key == '}':
                if not nested: raise ValueError('Unmatched closing brace')
                return result
            if pos == len(tokens): raise ValueError('Missing value')
            value = tokens[pos]; pos += 1
            if value == '{': value = pairs(True)
            result.append([key, value])
        if nested: raise ValueError('Unclosed object')
        return result
    return pairs()

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('game', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    binary = args.game/'cl_dlls/GameUI.dll'
    data = binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED: raise ValueError('Unknown GameUI build; resolve addresses again')
    meta = pe_metadata(data); base = int(meta['image_base'],16)
    def va(offset):
        return next((base+int(s['rva'],16)+offset-s['raw_offset'] for s in meta['sections']
                     if s['raw_offset'] <= offset < s['raw_offset']+s['raw_size']),0)
    rows = []
    for match in re.finditer(rb'[ -~]{4,}',data):
        text = match.group().decode('ascii'); address = va(match.start())
        if not (0x100e7f80 <= address <= 0x100e93e0 or 0x100e7100 <= address <= 0x100e7300 or re.search(
                r'(?i)(optionsdialog|optionssub|cvarslider|cvartoggle|applychanges|trackerscheme)',text)):
            continue
        refs = [va(m.start()) for m in re.finditer(re.escape(struct.pack('<I',address)),data)]
        rows.append(dict(address=hex(address),text=text,
                         code_refs=[hex(r) for r in refs if 0x10001000<=r<0x100d0000]))
    resources = []
    paths = sorted((args.game/'resource').glob('OptionsSub*.res'))
    paths += [args.game/'resource/DialogOptionsIngame.res',args.game/'resource/multiplayeradvancedpage.res',
              args.game/'gfx/shell/kb_act.lst',args.game/'user.scr']
    for path in paths:
        raw = path.read_bytes(); text = raw.decode('latin1')
        resource=dict(path=str(path.relative_to(args.game)),sha256=hashlib.sha256(raw).hexdigest(),bytes=len(raw))
        if path.name.lower()=='user.scr':resource['text']=text
        else:resource['pairs']=keyvalues(text)
        resources.append(resource)
    args.output.mkdir(parents=True,exist_ok=False)
    report = dict(binary=str(binary.resolve()),sha256=digest,target_executed=False,
                  strings=rows,resources=resources,input_unchanged=hashlib.sha256(binary.read_bytes()).hexdigest()==digest)
    (args.output/'inventory.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    selectors = [0x1004fa6a,0x1004fe94,0x1005063f,0x10051093,0x100534e6,
                 0x10053f3f,0x10056dcb,0x10057db1,0x1008c4cb,0x1008cc89,0x10045454]
    requests = [dict(name='procedure_pseudo_code',arguments=dict(procedure=f'ram:{a:#x}',detail='complete')) for a in selectors]
    (args.output/'requests.json').write_text(json.dumps(requests,indent=2)+'\n',encoding='utf-8')
    objdump=shutil.which('objdump')
    if objdump:
        # Decompiler omits floating stack arguments at these constructor calls.
        ranges=[(0x1004fa60,0x1004fac5),(0x10050490,0x1005056a),
                (0x100533d0,0x10053426),(0x10056acb,0x10056b63)]
        chunks=[]
        for first,last in ranges:
            run=subprocess.run([objdump,'-d','-Mintel',f'--start-address={first:#x}',
                                f'--stop-address={last:#x}',str(binary)],capture_output=True,text=True,check=True)
            chunks.append(run.stdout)
        (args.output/'constructor-ranges.asm').write_text('\n'.join(chunks),encoding='utf-8')
    print(f'Captured {len(resources)} resource files and {len(rows)} bounded strings; original unchanged')

if __name__ == '__main__': main()
