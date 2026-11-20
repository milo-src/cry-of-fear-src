"""Verify static capture provenance; neither imports nor executes the target DLL."""
from pathlib import Path
import hashlib,json,re,struct,sys
ROOT=Path(__file__).resolve().parents[2]
p=Path(__file__).with_name('evidence.json')
e=json.loads(p.read_text(encoding='utf-8'));b=Path(e['binary']).read_bytes()
sha=lambda x:hashlib.sha256(x).hexdigest();va=lambda x:int(x,16)
assert sha(b)==e['sha256'] and e['target_executed'] is False
# Independent minimal PE section mapper, not capture.py's metadata helper.
pe=struct.unpack_from('<I',b,0x3c)[0];count=struct.unpack_from('<H',b,pe+6)[0]
opt=pe+24;optsize=struct.unpack_from('<H',b,pe+20)[0];base=struct.unpack_from('<I',b,opt+28)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,opt+optsize+i*40) for i in range(count)]
def raw(a,n):
 for s in sections:
  delta=a-base-s[2]
  if 0<=delta and delta+n<=s[3]:return b[s[4]+delta:s[4]+delta+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['supporting_sources']:
 assert sha((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
rows=0
for r in e['ranges']:
 start,end=va(r['start']),va(r['end_exclusive']);at=start
 assert sha(raw(start,end-start))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text(encoding='utf-8').splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   addr=va(m[1]);v=bytes.fromhex(m[2]);assert addr==at and raw(addr,len(v))==v
   at+=len(v);rows+=1
 assert at==end
raw_count=0
def check(o):
 global raw_count
 if isinstance(o,dict):
  if 'bytes_hex' in o:
   v=bytes.fromhex(o['bytes_hex']);a=va(o['address'])
   assert raw(a,len(v))==v and sha(v)==o['sha256'] and a+len(v)==va(o['end_exclusive'])
   assert b[va(o['file_offset']):va(o['file_offset'])+len(v)]==v
   if 'ascii'in o:assert v==o['ascii'].encode('ascii')+b'\0'
   raw_count+=1
  for child in o.values():check(child)
 elif isinstance(o,list):
  for child in o:check(child)
check(e)
for v in e['vtables']:
 for s in v['slots']:assert struct.unpack('<I',raw(va(v['address'])+va(s['offset']),4))[0]==va(s['target'])
notes=json.loads(p.with_name('notes.json').read_text(encoding='utf-8'))['functions']
assert {r['address']for r in e['source_c']if r['role']=='primary'}=={n['address']for n in notes}
for n in notes:
 for f in n['evidence_paths']:assert (ROOT/f).is_file(),f
 assert n['module']=='server' and n['subsystem']=='weapons'
# Reproduce the bounded exact-pointer search; it is not a full caller analysis.
for r in e['exact_pointer_scan']['results']:
 needle=struct.pack('<I',va(r['address'])); offsets=[];pos=0
 while (pos:=b.find(needle,pos))>=0:
  offsets.append(hex(pos));pos+=1
 assert offsets==r['file_offsets']
# Descriptor bytes and string references are independent of the captured decoded labels.
for t in e['save_tables']:
 assert t['stride']==16 and len(t['fields'])==t['count']
 for i,f in enumerate(t['fields']):
  a=va(t['address'])+i*16
  kind,name,off,count,flags=struct.unpack('<IIIhh',raw(a,16))
  assert (kind,off,count,flags)==(f['type_id'],va(f['offset']),f['count'],f['flags'])
  assert raw(name,len(f['name'])+1)==f['name'].encode('ascii')+b'\0'
for factory,vtable in [(0x10018440,0x101a7804),(0x10020010,0x101a990c)]:
 assert b'\xc7\x00'+struct.pack('<I',vtable) in raw(factory,0x5c)
 assert struct.unpack('<2I',raw(vtable+0x38,8))==(0x1011ede0,0x1011e7a0)
assert raw(0x100205f0,5)==bytes.fromhex('e91bfaffff')
assert raw(0x100d1922,14)==b'\xcc'*14
assert raw(0x100d1930,16)==bytes.fromhex('51c704243333333fe8d3eaffffddd8c3')
assert struct.unpack('<d',raw(0x101e5a38,8))[0]==1/65536
assert struct.unpack('<2d',raw(0x101e5a60,16))==(0,4294967296)
# Independently reproduce the complete direct E8/E9 scan from fresh static objdump.
# Never require ignored listing caches and never execute the target DLL.
import subprocess,shutil
cmd=[shutil.which('objdump'),'-d','-M','intel',e['binary']]
assert cmd[0]
listing=subprocess.check_output(cmd,text=True)
targets=set(e['direct_edges']['targets']);found=[]
for line in listing.splitlines():
 m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}\s+)+)\s*(call|jmp)\s+0x([0-9a-f]{8})\b',line)
 if not m or '0x'+m[4] not in targets:continue
 at=va(m[1]);code=bytes.fromhex(m[2]);assert len(code)==5 and code[0]in[0xe8,0xe9]
 assert raw(at,5)==code and at+5+struct.unpack('<i',code[1:])[0]==va(m[4])
 found.append((at,m[3],va(m[4]),code.hex()))
expected=[(va(r['address']),r['kind'],va(r['target']),r['bytes_hex'])for r in e['direct_edges']['rows']]
assert found==expected
assert len([r for r in found if r[2]==0x100d0410])==1
assert len([r for r in found if r[2]==0x1011e7a0])==21
assert len([r for r in found if r[2]==0x1011ede0])==21
contract=p.with_name('contract.md').read_text(encoding='utf-8')
for n in notes:assert n['summary_ru'] in contract and all(d in contract for d in n['details_ru'])
assert len(notes)==9
assert sha(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(notes),'cards,',len(e['source_c']),'C,',len(e['ranges']),'ASM,',rows,'byte rows,',raw_count,'raw,',sum(t['count']for t in e['save_tables']),'descriptors,',len(found),'direct edges; fresh scan without cache')
