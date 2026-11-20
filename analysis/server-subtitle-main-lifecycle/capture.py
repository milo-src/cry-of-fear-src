"""Static saved-C/PE/ASM evidence for CSubtitle main lifecycle, KeyValue, save/restore and factory."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='1005fbc0 100772e0 10077440 10077480 100774e0 10077910'.split()
SUPPORT='1000db80 100b4aa0 10017f30 10018000 10117010 1011adc0 10119fe0 1016b55e 1016a01f 10169fb8'.split()

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
# Bounded native-only converter supports: first three complete through RET;
# last is an explicitly partial prologue proving byte-oriented input, not all float grammar.
for a,end,label in [(0x1016f5ec,0x1016f5ff,'complete numeric wrapper'),(0x1016da44,0x1016daa8,'complete local double conversion wrapper'),(0x1016db80,0x1016dbf4,'complete scanner/result wrapper'),(0x1016dc68,0x1016dcfd,'partial narrow-byte scanner prologue')]:
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a:08x}-bounded.asm';p.write_text(t,encoding='utf8',newline='\n');pos=a
 for line in t.splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
 assert pos==end
 e['ranges'].append(dict(**ref(p),command=cmd,entry=hex(a),start=hex(a),end_exclusive=hex(end),binary_range_sha256=h(raw(a,end-a)[0]),scope=label,primary=False,saved_c=False))


def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]
e['vtables']=[]
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('BASE',0x10211760,22),('SUBTITLE',0x10212e28,1)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)

header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [14,21,28,61,63,67,70]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h','analysis/server-subtitle-multiple-keyvalue/contract.md','analysis/server-serializer/contract.md','analysis/server-alias-state/contract.md']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['vtables']=[dict(address='0x101b5900',slots=[dict(offset=hex(i*4),target=hex(t)) for i,t in enumerate(struct.unpack('<71I',keep(0x101b5900,0x11c,'CSubtitle factory vtable through offset118')))])]
e['explicit_strings']=[dict(address=hex(a),text_latin1=st(a))for a in [0x101bb290,0x101bb29c,0x101b5fb4,0x101a247c,0x101a2488,0x101a2490]]
e['zero_fill_global']=dict(address='0x10222f34',size=12,sections=pe['sections'],limitation='Virtual tail has no file bytes; loader zero-fill is not proof of value after runtime initialization.')
e['literals']=[dict(address='0x101a1370',bytes_hex=keep(0x101a1370,4,'float zero').hex())]
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))

# Keep the initial pending blocks on replay; local snapshots are not required.
old=OUT/'evidence.json'
if old.exists():
 prior=json.loads(old.read_text(encoding='utf8'));pending=prior.get('pending_check')
else:pending=None
if pending is None:
 cat=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf8');blocks={}
 for a in PRIMARY:
  block=re.search(r'\[FUNCTION server:0x'+a+r'\].*?\[/FUNCTION\]',cat,re.S).group();assert 'REVIEW'not in block;blocks[a]=block
 pending=dict(entries=PRIMARY,blocks=blocks)
e['pending_check']=pending
e['baseline_progress_report']=ref(ROOT/'analysis/full-reverse-pass19-verification.json')
# RTTI from actual factory vptr, no class identity inferred from SDK.
a=struct.unpack('<I',keep(0x101b58fc,4,'CSubtitle vtable COL pointer'))[0]
col=struct.unpack('<5I',keep(a,20,'CSubtitle complete object locator'))
keep(col[3],8,'RTTI type descriptor header');name=st(col[3]+8)
e['rtti']=dict(col=hex(a),type_descriptor=hex(col[3]),name=name)

(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print(len(e['source_c']),len(e['ranges']))
