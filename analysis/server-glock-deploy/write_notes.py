"""Rebuild six analyst cards from the reviewed local contract; never edit the global ledger."""
from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;R=O.parents[1]
e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
s=(O/'contract.md').read_text(encoding='utf8')
summaries={
'100457d0':'Извлекает Glock: body, first-use byte/hint, sentinel clip, sequence и player-model; возвращает результат общего Deploy.',
'10045b40':'Убирает Glock, условно отменяет suicide callback/состояние, выключает mask4 фонарика и назначает player deadline.',
'10045ac0':'Записывает полную ItemInfo Glock и weapon id3; classname остаётся фактическим borrowed pointer.',
'10047db0':'Проверяет сроки и состояния, планирует переключение тактического фонаря через0.3 и три cooldown через0.66.',
'10047cf0':'Выбирает idle sequence по iron/clip и переносит idle deadline по фактической анимации после callback.',
'1011c1a0':'Полный общий Deploy: допуск, custom textures, viewmodel, ammo wire, sleeve sound, модели, animation extension и сроки.'}
paths=[x['path']for x in e['source_c']+e['ranges']+e['support_documents']]+[(O/'contract.md').relative_to(R).as_posix(),(O/'evidence.json').relative_to(R).as_posix()]
prior=(O/'prior-review.txt').read_text(encoding='utf8');oldpaths=re.findall(r'Основание: (.+)',prior)
out=[]
for a,name,body in re.findall(r'^## 0x([0-9a-f]{8}) — ([^\n]+)\n\n(.*?)(?=^## |\Z)',s,re.M|re.S):
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons',summary_ru=summaries[a],confidence='high',evidence_paths=list(dict.fromkeys(paths+(oldpaths if a=='1011c1a0'else[]))),details_ru=body.strip().split('\n\n')))
assert len(out)==6
(O/'notes.json').write_text(json.dumps(dict(functions=out),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('PASS',len(out),'cards')
