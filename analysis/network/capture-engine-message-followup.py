"""Read-only bounded disassembly and PE data for engine message contracts."""
import hashlib
import json
from pathlib import Path
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/hw.dll')
blob = BINARY.read_bytes()
digest = hashlib.sha256(blob).hexdigest()
assert digest == '9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875'
pe = pe_metadata(blob)
base = int(pe['image_base'], 16)
out = ROOT / 'analysis/network/engine-message-followup-assembly'
out.mkdir(exist_ok=True)

def offset(va):
    for s in pe['sections']:
        delta = va - base - int(s['rva'], 16)
        if 0 <= delta < s['raw_size']:
            return s['raw_offset'] + delta
    raise ValueError(hex(va))

def raw(va, size):
    off = offset(va)
    assert offset(va + size - 1) == off + size - 1
    data = blob[off:off + size]
    return dict(va=f'0x{va:08x}', file_offset=hex(off), bytes_hex=data.hex(),
                sha256=hashlib.sha256(data).hexdigest())

def cstr(va):
    off = offset(va)
    return blob[off:blob.index(b'\0', off)].decode('ascii')

ranges = []
for start, end in [(0x1df2656,0x1df2767),(0x1d7d873,0x1d7d968),
                   (0x1d4aa99,0x1d4ac6a),(0x1da62cf,0x1da6395),
                   (0x1d46517,0x1d46596),(0x1de0e44,0x1de0f5a),
                   (0x1e712a6,0x1e7137a),(0x1e731bc,0x1e73235)]:
    cmd = ['objdump','-d','-Mintel',f'--start-address={hex(start)}',f'--stop-address={hex(end)}',str(BINARY)]
    result = subprocess.run(cmd, check=True, capture_output=True, text=True)
    path = out / f'{start:08x}.asm'
    path.write_text(result.stdout, encoding='utf-8', newline='\n')
    ranges.append(dict(start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',file=path.name,
                       sha256=hashlib.sha256(path.read_bytes()).hexdigest(),command=cmd,
                       coverage='bounded interval; may include adjacent code'))

# PE32 import directory: preserve the descriptor, thunk and name bytes used
# to distinguish termination imports from arbitrary function-pointer calls.
u32 = lambda off: struct.unpack_from('<I', blob, off)[0]
opt = u32(0x3c) + 24
assert struct.unpack_from('<H', blob, opt)[0] == 0x10b
directory = base + u32(opt + 104)
imports = []
wanted = {0x1e8b248,0x1e8b24c,0x1e8b294,0x1e8b38c,0x1e8b390,0x1e8b444}
for i in range(100):
    desc = directory + i * 20
    fields = struct.unpack_from('<5I', blob, offset(desc))
    if not any(fields): break
    original, _, _, name, first = fields
    for j in range(10000):
        thunk = base + (original or first) + j * 4
        value = u32(offset(thunk))
        if not value: break
        slot = base + first + j * 4
        if slot in wanted:
            assert not value & 0x80000000
            text = cstr(base + value + 2)
            imports.append(dict(iat_va=f'0x{slot:08x}',dll=cstr(base+name),name=text,
                evidence=[raw(desc,20),raw(thunk,4),raw(base+name,len(cstr(base+name))+1),raw(base+value,len(text)+3)]))
assert {int(x['iat_va'],16) for x in imports} == wanted
table = raw(0x1da6395,40)
table['destinations'] = [f'0x{x:08x}' for x in struct.unpack('<10I',bytes.fromhex(table['bytes_hex']))]
report = dict(binary=str(BINARY),sha256=digest,target_executed=False,ranges=ranges,
              raw=[table,raw(0x1ec9dd0,4)],imports=imports)
(out/'capture.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
assert hashlib.sha256(BINARY.read_bytes()).hexdigest() == digest
print(json.dumps(dict(ranges=len(ranges),imports=[(r['iat_va'],r['name']) for r in imports],raw=report['raw'])))
