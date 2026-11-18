"""Inventory original CoF VGUI RTTI/vtables and capture bounded assembly.

Static only: never loads original DLLs. REA/Ghidra interpretation lives in
analysis/menu/vgui.md. Address selectors need the pinned installed build.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess

from index_evidence import pe_metadata

PANELS = "CAmmoInventory CBookMenu CClothesMenu CCoopStats CCredits CCutsceneSkip CDocuments CVGUIExtraMenu CGameMenu CLanguage CPadlock CSaveLoad CScope CTelephone CTVFrame CUnlockables CHUDControl CAnimalStatue CVGUIBillboard CBossBar CComputer CDifficulty CGameOver CRECBInventory CKeypad CNoteDocument CPhone CPuzzleBar CSave CUserDocument CYesno".split()
EXPECTED = 'e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360'


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/local/vgui-menu-static'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Different build; re-resolve addresses before capture')
    meta = pe_metadata(data)
    base = int(meta['image_base'], 16)

    def va(offset):
        return next((base + int(s['rva'], 16) + offset - s['raw_offset']
                     for s in meta['sections'] if s['raw_offset'] <= offset < s['raw_offset'] + s['raw_size']), 0)

    def refs(address):
        return [x.start() for x in re.finditer(re.escape(struct.pack('<I', address)), data)]

    def offset(address):
        return next((s['raw_offset'] + address - base - int(s['rva'], 16)
                     for s in meta['sections'] if base + int(s['rva'], 16) <= address < base + int(s['rva'], 16) + s['raw_size']), None)

    rows = []
    for name in PANELS:
        row = {'class': name, 'vtables': []}
        for cls in [name, name + 'Handler_Command']:
            marker = ('.?AV' + cls + '@@').encode()
            if marker not in data:
                continue
            td = va(data.index(marker)) - 8
            for ref in refs(td):
                if ref < 12 or struct.unpack_from('<I', data, ref - 12)[0] != 0:
                    continue
                col = va(ref) - 12
                for vref in refs(col):
                    vt = va(vref) + 4
                    methods = []
                    for method_offset in range(0, 1024, 4):
                        method = struct.unpack_from('<I', data, vref + 4 + method_offset)[0]
                        if not 0x10001000 <= method < 0x1013a000:
                            break
                        if method < 0x100b3000:
                            methods.append({'byte_offset': hex(method_offset), 'address': hex(method)})
                    row['vtables'].append({'class': cls, 'type_descriptor': hex(td),
                        'complete_object_locator': hex(col), 'vtable': hex(vt),
                        'custom_methods': methods,
                        'code_references': [hex(va(r)) for r in refs(vt) if 0x10001000 <= va(r) < 0x10130000]})
        rows.append(row)
    args.output.mkdir(parents=True, exist_ok=False)
    hooks = []
    # push callback; push message name; call gEngfuncs.pfnHookUserMsg.
    # This is an exact registration idiom, not an exhaustive generic xref scan.
    for match in re.finditer(rb'\x68(.{4})\x68(.{4})\xff\x15\x50\x26\x1b\x10', data, re.S):
        callback = struct.unpack('<I', match.group(1))[0]
        name_address = struct.unpack('<I', match.group(2))[0]
        start = offset(name_address)
        if start is not None:
            name = data[start:data.index(b'\0', start)].decode('ascii')
            hooks.append(dict(name=name, callback=hex(callback), registration=hex(va(match.start()))))
    (args.output / 'message-hooks.json').write_text(json.dumps(hooks, indent=2) + '\n', encoding='utf-8')
    result = {'binary': str(args.binary.resolve()), 'sha256': digest, 'target_executed': False, 'panels': rows}
    font_directory = args.binary.parent.parent / 'gfx/vgui/fonts'
    font_files = []
    for name in ('640_credits.tga', '640_credits.chw'):
        path = font_directory / name
        if path.is_file():
            content = path.read_bytes()
            font_files.append(dict(path=str(path.resolve()), size=len(content), sha256=hashlib.sha256(content).hexdigest()))
    result['font_assets'] = font_files
    (args.output / 'rtti.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    requests = []
    for row in rows:
        for vt in row['vtables']:
            if vt['code_references']:
                # REA resolves containing procedures. This is a selector, not a
                # claim that every first reference is a constructor.
                requests.append({'name': 'procedure_pseudo_code', 'arguments': {
                    'procedure': 'ram:' + vt['code_references'][0], 'detail': 'complete'}})
    (args.output / 'constructor-selectors.json').write_text(json.dumps(requests, indent=2) + '\n', encoding='utf-8')
    executable = shutil.which('objdump')
    if executable:
        for label, start, end in [
            ('mainmenu_constructor', 0x1002c390, 0x1002d8d0),
            ('mainmenu_actions_layout', 0x1002d8d0, 0x1002eeb0),
            ('difficulty_actions', 0x10040100, 0x100406b0),
            ('saveload_constructor', 0x100309e0, 0x100314a0),
            ('font_name_mainmenu', 0x1002c680, 0x1002c720),
            ('font_name_unlockables', 0x10033db0, 0x10033e30),
            ('message_readers', 0x10080850, 0x10080ac0),
        ]:
            command = [executable, '-d', '-M', 'intel', f'--start-address={start:#x}', f'--stop-address={end:#x}', str(args.binary)]
            capture = subprocess.run(command, check=True, text=True, capture_output=True, timeout=30)
            (args.output / (label + '.asm')).write_text(capture.stdout, encoding='utf-8')
    result['input_unchanged'] = hashlib.sha256(args.binary.read_bytes()).hexdigest() == digest
    (args.output / 'rtti.json').write_text(json.dumps(result, indent=2) + '\n', encoding='utf-8')
    print(f'Inventoried {len(rows)} CoF panels in {args.output}')


if __name__ == '__main__':
    main()
