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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report'],e['message_registry']]
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
anchors={0x10045c9e:'e849991200',0x10045ca3:'d99e7c010000',0x10045d04:'d99e80010000',0x10045d65:'d99e84010000',0x10045dc9:'898688010000',0x10045e85:'c780740200000000b442',0x10045ea6:'c6867801000000',0x10045ef5:'ff1570302210',0x10045eff:'e88c94fcff',0x100476c7:'0f87ac000000',0x100476d8:'0f879b000000',0x10047721:'c7407890970f10',0x1004772e:'e80d2b0a00',0x100478f3:'ff5008',0x10047903:'c74678707b0410',0x1004791e:'c7864801000000000000',0x100479b7:'c7806002000000002041',0x100479d3:'e8b8c30a00',0x10047ab1:'c7467800000000',0x10047ab8:'c7864801000000000000',0x10047ac2:'c7864001000000000000',0x10047af0:'7a0a',0x10047c57:'f680b022000040',0x10047c81:'7a09',0x10047c99:'888678010000',0x10045a26:'83f832'}
for a,x in anchors.items():check(a,x)
for a in [0x10045f18,0x1004777a,0x10047cba,0x10047a65,0x10047b65,0x10045ab3]:check(a,'c3')
g={v(x['offset']):v(x['target'])for x in e['vtables'][0]['slots']}
for off,a in [(8,0x1011f680),(0x12c,0x10045f20),(0x130,0x10045c40),(0x178,0x100478e0),(0x17c,0x10047a70),(0x198,0x1011f5d0),(0x1a8,0x100476b0),(0x1ac,0x10047c00),(0x1d4,0x100459b0)]:assert g[off]==a
p={v(x['offset']):v(x['target'])for x in e['vtables'][1]['slots']};assert p[8]==0x1000e1f0 and p[4]==0x10017110
for x in e['constants']:assert struct.unpack(x['format'],raw(v(x['address']),struct.calcsize(x['format'])))[0]==x['value']
assert [x['value']for x in e['constants']]==[.3,1.,0.,10.]
for x in e['literals']+e['explicit_literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode('latin1')+b'\0'
assert e['explicit_literals'][0]['text']==''
for x in e['messages']:assert raw(v(x['name_va']),len(x['name'])+1)==x['name'].encode()+b'\0' and x['registered_size']==-1
# Native registration stages the next call arguments before storing the preceding EAX.
for a,x in [(0x100e65e0,'6aff683cae1d10'),(0x100e65ec,'ff1574302210'),(0x100e65f9,'a3cc652210'),(0x100e6843,'6aff68a4af1d10ff1574302210'),(0x100e6857,'a368662210'),(0x100e6877,'6aff68c4af1d10'),(0x100e6883,'ff1574302210'),(0x100e6890,'a374662210')]:check(a,x)
# Structured ABI anchors and all six claimed primary bodies remain byte-complete above.
s=(O/'10045c40-0.asm').read_text();assert s.count('call   0x100dff70')==8 and s.count('call   0x1016f5ec')==3 and s.count('call   0x1016b55e')==1
assert s.count('call   DWORD PTR ds:0x1022301c')==4 and s.count('call   DWORD PTR ds:0x10223008')==4
for addr,n in [('100476b0',2),('10047c00',3),('100459b0',3)]:
 s=(O/(addr+'-0.asm')).read_text();assert len(re.findall(r'\sja\s',s))==n
for cls,off,nm in [('ITEM',0x110,'script'),('ITEM',0x144,'m_iSuicideButtonsNeeded'),('ITEM',0x148,'m_iSuicideButtonsPressed'),('WEAPON',0x178,'m_bIronSights'),('WEAPON',0x17c,'m_fIronSightsForward'),('WEAPON',0x180,'m_fIronSightsRight'),('WEAPON',0x184,'m_fIronSightsUp'),('WEAPON',0x188,'m_iIronSightsZoom'),('PLAYER',0x22b0,'m_afButtonPressed'),('ENTVARS',0x274,'vuser2'),('ENTVARS',0x260,'fuser3')]:
 t=next(t for t in e['save_tables']if t['name']==cls);assert any(v(f['offset'])==off and f['name']==nm for f in t['fields'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==6 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==e['primary'] and e['accounting']['updated_existing']==[]
assert all('[REVIEW'not in x['block']for x in e['pending_checks']) and json.loads((ROOT/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1985
for z in notes:
 assert z['subsystem']=='weapons'
 for d in z['details_ru']:assert d in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
