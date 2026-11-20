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
refs=e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['accounting']['prior_function_blocks']]
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
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];sig,off,cd,td,ch=struct.unpack('<5I',raw(col,20))
 assert sig==0 and col==v(t['locator']) and td==v(t['type_descriptor']) and ch==v(t['class_hierarchy'])
 assert raw(td+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
 for r in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(r['offset']),4))[0]==v(r['target'])
assert e['vtables'][0]['rtti_name']=='.?AVCMobile@@'
for off,a in [(0x198,0x1011f5d0),(0x19c,0x1011f640),(0x14c,0x100531b0),(0x1a4,0x10053990),(0x1c4,0x10053c90),(8,0x1011f680)]:assert raw(0x101b26c8+off,4)==struct.pack('<I',a)
assert raw(0x10052e78,6)==bytes.fromhex('c700c8261b10')
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and v(r['address'])==v(e['api_binding']['base'])+4*r['slot']
assert [(names[i],hex(0x10222f48+4*i))for i in [46,47,48,74,75]]==[('pfnMessageBegin','0x10223000'),('pfnMessageEnd','0x10223004'),('pfnWriteByte','0x10223008'),('pfnGetModelPtr','0x10223070'),('pfnRegUserMsg','0x10223074')]
def check(a,x):assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
def call(a,t):assert raw(a,1)==b'\xe8' and a+5+struct.unpack('<i',raw(a+1,4))[0]==t
check(0x1011f632,'c20c00');check(0x1011f676,'c20800')
check(0x10053a2c,'c74678b0300510');check(0x10053cea,'c6860402000001')
for a in [0x100539ba,0x100539cb,0x100539dc,0x10053cab]:check(a,'0f87')
for a in [0x100539ed,0x10053d13,0x10053d20]:check(a,'77')
check(0x10053d48,'ffb01c020000');check(0x10053d57,'ff1570302210');check(0x10053d5d,'83c40450');call(0x10053d61,0x1000f390)
check(0x10053d6b,'83c408d800d99ed8010000')
check(0x100e663d,'6a016874ae1d10');check(0x100e6649,'ff1574302210');check(0x100e6656,'a3f8652210')
assert raw(0x101dae74,11)==b'WeaponBody\0'
assert struct.unpack('<f',raw(0x101a1390,4))[0]==1.0 and struct.unpack('<d',raw(0x101a1e48,8))[0]==0.5
assert e['primary']==e['accounting']['new_primary']=='1011f5d0 1011f640 100531b0 10053990 100530b0 10053c90'.split()
prior=(O/'prior-function-blocks.txt').read_text(encoding='utf8');assert '[REVIEW]'not in prior
for a in e['primary']:assert '[FUNCTION server:0x'+a+']'in prior
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];ct=(O/'contract.md').read_text(encoding='utf8');assert len(notes)==6
assert [q['address'][2:]for q in notes]==e['primary']
for q in notes:
 for d in q['details_ru']:assert d in ct
 for p in q['evidence_paths']:assert(ROOT/p).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
