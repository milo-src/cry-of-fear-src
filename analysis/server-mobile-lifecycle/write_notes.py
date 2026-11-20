from pathlib import Path
import json,re
O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'));s=(O/'contract.md').read_text(encoding='utf8')
rows=[('10052e30','Mobile_GetOrCreatePrivate','Возвращает existing private object или выделяет CMobile размером0x208; native failure paths не защищены.'),('10053e50','weapon_mobile_ExportThunk','Экспорт weapon_mobile tail-переходит в CMobile factory, сохраняя stack/EAX ABI.'),('10053150','Mobile_GetItemInfo','Записывает id2 и параметры телефона без ammo/clip; output flags+24 остаётся нетронутым.'),('10053880','Mobile_Precache','Последовательно precache трёх fixed models, 19 sounds и до двух optional models.'),('10053bc0','Mobile_Spawn','Назначает classname/id/model/clip, fall callbacks и script; stored worldmodel остаётся default при custom SetModel.'),('10052e90','Mobile_Deploy','Всегда отправляет body, сбрасывает sprint state и выбирает последовательность2/7 для общего Deploy.'),('10053bb0','Mobile_ConstantOneSlot1cc','Возвращает полный EAX1; native CMobile vtable связывает constant со slot1cc.')]
paths=['analysis/server-mobile-lifecycle/contract.md','analysis/server-mobile-lifecycle/evidence.json']
for group in ['source_c','ranges','support_documents']:
 for x in e[group]:
  if x['path']not in paths:paths.append(x['path'])
shared=s.split('Native factory',1)[1].split('## 0x',1)[0];shared='Native factory'+shared
out=[]
for a,name,summary in rows:
 body=re.search(r'## 0x'+a+r'[^\n]*\n\n(.*?)(?=\n## |\Z)',s,re.S).group(1)
 details=[x.replace('\n',' ')for x in body.strip().split('\n\n')]
 if a=='10052e30':details=[x.replace('\n',' ')for x in shared.strip().split('\n\n')]+details
 out.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons',summary_ru=summary,confidence='high',evidence_paths=paths,details_ru=details))
(O/'notes.json').write_text(json.dumps(dict(functions=out,subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
