"""Generate catalog cards from the authored, peer-reviewable contracts."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
s=(O/'contract.md').read_text(encoding='utf8')
metadata={'10012a80': ('CBaseButton_Activate', 'Звук, master admission, переход вверх и выбор линейного/углового движения либо немедленного завершения.'), '10012ba0': ('CBaseButton_ButtonBackHome', 'Завершает возврат, вызывает targets/multisource и восстанавливает touch/искры.'), '10012d00': ('CBaseButton_ResponseToTouch', 'Возвращает точный код0/1/2 допуска и возврата по state/stayPushed/toggle.'), '10012d50': ('CBaseButton_ButtonReturn', 'Сбрасывает frame, выбирает движение домой либо общий native tail ButtonBackHome.'), '10012f00': ('CBaseButton_ButtonSpark', 'Планирует следующий spark через RandomFloat, затем вызывает эффект от mins.'), '10012f70': ('CBaseButton_ButtonTouch', 'Обрабатывает касание player с master и отдельной от Use логикой targets.'), '10013090': ('CBaseButton_ButtonUse', 'Проверяет state и таймеры, сообщает о ключевом замке, активирует либо возвращает кнопку.'), '10013220': ('CBaseButton_ButtonUse_IgnorePlayer', 'Отсекает игрока-caller и передаёт остальные вызовы ButtonUse без изменения аргументов.'), '10013f00': ('CBaseButton_ObjectCaps', 'Вычисляет use/toggle/hide bits и вызывает родительский caps только ради побочного эффекта.'), '10015960': ('CBaseButton_TriggerAndWait', 'Завершает нажатие, повторно проверяет master, вызывает targets и назначает возврат/touch.')}
old=json.loads((O/'notes.json').read_text(encoding='utf8')) if (O/'notes.json').exists() else {'functions':[]}
old={r['address'][2:]:r for r in old['functions']}
rows=[]
for a,(name,summary) in metadata.items():
 body=s.split('## 0x'+a+' — ',1)[1].split('\n',1)[1].split('\n## ',1)[0].strip()
 details=[p.replace('\n',' ')for p in body.split('\n\n')if p.strip()]
 evidence=[f'decompiled/server/partial-pass/functions/0x{a}.c']+[p.relative_to(R).as_posix()for p in sorted(O.glob(a+'-*.asm'))]+['analysis/server-button-dispatch/evidence.json','analysis/server-button-dispatch/contract.md']
 evidence=list(dict.fromkeys(evidence+old.get(a,{}).get('evidence_paths',[])))
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='entity-core',summary_ru=summary,confidence='high',evidence_paths=evidence,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=rows,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote',len(rows),'cards:10new')
