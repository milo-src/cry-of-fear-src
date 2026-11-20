from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));s=(O/'contract.md').read_text(encoding='utf8')
rows=[('10091300','CofTriggerMobile_GetOrCreatePrivate','Создаёт или возвращает CCofTriggerMobile; normal pointer ABI и native failure paths.'),('100aa8c0','trigger_cofmobile_ExportThunk','Экспорт trigger_cofmobile tail-переходит в concrete factory.'),('1009e090','CofTriggerMobile_SpawnHiddenNonSolid','Присваивает solid0, effects80 и movetype0 без сброса body-number.'),('100967c0','CofTriggerMobile_KeyValueBodyNumber','Читает bodynumber как integer без clamp, остальные ключи передаёт base handler.'),('1009aff0','CofTriggerMobile_Save','Сохраняет inherited state и integer m_iszBodyNumber; writer EAX не является подтверждением успешной записи.'),('1009a690','CofTriggerMobile_Restore','После inherited restore читает собственный integer body-number, сохраняя результат reader.'),('100a7c50','CofTriggerMobile_UsePublishSMS','Публикует номер SMS/low status каждому игроку с подходящим телефоном; первый match каждой inventory цепочки.'),('100a7480','CofPhoneDisable_UseMarkInventoryPhones','Отключает все найденные телефоны первого player; меняет bodygroups, посылает body и лишь затем сохраняет его номер.'),('100e9ff0','Player_DispatchPhoneNumberAndSpecialCall','Сначала вызывает map phonecheck, затем при911/112 и локальных guards запускает special-call state/animation.')]

paths=['analysis/server-mobile-player-state/contract.md','analysis/server-mobile-player-state/evidence.json']
for group in ['source_c','ranges','support_documents']:
 for x in e[group]:
  if x['path']not in paths:paths.append(x['path'])
shared=s.split('Конкретная связь',1)[1].split('## 0x',1)[0];shared='Конкретная связь'+shared
out=[]
for a,name,summary in rows:
 body=re.search(r'## 0x'+a+r'[^\n]*\n\n(.*?)(?=\n## |\Z)',s,re.S).group(1)
 details=[x.replace('\n',' ')for x in body.strip().split('\n\n')]
 if a=='10091300':details=[x.replace('\n',' ')for x in shared.strip().split('\n\n')]+details
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons',summary_ru=summary,confidence='high',evidence_paths=paths,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=out,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
