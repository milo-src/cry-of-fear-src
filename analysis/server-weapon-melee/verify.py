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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report'],e['prior_review']]
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
anchors={0x100f97af:'f30f2c1d34682210',0x100f97b7:'83f803740583f80a7451',0x100f9806:'c704240000803f',0x100f980d:'e89ef9ffff',0x100f9829:'ff9028020000',0x100f98b0:'0f82c3000000',0x100f98e3:'0f86e4010000',0x100f991d:'8d45dc',0x100f9957:'e8c45efeff',0x100f997c:'0f864b010000',0x100f99a6:'e8c5260200',0x100f99b4:'6800100004',0x100f99c6:'0f5bc0',0x100f99e4:'ff5060',0x100f99ec:'e8ff1e0200',0x100f99f8:'ff5050',0x100f9a03:'ff5050',0x100f9a5f:'e87c030200',0x100f9a97:'e844030200',0x100f9ad3:'c3',0x100f5ddc:'6a096a00',0x100f5df3:'7b0f',0x100f5dfb:'8b0c858c7f2110',0x100f5e34:'6a02',0x100f5e40:'c3',0x100f9202:'50500fb705441f2310',0x100f9224:'ff1534312210',0x100f9231:'c20c00',0x100f9292:'c20c00',0x101200ec:'6890641e10',0x101200f9:'ff1530312210',0x10120106:'66a3441f2310',0x10047721:'c7407890970f10',0x100afcee:'d91d34682210'}
for a,x in anchors.items():check(a,x)
for t in e['vtables']:
 col=struct.unpack('<5I',raw(v(t['col']),20));ch=struct.unpack('<4I',raw(col[4],16));ds=struct.unpack('<'+'I'*ch[2],raw(ch[3],4*ch[2]));assert len(ds)==len(t['bases'])
 for d,z in zip(ds,t['bases']):
  f=struct.unpack('<6I',raw(d,24));assert(f[2],f[3],f[4])==(z['mdisp'],z['pdisp'],z['vdisp']) and raw(f[0]+8,len(z['name'])+1)==z['name'].encode()+b'\0'
vt={t['class_name']:{v(x['offset']):v(x['target'])for x in t['slots']}for t in e['vtables']}
assert vt['CBasePlayer'][0x228]==0x100e01e0 and vt['CGlock'][0x1a8]==0x100476b0
assert vt['CHalfLifeRules'][0x20]==0x100fc430 and vt['CHalfLifeMultiplay'][0x20]==0x100c90b0
for x in e['constants']:assert struct.unpack(x['format'],raw(v(x['address']),struct.calcsize(x['format'])))[0]==x['value']
assert [x['value']for x in e['constants']]==[32.,20.,1.,0.]
for x in e['literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode('latin1')+b'\0'
for t in e['swing_arrays']:
 ps=struct.unpack('<'+'I'*len(t['entries']),raw(v(t['address']),4*len(t['entries'])))
 for p,x in zip(ps,t['entries']):assert p==v(x['address']) and raw(p,len(x['text'])+1)==x['text'].encode()+b'\0'
assert [len(x['entries'])for x in e['swing_arrays']]==[10,6,10]
assert names[90]=='pfnRandomLong' and names[123]=='pfnPlaybackEvent' and names[122]=='pfnPrecacheEvent'
event=e['event_registration'];assert raw(v(event['path_address']),len(event['path'])+1)==event['path'].encode()+b'\0' and event['path']=='events/viewpunch.sc'
export_rva=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+export_rva,40));ob,nf,nn,fs,ns,os=ex[5:]
for x in e['exports']:
 i=x['name_index'];nm=struct.unpack('<I',raw(base+ns+4*i,4))[0];o=struct.unpack('<H',raw(base+os+2*i,2))[0];fn=struct.unpack('<I',raw(base+fs+4*o,4))[0]
 assert raw(base+nm,len(x['name'])+1)==x['name'].encode()+b'\0' and ob+o==x['ordinal'] and base+fn==v(x['entry'])
assert len(e['exports'])==1 and e['exports'][0]['ordinal']==366 and e['exports'][0]['entry']=='0x100f9790'
for cls,off,nm in [('ITEM',0x168,'m_iId'),('PLAYER',0x252c,'m_pActiveItem'),('ENTVARS',0x268,'vuser1'),('ENTVARS',0x280,'vuser3')]:
 t=next(t for t in e['save_tables']if t['name']==cls);assert any(v(f['offset'])==off and f['name']==nm for f in t['fields'])
s=(O/'100f9790-0.asm').read_text();assert s.count('call   0x100fc9f0')==3 and s.count('call   0x10119de0')==2 and s.count('call   DWORD PTR [eax+0x50]')==2
for va,bytestring in [(0x100f9a47,'c7442408cdcccc3d'),(0x100f9a7f,'c74424089a99193e'),(0x100f97f6,'c744240800000041')]:check(va,bytestring)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8');assert len(notes)==3 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==['100f5db0'] and e['accounting']['updated_existing']==['100f9790','100f91b0']
assert [('[REVIEW'in x['block'])for x in e['pending_checks']]==[False,True,True]
assert json.loads((ROOT/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2012
prior=(O/'prior-review.txt').read_text(encoding='utf8')
for a in ['100f9790','100f91b0']:
 old=re.search(r'\[REVIEW server:0x'+a+r'\].*?\[/REVIEW\]',prior,re.S)[0]
 assert old in next(x['block']for x in e['pending_checks']if x['entry']=='0x'+a)
 oldpaths=[line.split('Основание: ',1)[1].strip()for line in old.splitlines()if'Основание: 'in line]
 assert set(oldpaths).issubset(next(n['evidence_paths']for n in notes if n['address']=='0x'+a))
for z in notes:
 for d in z['details_ru']:assert d in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards: 1 new, 2 refined')
