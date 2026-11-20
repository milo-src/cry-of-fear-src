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
assert e['primary']=='100c0750 100c0e70'.split()
assert [x['entry'][2:]for x in e['pending_checks']]==e['primary'] and all('REVIEW' not in x['block']for x in e['pending_checks'])
assert json.loads((R/e['baseline_report']['path']).read_text(encoding='utf8'))['after_reviewed']==2005
assert e['accounting']==dict(new_primary=e['primary'],updated_existing=[])
table=0x101ce36c
for off,target in [(0x15c,0x100c0750),(0x160,0x100c0e70),(0x158,0x100bd590),(0x164,0x100c2390),(0x16c,0x100155d0),(0x1bc,0x100bdf80),(0x130,0x100bcdc0),(0x18c,0x1008ca70),(0x23c,0x10012900),(0x168,0x10013510)]:
 assert struct.unpack('<I',raw(table+off,4))[0]==target
for t in e['vtables']:
 col=struct.unpack('<I',raw(v(t['address'])-4,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];name=('.?AV'+t['name']+'@@').encode()+b'\0';assert raw(typ+8,len(name))==name
for table,checks in [('ENTVARS',[(0x168,'frags'),(0x110,'skin'),(0x12c,'sequence'),(0x134,'frame'),(0x13c,'framerate')]),('MONSTER',[(0x210,'m_flMoveWaitFinished'),(0x218,'m_IdealActivity'),(0x2d0,'m_movementActivity'),(0x1fc,'m_bWaitingToDie')]),('ANIMATING',[(0xf0,'m_flGroundSpeed')])]:
 fields=next(t['fields']for t in e['save_tables']if t['name']==table)
 for off,name in checks:assert any(v(f['offset'])==off and f['name']==name for f in fields),(table,off,name)
for a,fmt,value in [(0x101a1f28,'f',200.0),(0x101a1ea0,'f',3.0),(0x101a1ed8,'f',8.0),(0x101a1e10,'d',.2),(0x101a1df8,'d',.1),(0x101a1de0,'d',.001),(0x101a4700,'d',16.0)]:
 assert struct.unpack('<'+fmt,raw(a,struct.calcsize(fmt)))[0]==value
anchors={
 0x100c075e:'807f0900',0x100c0814:'0f2ec19ff6c4440f8a',
 0x100c0850:'818f8001000000000040',0x100c0870:'0f2f000f87',
 0x100c097a:'f30f2c80b0000000',0x100c099e:'f30f5d0d281f1a10',
 0x100c09ad:'257ffeffff',0x100c09bd:'8d8f84010000',0x100c09d7:'8d8f8c010000',
 0x100c0a10:'c744241000000000',0x100c0a56:'ff9058010000',0x100c0a5c:'83f802',
 0x100c0a74:'8b4074',0x100c0a80:'ff155c302210',0x100c0ac1:'ff92bc010000',
 0x100c0ad7:'6a0883ec0c',0x100c0b15:'ff9064010000',0x100c0b3f:'0f2f000f86',
 0x100c0b8b:'0f2fc10f86',0x100c0baa:'ff90d0000000',0x100c0be1:'0f2f4424100f86',
 0x100c0c18:'0f2fc17671',0x100c0c58:'660f2fc1760c',0x100c0c71:'f20f5805f81d1a10',
 0x100c0d1d:'8b038bcbff5078',0x100c0da5:'3886fc010000',0x100c0de3:'8b06ff7604ff506c',
 0x100c0deb:'8b038bcbff90d0000000',0x100c0dfd:'53ff903c020000',
 0x100c0e27:'0f2fc27607',0x100c0e2f:'f30f5ecb',0x100c0e40:'568bcfff9060010000',
 0x100c0e69:'c20400',0x100c0f06:'83bb3001000000',
 0x100c0f1b:'f30f594d10',0x100c0f5e:'f20f5dc8660f5ac1',0x100c0f87:'f30f5c4dfc',
 0x100c0fb5:'898718020000',0x100c0fbb:'f30f108b3c010000',0x100c0fcb:'f30f594d10',
 0x100c1046:'c20c00',0x10119466:'ff15742f2210',0x10012900:'c20400',
 0x100c239b:'33c00f2f45080f93c0',0x10013ef0:'8bc1c3'}
for a,x in anchors.items():assert raw(a,len(bytes.fromhex(x)))==bytes.fromhex(x),hex(a)
# Native argument non-use and exact return cleanup, rather than the decompiler types.
s=(O/'100c0e70-0.asm').read_text();assert '[ebp+0x8]' not in s and '[ebp+0xc]' not in s
assert s.count('ret    0xc')==2 and s.count('call   0x10119420')==2
for addr,name in [(0x10222f74,'pfnMoveToOrigin'),(0x1022305c,'pfnPEntityOfEntOffset'),(0x1022303c,'pfnAlertMessage')]:
 assert next(s['name']for s in e['api_binding']['slots']if v(s['address'])==addr)==name
layout=(R/'external/hlsdk-portable/engine/progdefs.h').read_text()
assert re.search(r'int\s+sequence;[^\n]*\n\s*int\s+gaitsequence;[^\n]*\n\s*float\s+frame;',layout)
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary']) and len(notes)==2
for n in notes:
 assert n['subsystem']=='monsters' and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
assert h(Path(e['binary']).read_bytes())==e['sha256']
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',sum(len(x['fields'])for x in e['save_tables']),'descriptors',len(e['vtables']),'vtables',len(notes),'cards')
