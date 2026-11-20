"""Static saved-C/PE/ASM evidence for weapon animation and mobile callbacks."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10053210 100534d0 100e4e00'.split()
SUPPORT='10052e30 1011ab20 1011f680 1011f5d0 1011f640 100b4aa0 1011d560 1002f8d0 1002f550 100308f0 10117f60 10119680 10119810 10017780 100e5fc0 1013dbb3 1013dd48 1002f350 1002f49f 10017ba0 10037300 1002f290 10030290 100fc9f0'.split()

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


e['accounting']=dict(new_primary=PRIMARY,updated_existing=[],support_review_count=0,baseline_reviewed=1910,baseline_pending=6745,prior_function_blocks=ref(OUT/'prior-function-blocks.txt'))
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-weapon-animation/contract.md','analysis/server-map-equipment-parser/contract.md','analysis/graphics/engine-message-buffer-contract.md','external/hlsdk-portable/engine/eiface.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
vt=0x101b26c8;x=keep(vt,0x1d8,'CMobile full observed vtable prefix before model literal');col=struct.unpack('<I',keep(vt-4,4,'RTTI pointer'))[0];sig,off,cd,td,ch=struct.unpack('<5I',keep(col,20,'COL'));keep(td,8,'type descriptor header');name=st(td+8);keep(ch,16,'class hierarchy')
e['vtables']=[dict(address=hex(vt),locator=hex(col),type_descriptor=hex(td),class_hierarchy=hex(ch),rtti_name=name,slots=[dict(offset=hex(i*4),target=hex(v))for i,v in enumerate(struct.unpack('<118I',x))])]
# Pin all direct absolute data operands in captured primary ASM: literals are
# decoded only where a specific instruction establishes their size/role.
e['primary_data_operands']=[]
for a in PRIMARY:
 t=(OUT/(a+'-0.asm')).read_text()
 for ptr in sorted(set(int(q,16)for q in re.findall(r'0x(10[12][0-9a-f]{5})',t))):
  try:keep(ptr,16,'primary absolute operand '+a);e['primary_data_operands'].append(dict(entry=a,address=hex(ptr)))
  except ValueError:pass
e['save_tables']=[]
for cls,a,n in [('PLAYER',0x10217fe8,207),('ENTVARS',0x1021aae0,102),('ITEM',0x1021b188,26),('WEAPON',0x1021b328,27)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  ty,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=ty,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
e['literals']=[]
for a in [0x101a8bbc,0x101adb4c,0x101adb6c,0x101adb9c,0x101adbcc,0x101adbfc,0x101adc30,0x101adc60,0x101adc90,0x101b08b8,0x101dad3c]:e['literals'].append(dict(address=hex(a),text=st(a)))
x=keep(0x100537d8,32,'CVar integer selector table0..7');e['language_switch']=[dict(value=i,target=hex(a))for i,a in enumerate(struct.unpack('<8I',x))]
e['suffix_copy_bytes']=[dict(value=v,address=hex(a),bytes=keep(a,n,'literal append entire native copy').hex(),count=n)for v,a,n in [(0,0x101adb4c,29),(2,0x101adb6c,45),(3,0x101adb9c,46),(4,0x101adbcc,46),(5,0x101adbfc,49),(6,0x101adc30,47),(7,0x101adc60,47)]]
e['unread_sms_registration']=dict(name='UnreadSMS',size=2,global_address='0x10226578',source_c='decompiled/server/partial-pass/functions/0x100e5fc0.c',source_asm='analysis/server-mobile-frame/100e5fc0-0.asm')
OUT.joinpath('evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')


