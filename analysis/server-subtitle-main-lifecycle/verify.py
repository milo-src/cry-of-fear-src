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

assert all('REVIEW'not in x for x in e['pending_check']['blocks'].values())
assert set(e['pending_check']['entries'])==set(e['primary'])
f=e['baseline_progress_report'];assert h((R/f['path']).read_bytes())==f['sha256'];assert json.loads((R/f['path']).read_text(encoding='utf8'))['after_reviewed']==1890
vt={int(x['offset'],16):int(x['target'],16)for x in e['vtables'][0]['slots']}
assert {k:vt[k]for k in [0x2c,0x34,0x38,0x3c,0xd0,0xe8]}=={0x2c:0x100774e0,0x34:0x100772e0,0x38:0x10077480,0x3c:0x10077440,0xd0:0x1000db80,0xe8:0x10077530}
t=next(x for x in e['save_tables']if x['name']=='SUBTITLE');assert len(t['fields'])==1
f=t['fields'][0];assert (f['name'],f['type_id'],v(f['offset']),f['count'],f['flags'])==('CurrentLine',0,0xdc,1,0)
assert e['exports'][0]['name']=='subtitle_main'and e['exports'][0]['ordinal']==752 and len(e['exports'])==1
col=struct.unpack('<I',raw(0x101b58fc,4))[0];typ=struct.unpack('<5I',raw(col,20))[3];assert raw(typ+8,16)==b'.?AVCSubtitle@@\0'
anchors={0x1005fc08:'c70000591b10',0x1005fc16:'897004',0x10077910:'e9ab82feff',0x10077329:'d99bdc000000',0x10077379:'894318',0x100773c5:'894360',0x10077414:'894364',0x10077425:'c7470c00000000',0x10077457:'8b4d08',0x10077454:'c20400',0x1007746e:'c20400',0x100774a9:'8b91d0010000',0x100774bf:'03c2',0x100774cf:'0301',0x100774f6:'c7800c01000000000000',0x10077503:'c7801801000080000000',0x10077519:'660fd64174',0x10077523:'89417c',0x1000db80:'33c0c3'}
for a,q in anchors.items():q=bytes.fromhex(q);assert raw(a,len(q))==q,hex(a)
for call,target in [(0x10077321,0x1016f5ec),(0x100773bd,0x1016b55e),(0x1007740c,0x1016b55e),(0x10077449,0x10017f30),(0x10077467,0x10117010),(0x1007748b,0x10018000),(0x100774c4,0x1011adc0),(0x100774d4,0x1011adc0),(0x100774eb,0x10119fe0)]:
 assert raw(call,1)==b'\xe8'and call+5+struct.unpack('<i',raw(call+1,4))[0]==target
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8').replace('\n',' ')
assert sorted(n['address'][2:]for n in notes)==sorted(e['primary'])and len(notes)==6
for n in notes:
 assert n['subsystem']=='subtitles'and all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['save_tables']),'tables',len(e['exports']),'exports',len(notes),'cards')
