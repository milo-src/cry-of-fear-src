"""Capture static original PlayerItem evidence. Never executes the DLL."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2]; OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
sha=lambda x:hashlib.sha256(x).hexdigest()
b=B.read_bytes(); assert sha(b)==SHA; pe=pe_metadata(b)
IDS='1011b840 1011b860 1011b920 1011bb00 1011ccf0 1011d150 1011d220 1011dfd0 1011e1c0 1011e760 1011ed80 1011f680'.split()
SUPPORT='10018440 1000ea60 1000eaa0 10117010 10116c50 1011adc0 1011b3c0 1011ab20 10119fe0 1011a030 100dfe60 10018cb0 100dd000 100fc9f0 1011e630 10017ac0 101028e0'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;v=b[o:o+n]
   return dict(address=hex(a),end_exclusive=hex(a+n),file_offset=hex(o),bytes_hex=v.hex(),sha256=sha(v))
 raise ValueError(hex(a))
def string(a):
 for n in range(1,512):
  r=raw(a,n);v=bytes.fromhex(r['bytes_hex'])
  if v[-1]==0:r['ascii']=v[:-1].decode('ascii');return r
 raise ValueError(hex(a))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,source_c=[],ranges=[],literals=[],save_tables=[],vtables=[],supporting_sources=[],pending_check=dict(checked_before_authoring=True,addresses=['0x'+x for x in IDS],command=['python','tools/catalog_decompiled.py','--show','server:ADDRESS']))
for addr in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{addr}.c';t=p.read_text(encoding='utf-8')
 e['source_c'].append(dict(address='0x'+addr,path=p.relative_to(ROOT).as_posix(),sha256=sha(p.read_bytes()),role='primary' if addr in IDS else 'support'))
 for i,m in enumerate(re.finditer(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)):
  a,end=int(m[1],16),int(m[2],16)+1
  cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
  assert cmd[0];text=subprocess.check_output(cmd,text=True)
  f=OUT/(addr+('' if i==0 else '-'+str(i))+'.asm');f.write_text(text,encoding='utf-8',newline='\n');pos=a
  for line in text.splitlines():
   mm=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
   if mm:
    at=int(mm[1],16);v=bytes.fromhex(mm[2]);assert at==pos and raw(at,len(v))['bytes_hex']==v.hex();pos+=len(v)
  assert pos==end
  e['ranges'].append(dict(path=f.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=sha(f.read_bytes()),binary_range_sha256=raw(a,end-a)['sha256'],command=cmd,bytes_verified=True))
  for line in text.splitlines():
   mm=re.search(r'(XMMWORD|QWORD|DWORD|WORD|BYTE) PTR ds:(0x[0-9a-f]+)',line)
   if mm:
    try:e['literals'].append(raw(int(mm[2],16),{'XMMWORD':16,'QWORD':8,'DWORD':4,'WORD':2,'BYTE':1}[mm[1]]))
    except ValueError:pass
   for mm in re.finditer(r'(?:push|mov\s+\w+,)\s*(0x10[0-9a-f]+)',line):
    try:
     r=string(int(mm[1],16))
     if r['ascii'] and all(c.isprintable() or c in '\n\r\t' for c in r['ascii']):e['literals'].append(r)
    except (ValueError,UnicodeError):pass
for label,a,n in [('CBasePlayerItem',0x1021b188,26),('ENTVARS_support',0x1021aae0,102)]:
 r=raw(a,n*16);r.update(class_name=label,stride=16,count=n,fields=[])
 for i in range(n):
  kind,name,off,count,flags=struct.unpack_from('<IIIhh',bytes.fromhex(r['bytes_hex']),i*16)
  ss=string(name);e['literals'].append(ss)
  r['fields'].append(dict(record_va=hex(a+i*16),type_id=kind,name=ss['ascii'],offset=hex(off),count=count,flags=flags))
 e['save_tables'].append(r)
e['literals'].append(raw(0x1021b140,72))
e['literals'] += [raw(0x10116fc0,18*4),raw(0x1011b0ac,18*4),raw(0x1011b0f4,5*4)]
r=raw(0x101a7804,0x190);r.update(class_name='CBasePlayerWeapon factory-bound prefix',factory='0x10018440',scope='Prefix through +18c; not a full class vtable extent',slots=[])
for off in [8,0x38,0x3c,0x134,0x160,0x164,0x18c]:r['slots'].append(dict(offset=hex(off),target=hex(struct.unpack('<I',bytes.fromhex(raw(0x101a7804+off,4)['bytes_hex']))[0])))
e['vtables'].append(r)
for path in ['analysis/server-spread-callers/contract.md','analysis/server-serializer/contract.md','analysis/server-animation-state/contract.md','analysis/server-sentence-lifecycle/contract.md','analysis/server-parent-tree/contract.md','analysis/server-unlock-settings/contract.md','external/hlsdk-portable/engine/eiface.h']:
 p=ROOT/path;e['supporting_sources'].append(dict(path=path,sha256=sha(p.read_bytes())))
# API names are orientation from a pinned SDK; native offsets remain primary facts.
p=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',p.read_text(encoding='utf-8'))
e['api_slots']=[dict(slot=i,name=names[i],native_global=hex(0x10222f48+i*4))for i in [5,28]]
e['literals']=list({(r['address'],r['end_exclusive']):r for r in e['literals']}.values())
assert sha(B.read_bytes())==SHA
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('PASS',len(IDS),'primary',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['literals']),'literal records')
