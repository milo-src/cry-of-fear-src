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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report'],e['message_registry'],e['prior_review'],e['legacy_capture']]
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
anchors={0x10045f7e:'e869961200',0x10045f83:'d99e7c010000',0x10045fe4:'d99e80010000',0x10046045:'d99e84010000',0x100460a9:'898688010000',0x1004617c:'0f5bc0',0x10046186:'f30f118074020000',0x10046199:'6a1e',0x1004619d:'6a1f',0x100461a5:'c6867801000001',0x100461be:'f20f580578131a10',0x100461e5:'ffb01c020000',0x100461ee:'ffb00c020000',0x100461f4:'ff1570302210',0x100461fe:'e88d91fcff',0x1004620b:'d800',0x1004620d:'d99ed8010000',0x10046217:'c3',0x100dff96:'ff15c4302210',0x100dffa9:'83bdf8fdffff00',0x100dfff9:'88840dfbfdffff',0x100e000d:'803da83122107b',0x100e0025:'803da83122107d',0x100e0076:'8d85fcfdffff',0x100e00b4:'803da83122107d',0x100e00ef:'b8a8312210',0x100e0104:'c20800',0x100e017d:'b896241a10',0x100e0192:'c20800',0x100e01c5:'b896241a10',0x100e01d4:'c20800'}
for a,x in anchors.items():check(a,x)
g={v(x['offset']):v(x['target'])for x in e['vtables'][0]['slots']}
for off,a in [(0x12c,0x10045f20),(0x130,0x10045c40),(0x198,0x1011f5d0),(0x1ac,0x10047c00)]:assert g[off]==a
for t in e['vtables']:
 col=struct.unpack('<5I',raw(v(t['col']),20));ch=struct.unpack('<4I',raw(col[4],16));ds=struct.unpack('<'+'I'*ch[2],raw(ch[3],4*ch[2]));assert len(ds)==len(t['bases'])
 for d,z in zip(ds,t['bases']):
  f=struct.unpack('<6I',raw(d,24));assert(f[2],f[3],f[4])==(z['mdisp'],z['pdisp'],z['vdisp']) and raw(f[0]+8,len(z['name'])+1)==z['name'].encode()+b'\0'
for x in e['constants']:assert struct.unpack(x['format'],raw(v(x['address']),struct.calcsize(x['format'])))[0]==x['value']
assert e['constants'][0]['value']==.3
for x in e['literals']+e['explicit_literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode('latin1')+b'\0'
assert [x['text']for x in e['explicit_literals'][:2]]==['','data']
for x in e['messages']:assert raw(v(x['name_va']),len(x['name'])+1)==x['name'].encode()+b'\0' and x['registered_size']==-1
for a,x in [(0x100e65e0,'6aff683cae1d10'),(0x100e65ec,'ff1574302210'),(0x100e65f9,'a3cc652210'),(0x100e6843,'6aff68a4af1d10ff1574302210'),(0x100e6857,'a368662210')]:check(a,x)
assert names[95]=='pfnLoadFileForMe' and names[96]=='pfnFreeFile' and names[61]=='pfnAlertMessage'
s=(O/'10045f20-0.asm').read_text();assert s.count('call   0x100dff70')==8 and s.count('call   0x1016f5ec')==3 and s.count('call   0x1016b55e')==1
assert s.count('call   DWORD PTR ds:0x1022301c')==4 and s.count('call   DWORD PTR ds:0x10223008')==4
s=(O/'100dff70-0.asm').read_text();assert s.count('call   0x100c6de0')==6 and s.count('call   DWORD PTR ds:0x102230c8')==2 and s.count('call   DWORD PTR ds:0x1022303c')==7
assert 'call   DWORD PTR ds:0x102230c8'not in s.split('100e0195:',1)[1]
for cls,off,nm in [('ITEM',0x110,'script'),('WEAPON',0x178,'m_bIronSights'),('WEAPON',0x17c,'m_fIronSightsForward'),('WEAPON',0x180,'m_fIronSightsRight'),('WEAPON',0x184,'m_fIronSightsUp'),('WEAPON',0x188,'m_iIronSightsZoom'),('ENTVARS',0x274,'vuser2')]:
 t=next(t for t in e['save_tables']if t['name']==cls);assert any(v(f['offset'])==off and f['name']==nm for f in t['fields'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==2 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==['10045f20'] and e['accounting']['updated_existing']==['100dff70']
assert [('[REVIEW'in x['block'])for x in e['pending_checks']]==[False,True]
assert json.loads((ROOT/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2005
prior=(O/'prior-review.txt').read_text(encoding='utf8');assert prior.strip() in e['pending_checks'][1]['block']
oldpaths=[line.split('Основание: ',1)[1].strip()for line in prior.splitlines()if'Основание: 'in line]
assert set(oldpaths).issubset(notes[1]['evidence_paths'])
for z in notes:
 for d in z['details_ru']:assert d in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards: 1 new, 1 refined')
