"""Read-only validation of this packet against the original PE and saved sessions."""
from pathlib import Path
import json,hashlib,re,sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'));from index_evidence import pe_metadata
def load(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def h(x):return hashlib.sha256(x).hexdigest()
e=load(OUT/'evidence.json');b=Path(e['binary']).read_bytes();assert h(b)==e['sha256'];pe=pe_metadata(b)
def raw(a,n):
 for s in pe['sections']:
  d=a-int(pe['image_base'],16)-int(s['rva'],16)
  if 0<=d and d+n<=s['raw_size']:return b[s['raw_offset']+d:s['raw_offset']+d+n]
 raise ValueError(hex(a))
for x in e['source_c']:assert h((ROOT/x['path']).read_bytes())==x['sha256']
rows=0
for x in e['ranges']:
 data=(ROOT/x['path']).read_bytes();assert h(data)==x['sha256'];a=int(x['start'],16);end=int(x['end_exclusive'],16);assert h(raw(a,end-a))==x['binary_range_sha256'];pos=a
 for l in data.decode().splitlines():
  m=re.match(r'^\s*([0-9a-f]+):\s+((?:[0-9a-f]{2} )*[0-9a-f]{2})(?:\s|$)',l)
  if m:
   at=int(m[1],16);v=bytes.fromhex(m[2]);assert at==pos and raw(at,len(v))==v;pos+=len(v);rows+=1
 assert pos==end
raws=e['raw']+load(OUT/'layout-evidence.json')['raw']
for x in raws:
 v=bytes.fromhex(x['bytes_hex']);assert raw(int(x['address'],16),len(v))==v and h(v)==x['sha256']
errors=[]
for k in range(1,4):
 s=load(OUT/f'session-{k:02d}.json')['records'];v=s['verification.json']['result'];assert v['input_unchanged'] and v['rea_exit_code']==0 and not v['target_executed'];assert v['queries_succeeded']==(k!=1)
 for key in ['close.json','reset.json']:assert not s[key]['result'].get('isError')
 for key,r in load(OUT/f'provider-{k:02d}.json')['records'].items():
  if r['result'].get('isError'):errors.append((k,key));continue
  assert r['result']['structuredContent']['subject']['digest']['sha256']==e['sha256']
assert errors==[(1,'001-procedure_info.json'),(1,'003-procedure_info.json'),(1,'005-procedure_info.json')]
functions=load(ROOT/'decompiled/client/captures/profont-dependencies-pass04/capture.json')['functions'];assert len(functions)==9
for f in functions:
 data=(ROOT/'decompiled/client/captures/profont-dependencies-pass04'/f['file']).read_bytes();assert h(data)==f['sha256']
 primary=load(ROOT/f['portable_evidence'])['records'];assert any(r['result'].get('structuredContent',{}).get('evidence_id')==f['evidence_id'] for r in primary.values())
 infos=load(ROOT/f['procedure_info_portable_evidence'])['records'];matches=[r['result']['structuredContent']for r in infos.values()if r['result'].get('structuredContent',{}).get('evidence_id')==f['procedure_info_evidence_id']];assert len(matches)==1
 assert matches[0]['normalized_result']['entrypoint']==f['actual_entry'];assert matches[0]['normalized_result']['body']==f['body']
for name,n in [('notes.json',8),('notes-support-update.json',1)]:
 notes=load(OUT/name)['functions'];assert len(notes)==n
 for row in notes:
  for p in row['evidence_paths']:assert (ROOT/p).is_file(),p
print(json.dumps(dict(status='PASS',source_c=len(e['source_c']),asm_ranges=len(e['ranges']),asm_byte_rows=rows,raw_records=len(raws),captured_actual_entries=len(functions),new_reviews=8,baseline_refinements=1,expected_schema_errors=len(errors)),indent=2))
