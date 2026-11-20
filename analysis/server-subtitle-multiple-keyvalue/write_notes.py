from pathlib import Path
import json
O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));s=(O/'contract.md').read_text(encoding='utf8')
body=s.split('## 10103130 — SubtitleMultiple_KeyValueNumbersAndTimes\n\n',1)[1].split('## Границы и воспроизведение',1)[0]
paths=['decompiled/server/partial-pass/functions/0x10103130.c','analysis/server-subtitle-multiple-keyvalue/contract.md','analysis/server-subtitle-multiple-keyvalue/evidence.json']
for group in ['source_c','ranges','support_documents']:
 for r in e[group]:
  if r['path']not in paths:paths.append(r['path'])
n=dict(module='server',address='0x10103130',proposed_name='SubtitleMultiple_KeyValueNumbersAndTimes',subsystem='subtitles',summary_ru='Обрабатывает64 точных ключа subtitle number/time, записывает EAX integer или ST0→float32, делегирует прочие ключи и подтверждает пересечение subtitletime32 с current index.',confidence='high',evidence_paths=paths,details_ru=[x.replace('\n',' ')for x in body.strip().split('\n\n')])
(O/'notes.json').write_text(json.dumps(dict(functions=[n],subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
