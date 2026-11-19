"""Hash-pinned, bounded static evidence for the CoF movement investigation.

Reads PE sections and objdump only; never loads or executes the game DLL.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess

from capture_abi import EXPECTED
from index_evidence import pe_metadata

RANGES = [
    ('PM_CheckParameters', 0x10004170, 0x100044b0),
    ('PM_Jump', 0x10006520, 0x10006930),
    ('PM_Move', 0x10006f30, 0x10006f90),
    ('PM_PlayerMove', 0x10008a00, 0x10008e48),
    ('PM_WalkMove', 0x10009e50, 0x1000a590),
]
STRINGS = [0x101a1470, 0x101a1d3c, 0x101a1d74, 0x101a1d78, 0x101a1d94]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/movement/physics-evidence'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Different hl.dll build: resolve addresses again')
    meta = pe_metadata(data)

    def offset(va, size):
        for section in meta['sections']:
            delta = va - int(meta['image_base'], 16) - int(section['rva'], 16)
            if 0 <= delta and delta + size <= section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(f'Not file backed: {va:#x}, {size}')

    objdump = shutil.which('objdump')
    if not objdump:
        raise RuntimeError('objdump required')
    args.output.mkdir(parents=True, exist_ok=True)
    observations = []
    for name, start, end in RANGES:
        command = [objdump, '-d', '-M', 'intel', f'--start-address={start:#x}',
                   f'--stop-address={end:#x}', str(args.binary.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, check=True, timeout=30)
        output = args.output / f'{name}.asm'
        output.write_text(result.stdout, encoding='utf-8')
        pos = offset(start, end - start)
        observations.append(dict(name=name, start=hex(start), end_exclusive=hex(end),
                                 file_offset=pos, bytes_hex=data[pos:pos + end - start].hex(),
                                 assembly_file=output.name, assembly_sha256=hashlib.sha256(output.read_bytes()).hexdigest(),
                                 command=command))
    strings = []
    for va in STRINGS:
        pos = offset(va, 128)
        value = data[pos:pos + 128].split(b'\0', 1)[0]
        if len(value) == 128:
            raise ValueError('Unterminated bounded string')
        strings.append(dict(va=hex(va), file_offset=pos, bytes_hex=(value + b'\0').hex(),
                            text=value.decode('ascii')))
    table_va = 0x102119f8
    table = struct.unpack_from('<50I', data, offset(table_va, 200))
    if hashlib.sha256(args.binary.read_bytes()).hexdigest() != digest:
        raise RuntimeError('Original binary changed during capture')
    report = dict(binary_sha256=digest, image_base=meta['image_base'],
                  evidence_type='bounded static PE read and disassembly; game never executed',
                  objdump_version=subprocess.run([objdump, '--version'], capture_output=True,
                      text=True, check=True).stdout.splitlines()[0],
                  ranges=observations, strings=strings,
                  entity_api_table_va=hex(table_va),
                  entity_api_slots=[dict(index=i, va=hex(v)) for i, v in enumerate(table)])
    (args.output / 'capture.json').write_text(json.dumps(report, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(f'Captured {len(observations)} ranges and {len(strings)} strings; original hash verified')


if __name__ == '__main__':
    main()
