"""Generate only six primary review cards from the authored local contracts."""
from pathlib import Path
import json,re
OUT=Path(__file__).resolve().parent
s=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
common=s.split('## Общая связность и границы\n\n',1)[1].split('## 101048c0',1)[0].strip().split('\n\n')
summaries={
'101048c0':'Экспортированный FollowerUse выбирает начало или virtual-остановку следования по второму entity argument, useType, deadline и master gates.',
'10105920':'Отменяет cinematic, записывает target EHANDLE, опционально отправляет реплику и сбрасывает текущее расписание.',
'10104110':'Первое приветствие: player search и два predicate gates, отдельный speech EHANDLE, выбор payload и одноразовая mask8.',
'101041f0':'Выбирает реакцию на здоровье target, разговор с ближайшим mapped NPC либо player; сохраняет точный порядок callbacks, RNG, masks и timers.',
'10104540':'Отправляет специальную реплику, затем выбирает player для speech EHANDLE; отсутствие адресата не отменяет успех.',
'10105eb0':'Назначает ближайшему mapped кандидату Idle Stop Shooting при player damage gates, затем безусловно вызывает generic damage с исходными аргументами.'}

notes=[]
for a in e['primary']:
 m=re.search(r'^## '+a+r' — (.*?)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S)
 name,body=m.groups()
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-follower-behavior/{a}-0.asm','analysis/server-follower-behavior/contract.md','analysis/server-follower-behavior/evidence.json']
 for group in ['source_c','ranges','support_documents']:
  for r in e[group]:
   if r['path'] not in paths:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=[x.replace('\n',' ') for x in common+body.strip().split('\n\n')]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
