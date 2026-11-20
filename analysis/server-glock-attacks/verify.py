"""Read-only verification with independent PE mapping and all native branch checks."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes();h=lambda x:hashlib.sha256(x).hexdigest();v=lambda x:int(x,16)
assert h(b)==e['sha256'] and not e['target_executed']
nt=struct.unpack_from('<I',b,60)[0];n=struct.unpack_from('<H',b,nt+6)[0];os=struct.unpack_from('<H',b,nt+20)[0];base=struct.unpack_from('<I',b,nt+52)[0]
sections=[struct.unpack_from('<4I',b,nt+24+os+i*40+8)for i in range(n)]
def raw(a,n):
 for vs,rva,sz,off in sections:
  d=a-base-rva
  if 0<=d and d+n<=sz:return b[off+d:off+d+n]
 raise ValueError(hex(a))
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['prior_review']]
for r in refs:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 a=v(r['start']);end=v(r['end_exclusive']);pos=a;assert h(raw(a,end-a))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))==x;pos+=len(x);rows+=1
 assert pos==end
for r in e['raw']:
 x=bytes.fromhex(r['bytes_hex']);off=v(r['file_offset']);assert raw(v(r['address']),len(x))==x and h(x)==r['sha256'] and b[off:off+len(x)]==x
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  ty,nm,off,c,fl=struct.unpack('<IIIhh',raw(v(table['address'])+16*i,16))
  assert(ty,off,c,fl)==(r['type_id'],v(r['offset']),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'

for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];f=struct.unpack('<5I',raw(col,20))
 assert col==v(t['col']) and raw(f[3]+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
 for r in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(r['offset']),4))[0]==v(r['target'])
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and v(r['address'])==v(e['api_binding']['base'])+4*r['slot']
assert names[74]=='pfnGetModelPtr' and names[90]=='pfnRandomLong' and names[123]=='pfnPlaybackEvent'
def check(a,x):
 x=bytes.fromhex(x);assert raw(a,len(x))==x,hex(a)
for a,x in [(0x1001f050,'33c0c3'),(0x1011c59b,'c21400'),(0x1011c5d9,'c21400'),(0x10120286,'c20400'),(0x1011c5ad,'6a00ff96d0010000'),(0x1011c5b5,'f7d88bcb1bc0f7d850ff750cff9698010000'),(0x1011d01f,'ff2504302210'),(0x10046d29,'8986fc010000'),(0x10047666,'c7042466662640'),(0x1004768a,'c7042400006040')]:check(a,x)
g={v(r['offset']):v(r['target'])for r in e['vtables'][0]['slots']}
for off,a in [(0x2c,0x10047780),(0x30,0x10046cb0),(0x190,0x1011e4a0),(0x198,0x1011f5d0),(0x1a4,0x10046dc0),(0x1c0,0x100475b0),(0x1d0,0x1001f050)]:assert g[off]==a
assert all('Spread'not in z['name']for z in e['vtables'][0]['bases'])
# Only two positive stack operands are read in the full generic reload body.
s=(O/'1011c560-0.asm').read_text();assert set(re.findall(r'\[ebp\+0x([0-9a-f]+)\]',s))=={'8','c'}
s=(O/'10120210-0.asm').read_text();assert s.count('call   0x1011ab20')==2 and 'call   0x1000f390'in s
for off in ('0x308','0x1cc','0x1d0','0x1d8'):assert off in s
# Preserve the exact serialized API sequence, not decompiler argument guesses.
s=(O/'1011cf70-0.asm').read_text();api=re.findall(r'(?:call|jmp)\s+DWORD PTR ds:0x([0-9a-f]+)',s)
assert api==['10223000','10223008']+['1022301c']*6+['10223018','10223010','10223008','10223008','10223004']
for r in e['literals']:assert raw(v(r['address']),len(r['text'])+1)==r['text'].encode()+b'\0'
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==7 and {z['address'][2:]for z in notes}==set(e['primary'])
assert len(e['accounting']['new_primary'])==5 and len(e['accounting']['updated_existing'])==2
for z in notes:
 assert z['module']=='server' and z['confidence']=='high'
 for detail in z['details_ru']:assert detail in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
prior=(O/'prior-review.txt').read_text(encoding='utf8')
for a in e['accounting']['updated_existing']:assert f'[REVIEW server:0x{a}]'in prior
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
