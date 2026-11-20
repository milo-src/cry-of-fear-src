"""Generate only two primary review cards from the authored local contracts."""
from pathlib import Path
import json,re
OUT=Path(__file__).resolve().parent
s=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
common=s.split('## Общий контракт и границы\n\n',1)[1].split('## 10105410',1)[0].strip().split('\n\n')
summaries={
'10105410':'Выполняет follower задачи: речь/поворот головы, расстояние от lastPosition, ожидание deadline, направления игрока и signed yaw delta; сохраняет Complete/Fail и base RunTask ветви.',
'101059e0':'Запускает follower задачи: speech callbacks, отдельный speech EHANDLE, ожидание, отступление с fallback vector ABI и сектор45 градусов ideal yaw; делегирует остальные задачи base StartTask.'}

notes=[]
for a in e['primary']:
 m=re.search(r'^## '+a+r' — (.*?)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S)
 name,body=m.groups()
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-follower-tasks/{a}-0.asm','analysis/server-follower-tasks/contract.md','analysis/server-follower-tasks/evidence.json']
 for group in ['source_c','ranges','support_documents']:
  for r in e[group]:
   if r['path'] not in paths:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=[x.replace('\n',' ') for x in common+body.strip().split('\n\n')]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
