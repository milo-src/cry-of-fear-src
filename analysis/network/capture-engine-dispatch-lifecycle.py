"""Static byte-verified slices of the retained original hw.dll disassembly."""
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT/'tools'))
from index_evidence import pe_metadata

BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/hw.dll')
blob = BINARY.read_bytes()
digest = hashlib.sha256(blob).hexdigest()
assert digest == '9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875'
pe = pe_metadata(blob)
source = ROOT/'analysis/local/queue-engine-text.asm'
lines = source.read_text(encoding='utf-8-sig').splitlines()
out = ROOT/'analysis/network/engine-dispatch-lifecycle-assembly'
out.mkdir(exist_ok=True)

def raw(va, n):
    for s in pe['sections']:
        delta = va-int(pe['image_base'],16)-int(s['rva'],16)
        if 0 <= delta and delta+n <= s['raw_size']:
            off = s['raw_offset']+delta
            return blob[off:off+n]
    raise ValueError(hex(va))

ranges = []
for start,end in [(0x1d4676f,0x1d467b7),(0x1d46622,0x1d4666a),
                  (0x1d8cf91,0x1d8cfbd),(0x1dd80af,0x1dd8163),
                  (0x1d816e0,0x1d818c8),(0x1dde46f,0x1dde78a),
                  (0x1de007a,0x1de04a3),(0x1d7f2cc,0x1d7f45e),
                  (0x1dd6a43,0x1dd6c35),(0x1e73274,0x1e732ef),
                  (0x1dd696a,0x1dd6a43),(0x1ddd3c7,0x1ddd405),
                  (0x1d470eb,0x1d47141),(0x1dd8163,0x1dd84e4),
                  (0x1d45b16,0x1d45b3d),(0x1d45b3d,0x1d45b64)]:
    selected = []
    checked = 0
    for line in lines:
        m = re.match(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}(?:\s+|$))+)',line)
        if m and start <= int(m[1],16) < end:
            data = bytes.fromhex(m[2])
            assert raw(int(m[1],16),len(data)) == data
            selected.append(line)
            checked += len(data)
    path=out/f'{start:08x}.asm'
    path.write_text('\n'.join(selected)+'\n',encoding='utf-8')
    ranges.append(dict(start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',file=path.name,
        sha256=hashlib.sha256(path.read_bytes()).hexdigest(),byte_count_checked=checked,
        binary_range_sha256=hashlib.sha256(raw(start,end-start)).hexdigest(),
        coverage='bounded interval; function boundaries established separately from C'))

observations=[]
for line in lines:
    if re.search(r'0x24988a[8c]\b|0x27fc1a0\b',line):
        m=re.match(r'\s*([0-9a-f]+):\s+((?:[0-9a-f]{2}(?:\s+|$))+)',line)
        if m:
            data=bytes.fromhex(m[2]);assert raw(int(m[1],16),len(data))==data
            observations.append(dict(va='0x'+m[1].zfill(8),line=line))
report=dict(binary=str(BINARY),binary_sha256=digest,target_executed=False,
    source_listing=source.relative_to(ROOT).as_posix(),source_listing_sha256=hashlib.sha256(source.read_bytes()).hexdigest(),
    ranges=ranges,literal_global_operand_observations=observations,
    limitations=['Literal operand matches in objdump listing are not a complete native xref graph; indirect aliases may be absent.',
                 'No original process execution or network delivery observation.'])
(out/'capture.json').write_text(json.dumps(report,indent=2)+'\n',encoding='utf-8')
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==digest
print(json.dumps(dict(ranges=len(ranges),literal_observations=len(observations))))
