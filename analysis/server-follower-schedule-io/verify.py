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
for f in e['classname_table']['entries']:
 assert struct.unpack('<I',raw(0x10219cc8+4*f['index'],4))[0]==v(f['pointer']);assert raw(v(f['pointer']),len(f['text_latin1'])+1)==f['text_latin1'].encode()+b'\0'
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
scan=e['rtti_name_scan'];found=[]
for sec in scan['sections']:
 data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];assert h(data)==sec['sha256'];pos=0
 while True:
  pos=data.find(scan['needle'].encode()+b'\0',pos)
  if pos<0:break
  found.append(hex(base+v(sec['rva'])+pos));pos+=1
assert found==scan['hits']
# Native table ownership and exact 11-pointer order, independently decoded.
sl=e['schedule_list'];assert sl['count']==11 and sl['address']=='0x10219ce0'
expected=[0x10219d44,0x10219d88,0x10219e38,0x10219dbc,0x10219e54,0x10219e98,0x10219f00,0x10219ebc,0x10219f64,0x10219f78,0x10219fac]
assert list(struct.unpack('<11I',raw(0x10219ce0,44)))==expected
assert len(sl['entries'])==11 and sum(x['count']for x in sl['entries'])==59
for i,t in enumerate(sl['entries']):
 assert t['index']==i and v(t['address'])==expected[i]
 task,n,im,sm,name=struct.unpack('<5I',raw(expected[i],20))
 assert (task,n,im,sm,name)==(v(t['task_pointer']),t['count'],v(t['interrupt_mask']),v(t['sound_mask']),v(t['name_pointer']))
 assert raw(name,len(t['name'])+1)==t['name'].encode()+b'\0'
 for j,q in enumerate(t['tasks']):
  x=raw(task+8*j,8);ident,arg=struct.unpack('<If',x)
  assert ident==v(q['task']) and x[4:].hex()==q['argument_bits'] and arg==q['argument_float']
fields=next(x['fields']for x in e['save_tables']if x['name']=='TALK')
assert [(v(x['offset']),x['type_id'])for x in fields]==[(0x368,10),(0x36c,10),(0x3c0,15),(0x3c4,1),(0x3c8,1),(0x3cc,1),(0x3d0,1),(0x3d8,15),(0x3dc,15),(0x3e0,4),(0x3d4,10)]
assert all(x['count']==1 and x['flags']==0 for x in fields)
checks={0x101053e0:'7505',0x101053e4:'c20400',0x101053ea:'6a0b',0x101053fe:'c20400',0x10105800:'85c0',0x10105812:'6a0b',0x1010582d:'7410',0x1010583c:'c20400',0x1010584c:'c20400',0x10105854:'6a0b',0x10105867:'750a',0x10105875:'c20400',0x10105880:'558bec5de9c7c6fbff',0x10105896:'83be4c03000000',0x1010589d:'750a',0x1010589f:'68449d2110',0x101058ac:'8d8ee0030000',0x101058b9:'c20400'}
for a,x in checks.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==5
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['save_tables']),'save tables',len(sl['entries']),'schedules',len(notes),'cards')
