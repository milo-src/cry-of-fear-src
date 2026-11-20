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
assert raw(0x101b26c8+0x158,4)==struct.pack('<I',0x10053210)
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/e['api_binding']['header']['path']).read_text().split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:assert names[r['slot']]==r['name'] and v(r['address'])==v(e['api_binding']['base'])+4*r['slot']
assert names[99]=='pfnGetGameDir' and names[71]=='pfnIndexOfEdict'
def check(a,x):assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
def edge(a,t,op=0xe8):assert raw(a,1)==bytes([op]) and a+5+struct.unpack('<i',raw(a+1,4))[0]==t
edge(0x100534c4,0x1011d560,0xe9);check(0x100534a3,'5ec3');edge(0x1005340b,0x100e4e00);check(0x10053410,'84c07567')
for a in [0x10053247,0x10053258,0x10053269,0x1005327a]:check(a,'0f87')
check(0x10053491,'7612');check(0x100532fe,'c7467800380510');check(0x100533d9,'c7806401000000004842')
check(0x10053474,'c680c01e000000');check(0x100e4e44,'b0015ec3');check(0x100e4e48,'32c05ec3')
check(0x100e4e03,'8d8e48230000');check(0x100e4e12,'8d8e88030000');check(0x100e4e33,'ff1564302210');check(0x100e4e3c,'3986382000007404')
check(0x1005350c,'50ff15d4302210');check(0x1005351e,'d99dbcfdffff');check(0x10053524,'f30f2c85bcfdffff')
check(0x1005352f,'83f8070f87c2000000');check(0x10053538,'ff2485d8370510')
assert [x['value']for x in e['language_switch']]==list(range(8))
assert [v(x['target'])for x in e['language_switch']]==list(struct.unpack('<8I',raw(0x100537d8,32)))==[0x100535fa,0x100535fa,0x1005353f,0x1005355d,0x1005357f,0x100535a1,0x100535bc,0x100535db]
for q in e['suffix_copy_bytes']:
 x=bytes.fromhex(q['bytes']);assert len(x)==q['count']
 assert raw(v(q['address']),q['count'])==x and x[-1]==0 and 0 not in x[:-1]
check(0x10053673,'c685d9fdffff00');check(0x1005368d,'4350889dd8fdffff')
check(0x100536ba,'81fefe0000007619');check(0x100536d9,'eb3d');assert 0x100536d9+2+0x3d==0x10053718
check(0x10053717,'47');check(0x10053704,'81fe000100000f83c1000000');check(0x10053710,'888435f0fdffff')
check(0x10053744,'80b8f9010000007542');check(0x1005376d,'6a006a018d8df0fdffff5150');edge(0x10053779,0x10119810)
check(0x100e6408,'6a02683cad1d10');check(0x100e640f,'ff1574302210');check(0x100e641c,'a378652210');assert raw(0x101dad3c,10)==b'UnreadSMS\0'
assert e['primary']==e['accounting']['new_primary']==['10053210','100534d0','100e4e00']
prior=(O/'prior-function-blocks.txt').read_text(encoding='utf8');assert '[REVIEW]'not in prior
for a in e['primary']:assert '[FUNCTION server:0x'+a+']'in prior
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];ct=(O/'contract.md').read_text(encoding='utf8');assert len(notes)==3
assert [q['address'][2:]for q in notes]==e['primary']
for q in notes:
 for d in q['details_ru']:assert d in ct
 for p in q['evidence_paths']:assert(ROOT/p).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
