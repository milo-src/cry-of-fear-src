"""Static original state restore evidence; never executes the target DLL."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
h=lambda v:hashlib.sha256(v).hexdigest();b=B.read_bytes();assert h(b)==SHA
pe=pe_metadata(b)
PRIMARY=['10029090'];SUPPORT='10029070 100c9210 10120eb0 100c6570 100e0a80 100e2380 100f1a50 100e5fc0 1013f490 100b4aa0'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;v=b[off:off+n]
   return dict(address=hex(a),end_exclusive=hex(a+n),file_offset=hex(off),bytes_hex=v.hex(),sha256=h(v))
 raise ValueError(hex(a))
def string(a):
 for n in range(1,512):
  x=raw(a,n);v=bytes.fromhex(x['bytes_hex'])
  if v[-1]==0:x['ascii']=v[:-1].decode('ascii');return x
 raise ValueError(hex(a))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[],save_tables=[],supporting_sources=[],pending_check=dict(address='0x10029090',review_before=False,command='python tools/catalog_decompiled.py --show server:0x10029090'))
for addr in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{addr}.c';s=p.read_text(encoding='utf8')
 e['source_c'].append(dict(address='0x'+addr,path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()),role='primary'if addr in PRIMARY else 'support'))
 for j,m in enumerate(re.finditer(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  a,end=int(m[1],16),int(m[2],16)+1
  cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
  assert cmd[0];text=subprocess.check_output(cmd,text=True);p=OUT/f'{addr}-{j}.asm';p.write_text(text,encoding='utf8',newline='\n');pos=a
  for line in text.splitlines():
   mm=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
   if mm:
    at=int(mm[1],16);v=bytes.fromhex(mm[2]);assert at==pos and raw(at,len(v))['bytes_hex']==v.hex();pos+=len(v)
   mm=re.search(r'(XMMWORD|QWORD|DWORD|WORD|BYTE) PTR ds:(0x[0-9a-f]+)',line)
   if mm:
    try:e['raw'].append(raw(int(mm[2],16),{'XMMWORD':16,'QWORD':8,'DWORD':4,'WORD':2,'BYTE':1}[mm[1]]))
    except ValueError:pass
   for mm in re.finditer(r'(?:push|mov\s+\w+,)\s*(0x10[0-9a-f]+)',line):
    try:
     x=string(int(mm[1],16))
     if x['ascii'] and all(c.isprintable()or c in '\n\r\t'for c in x['ascii']):e['raw'].append(x)
    except (ValueError,UnicodeError):pass
  assert pos==end
  e['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=h(p.read_bytes()),binary_range_sha256=raw(a,end-a)['sha256'],command=cmd))
# Original ENTVARS proves netname, health and related native offsets, not an SDK layout assumption.
t=raw(0x1021aae0,102*16);t.update(name='ENTVARS',fields=[])
for i in range(102):
 ty,nm,off,count,flags=struct.unpack('<IIIhh',bytes.fromhex(raw(0x1021aae0+16*i,16)['bytes_hex']));s=string(nm);e['raw'].append(s)
 t['fields'].append(dict(type_id=ty,name=s['ascii'],offset=hex(off),count=count,flags=flags))
e['save_tables'].append(t)
for path in ['analysis/server-world-bootstrap/contract.md','analysis/server-multiplayer-flow/contract.md','analysis/server-player-equipment/contract.md','analysis/server-player-inventory/contract.md','analysis/server-item-pickup/contract.md','analysis/server-stats-lifecycle/contract.md','external/hlsdk-portable/engine/eiface.h']:
 p=ROOT/path;e['supporting_sources'].append(dict(path=path,sha256=h(p.read_bytes())))
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
e['api_slots']=[dict(slot=i,name=names[i],address=hex(0x10222f48+i*4))for i in [46,47,48,50,57,71,75]]
e['raw']=list({(x['address'],x['end_exclusive']):x for x in e['raw']}.values())
assert h(B.read_bytes())==SHA
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('PASS',len(PRIMARY),'primary',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
