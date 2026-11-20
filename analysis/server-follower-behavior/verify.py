"""Read-only verification of pinned C/ASM/raw evidence; no target execution."""
from pathlib import Path
import hashlib,json,re,struct,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
from index_evidence import pe_metadata
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes()
h=lambda x:hashlib.sha256(x).hexdigest()
assert h(b)==e['sha256'];pe=pe_metadata(b);base=int(pe['image_base'],16)
def raw(a,n):
 for s in pe['sections']:
  d=a-base-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((ROOT/r['path']).read_bytes())==r['sha256'],r['path']
lines=0
for r in e['ranges']:
 start=int(r['start'],16);end=int(r['end_exclusive'],16);pos=start
 assert h(raw(start,end-start))==r['binary_range_sha256']
 for line in (ROOT/r['path']).read_text().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',line)
  if m:
   a=int(m[1],16);v=bytes.fromhex(m[2]);assert a==pos and raw(a,len(v))==v;pos+=len(v);lines+=1
 assert pos==end
for r in e['raw']:
 v=bytes.fromhex(r['bytes_hex']);assert raw(int(r['address'],16),len(v))==v and h(v)==r['sha256'];assert b[int(r['file_offset'],16):int(r['file_offset'],16)+len(v)]==v
for table in e['vtables']:
 for r in table['slots']:
  assert int(r['target'],16)==struct.unpack('<I',raw(int(table['address'],16)+int(r['offset'],16),4))[0]
for table in e['save_tables']:
 for i,r in enumerate(table['fields']):
  t,nm,off,c,fl=struct.unpack('<IIIhh',raw(int(table['address'],16)+i*16,16))
  assert (t,off,c,fl)==(r['type_id'],int(r['offset'],16),r['count'],r['flags'])
  assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0'
header=(ROOT/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for r in e['api_binding']['slots']:
 assert names[r['slot']]==r['name'] and int(r['address'],16)==int(e['api_binding']['base'],16)+4*r['slot']
for t in e['vtables']:
 col=struct.unpack('<I',raw(int(t['address'],16)-4,4))[0];sig,off,cd,td,ch=struct.unpack('<5I',raw(col,20))
 assert sig==0 and raw(td+8,len(t['rtti_name'])+1)==t['rtti_name'].encode()+b'\0'
for t in e['explicit_strings']:assert raw(int(t['address'],16),len(t['text_latin1'])+1)==t['text_latin1'].encode('latin1')+b'\0'
nt=struct.unpack_from('<I',b,0x3c)[0];erv=struct.unpack_from('<I',b,nt+24+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for r in e['exports']:
 i=r['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];idx=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];va=base+struct.unpack('<I',raw(base+ex[8]+4*idx,4))[0]
 assert raw(nm,len(r['name'])+1)==r['name'].encode()+b'\0' and ex[5]+idx==r['ordinal'] and hex(va)==r['entry']
for target,expected in e['exact_le32_data_refs']['targets'].items():
 found=[]
 for sec in e['exact_le32_data_refs']['sections']:
  data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];assert h(data)==sec['sha256'];off=0
  while True:
   off=data.find(struct.pack('<I',int(target,16)),off)
   if off<0:break
   found.append(hex(base+int(sec['rva'],16)+off));off+=1
 assert found==expected
for r in e['classname_table']['entries']:
 assert struct.unpack('<I',raw(0x10219cc8+4*r['index'],4))[0]==int(r['pointer'],16)
 assert raw(int(r['pointer'],16),len(r['text_latin1'])+1)==r['text_latin1'].encode()+b'\0'
scan=e['rtti_name_scan'];found=[]
for s in scan['sections']:
 data=b[s['raw_offset']:s['raw_offset']+s['raw_size']];assert h(data)==s['sha256'];pos=0
 while True:
  pos=data.find(scan['needle'].encode()+b'\0',pos)
  if pos<0:break
  found.append(hex(base+int(s['rva'],16)+pos));pos+=1
assert found==scan['hits']
t=e['notification_schedule'];p,c,im,sm,nm=struct.unpack('<5I',raw(int(t['address'],16),20))
assert (p,c,im,sm,nm)==(int(t['task_pointer'],16),t['count'],int(t['interrupt_mask'],16),int(t['sound_mask'],16),int(t['name_pointer'],16))
assert raw(nm,len(t['name'])+1)==t['name'].encode()+b'\0'
for i,r in enumerate(t['tasks']):
 x=raw(p+8*i,8);assert struct.unpack('<I',x[:4])[0]==int(r['task'],16) and x[4:].hex()==r['argument_bits']
for t in e['support_task_dispatch']:
 for i,r in enumerate(t['cases']):
  v=raw(int(t['selector_address'],16)+i,1)[0]
  assert v==r['selector'] and int(r['task'],16)==int(t['first_task'],16)+i
  assert struct.unpack('<I',raw(int(t['target_address'],16)+4*v,4))[0]==int(r['target'],16)
notes=json.loads((OUT/'notes.json').read_text(encoding='utf8'))['functions']
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary'])
for n in notes:
 for p in n['evidence_paths']:assert (ROOT/p).is_file(),p
print('PASS',len(e['source_c']),'C,',len(e['ranges']),'ASM,',lines,'byte rows,',len(e['raw']),'raw,',len(notes),'cards')
