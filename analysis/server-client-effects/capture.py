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


addresses = '10119320 1011a800 10119680 10119c00 10119de0 10119810 1011a7e0 1011ab20 10119cc0 10119d40 101166d0 101198a0 10119f60'.split()
support = '100e5fc0 100941f0 100b4aa0 1000db70'.split()
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
table_text=header.read_text(encoding='utf-8').split('typedef struct enginefuncs_s',1)[1].split('} enginefuncs_t',1)[0]
names=re.findall(r'\(\*\s*(pfn\w+)\s*\)',table_text)
base=0x10222f48
selected=[0x10222f94,0x10222fc4,0x10222fd0,0x10223068,0x10223000,0x10223004,0x10223008,0x10223010,0x10223020,0x102230b4,0x10223074]
slots=[dict(index=(a-base)//4,address=hex(a),sdk_name=names[(a-base)//4]) for a in selected]
evidence=dict(module='server',binary=str(BINARY),sha256=digest,target_executed=False,source_c=sources,ranges=ranges,literals=[],
 api_binding=dict(header=header.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(header.read_bytes()).hexdigest(),base=hex(base),slots=slots),
 limitations=['Engine callback names derive from previously verified table-copy ABI; engine implementation is outside this packet.'])
for rel in ['external/hlsdk-portable/common/const.h','external/hlsdk-portable/engine/progdefs.h','decompiled/client/captures/graphics-client-first/005-pseudocode.c']:
 sources.append(dict(path=rel,sha256=hashlib.sha256((ROOT/rel).read_bytes()).hexdigest()))
registration=(OUT/'100e5fc0.asm').read_text(encoding='utf-8')
for a in re.findall(r'push\s+(0x[0-9a-f]+)',registration):
 v=int(a,16)
 if 0x101a0000<=v<0x10211000:
  b=raw(v,64).split(b'\0')[0]
  if b in [b'ScreenFade',b'ScreenShake',b'ProFont']:
   evidence['literals'].append(dict(address=a,bytes_hex=(b+b'\0').hex(),ascii=b.decode('ascii')))
assert len(evidence['literals'])==3
evidence['api_binding']['initializer']='0x100b4aa0'
evidence['api_binding']['copied_dwords']=144
(OUT/'evidence.json').write_text(json.dumps(evidence,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print(json.dumps(dict(asm_ranges=len(ranges),sources=len(sources),slots=slots)))
