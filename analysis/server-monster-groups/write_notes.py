"""Generate only four primary review cards from the authored local contracts."""
from pathlib import Path
import json,re
OUT=Path(__file__).resolve().parent
s=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
common=s.split('## Общая связность и границы\n\n',1)[1].split('## 10104040',1)[0].strip().split('\n\n')
summaries={
'10103f70':'Обходит видимых живых участников по шести selectors и ставит memory bit 1 у результата virtual78; NULL результата не защищён.',
'10104040':'Продолжает classname-поиск через virtual250 и таблицу шести имён; исключает this/неживых и опционально требует trace fraction==1.',
'10104670':'Выбирает ближайшего видимого кандидата строго ближе 500 по mapped классу либо player; учитывает state и точный порядок float/double вычислений.',
'10105180':'Перечисляет живых mapped участников с совпадающим m_hTargetEnt и вызывает virtual240(1,1) после signed лимита совпадений.'}
notes=[]
for a in e['primary']:
 m=re.search(r'^## '+a+r' — (.*?)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S)
 name,body=m.groups()
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-monster-groups/{a}-0.asm','analysis/server-monster-groups/contract.md','analysis/server-monster-groups/evidence.json']
 for group in ['source_c','ranges','support_documents']:
  for r in e[group]:
   if r['path'] not in paths:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=[x.replace('\n',' ') for x in common+body.strip().split('\n\n')]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
