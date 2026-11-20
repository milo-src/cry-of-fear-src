"""Static saved-C/PE/ASM evidence for CMobile lifecycle, deploy, ItemInfo, resource precache and factory."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10052e30 10052e90 10053150 10053880 10053bc0 10053bb0 10053e50'.split()
SUPPORT='100b4aa0 10116990 10116a30 10116940 1011d150 10119fe0 1011a030 1011c1a0 1011f640 10120210 1011d560 1011e520 1011f680 1000f390 1011ab20'.split()

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
for cls,a,n in [('ENTVARS',0x1021aae0,102),('BASE',0x10211760,22),('ITEM',0x1021b188,26)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)

header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [0,1,2,14,21,28,46,47,48,50,61,63,67,70,74,95,96]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h','external/hlsdk-portable/dlls/weapons.h','analysis/server-item-lifecycle/contract.md','analysis/server-world-bootstrap/contract.md','analysis/graphics/custom-texture-server.md']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['vtables']=[dict(address='0x101b26c8',slots=[dict(offset=hex(i*4),target=hex(t)) for i,t in enumerate(struct.unpack('<118I',keep(0x101b26c8,0x1d8,'CMobile factory vtable through offset1d4')))])]
e['explicit_strings']=[]
e['diagnostic_clip_string']=dict(address='0x101e6774',text_latin1=st(0x101e6774))
seen=set()
for address in PRIMARY:
 text=(OUT/(address+'-0.asm')).read_text()
 for token in re.findall(r'0x(101[a-f][0-9a-f]{4})',text):
  a=int(token,16)
  if a in seen:continue
  data=raw(a,1)[0];value=bytearray();pos=a
  while data!=b'\0'and len(value)<200:
   if not(32<=data[0]<=126):break
   value+=data;pos+=1;data=raw(pos,1)[0]
  if data==b'\0'and len(value)>2:
   seen.add(a);e['explicit_strings'].append(dict(address=hex(a),text_latin1=st(a)))


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
e['baseline_progress_report']=ref(ROOT/'analysis/full-reverse-pass20-verification.json')
# RTTI from actual factory vptr, no class identity inferred from SDK.
a=struct.unpack('<I',keep(0x101b26c4,4,'CMobile vtable COL pointer'))[0]
col=struct.unpack('<5I',keep(a,20,'CMobile complete object locator'))
keep(col[3],8,'RTTI type descriptor header');name=st(col[3]+8)
e['rtti']=dict(col=hex(a),type_descriptor=hex(col[3]),name=name)

(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print(len(e['source_c']),len(e['ranges']))
