# Слух и запахи монстров: consumers и producers звукового пула

Статический разбор12 original server actual C entries. Native SHA, bounded ASM, RTTI трёх классов, ENTVARS/MONSTER/четыре PLAYER descriptors и literal bytes сохранены в evidence.json. DLL/игра не запускались; код игры и ресурсы не менялись. Все offsets/адреса hex; величины8192/1000/400/384/512 — десятичные.

## Навигация и модель данных

Основа — [CSoundEnt pool](../server-sound-entity/contract.md):64 записи, index-1 sentinel; record+0 origin,+c type,+10 signed integer volume,+14 absolute expiry,+18 active/free next,+1c audible next. В данном пакете есть три consumers, обновление reserved player record, три danger producers гранаты, scent producer gib и необходимые mask/sensitivity/bounds helpers. Новых allocation/освобождения pool здесь нет.

```text
player100f86e0 → reserved slot(IndexOfEdict-1): origin,type,volume
CGib WaitTillLand1008c9c0 → InsertSound(type10h,384,25s)
CGrenade DangerSoundThink100b1360 → InsertSound(type20h,speed,0.2s)
CGrenade PreDetonate100b1b70 → InsertSound(type20h,400,0.3s)
CGrenade TumbleThink100b21a0 → InsertSound(type20h,400,0.1s)
InsertSound10100820 → active pool → Listen100bfae0
Listen → monster+2d4 head /+2d8 type union /+180 conditions
       → record+1c общая временная chain
BestSound100c1400 или BestScent100c1310 → nearest slot pointer
```

Native CGenericMonster vtable101ce36c: +1041000d5a0 (origin+view_ofs через output-pointer и EAX), +1e8 mask0, +1ec BestSound,+1f0 BestScent,+1f4 ST0 sensitivity1. CGrenade101ce8e0 имеет те же consumers и multiplier, но mask7. CGib101ac480 и обе эти таблицы используют IsInWorld10017660 в+cc и scheduler1000e1f0 в+8. Полученные slots не означают, что каждый callback вызывается для каждого класса в runtime.

MONSTER native descriptors подтверждают conditions+180, state+224; ранее проверенный scheduler contract связывает schedulePointer+230. Поля+2d4 и+2d8 здесь названы по прямым read/write consumer, а не по внешнему SDK. Schedule+0c — mask, который Listen пересекает с virtual mask. Default mask0 generic monster не допускает запись, но cycle/NULL ошибки обхода остаются возможны: mask0 не означает ранний выход из active traversal.

## Порядок и числовые контракты

В Listen accepted records помещаются в голову audible chain, перезаписывая ИХ общий+1c. Для стабильной корректной active chain audible order получается обратным; другой monster может перезаписать эти links. Best выбирает первый строго ближайший элемент (ties не заменяют), а не самый громкий/новый. BestSound измеряет от virtual104, BestScent — от origin. Дополнительный строгий предел8192 существует даже при большем радиусе Listen.

Сравнения с NaN приведены по ASM при продолжающемся исполнении: Listen отбрасывает unordered radius/distance, Best не выбирает unordered distance, IsInWorld не отбрасывает отдельный unordered component. Исключения FP/MXCSR и CRT sqrt error fallback1016be90 не моделировались в runtime. Расчёт norms не заменён обещанием double precision: квадраты/суммы native float32, затем sqrt double, затем float32. Danger speed конвертируется в int после этого округления.

## Оставшиеся границы

- Grenade BounceTouch/Explode/Detonate/Smoke и contact/remote setup продолжены в [grenade-lifecycle](../server-grenade-lifecycle/contract.md). Radius-damage core продолжен в [radius damage](../server-radius-damage/contract.md). Открыты concrete target damage callbacks, timed producer, все weapon callers и engine physics/lifetime; здесь описана граница sound writers.
- Полный lifecycle player field24e8, deadline22a0, внешние writers дополнительного type и flash; caller100ead70 уже REVIEW в другом пакете, но полный player noise feedback не подменён слухом монстра.
- Все derived virtual sound masks/sensitivity/eye positions; native таблицы трёх классов не исчерпывают иерархию.
- Конкретные AI schedule реакции после выбора best, ширина повреждённых цепей, управление lifetime между разными Listen, фактический engine frame/order и occlusion за пределами этих функций. Здесь нет wall trace; это не утверждение, что любой внешний AI код никогда не проверяет видимость.
- Звуки для игрока/EmitSound/irrKlang не входят в данные CSoundEnt. Размер pool, время expiry и воспроизводимая громкость не смешиваются.


## 0x100bfae0 — CBaseMonster_ListenBuildAudibleChain

Фильтрует active sound pool по mask и радиусу, строит audible chain и conditions монстра.

