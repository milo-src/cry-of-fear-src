"""Capture bounded PM support evidence from a hash-pinned original PE; never execute DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='100044b0 10004880 10004990 10004bd0 10004eb0 10004fa0 100056f0 10005750 100060f0 10006120 10006180 100061b0 100061d0 10006200 10006e30 100070a0 10007470 10007550 10008ef0 100090c0 100090e0 10009150 100094d0 10009510 100097a0 10009dd0 1000a590'.split()
SUPPORT='10003250 100032d0 100033d0 10003490 100037d0 10003840 10003c70 100095b0 100099e0 10006a40 10005260 10005400 10008a00'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n]
   return dict(start=hex(a),end_exclusive=hex(a+n),file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,257):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError('bounded string exceeds256')
j=dict(schema=1,module='server',binary=BINARY.as_posix(),binary_sha256=SHA,image_base=pe['image_base'],method='Saved Ghidra C and bounded static PE/objdump; original DLL not executed; no REA process, runtime, game, build.',range_convention='ASM VA start-inclusive/end-exclusive; saved C inclusive.',source_c=[],assembly=[],tables=[],strings=[])
for a in TARGETS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in TARGETS else'support',saved_range_inclusive=[r[1],r[2]],all_saved_ranges_inclusive=[list(x) for x in re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)]))
for record in j['source_c']:
 if record['role']!='primary':continue
 a=int(record['address'],16);end=int(record['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/(record['address'][2:]+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)

for a,n,label in [(0x10211088,4,'IEEE exponent mask'),(0x10211090,72,'six liquid current vectors')]:
 r=raw(a,n);r['name']=label;r['dwords']=list(struct.unpack('<'+'I'*(n//4),bytes.fromhex(r['bytes_hex'])));j['tables'].append(r)
for a in [0x101a13f0]:j['strings'].append(string(a))
# Capture bounded literal operands only from the selected assembly, plus explicit switch tables.
seen=set()
for row in j['assembly']:
 text=Path(ROOT/row['path']).read_text()
 for m in re.finditer(r'(DWORD|QWORD|XMMWORD) PTR ds:0x(101a[0-9a-f]{4})',text):
  a=int(m[2],16);n={'DWORD':4,'QWORD':8,'XMMWORD':16}[m[1]]
  if (a,n) in seen:continue
  seen.add((a,n));r=raw(a,n);r['name']='literal operand '+m[1]
  if n in (4,8):r['floating_value']=struct.unpack('<f' if n==4 else '<d',bytes.fromhex(r['bytes_hex']))[0]
  j['tables'].append(r)
 string_addresses=[int(x,16) for x in re.findall(r'push\s+0x(101a[0-9a-f]{4})',text)]
 for a in string_addresses:
  if any(int(x['start'],16)==a for x in j['strings']):continue
  try:r=string(a)
  except (ValueError,UnicodeDecodeError):continue
  if r['ascii'] and all(c in '\r\n\t' or 32<=ord(c)<127 for c in r['ascii']):j['strings'].append(r)
for a,n,label in [(0x10006ec4,0x6c,'material character switch including byte remap'),(0x10007540,16,'custom footstep variant switch'),(0x10008820,0x1e0,'footstep switches after terminal return')]:
 r=raw(a,n);r['name']=label;j['tables'].append(r)
for header in ['external/hlsdk-portable/pm_shared/pm_defs.h','external/hlsdk-portable/pm_shared/pm_movevars.h']:
 p=ROOT/header
 if p.exists():j.setdefault('abi_headers',[]).append(dict(path=header,sha256=hashlib.sha256(p.read_bytes()).hexdigest()))
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(len(TARGETS),'targets',len(j['assembly']),'ASM')
