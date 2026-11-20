from pathlib import Path
import json,hashlib,struct,re
R=Path(__file__).resolve().parents[2];O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));b=Path(e['binary']).read_bytes();h=lambda v:hashlib.sha256(v).hexdigest();v=lambda x:int(x,16)
assert h(b)==e['sha256'] and not e['target_executed']
nt=struct.unpack_from('<I',b,60)[0];opt=nt+24;base=struct.unpack_from('<I',b,opt+28)[0];sh=opt+struct.unpack_from('<H',b,nt+20)[0]
sections=[struct.unpack_from('<8sIIIIIIHHI',b,sh+40*i)for i in range(struct.unpack_from('<H',b,nt+6)[0])]
def raw(a,n):
 for s in sections:
  d=a-base-s[2]
  if 0<=d and d+n<=s[3]:return b[s[4]+d:s[4]+d+n]
 raise AssertionError((hex(a),n))
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header']]:assert h((R/r['path']).read_bytes())==r['sha256']
rows=0
for r in e['ranges']:
 a,end=v(r['start']),v(r['end_exclusive']);pos=a
 assert h(raw(a,end-a))==r['binary_range_sha256']
 for line in (R/r['path']).read_text().splitlines():
  m=re.match(r'^([0-9a-f]{8}):\s*((?:[0-9a-f]{2}(?:\s+|$))+)',line)
  if m:
   at=v(m[1]);q=bytes.fromhex(m[2]);assert pos==at and raw(at,len(q))==q;pos+=len(q);rows+=1
 assert pos==end
for r in e['raw']:
 q=bytes.fromhex(r['bytes_hex']);assert raw(v(r['address']),len(q))==q and h(q)==r['sha256'];assert b[v(r['file_offset']):v(r['file_offset'])+len(q)]==q
for t in e['save_tables']:
 for i,f in enumerate(t['fields']):
  ty,nm,off,c,fl=struct.unpack('<IIIhh',raw(v(t['address'])+16*i,16));assert (ty,off,c,fl)==(f['type_id'],v(f['offset']),f['count'],f['flags']);assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0'
for t in e['vtables']:
 for f in t['slots']:assert struct.unpack('<I',raw(v(t['address'])+v(f['offset']),4))[0]==v(f['target'])
erv=struct.unpack_from('<I',b,opt+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for f in e['exports']:
 i=f['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];ix=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];entry=base+struct.unpack('<I',raw(base+ex[8]+4*ix,4))[0]
 assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0' and ex[5]+ix==f['ordinal'] and entry==v(f['entry'])
header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'

z=e['zero_fill_global'];a=v(z['address']);n=z['size'];matches=[s for s in sections if s[3]<=a-base-s[2] and a-base-s[2]+n<=s[1]];assert len(matches)==1
assert struct.unpack('<I',raw(0x101df634+0x34,4))[0]==0x10103130
assert all('REVIEW'not in text for text in e['pending_check']['blocks'].values())
assert e['pending_check']['entries']==['10103130']
f=e['baseline_progress_report'];assert h((R/f['path']).read_bytes())==f['sha256'];assert json.loads((R/f['path']).read_text(encoding='utf8'))['after_reviewed']==1876
keys=e['key_branches'];assert len(keys)==64
assert [r['key']for r in keys]==[f'subtitlenumber{i}'for i in range(1,33)]+[f'subtitletime{i}'for i in range(1,33)]
for i,r in enumerate(keys):
 n=i%32+1;kind='integer'if i<32 else'float32';off=(0xdc if i<32 else 0x15c)+4*n
 assert r['storage']==kind and v(r['object_offset'])==off
 assert raw(v(r['key_address']),len(r['key'])+1)==r['key'].encode()+b'\0'
 call=v(r['converter_call']);dest=0x1016b55e if i<32 else 0x1016f5ec
 assert raw(call-3,3)==bytes.fromhex('ff7608') and raw(call,1)==b'\xe8'
 assert call+5+struct.unpack('<i',raw(call+1,4))[0]==dest==v(r['converter'])
 assert raw(call+5,3)==bytes.fromhex('83c404')
 store=bytes.fromhex('8983'if i<32 else'd99b')+struct.pack('<I',off)
 assert v(r['store_address'])==call+8 and raw(call+8,6)==store
 assert raw(call+14,14)==bytes.fromhex('c7460c010000005f5e5b5dc20400')
assert raw(0x10103ddb,1)==b'\xe8' and 0x10103de0+struct.unpack('<i',raw(0x10103ddc,4))[0]==0x1000dba0
assert raw(0x10103de4,3)==bytes.fromhex('c20400') # final RET immediate byte; full instruction checked by ASM
assert raw(0x1016f5f1,2)==bytes.fromhex('6a00')
assert raw(0x1016da8f,3)==bytes.fromhex('dd45f4')
assert raw(0x1016dc8d,2)==bytes.fromhex('8a0b') and raw(0x1016dc96,3)==bytes.fromhex('8a0840')
asm=(O/'10103130-0.asm').read_text();assert len(re.findall(r'call\s+0x1016b55e',asm))==32 and len(re.findall(r'call\s+0x1016f5ec',asm))==32
assert len(re.findall(r'call\s+0x1000aba0',asm))==61 and len(re.findall(r'ret\s+0x4',asm))==65
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary']) and len(notes)==1
for n in notes:
 assert n['subsystem']=='subtitles' and all(x in c.replace('\n',' ')for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['save_tables']),'tables',len(e['exports']),'exports',len(notes),'cards')
