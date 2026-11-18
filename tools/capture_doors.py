"""Capture bounded static evidence for CoF's single-player interactive doors.

REA establishes export addresses. Address-scoped GNU objdump is the fallback
because this installation has no configured native decompiler. Never loads DLLs.
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
from capture_abi import EXPECTED

EXPORT_EVIDENCE = 'ev_d4edd1dd254aef37e75f3bdfb0bc60500eefa5ad1fbfdde88f14ec4baf91ead0'
VIEW_EVIDENCE = 'ev_6f5fa4be13a4dc9575c46a6994af29f9295eedc576de3f94e16c7bd8002b6513'
RANGES = [
    ('factories', 0x10047eb0, 0x10048030),
    ('SetDisabled', 0x10048030, 0x10048040),
    ('EndGame', 0x10048040, 0x10048070),
    ('EndSequence', 0x10048070, 0x10048540),
    ('IsLocked', 0x10048540, 0x10048550),
    ('KeyValue', 0x10048550, 0x100488a0),
    ('ObjectCaps', 0x100488a0, 0x100488c0),
    ('Precache', 0x100488c0, 0x10048950),
    ('Restore', 0x10048950, 0x10048990),
    ('Save', 0x10048990, 0x100489f0),
    ('nearby_entity_helper', 0x100489f0, 0x10048ba0),
    ('ExitChangeSpawn', 0x10048ba0, 0x10048bd0),
    ('Spawn', 0x10048bd0, 0x10048c70),
    ('DisableSpawn', 0x10048c70, 0x10048cb0),
    ('StartSequence', 0x10048cb0, 0x10048e40),
    ('Unlock', 0x10048e40, 0x10048ef0),
    ('ExitChangeUse', 0x10048ef0, 0x10048f70),
    ('Use', 0x10048f70, 0x10049280),
    ('DisableUse', 0x10049280, 0x10049370),
    ('export_thunks', 0x10049370, 0x100493b0),
    ('ExitSpawn', 0x10102c40, 0x10102c50),
    ('think_delay_wrapper', 0x1000e1f0, 0x1000e210),
]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('binary', type=Path)
    parser.add_argument('--output', type=Path, default=Path('analysis/doors'))
    args = parser.parse_args()
    data = args.binary.read_bytes()
    digest = hashlib.sha256(data).hexdigest()
    if digest != EXPECTED:
        raise ValueError('Different hl.dll: resolve addresses for this build first')
    meta = pe_metadata(data)

    def offset(va, size=1):
        for section in meta['sections']:
            delta = va - int(meta['image_base'], 16) - int(section['rva'], 16)
            if 0 <= delta and delta + size <= section['raw_size']:
                return section['raw_offset'] + delta
        raise ValueError(f'Address not file-backed: {va:#x}')

    def string(va):
        start = offset(va)
        raw = data[start:start + 512].split(b'\0', 1)[0]
        return raw.decode('ascii')

    executable = shutil.which('objdump')
    if not executable:
        raise RuntimeError('GNU objdump required')
    args.output.mkdir(parents=True, exist_ok=True)
    captures, references = [], {}
    for name, start, end in RANGES:
        command = [executable, '-d', '-M', 'intel', f'--start-address={start:#x}',
                   f'--stop-address={end:#x}', str(args.binary.resolve())]
        result = subprocess.run(command, capture_output=True, text=True, check=True, timeout=15)
        (args.output / f'{name}.asm').write_text(result.stdout, encoding='utf-8')
        captures.append(dict(name=name, start=hex(start), end_exclusive=hex(end),
                             file_offset=offset(start, end-start),
                             bytes_sha256=hashlib.sha256(data[offset(start):offset(start)+end-start]).hexdigest(),
                             command=command, stderr=result.stderr))
        # Literal address candidates are not an instruction-aware xref analysis.
        for literal in re.findall(r'0x10[0-9a-f]{6}', result.stdout):
            va = int(literal, 16)
            if 0x101a0000 <= va < 0x10220000:
                try:
                    value = string(va)
                except (ValueError, UnicodeDecodeError):
                    continue
                if len(value) >= 3 and all(32 <= ord(c) < 127 or c in '\r\n' for c in value):
                    references[literal] = value
    save_fields = []
    for i in range(12):
        kind, name, displacement, count, flags = struct.unpack_from('<IIIhh', data, offset(0x10212480)+i*16)
        save_fields.append(dict(name=string(name), type_id=kind, offset=hex(displacement), count=count, flags=flags))
    vtables = {}
    for name, va in [('inter_door', 0x101b0ab8), ('inter_door_disable', 0x101b0e04),
                     ('inter_door_exit', 0x101a249c), ('cof_inter_door_exitchange', 0x101b0f24)]:
        vtables[name] = dict(preferred_va=hex(va),
                            slots=[hex(v) for v in struct.unpack_from('<70I', data, offset(va, 280))])
    entvars_fields = []
    for va in range(0x1021ac40, 0x1021b030, 16):
        kind, name, displacement, count, flags = struct.unpack_from('<IIIhh', data, offset(va, 16))
        entvars_fields.append(dict(record_va=hex(va), name=string(name), type_id=kind,
                                   offset=hex(displacement), count=count, flags=flags))
    if hashlib.sha256(args.binary.read_bytes()).hexdigest() != digest:
        raise RuntimeError('Target changed during capture')
    report = dict(binary_sha256=digest, image_base=meta['image_base'],
                  rea_export_evidence=EXPORT_EVIDENCE, rea_selected_exports=VIEW_EVIDENCE,
                  method='Static bounded GNU objdump and PE data reads; target not executed',
                  limitations=['Semantic function labels except exports are analyst inferences.',
                               'Ranges may include alignment padding; not whole-program function discovery.',
                               'Vtable slot meanings inferred from code; only first 70 slots sampled.',
                               'Literal string candidates are not complete cross-references.',
                               'No original runtime or behavioral-equivalence validation.'],
                  objdump_version=subprocess.check_output([executable, '--version'], text=True).splitlines()[0],
                  captures=captures, save_table_va='0x10212480', save_fields=save_fields,
                  vtables=vtables, entvars_field_table_excerpt=entvars_fields,
                  literal_ascii_candidates=references)
    (args.output / 'capture.json').write_text(json.dumps(report, indent=2) + '\n', encoding='utf-8')
    print(f'Captured {len(captures)} bounded code ranges, 4 vtable prefixes, 12 saved fields; SHA-256 verified')


if __name__ == '__main__':
    main()
