from pathlib import Path
import json
O=Path(__file__).resolve().parent
rows=[]
def add(a,name,summary,*details):
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='monsters',summary_ru=summary,confidence='high',details_ru=list(details),evidence_paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-sound-entity/{a}-0.asm','analysis/server-sound-entity/evidence.json','analysis/server-sound-entity/contract.md']))
add('101004f0','CSoundEnt_ResolveOrAllocatePrivateData','Возвращает существующий private object либо выделяет CSoundEnt размером 8ECh.',
 'cdecl(entvars*), normal result EAX despite void Ghidra. NULL pev вызывает engine CreateEntity; success даёт pev=edict+80h. Если pev.containingedict+20ch!=NULL и edict.private+7ch!=NULL, возвращается existing pointer без проверки класса и повторной инициализации.',
 'Иначе engine PvAllocEntPrivateData(edict,8ECh). Success записывает vtable101ded8c и object+4=pev; RTTI подтверждает CSoundEnt. Zero-fill и Spawn не выполняются. CreateEntity failure приводит к чтению NULL+20ch; allocation failure — к записи [NULL+4], не безопасному return0.',
 'World10120eb0 сохраняет EAX в singleton10230d70 и сразу вызывает virtual2c до позднего NULL warning. Сам factory singleton не присваивает; экспорт soundent10100a60 является JMP сюда. Ручное создание дополнительной soundent не гарантирует this==singleton, хотя Initialize использует оба объекта.')
add('10100560','CSoundEnt_ActiveListHead','Возвращает индекс начала active chain либо -1 при отсутствии singleton.',
 'cdecl(), RET, EAX32: global10230d70==NULL → FFFFFFFFh, иначе DWORD singleton+e0. Никаких проверок диапазона/принадлежности цепочке. Monster Listen100bfae0 использует результат как integer index; представление -NAN в его Ghidra C — ошибочный float тип, не плавающий sentinel.')
add('10100580','CSound_ClearAllFields','Инициализирует все восемь DWORD записи звука, включая оба link-поля.',
 'Thiscall(record*), RET. Origin+0/+4/+8 копируется из globals10222f34..3c, type+0c=0, volume+10=0, expire+14=0.0, listNext+18=-1, audibleNext+1c=0. Это не memset32: origin берётся из изменяемого общего вектора.',
 'Initialize10100730 вызывает с ECX=this+ec+index*20h. Копирование native globals не доказывает, что они нулевые во всех runtime состояниях. На момент очистки audibleNext равен0, а не -1.')
add('101005c0','CSoundEnt_ClientReservedIndex','Преобразует edict в индекс зарезервированного client sound: IndexOfEdict-1.',
 'cdecl(edict*), RET; engine IndexOfEdict slot71 и DEC EAX. Нет проверки NULL, client range, singleton или факта резервирования. Индекс0 world превращается в -1; фактическая проверка0..63 выполняется только при последующем10100910.',
 'Support100f86e0 обновляет запись игрока по этой паре helpers;1001cc90 очищает её при disconnect через101008e0. Engine return semantics вне этого wrapper не переопределяются.')
add('101005e0','CSound_IsScentMask','Проверяет наличие scent bits58h в младшем байте type.',
 'Thiscall(record*), RET. TEST BYTE[ECX+0c],58h; MOV EAX,0; SETNE AL — результат весь EAX точно0/1. NULL guard отсутствует. Другие биты DWORD не читаются.',
 'Support100c1310 PBestScent вызывает helper и идёт по record+1c. Маски58h и27h не пересекаются, но запись с несколькими битами может удовлетворять обоим predicates. Названия отдельных bits по одному helper не устанавливаются.')
add('101005f0','CSound_IsAudibleMask','Проверяет наличие audible bits27h в младшем байте type.',
 'Thiscall(record*), RET. TEST BYTE[ECX+0c],27h; MOV EAX,0; SETNE AL, весь EAX0/1. NULL/range guard отсутствует; upper24 type bits игнорируются.',
 'Monster Listen100bfae0 использует predicate для condition20000h; PBestSound100c1400 фильтрует им audible chain. Это классификация записи для AI, не вызов playback или проверка слышимости пользователем.')
