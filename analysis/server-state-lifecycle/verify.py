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
 col=struct.unpack('<I',raw(va(t['address'])-4,4))[0];vals=struct.unpack('<5I',raw(col,20));assert vals[0]==0
 assert raw(vals[3]+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
for a,target in [(0x101b1300,0x1004c100),(0x101c85e4,0x100a1f70),(0x101c9e48,0x100a4500)]:assert struct.unpack('<I',raw(a+0xe8,4))[0]==target
assert struct.unpack('<I',raw(0x102119f8+16*4,4))[0]==0x1001cc90
assert raw(0x100183e5,12)==bytes.fromhex('b932000000bef8192110f3a5')
for r in e['explicit_literals']:assert r['decoded_cp1251'].encode('cp1251')+b'\0'==bytes.fromhex(r['bytes_hex'])
erv=struct.unpack_from('<I',b,op+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for f in e['exports']:
 i=f['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];ix=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];entry=base+struct.unpack('<I',raw(base+ex[8]+4*ix,4))[0]
 assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0' and ex[5]+ix==f['ordinal'] and entry==va(f['entry'])
for at,target in [(0x100aa170,0x1008f7a0),(0x100aa420,0x1008ff20),(0x1004db30,0x100496b0)]:
 assert raw(at,1)==b'\xe9' and at+5+struct.unpack('<i',raw(at+1,4))[0]==target
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
for f in e['api_slots']:assert names[f['slot']]==f['name'] and va(f['address'])==0x10222f48+4*f['slot']
for a in [0x1004c1de,0x1004c205,0x1004c359,0x100a2004,0x100a4577]:assert raw(a,3)==bytes.fromhex('c21000')
assert raw(0x1001cee3,1)==b'\xc3' and raw(0x100e9e46,1)==b'\xc3'
assert raw(0x100a4558,4)==bytes.fromhex('6a035650') # UseSet/caller/activator
assert raw(0x100a4551,7)==bytes.fromhex('c7042400000000') # value float0
assert raw(0x1001cd21,2)==bytes.fromhex('7410') and raw(0x1001cdab,6)==bytes.fromhex('81fe80830000')
assert 32*0x41c==0x8380
assert raw(0x1001cd70,4)==bytes.fromhex('394c160c') # pointer equality
assert raw(0x100e9ca2,7)==bytes.fromhex('c686281f000001') # latch before capture
assert raw(0x100e9cd9,1)==b'\xe8' and 0x100e9cde+struct.unpack('<i',raw(0x100e9cda,4))[0]==0x1002a480
assert raw(0x100e9aeb,6)==bytes.fromhex('0f8664010000') and raw(0x100e9c7a,6)==bytes.fromhex('0f8690000000')
assert raw(0x100e9d2f,2)==bytes.fromhex('7620')
assert raw(0x100e9da0,6)==bytes.fromhex('0f879b000000')
assert struct.unpack('<f',raw(0x101a1f20,4))[0]==120.0 and struct.unpack('<f',raw(0x101a1ea0,4))[0]==3.0
assert raw(0x100e9269,7)==bytes.fromhex('c74778b09a0e10')
assert raw(0x100f0288,5)==bytes.fromhex('e82398ffff')
for a in ['1004c100','100a1f70','100a4500']:
 txt=(O/f'{a}-0.asm').read_text();assert '[ebp+0xc]'not in txt and '[ebp+0x10]'not in txt and '[ebp+0x14]'not in txt
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==5 and {n['address'][2:]for n in notes}==set(e['primary'])
for n in notes:
 assert n['summary_ru']in c and all(d in c for d in n['details_ru'])
 for p in n['evidence_paths']:assert (ROOT/p).is_file()
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS 5 primary;',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',rawcount,'raw',len(e['vtables']),'vtable/RTTI',len(e['exports']),'exports')

