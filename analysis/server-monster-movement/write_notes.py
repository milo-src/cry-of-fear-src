"""Derive this packet's two review cards from its reviewed UTF-8 contract."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
c=(O/'contract.md').read_text(encoding='utf8')
summaries={
 '100c0750':'Ведёт монстра по текущему маршруту: local probe, ожидание blocker, detour/retry/failure, продвижение waypoint и вызов исполнителя с ограниченным interval.',
 '100c0e70':'Выполняет route movement через engine MoveToOrigin порциями до 16: class/skin guard, gaitsequence/framerate scaling и повторное чтение waypoint.'}
functions=[]
for a in e['primary']:
 section=c.split('## 0x'+a+' — ',1)[1].split('\n## ',1)[0]
 name,body=section.split('\n',1)
 details=[s.strip()for s in re.split(r'\n\s*\n',body)if s.strip()]
 paths=[r['path']for r in e['source_c']+e['ranges']+e['support_documents']]
 paths += ['analysis/server-monster-movement/contract.md','analysis/server-monster-movement/evidence.json',e['api_binding']['header']['path']]
 functions.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=functions),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
