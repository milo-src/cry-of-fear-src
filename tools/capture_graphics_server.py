"""Capture immutable original CoF server graphics evidence without executing it."""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys
import struct
from index_evidence import pe_metadata

ROOT = Path(__file__).resolve().parents[1]
PROCEDURES = {
    'core': [0x1009D5C0, 0x100A5AF0, 0x1009E3B0, 0x100993E0, 0x100A8310,
             0x1009E860, 0x1009E890, 0x1009E590, 0x10099460, 0x10096A40,
             0x100A8A80, 0x100A1980, 0x100A17D0],
    'weather': [0x1009B650, 0x10094790, 0x10094810, 0x1009AAD0,
                0x1009F040, 0x10098110, 0x100A99A0, 0x1009F080, 0x100982B0,
                0x100F80F1, 0x100A1C40, 0x100A1C70],
    'lights': [0x10040110, 0x10040190, 0x100A8570, 0x100A89D0,
               0x100A0B50, 0x10102C40, 0x1000DBA0, 0x10017AD0, 0x100C48B0],
    'light-protocol': [0x10098540, 0x10098610, 0x10094BB0, 0x100C3E50, 0x100C44E0],
}
RANGES = {
    'water-door-exports': (0x1008F580, 0x1008F5A5),
    'water-door-factory': (0x1008CE10, 0x1008CE6C),
    'blackwhite-register': (0x100E662B, 0x100E6649),
    'blackwhite-use': (0x100A5AF0, 0x100A5BA7),
    'blackwhite-resend': (0x100F77B7, 0x100F77EE),
    'fog-register': (0x100E60D9, 0x100E60F3),
    'rain-register': (0x100E6313, 0x100E6331),
    'rain-send': (0x100F81CC, 0x100F8275),
    'dynlight-spawn': (0x1009E3B0, 0x1009E43B),
    'dynlight-use': (0x100A8310, 0x100A8371),
    'sky-markers': (0x1009E860, 0x1009E8B8),
}


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--binary', type=Path, default=Path(
        'D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll'))
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--rea', action='store_true', help='Also decompile selected procedures through REA')
    args = parser.parse_args()
    args.output.mkdir(parents=True, exist_ok=False)
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    metadata = pe_metadata(data)
    def offset(address):
        for section in metadata['sections']:
            delta = address - int(metadata['image_base'], 16) - int(section['rva'], 16)
            if 0 <= delta < section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(f'Unmapped address {address:#x}')
    descriptor = struct.unpack_from('<4I', data, offset(0x1021B040))
    keyvalue = struct.unpack_from('<I', data, offset(0x101C451C) + 13 * 4)[0]
    (args.output / 'blackwhite-keyvalue.json').write_text(json.dumps({
        'sha256': digest, 'vtable': '0x101c451c', 'keyvalue': hex(keyvalue),
        'generic_entvars_descriptor': '0x1021b040',
        'descriptor_dwords': [hex(v) for v in descriptor],
        'string': data[offset(descriptor[1]):offset(descriptor[1])+7].decode('ascii'),
        'field_type': 'FIELD_INTEGER (10)', 'entvars_offset': '0x248', 'count': 1,
    }, indent=2) + '\n', encoding='utf-8')
    for name, (start, end) in RANGES.items():
        result = subprocess.run(['objdump', '-d', '-M', 'intel',
            f'--start-address={start:#x}', f'--stop-address={end:#x}', str(args.binary)],
            check=True, capture_output=True, text=True)
        (args.output / (name + '.asm')).write_text(result.stdout, encoding='utf-8')
    if args.rea:
        for group, addresses in PROCEDURES.items():
            output = args.output / group
            subprocess.run([sys.executable, str(ROOT / 'tools/rea_ghidra.py'),
                str(args.binary), *[f'ram:{address:#x}' for address in addresses],
                '--output', str(output)], check=True)
            # New REA versions return normalized_result as a string.
            for path in output.glob('*-procedure_pseudo_code.json'):
                result = json.loads(path.read_text(encoding='utf-8'))
                pseudo = result.get('structuredContent', {}).get('normalized_result')
                if isinstance(pseudo, str):
                    path.with_name(path.name.split('-')[0] + '-pseudocode.c').write_text(pseudo, encoding='utf-8')
    unchanged = hashlib.sha256(args.binary.read_bytes()).hexdigest() == digest
    (args.output / 'manifest.json').write_text(json.dumps({
        'target': str(args.binary.resolve()), 'sha256': digest,
        'target_executed': False, 'input_unchanged': unchanged,
        'ranges': {k: [hex(x) for x in v] for k, v in RANGES.items()},
        'procedures': {k: [hex(x) for x in v] for k, v in PROCEDURES.items()},
    }, indent=2) + '\n', encoding='utf-8')
    if not unchanged:
        raise RuntimeError('Original artifact changed during capture')
    print(args.output)


if __name__ == '__main__':
    main()
