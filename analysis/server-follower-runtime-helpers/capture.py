"""Static saved-C/PE/ASM evidence for follower return gates, target distance and player-touch reaction."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10104020 10104f50 10106430 101064f0'.split()
SUPPORT='100b4aa0 10017780 100177a0 10017ba0 100c00f0 1011a930 10105f30 10104a10 10105410'.split()

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
for cls,a,n in [('ENTVARS',0x1021aae0,102),('MONSTER',0x10216e08,49),('BASE',0x10211760,22)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
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
e['support_documents']=[ref(ROOT/p) for p in ['analysis/server-follower-behavior/contract.md','analysis/server-follower-gates/contract.md','analysis/server-follower-tasks/contract.md','analysis/server-follower-speech-policy/contract.md','analysis/server-monster-navigation/contract.md','external/hlsdk-portable/engine/progdefs.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['constants']=[dict(address=hex(a),size=n,bytes_hex=keep(a,n,label).hex(),label=label) for a,n,label in [(0x101bbb68,4,'distance fallback float32'),(0x101a1efc,4,'touch speed threshold float32'),(0x101a1f90,16,'double sign clearing XMM mask'),(0x101a13e0,16,'support yaw sign flip XMM mask')]]
e['accounting']=dict(new_primary=PRIMARY,prior_review_count=1857,prior_function_blocks=ref(OUT/'prior-function-blocks.txt'),support_review_count=0)
e['exact_le32_data_refs']=dict(method='All byte offsets in raw .rdata/.data, preferred-base exact function VA only. Not complete xrefs or runtime binding.',sections=[],targets={})
for sec in pe['sections']:
 if sec['name'] not in ['.rdata','.data']:continue
 e['exact_le32_data_refs']['sections'].append(dict(name=sec['name'],rva=sec['rva'],raw_offset=sec['raw_offset'],raw_size=sec['raw_size'],sha256=h(b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']])))
for a in PRIMARY:
 hits=[]
 for sec in e['exact_le32_data_refs']['sections']:
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];pos=0
  while (pos:=data.find(struct.pack('<I',int(a,16)),pos))>=0:
   va=BASE+int(sec['rva'],16)+pos;keep(va,4,'exact function VA data literal');hits.append(hex(va));pos+=1
 e['exact_le32_data_refs']['targets']['0x'+a]=hits
e['saved_c_callers']=[]
for a in PRIMARY:
 for p in (ROOT/'decompiled/server').rglob('*.c'):
  s=p.read_text(encoding='utf8');body=s.split('// pseudocode: provider-specific; not original source')[-1]
  if p.stem!='0x'+a and 'FUN_'+a+'(' in body:
   entry=re.search(r'// address: (0x[0-9a-f]+)',s)
   e['saved_c_callers'].append(dict(callee='0x'+a,entry=entry[1] if entry else None,**ref(p),scope='Saved C lexical direct call, not exhaustive native call graph'))


(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
