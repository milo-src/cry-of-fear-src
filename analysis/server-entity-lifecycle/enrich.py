import json,struct,hashlib,sys,re
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2];sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
P=Path(__file__).resolve().parent;E=json.loads((P/'evidence.json').read_text());B=Path(E['binary']).read_bytes();M=pe_metadata(B)
def read(a,n):
 r=a-int(M['image_base'],16)
 for s in M['sections']:
  d=r-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return B[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
raw={}
def rec(a,n):
 bs=read(a,n);r={'address':hex(a),'bytes_hex':bs.hex(),'sha256':hashlib.sha256(bs).hexdigest()};raw[hex(a)]=r;return r
def cstr(a):
 bs=read(a,256).split(b'\0')[0];rec(a,len(bs)+1);return bs.decode('ascii')
tables=[]
for a,num in [(0x10211f4c,1),(0x10211f5c,3)]:
 r=rec(a,num*16);r['fields']=[]
 for i in range(num):
  typ,name,off,count,flags=struct.unpack('<IIIHH',read(a+16*i,16));r['fields'].append({'type_id':typ,'name':cstr(name),'offset':hex(off),'count':count,'flags':flags})
 tables.append(r)
vts=[]
for name,a,n in [('CKeypadNew',0x101a9748,0x120),('CAnimatedCamera',0x101a9b9c,0x244),('CAnimatedCameraModel',0x101a9e04,0x244)]:
 r=rec(a,n);r['class_name']=name;r['slots']=[{'offset':hex(i),'target':hex(struct.unpack('<I',read(a+i,4))[0])} for i in range(0,n,4)];vts.append(r)
for a,n in [(0x10020000,5),(0x10020fd0,5),(0x10020fe0,5),(0x101a119c,4),(0x101a1370,4),(0x101a1390,4),(0x101a1e10,8),(0x101a9900,8)]:rec(a,n)
for f in E['functions']:
 if not f['new_review']:continue
 for v in re.findall(r'push\s+0x(101a[0-9a-f]{4})',(ROOT/f['assembly']).read_text()):
  a=int(v,16);bs=read(a,200).split(b'\0')[0]
  if bs and all(9<=x<=13 or 32<=x<=126 for x in bs):cstr(a)
# Resolve original PE import IAT, without loading DLL.
peoff=struct.unpack_from('<I',B,0x3c)[0];opt=peoff+24;base=int(M['image_base'],16);impRVA=struct.unpack_from('<I',B,opt+104)[0]
imports=[]
for off in range(0,2000,20):
 desc=read(base+impRVA+off,20);oft,stamp,fw,name,ft=struct.unpack('<IIIII',desc)
 if not any([oft,stamp,fw,name,ft]):break
 dll=cstr(base+name)
 for i in range(3000):
  v=struct.unpack('<I',read(base+(oft or ft)+4*i,4))[0]
  if not v:break
  if base+ft+4*i==0x101a119c:
   rec(base+impRVA+off,20);rec(base+(oft or ft)+4*i,4);rec(base+v,2)
   imports.append({'iat':'0x101a119c','dll':dll,'name':cstr(base+v+2),'lookup_entry':hex(base+(oft or ft)+4*i),'import_name':hex(base+v)})
# SDK names are tied to native copy evidence in prior alias package; retain hash and actual slot arithmetic.
h=ROOT/'external/hlsdk-portable/engine/eiface.h';ht=h.read_text();chunk=ht.split('typedef struct enginefuncs_s',1)[1].split('} enginefuncs_t',1)[0]
names=re.findall(r'\(\s*\*\s*(pfn\w+)\s*\)',chunk)
slots=[]
for a in [0x10222f50,0x10222f9c,0x10222fb8,0x10223000,0x10223004,0x10223008,0x10223010,0x10223014,0x10223044,0x10223054,0x10223064,0x10223070,0x102230b8]:
 i=(a-0x10222f48)//4;slots.append({'address':hex(a),'index':i,'sdk_name':names[i]})
E.update(raw=list(raw.values()),save_tables=tables,vtables=vts,imports=imports,engine_api={'copy_support':'analysis/server-alias-state/evidence.json','base':'0x10222f48','header':h.relative_to(ROOT).as_posix(),'header_sha256':hashlib.sha256(h.read_bytes()).hexdigest(),'slots':slots})
# Hash and byte verification of every captured function.
rows=0
for f in E['functions']:
 for k in ['source','assembly']:assert hashlib.sha256((ROOT/f[k]).read_bytes()).hexdigest()==f[k+'_sha256']
 lo,hi=map(lambda x:int(x,16),f['range_inclusive']);assert hashlib.sha256(read(lo,hi-lo+1)).hexdigest()==f['original_bytes_sha256']
 for line in (ROOT/f['assembly']).read_text().splitlines():
  q=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if q:
   bs=bytes.fromhex(q[2]);assert read(int(q[1],16),len(bs))==bs;rows+=1
E['validation']={'C_files':len(E['functions']),'ASM_files':len(E['functions']),'ASM_byte_rows':rows,'raw_records':len(raw),'PE_equal':True}
(P/'evidence.json').write_text(json.dumps(E,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print(imports,slots,E['validation'])
