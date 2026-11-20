"""Static saved-C/PE/ASM evidence for complete CPhoneCall KeyValue, literal branches and field stores."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY=['10060140']
SUPPORT='1000aba0 1000dba0 100b4aa0 1016b55e 1016a01f 10169fb8 1005fb60 10060e90 10060ed0'.split()

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

e['accounting']=dict(new_primary=PRIMARY,updated_existing=[],support_review_count=0,baseline_reviewed=1876,baseline_pending=6779,prior_function_blocks=ref(OUT/'prior-function-blocks.txt'))
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-state-reader/contract.md','analysis/server-alias-state/contract.md','external/hlsdk-portable/engine/eiface.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
e['save_tables']=[]
for cls,a,n in [('PHONECALL',0x10212a80,7),('BASE',0x10211760,22)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  ty,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=ty,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
# The numeric float conversion wrapper has an inventory entry but no saved C.
# Keep its bounded assembly as SUPPORT only, without a synthetic C or REVIEW.
start=0x1016f5ec;end=0x1016f5ff;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];txt=subprocess.check_output(cmd,text=True);p=OUT/'1016f5ec-wrapper.asm';p.write_text(txt,encoding='utf8',newline='\n')
e['ranges'].append(dict(**ref(p),command=cmd,entry=hex(start),start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0]),assembly_only=True,boundary='Entry1016f5ec through RET1016f5fe. No saved C or new card; deeper1016da44 stays external.'))
source=ROOT/'analysis/corpus-coverage/server-discovered-evidence.json';j=json.loads(source.read_text(encoding='utf8'))
def records(x):
 if isinstance(x,dict):
  if x.get('address')=='0x1016f5ec':yield x
  for v in x.values():yield from records(v)
 elif isinstance(x,list):
  for v in x:yield from records(v)
e['assembly_only_inventory']=dict(source=ref(source),records=list(records(j)))
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
# Literal-driven instruction segmentation: all 65 exact named branches, not a
# generated assumption that the unrolled native body follows a regular loop.
text=(OUT/'10060140-0.asm').read_text(encoding='utf8');ins=[]
for line in text.splitlines():
 m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})\s+([^\s].*)$',line)
 if m:ins.append((int(m[1],16),bytes.fromhex(m[2]),m[3].strip()))
starts=[]
for i,(a,x,op) in enumerate(ins):
 m=re.fullmatch(r'(?:push\s+|mov\s+ecx,)0x(101b[0-9a-f]{4})',op)
 if not m:continue
 ptr=int(m[1],16);value=raw(ptr,48)[0].split(b'\0')[0].decode('ascii')
 if re.fullmatch(r'subtitle(?:number|time)(?:[1-9]|[12][0-9]|3[012])|audiofile',value):starts.append((i,a,ptr,value))
assert len(starts)==65
e['key_branches']=[]
for k,(i,a,ptr,key) in enumerate(starts):
 stop=starts[k+1][0] if k+1<len(starts) else next(n for n,r in enumerate(ins)if r[0]==0x10060e1a)
 segment=ins[i:stop];stores=[r for r in segment if re.fullmatch(r'(?:mov\s+DWORD PTR \[ebx\+0x[0-9a-f]+\],eax|fstp\s+DWORD PTR \[ebx\+0x[0-9a-f]+\])',r[2])];assert len(stores)==1
 store=stores[0];off=int(re.search(r'\[ebx\+0x([0-9a-f]+)\]',store[2])[1],16)
 handled=[r for r in segment if r[2]=='mov    DWORD PTR [esi+0xc],0x1'];ret=[r for r in segment if r[2]=='ret    0x4'];assert len(handled)==len(ret)==1
 calls=[dict(address=hex(r[0]),operation=r[2],bytes_hex=r[1].hex())for r in segment if r[2].startswith('call')]
 e['key_branches'].append(dict(key=st(ptr),key_pointer=hex(ptr),branch_start=hex(a),next_branch=hex(ins[stop][0]),storage_offset=hex(off),conversion='signed32 atoi' if k<32 else 'x87 ST0 to float32' if k<64 else 'engine AllocString string_t',store_address=hex(store[0]),store_bytes=store[1].hex(),handled_address=hex(handled[0][0]),ret_address=hex(ret[0][0]),calls=calls))
e['vtables']=[]
vt=0x101b5a20;v=keep(vt,0x18,'CPhoneCall vtable first six slots, factory1005fba8')
col=struct.unpack('<I',keep(vt-4,4,'RTTI locator pointer'))[0];cx=keep(col,20,'complete object locator');sig,off,cd,td,ch=struct.unpack('<5I',cx)
keep(td,8,'RTTI type descriptor header');rtti=st(td+8);keep(ch,16,'RTTI class hierarchy descriptor')
e['vtables'].append(dict(address=hex(vt),rtti_name=rtti,locator=hex(col),type_descriptor=hex(td),class_hierarchy=hex(ch),slots=[dict(offset=hex(i*4),target=hex(struct.unpack_from('<I',v,i*4)[0]))for i in range(6)]))
# Additional observed pointer to the primary, scanned only in the bounded vtable
# prefix. Exact slot is retained without inferring unsupported adjacent layouts.
e['keyvalue_binding']=[]
for i in range(0,0x100,4):
 if raw(vt+i,4)[0]==struct.pack('<I',0x10060140):keep(vt+i,4,'KeyValue virtual binding');e['keyvalue_binding'].append(dict(vtable=hex(vt),offset=hex(i),target='0x10060140'))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw',len(e['key_branches']),'keys',e['keyvalue_binding'])
