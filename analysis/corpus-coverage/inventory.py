"""Reconcile portable provider inventories with saved C. No REA or DLL execution.
Run after retaining new evidence: python analysis/corpus-coverage/inventory.py
"""
from pathlib import Path
import collections, hashlib, json, sys
ROOT=Path(__file__).resolve().parents[2];OUT=Path(__file__).resolve().parent
sys.path.insert(0,str(ROOT/'tools'))
import catalog_decompiled as cat

def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
def write(n,d):(OUT/n).write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
def ref(p):return {'path':p.relative_to(ROOT).as_posix(),'sha256':sha(p)}
def kinds(rows):return dict(collections.Counter('external' if f['procedure']['external'] else 'local_thunk' if f['procedure']['thunk'] else 'local_function' for f in rows))
def canonical(a):return hex(int(a,16)) if a.lower().startswith('0x') else a
def saved_record(a,ls):return {'address':a,'files':[{'path':x['path'].relative_to(ROOT).as_posix(),'sha256':x['sha256'],'requested':x['requested'],'catalog_entry':x['entry'],'basis':x['address_basis']}for x in ls]}
def main():
 sources,identities,_=cat.load_sources();groups,_=cat.resolve(sources,cat.load_exports());partial=read(ROOT/'decompiled/server/partial-pass/index.json')
 modulemeta={d['module']:d for d in read(ROOT/'analysis/modules.json')}
 summary={'schema_version':2,'scope':'All saved C plus retained provider-discovered inventories; not a claim of all machine-code functions.', 'no_target_execution_by_audit_script':True,'no_REA_session_opened_by_inventory_script':True,'address_comparison':'Default-space 0x entries compared numerically (leading zeroes removed); full provider records preserved unchanged.','sources':[ref(ROOT/'tools/catalog_decompiled.py'),ref(ROOT/'decompiled/server/partial-pass/index.json'),ref(ROOT/'analysis/modules.json')],'modules':{},'unknowns':['Provider discovery may miss, split or merge code; no percentage of all game functions is claimed.','Complete exports are not internal function inventories. REVIEW is not semantic completeness.','Unresolved C selectors are never counted as confirmed actual entries. Missing-confirmation sets can overlap such C.','Additional dependency DLLs and dynamic paths are outside these six corpus modules.']}
 for module in sorted(identities):
  ss=[x for x in sources if x['module']==module];gg=collections.defaultdict(list)
  for (m,a),ls in groups.items():
   if m==module:gg[canonical(a)].extend(ls)
  cps=sorted((ROOT/'decompiled'/module).rglob('capture.json'));profiles={};unavailable=[];paths=set();bin_names=set();provenance=[]
  for cp in cps:
   c=read(cp);bin_names.add(c['binary']);provenance.append(ref(cp))
   src=ROOT/c['source_capture'] if c.get('source_capture') else None
   rp=src/'request.json' if src else None
   if rp and rp.exists():paths.add(read(rp)['binary'])
   for f in c['functions']:
    qp=src/(f['file'].split('-')[0]+'-procedure_pseudo_code.json') if src else None
    q={};example=None
    if qp and qp.exists():q=read(qp).get('structuredContent',{});example=ref(qp)
    elif f.get('portable_evidence'):
     pp=ROOT/f['portable_evidence'];records=read(pp)['records']
     found=[r['result']['structuredContent'] for r in records.values() if r['result'].get('structuredContent',{}).get('evidence_id')==f['evidence_id']]
     assert len(found)==1,(cp,f['file']);q=found[0];example=ref(pp)
     assert q['subject']['digest']['sha256']==c['binary_sha256'] and q['operation']=='procedure_pseudo_code'
     assert q['parameters']['procedure']==f['procedure']
     paths.add(q['subject']['local_path'])
    else:
     unavailable.append(qp.relative_to(ROOT).as_posix() if qp else cp.relative_to(ROOT).as_posix()+':'+f['file']);continue
    prof=q.get('analysis_profile',{})
    if prof.get('digest'):
     bucket=profiles.setdefault(prof['digest'],{'count':0,'provider':q.get('provider'),'example':example,'profile':prof});bucket['count']+=1
  binary=next(iter(bin_names));meta=modulemeta.get(binary,{})
  confirmed={a for a,ls in gg.items()if any(not x['address_basis'].startswith('селектор')for x in ls)}
  unresolved=[{'selector':a,'files':[{'path':x['path'].relative_to(ROOT).as_posix(),'sha256':x['sha256'],'declaration_name':x['name'],'requested':x['requested'],'catalog_entry':x['entry'],'basis':x['address_basis']}for x in ls],'not_proof_of_C_entry':True}for a,ls in gg.items()if a not in confirmed]
  row={'binary':binary,'binary_sha256':next(iter(identities[module])),'captured_paths':sorted(paths),'capture_manifests':provenance,'c_files':len(ss),'unique_address_records':len(gg),'confirmed_actual_entries':len(confirmed),'unconfirmed_entry_records':len(unresolved),'selector_mismatch_files':sum(int(x['requested'],16)!=int(x['entry'],16)for x in ss),'address_min':min(gg,key=lambda a:int(a,16)),'address_max':max(gg,key=lambda a:int(a,16)),'address_extent_is_coverage':False,'profiles_from_saved_query_evidence':profiles,'profile_evidence_missing':unavailable,'export_inventory':{'entries':meta.get('export_count'),'scope':'PE exports only','evidence_id':meta.get('exports_evidence_id')},'complete_discovered_inventory':False,'discovered_count':None,'local_without_confirmed_C':None,'local_without_saved_C':None}
  ep=OUT/f'{module}-discovered-evidence.json'
  if ep.exists():
   wrapper=read(ep);e=wrapper['structuredContent'];inv=e['normalized_result'];assert e['operation']=='list_procedures'and e['parameters']=={};assert identities[module]=={e['subject']['digest']['sha256']};assert len({f['address']for f in inv})==len(inv)
   local={f['address']for f in inv if not f['procedure']['external']};outside=sorted(confirmed-local,key=lambda a:int(a,16));missing=[f for f in inv if not f['procedure']['external']and f['address']not in confirmed]
   # A recovered C address outside a new provider inventory must remain explicit.
   for u in unresolved:u['selector_is_discovered_entry']=any(f['address']==u['selector']for f in inv)
   stats={'evidence_id':e['evidence_id'],'provider':e['provider'],'analysis_profile_digest':e['analysis_profile']['digest'],'parameters':e['parameters'],'discovered_count':len(inv),'kinds':kinds(inv),'saved_address_records':len(gg),'confirmed_saved_actual_entries':len(confirmed),'confirmed_saved_in_inventory':len(confirmed&local),'confirmed_saved_outside_inventory':outside,'confirmed_saved_kinds':kinds([f for f in inv if f['address']in confirmed]),'unresolved_saved_records':len(unresolved),'local_without_confirmed_C':len(missing),'local_without_confirmed_C_kinds':kinds(missing),'definitely_unexported_count':len(missing)if not unresolved else None,'qualification':'Entries without confirmed saved C, not necessarily never decompiled when unresolved bodies exist.'}
   summary[module+'_inventory']=stats;summary['sources'].append(ref(ep))
   sp=OUT/f'{module}-inventory-session.json'
   if sp.exists():summary['sources'].append(ref(sp))
   row.update(complete_discovered_inventory=True,discovered_count=len(inv),local_without_confirmed_C=len(missing),local_without_saved_C=len(missing)if not unresolved else None)
   manifest={'source':ref(ep),'target_sha256':e['subject']['digest']['sha256'],'analysis_profile_digest':e['analysis_profile']['digest'],'criterion':'local provider entry absent from confirmed actual saved C entries; unresolved selectors NOT treated as entries','count':len(missing),'unresolved_C_records':len(unresolved),'definitely_unexported_count':stats['definitely_unexported_count'],'functions':missing}
   write(f'{module}-local-without-confirmed-c.json',manifest)
   if module=='server':
    assert not unresolved
    stats.update(saved_unique_actual_entries=len(confirmed),saved_kinds=stats['confirmed_saved_kinds'],partial_pass_entries=len(partial['functions']),later_capture_new_actual_entries=sorted(confirmed-{f['address']for f in partial['functions']},key=lambda a:int(a,16)),local_without_C=len(missing),local_without_C_kinds=kinds(missing),external_not_C=stats['kinds'].get('external',0),missing_min=min((f['address']for f in missing),default=None),missing_max=max((f['address']for f in missing),default=None))
    write('server-local-without-c.json',manifest)
  write(f'{module}-unresolved-c.json',{'count':len(unresolved),'records':unresolved,'warning':'An inventory entry matching a selector does not establish the saved C actual entry.'})
  sr={'count':len(confirmed),'entries':[saved_record(a,gg[a])for a in sorted(confirmed,key=lambda a:int(a,16))]};write(f'{module}-saved-confirmed-addresses.json',sr)
  if module=='server':write('server-saved-addresses.json',sr)
  summary['modules'][module]=row
 write('inventory.json',summary)
 lines=['# Граница покрытия декомпила','', 'Этот audit script читает сохранённые C/Evidence, не запускает REA/Ghidra или игру. Отдельные завершённые сессии discovery перечислены ниже с provenance. Числа не означают процент восстановления игры.','', '| Модуль | C | Адресные записи | Подтверждённые начала | Не подтверждено | Discovered |','|---|---:|---:|---:|---:|---:|']
 for m,d in summary['modules'].items():lines.append(f"| {m} / {d['binary']} | {d['c_files']} | {d['unique_address_records']} | {d['confirmed_actual_entries']} | {d['unconfirmed_entry_records']} | {d['discovered_count'] if d['complete_discovered_inventory'] else 'неизвестно'} |")
 for m,d in summary['modules'].items():
  lines+=['',f'## {m}: граница provider и сохранённых тел','',f"SHA-256 `{d['binary_sha256']}`."]
  stats=summary.get(m+'_inventory')
  if not stats:lines+=['Полный discovered inventory пока не сохранён.'];continue
  k=stats['kinds'];mk=stats['local_without_confirmed_C_kinds'];sk=stats['confirmed_saved_kinds']
  lines+=[f"Полный retained list_procedures без фильтров содержит {stats['discovered_count']} записей: {k.get('local_function',0)} обычных локальных функций, {k.get('local_thunk',0)} локальных thunk, {k.get('external',0)} external. Provider {stats['provider']['name']} {stats['provider']['version']}, профиль `{stats['analysis_profile_digest']}`.", '',f"В discovered local inventory подтверждены {stats['confirmed_saved_in_inventory']} сохранённых actual entries ({sk.get('local_function',0)} обычных, {sk.get('local_thunk',0)} thunk); за его пределами {len(stats['confirmed_saved_outside_inventory'])}. Без подтверждённого C остаются {stats['local_without_confirmed_C']} локальных entries ({mk.get('local_function',0)} обычных, {mk.get('local_thunk',0)} thunk). Неразрешённых C-записей: {stats['unresolved_saved_records']}. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.", '',f"Полные исходные поля/flags/адреса: [{m}-discovered-evidence.json]({m}-discovered-evidence.json). Точная очередь: [{m}-local-without-confirmed-c.json]({m}-local-without-confirmed-c.json). Подтверждённые тела: [{m}-saved-confirmed-addresses.json]({m}-saved-confirmed-addresses.json). Неустановленные начала: [{m}-unresolved-c.json]({m}-unresolved-c.json)."]
  if (OUT/f'{m}-inventory-session.json').exists():lines+=[f"Session request/open/close/reset/hash/exit provenance: [{m}-inventory-session.json]({m}-inventory-session.json)."]
  if m=='server':
   journal=read(OUT/'server-export-journal-summary.json');jr=journal['latest_run'];jp=journal['progress']['counts'];capture_count=sum(x['module']=='server'and'/captures/'in x['path'].as_posix()for x in sources)
   lines += ['',f"Исторический partial-pass: {stats['partial_pass_entries']} C entries. Отдельные captures содержат {capture_count} C-файлов и добавляют {len(stats['later_capture_new_actual_entries'])} actual entries сверх partial-pass. Исторический journal selected={jr['selected']}, excluded={jr['excluded']}, remaining={jp['remaining']}; это сохранённое состояние exporter, не текущая очередь всех C. External не являются игровыми телами. [server-export-journal-summary.json](server-export-journal-summary.json) сохраняет target/profile/filter provenance."]
 lines+=['','## Граница полноты и повторная проверка','', 'Полная опись означает все процедуры, обнаруженные конкретным профилем Ghidra. Не доказано обнаружение каждой функции машинного кода: возможны пропуски, ошибочные границы, split/merge, косвенные пути. Другие зависимости игры не включаются в эти шесть DLL автоматически. PE exports не равны внутренним функциям. Min/max адресов — extent набора, не непрерывное покрытие. REVIEW и ASM-only support не увеличивают число сохранённых C.','', 'Default-space 0x адреса при сравнении нормализуются численно: 0x01d... и 0x1d... — один адрес. Исходный catalog_entry сохранён у каждого файла, Evidence не изменяется. Selectors внутри тела, неоднозначные имена и неустановленные thunk остаются неразрешёнными даже при совпадении selector с новым discovered entry. Семантика и ABI требуют отдельного чтения кода.','', 'Hook ProFont1006e930 опубликован в decompiled/client/captures/profont-pass02; full Evidence находится в [profont-hook-evidence.json](profont-hook-evidence.json). Procedure_info подтверждает entry1006e930/body1006e930..1006e94a,27bytes. Consumer100712a0 разобран в analysis/client-profont/contract.md; его binding/formatter/panel зависимости — в analysis/client-profont-dependencies/contract.md. Это не завершает всю UI lifecycle.','', 'Воспроизведение: `python analysis/corpus-coverage/inventory.py`, затем `python analysis/corpus-coverage/verify.py`. Оба скрипта не открывают REA. Первый проверяет C metadata/hash и пересчитывает множества; второй проверяет portable Evidence, partitions, исходные hashes при доступности и session cleanup. На машине без ignored local используются переносимые Evidence; отсутствие локальных profile-подтверждений явно отмечается.','', 'План дальнейших bounded запросов: [requests-plan.md](requests-plan.md).']
 (OUT/'inventory.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
 print(json.dumps({m:{'C':d['c_files'],'records':d['unique_address_records'],'confirmed':d['confirmed_actual_entries'],'discovered':d['discovered_count'],'missing_confirmation':d['local_without_confirmed_C']}for m,d in summary['modules'].items()}))
if __name__=='__main__':main()
