"""Authoring helper: build four curated cards from the reviewed local contract."""
from pathlib import Path
import json,re
OUT=Path(__file__).resolve().parent
doc=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
names={'100a2050':'CCoFClothesMenu::Use','100a24b0':'CCoFCoopStats::Use','100a2710':'CCoFCredits::Use','100a51c0':'CCoFStats::Use'}
summaries={
'100a2050':'Выбирает первого игрока, сжимает 12 unlock flags одежды, управляет именованными Simon/camera targets и отправляет Clothes только при value==0.',
'100a24b0':'Планирует перезапуск кампании, пишет special48 для каждого из четырёх player slots и повторяет broadcast BeatCoop/CoopStats с точным порядком статистики.',
'100a2710':'Формирует путь титров, обходит игроков, вычисляет ending/reward flags, обновляет общий settings-файл и отправляет Credits; special latches общие для цикла.',
'100a51c0':'Собирает 32 unlock flags и отдельную шкалу ранга для экрана статистики, с условной заменой маски на1000000; посылает Credits с marker1.'}
def paragraphs(s):return [p.replace('\n',' ') for p in s.strip().split('\n\n') if p.strip()]
common='ECX=this, четыре stack-аргумента Use, RET10h; native RTTI/vtable+e8 подтверждают владельца. Reader100dd000 возвращает AL, writer100f2ed0(mask,0,flag47,flag48) пишет true в общий scriptsettings.dat, incoming ECXplayer helper не читает. Ошибка записи в этих callers не проверяется. См. полную таблицу wire и границы в contract.md.'
rows=[]
for a,name in names.items():
 section=re.search(r'^## '+a+r' — .*?\n\n(.*?)(?=^## |\Z)',doc,re.S|re.M)[1]
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-unlock-callers/{a}-0.asm','analysis/server-unlock-callers/evidence.json','analysis/server-unlock-callers/contract.md','analysis/server-unlock-settings/contract.md','analysis/server-unlock-settings/evidence.json','analysis/network/usermessage-registry.json']
 # Directly relevant support has native byte evidence in this packet; navigation-only owners are excluded.
 for r in e['source_c']:
  if not r.get('primary') and not r.get('scope'):
   paths.append(r['path'])
 for r in e['ranges']:
  if r['entry']!='0x'+a and not r.get('scope') and r['entry'][2:] not in e['primary']:paths.append(r['path'])
 details=[common]+paragraphs(section)
 if a in ['100a2710','100a51c0']:
  details+=paragraphs(doc.split('## Credits wire layout: общий порядок двух отправителей\n\n',1)[1].split('\n## ',1)[0])
  details+=paragraphs(doc.split('## Поддерживающие score helpers и оставшиеся границы\n\n',1)[1].split('\n## ',1)[0])
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='menu' if a=='100a2050' else 'saving',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=details))
(OUT/'notes.json').write_text(json.dumps({'functions':rows,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(rows),'cards')
