"""Retain bounded, byte-checked static server callback evidence; never execute DLL."""
import hashlib
import json
import re
import struct
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
blob = BINARY.read_bytes()
digest = hashlib.sha256(blob).hexdigest()
assert digest == '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
pe = pe_metadata(blob)


def raw(va, size):
    for section in pe['sections']:
        delta = va - int(pe['image_base'], 16) - int(section['rva'], 16)
        if 0 <= delta and delta + size <= section['raw_size']:
            offset = section['raw_offset'] + delta
            return blob[offset:offset + size]
    raise ValueError((hex(va), size))


addresses = '10016ab0 10017030 100170a0 10116080 10116570 1011a6c0 1011a760'.split()
support = '10116020 10117010 1011adc0'.split()
ranges = []
sources = []
jobs = []
for address in addresses + support:
    path = ROOT / f'decompiled/server/partial-pass/functions/0x{address}.c'
    text = path.read_text(encoding='utf-8')
    lo, hi = (int(x, 16) for x in re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+)', text).groups())
    sources.append(dict(path=path.relative_to(ROOT).as_posix(), sha256=hashlib.sha256(path.read_bytes()).hexdigest()))
    jobs.append((lo, hi + 1))


for start, end in jobs:
    path = OUT / f'{start:08x}.asm'
    command = ['objdump', '-d', '-M', 'intel', f'--start-address={start:#x}',
               f'--stop-address={end:#x}', str(BINARY)]
    result = subprocess.run(command, capture_output=True, check=True)
    count = 0
    for line in result.stdout.decode().splitlines():
        match = re.match(r'\s*([0-9a-f]{8}):\s+((?:[0-9a-f]{2}(?:\s+|$))+)', line)
        if match:
            data = bytes.fromhex(match[2])
            assert raw(int(match[1], 16), len(data)) == data
            count += len(data)
    assert count == end - start
    assert b'.byte' not in result.stdout and b'(bad)' not in result.stdout
    path.write_bytes(result.stdout)
    ranges.append(dict(path=path.relative_to(ROOT).as_posix(), start=hex(start),
                       end_exclusive=hex(end), sha256=hashlib.sha256(result.stdout).hexdigest(),
                       binary_range_sha256=hashlib.sha256(raw(start, end-start)).hexdigest(),
                       bytes_verified=True, command=command))

header = ROOT / 'external/hlsdk-portable/engine/eiface.h'
header_text = header.read_text(encoding='utf-8')
table_text = header_text.split('// Initialize/shutdown the game', 1)[1].split('} DLL_FUNCTIONS;', 1)[0]
names = re.findall(r'\(\*(pfn\w+)\s*\)', table_text)
assert len(names) == 50
base = 0x102119f8
table = raw(base, 200)
slots = [dict(index=i, name=name, slot_va=hex(base+4*i), target=hex(struct.unpack_from('<I', table, 4*i)[0])) for i, name in enumerate(names)]
literals = [dict(address=hex(base), bytes_hex=table.hex(), purpose='DLL_FUNCTIONS table: 50 DWORDs')]
for address,size,purpose in [(0x10116670,20,'KeyValue branch pointers'),(0x10116684,18,'KeyValue type-to-branch byte map')]:
    literals.append(dict(address=hex(address),bytes_hex=raw(address,size).hex(),purpose=purpose))
for address in [0x101a60b4,0x101a60d8,0x101a60e4,0x101a6158,0x101e5950]:
    value=raw(address,128).split(b'\0')[0]+b'\0'
    literals.append(dict(address=hex(address),bytes_hex=value.hex(),ascii=value[:-1].decode('ascii')))
for relative in ['decompiled/server/partial-pass/functions/0x1013f5f0.c']:
    sources.append(dict(path=relative,sha256=hashlib.sha256((ROOT/relative).read_bytes()).hexdigest()))

evidence = dict(module='server', binary=str(BINARY), sha256=digest,
                target_executed=False, ranges=ranges, source_c=sources, literals=literals,
                callback_binding=dict(header=header.relative_to(ROOT).as_posix(),
                    header_sha256=hashlib.sha256(header.read_bytes()).hexdigest(), table_base=hex(base), slots=slots),
                limitations=['SDK names annotate a byte-verified native slot layout; engine invocation order is not observed.',
                             'Save-dispatch and keyvalue behavior; save container lifecycle remains separate.'])
(OUT / 'evidence.json').write_text(json.dumps(evidence, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
print(json.dumps(dict(asm_ranges=len(ranges), source_files=len(sources), callback_slots=len(slots), target_executed=False)))
