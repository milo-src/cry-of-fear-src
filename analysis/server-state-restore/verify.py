"""Independently verify original PE bytes, saved C, native descriptors and local contracts."""
from pathlib import Path
import hashlib,json,re,struct
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent;O=OUT
e=json.loads((OUT/'evidence.json').read_text(encoding='utf-8'))
b=Path(e['binary']).read_bytes();sha=lambda x:hashlib.sha256(x).hexdigest();va=lambda x:int(x,16)
assert sha(b)==e['sha256'] and not e['target_executed']
p=struct.unpack_from('<I',b,60)[0];n=struct.unpack_from('<H',b,p+6)[0];op=p+24
base=struct.unpack_from('<I',b,op+28)[0];ss=op+struct.unpack_from('<H',b,p+20)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,ss+40*i)for i in range(n)]
def raw(a,n):
 for s in sections:
  d=a-base-s[2]
  if 0<=d and d+n<=s[3]:return b[s[4]+d:s[4]+d+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['supporting_sources']:
 assert sha((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 a,end=va(r['start']),va(r['end_exclusive']);pos=a
 assert sha(raw(a,end-a))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text(encoding='utf-8').splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=va(m[1]);v=bytes.fromhex(m[2]);assert at==pos and raw(at,len(v))==v;pos+=len(v);rows+=1
 assert pos==end
rawcount=0
def check(x):
 global rawcount
 if isinstance(x,dict):
  if 'bytes_hex'in x:
   v=bytes.fromhex(x['bytes_hex']);a=va(x['address']);o=va(x['file_offset'])
   assert raw(a,len(v))==v and b[o:o+len(v)]==v and sha(v)==x['sha256'] and a+len(v)==va(x['end_exclusive'])
   if 'ascii'in x:assert x['ascii'].encode('ascii')+b'\0'==v
   rawcount+=1
  for c in x.values():check(c)
 elif isinstance(x,list):
  for c in x:check(c)
check(e)
for t in e['save_tables']:
 for i,f in enumerate(t['fields']):
  kind,name,off,count,flags=struct.unpack('<IIIhh',raw(va(t['address'])+16*i,16))
  assert (kind,off,count,flags)==(f['type_id'],va(f['offset']),f['count'],f['flags'])
  assert raw(name,len(f['name'])+1)==f['name'].encode('ascii')+b'\0'

# Independent branch/ABI checks pinned to native bytes, not Ghidra's return type.
for a in [0x100291b2,0x100292cf,0x10029440,0x10029ff3]:assert raw(a,3)==bytes.fromhex('c20400')
assert raw(0x100291ac,2)==bytes.fromhex('32c0')
for a in [0x100292c7,0x10029438,0x10029feb]:assert raw(a,2)==bytes.fromhex('b001')
assert raw(0x100290d4,3)==bytes.fromhex('394208') and raw(0x10029100,2)==bytes.fromhex('3bc8')
assert raw(0x10029104,7)==bytes.fromhex('80ba347affff01')
assert raw(0x10029115,7)==bytes.fromhex('80ba347affff00')
assert raw(0x100293d1,2)==bytes.fromhex('33f6')
assert raw(0x1002941d,6)==bytes.fromhex('69c61c040000')
assert raw(0x10029d83,6)==bytes.fromhex('0f8490010000')
assert 0x10029d89+struct.unpack('<i',raw(0x10029d85,4))[0]==0x10029f19
assert raw(0x10029ef7,4)==bytes.fromhex('8b443e10')
assert raw(0x100296f8,2)==bytes.fromhex('7475') and raw(0x1002976d,2)==bytes.fromhex('7591')
assert 0x1002976f+struct.unpack('<b',raw(0x1002976e,1))[0]==0x10029700
assert raw(0x1002914e,6)==bytes.fromhex('9ff6c4447a56')
assert raw(0x101a1370,4)==bytes(4)
assert raw(0x10029073,5)==bytes.fromhex('68380f0100')
assert raw(0x1002907a,3)==bytes.fromhex('8d4604')
assert raw(0x10029086,4)==bytes.fromhex('8bc65ec3')
assert raw(0x100c93df,1)==b'\x56' and raw(0x100c93e5,2)==bytes.fromhex('84c0')
assert 4+2*33*0x41c==0x10f3c and 33*0x41c==0x879c
assert 0x230+6*12==0x278 and 0x3f9+32<=0x41c
# SSE conversion is signed packed DWORD, storing only low lane.
assert raw(0x10029462,3)==bytes.fromhex('0f5bc0') and raw(0x10029473,3)==bytes.fromhex('0f5bc0')
txt=(O/'10029090-0.asm').read_text(encoding='utf8')
assert len(re.findall(r'call\s+0x100e0a80',txt))==6
assert len(re.findall(r'push\s+DWORD PTR ds:0x102266dc',txt))==6
assert len(re.findall(r'mov\s+DWORD PTR \[ebx\+0x1e4\],eax',txt))==6
assert len(re.findall(r'mov\s+DWORD PTR \[edx\+ecx\*4\+0x2540\],eax',txt))==6
assert len(re.findall(r'push\s+DWORD PTR ds:0x10226690',txt))==3
# All three complete stats copies: verify exact native widths/offsets and source maps.
for lo,hi,sbase,destreg in [(0x100291c3,0x100292ad,0x8978,'ecx'),(0x100292dc,0x100293c6,0x1dc,'ebx'),(0x100294af,0x10029599,0x1dc,'ebx')]:
 part='\n'.join(l for l in txt.splitlines()if re.match(r'^[0-9a-f]{8}:',l)and lo<=int(l[:8],16)<hi)
 for j in range(15):
  assert re.search(r'mov\s+DWORD PTR \['+destreg+rf'\+0x{0x63c+4*j:x}\],eax',part)
  assert f'+0x{sbase+4*j:x}]'in part
 for off,typ,reg in [(0x678,'BYTE','al'),(0x67c,'DWORD','eax'),(0x680,'BYTE','al')]:
  assert re.search(r'mov\s+'+typ+r' PTR \['+destreg+rf'\+0x{off:x}\],{reg}',part)
fields={f['name']:f for f in e['save_tables'][0]['fields']}
assert fields['netname']['offset']=='0x1d4' and fields['health']['offset']=='0x164'
names=re.findall(r'\(\*(pfn\w+)\s*\)',(ROOT/'external/hlsdk-portable/engine/eiface.h').read_text(encoding='utf8'))
for r in e['api_slots']:assert names[r['slot']]==r['name'] and va(r['address'])==0x10222f48+4*r['slot']
assert raw(0x100b4ab0,7)==bytes.fromhex('bf482f2210f3a5')
registration=(O/'100e5fc0-0.asm').read_text(encoding='utf8').splitlines()
for at,g,size,name in [(0x100e6294,0x102264e8,3,'AmmoX'),(0x100e6a6d,0x102266dc,2,'Syringe'),(0x100e6911,0x10226690,2,'QSlotUpdate')]:
 assert raw(at,5)==b'\xa3'+struct.pack('<I',g)
 k=next(i for i,l in enumerate(registration)if l.startswith(f'{at:08x}:'))
 prev='\n'.join(registration[max(0,k-12):k]);pushes=list(re.finditer(r'push\s+(0x[0-9a-f]+)',prev));found=False
 for i in range(len(pushes)-1):
  if int(pushes[i][1],16)==size:
   try:found|=raw(int(pushes[i+1][1],16),len(name)+1)==name.encode()+b'\0'
   except AssertionError:pass
 assert found and 'ds:0x10223074'in prev
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];contract=(O/'contract.md').read_text(encoding='utf8')
assert len(notes)==1 and notes[0]['address']=='0x10029090'
for n in notes:
 assert n['module']=='server' and n['subsystem']=='inventory' and n['confidence']=='high'
 assert n['summary_ru']in contract and all(d in contract for d in n['details_ru'])
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS 1 primary;',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',rawcount,'raw; stats/ABI/branch/network/102descriptors')
