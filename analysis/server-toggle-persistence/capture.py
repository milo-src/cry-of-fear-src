"""Static saved-C/PE/ASM evidence for toggle and delay persistence plus inherited fog virtual accessors."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10102b20 10102890 10102ac0 10102850 10010920 101022c0 100102c0 100101f0'.split()
SUPPORT='1000eaa0 1000ea60 10018000 10017f30 100b4aa0'.split()

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



header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [2,61]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-serializer/contract.md','analysis/server-parent-tree/contract.md','analysis/server-animation-state/contract.md','analysis/server-fogfield/contract.md','analysis/server-queue-b/contract.md']]
e['vtables']=[]
for a,slots in [(0x101a4434,[0x38,0x3c,0x40,0x5c,0x80,0x98]),(0x101bf290,[0x5c,0x80,0x98]),(0x101bf59c,[0x5c,0x80,0x98])]:
 x=keep(a,0x9c,'concrete vtable prefix');col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'COL'));e['vtables'].append(dict(address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in slots],rtti_name=st(f[3]+8)))
e['save_tables']=[]
for a,n,name in [(0x1021aae0,102,'ENTVARS'),(0x10211760,22,'BASE'),(0x10219a68,3,'DELAY'),(0x10211178,5,'ANIMATING'),(0x10219a98,20,'TOGGLE')]:
 x=keep(a,n*16,name+' descriptors');rows=[]
 for i in range(n):
  ty,nm,off,c,fl=struct.unpack_from('<IIIhH',x,i*16);rows.append(dict(record_va=hex(a+i*16),type_id=ty,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(dict(address=hex(a),name=name,fields=rows))
e['literals']=[dict(address=hex(a),text=st(a))for a in [0x101df4e0,0x101df47c]]
keep(0x101022e8,16,'toggle-state unsigned index jump table')
e['jump_table']={'address':'0x101022e8','targets':[hex(i)for i in struct.unpack('<4I',raw(0x101022e8,16)[0])]}
e['exports']=[]
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA');e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print(len(e['source_c']),len(e['ranges']),len(e['raw']))
