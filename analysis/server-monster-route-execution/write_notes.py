"""Derive four review cards from the reviewed UTF-8 route-execution contract."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
c=(O/'contract.md').read_text(encoding='utf8')
summaries={
 '100bc290':'Продвигает cursor маршрута, завершает terminal waypoint по groundspeed или обрабатывает graph-link entity через Use и deadline ожидания.',
 '100155d0':'Назначает ideal activity результатом virtual168, сохраняя полный EAX callback; сам velocity и маршрут не останавливает.',
 '100c2390':'Возвращает полный EAX0/1 для ordered distance ≤ 8; отрицательные значения допустимы, NaN отвергается.',
 '100ab8b0':'Исполняет flying movement: смешивает direction с сохранённым вектором, строит endpoint, меняет speed target, проверяет local move и выполняет один engine MoveToOrigin; для другого movetype вызывает ground executor.'}
functions=[]
for a in e['primary']:
 section=c.split('## 0x'+a+' — ',1)[1].split('\n## ',1)[0]
 name,body=section.split('\n',1)
 details=[s.strip()for s in re.split(r'\n\s*\n',body)if s.strip()]
 paths=[r['path']for r in e['source_c']+e['ranges']+e['support_documents']]
 paths+=['analysis/server-monster-route-execution/contract.md','analysis/server-monster-route-execution/evidence.json',e['api_binding']['header']['path']]
 functions.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=functions),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
