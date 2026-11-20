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
assert 2*33*0x41c==0x10f38 and 33*0x41c==0x879c
assert raw(0x10029073,10)==bytes.fromhex('68380f01006a008d4604')
assert raw(0x100e4ee3,10)==bytes.fromhex('33c03945080f94c05dc2')
assert raw(0x1002a49a,3)==bytes.fromhex('c60100')
assert raw(0x1002a5f0,7)==bytes.fromhex('b907010000f3a5')
assert raw(0x1002a62e,8)==bytes.fromhex('f30f2c8064010000')
assert raw(0x1002a639,8)==bytes.fromhex('f30f2c87f0210000')
assert raw(0x101a8790,8)==b'weapon_\0'
assert raw(0x101a9ae4,14)==b'weapon_action\0'
assert raw(0x101a72fc,10)==b'classname\0'
assert [hex(x) for x in struct.unpack('<6I',raw(0x1002a464,24))]==e['weapon_slot_dispatch']==['0x1002a0d6','0x1002a165','0x1002a1f5','0x1002a285','0x1002a315','0x1002a3a5']
# Validate every unrolled output triple and both complete stats copies against native bytes.
for k,site in enumerate([0x1002a137,0x1002a1c7,0x1002a257,0x1002a2e7,0x1002a377,0x1002a433]):
 assert raw(site,6)==b'\x89\x81'+struct.pack('<I',0x234+12*k)
 assert raw(site+12,6)==b'\x89\x81'+struct.pack('<I',0x238+12*k)
 assert raw(site+34,6)==b'\x89\x81'+struct.pack('<I',0x23c+12*k)
for begin in [0x1002a4f6,0x1002a651]:
 for j in range(15):
  assert raw(begin+12*j,12)==b'\x8b\x87'+struct.pack('<I',0x63c+4*j)+b'\x89\x83'+struct.pack('<I',0x1dc+4*j)
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
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',len(notes),'cards')