Thiscall без stack args, RET. Сначала conditions+180 &= FFF9FFBFh (сбрасывает40h/20000h/40000h), audibleHead+2d4=-1, audibleTypes+2d8=0. Получает mask через virtual1e8; при schedulePointer+230!=NULL AND с schedule+0c. Затем10100560(activeHead), повторный сброс тех же conditions и virtual1f4 hearing multiplier в ST0 с округлением FSTP float32. Multiplier вычисляется один раз, даже при пустом pool.

Индексы — signed integer sentinel-1, не float/-NAN псевдокода. Для каждого slot10100910(index): при slot!=NULL и (slot.typeDWORD & mask)!=0 вызывает virtual104(this,outVector), использует возвращённый EAX pointer. В конкретных сохранённых таблицах104=1000d5a0 (origin+view_ofs). d вычисляется из float32 delta/squares/(dy²+dx²)+dz², затем double sqrt и float32 result. Radius=float32(float32(signed volume)*multiplier). COMISS(radius,d)/JB отвергает radius<d и unordered; equality принимается. При +Inf radius и +Inf d equality также принимается, если выполнение продолжается.

На acceptance slot.audibleNext+1c=старый monster.audibleHead; predicate101005f0(type&27h) даёт condition20000h. Если predicate0, ставит40000h и дополнительно40h при type&18h. Затем audibleTypes OR ВЕСЬ typeDWORD, audibleHead=current. Смешанный sound+scent type идёт в sound ветвь; неизвестный bit тоже может дать scent condition, если virtual mask его допустил. Явного IsScent58h в этой функции нет.

На каждом шаге next=slot+18; guard NULL не спасает: native null branch прыгает к чтению [NULL+18]. Нет cycle/bounds guard сверх10100910, проверки expire/type0 отдельно, wall trace, PVS или playback. Общий record.audibleNext изменяется, поэтому последующий Listen другого monster способен переписать цепочку предыдущего. При валидной неизменной active chain порядок accepted индексов в audible chain обратный.

Support100c2970 вызывает Listen напрямую после virtual124 только когда state+224 не0,5,8, затем маскирует conditions результатом virtual1dc. Эти последующие правила и все overrides не объявляются полностью восстановленными.

## 0x100c1310 — CBaseMonster_BestScentWithin8192

Выбирает ближайшую scent-запись из audible chain по расстоянию от pev.origin.

Thiscall, RET, EAX slotPointer либо0. Начальный bestIndex=-1, bestDistance=8192.0f. Пустой audibleHead+2d4==-1 печатает Alert2 и возвращает0. Каждый integer index разрешает10100910 и БЕЗ NULL guard вызывает101005e0 с ECX=slot; scent predicate читает low byte type&58h.

Distance считается от pev.origin, не от virtual104/EyePosition. Native float32 delta/squares/sum→double sqrt→float32; только COMISS(bestDistance,d)/JBE-not-taken (ordered d<bestDistance) обновляет выбор. Ровно8192, NaN и +Inf не выбираются. При равных расстояниях сохраняется первый элемент audible traversal; по обратному active порядку это не обещание newest sound.

Идёт по slot+1c до integer-1; в конце bestIndex>=0 повторно разрешает pointer через10100910. Нет проверки expire, текущего volume/hearing multiplier, нового schedule mask, occlusion или cycle cap. Существующая audible chain предполагается корректной и не переписанной другим consumer. Нижний sqrt error helper1016be90 оставлен внешней зависимостью.

## 0x100c1400 — CBaseMonster_BestSoundWithin8192

Выбирает ближайшую audible-запись по расстоянию от virtual104 позиции глаз.

Thiscall, RET, EAX slotPointer либо0. BestDistance8192.0f, bestIndex=-1. При пустой audibleHead печатает Alert2 с classname из pev+stringbase и возвращает0. Для slot!=NULL проверяет101005f0(type&27h); только затем вызывает virtual104(out) с ECX=monster и использует возвращённый EAX pointer.

Distance float32 delta/squares/sum→double sqrt→float32; обновление только при ordered d<bestDistance. Equal/NaN/Inf не заменяют выбор; расстояние8192 исключено. Потом next=slot+1c. Видимый NULL guard пропускает фильтр/расчёт, но НЕ чтение next: null вызывает dereference[0+1c]. В конце повторно10100910(bestIndex), либо0.

Повторно не применяет volume, expiry или virtual mask: фильтр основан на уже построенном audible list. Радиус8192 — дополнительный предел выбора, отличающийся от Listen. Никакого WAV playback, trace или автоматической реакции на выбранный звук в этом теле нет.

## 0x100b06a0 — CGenericMonster_SoundMaskZero

