"""Static saved-C/PE/ASM evidence for native multiplayer frame/spawn and direct helpers."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100c9ae0 100c9210 100e4c30 100e4d60 100deff0 100b0210 1011a8a0'.split()
SUPPORT='100b4aa0 1001f160 1011ab30 1013dbb3 10118460 10119680 10119c00 10119810 101182b0 100014e0 10017950 100ea5c0 10001790 100e5fc0 100f1940 100f14c0 100aff70 100c90b0 100fc430 10119cc0 10119d40 1004db60'.split()

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text(encoding='utf8');e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]
e['vtables']=[]
for cls,a,n in [('CHalfLifeRules',0x101de3b0,0xf8),('CHalfLifeMultiplay',0x101d608c,0x100)]:
 x=keep(a,n,cls+' vtable');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));keep(f[3],8,'RTTI type prefix');nm=st(f[3]+8);assert nm=='.?AV'+cls+'@@';r['rtti_name']=nm;r['col']=hex(col)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptors'));r['bases']=[]
 for d in ds:
  v=struct.unpack('<6I',keep(d,24,'RTTI base class descriptor'));r['bases'].append(dict(name=st(v[0]+8),mdisp=v[2],pdisp=v[3],vdisp=v[4]))
 e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('PLAYER',0x10217fe8,207)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
e['cvars']=[]
for a in [0x1021469c,0x102148a4]:
 x=keep(a,20,'native cvar_t descriptor');name,default,flags,value,nextptr=struct.unpack('<IIIfI',x)
 e['cvars'].append(dict(address=hex(a),name=st(name),default_string=st(default),flags=flags,value_address=hex(a+12),initial_raw_value=value,next_pointer=hex(nextptr)))
# Native PLAYER descriptors give button field names; only the two required records are duplicated.
e['player_button_fields']=[]
for a in [0x10218018,0x10218028]:
 try:t,nm,off,c,fl=struct.unpack('<IIIhh',raw(a,16)[0])
 except ValueError:break
 if off in [0x22b0,0x22b4] and t==10:
  keep(a,16,'PLAYER button descriptor');e['player_button_fields'].append(dict(address=hex(a),type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 if len(e['player_button_fields'])==2:break
assert len(e['player_button_fields'])==2
for a in [0x101d6254,0x101ca428,0x101dcb74,0x101dcb88,0x101dcb9c,0x101dcbb0]:st(a)
st(0x101a2496) # empty string must be retained explicitly
# Retain immediate strings and raw static float operands from the exact bounded ASM.
for r in e['ranges']:
 t=(ROOT/r['path']).read_text(encoding='utf8')
 for m in re.finditer(r'(DWORD|QWORD) PTR ds:0x(101[a-f][0-9a-f]{4})',t):
  keep(int(m[2],16),4 if m[1]=='DWORD' else 8,'native literal operand')
 for a in [int(x,16)for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',t)]:
  try:
   x,off=raw(a,256);v=x.split(b'\0',1)[0]
   if v and all(c in (9,10,13)or 32<=c<127 for c in v):st(a)
  except (ValueError,UnicodeDecodeError):pass
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-rules-bootstrap/contract.md','analysis/network/usermessage-registry.json','analysis/graphics/music-server-state-evidence.json','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/dlls/gamerules.h','external/hlsdk-portable/common/const.h','external/xash3d-fwgs/engine/common/protocol.h']]
e['range_corrections']=[]
# Decode the one actual SteamFriends IAT binding from the original PE, never load it.
e['imports']=[]
nt=struct.unpack_from('<I',b,0x3c)[0];imp_rva,imp_size=struct.unpack_from('<II',b,nt+24+104)
for di in range(imp_size//20):
 da=BASE+imp_rva+di*20;desc=struct.unpack('<5I',raw(da,20)[0])
 if not any(desc):break
 oft,stamp,chain,nm,iat=desc
 j=(0x101a11ac-(BASE+iat))//4
 if j<0:continue
 for k in range(j+1):
  val=struct.unpack('<I',raw(BASE+(oft or iat)+k*4,4)[0])[0]
  if val==0:break
 else:
  keep(da,20,'PE import descriptor for selected IAT');keep(BASE+(oft or iat)+j*4,4,'selected lookup thunk');keep(0x101a11ac,4,'SteamFriends initial IAT');keep(BASE+val,2,'import hint')
  e['imports'].append(dict(iat='0x101a11ac',library=st(BASE+nm),name=st(BASE+val+2)))
assert e['imports']==[dict(iat='0x101a11ac',library='steam_api.dll',name='SteamFriends')]

e['zero_fill']=[dict(address='0x10222f34',size=12,meaning='shared vector is in virtual zero-fill; no runtime immutability guarantee')] 
e['registration_links']=[{k:x[k] for k in ['name','registered_size','id_global']} for x in json.loads((ROOT/'analysis/network/usermessage-registry.json').read_text(encoding='utf8'))['messages'] if x['id_global'] in ['0x102266c8','0x102266b0','0x102266d8','0x1022667c','0x10226658','0x10226544','0x10226518','0x102266a8','0x10226568']]

e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
