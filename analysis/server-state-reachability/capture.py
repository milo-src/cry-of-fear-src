"""Bounded static reachability audit. Runs objdump, never the target DLL."""
from pathlib import Path
import hashlib,json,re,shutil,struct,subprocess
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
BINARY=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
EXPECTED='751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
TARGETS=[0x10222e10,0x1004a6e0,0x100c5300,0x10029070,0x10029090,0x1002a480,0x1002a000]
OWNERS='1001cc90 1004c100 100a1f70 100a4500 100c9210 100e9ab0 10120eb0'.split()
SUPPORT='10029070 10029090 1002a480 1002a000 1004a6e0 100c5300'.split()
H=lambda v:hashlib.sha256(v).hexdigest()
def jwrite(p,x):p.write_text(json.dumps(x,ensure_ascii=False,indent=2)+'\n',encoding='utf8')
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=H(p.read_bytes()))
def scan(b):
 nt=struct.unpack_from('<I',b,0x3c)[0];ns=struct.unpack_from('<H',b,nt+6)[0];op=struct.unpack_from('<H',b,nt+20)[0]
 base=struct.unpack_from('<I',b,nt+52)[0];sections=[]
 for i in range(ns):
  at=nt+24+op+40*i;vs,rv,sz,fp=struct.unpack_from('<4I',b,at+8);flags=struct.unpack_from('<I',b,at+36)[0]
  sections.append(dict(name=b[at:at+8].split(b'\0')[0].decode(),rva=rv,virtual_size=vs,raw_size=sz,raw_offset=fp,flags=flags))
 def raw(a,n):
  for s in sections:
   d=a-base-s['rva']
   if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
  raise ValueError(hex(a))
 def mapped(off):
  return [dict(section=s['name'],address=hex(base+s['rva']+off-s['raw_offset'])) for s in sections if s['raw_offset']<=off<s['raw_offset']+s['raw_size']]
 def occurrences(needle):
  out=[];pos=0
  while (pos:=b.find(needle,pos))>=0:
   out.append(dict(file_offset=hex(pos),mappings=mapped(pos)));pos+=1
  return out
 results={hex(t):dict(va_literal=occurrences(struct.pack('<I',t)),rva_literal=occurrences(struct.pack('<I',t-base)),rel32_candidates=[]) for t in TARGETS}
 # Every possible byte offset in executable raw sections: superset of aligned E8/E9.
 text_bounds=[]
 for a in ['1004a6e0','100c5300']:
  t=(ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c').read_text(encoding='utf8')
  for lo,hi in re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',t):text_bounds.append((int(lo,16),int(hi,16)+1))
 interior=[];exec_bytes=0
 for s in sections:
  if not s['flags']&0x20000000:continue
  data=b[s['raw_offset']:s['raw_offset']+s['raw_size']];exec_bytes+=len(data)
  for i in range(len(data)-4):
   if data[i] not in (0xe8,0xe9):continue
   dst=(base+s['rva']+i+5+struct.unpack_from('<i',data,i+1)[0])&0xffffffff
   if dst in TARGETS:results[hex(dst)]['rel32_candidates'].append(dict(address=hex(base+s['rva']+i),opcode=hex(data[i]),bytes_hex=data[i:i+5].hex()))
   for lo,hi in text_bounds:
    if lo<=dst<hi:interior.append(dict(address=hex(base+s['rva']+i),target=hex(dst),body_start=hex(lo),body_end_exclusive=hex(hi),source_within_same_body=lo<=base+s['rva']+i<hi,bytes_hex=data[i:i+5].hex()))
 # All export-address-table entries, including unnamed ordinals and forwarders.
 er,esz=struct.unpack_from('<II',b,nt+24+96);exports=[]
 if er:
  d=struct.unpack('<IIHHIIIIIII',raw(base+er,40));ordinal,nfunc,nname,eat,names,ords=d[5:]
  named={}
  for i in range(nname):
   p=base+struct.unpack('<I',raw(base+names+4*i,4))[0];st=b''
   while raw(p+len(st),1)!=b'\0':st+=raw(p+len(st),1)
   k=struct.unpack('<H',raw(base+ords+2*i,2))[0];named.setdefault(k,[]).append(st.decode('ascii'))
  for i in range(nfunc):
   rv=struct.unpack('<I',raw(base+eat+4*i,4))[0]
   exports.append(dict(ordinal=ordinal+i,rva=hex(rv),address=hex(base+rv) if rv else None,names=named.get(i,[]),forwarder=bool(er<=rv<er+esz)))
 rr,rsz=struct.unpack_from('<II',b,nt+24+96+5*8);relocs=[];pos=0
 while pos<rsz:
  page,size=struct.unpack('<II',raw(base+rr+pos,8));assert size>=8 and not size%2
  for i in range((size-8)//2):
   v=struct.unpack('<H',raw(base+rr+pos+8+i*2,2))[0];typ=v>>12
   if typ==3:
    at=base+page+(v&0xfff);value=struct.unpack('<I',raw(at,4))[0]
    if value in TARGETS:relocs.append(dict(address=hex(at),value=hex(value),type='HIGHLOW'))
  pos+=size
 assert pos==rsz
 return dict(image_base=hex(base),file_bytes=len(b),sections=sections,executable_raw_bytes=exec_bytes,targets=results,exports_count=len(exports),target_exports=[x for x in exports if x['address'] in results],text_body_exports=[x for x in exports if x['address'] and any(lo<=int(x['address'],16)<hi for lo,hi in text_bounds)],text_body_rel32_candidates=interior,target_relocations=relocs),raw
def instructions(t):
 out=[]
 for line in t.splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})\s+([^\s].*)$',line)
  if m:out.append(dict(address=int(m[1],16),bytes_hex=bytes.fromhex(m[2]).hex(),instruction=m[3]))
 return out
