"""Static saved-C/PE/ASM evidence for skill refresh and cvar formatter chain."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll');b=B.read_bytes();SHA='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b);BASE=int(pe['image_base'],16)
PRIMARY='100af810 100fc6c0 1001f160'.split()
SUPPORT='10001790 100b4aa0 100e7af0 1015cf61 1013dbb3'.split()

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
header=ROOT/'external/hlsdk-portable/engine/eiface.h';names=re.findall(r'\(\*(pfn\w+)\s*\)',header.read_text().split('typedef struct enginefuncs_s',1)[1]);base=0x10222f48
e['api_binding']=dict(initializer='0x100b4aa0',base=hex(base),header=ref(header),slots=[dict(slot=i,name=names[i],address=hex(base+i*4))for i in [57,61]])
e['support_documents']=[ref(ROOT/p)for p in ['analysis/exports/hl.csv','external/hlsdk-portable/engine/progdefs.h','external/hlsdk-portable/common/const.h','external/hlsdk-portable/dlls/decals.h','analysis/movement/health-stamina.md']]
e['index']=ref(ROOT/'decompiled/server/partial-pass/index.json')

e['explicit_strings']=[]
for r in e['ranges']:
 text=(ROOT/r['path']).read_text()
 for a in [int(x,16)for x in re.findall(r'(?:push|mov\s+e[a-z]{2},)\s*0x(101[a-f][0-9a-f]{4})',text)]:
  try:
   q=raw(a,256)[0].split(b'\0',1)[0]
   if q and all(32<=c<127 or c in (9,10,13)for c in q):e['explicit_strings'].append(dict(address=hex(a),text_latin1=st(a)))
  except ValueError:pass
 for m in re.finditer(r'(DWORD|QWORD) PTR ds:0x(101[a-f][0-9a-f]{4})',text):keep(int(m[2],16),4 if m[1]=='DWORD'else 8,'native scalar operand')
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',keep(BASE+erv,40,'PE export directory'));ob,nf,nn,funcs,names,ords=ex[5:]
e['exports']=[]
for i in range(nn):
 nr=struct.unpack('<I',raw(BASE+names+4*i,4)[0])[0];oi=struct.unpack('<H',raw(BASE+ords+2*i,2)[0])[0];fr=struct.unpack('<I',raw(BASE+funcs+4*oi,4)[0])[0]
 if BASE+fr in [int(a,16)for a in PRIMARY]:
  keep(BASE+names+4*i,4,'export name RVA');keep(BASE+ords+2*i,2,'export ordinal');keep(BASE+funcs+4*oi,4,'export function RVA')
  e['exports'].append(dict(name=st(BASE+nr),entry=hex(BASE+fr),ordinal=ob+oi,name_index=i))
# Ordered native PUSH literal -> CALL GetSkillCvar -> FSTP destination chains.
asm=(OUT/'100af810-0.asm').read_text()
ins=[(int(m[1],16),m[2]) for line in asm.splitlines() if (m:=re.match(r'\s*([0-9a-f]{8}):\s+(?:[0-9a-f]{2}\s+)+\s*(.*)',line)) and m[2]]
e['skill_writes']=[]
for i,(a,op) in enumerate(ins):
 if op=='call   0x100fc6c0':
  pa,push=ins[i-1];assert push.startswith('push   0x');sp=int(push.split()[-1],16)
  j=i+1
  if ins[j][1].startswith('add    esp,'):j+=1
  sa,store=ins[j];m=re.fullmatch(r'fstp   DWORD PTR ds:(0x[0-9a-f]+)',store);assert m
  e['skill_writes'].append(dict(order=len(e['skill_writes'])+1,push_site=hex(pa),call_site=hex(a),literal_address=hex(sp),base_cvar=st(sp),store_site=hex(sa),destination=m[1]))
e['format_literal']=dict(address='0x101de4a8',text=st(0x101de4a8))
e['difficulty_literal']=dict(address='0x101a8818',text=st(0x101a8818))
e['alert_literal']=dict(address='0x101cd9fc',text=st(0x101cd9fc))
cfg=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/skill.cfg');cb=cfg.read_bytes()
e['installed_skill_config']=dict(path=cfg.as_posix(),sha256=h(cb),target_executed=False,meaning='Read-only installed file values; no runtime execution or cvar measurement',selected_lines=[dict(line=i,text=line)for i,line in enumerate(cb.decode('latin1').splitlines(),1)if re.match(r'^sk_(cof_punch|syringe_heal|primary_speed|secondary_speed|sprint_speed|stair_speed)[1-4]\s',line)])
(OUT/'skill-writes.tsv').write_text('order\tbase_cvar\tdestination\tcall_site\tstore_site\n'+''.join(str(r['order'])+'\t'+r['base_cvar']+'\t'+r['destination']+'\t'+r['call_site']+'\t'+r['store_site']+'\n'for r in e['skill_writes']),encoding='utf8')
e['skill_write_table']=ref(OUT/'skill-writes.tsv')
e['prior_review']=ref(OUT/'prior-review.txt')
(OUT/'evidence.json').write_text(json.dumps(e,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print(len(e['source_c']),len(e['ranges']))
