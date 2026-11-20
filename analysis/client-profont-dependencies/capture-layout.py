"""Read original PE tables/imports/constants without executing any target code."""
from pathlib import Path
import json,struct,hashlib,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll');b=B.read_bytes();SHA='e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360';assert hashlib.sha256(b).hexdigest()==SHA
p=pe_metadata(b);base=int(p['image_base'],16)
def raw(a,n):
 for s in p['sections']:
  d=a-base-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
def u32(a):return struct.unpack('<I',raw(a,4))[0]
def string(a):
 n=0
 while raw(a+n,1)!=b'\0':n+=1;assert n<2048
 return raw(a,n+1)
records=[]
def retain(a,n,label):
 x=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),sha256=hashlib.sha256(x).hexdigest(),label=label);records.append(r);return r
nt=struct.unpack_from('<I',b,0x3c)[0];opt=nt+24;assert struct.unpack_from('<H',b,opt)[0]==0x10b
imp_rva=struct.unpack_from('<I',b,opt+104)[0];imports={};d=base+imp_rva
while raw(d,20)!=bytes(20):
 oft,_,_,name,iat=struct.unpack('<5I',raw(d,20));dll=string(base+name)[:-1].decode();i=0
 while u32(base+(oft or iat)+4*i):
  v=u32(base+(oft or iat)+4*i)
  if not v&0x80000000:
   symbol=string(base+v+2)[:-1].decode();imports[base+iat+i*4]=(dll,symbol,base+v)
  i+=1
 d+=20
slots=[]
for offset in [0,4,8,0xc,0x24,0x28,0x40,0x120,0x138,0x188,0x190,0x198,0x1b8,0x1bc,0x1c0]:
 a=0x101452cc+offset;target=u32(a);retain(a,4,'CHUDControl vtable slot '+hex(offset));r=dict(offset=hex(offset),target=hex(target))
 x=raw(target,6)
 if x[:2]==b'\xff\x25':
  iat=struct.unpack_from('<I',x,2)[0];dll,sym,np=imports[iat];r.update(iat=hex(iat),dll=dll,symbol=sym);retain(target,6,'IAT jump');retain(iat,4,'IAT initial name RVA');retain(np,len(string(np+2))+2,'import hint/name')
 slots.append(r)
for a in [0x101452c8]:
 col=u32(a);retain(col,20,'CHUDControl complete object locator');typ=u32(col+12);retain(typ,8+len(string(typ+8)),'CHUDControl RTTI type descriptor')
for a in [0x101468c8,0x101468e0,0x101468e8]:
 r=retain(a,8,'paint constant double');r['float64']=struct.unpack('<d',raw(a,8))[0]
for a in [0x1014ed64,0x1014ed70,0x10146804]:
 r=retain(a,len(string(a)),'literal');r['ascii']=string(a)[:-1].decode()
retain(0x100b3704,6,'paintBackground import thunk')
iat=u32(0x100b3706);dll,sym,np=imports[iat];retain(iat,4,'paintBackground IAT');retain(np,2+len(string(np+2)),'paintBackground import hint/name')
result=dict(binary=B.as_posix(),sha256=SHA,target_executed=False,slots=slots,paint_background_import=dict(iat=hex(iat),dll=dll,symbol=sym),raw=records)
(OUT/'layout-evidence.json').write_text(json.dumps(result,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');print('PASS',len(records),'raw records',result['paint_background_import'])
