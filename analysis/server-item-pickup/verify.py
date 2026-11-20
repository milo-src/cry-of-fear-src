"""Independently verify original PE bytes, saved C, native descriptors and local contracts."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
e=json.loads((OUT/'evidence.json').read_text(encoding='utf-8'))
b=Path(e['binary']).read_bytes();sha=lambda x:hashlib.sha256(x).hexdigest();va=lambda x:int(x,16)
assert sha(b)==e['sha256'] and not e['target_executed']
p=struct.unpack_from('<I',b,60)[0];n=struct.unpack_from('<H',b,p+6)[0];op=p+24
base=struct.unpack_from('<I',b,op+28)[0];ss=op+struct.unpack_from('<H',b,p+20)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,ss+40*i)for i in range(n)]
def raw(a,n):
 for s in sections:
  d=a-base-s[2]
  if 0<=d and d+n<=s[3]:return b[s[4]+d:s[4]+d+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['supporting_sources']:
 assert sha((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 a,end=va(r['start']),va(r['end_exclusive']);pos=a
 assert sha(raw(a,end-a))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text(encoding='utf-8').splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=va(m[1]);v=bytes.fromhex(m[2]);assert at==pos and raw(at,len(v))==v;pos+=len(v);rows+=1
 assert pos==end
rawcount=0
def check(x):
 global rawcount
 if isinstance(x,dict):
  if 'bytes_hex'in x:
   v=bytes.fromhex(x['bytes_hex']);a=va(x['address']);o=va(x['file_offset'])
   assert raw(a,len(v))==v and b[o:o+len(v)]==v and sha(v)==x['sha256'] and a+len(v)==va(x['end_exclusive'])
   if 'ascii'in x:assert x['ascii'].encode('ascii')+b'\0'==v
   rawcount+=1
  for c in x.values():check(c)
 elif isinstance(x,list):
  for c in x:check(c)
check(e)
for t in e['save_tables']:
 for i,f in enumerate(t['fields']):
  kind,name,off,count,flags=struct.unpack('<IIIhh',raw(va(t['address'])+16*i,16))
  assert (kind,off,count,flags)==(f['type_id'],va(f['offset']),f['count'],f['flags'])
  assert raw(name,len(f['name'])+1)==f['name'].encode('ascii')+b'\0'
for t in e['vtables']:
 for f in t['slots']:assert struct.unpack('<I',raw(va(t['address'])+va(f['offset']),4))[0]==va(f['target'])

# Exact native callback and argument ownership, independent of Ghidra prototypes.
assert raw(0x1011b62e,3)==b'\xc2\x08\0'
assert raw(0x1011b624,6)==bytes.fromhex('ff9284010000')
assert raw(0x100db01e,8)==bytes.fromhex('5356ff9038010000')
assert raw(0x1011d08a,2)==bytes.fromhex('8bcb')
assert raw(0x1011d0bd,2)==bytes.fromhex('8bcb')
assert raw(0x1011d099,10)==bytes.fromhex('c787f401000000000000')
assert raw(0x1011e6a7,6)==bytes.fromhex('898308010000') # EBX source caps
assert raw(0x1011e6ad,7)==bytes.fromhex('c7477c00000000') # EDI new touch
assert raw(0x1011e6bb,3)==bytes.fromhex('8b4304') # source pev -> floor
assert raw(0x1011e6bf,12)==bytes.fromhex('ffb00c020000ff15b02f2210')
assert raw(0x1011e6e2,8)==bytes.fromhex('8bcfd91c24ff5610') # EDI new absolute scheduler
assert raw(0x1011b77a,9)==bytes.fromhex('33c085ff5f5e0f9fc0')
assert raw(0x1011b82f,8)==bytes.fromhex('33c085f65f0f9fc0')
assert raw(0x1011c95d,6)==bytes.fromhex('8b0de42e2210')
assert raw(0x1011ca0f,10)==bytes.fromhex('c7865402000000000000')
assert raw(0x1011cc42,13)==bytes.fromhex('89b48744040000ff8754060000')
assert raw(0x1011cce0,3)==b'\xc2\x04\0'
assert raw(0x1011d0ce,3)==b'\xc2\x04\0'
assert raw(0x1011b785,3)==b'\xc2\x10\0'
assert raw(0x1011b839,3)==b'\xc2\x0c\0'
assert raw(0x100e2408,3)==b'\xc2\x04\0'
assert raw(0x100fc69e,3)==b'\xc2\x08\0'
assert raw(0x100ca56e,3)==b'\xc2\x08\0'
assert raw(0x100fc2b6,3)==b'\xc2\x04\0'
assert struct.unpack('<f',raw(0x101a9734,4))[0]==666.0
assert struct.unpack('<f',raw(0x101a1390,4))[0]==1.0
assert struct.unpack('<f',raw(0x101a13d0,4))[0]==-1.0
assert struct.unpack('<f',raw(0x101a1eec,4))[0]==20.0
v=lambda a,o:struct.unpack('<I',raw(a+o,4))[0]
assert [v(0x101a7804,o)for o in [8,12,16,0x138,0x15c,0x184]]==[0x1011f680,0x100171b0,0x1000d3b0,0x1011b530,0x1011cf10,0x1011d030]
assert [v(0x101a4da8,o)for o in [0x8c,0x94,0xd0]]==[0x100daf10,0x100e04d0,0x100135b0]
assert raw(0x10012628,6)==bytes.fromhex('c700a84d1a10')
assert raw(0x100b4aa6,5)==bytes.fromhex('b990000000')
assert raw(0x100b4ab0,7)==bytes.fromhex('bf482f2210f3a5')
assert sum(t['count']for t in e['save_tables'])==155
for r in e['literals']:
 if 'decoded_cp1251'in r:assert r['decoded_cp1251'].encode('cp1251')+b'\0'==bytes.fromhex(r['bytes_hex'])
# UCOMISS flag extraction: native TEST AH,44 parity separates ordered equal
# from unequal/unordered; exact branch opcodes above/below qualify the claims.
for a,op in [(0x1011b6c3,0x7a),(0x1011b74d,0x7b),(0x1011b802,0x7b),(0x1011cc92,0x7b)]:assert raw(a,1)==bytes([op])
for equal,unordered,ah in [(True,False,0x42),(False,False,0x02),(False,True,0x47)]:
 even=((ah&0x44).bit_count()%2)==0
 assert (not even)==(equal and not unordered)
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
for r in e['api_slots']:assert names[r['slot']]==r['name'] and va(r['native_global'])==0x10222f48+4*r['slot']
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions'];contract=(OUT/'contract.md').read_text(encoding='utf8')
assert len(notes)==9 and {n['address']for n in notes}=={r['address']for r in e['source_c']if r['role']=='primary'}
for n in notes:
 assert n['module']=='server' and n['confidence']=='high' and n['subsystem']in ('weapons','inventory')
 assert n['summary_ru']in contract and all(d in contract for d in n['details_ru'])
 for path in n['evidence_paths']:assert (ROOT/path).is_file(),path
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(notes),'cards',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',rawcount,'raw; ABI/owner/FP/155descriptors assertions')
