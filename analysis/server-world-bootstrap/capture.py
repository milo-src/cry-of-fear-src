from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=ROOT/'analysis/server-world-bootstrap';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='101203a0 10120460 10121f90 10121fb0 10120eb0 10120ea0 101217c0 1011fd90 1011fb60 10119790 100b6a00 1011b4d0'.split()
SUPPORT='101208e0 101207e0 10120500 1000e220 1000e1f0 10017110 100b4aa0 100af710 1013dba5 1013e1e9 10029070 101004f0 100fdf70 100fef60 1001cf70 10116990 10116a30 101218a0 100cdf20 100cbbf0 100ca780 100cc810 10017950 100014b0 10118460 10119fe0 100d08f0 1013f5f0'.split()


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

# Native vtable prefixes and field descriptors.
for addr,n,name in [(0x101e6ca0,0x11c,'CCorpse'),(0x101e6a48,0x11c,'CWorld')]:
 r=raw(addr,n);x=bytes.fromhex(r['bytes_hex']);r.update(class_name=name,slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,n,4)]);j['vtables'].append(r)
 col=struct.unpack('<I',bytes.fromhex(raw(addr-4,4)['bytes_hex']))[0];rr=raw(col,20);j['literals'] += [raw(addr-4,4),rr];td=struct.unpack_from('<I',bytes.fromhex(rr['bytes_hex']),12)[0];j['literals'] += [raw(td,8),string(td+8)]
for addr,n in [(0x1021aae0,102),(0x10211760,22)]:
 r=raw(addr,n*16);x=bytes.fromhex(r['bytes_hex']);r['fields']=[]
 for i in range(n):
  kind,nm,off,count,flags=struct.unpack_from('<IIIhh',x,i*16);st=string(nm);j['literals'].append(st);r['fields'].append(dict(type_id=kind,name=st['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
# PUSH immediate operands which point at printable NUL strings.
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text(encoding='utf-8').splitlines():
  m=re.search(r'push\s+(0x10[0-9a-f]+)',line)
  if m:
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slots=[dict(slot=i,name=names[i],address=f'0x{0x10222f48+i*4:08x}')for i in [0,1,21,22,23,43,44,57,59,60,61,63,69,70,122]],header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest())
# Decal name/index pairs used by the world bootstrap (44 slots).
r=raw(0x1021b940,44*8);j['literals'].append(r);j['decals']=[]
for i in range(44):
 ptr,value=struct.unpack_from('<II',bytes.fromhex(r['bytes_hex']),i*8);st=string(ptr);j['literals'].append(st);j['decals'].append(dict(index=i,name=st['ascii'],name_pointer=hex(ptr),result_global=hex(0x1021b944+i*8),initial_index=value))
for addr in [0x101a924c,0x101e6e0c,0x101e6f4c,0x101e6f50,0x101a1234,0x101d21d8,0x101cb218,0x101e6dbc]:j['literals'].append(string(addr))
# Native lightstyle dispatch table and immediate string returns.
r=raw(0x100b6b94,20*4);j['literals'].append(r);j['lightstyles']=[]
for i in range(20):
 target=struct.unpack_from('<I',bytes.fromhex(r['bytes_hex']),i*4)[0]
 # Each dispatch stub loads globals then MOV EAX,imm32.
 code=bytes.fromhex(raw(target,11)['bytes_hex']);assert code[:2]==bytes.fromhex('8b0d') and code[6]==0xb8
 ptr=struct.unpack_from('<I',code,7)[0];st=string(ptr);j['literals'].append(st);j['lightstyles'].append(dict(index=i,target=hex(target),string_pointer=hex(ptr),pattern=st['ascii']))
# Retain literal resource call order from native instructions, including indirect laserbeam name.
j['resource_calls']=[];last=None
for line in (OUT/'1011fd90.asm').read_text(encoding='utf8').splitlines():
 m=re.match(r'([0-9a-f]{8}):.*?push\s+(0x[0-9a-f]+)$',line)
 if m:
  try:
   v=string(int(m[2],16))
   if v.get('ascii') and all(c.isprintable() for c in v['ascii']):last=v
  except (ValueError,UnicodeError):pass
 if 'push   DWORD PTR ds:0x1021b4e8' in line:
  ptr=struct.unpack('<I',bytes.fromhex(raw(0x1021b4e8,4)['bytes_hex']))[0];last=string(ptr);j['literals'].append(last)
 m=re.match(r'([0-9a-f]{8}):.*?call\s+(0x[0-9a-f]+|DWORD PTR ds:0x10223130)$',line)
 if m and m[2] in ['0x1011fb60','0x10119790','0x10116990','0x10116a30','0x100d08f0','DWORD PTR ds:0x10223130']:
  assert last is not None,line
  j['resource_calls'].append(dict(call_va='0x'+m[1],callee=m[2],name=last['ascii'],string_pointer=last['address']))
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest()) for x in ['external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h','external/hlsdk-portable/dlls/cbase.h','analysis/exports/hl.csv']]
j['literals'].append(raw(0x1013eed8,5))
j['range_corrections']=[]
j['unbacked_operands']=list({(r['address'],r['width']):r for r in j.get('unbacked_operands',[])}.values())
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['source_c']),len(j['literals']))
