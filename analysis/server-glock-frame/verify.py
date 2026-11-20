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
for a,x in [(0x100f5da0,'33c03881aa0300000f95c0c3'),(0x1011bfc0,'558becf30f10450c33c00f2f45080f93c05dc3'),(0x1001ec60,'33c0c3'),(0x1001e930,'c20000'),(0x10046257,'7670'),(0x100462f9,'7762'),(0x10046306,'7755'),(0x100464f7,'c74678306c0410'),(0x1004656e,'c7862801000000000000'),(0x10046acf,'7b6d'),(0x1011d94a,'726a'),(0x1011d98e,'0f4dd8'),(0x1011d994,'8987e4010000'),(0x1011d9ac,'c787f001000000000000'),(0x1011dd5c,'0f8733fdffff'),(0x10045af5,'c7401c0f000000'),(0x10045b09,'c7402400000000')]:check(a,x)
assert raw(0x10046c1d,1)==b'\xe8' and 0x10046c22+struct.unpack('<i',raw(0x10046c1e,4))[0]==0x1011d560
g={v(x['offset']):v(x['target'])for x in e['vtables'][0]['slots']}
for off,a in [(0x158,0x10046220),(0x130,0x10045c40),(0x178,0x100478e0),(0x17c,0x10047a70),(0x19c,0x1011f640),(0x1d4,0x100459b0),(0x1bc,0x1001e0c0),(0x1b8,0x1001e930),(0x1cc,0x1001ec60),(0x13c,0x10045ac0)]:assert g[off]==a
for x in e['frame_constants']:assert struct.unpack(x['format'],raw(v(x['address']),struct.calcsize(x['format'])))[0]==x['value']
assert [x['value']for x in e['frame_constants']]==[.5,.33,.35,5.,.75]
for x in e['literals']+e['extra_literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode()+b'\0'
assert e['extra_literals'][0]['text']=='WpnInfo'
# Native register/stack facts that the C decompiler loses.
s=(O/'1011bfc0-0.asm').read_text();assert set(re.findall(r'\[ebp\+0x([0-9a-f]+)\]',s))=={'8','c'}
s=(O/'10046220-0.asm').read_text();assert 'movsd  QWORD PTR [esp+0x10],xmm0'in s and 'addsd  xmm0,QWORD PTR [esp+0x14]'in s
assert s.count('call   0x1000f390')==5
assert 'fstp   st(0)'in s
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==3 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==['10046220','100f5da0'] and e['accounting']['updated_existing']==['1011d560']
for z in notes:
 for d in z['details_ru']:assert d in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
assert '[REVIEW server:0x1011d560]'in(O/'prior-review.txt').read_text(encoding='utf8')
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
