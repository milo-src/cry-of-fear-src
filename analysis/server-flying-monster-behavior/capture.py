"""Static saved-C/PE/ASM evidence for the adjacent flying-behavior helpers with unconfirmed concrete owner."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100ab410 100ab4d0 100ab5a0 100ab710 100ab740 100ab7d0 100ab880 100abc90 100abea0 100abf60'.split()
SUPPORT='100b4aa0 100ab8b0 100ab840 100bdf80 100bed20 100bcdc0 100bf310 100c0750 1008a330 101174a0 10119780 1011a800 1011a7e0 1011aa30 100fc9f0'.split()
SUPPORT=list(dict.fromkeys(SUPPORT))

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

# Native-only entry between independently bounded saved functions. No fabricated C/card.
start,end=0x100ab7b0,0x100ab7c8
cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(B)]
t=subprocess.check_output(cmd,text=True);p=OUT/'100ab7b0-native-only.asm';p.write_text(t,encoding='utf8',newline='\n')
e['ranges'].append(dict(**ref(p),command=cmd,entry=hex(start),start=hex(start),end_exclusive=hex(end),binary_range_sha256=h(raw(start,end-start)[0]),asm_only=True))
e['native_only_entry']=dict(entry=hex(start),review_count=0,saved_c=False,boundary_before=hex(start-9),boundary_after=hex(end),preceding_padding=keep(start-9,9,'INT3 between prior RET4 and native-only entry').hex(),following_padding=keep(end,8,'INT3 after native-only RET').hex())
e['vtables']=[]
for nm,a,offsets in [('CGenericMonster',0x101ce36c,list(range(0,0x240,4)))]:
 slots=[]
 for off in offsets:
  x=keep(a+off,4,nm+' vtable slot');slots.append(dict(offset=hex(off),target=hex(struct.unpack('<I',x)[0])))
 e['vtables'].append(dict(name=nm,address=hex(a),slots=slots))
 col=struct.unpack('<I',keep(a-4,4,nm+' COL pointer'))[0]
 x=keep(col,20,nm+' COL');sig,off,cd,typ,hier=struct.unpack('<5I',x)
 keep(typ,8,nm+' type descriptor header');st(typ+8)
 ch=struct.unpack('<4I',keep(hier,16,'RTTI hierarchy'))
 for d in struct.unpack('<'+'I'*ch[2],keep(ch[3],ch[2]*4,'RTTI base descriptor pointers')):
  r=struct.unpack('<6I',keep(d,24,'RTTI base descriptor'));st(r[0]+8)

e['save_tables']=[]
for cls,a,n in [('ENTVARS',0x1021aae0,102),('MONSTER',0x10216e08,49),('BASE',0x10211760,22),('ANIMATING',0x10211178,5)]:
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
keep(0x101a13e0,16,'native scalar sign-flip mask used by Approach')

header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),copied_dwords=144,header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in range(144)])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/server-derived-death/contract.md','analysis/server-monster-route-execution/contract.md','analysis/server-monster-movement/contract.md','analysis/server-graph-helpers/contract.md','analysis/server-monster-initialization/contract.md','analysis/server-monster-navigation/contract.md','analysis/server-monster-pathfinding/contract.md','analysis/server-monster-state/contract.md','analysis/server-monster-hearing/contract.md','analysis/server-monster-sight/contract.md','analysis/server-animation-state/contract.md','analysis/server-studio-events/contract.md','analysis/server-monster-scheduler/contract.md','analysis/server-monster-controls/contract.md','analysis/server-monster-decisions/contract.md','analysis/server-monster-attack-dispatch/contract.md','analysis/server-entity-predicates/contract.md','analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['explicit_strings']=[]
# Native export bindings and bounded exact LE32 references; absence is not a full call graph.
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0]
ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY+['100ab7b0','100ab8b0']]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
e['exact_le32_data_refs']=dict(method='All byte offsets in raw PE .rdata/.data only, exact preferred-base LE32 values. Not instruction decoding, runtime scan or complete xrefs.',sections=[],targets={})
for sec in pe['sections']:
 if sec['name'] not in ['.rdata','.data']:continue
 e['exact_le32_data_refs']['sections'].append(dict(name=sec['name'],rva=sec['rva'],raw_offset=sec['raw_offset'],raw_size=sec['raw_size'],sha256=h(b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']])))
for a in PRIMARY+['100ab7b0','100ab840','100ab8b0']:
 vals=[]
 for sec in e['exact_le32_data_refs']['sections']:
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];off=0
  while True:
   off=data.find(struct.pack('<I',int(a,16)),off)
   if off<0:break
   va=BASE+int(sec['rva'],16)+off;keep(va,4,'exact LE32 function-address data reference');vals.append(hex(va));off+=1
 e['exact_le32_data_refs']['targets']['0x'+a]=vals

# Reproducible direct E8/E9 reconnaissance: decode static .text in memory, no ignored cache needed.
cmd=[shutil.which('objdump'),'-d','-M','intel','-j','.text',str(B)]
listing=subprocess.check_output(cmd,text=True)
targets={int(a,16) for a in PRIMARY+['100ab7b0','100ab840','100ab8b0']}
matches=[]
for line in listing.splitlines():
 m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})\s+(call|jmp)\s+0x([0-9a-f]+)',line)
 if not m:continue
 a=int(m[1],16);q=bytes.fromhex(m[2]);target=int(m[4],16)
 if target in targets and len(q)==5 and q[0] in (0xe8,0xe9):
  assert raw(a,5)[0]==q and (a+5+struct.unpack('<i',q[1:])[0])&0xffffffff==target
  keep(a,5,'instruction-aligned direct call/jump to flying-behavior family')
  matches.append(dict(address=hex(a),target=hex(target),mnemonic=m[3],bytes_hex=q.hex()))
e['direct_edge_scan']=dict(command=cmd,listing_sha256=h(listing.encode()),targets=[hex(a)for a in sorted(targets)],matches=matches,scope='objdump instruction-aligned E8/E9 in static .text only; indirect calls, computed pointers, aliases and undecoded data are excluded.')
e['rtti_name_scan']=dict(needle_ascii='Flying',file_offsets=[i for i in range(len(b))if b.startswith(b'Flying',i)],scope='Case-sensitive raw byte substring, not proof of all RTTI names or concrete owner absence.')
e['baseline']=dict(reviewed=2041,pending=6614,source='analysis/full-reverse-pass27-verification.json')
e['baseline_report']=ref(ROOT/'analysis/full-reverse-pass27-verification.json')
e['global_vector']=dict(address='0x10222f34',size=12,section=next(s for s in pe['sections']if s['name']=='.data'),runtime_value_known=False)
e['accounting']=dict(new_primary=PRIMARY,updated_existing=[])
prior=OUT/'evidence.json'
old=json.loads(prior.read_text(encoding='utf8')) if prior.exists() else {}
if 'pending_checks' in old:e['pending_checks']=old['pending_checks']
else:
 cat=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf8');e['pending_checks']=[]
 for a in PRIMARY:
  block=cat.split('[FUNCTION server:0x'+a+']',1)[1].split('[/FUNCTION]',1)[0];assert 'REVIEW' not in block
  e['pending_checks'].append(dict(entry='0x'+a,block=block,catalog_sha256=h(cat.encode('utf8'))))
for nm,p in [('const_header','external/hlsdk-portable/common/const.h'),('usermessage_registry','analysis/network/usermessage-registry.json')]:e[nm]=ref(ROOT/p)
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
assert h(B.read_bytes())==SHA
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',len(e['raw']),'raw')


