"""Reproduce bounded static key/inventory evidence; never executes the DLL.

REA export view establishes the factory/use entrypoints; Ghidra batch evidence
confirms the callees. GNU objdump preserves independently reviewable bytes.
"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import shutil
import struct
import subprocess
from capture_abi import EXPECTED
from index_evidence import pe_metadata

RANGES = [
    ('key_factory', 0x1004db90, 0x1004dbf0),
    ('key_descriptor_parser', 0x1004dbf0, 0x1004de60),
    ('key_keyvalue', 0x1004de60, 0x1004ded0),
    ('key_use', 0x1004ded0, 0x1004e030),
    ('key_caps_precache_save', 0x1004e030, 0x1004e120),
    ('key_spawn', 0x1004e160, 0x1004e350),
    ('sequence_bounds', 0x100180e0, 0x10018140),
    ('player_add_entity', 0x100e2f80, 0x100e3010),
    ('inventory_add', 0x100dad40, 0x100daf10),
    ('inventory_remove', 0x100dd990, 0x100dda70),
    ('inventory_message', 0x100e4360, 0x100e4410),
    ('inventory_use', 0x100e4410, 0x100e4bf0),
    ('inventory_use_command', 0x1001a9d5, 0x1001aa1a),
]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/inventory'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Different hl.dll build: establish addresses before using these ranges')
    meta = pe_metadata(data)

    def offset(va, length=1):
        for section in meta['sections']:
            delta = va - int(meta['image_base'], 16) - int(section['rva'], 16)
            if 0 <= delta and delta + length <= section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(f'Address not backed by bytes: {va:#x}')

    def cstring(va):
        start = offset(va)
        return data[start:start+512].split(b'\0', 1)[0]

    executable = shutil.which('objdump')
    if not executable:
        raise RuntimeError('GNU objdump required for byte capture')
    args.output.mkdir(parents=True, exist_ok=True)
    captures, literals = [], {}
    for name, begin, end in RANGES:
        command = [executable, '-d', '-M', 'intel', f'--start-address={begin:#x}',
                   f'--stop-address={end:#x}', str(args.binary.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, check=True, timeout=15)
        (args.output / f'{name}.asm').write_text(result.stdout, encoding='utf-8')
        captures.append(dict(name=name, preferred_va=hex(begin), end_exclusive=hex(end),
            command=command, stderr=result.stderr,
            code_sha256=hashlib.sha256(data[offset(begin, end-begin):offset(begin)+end-begin]).hexdigest()))
        for literal in set(re.findall(r'0x10[0-9a-f]{6}', result.stdout)):
            va = int(literal, 16)
            if 0x101a0000 <= va < 0x10220000:
                raw = cstring(va)
                if len(raw) >= 3 and all(32 <= c < 127 or c in (10, 13) for c in raw):
                    literals[literal] = raw.decode('ascii')
    kind, name, displacement, count, flags = struct.unpack_from('<IIIhh', data, offset(0x10212610, 16))
    ghidra_records = []
    for directory in ['ghidra-key-batch', 'ghidra-inventory-batch']:
        path = Path('analysis/local') / directory / 'evidence.json'
        if path.exists():
            bundle = json.loads(path.read_text(encoding='utf-8'))
            ghidra_records.extend(dict(evidence_id=r['evidence_id'], operation=r['operation'],
                parameters=r['parameters'], provider=r['provider']) for r in bundle['records'])
    report = dict(binary_sha256=digest, preferred_image_base=meta['image_base'],
        rea_exports='ev_8ce3c329fae8f9d48bd2f0effd44547f409623b269a2db308299cd1d6edcfaf4',
        ghidra_records=ghidra_records, captures=captures,
        save_field=dict(table_va='0x10212610', name=cstring(name).decode('ascii'),
                        type_id=kind, original_offset=hex(displacement), count=count, flags=flags),
        key_vtable=dict(preferred_va='0x101b1644',
            first_70_slots=[hex(v) for v in struct.unpack_from('<70I', data, offset(0x101b1644, 280))]),
        literal_ascii_candidates=dict(sorted(literals.items())),
        objdump_version=subprocess.check_output([executable, '--version'], text=True).splitlines()[0],
        limitations=['Static evidence only, no original DLL execution or behavioral equivalence test.',
                     'Inferred function names describe the analyzed subset, not original C++ identifiers.',
                     'Literal candidates are not a complete instruction-aware reference graph.',
                     'Port uses SDK layouts and a temporary UI, not original ABI or VGUI.'])
    if hashlib.sha256(args.binary.read_bytes()).hexdigest() != digest:
        raise RuntimeError('Binary changed during capture')
    (args.output / 'capture.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(f'Captured {len(captures)} ranges, {len(ghidra_records)} Ghidra records; original hash unchanged')


if __name__ == '__main__':
    main()
