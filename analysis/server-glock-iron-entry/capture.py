"""Static saved-C/PE/ASM evidence for CGlock iron entry and complete item-description parser."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10045f20 100dff70'.split()
SUPPORT='10045c40 10047c00 10046220 1011f5d0 1000f390 1016b55e 1013dbb3 100b4aa0 100e5fc0 100c6de0'.split()

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

e['accounting']=dict(new_primary=PRIMARY[:1],updated_existing=PRIMARY[1:],support_review_count=0,baseline_reviewed=2005,baseline_pending=6650)
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-glock-actions/contract.md','analysis/server-glock-frame/contract.md','analysis/server-resource-precache/contract.md','analysis/inventory/behavior.md','analysis/server-glock-attacks/contract.md','analysis/server-client-effects/contract.md','analysis/server-weapon-animation/contract.md','analysis/server-phone-call-keyvalue/contract.md','analysis/server-state-reader/contract.md','analysis/network/usermessage-registry.md','external/hlsdk-portable/engine/eiface.h']]
catalog=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf8');e['pending_checks']=[]
for a in PRIMARY:
 block=catalog.split('[FUNCTION server:0x'+a+']',1)[1].split('[/FUNCTION]',1)[0];assert ('[REVIEW'in block)==(a=='100dff70');e['pending_checks'].append(dict(entry='0x'+a,block=block))
e['prior_review']=ref(OUT/'prior-review.txt')
e['legacy_capture']=ref(ROOT/'decompiled/server/captures/ghidra-inventory-batch/004-pseudocode.c')
e['baseline_report']=ref(ROOT/'analysis/full-reverse-pass25-verification.json')
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
# One previously bounded CRT wrapper, assembly-only; no fabricated C/card.
start=0x1016f5ec;end=0x1016f5ff;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/'1016f5ec-wrapper.asm';p.write_text(t,encoding='utf8',newline='\n')
e['ranges'].append(dict(**ref(p),command=cmd,entry=hex(start),start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0]),assembly_only=True,boundary='Existing exact wrapper entry through RET1016f5fe; no saved C/card.'))
e['explicit_literals']=[dict(address=hex(a),text=st(a))for a in [0x101a2496,0x101b17e0,0x101b1774,0x101b1778,0x101b17a8,0x101b17e8,0x101aec48,0x101aec5c,0x101aec6c,0x101aec7c]]
e['constants']=[dict(address=hex(a),value=struct.unpack(fmt,keep(a,struct.calcsize(fmt),'scalar '+name))[0],format=fmt,name=name)for a,fmt,name in [(0x101a1378,'<d','exit_delay'),(0x101a1390,'<f','one'),(0x101a1370,'<f','zero'),(0x101a1ee0,'<f','ten')]]
j=json.loads((ROOT/'analysis/network/usermessage-registry.json').read_text(encoding='utf8'));e['message_registry']=ref(ROOT/'analysis/network/usermessage-registry.json');e['messages']=[{k:m[k]for k in ['name','id_global','registered_size','registration_line']}for m in j['messages']if m['name']in ['IronSights','CameraZoom']]
for m in e['messages']:
 ptr={'IronSights':0x101dafa4,'CameraZoom':0x101dae3c,'ControlHint':0x101dafc4}[m['name']];m['name_va']=hex(ptr);assert st(ptr)==m['name']
OUT.joinpath('evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')

