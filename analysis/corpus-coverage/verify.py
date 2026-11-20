"""Verify portable corpus coverage and produce a hash ledger. No DLL execution."""
from pathlib import Path
import hashlib,json
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
checks={};counts={};summary=read(OUT/'inventory.json')
for module,row in summary['modules'].items():
 ep=OUT/f'{module}-discovered-evidence.json'
 if not ep.exists():continue
 wrapper=read(ep);src=ROOT/wrapper['source']['path']
 if src.exists():assert sha(src)==wrapper['source']['sha256'];assert read(src)['structuredContent']==wrapper['structuredContent'];checks[module+'_source_exact_match']=True
 e=wrapper['structuredContent'];a=e['normalized_result'];saved=read(OUT/f'{module}-saved-confirmed-addresses.json')['entries'];missing=read(OUT/f'{module}-local-without-confirmed-c.json')['functions'];s={x['address']for x in saved};m={x['address']for x in missing};local={x['address']for x in a if not x['procedure']['external']}
 assert len(a)==len({x['address']for x in a});assert not s&m;assert (s&local)|m==local
 assert sorted(s-local,key=lambda x:int(x,16))==summary[module+'_inventory']['confirmed_saved_outside_inventory']
 for record in saved:
  for f in record['files']:assert sha(ROOT/f['path'])==f['sha256']
 unresolved=read(OUT/f'{module}-unresolved-c.json')['records'];assert len(unresolved)==row['unconfirmed_entry_records']
 for r in unresolved:
  for f in r['files']:assert sha(ROOT/f['path'])==f['sha256'];assert f['basis'].startswith('селектор')
 counts[module]={'discovered':len(a),'confirmed_saved':len(s),'local_without_confirmed_C':len(m),'external':sum(x['procedure']['external']for x in a),'unresolved_C':len(unresolved)}
 checks[module+'_partition_saved_hashes_unresolved_not_promoted']=True
 sp=OUT/f'{module}-inventory-session.json'
 if sp.exists():
  session=read(sp)['records'];v=session['verification.json']['result'];assert v['input_unchanged']and v['queries_succeeded']and v['rea_exit_code']==0 and not v['target_executed']
  for n in ['close.json','reset.json']:assert not session[n]['result'].get('isError')
  for x in session.values():
   p=ROOT/x['source']['path']
   if p.exists():assert sha(p)==x['source']['sha256'];assert read(p)==x['result']
  request=session['request.json']['result'];assert request['sha256']==row['binary_sha256']==e['subject']['digest']['sha256']
  bp=Path(request['binary'])
  if bp.exists():assert sha(bp)==request['sha256']
  checks[module+'_session_success_close_reset_exit0_hash']=True
j=read(OUT/'server-export-journal-summary.json');e=read(OUT/'server-discovered-evidence.json')['structuredContent'];assert j['analysis_profile_digest']==e['analysis_profile']['digest'];assert j['target_sha256']==e['subject']['digest']['sha256'];checks['server_journal_profile_target_match']=True
hook=read(OUT/'profont-hook-evidence.json')['records'];pseudo=hook['001-procedure_pseudo_code.json']['result']['structuredContent'];info=hook['002-procedure_info.json']['result']['structuredContent']['normalized_result'];c=ROOT/'decompiled/client/captures/profont-pass02/001-pseudocode.c';meta=read(c.parent/'capture.json');assert sha(c)==meta['functions'][0]['sha256'];assert c.read_bytes()==pseudo['normalized_result'].replace('\n','\r\n').encode('utf-8');assert info['entrypoint']=='0x1006e930'and info['length']==27;assert meta['functions'][0]['body']==info['body'];checks['published_hook_matches_full_evidence_and_info']=True
for r in read(OUT/'input-hash-verification.json')['modules']:
 p=Path(r['path'])
 if p.exists():assert sha(p)==r['sha256']
checks['available_original_DLL_hashes_match']=True
files=[]
for p in sorted(OUT.iterdir()):
 if not p.is_file()or p.name=='verification.json':continue
 if p.suffix=='.json':read(p)
 files.append({'path':p.relative_to(ROOT).as_posix(),'sha256':sha(p),'bytes':p.stat().st_size})
for p in [c,c.parent/'capture.json']:files.append({'path':p.relative_to(ROOT).as_posix(),'sha256':sha(p),'bytes':p.stat().st_size})
(OUT/'verification.json').write_text(json.dumps({'checks':checks,'counts':counts,'target_executed_by_verifier':False,'REA_session_opened_by_verifier':False,'files':files},ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print(json.dumps({'all_checks_passed':all(checks.values()),'counts':counts},ensure_ascii=False))
