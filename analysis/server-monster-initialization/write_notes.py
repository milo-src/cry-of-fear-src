"""Build owned notes from the reviewed UTF-8 contract, without editing the shared catalogue."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
c=(O/'contract.md').read_text(encoding='utf8')
summaries={
'100c0200':'Инициализирует живого монстра: rules gate, флаги и state, enemy/route reset, view callback, original origin и отложенные Think/Use callbacks.',
'100c0370':'Подготавливает физику тела: controllers и sequence reset, solid/movetype/deadflag, SetSize/SetOrigin, concrete corpse callback и отложенный CorpseFallThink.',
'100c0430':'Выполняет общий кадр монстра: camera freeze, flicker, специальные анимации, RunAI, FrameAdvance, idle refresh, studio events и условный movement callback.'}
out=[]
for a in e['primary']:
 sec=c.split('## 0x'+a+' — ',1)[1].split('\n## ',1)[0]
 name,body=sec.split('\n',1)
 paragraphs=[s.strip()for s in re.split(r'\n\s*\n',body)if s.strip()]
 paths=[r['path']for r in e['source_c']+e['ranges']+e['support_documents']]
 paths+=['analysis/server-monster-initialization/contract.md','analysis/server-monster-initialization/evidence.json',e['api_binding']['header']['path']]
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths)),details_ru=paragraphs))
(O/'notes.json').write_text(json.dumps(dict(functions=out),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
