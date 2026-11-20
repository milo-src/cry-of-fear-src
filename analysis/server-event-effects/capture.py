"""Static saved-C/PE/ASM evidence for monster particle, ripple and scheduled removal."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='10117770 1011a120 10094060 1011a2f0 1011ac00 1008ac50 10092020 1009efc0 1009bbf0 100984f0 1011a820 10099830'.split()
SUPPORT='100b4aa0 10119fe0 10119780 100fc9f0 1000e1f0 100125e0 10118460 101028e0 100e5fc0 100bf310 1011f900 10116990 10017110 1000db80'.split()

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
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text();e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
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
 return keep(a,n+1,'native literal').decode()[:-1]
e['vtables']=[]
for cls,a,n in [('CParticle',0x101bff80,0x11c)]:
 x=keep(a,n,cls+' vtable');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));keep(f[3],8,'RTTI type prefix');nm=st(f[3]+8);assert nm=='.?AV'+cls+'@@';r['rtti_name']=nm;r['col']=hex(col)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptors'));r['bases']=[]
 for d in ds:
  v=struct.unpack('<6I',keep(d,24,'RTTI base class descriptor'));r['bases'].append(dict(name=st(v[0]+8),mdisp=v[2],pdisp=v[3],vdisp=v[4]))
 e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
e['data_operands']=[]
for r in e['ranges']:
 if r['entry'][2:] not in PRIMARY:continue
 text=(ROOT/r['path']).read_text()
 for address in sorted(set(int(x,16) for x in re.findall(r'(?:ds:|,|\s)0x([0-9a-f]{8})',text))):
  if 0x101a0000<=address<0x10230000:
   try:
    v=keep(address,16,'primary ASM direct data operand');e['data_operands'].append(dict(entry=r['entry'],address=hex(address),bytes_hex=v.hex()))
   except ValueError:pass
e['literals']=[dict(address=hex(a),text=st(a)) for a in [0x101e580c,0x101e57ec,0x101e57fc,0x101a91d4,0x101a920c,0x101a91ec,0x101b82a0,0x101c2d70,0x101c2d74,0x101a2130,0x101dab88,0x101daf48]]
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [0,2,21,22,28,31,45,46,47,48,50,53,54,57,63,70,71,75,90,95,96]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-monster-events/contract.md','analysis/server-parent-tree/contract.md','analysis/network/usermessage-registry.json','analysis/graphics/engine-wire-contract.md','analysis/server-queue-b/contract-parent.md']]
e['support_documents'].append(ref(ROOT/'external/hlsdk-portable/common/const.h'))
e['support_documents'].append(ref(ROOT/'analysis/graphics/engine-wire-assembly/capture.json'))
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
# Assembly-only support: missing WriteShort bridge, never a new C/REVIEW entry.
eb=Path('D:/Steam/steamapps/common/Cry of Fear/hw.dll');buf=eb.read_bytes();eh='9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875';assert h(buf)==eh
ep=pe_metadata(buf);va=0x1da6829;end=0x1da6855
section=next(s for s in ep['sections'] if int(s['rva'],16)<=va-int(ep['image_base'],16)<int(s['rva'],16)+s['raw_size'])
off=section['raw_offset']+va-int(ep['image_base'],16)-int(section['rva'],16);chunk=buf[off:off+end-va]
p=OUT/'engine-write-short-support.asm';p.write_text(subprocess.check_output([shutil.which('objdump'),'-d','-M','intel',f'--start-address={va:#x}',f'--stop-address={end:#x}',str(eb)],text=True),encoding='utf8',newline='\n')
e['engine_support']=dict(binary=eb.as_posix(),sha256=eh,range=dict(**ref(p),start=hex(va),end_exclusive=hex(end),file_offset=hex(off),bytes_hex=chunk.hex(),binary_range_sha256=h(chunk)),source_c=ref(ROOT/'decompiled/engine/captures/graphics-engine-wire/002-pseudocode.c'))
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
