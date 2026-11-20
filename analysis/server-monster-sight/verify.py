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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['const_header'],e['usermessage_registry'],e['baseline_report']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
assert e['primary']=='100bfc50 10118390 1010a470 100880a0'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1971
for table,checks in [(0x101ce36c,[(0x124,0x100bfc50),(0x138,0x100bf7f0),(0x154,0x100880a0),(0x114,0x100882c0),(0xd0,0x1000db80)]),(0x101a4da8,[(0x78,0x10013ef0),(0xd0,0x100135b0),(0x154,0x100880a0)])]:
 for off,target in checks:assert struct.unpack('<I',raw(table+off,4))[0]==target
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(typ+8,len(name))==name
fields=next(t['fields']for t in e['save_tables']if t['name']=='ENTVARS')
for off,name in [(0x168,'frags'),(0x1a4,'spawnflags'),(0x1a8,'flags'),(0x1d0,'targetname'),(0x1f8,'noise3'),(0x260,'fuser3'),(0x264,'fuser4')]:assert any(v(f['offset'])==off and f['name']==name for f in fields)
expected=[0x100c009a,0x100c0064,0x100c006f,0x100c0059,0x100c004e,0x100c0040]
assert list(struct.unpack('<6I',raw(0x100c00d4,24)))==expected
assert [v(x['target'])for x in e['jump_tables'][0]['cases']]==expected and [x['relationship']for x in e['jump_tables'][0]['cases']]==list(range(-2,4))
anchors={0x100bfc78:'81a780010000e1ff9fff',0x100bfd06:'506a01',0x100bfd35:'e8067af5ff',0x100bfd4b:'e820190000',0x100bfd9a:'c20400',0x100bfd9d:'8b4704',0x100bfdb7:'660f6e5d08',0x100bfe7e:'0f861c020000',0x100bffce:'578bc8',0x100bffe4:'83a0a4010000fe',0x100c000e:'894610897710',0x100c002b:'ff9038010000',0x100c00d1:'c20400',0x101183d0:'83b8b0feffff00',0x10118437:'89148f41',0x1011843b:'3b4d0c7d18',0x10118447:'052c030000',0x1010a4a1:'0f2ec19ff6c4447a01',0x1010a4be:'c3',0x1008811e:'7a05',0x1008812d:'f30f5ec1',0x10088154:'33c0',0x1008816a:'0f97c0',0x10088170:'c20400'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
assert struct.unpack('<f',raw(0x101a1390,4))[0]==1 and struct.unpack('<f',raw(0x101a1ea0,4))[0]==3
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==4
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