Возвращает DWORD0 как sound mask конкретного CGenericMonster.

XOR EAX,EAX; RET. ECX не читается, состояние не меняет. Native CGenericMonster vtable101ce36c+1e8 указывает сюда, поэтому Listen этой таблицы не принимает ни один type при обычном выполнении. Это не универсальная маска всех monster classes и не отключение playback.

## 0x100bf850 — Monster_DefaultSoundMaskSeven

Возвращает DWORD7 для virtual sound mask в подтверждённой таблице CGrenade.

MOV EAX,7; RET. Три младших type bits допускаются, других проверок нет. Native CGrenade vtable101ce8e0+1e8 подтверждает binding; inherited owner name из одного этого тела не устанавливается. Это маска AND в Listen, не радиус и не condition flags.

## 0x10013530 — Monster_DefaultHearingSensitivityOne

Возвращает коэффициент слуха1.0 через x87 ST0.

Ровно FLD1; RET. Не записывает EAX и не возвращает bool1 в integer ABI. Native CGenericMonster/CGrenade vtable+1f4 указывают сюда; Listen после indirect call делает FSTP DWORD и умножает signed integer volume на float32 multiplier. Для других vtables возможны overrides.

## 0x10017660 — CBaseEntity_IsWithinPositionVelocityLimits

Проверяет строгие finite bounds origin±4096 и velocity±2000; NaN сравнения обходят reject.

Thiscall, RET, EAX0/1. Сначала origin x,y,z против верхнего4096, затем нижнего-4096; потом velocity x,y,z против2000 и-2000. Любое ordered значение>=верхней границы либо<=нижней возвращает0, равенство исключено. Проверка по компонентам, не длине вектора и не BSP contents.

Каждый reject использует COMISS/JAE. Unordered ставит CF=1 и JAE НЕ выполняется: NaN component сам по себе проходит обе проверки при masked exceptions/продолжающемся исполнении. Остальные finite components всё равно проверяются; ±Inf отвергаются. Буквальный Ghidra C с конъюнкцией строгих сравнений не передаёт этот NaN контракт.

Native slotcc в CGenericMonster, CGrenade и CGib. Нет NULL guard, clamp, engine trace или записи координат. Grenade/Gib callers при0 вызывают10119900(this), который выполняет lifecycle cleanup/mark-for-remove, не немедленный free в самом predicate.

## 0x100f86e0 — CBasePlayer_UpdateReservedAISound

Обновляет зарезервированный AI sound игрока, задаёт target volume и уменьшает weapon flash.

Thiscall, RET. Slot=10100910(101005c0(pev.edict)), то есть IndexOfEdict-1. NULL→Alert1 Client lost reserved sound и return. Иначе type=0. Если pev.flags&200h, speed=CVTTSS2SI(float32(sqrt(float32((vx²+vy²)+vz²)))); signed clamp сверху512, без lower clamp. Иначе speed=0. При button lowBYTE&2 добавляет100 (32-bit arithmetic).

Безусловно this.weaponVolume+2294=1000. Если speedPlusJump<1000: targetVolume+2290=1000 и slot.type|=1; иначе targetVolume=speedPlusJump. Для обычного finite velocity cap512 плюс100 всегда меньше1000, включая airborne speed0: target1000 и combat bit1 выставляются независимо от прежнего weaponVolume. Это native поведение, не SDK ожидание.

WeaponVolume затем=CVTTSS2SI(float32(float32(1000)-float32(frametime*250))). При следующем вызове опять присваивается1000, прежний weaponVolume здесь не используется. Slot volume V: если target>V→target; если equal→V; если target<V→trunc(float32(float32(V)-float32(frametime*250))), и если этот результат signed<target, выбирает0 (НЕ target). Далее DWORD this+24e8!=0 принудительно даёт итоговый slot volume0, но не очищает type.

При ordered now>this.float22a0 очищает extraSoundTypes+2298; equality/NaN оставляют. Копирует pev.origin, пишет итоговый volume, OR type с extraSoundTypes и4. Expire+14 и links+18/+1c записи не меняет. WeaponFlash+229c=trunc(float32(float32(oldFlash)-float32(frametime*256))), negative result→0. Нет WAV/MessageBegin, изменения locomotion или гарантии кадровой частоты.

Native PLAYER descriptors102181d8..10218208 подтверждают имена m_iTargetVolume, m_iWeaponVolume, m_iExtraSoundTypes, m_iWeaponFlash и offsets2290/2294/2298/229c. Роль DWORD24e8 и источник deadline22a0 вне этого тела не названы произвольно. CVTTSS2SI NaN/Inf/out-of-range при masked invalid даёт INT_MIN, сравнения signed; общая безопасность произвольных данных не заявляется.

