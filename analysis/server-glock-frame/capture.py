"""Static saved-C/PE/ASM evidence for CGlock frame and shared reload completion."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10046220 100f5da0 1011d560'.split()
SUPPORT='10045580 10047ea0 10046dc0 100475b0 1011c560 10120210 1000f390 10046c30 100456c0 10045c40 100478e0 10047a70 1011f640 1011f5d0 1011f680 1001f050 1011bfc0 100e4ed0 100f5eb0 1002f180 1001e990 10116a40 100fc9f0 10119c00 10119de0 100b4aa0 100e5fc0 1011ab20 100459b0 1001e930 1001e0c0 1001ec60 10045ac0 1011fb60 1011e510 1011f5c0'.split()

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

e['accounting']=dict(new_primary=PRIMARY[:2],updated_existing=PRIMARY[2:],support_review_count=0,baseline_reviewed=1971,baseline_pending=6684)
e['prior_review']=ref(OUT/'prior-review.txt')
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-glock-attacks/contract.md','analysis/server-resource-precache/contract.md','analysis/server-item-rules/contract.md','analysis/network/usermessage-registry.md','analysis/network/playsfx-server-contract.md','analysis/network/playsfx-server-evidence.json','analysis/network/playsfx-server-evidence-weapon-frame.asm','analysis/network/playsfx-client-contract.md','analysis/server-bullet-traces/contract.md','analysis/server-spread-application/contract.md','analysis/server-visibility-policy/contract.md','analysis/server-skill-refresh/contract.md','external/hlsdk-portable/engine/eiface.h','external/hlsdk-portable/common/const.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
e['vtables']=[]
for cls,a,n in [('CGlock',0x101b0524,0x1d8),('CBasePlayer',0x101a4da8,0x22c)]:
 x=keep(a,n,cls+' native vtable prefix');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'COL'));r['col']=hex(col);r['rtti_name']=st(f[3]+8)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI class hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'base descriptor array'));r['bases']=[]
 for d in ds:
  z=struct.unpack('<6I',keep(d,24,'RTTI base descriptor'));r['bases'].append(dict(name=st(z[0]+8),mdisp=z[2],pdisp=z[3],vdisp=z[4]))
 e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('PLAYER',0x10217fe8,207),('ENTVARS',0x1021aae0,102),('ITEM',0x1021b188,26),('WEAPON',0x1021b328,27)]:
 x=keep(a,n*16,cls+' descriptors');r=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  ty,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);r['fields'].append(dict(type_id=ty,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(r)
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['primary_data_operands']=[];e['literals']=[]
for a in PRIMARY:
 t=(OUT/(a+'-0.asm')).read_text()
 for ptr in sorted(set(int(x,16)for x in re.findall(r'0x(101[a-f][0-9a-f]{4})',t))):
  keep(ptr,16,'primary absolute operand '+a);e['primary_data_operands'].append(dict(entry=a,address=hex(ptr)))
  try:
   x=raw(ptr,256)[0].split(b'\0',1)[0]
   if x and all(c in (9,10,13)or 32<=c<127 for c in x):e['literals'].append(dict(address=hex(ptr),text=st(ptr)))
  except ValueError:pass
e['frame_constants']=[dict(address=hex(a),value=struct.unpack(fmt,keep(a,struct.calcsize(fmt),'frame scalar '+name))[0],format=fmt,name=name)for a,fmt,name in [(0x101a1e48,'<d','half'),(0x101a9900,'<d','exit-primary-delay'),(0x101a1e28,'<d','exit-idle-delay'),(0x101a9724,'<f','lock-delay'),(0x101a9720,'<f','default-rage-period')]]
e['extra_literals']=[dict(address=hex(a),text=st(a))for a in [0x101dadec,0x101adf18]]
OUT.joinpath('evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')

