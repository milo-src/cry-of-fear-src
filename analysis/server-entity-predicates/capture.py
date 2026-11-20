from pathlib import Path
import json,re,hashlib,struct,subprocess,shutil,sys
ROOT=Path(__file__).resolve().parents[2];OUT=ROOT/'analysis/server-entity-predicates';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
IDS='1000db00 1000db20 1000db70 1000db80 1000db90 1000df00 1000df10 1000df60 1000df70 1000df80 1000df90 1000dfa0 1000dfe0 1000dff0 1000e1e0 1000e1f0 1000e210 1000e220 1000e260 1000e270 1000e280 1000e290 1000e2d0 1000e5a0 1000e5b0 1000e5c0 1000e5d0'.split()
SUPPORT='1000d230 1000d290 1000d2f0 1000d350 10017110 100b4aa0'.split()
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
 if a not in IDS and a not in ['1000d230','1000d290','1000d2f0','1000d350','10017110','100b4aa0']:continue
 start=int(r[1],16);end=int(r[2],16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];p=OUT/f'{a}.asm';text=subprocess.check_output(cmd,text=True);p.write_text(text,encoding='utf-8',newline='\n');pos=start
 for line in text.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=int(m[1],16);x=bytes.fromhex(m[2]);assert addr==pos;assert raw(addr,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=f'0x{start:08x}',end_exclusive=f'0x{end:08x}',sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(start,end-start)['sha256'],bytes_verified=True,command=cmd))
for cls,v,n in [('CPointEntity',0x101a249c,0x11c),('CBaseAlias',0x101a25bc,0x12c),('CInfoGroup',0x101a2710,0x11c),('CMultiAlias',0x101a2830,0x12c),('CInfoAlias',0x101a296c,0x12c),('CTriggerChangeAlias',0x101a2c70,0x11c)]:
 r=raw(v,n);x=bytes.fromhex(r['bytes_hex']);r.update(class_name=cls,slots=[dict(offset=hex(i),target=f'0x{struct.unpack_from("<I",x,i)[0]:08x}')for i in range(0,n,4)])
 colptr=raw(v-4,4);j['literals'].append(colptr);col=struct.unpack('<I',bytes.fromhex(colptr['bytes_hex']))[0];c=raw(col,20);j['literals'].append(c);fields=struct.unpack('<5I',bytes.fromhex(c['bytes_hex']));typ=fields[3];name=string(typ+8);assert name['ascii']=='.?AV'+cls+'@@';j['literals'].append(raw(typ,8));j['literals'].append(name)
 h=raw(fields[4],16);j['literals'].append(h);hv=struct.unpack('<4I',bytes.fromhex(h['bytes_hex']));bases=raw(hv[3],hv[2]*4);j['literals'].append(bases);r['rtti']=dict(col=hex(col),type_descriptor=hex(typ),name=name['ascii'],base_classes=[])
 for ptr in struct.unpack('<'+'I'*hv[2],bytes.fromhex(bases['bytes_hex'])):
  d=raw(ptr,24);j['literals'].append(d);dv=struct.unpack('<6I',bytes.fromhex(d['bytes_hex']));nm=string(dv[0]+8);j['literals'].append(nm);r['rtti']['base_classes'].append(dict(descriptor=hex(ptr),name=nm['ascii'],contained_count=dv[1],mdisp=dv[2],pdisp=dv[3],vdisp=dv[4],attributes=dv[5]))
 j['vtables'].append(r)
for cls,a,n in [('ENTVARS',0x1021aae0,102)]:
 r=raw(a,n*16);r.update(class_name=cls,fields=[]);x=bytes.fromhex(r['bytes_hex'])
 for i in range(n):
  kind,name,off,count,flags=struct.unpack_from('<IIIhh',x,i*16)
  if off not in [0x20,0x108,0x10c,0x170]:continue
  s=string(name);j['literals'].append(s);r['fields'].append(dict(type_id=kind,name=s['ascii'],offset=hex(off),count=count,flags=flags))
 j['save_tables'].append(r)
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text(encoding='utf-8');names=re.findall(r'\(\*(pfn\w+)\)',ht.split('typedef struct enginefuncs_s',1)[1]);assert names[15]=='pfnGetEntityIllum'
j['api_binding']=dict(initializer='0x100b4aa0',base='0x10222f48',copied_dwords=144,slot15=dict(name=names[15],address='0x10222f84'),header=h.relative_to(ROOT).as_posix(),header_sha256=hashlib.sha256(h.read_bytes()).hexdigest())
j['virtual_globals']=[dict(address='0x10222f34',size=12,meaning='comparison vector; no raw file backing, runtime writes not audited')]
j['pe_sections']=pe['sections']
j['literals'].append(string(0x101a2496))
j['literals'].append(raw(0x101a1370,4))
j['supporting_sources']=[dict(path=x,sha256=hashlib.sha256((ROOT/x).read_bytes()).hexdigest())for x in ['external/hlsdk-portable/engine/eiface.h','external/hlsdk-portable/dlls/cbase.h','external/hlsdk-portable/common/const.h']]
# Native PE export directory and EAT/name/ordinal links for the four tail thunks.
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24;assert struct.unpack_from('<H',b,opt)[0]==0x10b
rva,sz=struct.unpack_from('<II',b,opt+96);base=int(pe['image_base'],16);ex=raw(base+rva,40);j['literals'].append(ex)
f=struct.unpack('<IIHHIIIIIII',bytes.fromhex(ex['bytes_hex']));ordbase,nf,nn,eat,names,ords=f[5:]
for i in range(nn):
 nr=raw(base+names+i*4,4);np=struct.unpack('<I',bytes.fromhex(nr['bytes_hex']))[0];name=string(base+np)
 if name['ascii'] not in ['info_alias','info_group','multi_alias','trigger_changealias']:continue
 orr=raw(base+ords+i*2,2);ordinal=struct.unpack('<H',bytes.fromhex(orr['bytes_hex']))[0];er=raw(base+eat+ordinal*4,4);entry=base+struct.unpack('<I',bytes.fromhex(er['bytes_hex']))[0]
 code=bytes.fromhex(raw(entry,5)['bytes_hex']);assert code[0]==0xe9;target=entry+5+struct.unpack('<i',code[1:])[0]
 j['literals'] += [nr,name,orr,er,raw(entry,5)]
 j['export_thunks'].append(dict(name=name['ascii'],ordinal=ordbase+ordinal,address=hex(entry),target=hex(target),native_bytes=code.hex()))
assert len(j['export_thunks'])==4
# Deduplicate identical immutable reads, retaining RTTI links above.
j['literals']=list({(r['address'],r['end_exclusive']):r for r in j['literals']}.values())
assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(IDS),len(j['ranges']),len(j['vtables']),len(j['literals']))