## 0x1008c9c0 — CGib_WaitTillLandAndInsertScent

При остановке gib планирует отложенное удаление и добавляет scent type10h на25 секунд.

Thiscall, RET; native exported method и CGib factory/RTTI. Сначала virtualcc; при0 вызывает10119900(this) и выходит. Затем velocity xyz сравнивается с shared vector10222f34..3c, каждый компонент ordered equality; NaN любого operand не равен и ведёт в движущуюся ветку.

Все три равны: Think+78=1008ac50 SUB_StartFadeOut, virtual8(this.float+e8). Потом если DWORD this+dc!=-1: InsertSound(10h,&pev.origin,384,25.0f). Поле+dc используется как sentinel gate; полный producer его значения не разобран здесь. При неравенстве только virtual8(0.5f), callback+78 сохраняется.

Нет проверки FL_ONGROUND или фактического касания: имя WaitTillLand не меняет критерий точного velocity comparison. Shared vector не доказан runtime нулевым. SUB_StartFadeOut уже REVIEW: после выполнения только schedule SUB_Remove через0.2f, без renderamt fade. Срок scent25 независим от gib lifetime+e8; запись pool не удаляется самим gib callback.

## 0x100b1360 — CGrenade_DangerSoundThink

Добавляет краткий danger sound впереди гранаты, перепланирует Think и замедляет её в воде.

Thiscall, RET. Virtualcc0→10119900(this) и return. Иначе originLead=origin+velocity*0.5f покомпонентно float32. Speed берётся от исходной velocity: float32 squared sum→double sqrt→float32→CVTTSS2SI. InsertSound(20h,&originLead,speedInt,0.2f). Четвёртый аргумент duration заранее PUSHed в100b1391..1398; Ghidra C ошибочно теряет его у InsertSound и приписывает sqrt fallback.

После вызова virtual8(0.2f) с тем же float bits3e4ccccd. Затем если pev.waterlevel+1c4!=0 и signed watertype+1c8>-17, умножает все velocity components на0.5. Запись звука использовала скорость и позицию ДО этого замедления. Не задаёт Think+78, не проверяет detonation time, не обновляет старый slot: каждая успешная InsertSound выделяет новую запись.

Никакого clamp speed/finite проверки здесь нет, кроме virtual IsInWorld, который NaN не отвергает; invalid conversion при masked invalid может дать отрицательный INT_MIN radius. Воспроизведение аудио и последующая реакция monsters не входят в этот callback.

## 0x100b1b70 — CGrenade_PreDetonateInsertDanger

Добавляет danger sound и назначает Detonate через1.0f.

Thiscall, RET. InsertSound(20h,&pev.origin,400,0.3f); затем Think+78=100b1490 и virtual8(1.0f). Native значения длительности3e99999a и задержки3f800000 различны: запись живёт0.3, scheduler запрошен на1.0. Нет IsInWorld, проверки результата InsertSound или продления звука до Detonate.

100b1490 — callback target по native immediate и экспортному имени Detonate; полное тело детонации этим пакетом не закрывается. При полном pool warning внутри InsertSound не отменяет назначение Think. Точный момент engine callback остаётся зависимостью scheduler.

## 0x100b21a0 — CGrenade_TumbleThinkAndPredictDanger

Обновляет анимацию гранаты, прогнозирует danger position перед detonation и назначает callback.

Thiscall, RET. Virtualcc0→10119900(this) и выход. Иначе1000eda0(this,0.0f), возвращённый ST0 снимается FSTP ST0; затем virtual8(0.1f). Support animation helper обновляет frame/animtime и completion, не перемещает гранату.

При ordered now>float32(pev.dmgtime+1e8-1.0f) вычисляет remain=float32(dmgtime-now) и predicted=origin+velocity*remain, каждый шаг float32. InsertSound(20h,&predicted,400,0.1f). При equality/NaN первый gate не срабатывает. Нет clamp remain: уже после deadline он может быть отрицательным, предсказывая точку позади velocity.

Затем свежий now сравнивается с dmgtime: COMISS/JB пропускает при now<deadline или unordered; иначе Think+78=100b1490. При equality назначает Detonate, но НЕ вызывает сразу и не заменяет ранее запрошенную задержку0.1f. Ни sound insertion failure, ни callback assignment не прерывают water damping.

Если waterlevel!=0 и signed watertype>-17, velocity*=0.5f и pev.framerate+13c=0.2f. Остальные типы/нулевой level не меняют эти поля; выход из воды сам framerate обратно не восстанавливает. OriginLead/sound рассчитаны до damping. Все full explosion/BounceTouch/Smoke эффекты остаются отдельно.
