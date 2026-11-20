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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['baseline_report']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
for target,expected in e['exact_le32_data_refs']['targets'].items():
 found=[]
 for s in e['exact_le32_data_refs']['sections']:
  d=b[s['raw_offset']:s['raw_offset']+s['raw_size']];assert h(d)==s['sha256'];at=0
  while True:
   at=d.find(struct.pack('<I',v(target)),at)
   if at<0:break
   found.append(hex(base+v(s['rva'])+at));at+=1
 assert found==expected


header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'
assert e['primary']=='10012640 10012880 10013e80 10013f80 100140a0 10015010 100153b0 10015620 10015700 10015f60 10016740 100167a0'.split()
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2072
for key,refs in e['saved_c_lexical_references'].items():
 for r in refs:
  t=(R/r['path']).read_text(encoding='utf8');assert h((R/r['path']).read_bytes())==r['sha256'];assert len(re.findall(r'FUN_'+key[2:]+r'\(',t))==r['occurrences']

assert len(e['pending_checks'])==12 and all('[REVIEW server:' not in r['block']for r in e['pending_checks'])
assert raw(0x101a4010,5)==b'axes\0'
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=b'.?AV'+t['name'].encode()+b'@@\0';assert raw(typ+8,len(name))==name
for vt,mapping in [(0x101a4c84,{0x48:0x100140a0,0x64:0x10015620}),(0x101a5948,{0x2c:0x100153b0,0x30:0x10014260,0x34:0x10013e80,0x48:0x10014250,0x64:0x10015620}),(0x101a5d00,{0x2c:0x10015010,0x40:0x10013f80,0x64:0x10015700,0xe8:0x10015f60})]:
 for off,target in mapping.items():assert struct.unpack('<I',raw(vt+off,4))[0]==target
for entry,target in [(0x10016740,0x10012640),(0x100167a0,0x10012880)]:assert raw(entry,1)==b'\xe9'and entry+5+struct.unpack('<i',raw(entry+1,4))[0]==target
assert [(x['name'],x['entry'])for x in e['exports']]==[('button_target','0x10016740'),('func_rot_button','0x100167a0')]
for a,q in {0x10012688:'c700005d1a10',0x100128c8:'c70048591a10',0x10012694:'33c0897004',0x100128d4:'33c0897004',0x10013ed7:'c20400',0x100156fc:'c21000',0x10015745:'c21000',0x10015fd5:'c21000',0x10015f69:'f30f2c8034010000',0x10015732:'6a03',0x100155a1:'0f44c1'}.items():
 q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x10013ec5,0x1011a6c0),(0x10013edd,0x100135e0),(0x100153e0,0x10101e00),(0x10015627,0x10012d00),(0x10015663,0x10017740),(0x100156da,0x10102930),(0x100156e1,0x10012d50),(0x100156f1,0x10012a80),(0x10015f75,0x100183a0),(0x10015fbf,0x10102a80),(0x10015fce,0x10102a80)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
for a,f in [(0x101a1380,2.0),(0x101a1390,1.0),(0x101a13d0,-1.0)]:assert struct.unpack('<f',raw(a,4))[0]==f
assert struct.unpack('<I',raw(0x101a1f80,4))[0]==0x7fffffff

assert not any('bad)' in (R/r['path']).read_text()for r in e['ranges'])
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=' '.join((O/'contract.md').read_text(encoding='utf8').split())
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==12
for n in notes:
 assert all(' '.join(x.split()) in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(t['fields'])for t in e['save_tables']),'descriptors',len(notes),'cards')
