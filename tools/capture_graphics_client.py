"""Bounded static original-client graphics string/xref capture; never execute DLL."""
import argparse
import hashlib
import json
import re
import struct
from pathlib import Path
from index_evidence import pe_metadata

EXPECTED = 'e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360'

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Unknown client build; re-resolve addresses')
    meta = pe_metadata(data)
    base = int(meta['image_base'],16)
    def va(offset):
        return next((base+int(s['rva'],16)+offset-s['raw_offset'] for s in meta['sections']
                     if s['raw_offset'] <= offset < s['raw_offset']+s['raw_size']),0)
    rows = []
    for match in re.finditer(rb'[ -~]{4,}',data):
        text = match.group().decode('ascii')
        address = va(match.start())
        if not (0x10151000 <= address <= 0x10151600 or
                re.search(r'(?i)(shader|water|blackwhite|cgGL|cgCreate|framebuffer|reflection|refraction|flashlight|lightmap|spotlight|dynlight|bump|shadow)',text)):
            continue
        refs = [va(r.start()) for r in re.finditer(re.escape(struct.pack('<I',address)),data)]
        rows.append(dict(address=hex(address),text=text,
                         code_refs=[hex(r) for r in refs if 0x10001000 <= r < 0x10130000]))
    args.output.mkdir(parents=True,exist_ok=False)
    report = dict(binary=str(args.binary.resolve()),sha256=digest,target_executed=False,strings=rows,
                  input_unchanged=hashlib.sha256(args.binary.read_bytes()).hexdigest()==digest)
    (args.output/'strings.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
    # Resolved entries only. Original interior selector1006501a was unresolved;
    # its bounded assembly is retained separately rather than retrying it.
    selectors = [0x10086890,0x10086d10,0x10087860,0x10093d10,
                 0x1006cf00,0x100714b0,0x10079a60,0x10060690]
    requests = [dict(name='procedure_pseudo_code',arguments=dict(procedure=f'ram:{a:#x}',detail='complete')) for a in selectors]
    (args.output/'requests.json').write_text(json.dumps(requests,indent=2)+'\n',encoding='utf-8')
    groups = {
        'water-helpers': [0x100863f0,0x10086560,0x100866e0,0x100875d0,
                          0x10086cb0,0x10086c40,0x10088140,0x10086670,0x10086580],
        'protocol-colour-fog': [0x1006f9f0,0x10071760,0x10071440,0x1005e230,
                               0x1005d7a0,0x1005e400,0x10072740,0x10093bc0,
                               0x10092320,0x100af790],
    }
    for name, entries in groups.items():
        followup = [dict(name='procedure_pseudo_code',arguments=dict(
            procedure=f'ram:{a:#x}',detail='complete')) for a in entries]
        (args.output/(name+'-requests.json')).write_text(
            json.dumps(followup,indent=2)+'\n',encoding='utf-8')
    print(f'Captured {len(rows)} graphics string records; input unchanged={report["input_unchanged"]}')

if __name__ == '__main__':
    main()
