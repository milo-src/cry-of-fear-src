"""Static saved-C/PE/ASM evidence for native player statistics scoring; never executes target code."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100dbfb0 10092ce0 10092f60'.split()
SUPPORT=[]

def h(x):return hashlib.sha256(x).hexdigest()
def raw(a,n):
 for s in pe['sections']:
  d=a-BASE-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   off=s['raw_offset']+d;return b[off:off+n],off
 raise ValueError(hex(a))
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
e=dict(objdump=shutil.which('objdump'),objdump_version=subprocess.check_output([shutil.which('objdump'),'--version'],text=True).splitlines()[0],method='Read-only static saved C + bounded native objdump + PE raw reads; no target execution.',module='server',binary=B.as_posix(),sha256=SHA,target_executed=False,primary=PRIMARY,source_c=[],ranges=[],raw=[])
for a in PRIMARY+SUPPORT:
 p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text(encoding='utf8');e['source_c'].append(dict(**ref(p),entry='0x'+a,primary=a in PRIMARY))
 for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
  start=int(lo,16);end=int(hi,16)+1;cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a}-{k}.asm';p.write_text(t,encoding='utf8',newline='\n');pos=start
  for line in t.splitlines():
   m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
   if m:
    at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos and raw(at,len(x))[0]==x;pos+=len(x)
  assert pos==end
  e['ranges'].append(dict(**ref(p),command=cmd,entry='0x'+a,start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0])))
def keep(a,n,label):
 x,off=raw(a,n);r=dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(off),sha256=h(x),label=label);e['raw'].append(r);return x
def st(a):
 n=0
 while raw(a+n,1)[0]!=b'\0':n+=1;assert n<4096
 return keep(a,n+1,'native literal').decode('latin1')[:-1]

e['vtables']=[]
for cls,a,n in []:
 x=keep(a,n,cls+' vtable');r=dict(class_name=cls,address=hex(a),slots=[dict(offset=hex(i),target=hex(struct.unpack_from('<I',x,i)[0]))for i in range(0,n,4)])
 col=struct.unpack('<I',keep(a-4,4,'RTTI COL pointer'))[0];f=struct.unpack('<5I',keep(col,20,'RTTI COL'));keep(f[3],8,'RTTI type prefix');nm=st(f[3]+8);assert nm=='.?AV'+cls+'@@';r['rtti_name']=nm;r['col']=hex(col)
 ch=struct.unpack('<4I',keep(f[4],16,'RTTI hierarchy'));ds=struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptors'));r['bases']=[]
 for d in ds:
  v=struct.unpack('<6I',keep(d,24,'RTTI base class descriptor'));r['bases'].append(dict(name=st(v[0]+8),mdisp=v[2],pdisp=v[3],vdisp=v[4]))
 e['vtables'].append(r)
e['save_tables']=[]
for cls,a,n in [('PLAYER',0x10217fe8,207)]:
 x=keep(a,16*n,cls+' native descriptors');rr=dict(name=cls,address=hex(a),fields=[])
 for i in range(n):
  t,nm,off,c,fl=struct.unpack_from('<IIIhh',x,i*16);rr['fields'].append(dict(type_id=t,name=st(nm),offset=hex(off),count=c,flags=fl))
 e['save_tables'].append(rr)
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
e['support_documents']=[ref(ROOT/p) for p in ['analysis/server-unlock-callers/contract.md','analysis/server-bullet-traces/contract.md','analysis/server-serializer/contract.md']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')
# Bounded direct-reference inventory: three exact targets, executable .text only.
# Raw E8/E9 byte matches are candidates until instruction-boundary check below.
targets={0x100dbfb0,0x10092ce0,0x10092f60};refs=[]
for sec in pe['sections']:
 if sec['name']!='.text':continue
 origin=BASE+int(sec['rva'],16);x=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']]
 for i in range(len(x)-4):
  if x[i] not in (0xe8,0xe9):continue
  to=(origin+i+5+struct.unpack_from('<i',x,i+1)[0])&0xffffffff
  if to in targets:refs.append(dict(site=hex(origin+i),target=hex(to),opcode=hex(x[i]),bytes_hex=x[i:i+5].hex(),saved_owners=[],instruction_aligned=False))
# Associate only actual //address plus exact saved body range, never selector filename.
for p in sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c')):
 text=p.read_text(encoding='utf8');m=re.search(r'^// address: (0x[0-9a-f]+)$',text,re.M)
 if not m:continue
 ranges=[(int(a,16),int(z,16)+1)for a,z in re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',text)]
 hits=[r for r in refs if any(a<=int(r['site'],16)<z for a,z in ranges)]
 if not hits:continue
 if not any(q['path']==p.relative_to(ROOT).as_posix()for q in e['source_c']):e['source_c'].append(dict(**ref(p),entry=m[1],primary=False,scope='navigation-only direct-ref owner; not reviewed in full'))
 for k,(a,z) in enumerate(ranges):
  hh=[r for r in hits if a<=int(r['site'],16)<z]
  if not hh:continue
  existing=next((q for q in e['ranges'] if q['entry']==m[1] and int(q['start'],16)==a),None)
  if existing:t=(ROOT/existing['path']).read_text()
  else:
   cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={z:#x}',str(B)];t=subprocess.check_output(cmd,text=True);f=OUT/f"scan-{m[1][2:]}-{k}.asm";f.write_text(t,encoding='utf8',newline='\n')
   e['ranges'].append(dict(**ref(f),command=cmd,entry=m[1],start=hex(a),end_exclusive=hex(z),binary_range_sha256=h(raw(a,z-a)[0]),scope='navigation-only instruction boundary check; not full semantic review'))
  for r in hh:
   r['saved_owners'].append(m[1]);r['instruction_aligned']=bool(re.search(r'^'+r['site'][2:]+r':\s+(?:[0-9a-f]{2}\s+){5}\s*(?:call|jmp)\s+'+r['target']+r'\s*$',t,re.M))
e['direct_reference_scan']=dict(targets=[hex(a)for a in sorted(targets)],section='.text',method='Raw E8/E9 rel32 candidates; retained saved-body objdump validates instruction boundary. Unowned candidates are not confirmed xrefs. No indirect/vtable/runtime graph completeness.',records=refs)
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8');assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')
