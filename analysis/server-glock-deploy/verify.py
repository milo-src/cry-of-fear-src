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

# Concrete vtable, all save records and relevant native branch/ABI anchors.
vt={t['class_name']:{v(x['offset']):v(x['target'])for x in t['slots']}for t in e['vtables']}
for off,a in [(0x13c,0x10045ac0),(0x140,0x1011c020),(0x144,0x100457d0),(0x14c,0x10045b40),(0x198,0x1011f5d0),(0x19c,0x1011f640),(0x1b0,0x10047db0),(0x1c4,0x10047cf0),(8,0x1011f680)]:assert vt['CGlock'][off]==a
anchors={0x100459ac:'5ec3',0x10045b2e:'c20400',0x10045c37:'c3',0x10047dc4:'0f2fc10f87',0x10047dd5:'0f2fc10f87',0x10047e22:'c704249a99993e',0x10047e2c:'c74678c07c0410',0x10047d1d:'0f2f00777e',0x10047d72:'ffb01c020000',0x10047d81:'ff157030221083c40450',0x10047d98:'d800d99ed8010000',0x1011c1e7:'c680a903000001',0x1011c35f:'6a08',0x1011c3b7:'ffb0a4182310',0x1011c424:'0f8b88000000',0x1011c4b2:'c781b401000000000000',0x1011c51c:'75f2',0x1011c54f:'b8010000005f5dc21800',0x1011c559:'33c05f5dc21800',0x1011f68b:'d84508',0x1011f6a8:'c20400',0x10045856:'81be400100009a020000',0x10045873:'81fa66fdffff',0x10045be4:'9ff6c4447a0a'}
for a,q in anchors.items():assert raw(a,len(bytes.fromhex(q)))==bytes.fromhex(q),hex(a)
for t in e['vtables']:
 col=struct.unpack('<5I',raw(v(t['col']),20));ch=struct.unpack('<4I',raw(col[4],16));ds=struct.unpack('<'+'I'*ch[2],raw(ch[3],4*ch[2]));assert len(ds)==len(t['bases'])
 for d,z in zip(ds,t['bases']):
  f=struct.unpack('<6I',raw(d,24));assert(f[2],f[3],f[4])==(z['mdisp'],z['pdisp'],z['vdisp']) and raw(f[0]+8,len(z['name'])+1)==z['name'].encode()+b'\0'
for x in e['constants']:assert struct.unpack(x['format'],raw(v(x['address']),struct.calcsize(x['format'])))[0]==x['value']
assert [x['value']for x in e['constants']]==[.5,.66,10.,1.]
for x in e['literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode('latin1')+b'\0'
registry=json.loads((ROOT/e['message_registry']['path']).read_text(encoding='utf8'))
for x in e['messages']:
 m=next(m for m in registry['messages']if m['name']==x['name']);assert all(m[k]==value for k,value in x.items())
assert {x['name']:x['registered_size']for x in e['messages']}=={'WpnDeploy':0,'WpnInfo':4,'WeaponBody':1,'CustomSlv':-1,'CustomFng':-1,'CustomGlv':-1}
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==6 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==e['primary'][:5] and e['accounting']['updated_existing']==['1011c1a0']
assert [('[REVIEW'in x['block'])for x in e['pending_checks']]==[False]*5+[True]
assert json.loads((ROOT/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2041
prior=(O/'prior-review.txt').read_text(encoding='utf8');assert prior.strip()in e['pending_checks'][-1]['block']
oldpaths=[line.split('Основание: ',1)[1].strip()for line in prior.splitlines()if'Основание: 'in line]
assert set(oldpaths).issubset(notes[-1]['evidence_paths'])
for z in notes:
 for d in z['details_ru']:assert d in contract
 for p in z['evidence_paths']:assert(ROOT/p).is_file(),p
for cls,off,name in [('ENTVARS',0x1b4,'max_health'),('ITEM',0x128,'m_iSprintState'),('ITEM',0x140,'m_iSuicideState'),('WEAPON',0x19c,'m_flCurrentKick'),('PLAYER',0x3f4,'m_bFirstDeploy')]:
 assert any(v(f['offset'])==off and f['name']==name for t in e['save_tables']if t['name']==cls for f in t['fields'])
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
