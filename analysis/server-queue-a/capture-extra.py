"""Bounded static capture for four map-control classes; never loads the DLL."""
from pathlib import Path
import hashlib,json,re,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
b=BINARY.read_bytes();assert hashlib.sha256(b).hexdigest()==SHA
pe=pe_metadata(b);tool=shutil.which('objdump');assert tool
TARGETS='100126a0 10012700 10012760 10012820 10015080 100150e0 100151b0 10015370 10013900 10013a10 10013b30 10013d50 10014730 10014770 100147b0 10014830 10014940 100149a0 10014a00 10014ac0 10013490 100134a0 100134b0 10015fe0 10016070 100165a0 10014b50 10014ba0 10014c10 10014c30 10014cb0 10014550 100145b0 10015750 100132d0'.split()
SUPPORT='10120670 101206f0 10120710 10120770 10017740 10017790 10017ba0 1011a290 10017ad0 101184e0 10118460 10018350 10119060 10101ff0 10102a80 1000e2e0 10017110'.split()
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
j=dict(schema=1,binary=BINARY.as_posix(),binary_sha256=SHA,image_base=pe['image_base'],method='Saved Ghidra bodies + bounded read-only PE/objdump; no DLL execution, REA process, runtime or build.',range_convention='VA start-inclusive/end-exclusive; original saved C range retained inclusive.',targets=[],support=[],assembly=[],vtables=[],save_tables=[],strings=[],export_thunks=[])
for a in TARGETS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t)
 j['targets'if a in TARGETS else'support'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),saved_name=re.search(r'// name: (.*)',t)[1],saved_range_inclusive=[r[1],r[2]]))
for name,a in [('env-global-factory',0x100126a0),('env-spark-factory',0x10012700),('env-state-factory',0x10012760),('multisource-factory',0x10012820),('env-state-use',0x10016070),('env-state-think',0x10015750),('multisource-use',0x100165a0),('multisource-register',0x100145b0),('env-spark-spawn',0x100150e0)]:
 t=next(r for r in j['targets']if int(r['address'],16)==a);end=int(t['saved_range_inclusive'][1],16)+1
 cmd=[tool,'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(BINARY)]
 p=OUT/('extra-'+name+'.asm');p.write_text(subprocess.check_output(cmd,text=True,timeout=20),encoding='utf-8',newline='\n');r=raw(a,end-a);r.update(path=p.relative_to(ROOT).as_posix(),assembly_sha256=hashlib.sha256(p.read_bytes()).hexdigest(),command=cmd);j['assembly'].append(r)
for name,a,v,thunk in [('CEnvGlobal',0x100126a0,0x101a500c,0x10016760),('CEnvSpark',0x10012700,0x101a5bc8,0x10016770),('CEnvState',0x10012760,0x101a5160,0x10016780),('CMultiSource',0x10012820,0x101a491c,0x100167c0)]:
 code=bytes.fromhex(raw(a,0x5c)['bytes_hex']);assert b'\xc7\x00'+struct.pack('<I',v)in code
 r=raw(v,0xf4);r.update(class_name=name,factory=hex(a),bounded_prefix_only=True,slots=[dict(offset=hex(i),target=hex(struct.unpack('<I',bytes.fromhex(r['bytes_hex'])[i:i+4])[0]))for i in range(0,0xf4,4)]);j['vtables'].append(r)
 r=raw(thunk,5);x=bytes.fromhex(r['bytes_hex']);assert x[0]==0xe9;r.update(class_name=name,target=hex(thunk+5+struct.unpack('<i',x[1:])[0]));assert int(r['target'],16)==a;j['export_thunks'].append(r)
for name,a,count in [('CEnvGlobal',0x10211510,3),('CEnvState',0x10211540,4),('CEnvSpark',0x102115e0,2),('CMultiSource',0x10211600,4)]:
 r=raw(a,count*16);r.update(class_name=name,count=count,stride=16,fields=[])
 for i in range(count):
  kind,n,offset,c,flags=struct.unpack('<IIIhh',bytes.fromhex(r['bytes_hex'])[i*16:(i+1)*16]);s=string(n);j['strings'].append(s);r['fields'].append(dict(record_va=hex(a+i*16),type_id=kind,name=s['ascii'],offset=hex(offset),count=c,flags=flags))
 j['save_tables'].append(r)
j['strings'].append(string(0x101a54d0))
assert hashlib.sha256(BINARY.read_bytes()).hexdigest()==SHA
(OUT/'evidence-extra.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print('Captured',len(j['targets']),'bodies,',len(j['assembly']),'bounded asm ranges.')
