"""Static saved-C/PE/ASM evidence for CSubtitleMultiple lifecycle, save/restore, callbacks and factory."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10102fe0 10103040 10103df0 10103e00 10103e40 10103ea0 10103f00 10103f60'.split()
SUPPORT='1000e1f0 1000db80 10017110 10118460 10118480 1005fbc0 100b4aa0 10017f30 10018000 10117010 1011adc0 10119fe0'.split()

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
e['vtables']=[]
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('MONSTER',0x10216e08,49),('BASE',0x10211760,22),('SUBTITLE_MULTIPLE',0x10219bd8,4)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)

header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [14,21,28,61,63,70]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['vtables']=[dict(address='0x101df634',slots=[dict(offset=hex(i*4),target=hex(t)) for i,t in enumerate(struct.unpack('<71I',keep(0x101df634,0x11c,'CSubtitleMultiple factory vtable through offset118')))])]
e['explicit_strings']=[dict(address=hex(a),text_latin1=st(a))for a in [0x101df750,0x101b5fb4,0x101a2130,0x101b5fc4]]
e['zero_fill_global']=dict(address='0x10222f34',size=12,sections=pe['sections'],limitation='Virtual tail has no file bytes; loader zero-fill is not proof of value after runtime initialization.')
e['literals']=[dict(address='0x101a1370',bytes_hex=keep(0x101a1370,4,'float zero').hex())]
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print(len(e['source_c']),len(e['ranges']))