add('10100620','CSoundEnt_UnlinkActiveAndPushFree','Удаляет индекс из active chain и помещает его в голову free chain singleton.',
 'cdecl(index,previousIndex), RET. NULL singleton → ничего. Сначала next=slot[index].listNext. previous==-1 заменяет activeHead; иначе previous.listNext=next. Затем slot[index].listNext=freeHead и freeHead=index.',
 'Не проверяет index/previous диапазон, принадлежность active chain, совпадение previous, повторное освобождение или reserved status. Не очищает origin/type/volume/expire/audibleNext и не освобождает память. Caller Think сохраняет следующий индекс до вызова; this данного caller должен совпадать с singleton для согласованности.')
add('10100680','CSoundEnt_AllocSoundSlot','Снимает первый свободный индекс и вставляет его в голову active chain.',
 'Thiscall(pool*), RET, EAX signed index. Если freeHead+dc==-1, Alert(type1,"Free Sound List is full!\\n") и EAX=-1. Иначе freeHead=slot[index].listNext, slot[index].listNext=activeHead, activeHead=index, result=index.',
 'Не ищет oldest sound, не расширяет pool, не проверяет stale/corrupt links, не обнуляет payload или audibleNext. После нормального Initialize раздаёт0,1,2...; при освобождении используется LIFO. Ошибка не возвращает slot pointer.')
add('101006d0','CSoundEnt_CountList','Считает free(type1) или active(type2) chain до sentinel-1.',
 'Thiscall(pool*,listType), RET4, EAX count. Для1 старт=this+dc; для2=this+e0. Начальный -1 даёт0, иначе цикл count++ и next по pool+104+index*20h.',
 'Неизвестный listType вызывает Alert, но НЕ прекращает функцию: исходный аргумент используется как стартовый индекс. Таким образом -1 после warning возвращает0; другие invalid values способны читать вне pool или зациклиться. Нет bounds/cycle guard и cap64 на число обходов.')
add('10100730','CSoundEnt_InitializePoolAndReserveClients','Создаёт цепочку64 свободных slots и резервирует первые maxClients записей.',
 'Thiscall(pool*), RET. this.freeHead=0, activeHead=-1;64 вызова ClearAllFields с ECX=this+ec+i*20h. Каждому listNext=i+1, затем последнему slot63.listNext=-1 записью this+8e4. Полный pool: offsetec, stride20h, размер800h; объект заканчивается на8ec.',
 'Далее signed i<gpGlobals.maxClients(+90h): AllocSound вызывается с ECX=GLOBAL singleton, а не this. Каждый выделенный global slot получает expire=-1.0f. При singleton==this и стабильном N в0..64 active chain становится N-1→...→0→-1, freeHead=N либо-1 при64. Отрицательное/нулевое maxClients не резервирует; значение>64 вызывает failure после64 и ранний выход.',
 'На failure Alert Client Reserve и return: rollback отсутствует, debug flag+e8 не обновляется. После успеха CVarGetFloat(displaysoundlist) ST0 округляется float32; flag=1 ТОЛЬКО при ordered equality1.0, NaN/остальные значения→0. Предыдущий diagnostic count+e4 не сбрасывается. Повторный Initialize разрушает существующие payload/chains.')
add('10100820','CSoundEnt_InsertSound','Выделяет AI sound record и сохраняет type, origin, volume и абсолютное время истечения.',
 'cdecl(typeDWORD,originPointer,volumeDWORD,durationFloat), RET, гарантированного result нет. NULL singleton → ничего. AllocSound использует global singleton. При -1 печатает второе warning InsertSound и выходит; другой slot не вытесняет.',
 'Success копирует12 bytes origin без NULL guard, type в+0c, volume в+10. Expire+14=float32(gpGlobals.time+duration) через ADDSS. Никаких clamp, category validation, duration>=0, координат/volume finite check нет. listNext уже установлен allocator; audibleNext остаётся прежним.',
 'Duration=-1 не означает бессрочность: sentinel зависит от итогового expire==-1.0. NaN expire сохраняется Think при продолжающемся исполнении. Здесь нет EmitSound, имени WAV, network message либо direct monster callback. Support CGib::WaitTillLand1008c9c0 передаёт type10h, origin pointer, volume384, duration25.0f после своего landing/color gate.')
add('101008c0','CSoundEnt_ObjectCapsNoSave','Возвращает фиксированную маску80000000h из virtual40 CSoundEnt.',
 'MOV EAX,80000000h; RET, this не читается. Native vtable101ded8c+40. Совместимая семантика FCAP_DONT_SAVE; фактический save-dispatch и судьба singleton после загрузки здесь не устанавливаются. Не означает вызов cleanup.')
