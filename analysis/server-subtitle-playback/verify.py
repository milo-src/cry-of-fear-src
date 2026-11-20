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
assert e['exports']==[]
assert e['primary']==['10077530'] and 'REVIEW' not in e['pending_check']['block']
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1890
f=next(t['fields']for t in e['save_tables']if t['name']=='SUBTITLE');assert len(f)==1
assert (f[0]['name'],f[0]['type_id'],v(f[0]['offset']),f[0]['count'],f[0]['flags'])==('CurrentLine',0,0xdc,1,0)
assert struct.unpack('<I',raw(0x101b5900+0xe8,4))[0]==0x10077530
assert struct.unpack('<8I',raw(0x100778e8,32))==tuple(v(x)for x in e['language_jump_table']['targets'])
assert e['language_jump_table']['targets']==['0x1007765f','0x1007765f','0x1007759f','0x100775bf','0x100775e0','0x10077601','0x10077621','0x10077640']
expected=['/txtfiles/subtitles.txt','/txtfiles/languages/dutch/subtitles.txt','/txtfiles/languages/french/subtitles.txt','/txtfiles/languages/german/subtitles.txt','/txtfiles/languages/norwegian/subtitles.txt','/txtfiles/languages/spanish/subtitles.txt','/txtfiles/languages/swedish/subtitles.txt']
for i,x in enumerate(e['language_copies']):
 data=raw(v(x['source']),x['copied_bytes']);assert data==bytes.fromhex(x['bytes_hex'])==expected[i].encode()+b'\0'
assert raw(0x101bb28c,2)==b'*\0'
anchors={0x1007756d:'ff15d4302210',0x10077578:'ff152c302210',0x10077584:'f30f2c85b8fdffff',0x1007758f:'83f807',0x10077598:'ff2485e8780710',0x100776e3:'f30f2c83dc000000',0x100776eb:'bb05000000',0x10077746:'660f6ec7',0x1007774a:'0f5bc0',0x1007774d:'0f2e80dc000000',0x10077758:'7a66',0x10077760:'81fefe000000',0x10077766:'7619',0x1007777f:'eb40',0x100777c0:'47',0x10077802:'46',0x1007781d:'8d5803',0x10077820:'81fe00010000',0x10077859:'83f901',0x1007785c:'7640',0x1007787d:'6a00',0x100778df:'c21000',0x1013dd4b:'6a08',0x100e6091:'6aff',0x100e60aa:'a31c652210',0x100e63a6:'6aff',0x100e63bf:'a368652210'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
# Comparator body is native-only support; one-byte semantic relation, not a one-byte read footprint.
assert raw(0x1016f6e6,5)==bytes.fromhex('33c05e5bc3') and raw(0x1016f6f0,8)==bytes.fromhex('1bc083c8015e5bc3')
assert raw(0x101dab2c,8)==b'TextMsg\0' and raw(0x101dad0c,8)==b'ProFont\0'
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==1
for n in notes:
 assert n['subsystem']=='subtitles' and all(x in c.replace('\n',' ') for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
