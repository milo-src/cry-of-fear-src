"""Capture bounded serializer evidence from a hash-pinned original PE; never execute DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='10116020 10116140 101161a0 101161d0 10116220 10116230 101162a0 101162e0 10116310 10116420 10116490 101164d0 101164f0 10116530 10116550 10116910 10116c30 10116c50 10117100 10117160 10117220 1011ad60 1011ad70 1011b110 1011b130 1011b190 1011b220 1011b320 1011b3c0 1011b440'.split()
SUPPORT='10117010 1011adc0 10017740 10017790 10017ba0 10116990 10116a30 1013dbb3 10140130 100b4aa0'.split()
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
 if record['role']!='primary' and record['address'] not in ['0x10117010','0x1011adc0','0x1013dbb3','0x10017740','0x10017790']:continue
 a=int(record['address'],16);end=int(record['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/(record['address'][2:]+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)
r=raw(0x1021b140,18*4);r['name']='Native generic field-size lookup type0..17; handle destination stride is separately adjusted to8';r['dwords']=list(struct.unpack('<18I',bytes.fromhex(r['bytes_hex'])));j['tables'].append(r)
r=raw(0x1021aae0,102*16);r['name']='ENTVARS descriptors';r['count']=102;r['stride']=16;r['fields']=[]
for i in range(102):
 typ,sp,off,cnt,flags=struct.unpack('<IIIhh',bytes.fromhex(r['bytes_hex'])[i*16:(i+1)*16]);st=string(sp);j['strings'].append(st);r['fields'].append(dict(index=i,type_id=typ,name=st['ascii'],offset=hex(off),count=cnt,flags=flags))
j['tables'].append(r)
for a,n,label in [(0x10116fc0,18,'Restore type switch'),(0x1011b0ac,18,'Save type switch'),(0x1011b0f4,5,'Save reference subtype switch2..6')]:
 r=raw(a,n*4);r['name']=label;r['targets']=[hex(x)for x in struct.unpack('<'+str(n)+'I',bytes.fromhex(r['bytes_hex']))];j['tables'].append(r)
header=ROOT/'external/hlsdk-portable/engine/eiface.h';j['api_binding']=dict(table_base='0x10222f48',initializer='0x100b4aa0',copied_dwords=144,header=header.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(header.read_bytes()).hexdigest(),slots=[dict(index=i,slot_va=hex(0x10222f48+i*4),name=n)for i,n in [(0,'PrecacheModel'),(1,'PrecacheSound'),(67,'AllocString'),(69,'PEntityOfEntOffset'),(70,'EntOffsetOfPEntity'),(78,'FunctionFromName'),(79,'NameForFunction')]])
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(len(TARGETS),'targets',len(j['assembly']),'ASM',len(j['tables']),'tables')
