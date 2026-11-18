"""Capture bounded static menu switching evidence; never loads original DLLs.

REA/Ghidra can leave command callbacks without function boundaries. The exact
callback bytes are therefore also decoded with objdump, independently of those
boundaries. Output goes only to an ignored analysis/local directory.
"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

from index_evidence import pe_metadata

ROOT = Path(__file__).resolve().parents[1]
RANGES = {
    'client.dll': [
        ('register-switch-commands', 0x1006D5EB, 0x1006D6AA),
        ('switch-callbacks', 0x1006E1F0, 0x1006E3D7),
        ('startup-menu', 0x1007A4B8, 0x1007A4EB),
    ],
    'hl.dll': [
        ('gamemenucmd', 0x1001B9BC, 0x1001BABB),
        ('spawn-menu-message', 0x100F2966, 0x100F29B3),
        ('marker-spawn', 0x1009D940, 0x1009D968),
        ('marker-think', 0x100A0AA0, 0x100A0AD7),
        ('difficulty-marker-spawn', 0x1009D8D0, 0x1009D8F8),
        ('load-marker-spawn', 0x1009DBC0, 0x1009DBE8),
        ('vgui-message-register', 0x100E6427, 0x100E644B),
        ('unlocks-message-register', 0x100E6940, 0x100E6964),
        ('show-vgui-menu', 0x100F4050, 0x100F409A),
        ('difficulty-load-init', 0x100F28A1, 0x100F2966),
        ('music-queue', 0x100EA5C0, 0x100EA620),
    ],
    'vgui2.dll': [
        ('font-scheme', 0x10012D64, 0x100131B8),
        ('font-proportional-scale', 0x100135CF, 0x10013629),
        ('font-language', 0x10013AF3, 0x10013C1D),
        ('font-create', 0x10027400, 0x100277A1),
        ('font-glyph', 0x100277B0, 0x10027DF0),
    ],
}
STRINGS = {'client.dll': [0x101427F4, 0x1014E83C, 0x1014E864,
                         0x1014EBFC, 0x1014EC08, 0x1014EC14],
           'hl.dll': [0x101A85F0, 0x101A8BE0, 0x101DAE5C,
                      0x101C44E0, 0x101C44FC, 0x101DAD50,
                      0x101DB03C, 0x101DAE50],
           'vgui2.dll': [0x1004341C, 0x10043428, 0x1004343C,
                         0x10043458, 0x10043518, 0x10044670]}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game', type=Path, default=Path(
        'D:/Steam/steamapps/common/Cry of Fear/cryoffear'))
    parser.add_argument('--output', type=Path,
                        default=ROOT / 'analysis/local/menu-switch-assembly')
    parser.add_argument('--rea', action='store_true', help='Also capture Ghidra procedures')
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=False)
    manifest = {'target_executed': False, 'modules': []}
    for module, ranges in RANGES.items():
        binary = args.game.parent / module if module == 'vgui2.dll' else args.game / 'cl_dlls' / module
        data = binary.read_bytes()
        digest = hashlib.sha256(data).hexdigest()
        metadata = pe_metadata(data)
        entry = {'path': str(binary), 'sha256': digest, 'strings': {}, 'ranges': ranges}
        for address in STRINGS[module]:
            rva = address - int(metadata['image_base'], 16)
            section = next(s for s in metadata['sections']
                           if int(s['rva'], 16) <= rva < int(s['rva'], 16) + s['raw_size'])
            offset = section['raw_offset'] + rva - int(section['rva'], 16)
            entry['strings'][hex(address)] = data[offset:data.index(0, offset)].decode('ascii')
        for name, start, end in ranges:
            result = subprocess.run(['objdump', '-d', '-M', 'intel',
                f'--start-address={hex(start)}', f'--stop-address={hex(end)}', str(binary)],
                check=True, capture_output=True, text=True)
            (args.output / f'{module}-{name}.asm').write_text(result.stdout, encoding='utf-8')
        entry['input_unchanged'] = hashlib.sha256(binary.read_bytes()).hexdigest() == digest
        if not entry['input_unchanged']:
            raise RuntimeError(f'Input changed: {binary}')
        manifest['modules'].append(entry)
    (args.output / 'manifest.json').write_text(json.dumps(manifest, indent=2) + '\n', encoding='utf-8')
    if args.rea:
        for module, procedures in {
            'client.dll': ['0x10079a60', '0x1006cf00'],
            'hl.dll': ['0x1009d940', '0x100a0aa0', '0x1001b9bc', '0x100f2966',
                       '0x10113b60', '0x1010af30', '0x10110b80', '0x1010cbc0',
                       '0x1009e640', '0x10099570', '0x10096bc0', '0x100a0b90',
                       '0x100a8e80', '0x1009bed0', '0x100dfc10', '0x101148b0'],
            # The large scheme parser crashes this Ghidra decompiler; its bounded
            # assembly is captured above instead of repeating a failed query.
            'vgui2.dll': ['0x10027400', '0x10026af0', '0x100277b0',
                          '0x10013af3', '0x100135cf'],
        }.items():
            binary = args.game.parent / module if module == 'vgui2.dll' else args.game / 'cl_dlls' / module
            subprocess.run([sys.executable, str(ROOT / 'tools/rea_ghidra.py'),
                str(binary), *['ram:' + p for p in procedures],
                '--output', str(args.output / (module + '-rea'))], check=True)
    print(args.output)


if __name__ == '__main__':
    main()
