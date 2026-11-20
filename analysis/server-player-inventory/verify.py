"""Independently verify original PE bytes, saved C, native descriptors and local contracts."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;O=OUT
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

# Return control flow, callback argument ownership and two independent slot queries.
assert raw(0x100db01e,8)==bytes.fromhex('5356ff9038010000')
assert raw(0x100dafcb,6)==bytes.fromhex('ff9080010000')
assert raw(0x100dafe2,6)==bytes.fromhex('ff9080010000')
assert raw(0x100dafda,6)==bytes.fromhex('898764010000')
assert raw(0x100dafe8,7)==bytes.fromhex('89bc8314250000')
assert raw(0x100db00e,5)==bytes.fromhex('b801000000')
assert raw(0x100db07d,2)==bytes.fromhex('33c0')
for a in [0x100db017,0x100db083,0x100e2489,0x100e2495]:assert raw(a,3)==bytes.fromhex('c20400')
for a in [0x100dad60,0x100dad9a,0x100dadba,0x100daeff,0x100e4406]:assert raw(a,3)==bytes.fromhex('c20c00')
for a in [0x100e05d0,0x100e08a5]:assert raw(a,3)==bytes.fromhex('c21000')
assert raw(0x100e05bd,3)==bytes.fromhex('83c8ff')
assert raw(0x100e05f8,2)==bytes.fromhex('7cc6')
assert 0x100e05fa+struct.unpack('<b',raw(0x100e05f9,1))[0]==0x100e05c0
assert raw(0x100e05e5,2)==bytes.fromhex('77d6')
assert raw(0x100e05f1,4)==bytes.fromhex('0f4c7508')
assert raw(0x1013dbb3,11)==bytes.fromhex('3b0df4ba2110f27502f2c3')
assert raw(0x100e0892,6)==bytes.fromhex('8b8578ffffff')
assert raw(0x100e050c,9)==bytes.fromhex('565753ff90a8000000')
assert raw(0x100e0604,6)==bytes.fromhex('81ffe0911b10') # pointer comparison
assert raw(0x100e067d,6)==bytes.fromhex('81ffd8721b10')
assert raw(0x100e0782,5)==bytes.fromhex('b906000000')
assert raw(0x100e083b,6)==bytes.fromhex('8b80dc010000')
assert raw(0x100e07b0,7)==bytes.fromhex('6b86680100002c')
assert raw(0x100dadc5,7)==bytes.fromhex('6a076890871a10')
assert raw(0x100dae08,7)==bytes.fromhex('89bcb3fc210000')
assert raw(0x100daec7,2)==bytes.fromhex('6a02')
assert raw(0x100e4372,3)==bytes.fromhex('0f95c3') # bool, not raw flag byte
assert raw(0x100e43da,2)==bytes.fromhex('84c0') # low-byte query
# No second incoming argument read in either complete 100dad40 range.
atxt=(O/'100dad40.asm').read_text()+(O/'100dad40-1.asm').read_text()
assert '[ebp+0xc]' not in atxt
assert raw(0x1016f680,2)==bytes.fromhex('5356') and raw(0x1016f6f0,8)==bytes.fromhex('1bc083c8015e5bc3')
assert raw(0x1016f6a0,6)==bytes.fromhex('0fb604113a02')
v=lambda a,o:struct.unpack('<I',raw(a+o,4))[0]
assert [v(0x101a4da8,o)for o in [0x8c,0x94]]==[0x100daf10,0x100e04d0]
assert v(0x101de3b0,0xa8)==v(0x101d608c,0xa8)==0x100af520
assert raw(0x10012628,6)==bytes.fromhex('c700a84d1a10')
assert raw(0x100b4aa6,5)==bytes.fromhex('b990000000')
assert raw(0x100b4ab0,7)==bytes.fromhex('bf482f2210f3a5')
for r in e['literals']:
 if 'decoded_cp1251'in r:assert r['decoded_cp1251'].encode('cp1251')+b'\0'==bytes.fromhex(r['bytes_hex'])
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
for r in e['api_slots']:assert names[r['slot']]==r['name'] and va(r['native_global'])==0x10222f48+4*r['slot']
# Decode each registration's nearby PUSH size/PUSH string, indirect API call and store.
registration=(O/'100e5fc0.asm').read_text(encoding='utf8').splitlines()
for r in e['message_registrations']:
 at=va(r['store_instruction']);g=va(r['id_global'])
 assert raw(at,1)==b'\xa3' and struct.unpack('<I',raw(at+1,4))[0]==g
 k=next(i for i,l in enumerate(registration)if l.startswith(f'{at:08x}:'))
 prev='\n'.join(registration[max(0,k-12):k])
 pushes=list(re.finditer(r'push\s+(0x[0-9a-f]+)',prev)); matched=False
 for i in range(len(pushes)-1):
  sz=int(pushes[i][1],16);ptr=int(pushes[i+1][1],16)
  if sz==(r['size']&0xffffffff):
   try: matched |= raw(ptr,len(r['name'])+1)==r['name'].encode()+b'\0'
   except AssertionError:pass
 assert matched,(r,prev)
 assert 'ds:0x10223074' in prev
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions']
updates=json.loads((O/'notes-updated.json').read_text(encoding='utf8'))['functions']
contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==3 and {n['address']for n in notes}=={r['address']for r in e['source_c']if r['role']=='primary'}
assert [n['address']for n in updates]==['0x100dad40']
for n in notes+updates:
 assert n['module']=='server' and n['confidence']=='high' and n['subsystem']=='inventory'
 assert n['summary_ru']in contract and all(d in contract for d in n['details_ru'])
 for path in n['evidence_paths']:assert (ROOT/path).is_file(),path
assert {'decompiled/server/captures/ghidra-key-batch/003-pseudocode.c','decompiled/server/partial-pass/functions/0x100dad40.c','analysis/inventory/behavior.md'}<=set(updates[0]['evidence_paths'])
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(notes),'new +',len(updates),'updated;',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',rawcount,'raw; ABI/return/network/155descriptors assertions')
