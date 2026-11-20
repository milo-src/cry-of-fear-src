from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path.cwd();OUT=ROOT/'analysis/server-alias-state';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='1000d230 1000d290 1000d2f0 1000d350 1000e000 1000e040 1000e080 1000e0c0 1000e120 1000e180 1000d9d0 1000d9e0 1000d9f0 1000df20 1000df40 1000df50 1000d400 1000e2a0 1000e2b0 1000e2e0 1000d500 1000d650 1000dab0 1000dac0'.split()
SUPPORT='10017f30 10018000 10117010 1011adc0 1000dba0 10119060 101172e0 10118700 1000d550 1000d660 1000e310 100b4aa0 1000e5a0 1000e5b0 1000e5c0 1000e5d0 10116c30 1011ad70'.split()
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n];return dict(address=f'0x{a:08x}',end_exclusive=f'0x{a+n:08x}',file_offset=hex(o),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def string(a):
 for n in range(1,256):
  r=raw(a,n);x=bytes.fromhex(r['bytes_hex'])
  if x[-1]==0:r['ascii']=x[:-1].decode('ascii');return r
 raise ValueError(hex(a))
j=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,method='Saved C, static objdump and PE byte reads; no REA session or target execution.',source_c=[],ranges=[],literals=[],vtables=[],save_tables=[],export_thunks=[])
for a in IDS+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';t=p.read_text(encoding='utf-8');r=re.search(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t);j['source_c'].append(dict(address='0x'+a,path=p.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),role='primary'if a in IDS else 'support'))
 if a not in IDS:continue
 start=int(r[1],16);end=int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))
for cls,a,v,thunk,size,n in [('CInfoAlias',0x1000d230,0x101a296c,0x1000e5a0,0xe0,0x12c),('CInfoGroup',0x1000d290,0x101a2710,0x1000e5b0,0x164,0x11c),('CMultiAlias',0x1000d2f0,0x101a2830,0x1000e5c0,0x16c,0x12c),('CTriggerChangeAlias',0x1000d350,0x101a2c70,0x1000e5d0,0xdc,0x11c)]:
 code=bytes.fromhex(raw(a,0x5a)['bytes_hex']);assert b'\xc7\x00'+struct.pack('<I',v)in code
 r=raw(v,n);x=bytes.fromhex(r['bytes_hex']);r.update(class_name=cls,factory=hex(a),allocation_size=size,slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,n,4)]);j['vtables'].append(r)
 r=raw(thunk,5);x=bytes.fromhex(r['bytes_hex']);assert x[0]==0xe9;target=thunk+5+struct.unpack('<i',x[1:])[0];assert target==a;r.update(class_name=cls,target=hex(target));j['export_thunks'].append(r)
for cls,a,n in [('CBaseAlias',0x102110d8,1),('CInfoGroup',0x102110e8,4),('CMultiAlias',0x10211128,5),('CBaseEntity_support',0x10211760,22),('ENTVARS_support',0x1021aae0,102)]:
 r=raw(a,n*16);r.update(class_name=cls,stride=16,count=n,fields=[]);x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,name,off,count,flags=struct.unpack_from('<IIIhh',x,i*16);s=string(name);j['literals'].append(s);r['fields'].append(dict(record_va=hex(a+i*16),type_id=kind,name=s['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1])
j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest(),slots=[dict(name=n,index=names.index(n),address=hex(0x10222f48+4*names.index(n)))for n in ['pfnCreateEntity','pfnPvAllocEntPrivateData','pfnAlertMessage']])
j['sdk_type_reference']=dict(path=h.relative_to(ROOT).as_posix(),sha256=hashlib.sha256(h.read_bytes()).hexdigest(),ids={'1':'FIELD_STRING','3':'FIELD_CLASSPTR','10':'FIELD_INTEGER','11':'FIELD_FUNCTION','17':'FIELD_SOUNDNAME'},caution='Enum names are SDK comparisons; actual native type dispatch is separately reviewed in serializer core.')
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest()) for x in ['external/hlsdk-portable/engine/eiface.h','external/hlsdk-portable/dlls/cbase.h']]
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']))
