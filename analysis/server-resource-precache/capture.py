from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path.cwd();OUT=ROOT/'analysis/server-resource-precache';OUT.mkdir(exist_ok=True);sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='1001cf70 101218a0 100c6de0 100fef60 100fedc0'.split()
SUPPORT='10100410 10120eb0 10116990 10116a30 10119790 100b4aa0 1013dbb3'.split()

def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n];return dict(address=f'0x{a:08x}',end_exclusive=f'0x{a+n:08x}',file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,256):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError(hex(a))
j=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,method='Saved C, static objdump and PE byte reads; no REA session or target execution.',source_c=[],ranges=[],literals=[],vtables=[],save_tables=[],export_thunks=[])
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in IDS else 'support'))
 rr=re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 for k,r in enumerate(rr):
  start=int(r[0],16);end=int(r[1],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/(f'{a}.asm' if k==0 else f'{a}-{k}.asm');text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
  for line in text.splitlines():
   m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
   if m:
    addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
  assert pos==end
  j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))

# Read-only native immediate strings and data operands.
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text().splitlines():
  for m in re.finditer(r'(?:push|mov\s+\w+,)\s*(0x10[0-9a-f]+)',line):
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
  m=re.search(r'(XMMWORD|QWORD|DWORD|WORD|BYTE) PTR ds:(0x[0-9a-f]+)',line)
  if m:
   try:j['literals'].append(raw(int(m[2],16),{'XMMWORD':16,'QWORD':8,'DWORD':4,'WORD':2,'BYTE':1}[m[1]]))
   except ValueError:j.setdefault('unbacked_operands',[]).append(dict(address=m[2]))
for address in [0x101e6e2c,0x101d73b4,0x101e6e48,0x101a924c,0x101a927c,0x101a92a0,0x101a9350,0x101a9374,0x101a94e4,0x101a9508]:j['literals'].append(string(address))
# Literal sound tables used by player precache. Sizes are native loop bounds.
j['sound_tables']=[]
for addr,count in [(0x10211cc8,16),(0x10211db8,7),(0x10211d50,10),(0x10211c60,8),(0x10211c90,5),(0x10211d08,8),(0x10211dd4,7),(0x10211d78,10),(0x10211ca4,5),(0x10211c0c,7),(0x10211c28,5),(0x10211c3c,9),(0x10211d28,10),(0x10211df0,5),(0x10211da0,6),(0x10211c80,4),(0x10211cb8,4),(0x10211e04,1)]:
 r=raw(addr,count*4);j['literals'].append(r);items=[]
 for i in range(count):
  ptr=struct.unpack_from('<I',bytes.fromhex(r['bytes_hex']),i*4)[0];st=string(ptr);j['literals'].append(st);items.append(dict(index=i,pointer=hex(ptr),name=st['ascii']))
 j['sound_tables'].append(dict(address=hex(addr),count=count,items=items))
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1])
j['api_binding']=dict(base='0x10222f48',header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest(),slots=[dict(slot=i,name=names[i],address=hex(0x10222f48+4*i)) for i in [58,61,67,95,96]])
# Immediate resource operands only; register-selected and table loads are documented separately.
j['resource_calls']=[];last=None
for line in (OUT/'1001cf70.asm').read_text().splitlines():
 if re.search(r'\bpush\s+',line):
  m=re.search(r'push\s+(0x[0-9a-f]+)$',line);last=None
  if m:
   try:last=string(int(m[1],16))
   except (ValueError,UnicodeError):pass
 m=re.match(r'([0-9a-f]{8}):.*?call\s+(0x[0-9a-f]+)$',line)
 if m:
  if last is not None and m[2] in ['0x10119790','0x10116990','0x10116a30']:
   j['resource_calls'].append(dict(call_va='0x'+m[1],callee=m[2],name=last['ascii'],string_pointer=last['address']))
  last=None
j['supporting_sources']=[dict(path=p,sha256=hashlib.sha256((ROOT/p).read_bytes()).hexdigest()) for p in ['analysis/server-world-bootstrap/contract.md']]
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('PASS capture',len(j['source_c']),len(j['ranges']),len(j['literals']))
