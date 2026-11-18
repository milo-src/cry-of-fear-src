"""Capture bounded objdump evidence for the first three recovered server exports.

The full REA objdump request timed out; REA's symbol lookup returned no body.
This address-scoped fallback uses export VAs established by REA. No DLL is run.
"""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import struct
import subprocess
from index_evidence import pe_metadata

EXPECTED = '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
RANGES = [('GetEntityAPI', 0x100183d0, 0x100183ff),
          ('GetEntityAPI2', 0x10018400, 0x10018437),
          ('GiveFnptrsToDll', 0x100b4aa0, 0x100b4ac2)]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/abi'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Different hl.dll build: resolve new export addresses before capture')
    executable = shutil.which('objdump')
    if not executable:
        raise RuntimeError('objdump is required')
    args.output.mkdir(parents=True, exist_ok=True)
    metadata = pe_metadata(data)

    def offset(va, length):
        rva = va - int(metadata['image_base'], 16)
        for section in metadata['sections']:
            delta = rva - int(section['rva'], 16)
            if 0 <= delta and delta + length <= section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(f'VA is not fully file-backed: {va:x}')

    captures = []
    for name, start, end in RANGES:
        command = [executable, '-d', '-M', 'intel', f'--start-address={start:#x}',
                   f'--stop-address={end:#x}', str(args.binary.resolve())]
        result = subprocess.run(command, check=True, capture_output=True, text=True, timeout=15)
        (args.output / f'{name}.asm').write_text(result.stdout, encoding='utf-8')
        pos = offset(start, end - start)
        captures.append(dict(name=name, start=hex(start), end_exclusive=hex(end),
                             file_offset=pos, bytes_hex=data[pos:pos + end - start].hex(),
                             command=command, stderr=result.stderr))
    table_va = 0x102119f8
    table = struct.unpack_from('<50I', data, offset(table_va, 200))
    if hashlib.sha256(args.binary.read_bytes()).hexdigest() != digest:
        raise RuntimeError('Binary changed during capture')
    report = dict(binary_sha256=digest, image_base=metadata['image_base'],
                  exports_evidence_id='ev_d4edd1dd254aef37e75f3bdfb0bc60500eefa5ad1fbfdde88f14ec4baf91ead0',
                  observation='static disassembly; target not executed',
                  objdump_version=subprocess.run([executable, '--version'], check=True,
                      capture_output=True, text=True).stdout.splitlines()[0],
                  captures=captures, callback_table_va=hex(table_va),
                  callback_slots=[dict(index=i, preferred_va=hex(value)) for i, value in enumerate(table)])
    (args.output / 'capture.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(f'Captured {len(captures)} function bodies and {len(table)} callback slots; target hash verified')


if __name__ == '__main__':
    main()
