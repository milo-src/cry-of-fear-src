"""Static original-DLL capture. Optional ignored objdump cache; regenerates if absent."""
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
IDS='100d19b0 100d19f0 100d1a30 100d1a90 1011e7a0 1011ede0 1011a050 1011abb0 1011abe0'.split()
SUPPORT='1011e760 1011ed80 10117010 1011adc0 1013e5c0 100d0410 100d0230 100d02e0 100d0830 100d1c10 10018440 10020010 100205f0'.split()
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
assembly(0x100d1922,0x100d1940,'100d1930-missing-C-support')
j['literals'] += [raw(0x1021a6e0,1024),raw(0x101e5a60,16)]
j['exact_pointer_scan']=dict(method='All raw PE bytes, exact LE32 function-address search; excludes relative calls, computed pointers and runtime initialization.',results=[])
for a in IDS+'100cff10 100d0230 100d02e0 100d0390 100d0410 100d06a0 100d0700 100d0760 100d07c0 100d1940 100d1930'.split():
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
for cls,a,n in [('CBaseSpreadWeapon',0x10217abc,3),('CBaseToggleWeapon',0x10217aec,1),('CBasePlayerWeapon',0x1021b328,27),('CBasePlayerItem_support',0x1021b188,26)]:
 r=raw(a,n*16);r.update(class_name=cls,stride=16,count=n,fields=[]);x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,name,off,count,flags=struct.unpack_from('<IIIhh',x,i*16);ss=string(name);j['literals'].append(ss)
  r['fields'].append(dict(record_va=hex(a+i*16),type_id=kind,name=ss['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
for cls,a,factory in [('CBasePlayerWeapon',0x101a7804,0x10018440),('CAction',0x101a990c,0x10020010)]:
 r=raw(a,0x40);r.update(class_name=cls,factory=hex(factory),scope='Prefix through Restore, not a claimed full vtable extent',slots=[])
 for off in [0x38,0x3c]:
  r['slots'].append(dict(offset=hex(off),target=hex(struct.unpack('<I',bytes.fromhex(raw(a+off,4)['bytes_hex']))[0])))
 j['vtables'].append(r)
 assert bytes.fromhex('c700')+struct.pack('<I',a) in bytes.fromhex(raw(factory,0x5c)['bytes_hex'])
# Static direct-edge scan of the complete objdump listing. Optional ignored cache only.
targets='100cff10 100d0230 100d02e0 100d0390 100d0410 100d06a0 100d0700 100d0760 100d07c0 100d1940 100d1930'.split()+IDS
cmd=[shutil.which('objdump'),'-d','-M','intel',str(B)]
import os
cache=Path(os.environ.get('COF_SPREAD_SCAN_CACHE',str(ROOT/'analysis/local/hl-sentence-lifecycle-text.asm')))
listing=cache.read_text(encoding='utf-8') if cache.is_file() else subprocess.check_output(cmd,text=True)
rows=[]
for line in listing.splitlines():
 m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}\s+)+)\s*(call|jmp)\s+0x([0-9a-f]{8})\b',line)
 if not m or m[4] not in targets:continue
 a=int(m[1],16);code=bytes.fromhex(m[2]);assert len(code)==5 and code[0] in [0xe8,0xe9]
 assert a+5+struct.unpack('<i',code[1:])[0]==int(m[4],16)
 r=raw(a,5);assert r['bytes_hex']==code.hex();r.update(kind=m[3],target='0x'+m[4],line=line);rows.append(r)
j['direct_edges']=dict(method='E8/E9 direct CALL/JMP decoded by static objdump -d across executable sections; no indirect calls, computed addresses, middle-entry targets or runtime rewrites.',command=cmd,targets=['0x'+a for a in targets],rows=rows)
for x in ['analysis/server-spread-application/contract.md','analysis/server-spread-settings/contract.md','analysis/server-serializer/contract.md']:
 q=ROOT/x;j['supporting_sources'].append(dict(path=x,sha256=sha(q.read_bytes())))
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
j['pending_check']=dict(checked_before_authoring=True,command=['python','tools/catalog_decompiled.py','--pending','server','--limit','10000'],addresses=['0x'+a for a in IDS])
assert sha(B.read_bytes())==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('PASS',len(IDS),'primary',len(j['ranges']),'ranges',len(j['literals']),'raw literals')
