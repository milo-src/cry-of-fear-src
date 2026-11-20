"""Generate only two primary review cards from the authored local contracts."""
from pathlib import Path
import json,re
OUT=Path(__file__).resolve().parent
s=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
common=s.split('## Общий контракт и границы\n\n',1)[1].split('## 10105f70',1)[0].strip().split('\n\n')
summaries={
'10105f70':'Строит19 speech payload pointers из SpeakAs и independently sampled spawnflags0x100; сбрасывает общий deadline, numeric speech base100 и поле3d4 с сохранением старых payloads при prefix offset0.',
'101058c0':'Обходит шесть selectors через visibility-gated finder и вызывает virtual1a8 на ненулевом объекте, возвращённом candidate.virtual78; effect callback остаётся конкретно не привязан.'}

notes=[]
for a in e['primary']:
 m=re.search(r'^## '+a+r' — (.*?)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S)
 name,body=m.groups()
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-follower-initialization/{a}-0.asm','analysis/server-follower-initialization/contract.md','analysis/server-follower-initialization/evidence.json']
 for group in ['source_c','ranges','support_documents']:
  for r in e[group]:
   if r['path'] not in paths:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=[x.replace('\n',' ') for x in common+body.strip().split('\n\n')]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
