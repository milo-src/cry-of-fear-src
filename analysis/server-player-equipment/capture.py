"""Static saved-C/PE/ASM evidence for native map equipment and player item creation."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100ba160 100bb810 100bafb0 100bb0f0 100bb2c0 100ba490 100ba460 100baf80 100ba510 100babd0 100e0a80 100e0ce0 100af7e0'.split()
SUPPORT='100b4aa0 1013dbb3 10119060 1011a760 100e4c30 100e4d60 100167d0 10016980 100dd000 101411d6 100c9210 100fc4d0 1000d450 1000d480 1000db80 100baeb0 100badb0 1013f5f0 100125e0 100135b0 100fc0f0'.split()

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
for cls,a,n in [('CGamePlayerEquip',0x101d4528,0xfc),('CBasePlayer',0x101a4da8,0xfc)]:
 x=keep(a,n,cls+' vtable');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));keep(f[3],8,'RTTI type prefix');nm=st(f[3]+8);assert nm=='.?AV'+cls+'@@';r['rtti_name']=nm;r['col']=hex(col)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptors'));r['bases']=[]
 for d in ds:
  v=struct.unpack('<6I',keep(d,24,'RTTI base class descriptor'));r['bases'].append(dict(name=st(v[0]+8),mdisp=v[2],pdisp=v[3],vdisp=v[4]))
 e['vtables'].append(r)
e['cast_types']=[]
for a in [0x1021d650,0x1021d66c]:
 keep(a,8,'dynamic_cast TypeDescriptor prefix');e['cast_types'].append(dict(address=hex(a),name=st(a+8)))
# Engine export table: preserve exact record+name+ordinal+EAT slot.
nt=struct.unpack_from('<I',b,0x3c)[0];erv,esz=struct.unpack_from('<II',b,nt+24+96)
ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));e['exports']=[]
for i in range(ex[7]):
 nm=struct.unpack('<I',raw(BASE+ex[9]+4*i,4)[0])[0];a=BASE+nm;x=bytearray()
 while raw(a+len(x),1)[0]!=b'\0':x+=raw(a+len(x),1)[0]
 if x==b'game_player_equip':
  keep(BASE+ex[9]+4*i,4,'export name pointer');st(a)
  ix=struct.unpack('<H',keep(BASE+ex[10]+2*i,2,'export ordinal index'))[0]
  va=BASE+struct.unpack('<I',keep(BASE+ex[8]+4*ix,4,'export EAT slot'))[0]
  e['exports'].append(dict(name=x.decode(),ordinal=ex[5]+ix,address=hex(va)))
assert e['exports'][0]['address']=='0x100bb810'
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('PLAYER',0x10217fe8,207)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
for a in [0x101aeb58,0x101aa314,0x101bcd78,0x101b4484,0x101a8790,0x101db850,0x101a52a0,0x101a247c,0x101a2488,0x101a2490]:st(a)
x=keep(0x10216cf8,16,'CRuleEntity native descriptor');t,nm,off,c,fl=struct.unpack('<IIIhh',x)
e['rule_master_descriptor']=dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl)
# Retain immediate strings and raw static float operands from the exact bounded ASM.
for r in e['ranges']:
 t=(ROOT/r['path']).read_text(encoding='utf8')
 for m in re.finditer(r'(DWORD|QWORD) PTR ds:0x(101[a-f][0-9a-f]{4})',t):
  keep(int(m[2],16),4 if m[1]=='DWORD' else 8,'native literal operand')
 for a in [int(x,16)for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',t)]:
  try:
   x,off=raw(a,256);v=x.split(b'\0',1)[0]
   if v and all(c in (9,10,13)or 32<=c<127 for c in v):st(a)
  except (ValueError,UnicodeDecodeError):pass
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-multiplayer-flow/contract.md','analysis/server-rules-bootstrap/contract.md','analysis/server-dispatch/contract.md','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
