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
for r in e['source_c']+e['ranges']+e['support_documents']+[e['index'],e['api_binding']['header'],e['prior_review'],e['skill_write_table'],e['installed_skill_config']]:assert h((R/r['path']).read_bytes())==r['sha256']
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
erv=struct.unpack_from('<I',b,opt+96)[0];ex=struct.unpack('<IIHHIIIIIII',raw(base+erv,40))
for f in e['exports']:
 i=f['name_index'];nm=base+struct.unpack('<I',raw(base+ex[9]+4*i,4))[0];ix=struct.unpack('<H',raw(base+ex[10]+2*i,2))[0];entry=base+struct.unpack('<I',raw(base+ex[8]+4*ix,4))[0]
 assert raw(nm,len(f['name'])+1)==f['name'].encode()+b'\0' and ex[5]+ix==f['ordinal'] and entry==v(f['entry'])
header=(R/e['api_binding']['header']['path']).read_text()
names=re.findall(r'\(\*(pfn\w+)\s*\)',header.split('typedef struct enginefuncs_s',1)[1])
for f in e['api_binding']['slots']:assert names[f['slot']]==f['name'] and v(f['address'])==v(e['api_binding']['base'])+4*f['slot']
for f in e['explicit_strings']:assert raw(v(f['address']),len(f['text_latin1'])+1)==f['text_latin1'].encode('latin1')+b'\0'

assert raw(0x100af822,5)==bytes.fromhex('f30f2c45fc')
assert raw(0x100af82a,5)==bytes.fromhex('a3fc2e2210')
assert raw(0x100af84d,5)==bytes.fromhex('a328672210')
assert raw(0x1001f16c,2)==bytes.fromhex('6aff')
assert raw(0x1001f17b,3)==bytes.fromhex('83c901')
assert raw(0x1001f18c,3)==bytes.fromhex('0f48c1')
assert raw(0x100fc702,1)==bytes.fromhex('c3')
assert raw(0x1013dbbc,2)==bytes.fromhex('f2c3')
writes=e['skill_writes'];assert len(writes)==111
assert {v(r['destination'])for r in writes}==set(range(0x1022672c,0x102268c0,4))
for i,r in enumerate(writes):
 assert r['order']==i+1
 assert raw(v(r['push_site']),5)==b'\x68'+struct.pack('<I',v(r['literal_address']))
 at=v(r['call_site']);assert raw(at,1)==b'\xe8' and at+5+struct.unpack('<i',raw(at+1,4))[0]==0x100fc6c0
 assert raw(v(r['store_site']),6)==b'\xd9\x1d'+struct.pack('<I',v(r['destination']))
 assert raw(v(r['literal_address']),len(r['base_cvar'])+1)==r['base_cvar'].encode('latin1')+b'\0'
assert writes[68]['destination']=='0x10226844' and writes[68]['base_cvar']=='sk_cof_punch'
assert writes[96]['destination']=='0x102268ac' and writes[96]['literal_address']=='0x101ce1c4'
assert raw(0x101ce1c4,16)==bytes.fromhex('736b5f706c725fe4f0eee1eee2e8eae0')
assert raw(0x101ce1d4,17)==b'sk_primary_speed\0'
# Independently pair named saved-C reads with stores; unnamed lookup97 retained as raw literal evidence.
source=(R/'decompiled/server/partial-pass/functions/0x100af810.c').read_text()
pairs=re.findall(r'FUN_100fc6c0\("([^"\n]+)"\);\s+_?DAT_([0-9a-f]+) =',source)
assert len(pairs)==110
assert [(r['base_cvar'],r['destination'][2:])for r in writes if r['order']!=97]==pairs
cfg=e['installed_skill_config'];lines=Path(cfg['path']).read_bytes().decode('latin1').splitlines()
for r in cfg['selected_lines']:assert lines[r['line']-1]==r['text']
assert len(cfg['selected_lines'])==24
for k in range(1,5):assert re.search(r'^sk_cof_punch'+str(k)+r'\s+"5"$',lines[80+k-1])
assert (O/'skill-writes.tsv').read_text().count('\n')==112
notes=json.loads((O/'notes.json').read_text(encoding='utf8'))['functions'];c=(O/'contract.md').read_text(encoding='utf8')
assert sorted(n['address'][2:] for n in notes)==sorted(e['primary']) and len(notes)==3
for n in notes:
 assert all(x in c for x in n['details_ru'])
 for path in n['evidence_paths']:assert (R/path).is_file()
print('PASS',len(e['source_c']),'C',len(e['ranges']),'ASM',rows,'byte rows',len(e['raw']),'raw',len(e['exports']),'exports',len(notes),'cards')
