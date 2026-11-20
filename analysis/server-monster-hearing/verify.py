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
assert e['primary']=='100c2970 100bda70 100bf970'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary']
assert all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1946
col=struct.unpack('<I',raw(0x101ce368,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));assert raw(typ+8,22)==b'.?AVCGenericMonster@@\0'
for off,target in [(0x128,0x100c2970),(0x124,0x100bfc50),(0x1b8,0x100bd100),(0x1dc,0x100bf880),(0x208,0x100bed80),(0x1d8,0x10013290),(0x204,0x100145a0),(0x234,0x10013540),(0x34,0x100b0770)]:assert struct.unpack('<I',raw(0x101ce36c+off,4))[0]==target
for a in [0x10013290,0x100145a0,0x10013540]:assert raw(a,3)==b'\xc2\0\0'
fields=next(x['fields']for x in e['save_tables']if x['name']=='MONSTER')
for off,name,ty in [(0x330,'m_iTriggerCondition',10),(0x334,'m_iszTriggerTarget',1),(0x32c,'m_flDistLook',0),(0x344,'m_iUseAlertAnims',10),(0x350,'m_iClass',10),(0x354,'m_iPlayerReact',10)]:assert any(v(x['offset'])==off and x['name']==name and x['type_id']==ty for x in fields)
expected=[0x100bda93,0x100bdb06,0x100bdb2e,0x100bdb1c,0x100bdb56,0x100bdb56,0x100bdb5b,0x100bdb70,0x100bdb85,0x100bdacf,0x100bdae2]
assert list(struct.unpack('<11I',raw(0x100bdbe4,44)))==expected
assert [v(x['target'])for x in e['jump_tables'][0]['cases']]==expected
assert [x['condition']for x in e['jump_tables'][0]['cases']]==list(range(1,12))
assert struct.unpack('<f',raw(0x101a1dd8,4))[0]==.5
anchors={0x100c2983:'6a63',0x100c29be:'f30f2c872c030000',0x100c29e7:'218780010000',0x100c2a15:'ff96b8010000',0x100c2a3f:'81a780010000fffcffff',0x100c2a5e:'c7874403000001000000',0x100c2a69:'c3',0x100bda86:'0f87ca000000',0x100bdb54:'7344',0x100bdb98:'74bc',0x100bdbc2:'6a03',0x100bdbc4:'565651',0x100bdbcf:'c7863003000000000000',0x100bdbd9:'b801000000',0x100bf9ba:'898734030000',0x100bfa09:'898730030000',0x100bfacb:'c20400',0x100bfada:'c20400'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==3
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