add('101008d0','CSoundEnt_PrecacheNoOp','Пустой Precache slot30 у CSoundEnt.',
 'Единственная инструкция RET0. Нет записи полей, загрузки ресурсов, вызова engine, определённого результата EAX. Spawn10100960 этот slot самостоятельно не вызывает.')
add('101008e0','CSound_ResetClientPayloadAndTerminateLink','Очищает origin/type/volume и завершает listNext, сохраняя expire и audibleNext.',
 'Thiscall(record*), RET. Origin копируется из shared vector10222f34..3c; type+0c=0, volume+10=0, listNext+18=-1. Поля expire+14 и audibleNext+1c НЕ записываются. Это отличается от ClearAllFields10100580.',
 'Не меняет pool freeHead/activeHead и не выполняет unlink. В support ClientDisconnect1001cc90 ECX=SoundPointerForIndex(IndexOfEdict-1). Для reserved record expire=-1 сохраняется; при нахождении внутри active chain запись listNext=-1 может отсечь достижимость её прежнего хвоста. Последующие helper вызовы здесь этот хвост не восстанавливают; общий lifetime игры не объявляется доказанной утечкой.')
add('10100910','CSoundEnt_SoundPointerForIndex','Возвращает адрес slot только для signed index0..63 и существующего singleton.',
 'cdecl(index), RET, EAX pointer/0. NULL singleton→0 без warning. Signed index>63→Alert too large и0; index<0→Alert Index<0 и0; иначе singleton+ec+index*20h.',
 'Не проверяет active/free membership, expired flag, reserved range или validity singleton. Даже свободный slot возвращается. После pointer0 не все AI consumers безопасны: Listen100bfae0 всё равно читает next; PBestScent100c1310 вызывает predicate без NULL guard.')
add('10100960','CSoundEnt_Spawn','Делает entity несолидной, инициализирует pool и планирует первый Think через1.0f.',
 'Thiscall, RET; native vtable+2c. Пишет pev.solid+10c=0, вызывает10100730(this), затем virtual8(1.0f) без проверки результата Initialize. Отдельного Precache, модели, movetype, classname, global assignment и Think field+78 нет.',
 'Concrete virtual8=1000e1f0→virtual4=10017110(delay,0), уже REVIEW scheduler. Callback приходит через DispatchThink10016a30→virtuale0=10100990; CSoundEnt не обязан устанавливать member Think+78 для этого override. Срок1.0 — запрос scheduler, не гарантия точного engine frame.')
add('10100990','CSoundEnt_ThinkExpireAndReport','Перепланирует Think на0.3f, освобождает истёкшие active records и опционально печатает счётчики.',
 'Thiscall, RET, native virtuale0. Сначала virtual8(0.3f bits3e99999a), потом проход this.activeHead с previous=-1. Native COMISS(now,expire)/JB сохраняет slot при now<expire ИЛИ unordered; если сравнение не ушло, ordered expire==-1.0 также сохраняет. Поэтому NaN времени/expire не удаляет запись при продолжающемся исполнении, в отличие от буквального Ghidra C. Равенство now==expire удаляет, кроме sentinel-1.',
 'В ветви удаления заранее сохраняет current.listNext, затем10100620(current,previous), использующий GLOBAL singleton. Previous обновляется лишь для сохранённого current. Не очищает payload и не удаляет сам sound entity. Указатели/циклы не валидируются.',
 'Если this+e8!=0: delta=CountActive()-this.previousCount(offset e4); Alert(type2,Soundlist-format,activeCount,freeCount,delta), затем previousCount=новыйCountActive(). Учитываются и reserved slots; это не количество проигрываемых WAV. Первый delta зависит от прежнего+e4, Initialize его не сбрасывает. Displaysoundlist читается только Initialize, а не каждый Think.')
add('10100a60','Export_soundent_FactoryThunk','Экспорт soundent является пятибайтовым tail JMP в CSoundEnt factory101004f0.',
 'Native E9 rel32 без frame/собственных записей. Сохраняет cdecl argument и результат EAX target. Ghidra C разворачивает тело factory, но literal export-body не делает allocation сам и не устанавливает singleton. Bound range10100a60..10100a64 inclusive.')
(O/'notes.json').write_text(json.dumps({'functions':rows},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
intro=(O/'contract-intro.txt').read_text(encoding='utf8')
(O/'contract.md').write_text(intro+'\n'+''.join('\n## '+r['address']+' — '+r['proposed_name']+'\n\n'+r['summary_ru']+'\n\n'+'\n\n'.join(r['details_ru'])+'\n' for r in rows),encoding='utf8')
print('Wrote',len(rows),'cards')
