from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path.cwd();OUT=ROOT/'analysis/server-pm-foundation';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='100017e0 100018f0 10002420 100024c0 100026e0 100027a0 10002940 10002ae0 10002ca0 10002e30 10002e90 10002ef0 10002fd0 10003040 100030e0 10003100 10003250 10003290 100032d0 10003320 100033d0 10003490 100034d0 10003570 10003590 100035d0 100035f0 10003630 100037d0 10003840 10003bb0 10003c70 10003de0'.split()
SUPPORT='10004170 10006f30 10003670 10003730 10003960 10003a20 10004880 10004990 100056f0 10008a00 1016b5e0 1016bb00 1016bcc0 1016b5d0 1013dbb3'.split()

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
 if a not in IDS and a not in ['1016b5e0','1016bb00','1016bcc0','1016b5d0']:continue
 start=int(r[1],16);end=int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))

# Bounded CRT fallback fragments: evidence of operation names, not additional C cards.
for start,end in [(0x101827ff,0x10182850),(0x1018290f,0x10182952),(0x101829ff,0x10182a42)]:
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{start:08x}-fallback.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,scope='bounded fallback path only; no saved C entry',command=cmd))
# Constants, code pointers and diagnostic strings referenced by the reviewed assembly.
seen=set()
for rr in j['ranges']:
 text=(ROOT/rr['path']).read_text()
 for line in text.splitlines():
  if 'PTR ds:' not in line and 'push   0x10' not in line:continue
  for lit in re.findall(r'0x(10[0-9a-f]{6})',line):
   a=int(lit,16)
   if a in seen:continue
   seen.add(a)
   try:
    r=raw(a,16);r['interpretation']='raw literal or global initial bytes; BSS zero is not runtime value'
    j['literals'].append(r)
   except ValueError:pass
j['box_faces']=raw(0x10211028,96)
j['box_faces']['quad_indices']=list(struct.unpack('<24i',bytes.fromhex(j['box_faces']['bytes_hex'])))
for a in [0x101ef400,0x101ef4f0,0x101f0c00,0x101f1410]:
 r=raw(a,16);r['interpretation']='CRT operation descriptor/name';j['literals'].append(r)
j['numeric_constants']=[dict(**raw(a,n),value=struct.unpack(fmt,bytes.fromhex(raw(a,n)['bytes_hex']))[0]) for a,n,fmt in [(0x101a1398,8,'<d'),(0x101a1e58,8,'<d'),(0x101a1380,4,'<f'),(0x101a1388,8,'<d'),(0x101a13a0,8,'<d'),(0x101a13a8,8,'<d'),(0x101a13b0,8,'<d'),(0x101a13c0,4,'<f'),(0x101a13c4,4,'<f'),(0x101a13c8,4,'<f'),(0x101a13cc,4,'<f')]]
j['sdk_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest()) for x in ['external/hlsdk-portable/pm_shared/pm_defs.h','external/hlsdk-portable/pm_shared/pm_debug.c','external/hlsdk-portable/pm_shared/pm_math.c','external/hlsdk-portable/common/pmtrace.h'] if (ROOT/x).exists()]
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['literals']))
