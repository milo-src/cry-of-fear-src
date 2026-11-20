"""Static original-DLL capture. No game/DLL execution and no optional cache needed."""
from pathlib import Path
import hashlib, json, re, shutil, struct, subprocess, sys
ROOT=Path(__file__).resolve().parents[2]
OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=B.read_bytes();sha=lambda x:hashlib.sha256(x).hexdigest();assert sha(b)==SHA
pe=pe_metadata(b)
IDS='100cff10 100d0230 100d02e0 100d0390 100d0410 100d06a0 100d0700 100d0760 100d07c0 100d1940'.split()
SUPPORT='100cff60 100d0830 100d1c10 1011a050 1011abb0 1011abe0 1013e5c0 100f91b0 100b4aa0'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n]
   return dict(address=hex(a),end_exclusive=hex(a+n),file_offset=hex(o),bytes_hex=x.hex(),sha256=sha(x))
 raise ValueError(hex(a))
def string(a):
 for n in range(1,512):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError(hex(a))
j=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,method='Saved original C, bounded static objdump, raw PE reads. No target execution or listing-cache dependency.',source_c=[],ranges=[],literals=[],vtables=[],save_tables=[],export_thunks=[],supporting_sources=[])
def assembly(a,end,label):
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
 assert cmd[0], 'objdump required'
 t=subprocess.check_output(cmd,text=True);p=OUT/(label+'.asm');p.write_text(t,encoding='utf-8',newline='\n');pos=a
 for line in t.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=sha(p.read_bytes()),binary_range_sha256=raw(a,end-a)['sha256'],bytes_verified=True,command=cmd))
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8')
 j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=sha(p.read_bytes()),role='primary'if a in IDS else 'support'))
 for i,m in enumerate(re.finditer(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)):
  assembly(int(m[1],16),int(m[2],16)+1,a+(''if i==0 else '-'+str(i)))
# Missing saved-C diagnostic entry is support only, never a new reviewed card.
assembly(0x100cfff0,0x100d022d,'100cfff0-diagnostic-support')
j['literals'] += [raw(0x1021a6e0,1024),raw(0x101e5a60,16)]
j['exact_pointer_scan']=dict(method='All raw PE bytes, exact LE32 function-address search; excludes relative calls, computed pointers and runtime initialization.',results=[])
for a in IDS:
 value=int(a,16); needle=struct.pack('<I',value); offsets=[];pos=0
 while (pos:=b.find(needle,pos))>=0:
  offsets.append(hex(pos));pos+=1
 j['exact_pointer_scan']['results'].append(dict(address='0x'+a,file_offsets=offsets))
for rr in j['ranges']:
 for line in (ROOT/rr['path']).read_text(encoding='utf-8').splitlines():
  m=re.search(r'(XMMWORD|QWORD|DWORD|WORD|BYTE) PTR ds:(0x[0-9a-f]+)',line)
  if m:
   n={'XMMWORD':16,'QWORD':8,'DWORD':4,'WORD':2,'BYTE':1}[m[1]]
   try:j['literals'].append(raw(int(m[2],16),n))
   except ValueError:pass
  for m in re.finditer(r'(?:push|mov\s+\w+,)\s*(0x10[0-9a-f]+)',line):
   try:
    r=string(int(m[1],16))
    if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):j['literals'].append(r)
   except (ValueError,UnicodeError):pass
h=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',h.read_text(encoding='utf-8').split('typedef struct enginefuncs_s',1)[1])
j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slots=[dict(slot=i,name=names[i],address=hex(0x10222f48+i*4))for i in [123]],header=h.relative_to(ROOT).as_posix(),header_sha256=sha(h.read_bytes()))
for x in ['analysis/server-spread-settings/contract.md','analysis/movement/health-stamina.md','external/hlsdk-portable/common/const.h']:
 p=ROOT/x;j['supporting_sources'].append(dict(path=x,sha256=sha(p.read_bytes())))
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
j['pending_check']=dict(checked_before_authoring=True,command=['python','tools/catalog_decompiled.py','--pending','server','--limit','10000'],addresses=['0x'+a for a in IDS])
assert sha(B.read_bytes())==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('PASS',len(IDS),'primary',len(j['ranges']),'ranges',len(j['literals']),'raw literals')