def run():
 b=BINARY.read_bytes();assert H(b)==EXPECTED;results,raw=scan(b);obj=shutil.which('objdump');assert obj
 e=dict(binary=BINARY.as_posix(),sha256=H(b),target_executed=False,new_primary=[],method='Whole-file unaligned VA/RVA literals; all-offset E8/E9 executable-section scan; PE export/relocation tables; entry-aligned saved-body objdump; no runtime or new Ghidra session.',scan=results,objdump=obj,objdump_version=subprocess.check_output([obj,'--version'],text=True).splitlines()[0],source_c=[],ranges=[],references=[],saved_c_search=[])
 # Saved C references across ALL server captures, not only the 8000-file pass.
 paths=sorted((ROOT/'decompiled/server').rglob('*.c'));manifest=[]
 for p in paths:
  data=p.read_bytes();text=data.decode('utf8');entry=re.search(r'// address: (0x[0-9a-f]+)',text)
  manifest.append(dict(**ref(p),entry=entry[1] if entry else None))
  body=text.split('// pseudocode: provider-specific; not original source')[-1]
  matches=[x for x in ['DAT_10222e10','FUN_1004a6e0','FUN_100c5300'] if x in body]
  if matches:e['saved_c_search'].append(dict(**ref(p),entry=entry[1] if entry else None,terms=matches,definition_alone_possible=True))
 jwrite(OUT/'searched-c.json',manifest);e['searched_c_manifest']=ref(OUT/'searched-c.json')
 all_ins=[]
 for a in OWNERS+SUPPORT:
  p=ROOT/f'decompiled/server/partial-pass/functions/0x{a}.c';s=p.read_text(encoding='utf8');e['source_c'].append(dict(**ref(p),entry='0x'+a))
  for k,(lo,hi) in enumerate(re.findall(r'// range: (0x[0-9a-f]+)-(0x[0-9a-f]+) inclusive',s)):
   start=int(lo,16);end=int(hi,16)+1;cmd=[obj,'-d','-w','-M','intel',f'--start-address={start:#x}',f'--stop-address={end:#x}',str(BINARY)];t=subprocess.check_output(cmd,text=True)
   q=OUT/f'{a}-{k}.asm';q.write_text(t,encoding='utf8',newline='\n');ins=instructions(t);pos=start
   for r in ins:
    v=bytes.fromhex(r['bytes_hex']);assert r['address']==pos and raw(pos,len(v))==v;pos+=len(v);r['owner']='0x'+a
   assert pos==end;all_ins+=ins;e['ranges'].append(dict(**ref(q),entry='0x'+a,start=lo,end_exclusive=hex(end),command=cmd,binary_range_sha256=H(raw(start,end-start))))
 for r in all_ins:
  v=bytes.fromhex(r['bytes_hex']);a=r['address']
  literals=[hex(t) for t in TARGETS if struct.pack('<I',t) in v]
  dst=(a+5+struct.unpack_from('<i',v,1)[0])&0xffffffff if len(v)==5 and v[0] in (0xe8,0xe9) else None
  if literals or dst in TARGETS:e['references'].append(dict(owner=r['owner'],address=hex(a),bytes_hex=r['bytes_hex'],instruction=r['instruction'],literal_targets=literals,relative_target=hex(dst) if dst in TARGETS else None))
 # Ensure every positive global literal and every direct edge has aligned evidence.
 for target,r in results['targets'].items():
  for hit in r['va_literal']:
   for m in hit['mappings']:
    at=int(m['address'],16)
    assert any(int(x['address'],16)<=at<int(x['address'],16)+len(bytes.fromhex(x['bytes_hex'])) and target in x['literal_targets'] for x in e['references'])
  for hit in r['rel32_candidates']:assert any(x['address']==hit['address'] and x['relative_target']==target for x in e['references'])
 e['text_body_candidate_alignment']=[]
 for hit in results['text_body_rel32_candidates']:
  matches=[r for r in all_ins if r['address']==int(hit['address'],16) and r['bytes_hex']==hit['bytes_hex']]
  e['text_body_candidate_alignment'].append(dict(address=hit['address'],aligned=bool(matches),instruction=matches[0]['instruction'] if matches else None))
 e['support_documents']=[ref(ROOT/p) for p in ['analysis/server-state-capture/contract.md','analysis/server-state-restore/contract.md','analysis/server-state-lifecycle/contract.md','analysis/server-state-reader/contract.md','analysis/server-stats-lifecycle/contract.md','analysis/server-world-bootstrap/contract.md','analysis/corpus-coverage/server-discovered-evidence.json']]
 jwrite(OUT/'evidence.json',e);assert H(BINARY.read_bytes())==EXPECTED
 print('PASS static audit',len(paths),'saved C files,',len(e['ranges']),'native ranges,',len(e['references']),'aligned references; zero new REVIEW')
if __name__=='__main__':run()
