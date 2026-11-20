"""Static saved-C/PE/ASM evidence for native scriptsettings unlock readers and rewrites."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100dd000 100e0db0 100e1690 100f2ed0'.split()
SUPPORT='100b4aa0 1013dbb3 1013f5f0 1002f550 1002f8d0 10049b60 100493b0 100f9d20 100f9db0 1004a510 100308f0 100e0a80 1002f350 1002f49f'.split()

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
# CRT tokenizer has no saved-C body; ranges bounded through native RET.
for name,start,end in [('101743ff',0x101743ff,0x1017441d),('101893e6',0x101893e6,0x101894d2),('10174706',0x10174706,0x10174770),('10174843',0x10174843,0x101748f1),('10189514',0x10189514,0x1018953c),('10189547',0x10189547,0x10189574)]:
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)]
 t=subprocess.check_output(cmd,text=True);p=OUT/f'{name}-native.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
 for line in t.splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
 assert pos==end
 e['ranges'].append(dict(**ref(p),command=cmd,entry=hex(start),start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0]),scope='ASM-only CRT support; no new review'))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]
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
# Read native PE import descriptors/ILT/IAT for the exact file-operation calls.
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24;imp=BASE+struct.unpack_from('<I',b,opt+104)[0]
e['file_imports']=[]
for i in range(128):
 a=imp+i*20;desc=raw(a,20)[0];oft,stamp,chain,name,iat=struct.unpack('<5I',desc)
 if not any(desc):break
 for j in range(4096):
  va=BASE+(oft or iat)+4*j;v=struct.unpack('<I',raw(va,4)[0])[0]
  if v==0:break
  slot=BASE+iat+4*j
  if slot not in [0x101a1160,0x101a1164,0x101a10d0]:continue
  assert not(v&0x80000000)
  keep(a,20,'PE import descriptor for file-operation binding');keep(va,4,'PE ILT entry');keep(slot,4,'PE IAT entry');keep(BASE+v,2,'PE import hint')
  e['file_imports'].append(dict(iat=hex(slot),dll=st(BASE+name),name=st(BASE+v+2),descriptor=hex(a),ilt=hex(va),hint_name=hex(BASE+v)))
assert {x['iat']:x['name']for x in e['file_imports']}=={'0x101a1160':'DeleteFileW','0x101a1164':'MoveFileExW','0x101a10d0':'GetLastError'}
# Exact tokens: native order is powers of two with 0x20 moved to the end.
keep(0x101dd384,20,'GetGameDir source suffix including NUL/padding')
keep(0x101dd398,9,'GetGameDir temporary suffix including NUL')
line_map=[15,7,45,22,3,83,39,51,52,53,54,55,56,57,58,59,60,61,62,70,71,72,73,74,75,76,77,78,79,80,81,82]
order=[i for i in range(32) if i!=5]+[5]
e['tokens']=[]
for ordinal,bit in enumerate(order):
 rf=0x101dcd84+ordinal*0x30;wf=0x101dd3a4+ordinal*0x30
 f,t=st(rf),st(rf+0x18);fw,tw=st(wf),st(wf+0x18)
 assert fw==f+'\n' and tw==t+'\n'
 e['tokens'].append(dict(mask=f'0x{1<<bit:08x}',ordinal_decimal=line_map[bit],false_address=hex(rf),true_address=hex(rf+0x18),false_token=f,true_token=t,writer_false_address=hex(wf),writer_true_address=hex(wf+0x18)))
for line,rf,wf in [(47,0x101dcd24,0x101dd9a4),(48,0x101dcd54,0x101dd9d4)]:
 f,t,fw,tw=st(rf),st(rf+0x18),st(wf),st(wf+0x18)
 assert fw==f+'\n' and tw==t+'\n'
 e['tokens'].append(dict(special_flag_ordinal_decimal=line,ordinal_decimal=line,false_address=hex(rf),true_address=hex(rf+0x18),false_token=f,true_token=t,writer_false_address=hex(wf),writer_true_address=hex(wf+0x18)))
e['delimiter']=dict(address='0x101a84c8',value=st(0x101a84c8))
# Bounded symbolic replay of only the native selector trees, never target code.
# Every instruction is read from byte-verified ASM; unsupported operations abort.
def selector(entry,start,stop,mask,output):
 t=(OUT/f'{entry}-0.asm').read_text();ins={}
 for line in t.splitlines():
  parts=line.split('\t')
  if len(parts)>=3 and parts[-1].strip() and re.fullmatch(r'[0-9a-f]+:',parts[0].strip()):ins[int(parts[0][:-1],16)]=parts[-1].strip()
 seq=sorted(ins);nxt=dict(zip(seq,seq[1:]));regs={'edi':mask,'esi':mask,'eax':0};mem={};pc=start;cmp=0;trace=[]
 def val(x):
  if x in regs:return regs[x]
  if x.startswith('0x'):return int(x,16)
  raise ValueError(x)
 def signed(x):return x if x<0x80000000 else x-0x100000000
 for _ in range(100):
  if pc==stop:return (mem['DWORD PTR [ebp-0x2c]'] if output=='local' else regs[output]),trace
  trace.append(hex(pc));op,*args=ins[pc].split(None,1);a=args[0].split(',') if args else [];jump=None
  if op=='cmp':cmp=signed(val(a[0]))-signed(val(a[1]))
  elif op in ('jg','je','jne','jmp'):
   if op=='jmp' or (op=='jg' and cmp>0)or(op=='je'and cmp==0)or(op=='jne'and cmp!=0):jump=int(a[0],16)
  elif op=='mov':
   if a[0].startswith('DWORD PTR'):mem[a[0]]=val(a[1])
   else:regs[a[0]]=val(a[1])
  elif op=='lea':
   m=re.fullmatch(r'\[(esi|edi)([+-])(0x[0-9a-f]+)\]',a[1]);assert m,ins[pc]
   regs[a[0]]=(regs[m[1]]+(1 if m[2]=='+' else -1)*int(m[3],16))&0xffffffff
  else:raise ValueError((hex(pc),ins[pc]))
  pc=jump if jump is not None else nxt[pc]
 raise AssertionError('selector loop')
e['selection_paths']=[]
for entry,start,stop,out in [('100dd000',0x100dd08e,0x100dd354,'local'),('100e0db0',0x100e0e27,0x100e10c4,'local'),('100e1690',0x100e17e7,0x100e1a38,'edi'),('100f2ed0',0x100f303b,0x100f32c5,'edi')]:
 for token in e['tokens']:
  if 'mask' not in token:continue
  got,trace=selector(entry,start,stop,int(token['mask'],16),out)
  assert got==token['ordinal_decimal'],(entry,token,got)
  e['selection_paths'].append(dict(function='0x'+entry,mask=token['mask'],ordinal_decimal=got,instruction_addresses=trace))
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/'analysis/server-player-equipment/contract.md')]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
