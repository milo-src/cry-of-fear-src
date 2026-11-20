from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');blob=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(blob).hexdigest()==SHA
pe=pe_metadata(blob);h=lambda b:hashlib.sha256(b).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  delta=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=delta and delta+n<=s['raw_size']:
   off=s['raw_offset']+delta;b=blob[off:off+n];return dict(address=hex(a),end_exclusive=hex(a+n),file_offset=hex(off),bytes_hex=b.hex(),sha256=h(b))
 raise ValueError(hex(a))
def string(a):
 for n in range(1,2048):
  r=raw(a,n);v=bytes.fromhex(r['bytes_hex'])
  if v[-1]==0:r['ascii']=v[:-1].decode('ascii');return r
 raise ValueError(hex(a))
IDS='100d08f0 100d0490 100d1c10 100d0860 100d1ce0 100d1af0 100cff60 100d0830 100dfea0'.split()
SUPPORT='100c6de0 1011fd90 100b4aa0 100f39e0 1011ab20 1001f160'.split()
e=dict(binary=B.as_posix(),sha256=SHA,target_executed=False,source_c=[],ranges=[],literals=[],supporting_sources=[])
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');e['source_c'].append(dict(path=p.relative_to(ROOT).as_posix(),address='0x'+a,sha256=h(p.read_bytes()),role='primary' if a in IDS else 'support'))
 spans=re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 assert spans
 for i,(lo,hi) in enumerate(spans):
  start,end=int(lo,16),int(hi,16)+1
  cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)]
  p=OUT/(a+('' if i==0 else '-'+str(i))+'.asm');t=subprocess.check_output(cmd,text=True);p.write_text(t,encoding='utf-8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
   if m:
    at=int(m[1],16);b=bytes.fromhex(m[2]);assert at==pos and raw(at,len(b))['bytes_hex']==b.hex();pos+=len(b)
  assert pos==end,(a,hex(pos),hex(end));assert '(bad)' not in t
  e['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(start),end_exclusive=hex(end),sha256=h(p.read_bytes()),binary_range_sha256=raw(start,end-start)['sha256'],command=cmd))
  for line in t.splitlines():
   m=re.search(r'(XMMWORD|QWORD|DWORD) PTR ds:(0x[0-9a-f]+)',line)
   if m:
    try:e['literals'].append(raw(int(m[2],16),{'XMMWORD':16,'QWORD':8,'DWORD':4}[m[1]]))
    except ValueError:pass
   m=re.search(r'(?:push|mov\s+(?:e[abcds][xip]|edi|esi|ebp),)\s*(0x10[0-9a-f]+)',line)
   if m:
    try:
     r=string(int(m[1],16))
     if r['ascii'] and all(c.isprintable() or c in '\r\n\t' for c in r['ascii']):e['literals'].append(r)
    except (ValueError,UnicodeError):pass
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1])
e['api_binding']=dict(base='0x10222f48',initializer='0x100b4aa0',header=header.relative_to(ROOT).as_posix(),header_sha256=h(header.read_bytes()),slots=[dict(slot=i,name=names[i],address=hex(0x10222f48+4*i)) for i in [61,95,96]])
for f in ['analysis/server-resource-precache/contract.md','analysis/server-world-bootstrap/contract.md','analysis/movement/health-stamina.md']:
 e['supporting_sources'].append(dict(path=f,sha256=h((ROOT/f).read_bytes())))
# Exact dispatch and native immediate stores; no inferred source array capacity.
t=raw(0x100d0624,21*4);t['targets']=[hex(x) for x in struct.unpack('<21I',bytes.fromhex(t['bytes_hex']))];e['cone_dispatch']=t
e['cone_values']=[]
for angle,target in enumerate(t['targets']):
 at=int(target,16)
 if at in (0x100d060a,0x100d05df):bits=0
 else:
  assert raw(at,4)['bytes_hex']=='8b45085e';assert raw(at+4,2)['bytes_hex']=='c700'
  bits=struct.unpack('<I',bytes.fromhex(raw(at+6,4)['bytes_hex']))[0]
  assert raw(at+10,3)['bytes_hex']=='c74004' and raw(at+17,3)['bytes_hex']=='c74008'
  assert struct.unpack('<I',bytes.fromhex(raw(at+13,4)['bytes_hex']))[0]==bits
  assert struct.unpack('<I',bytes.fromhex(raw(at+20,4)['bytes_hex']))[0]==bits
 e['cone_values'].append(dict(angle=angle,target=target,unsupported=at==0x100d05df,bits=f'0x{bits:08x}',value=struct.unpack('<f',struct.pack('<I',bits))[0]))
e['record_initial_stores']=[];e['fallback_stores']=[]
for line in (OUT/'100d08f0.asm').read_text().splitlines():
 m=re.match(r'^([0-9a-f]{8}):.*\bmov\s+DWORD PTR \[ecx\+(0x10225[0-9a-f]+)\],(0x[0-9a-f]+)',line)
 if m and int(m[1],16)<0x100d0a46:e['record_initial_stores'].append(dict(instruction='0x'+m[1],offset=hex(int(m[2],16)-0x10225a30),bits=m[3],raw=raw(int(m[1],16),10)))
 m=re.match(r'^([0-9a-f]{8}):.*\bmov\s+DWORD PTR ds:(0x10225[0-9a-f]+),(0x[0-9a-f]+)',line)
 if m and 0x100d1870<=int(m[1],16)<0x100d18ed:e['fallback_stores'].append(dict(instruction='0x'+m[1],offset=hex(int(m[2],16)-0x10225988),bits=m[3],raw=raw(int(m[1],16),10)))
e['fallback_vector_stores']=[dict(instruction=hex(a),offset=hex(off),source=raw(src,16)) for a,off,src in [(0x100d1869,0x20,0x101d7b90),(0x100d18a0,0x58,0x101d7b80)]]
e['classname_descriptor']=raw(0x1021aae0,16)
kind,name,offset,count,flags=struct.unpack('<IIIhH',bytes.fromhex(e['classname_descriptor']['bytes_hex']))
assert (kind,offset,count)==(1,0,1)
e['classname_name']=string(name);assert e['classname_name']['ascii']=='classname'
e['literals']=list({(r['address'],r['end_exclusive']):r for r in e['literals']}.values())
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('PASS',len(IDS),'primary',len(e['source_c']),'C',len(e['ranges']),'ranges',len(e['literals']),'raw')
