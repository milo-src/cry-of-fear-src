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
assert b'\xc7\x00\x04\x78\x1a\x10'in raw(0x10018440,0x5c)
assert struct.unpack('<I',raw(0x101a7804+8,4))[0]==0x1011f680
assert struct.unpack('<2I',raw(0x101a7804+0x160,8))==(0x1011dfd0,0x1011b920)
assert struct.unpack('<I',raw(0x101a7804+0x134,4))[0]==0x1011b860
assert struct.unpack('<I',raw(0x101a7804+0x18c,4))[0]==0x10018cb0
item=e['save_tables'][0]['fields'];assert len(item)==26
assert [(f['type_id'],f['offset'],f['name'])for f in item[15:17]]==[(10,'0x158','m_iSprintIdleAnim1'),(15,'0x158','m_iSprintIdleAnim1')]
assert all(f['count']==1 and f['flags']==0 for f in item)
assert struct.unpack('<I',raw(0x1021b140+12*4,4))[0]==4
assert [f['offset']for f in item if f['type_id']==12]==['0x13c','0x104','0x105','0x106','0x107']
# Duplicate-name matching is a rotating search, not always first occurrence.
start=0;matches=[]
for f in item:
 for k in range(len(item)):
  j=(start+k)%len(item)
  if item[j]['name'].lower()==f['name'].lower():break
 matches.append(j);start=j+1
assert matches==list(range(26)) and matches[15:17]==[15,16]
# Verify the native comparison/cleanup instructions that qualify pseudo-code.
assert raw(0x1011bb20,13)==bytes.fromhex('0f2e0570131a109ff6c4447a0c')
assert raw(0x1011cd0b,6)==bytes.fromhex('ffa060010000')
assert raw(0x1011d253,5)==bytes.fromhex('e9680f0000')
assert raw(0x1011b882,3)==bytes.fromhex('0fabca')
assert raw(0x1011f68b,3)==bytes.fromhex('d84508') and raw(0x1011f691,3)==bytes.fromhex('d95d08')
assert raw(0x10018cb2,7)==bytes.fromhex('51ff9084010000')
assert struct.unpack('<I',raw(0x10116fc0+12*4,4))[0]==0x10116f47
assert struct.unpack('<I',raw(0x10116fc0+15*4,4))[0]==0x10116d5e
for a in [0x1011b852,0x1011b8d9,0x1011bae6,0x1011e78e,0x1011edcc,0x1011f6a8]:assert raw(a,3)==b'\xc2\x04\0'
assert struct.unpack('<f',raw(0x101a1370,4))[0]==0
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf-8'))
for s in e['api_slots']:assert names[s['slot']]==s['name'] and va(s['native_global'])==0x10222f48+4*s['slot']
notes=json.loads((OUT/'notes.json').read_text(encoding='utf-8'))['functions'];contract=(OUT/'contract.md').read_text(encoding='utf-8')
assert len(notes)==12 and {x['address']for x in notes}=={x['address']for x in e['source_c']if x['role']=='primary'}
for x in notes:
 assert x['module']=='server' and x['subsystem']=='weapons' and x['confidence']=='high'
 assert x['summary_ru']in contract and all(y in contract for y in x['details_ru'])
 for f in x['evidence_paths']:assert (ROOT/f).is_file(),f
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(notes),'cards',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',rawcount,'raw; descriptor/ABI/rotating-match assertions')
