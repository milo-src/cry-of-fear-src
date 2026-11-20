"""Static saved-C/PE/ASM evidence for weapon animation and mobile callbacks."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100fc430 100c90b0 100135b0 100f1860'.split()
SUPPORT='100882c0 1000e9b0 1000e9e0 1000f390 100125e0 100af710 100fc0f0 100c5180 100b4aa0 10120eb0 1007a540 100ef2d0'.split()

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(objdump=shutil.which('objdump'),objdump_version=subprocess.check_output([shutil.which('objdump'),'--version'],text=True).splitlines()[0],method='Read-only static saved C + bounded native objdump + PE raw reads; no target execution.',module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text(encoding='utf8');e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),command=cmd,entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]

e['accounting']=dict(new_primary=PRIMARY[:3],updated_existing=['100f1860'],support_review_count=0,baseline_reviewed=1927,baseline_pending=6728)
e['prior_review']=ref(OUT/'prior-review.txt')
e['support_documents']=[ref(ROOT/p) for p in ['analysis/server-entity-damage-visibility/contract.md','analysis/server-rules-bootstrap/contract.md','external/hlsdk-portable/engine/eiface.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
e['vtables']=[]
for cls,a,n in [('CHalfLifeRules',0x101de3b0,0xf8),('CHalfLifeMultiplay',0x101d608c,0x100),('CBasePlayer',0x101a4da8,0x22c)]:
 x=keep(a,n,cls+' native vtable prefix');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));r['rtti_name']=st(f[3]+8);r['col']=hex(col);keep(f[4],16,'RTTI hierarchy');e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('PLAYER',0x10217fe8,207),('ENTVARS',0x1021aae0,102)]:
 x=keep(a,n*16,cls+' descriptors');r=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  ty,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);r['fields'].append(dict(type_id=ty,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(r)
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [19,31,62,74]])
e['literals']=[]
for a in PRIMARY:
 t=(OUT/(a+'-0.asm')).read_text()
 for ptr in sorted(set(int(x,16)for x in re.findall(r'0x(101[a-f][0-9a-f]{4})',t))):
  keep(ptr,16,'primary absolute operand '+a)
  try:
   x=raw(ptr,128)[0].split(b'\0',1)[0]
   if x and all(c in (9,10,13)or 32<=c<127 for c in x):e['literals'].append(dict(address=hex(ptr),text=st(ptr)))
  except ValueError:pass
# Exact byte-pattern scan, not an instruction/reference discovery guarantee.
e['debug_reference_scan']=dict(target='0x10222e4e',file_size=len(b),file_sha256=SHA,matches=[],sections=pe['sections'])
for value in [0x10222e4e,0x222e4e]:
 needle=struct.pack('<I',value);pos=0;hits=[]
 while True:
  pos=b.find(needle,pos)
  if pos<0:break
  va=None
  for s in pe['sections']:
   d=pos-s['raw_offset']
   if 0<=d<s['raw_size']:va=BASE+int(s['rva'],16)+d
  hits.append(dict(file_offset=hex(pos),address=hex(va)if va is not None else None));pos+=1
 e['debug_reference_scan']['matches'].append(dict(value=hex(value),hits=hits))
# Relocation directory: record absolute pointers into an eight-byte neighborhood.
nt=struct.unpack_from('<I',b,60)[0];op=nt+24;rr,sz=struct.unpack_from('<II',b,op+96+5*8);rb=raw(BASE+rr,sz)[0];pos=0;total=0;near=[]
while pos<len(rb):
 page,size=struct.unpack_from('<II',rb,pos)
 if not size:break
 assert size>=8 and pos+size<=len(rb)
 for i in range(pos+8,pos+size,2):
  q=struct.unpack_from('<H',rb,i)[0]
  if q>>12==3:
   total+=1;a=BASE+page+(q&4095);v=struct.unpack('<I',raw(a,4)[0])[0]
   if 0x10222e47<=v<=0x10222e4f:near.append(dict(address=hex(a),value=hex(v)));keep(a,4,'near-debug HIGHLOW operand')
 pos+=size
e['debug_reference_scan']['relocations']=dict(directory_rva=hex(rr),directory_size=sz,sha256=h(rb),highlow_count=total,nearby=near)
e['debug_reference_scan']['zero_fill']=dict(rva='0x222e4e',section='.data',section_rva='0x211000',raw_end_rva='0x220c00',virtual_end_rva=hex(0x211000+141588),file_bytes_present=False,initial_loader_value=0)
e['saved_text_scan']=[]
for p in sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')):
 s=p.read_text(encoding='utf8')
 hits=[dict(line=i+1,text=line)for i,line in enumerate(s.splitlines())if '10222e4e' in line or re.search(r'0x260\) = (?:0x40400000|3\.0)',line)]
 if hits:e['saved_text_scan'].append(dict(**ref(p),hits=hits))
e['saved_text_scan_file_count']=len(list((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')))
OUT.joinpath('evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')


