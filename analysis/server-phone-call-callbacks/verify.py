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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['const_header'],e['usermessage_registry']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
scan=e['rtti_name_scan'];found=[]
for sec in scan['sections']:
 data=b[sec['raw_offset']:sec['raw_offset']+sec['raw_size']];assert h(data)==sec['sha256'];pos=0
 while True:
  pos=data.find(scan['needle'].encode()+b'\0',pos)
  if pos<0:break
  found.append(hex(base+v(sec['rva'])+pos));pos+=1
assert found==scan['hits']
# Independently check exact exported names and native Phone descriptors.
assert {(x['ordinal'],x['entry'])for x in e['exports']}=={(52,'0x1005fc20'),(102,'0x1005ff90'),(361,'0x10061000')}
f=next(t['fields']for t in e['save_tables']if t['name']=='PHONE')
assert [(v(x['offset']),x['type_id'],x['count'])for x in f]==[(0xe8,10,33),(0x16c,0,33),(0x1f0,17,1),(0x1f4,10,1),(0x1f8,4,1),(0x200,12,1),(0xe0,4,1)]
assert all(x['flags']==0 for x in f)
for a,n in [(0x101b5a20,'CPhoneCall'),(0x101b26c8,'CMobile'),(0x101b5900,'CSubtitle'),(0x101a4da8,'CBasePlayer')]:
 col=struct.unpack('<I',raw(a-4,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20))
 name=b'.?AV'+n.encode()+b'@@\0';assert raw(typ+8,len(name))==name
assert raw(0x101b5fb0,2)==b' \0'
assert struct.unpack('<d',raw(0x101b5ff0,8))[0]==1.1 and struct.unpack('<d',raw(0x101a1df8,8))[0]==0.1
assert struct.unpack('<d',raw(0x101a1e18,8))[0]==0.25
anchors={0x1005fc39:'ff92d0000000',0x1005fcdb:'50',0x1005fcdc:'6a02',0x1005fcde:'68b05f1b10',0x1005fcf4:'83c410',0x1005fd6a:'c6860002000001',0x1005fd8d:'c7467820fc0510',0x1005fe44:'6a00',0x1005fe46:'6a01',0x1005fe65:'7416',0x1005fe67:'6a0d',0x1005fe7d:'6a0c',0x1005ff19:'83fb20',0x1005ff1c:'7d6a',0x1005ff34:'7622',0x1005ff36:'ff86f4010000',0x1005ff70:'7616',0x1005ff77:'c7467890ff0510',0x1005ff8e:'c3',0x1005ffd8:'c786a01e000000000000',0x1005ffe2:'85c0',0x10060079:'85ff',0x100600b2:'6a10',0x100600b6:'6a0f',0x10060116:'83a600250000f7',0x10060131:'c7437800000000',0x1006013b:'c3',0x1011f632:'c20c00'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==2
for n in notes:
 assert n['subsystem']=='subtitles' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
