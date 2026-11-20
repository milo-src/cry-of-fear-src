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
for r in e['source_c']+e['ranges']+e['support_documents']+e['caller_search']+[e['index']]:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
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
for table in e['vtables']:
 for r in table['slots']:
  assert int(r['target'],16)==struct.unpack('<I',raw(int(table['address'],16)+int(r['offset'],16),4))[0]
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  t,nm,off,c,fl=struct.unpack('<IIIhh',raw(int(table['address'],16)+i*16,16))
  assert (t,off,c,fl)==(r['type_id'],int(r['offset'],16),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions']
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary'])
for n in notes:
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
contract=(OUT/'contract.md').read_text(encoding='utf-8')
for n in notes:
 assert n['address'] in contract and n['summary_ru'] in contract
 assert all(x in contract for x in n['details_ru'])
assert not e['target_executed']
# ABI and ordering properties are checked against exact native bytes, not a rewritten implementation.
for a,x in [(0x100f0f52,'c20400'),(0x100e251c,'32c0'),(0x100e2525,'b001'),(0x100e2522,'c3'),(0x100f14bb,'c3'),(0x100f1458,'f6c444'),(0x100f145b,'7a11'),(0x100f146c,'7b3f'),(0x100f0e7b,'83fe20'),(0x100e2515,'83fb06')]:
 assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),(hex(a),raw(a,len(bytes.fromhex(x))).hex())
assert struct.unpack('<I',raw(0x101a7804+0x15c,4))[0]==0x1011cf10
assert struct.unpack('<I',raw(0x101a4da8+0x258,4))[0]==0x100f6ca0
assert raw(0x101b06fc,13)==b'weapon_glock\0'
assert raw(0x101daad0,10)==b'CurWeapon\0' and raw(0x101daf1c,11)==b'QSlotClear\0'
api=e['api_binding'];names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/api['header']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in api['slots']:assert names[r['slot']]==r['name']and int(r['address'],16)==int(api['base'],16)+4*r['slot']
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',len(notes),'cards')
