"""Capture bounded static handle evidence from the hash-pinned original server PE."""
import hashlib
import json
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

OUT = Path(__file__).resolve().parent
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


ranges = []
for start, end in [(0x10017740, 0x100177b0), (0x10017ba0, 0x10017bb1),
                   (0x1008f2f0, 0x1008f304), (0x10101ee0, 0x10101f10)]:
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
    path.write_bytes(result.stdout)
    ranges.append(dict(path=path.relative_to(ROOT).as_posix(), start=hex(start),
                       end_exclusive=hex(end), sha256=hashlib.sha256(result.stdout).hexdigest(),
                       binary_range_sha256=hashlib.sha256(raw(start, end-start)).hexdigest(),
                       bytes_verified=True, command=command))

sources = []
for address in [0x10017740, 0x10017780, 0x10017790, 0x100177a0, 0x10017ba0,
                0x1008f2f0, 0x10101ee0, 0x100145b0, 0x100165a0]:
    path = ROOT / f'decompiled/server/partial-pass/functions/{address:#x}.c'
    sources.append(dict(path=path.relative_to(ROOT).as_posix(),
                        sha256=hashlib.sha256(path.read_bytes()).hexdigest()))
evidence = dict(module='server', binary=str(BINARY), sha256=digest,
                target_executed=False, ranges=ranges, source_c=sources,
                limitations=['Names describe static behavior; original C++ operator spelling is not proven.',
                             'Raw serial validation does not establish the engine lifetime/reuse policy.'])
(OUT / 'evidence.json').write_text(json.dumps(evidence, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
assert hashlib.sha256(BINARY.read_bytes()).hexdigest() == digest
print(json.dumps(dict(asm_ranges=len(ranges), source_files=len(sources), target_executed=False)))
