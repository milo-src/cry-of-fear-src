from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path.cwd();OUT=ROOT/'analysis/server-monster-navigation';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='100be5b0 100bed20 100c00f0 100c1a70 100c1ab0 100c1080 100c1120 100bddb0 100bcbc0 100be5e0'.split()
SUPPORT='100c1a20 100c1ad0 100bdc10 10117420 10117360 1011a930 1011a820 100cde50 100cd530 100ceaa0 1000bc60 1000b2f0 100bdf30 100b05e0 100c1ec0 100b4aa0 100bd590 100bdf80 10013480 100176f0 1013dbb3'.split()

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
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t);j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in IDS else 'support'))
 if a not in IDS and a not in ['100c1a20','100bdc10','10117420','10117360','1011a930','1011a820','100cd530','100ceaa0','10013480','1013dbb3']:continue
 start=int(r[1],16);end=int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))

# Raw operands used in primary functions; classify each conservatively by instruction width.
for rr in j['ranges']:
 text=(ROOT/rr['path']).read_text()
 for line in text.splitlines():
  m=re.search(r'(XMMWORD|QWORD|DWORD) PTR ds:(0x[0-9a-f]+)',line)
  if m:
   n={'XMMWORD':16,'QWORD':8,'DWORD':4}[m[1]]
   try:r=raw(int(m[2],16),n)
   except ValueError:
    j.setdefault('unbacked_operands',[]).append(dict(address=m[2],width=n));continue
   r['role']='static memory operand; may be mutable global, bytes are on-disk initial state';j['literals'].append(r)
# Concrete generic monster table, linked by saved factory100b05e0.
r=raw(0x101ce36c,0x240);x=bytes.fromhex(r['bytes_hex']);r.update(class_name='CGenericMonster',slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,len(x),4)]);j['vtables'].append(r)
for a in [0x10216e08,0x1021aae0]:
 n=49 if a==0x10216e08 else 102;r=raw(a,n*16);r['fields']=[];x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,nm,off,count,flags=struct.unpack_from('<IIIhh',x,i*16);st=string(nm);j['literals'].append(st);r['fields'].append(dict(type_id=kind,name=st['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
# Function-local strings and refresh switch tables, independently retained from PE.
for addr in [0x101d4eb4,0x101b0df0,0x101d4f84,0x101d4fa4]:j['literals'].append(string(addr))
for addr,n in [(0x100bded8,24),(0x100bdef0,64)]:
 r=raw(addr,n);r['role']='RefreshRoute jump table' if n==24 else 'RefreshRoute goal1..64 byte remap';j['literals'].append(r)
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);assert names[9]=='pfnVecToYaw' and names[31]=='pfnTraceLine'
j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slots=[dict(slot=i,name=names[i],address=f'0x{0x10222f48+i*4:08x}')for i in [9,31]],header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest())
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest())for x in ['analysis/server-monster-scheduler/1000bc60.asm','analysis/server-monster-scheduler/1000b2f0.asm','external/hlsdk-portable/engine/eiface.h']]
for a in [0x101a1f80,0x101d54b0]:j['literals'].append(raw(a,16 if a==0x101a1f80 else 8))
j['unbacked_operands']=list({(r['address'],r['width']):r for r in j.get('unbacked_operands',[])}.values())
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['source_c']),len(j['literals']))
