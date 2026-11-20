from pathlib import Path
import json,sys,hashlib,re,subprocess,shutil
ROOT=Path(__file__).resolve().parents[2];OUT=ROOT/'analysis/client-profont';sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
B=Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll');b=B.read_bytes();SHA='e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360';assert hashlib.sha256(b).hexdigest()==SHA;pe=pe_metadata(b)
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:
   o=s['raw_offset']+d;x=b[o:o+n];return dict(address=hex(a),bytes_hex=x.hex(),file_offset=hex(o),sha256=hashlib.sha256(x).hexdigest())
 raise ValueError(hex(a))
def st(a):
 for n in range(1,512):
  x=raw(a,n)
  if x['bytes_hex'].endswith('00'):x['ascii']=bytes.fromhex(x['bytes_hex'])[:-1].decode('ascii');return x
 raise ValueError(hex(a))
sources=['decompiled/client/captures/profont-pass02/001-pseudocode.c','decompiled/client/captures/profont-pass03/000-pseudocode.c','decompiled/client/captures/graphics-client-first/005-pseudocode.c','decompiled/client/captures/graphics-studio-flow-abi/001-pseudocode.c','decompiled/client/captures/graphics-studio-flow-abi/002-pseudocode.c','decompiled/client/captures/graphics-music-wire/000-pseudocode.c','decompiled/client/captures/graphics-gl-cleanup-boundary/000-pseudocode.c']
j=dict(module='client',binary=B.as_posix(),sha256=SHA,target_executed=False,source_c=[dict(path=p,sha256=hashlib.sha256((ROOT/p).read_bytes()).hexdigest())for p in sources],ranges=[],literals=[])
for a,end in [(0x1006e930,0x1006e94b),(0x100712a0,0x10071438),(0x100b42c0,0x100b42d1)]:
 cmd=[shutil.which('objdump'),'-d','-M','intel',f'--start-address={a:#x}',f'--stop-address={end:#x}',str(B)];t=subprocess.check_output(cmd,text=True);p=OUT/f'{a:08x}.asm';p.write_text(t,encoding='utf-8',newline='\n');pos=a
 for line in t.splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=int(m[1],16);x=bytes.fromhex(m[2]);assert at==pos;assert raw(at,len(x))['bytes_hex']==x.hex();pos+=len(x)
 assert pos==end
 j['ranges'].append(dict(path=p.relative_to(ROOT).as_posix(),start=hex(a),end_exclusive=hex(end),sha256=hashlib.sha256(p.read_bytes()).hexdigest(),binary_range_sha256=raw(a,end-a)['sha256']))
for a in [0x1014ef4c,0x1014ef58,0x1014ef60,0x1014ef9c]:j['literals'].append(st(a))
(OUT/'evidence.json').write_text(json.dumps(j,ensure_ascii=False,indent=2)+'\n',encoding='utf-8');assert hashlib.sha256(B.read_bytes()).hexdigest()==SHA
print('PASS client',len(j['ranges']),len(j['source_c']))
