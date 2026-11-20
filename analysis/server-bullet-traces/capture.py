"""Static evidence for generic/seeded bullet traces and bubble trails."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100884f0 10088ca0 10117b40'.split()
SUPPORT='100b4aa0 100125e0 1011c070 1011b8f0 1011b640 1011a050 1011a800 101180b0 10117fe0 1011aa30 10017780 10018440 10018500 10118460 1002c950 1002d690 1002cf50 1000db00 10013ef0 100bf7f0 10119780'.split()

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text();e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode()[:-1]
e['vtables']=[]
for cls,a,n in [('CGenericMonster',0x101ce36c,0x23c),('CBasePlayer',0x101a4da8,0x23c)]:
 x=keep(a,n,cls+' vtable');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));keep(f[3],8,'RTTI type prefix');nm=st(f[3]+8);assert nm=='.?AV'+cls+'@@';r['rtti_name']=nm;r['col']=hex(col)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptors'));r['bases']=[]
 for d in ds:
  v=struct.unpack('<6I',keep(d,24,'RTTI base class descriptor'));r['bases'].append(dict(name=st(v[0]+8),mdisp=v[2],pdisp=v[3],vdisp=v[4]))
 e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('MONSTER',0x10216e08,49)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
e['data_operands']=[]
for r in e['ranges']:
 if r['entry'][2:] not in PRIMARY:continue
 text=(ROOT/r['path']).read_text()
 for address in sorted(set(int(x,16) for x in re.findall(r'(?:ds:|,|\s)0x([0-9a-f]{8})',text))):
  if 0x101a0000<=address<0x10230000:
   try:
    v=keep(address,16,'primary ASM direct data operand');e['data_operands'].append(dict(entry=r['entry'],address=hex(address),bytes_hex=v.hex()))
   except ValueError:pass
# Selected real PE export bindings, distinct from Ghidra function-name hints.
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24
erv,esz=struct.unpack_from('<II',b,opt+96);ea=BASE+erv
ex=struct.unpack('<IIHHIIIIIII',keep(ea,40,'PE export directory'))
ordinalbase,nfunc,nnames,funcs,names,ords=ex[5:]
e['exports']=[]
wanted=set(int(a,16) for a in PRIMARY)
for i in range(nnames):
 nrva=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0]
 ordidx=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0]
 frva=struct.unpack('<I',raw(BASE+funcs+4*ordidx,4)[0])[0]
 if BASE+frva in wanted:
  keep(BASE+names+4*i,4,'selected export name pointer');keep(BASE+ords+2*i,2,'selected export ordinal index');keep(BASE+funcs+4*ordidx,4,'selected export target RVA')
  e['exports'].append(dict(name=st(BASE+nrva),entry=hex(BASE+frva),ordinal=ordinalbase+ordidx,name_index=i))
e['literals']=[]
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-radius-damage/contract.md','analysis/server-spread-callers/contract.md','analysis/server-event-effects/contract.md','analysis/movement/health-stamina.md','external/hlsdk-portable/common/const.h','external/hlsdk-portable/engine/progdefs.h']]

e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
# Preserve native literal pointers from all primary immediates where bytes are printable strings.
seen=set()
for row in e['data_operands']:
 a=int(row['address'],16)
 if a in seen:continue
 seen.add(a)
 try:
  v=raw(a,1)[0][0]
  if 32<=v<=126:
   n=0
   while (32<=raw(a+n,1)[0][0]<=126 or raw(a+n,1)[0] in [b'\n',b'\t']):
    n+=1
    if n>250:break
   if n>3 and raw(a+n,1)[0]==b'\0':e['literals'].append(dict(address=hex(a),text=st(a)))
 except (ValueError,UnicodeDecodeError):pass
e['doctor_dispatch_tables']=[dict(address=hex(a),targets=[hex(v) for v in struct.unpack('<4I',keep(a,16,'doctor target index switch'))]) for a in [0x10088c84,0x10089674]]
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')

