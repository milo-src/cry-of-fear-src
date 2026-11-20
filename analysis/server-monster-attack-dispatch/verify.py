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
assert e['primary']=='100bcef0 100bd7b0 100bd810 100bd850 100bd890 100c2450'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary']
assert all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==1927
col=struct.unpack('<I',raw(0x101ce368,4))[0];sig,offset,cd,typ,hier=struct.unpack('<5I',raw(col,20));assert raw(typ+8,22)==b'.?AVCGenericMonster@@\0'
for off,target in [(0x170,0x100bd850),(0x174,0x100bd890),(0x178,0x100bd7b0),(0x17c,0x100bd810),(0x10,0x1000d3b0),(0x1b0,0x100c1f50),(0x18c,0x1008ca70)]:assert struct.unpack('<I',raw(0x101ce36c+off,4))[0]==target
for cls,off,name in [('MONSTER',0x180,'m_afConditions'),('MONSTER',0x184,'m_hEnemy'),('MONSTER',0x304,'m_afCapability'),('BASE',0x58,'m_fNextThink'),('BASE',0x78,'m_pfnThink')]:
 fields=next(x['fields']for x in e['save_tables']if x['name']==cls);assert any(v(x['offset'])==off and x['name']==name for x in fields)
for a,f in [(0x101a1f04,64.0),(0x101a5e20,784.0),(0x101ab92c,512.0),(0x101a1dd8,.5),(0x101a1390,1.0)]:assert struct.unpack('<f',raw(a,4))[0]==f
assert struct.unpack('<d',raw(0x101a1e58,8))[0]==.7
# Prove the native float-to-double threshold difference, not a substitute simulation.
f07=struct.unpack('<f',struct.pack('<f',.7))[0];assert f07<.7
next07=struct.unpack('<f',struct.pack('<I',struct.unpack('<I',struct.pack('<f',.7))[0]+1))[0];assert next07>.7
anchors={0x100bd7c0:'7243',0x100bd7d2:'7231',0x100bd7d4:'8db184010000',0x100bd7ec:'8b4004',0x100bd802:'c20800',0x100bd809:'c20800',0x100c25e6:'c7477860110010',0x100c2602:'d84758',0x100c260a:'d91c24',0x100c260d:'ff5610',0x100c2647:'c3',0x1000f454:'8b4508',0x1000f459:'7504',0x1000f45e:'c3'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==6
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
