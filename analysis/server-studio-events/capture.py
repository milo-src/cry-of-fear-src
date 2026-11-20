"""Capture bounded studio event, transition and timing evidence from a hash-pinned original PE; never execute DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='1000eda0 1000eec0 1000ef20 1000f020 1000f150 1000f1a0 1000f1d0 1000f230 1000f390 1000f3e0 1000f430 1000f590'.split()
SUPPORT='1000e5f0 1000e730 1000e760 1000e800 1000e880 1000e9e0 1000f530 10116a30 100b4aa0 100b05e0 100b0f30 100c2010 1002c100 100fa340 100a0a70'.split()
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
 
 a=int(record['address'],16);end=int(record['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/(record['address'][2:]+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)


# Exact literal operands and pushed strings in bounded instruction ranges.
seen=set()
for row in j['assembly']:
 text=(ROOT/row['path']).read_text()
 for m in re.finditer(r'(DWORD|QWORD|XMMWORD) PTR ds:0x(101a[0-9a-f]{4})',text):
  a=int(m[2],16);n={'DWORD':4,'QWORD':8,'XMMWORD':16}[m[1]]
  if (a,n) in seen:continue
  seen.add((a,n));r=raw(a,n);r['name']='literal operand '+m[1]
  if n in (4,8):r['floating_value']=struct.unpack('<f' if n==4 else '<d',bytes.fromhex(r['bytes_hex']))[0]
  j['tables'].append(r)
 for a in [int(x,16) for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',text)]:
  if any(int(x['start'],16)==a for x in j['strings']):continue
  try:r=string(a)
  except (ValueError,UnicodeDecodeError):continue
  if r['ascii'] and all(c in '\r\n\t' or 32<=ord(c)<127 for c in r['ascii']):j['strings'].append(r)

j['strings'].append(string(0x101a3324)) # Tail-call diagnostic stored into stack, not PUSH immediate.
for addr,count,label in [(0x10211178,5,'CBaseAnimating'),(0x1021aae0,102,'ENTVARS')]:
 r=raw(addr,count*16);r['name']=label+' native descriptors';r['fields']=[]
 for typ,name,offset,num,flags in struct.iter_unpack('<IIIHH',bytes.fromhex(r['bytes_hex'])):
  ns=string(name);j['strings'].append(ns);r['fields'].append(dict(type_id=typ,name=ns['ascii'],offset=hex(offset),count=num,flags=flags))
 j['tables'].append(r)
r=raw(0x101ce36c,0x23c);r['name']='CGenericMonster vtable from factory100b05e0';r['dwords_hex']=[hex(x) for x in struct.unpack('<'+'I'*(0x23c//4),bytes.fromhex(r['bytes_hex']))];j['tables'].append(r)
j['cross_references']=[]
for path in ['analysis/server-animation-state/1000e9e0.asm','analysis/server-studio-controls/1000e5f0.asm','external/hlsdk-portable/engine/studio.h','external/hlsdk-portable/engine/eiface.h']:
 p=ROOT/path;j['cross_references'].append(dict(path=path,sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='previous native animation contract or SDK layout comparison; SDK not native proof alone'))
header=(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',header.split('typedef struct enginefuncs_s',1)[1]);assert names[74]=='pfnGetModelPtr';assert names[1]=='pfnPrecacheSound';assert names[67]=='pfnAllocString';assert names[61]=='pfnAlertMessage'
j['api_binding']=dict(native_initializer='0x100b4aa0',native_engine_table='0x10222f48',native_callback='0x10223070',slot_decimal=74,compatible_header_symbol=names[74],inference='Native binding location and call stack proven; symbol is SDK layout comparison, not recovered native PDB')
j['api_binding']['additional_slots']=[dict(index_decimal=i,address=hex(0x10222f48+i*4),compatible_header_symbol=names[i]) for i in [1,61,67]]
# Verify every objdump byte row against the original mapped PE before publishing.
verified=0
for row in j['assembly']:
 for m in re.finditer(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}\s+)+)',(ROOT/row['path']).read_text(encoding='utf-8'),re.M):
  x=bytes.fromhex(m[2]);assert raw(int(m[1],16),len(x))['bytes_hex']==x.hex();verified+=1
j['verification']=dict(assembly_rows_matched_to_original_pe=verified,original_sha_checked_before_and_after=True)
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(len(TARGETS),'targets',len(j['assembly']),'ASM')
