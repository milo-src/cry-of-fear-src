"""Bounded static capture for global-state list, persistence and entity lifecycle; never loads the DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='101204c0 101204d0 10120620 10120670 101206e0 101206f0 10120710 10120730 10120770 10121520 10121550 10121610 10121680 101216f0 10016c80 10017b00 10017e20 10102c50'.split()
SUPPORT='10116020 10116080 10117010 1011adc0 10116c30 100167d0 10015fe0 10015080 100134b0 10017ad0 10119fe0 100c4db0 100c4c90 10118480 1000aba0 1013dbb3'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n]
   return dict(va=hex(a),end_exclusive=hex(a+n),length=n,file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,257):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError('String exceeds bounded256')
j=dict(schema=1,binary=BINARY.as_posix(),binary_sha256=SHA,image_base=pe['image_base'],method='Saved Ghidra bodies + bounded read-only PE/objdump; no DLL execution, REA process, runtime or build.',range_convention='VA start-inclusive/end-exclusive; original saved C range retained inclusive.',targets=[],support=[],assembly=[],save_tables=[],strings=[],raw=[])
for a in TARGETS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 j['targets'if a in TARGETS else'support'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),saved_name=re.search(r'// name: (.*)',t)[1],saved_range_inclusive=[r[1],r[2]]))
for record in j['targets']+[x for x in j['support'] if x['address']=='0x1013dbb3']:
 a=int(record['address'],16);end=int(record['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/('global-'+record['address'][2:]+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)
for name,a,count in [('GLOBAL',0x1021b930,1),('GENT',0x1021baa0,3)]:
 r=raw(a,count*16);r.update(label=name,count=count,stride=16,fields=[])
 for i in range(count):
  kind,n,offset,c,flags=struct.unpack('<IIIhh',bytes.fromhex(r['bytes_hex'])[i*16:(i+1)*16]);st=string(n);j['strings'].append(st);r['fields'].append(dict(record_va=hex(a+i*16),type_id=kind,name=st['ascii'],offset=hex(offset),count=c,flags=flags))
 j['save_tables'].append(r)
r=raw(0x1021bad0,12);r['name']='Global state diagnostic label pointers';r['labels']=[]
for p in struct.unpack('<3I',bytes.fromhex(r['bytes_hex'])):
 st=string(p);j['strings'].append(st);r['labels'].append(st['ascii'])
j['raw'].append(r)
j['strings'].append(string(0x101e6dfc))
r=raw(0x102119f8,15*4);r['name']='EntityAPI prefix0..14';r['slots']=[dict(index=i,target=hex(struct.unpack('<I',bytes.fromhex(r['bytes_hex'])[i*4:i*4+4])[0]))for i in range(15)];j['raw'].append(r)
a=0x10121530;end=0x10121550;cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)];p=OUT/'global-reset-callback.asm';p.write_text(subprocess.check_output(cmd,text=True),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd,scope='API reset callback bounded raw support; no saved C card asserted.');j['assembly'].append(r)
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence-global.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print('Captured',len(j['targets']),'C entries;',len(j['assembly']),'asm ranges')
