from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=ROOT/'analysis/server-studio-controls';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='1000e5f0 1000e730 1000e760 1000e7c0 1000e800 1000e850 1000e880 1000f450 1000f4d0 1000f530 1000f670 1000f7c0 1000f820 1000f880'.split()
SUPPORT='1000eec0 1000ef20 1000f020 1000f150 1000f1d0 100b4aa0 100b05e0'.split()
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
 start=int(r[1],16);end=int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))
for cls,v,n in [('CGenericMonster',0x101ce36c,0x23c)]:
 r=raw(v,n);x=bytes.fromhex(r['bytes_hex']);r.update(class_name=cls,slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,n,4)])
 colptr=raw(v-4,4);j['literals'].append(colptr);col=struct.unpack('<I',bytes.fromhex(colptr['bytes_hex']))[0];c=raw(col,20);j['literals'].append(c);fields=struct.unpack('<5I',bytes.fromhex(c['bytes_hex']));typ=fields[3];name=string(typ+8);assert name['ascii']=='.?AV'+cls+'@@';j['literals'].append(raw(typ,8));j['literals'].append(name)
 h=raw(fields[4],16);j['literals'].append(h);hv=struct.unpack('<4I',bytes.fromhex(h['bytes_hex']));bases=raw(hv[3],hv[2]*4);j['literals'].append(bases);r['rtti']=dict(col=hex(col),type_descriptor=hex(typ),name=name['ascii'],base_classes=[])
 for ptr in struct.unpack('<'+'I'*hv[2],bytes.fromhex(bases['bytes_hex'])):
  d=raw(ptr,24);j['literals'].append(d);dv=struct.unpack('<6I',bytes.fromhex(d['bytes_hex']));nm=string(dv[0]+8);j['literals'].append(nm);r['rtti']['base_classes'].append(dict(descriptor=hex(ptr),name=nm['ascii'],contained_count=dv[1],mdisp=dv[2],pdisp=dv[3],vdisp=dv[4],attributes=dv[5]))
 j['vtables'].append(r)
for cls,a,n in [('ENTVARS',0x1021aae0,102),('CBaseAnimating',0x10211178,5)]:
 r=raw(a,n*16);r.update(class_name=cls,fields=[]);x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,name,off,count,flags=struct.unpack_from('<IIIhh',x,i*16)
  if cls=='ENTVARS' and off not in [0x114,0x12c,0x134,0x138,0x13c,0x140,0x144]:continue
  s=string(name);j['literals'].append(s);r['fields'].append(dict(type_id=kind,name=s['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
j['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest(),slots=[dict(index=(a-base)//4,address=hex(a),name=names[(a-base)//4])for a in [0x10223070,0x1022303c,0x1022309c,0x1022307c,0x102230b0]])
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest())for x in ['external/hlsdk-portable/engine/eiface.h','external/hlsdk-portable/engine/studio.h']]
# Retain exact constants loaded from the PE; BSS and indirect engine pointers are not literal values.
for r in j['ranges']:
 t=(ROOT/r['path']).read_text(encoding='utf-8')
 for typ,a in re.findall(r'(DWORD|QWORD|XMMWORD) PTR ds:(0x[0-9a-f]+)',t):
  va=int(a,16)
  if 0x101a1000<=va<0x10211000:j['literals'].append(raw(va,{'DWORD':4,'QWORD':8,'XMMWORD':16}[typ]))
j['literals'] += [string(0x101a2e48),string(0x101a33a8)]
# Deduplicate identical immutable reads, retaining RTTI links above.
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['vtables']),len(j['literals']))
