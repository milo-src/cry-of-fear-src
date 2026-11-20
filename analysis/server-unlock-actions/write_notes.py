"""Generate eight curated cards from the local reviewed contract, no global catalog edits."""
from pathlib import Path
import re,json
OUT=Path(__file__).resolve().parent
doc=(OUT/'contract.md').read_text(encoding='utf8')
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
names={'10021730':'CAxe_PlayerInitUnlockGate','100244c0':'CBookLaser_PlayerInitUnlockGate','10027770':'CCamera_PlayerInitUnlockGate','1002c7d0':'CCoFDevCommentary_PlayerInitUnlockGate','1003c420':'CFAMAS_PlayerInitUnlockGate','100931f0':'CCoFDeadCat::CatUse','1009b750':'CCoFHoodie_PlayerInitUnlockGate','100b5960':'CNightVision_PlayerInitUnlockGate'}
summaries={
'10021730':'CAxe: один раз проверяет unlock0x80000; spawnflag1 обходит reader после установки latch.',
'100244c0':'CBookLaser: ставит latch и помечает объект на удаление, если unlock0x200000 закрыт.',
'10027770':'CCamera: проверяет unlock0x100000 только при spawnflag1 и ещё не установленном latch.',
'1002c7d0':'CCoFDevCommentary: сочетает spawnflag1, cvar dev_commentary и unlock0x400000, записывает recipient edict в euser1.',
'1003c420':'CFAMAS: однократная проверка unlock0x40 с deferred removal при AL0.',
'100931f0':'DeadCat Use: shared counter/deadline, проверка0x200 и награда found clothing текущему живому игроку, без settings writer.',
'1009b750':'CCoFHoodie: удаляет уже открытые варианты; selector10..14 реально продолжает проверки следующих масок.',
'100b5960':'CNightVision: при каждом ненулевом player callback проверяет unlock0x1000000, без one-shot latch.'}
common='Original PE SHA751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641. Сохранённые C сверены с полным bounded ASM. Семь gate callbacks имеют native RTTI/vtable+118 и RET4, CatUse — export ordinal49/RET10h. Proposed PlayerInitUnlockGate — описательное имя; original virtual method name не установлен. Reader100dd000 проверяется по AL, ECXplayer внутри reader не используется; файл общий. Remove10119900(this) делает cleanup, ставит flags40000000 и очищает targetname, не немедленный free. Scope — локальные ветви, не все runtime callers/derived effects.'
notes=[]
for a in e['primary']:
 body=re.search(r'^## 0x'+a+r' — .*?\n\n(.*?)(?=^## |\Z)',doc,re.S|re.M)[1]
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-unlock-actions/{a}-0.asm','analysis/server-unlock-actions/contract.md','analysis/server-unlock-actions/evidence.json','analysis/server-unlock-settings/contract.md','analysis/server-unlock-settings/evidence.json','analysis/server-unlock-callers/contract.md']
 for group in ['source_c','ranges']:
  for r in e[group]:
   if r['entry'][2:]not in e['primary']:paths.append(r['path'])
 notes.append(dict(module='server',address='0x'+a,proposed_name=names[a],subsystem='saving',summary_ru=summaries[a],confidence='high',evidence_paths=paths,details_ru=[common]+[p.replace('\n',' ')for p in body.strip().split('\n\n')]))
(OUT/'notes.json').write_text(json.dumps({'functions':notes,'subsystems':[]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('wrote',len(notes),'cards')
