"""Read-only verification of pinned C/ASM/raw evidence; no target execution."""
from pathlib import Path
import hashlib,json,re,struct,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes()
h=lambda x:hashlib.sha256(x).hexdigest()
assert h(b)==e['sha256'];pe=pe_metadata(b);base=int(pe['image_base'],16)
def raw(a,n):
 for s in pe['sections']:
  d=a-base-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
lines=0
for r in e['ranges']:
 start=int(r['start'],16);end=int(r['end_exclusive'],16);pos=start
 assert h(raw(start,end-start))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   a=int(m[1],16);v=bytes.fromhex(m[2]);assert a==pos and raw(a,len(v))==v;pos+=len(v);lines+=1
 assert pos==end
for r in e['raw']:
 v=bytes.fromhex(r['bytes_hex']);assert raw(int(r['address'],16),len(v))==v and h(v)==r['sha256'];assert b[int(r['file_offset'],16):int(r['file_offset'],16)+len(v)]==v
header=(ROOT/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:
 assert names[r['slot']]==r['name'] and int(r['address'],16)==int(e['api_binding']['base'],16)+4*r['slot']
tokens=e['tokens'];assert len(tokens)==34 and len(e['selection_paths'])==128
by_mask={r['mask']:r for r in tokens if 'mask' in r};assert len(by_mask)==32
for r in tokens:
 for kind in ['false','true']:
  literal=r[kind+'_token'].encode('latin1')
  assert raw(int(r[kind+'_address'],16),len(literal)+1)==literal+b'\0'
  assert raw(int(r['writer_'+kind+'_address'],16),len(literal)+2)==literal+b'\n\0'
for r in e['selection_paths']:
 assert r['ordinal_decimal']==by_mask[r['mask']]['ordinal_decimal']
 asm=(OUT/(r['function'][2:]+'-0.asm')).read_text()
 for pc in r['instruction_addresses']:assert pc[2:]+':' in asm
assert {r['iat']:r['name']for r in e['file_imports']}=={'0x101a1160':'DeleteFileW','0x101a1164':'MoveFileExW','0x101a10d0':'GetLastError'}
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions']
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary'])
for n in notes:
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',len(notes),'cards')

# Independent peer verifier replays only decoded selector/data-flow operations.
import subprocess
subprocess.run([sys.executable, "-X", "utf8", str(OUT/"verify_paths.py")], cwd=ROOT, check=True)
