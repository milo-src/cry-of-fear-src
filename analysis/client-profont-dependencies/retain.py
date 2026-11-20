"""Retain completed static sessions and reproduce bounded PE/ASM evidence. No REA."""
from pathlib import Path
import hashlib,json,re,shutil,subprocess,sys
ROOT=Path(__file__).resolve().parents[2]
OUT=Path(__file__).resolve().parent
DEST=ROOT/'decompiled/client/captures/profont-dependencies-pass04'
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
SHA='e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360'
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll')
def h(b):return hashlib.sha256(b).hexdigest()
def load(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def save(p,v):p.write_text(json.dumps(v,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
def ref(p):return dict(path=p.relative_to(ROOT).as_posix(),sha256=h(p.read_bytes()))
def main():
 b=B.read_bytes();assert h(b)==SHA;pe=pe_metadata(b)
 def raw(a,n):
  for s in pe['sections']:
   d=a-int(pe['image_base'],16)-int(s['rva'],16)
   if 0<=d and d+n<=s['raw_size']:
    o=s['raw_offset']+d;return b[o:o+n],o
  raise ValueError(hex(a))
 DEST.mkdir(parents=True,exist_ok=True)
 infos={}; pseudos=[];sessions=[]
 for k in range(1,4):
  src=ROOT/f'analysis/local/profont-dependencies-pass04-{k:02d}'
  v=load(src/'verification.json');assert v['input_unchanged'] and not v['target_executed'] and v['rea_exit_code']==0
  for n in ['close.json','reset.json']:assert not load(src/n).get('isError')
  records={}
  for p in sorted(src.glob('[0-9][0-9][0-9]-*.json')):
   r=load(p);records[p.name]=dict(source=ref(p),result=r)
   if r.get('isError'):continue
   e=r['structuredContent'];assert e['subject']['digest']['sha256']==SHA
   if 'procedure_info' in p.name:infos[e['parameters']['procedure']]=(e,ref(p))
   if 'procedure_pseudo_code' in p.name:pseudos.append((k,src,p,e))
  save(OUT/f'provider-{k:02d}.json',dict(records=records))
  names=['request.json','initialize.json','open.json','close.json','reset.json','verification.json','export.json','tool-schemas.json']
  save(OUT/f'session-{k:02d}.json',dict(target_executed=False,records={n:dict(source=ref(src/n),result=load(src/n))for n in names},retained_bundle=ref(src/'evidence.json'),final_bundle=ref(src/'final-evidence.json')))
  sessions.append(dict(session=k,queries_succeeded=v['queries_succeeded']))
 functions=[];bounds={}
 for key,(e,_) in infos.items():
  info=e['normalized_result'];bounds[info['entrypoint']]=info['body']
 for k,src,p,e in pseudos:
  key=e['parameters']['procedure'];ie,ir=infos[key];info=ie['normalized_result'];old=src/(p.name[:3]+'-pseudocode.c');new=DEST/f's{k:02d}-{old.name}'
  new.write_bytes(old.read_bytes())
  functions.append(dict(file=new.name,sha256=h(new.read_bytes()),procedure=key,actual_entry=info['entrypoint'],body=info['body'],evidence_id=e['evidence_id'],procedure_info_evidence_id=ie['evidence_id'],provider=e['provider'],analysis_profile_digest=e['analysis_profile']['digest'],portable_evidence=f'analysis/client-profont-dependencies/provider-{k:02d}.json',procedure_info_source=ir,procedure_info_portable_evidence='analysis/client-profont-dependencies/provider-'+ir['path'].split('pass04-')[1][:2]+'.json'))
 save(DEST/'capture.json',dict(binary='client.dll',binary_sha256=SHA,target_executed=False,functions=functions))
 support=['decompiled/client/captures/hud-geometry/000-pseudocode.c','decompiled/client/captures/hud-geometry/002-pseudocode.c','decompiled/client/captures/vgui-menu-actions/027-pseudocode.c','decompiled/client/captures/vgui-menu-actions/031-pseudocode.c','decompiled/client/captures/profont-pass03/000-pseudocode.c']
 evidence=dict(binary=B.as_posix(),sha256=SHA,target_executed=False,sessions=sessions,source_c=[ref(DEST/f['file'])for f in functions]+[ref(ROOT/p)for p in support],ranges=[],raw=[])
 # Existing paint and ABI cookie helpers are support, not new C/review entries.
 bounds['0x1003bc10']={'ranges':[dict(start='0x1003bc10',end='0x1003beff')]}
 bounds['0x100b42c0']={'ranges':[dict(start='0x100b42c0',end='0x100b42d0')]}
 for entry,body in sorted(bounds.items()):
  for idx,r in enumerate(body['ranges']):
   a=int(r['start'],16);end=int(r['end'],16)+1
   cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)]
   t=subprocess.check_output(cmd,text=True);p=OUT/f'{entry[2:]}-{idx}.asm';p.write_text(t,encoding='utf-8',newline='\n');pos=a
   for line in t.splitlines():
    m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
    if m:
     at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos;assert raw(at,len(x))[0]==x;pos+=len(x)
   assert pos==end,(entry,hex(pos),hex(end))
   evidence['ranges'].append(dict(**ref(p),entry=entry,start=hex(a),end_exclusive=hex(end),binary_range_sha256=h(raw(a,end-a)[0])))
 for a,n,label in [(0x101452c8,0x200,'CHUDControl COL pointer and vtable through last slot'),(0x1014ed70,5,'binding substring'),(0x10193b70,8,'initial printf options')]:
  data,o=raw(a,n);evidence['raw'].append(dict(address=hex(a),bytes_hex=data.hex(),file_offset=hex(o),sha256=h(data),label=label))
 save(OUT/'evidence.json',evidence);assert h(B.read_bytes())==SHA
 print('PASS',len(functions),'new C;',len(evidence['ranges']),'ASM ranges')
if __name__=='__main__':main()
