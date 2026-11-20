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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report']]
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

# Independent native schema/ABI checks for all primary entries.
vt={t['class_name']:{v(x['offset']):v(x['target'])for x in t['slots']}for t in e['vtables']}
for off,a in [(0x34,0x1011dd70),(0x38,0x1011f260),(0x3c,0x1011eaa0),(0x140,0x1011c020),(0x168,0x1011e510),(0x170,0x1011fc80),(0x190,0x1011e4a0),(0x194,0x1011e590),(0x1a0,0x1011d520)]:assert vt['CGlock'][off]==a
for t in e['vtables']:
 col=struct.unpack('<5I',raw(v(t['col']),20));ch=struct.unpack('<4I',raw(col[4],16));ds=struct.unpack('<'+'I'*ch[2],raw(ch[3],4*ch[2]));assert len(ds)==len(t['bases'])
 for d,z in zip(ds,t['bases']):
  f=struct.unpack('<6I',raw(d,24));assert(f[2],f[3],f[4])==(z['mdisp'],z['pdisp'],z['vdisp']) and raw(f[0]+8,len(z['name'])+1)==z['name'].encode()+b'\0'
assert list(struct.unpack('<18I',raw(0x1021b140,72)))==e['type_sizes'] and e['type_sizes'][12]==4
g=next(t for t in e['save_tables']if t['name']=='GLOCK')['fields']
assert [(x['name'],x['offset'],x['type_id'],x['count'],x['flags'])for x in g]==[('m_bTaclight','0x200',12,1,0),('m_bWaitingToFix','0x1f8',12,1,0)]
for x in e['literals']:assert raw(v(x['address']),len(x['text'])+1)==x['text'].encode('latin1')+b'\0'
assert raw(0x101e6698,8)==b'customv\0'
registry=json.loads((ROOT/e['message_registry']['path']).read_text(encoding='utf8'))
for x in e['messages']:
 m=next(m for m in registry['messages']if m['name']==x['name']);assert all(m[k]==value for k,value in x.items())
assert [(x['name'],x['id_global'],x['registered_size'])for x in e['messages']]==[('CurWeapon','0x102264cc',3)]
anchors={
0x100455b2:'6804020000',0x100455c8:'c70024051b10897004',0x100455d4:'33c0897004',
0x1011ddcb:'c20400',0x1011df55:'c7470c00000000',0x1011df60:'c20400',
0x1011f277:'c20400',0x1011f282:'6a026870b52110',0x1011f295:'5668bc671e10',0x1011f2ac:'c20400',0x1011f2bc:'c20400',
0x1011eab4:'c20400',0x1011eaba:'6a026870b52110',0x1011eace:'c20400',
0x1011fcab:'33c9398fd82400000f94c1',0x1011fca3:'b9400000000f45d9',0x1011fd2b:'83c41cff1504302210',0x1011fd34:'8b86e4010000ba010000008986e8010000899eec010000',0x1011fd55:'8b8e64010000',0x1011fd62:'ff9270010000',0x1011fd6a:'b801000000',0x1011fd71:'c20400',0x1011fd76:'8bc2',
0x1011d52a:'7f2b',0x1011d545:'7f10',0x1011d54e:'83f8ff7404',0x1011d553:'33c05ec3',0x1011d557:'b8010000005ec3',
0x1011e510:'8b81dc010000c3',0x1011c020:'8b896001000085c9',0x1011c033:'33c0c3b801000000c3',
0x1011e4e7:'33c08986b40100005ec3',0x1011e590:'c781b401000001000000c3',0x100e4ed5:'83b908010000050f94c0c3',0x1013dbbc:'f2c3'}
for a,q in anchors.items():assert raw(a,len(bytes.fromhex(q)))==bytes.fromhex(q),hex(a)
# Decode exports again; the factory exact entry is not an EAT address.
erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40));ob,nf,nn,funcs,names,ords=ex[5:]
assert 0x10045580 not in [base+x for x in struct.unpack('<'+'I'*nf,raw(base+funcs,4*nf))]
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==10 and {z['address'][2:]for z in notes}==set(e['primary'])
assert e['accounting']['new_primary']==e['primary'] and e['accounting']['updated_existing']==[]
assert all('[REVIEW'not in x['block']for x in e['pending_checks'])
assert json.loads((ROOT/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2072
for z in notes:
 body=re.search(r'^## '+re.escape(z['address'])+r' — [^\n]+\n\n(.*?)(?=^## |\Z)',contract,re.M|re.S)[1].strip().split('\n\n')
 assert body==z['details_ru']
 for f in z['evidence_paths']:assert(ROOT/f).is_file(),f
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
