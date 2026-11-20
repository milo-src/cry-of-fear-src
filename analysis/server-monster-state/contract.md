# Monster state, schedule selection, persistence and rush helpers

Статический контракт десяти сохранённых функций оригинального server `hl.dll`.
Игра и DLL не запускались; восстановленный игровой код не использован как доказательство.
Адреса, offsets, masks, task/state IDs здесь hexadecimal, кроме явно указанных
decimal чисел и float-констант. Имена методов предложены для навигации, не являются
восстановленными PDB-символами. Native строки таблиц сохраняются дословно.

## Доказательства и границы

`capture.py` повторяет ограниченный objdump/PE capture с проверкой SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641` до и после чтения.
`evidence.json` содержит пути/хэши C, границы ASM, оригинальные байты, таблицы,
строки и число проверенных строк дизассемблера. Все primary — реальные объявления
с указанным адресом; support не получает новых REVIEW в этом пакете.

Связанный scheduler описан в `analysis/server-monster-scheduler/contract.md`;
сериализатор — в `analysis/server-serializer/contract.md`; маршруты и MakeIdealYaw
разобраны в [server-monster-navigation](../server-monster-navigation/contract.md),
нижние алгоритмы — в [pathfinding, проход04](../server-monster-pathfinding/contract.md).
Полный runtime-граф виртуальных overrides,
все сценарии карты и корректность внешних model/save данных здесь не доказаны.

## Владение и ABI

`monster_generic` 100b0f30 → factory100b05e0 записывает vtable101ce36c.
Её +38/+3c ведут к Generic Save/Restore100b09e0/100b0940, которые вызывают
базовые100c1ec0/100c19a0; +18c=1008ca70, +1ac=100c27c0,
+1b0=100c1f50, +1c0=100b0a40. Это конкретный native пример использования,
не утверждение, что все монстры имеют ту же таблицу.

`scripted_startrush`10115d80 — пятибайтовый JMP10107d70; фабрика создаёт объект
размером dc и записывает101e0104. RTTI COL и type descriptor дают `.?AVCStartRush@@`.
1000abf0/1000b2f0/1000bc60 вызывают два rush-helper на объекте, найденном по
строковому `m_hRushEntity`; проверки класса результата у этих callers нет.
Названия CStartRush_ResolveTarget/OnTargetReached обозначают этот контекст,
а не обнаруженный virtual-slot или RTTI-проверку внутри самих helpers.

| Адрес | Предложенное имя | Вход/выход |
|---|---|---|
|1008ca70|CBaseMonster_GetScheduleOfType|ECX=this, stack DWORD type; RET4; EAX schedule* либо NULL|
|100c26f0|CBaseMonster_TaskIsRunning|ECX=this; RET; полный EAX 0/1|
|100c2a70|CBaseMonster_SetState|ECX=this, stack DWORD state; RET4; meaningful return отсутствует|
|1010b540|CStartRush_ResolveTarget|ECX=this; RET; EAX entity*, Ghidra void неверен|
|1010f330|CStartRush_OnTargetReached|ECX=this, stack entity* activator; RET4; void|
|100c19a0|CBaseMonster_Restore|ECX=this, stack reader*; RET4; полный EAX result|
|100c1ec0|CBaseMonster_Save|ECX=this, stack writer*; RET4; полный EAX result, Ghidra void неверен|
|100c27c0|CBaseMonster_GetIdealState|ECX=this; RET; EAX=m_IdealMonsterState|
|100c1f50|CBaseMonster_SetActivity|ECX=this, stack DWORD activity; RET4; void|
|100bdf30|CBaseMonster_RouteIsClear|ECX=this; RET; полный EAX 0/1; ничего не очищает|

## 1008ca70: выбор расписания

Switch по unsigned(type-1), диапазон1..2a; raw42-entry dispatch1008cc9c.
Изменение текущего расписания здесь не выполняется. В обычных ветвях возвращается
указатель на статический 20-byte record: task pointer, count, interrupt mask,
sound mask, name pointer. Все выбранные records и task arrays сохранены в evidence.

| type | schedule address | native name |
|---|---|---|
|1|102131e4 / 102133d4|IdleStand / Active Idle, условие ниже|
|2|1021320c|Idle Walk|
|3|10213220|Wake Angry|
|5|10213234|Alert Face|
|6|102134a0|Alert Small Flinch|
|8|10213248|Alert Stand|
|9|102134d4|InvestigateSound|
|a|10213270|Combat Face|
|b|1021325c|Combat Stand|
|c|102132d4|Chase Enemy|
|d,29|102131d0|Fail|
|e|10213774|Victory Dance|
|11|102132e8|Small Flinch|
|12|10213a00|tlTakeCoverFromEnemy|
|13|102132c0|TakeCoverFromBestSound|
|14|1021397c|TakeCoverFromOrigin|
|15|10213938|Cower|
|16|10213620|Primary Melee Attack|
|17|1021364c|Secondary Melee Attack|
|18|10213298|Range Attack1|
|19|102132ac|Range Attack2|
|1a|10213678|Special Attack1|
|1b|102136a4|Special Attack2|
|1c|10213590|Standoff|
|1d|102135b4|Arm Weapon|
|1e|10213284|Reload|
|20|102133c0|Ambush|
|21|102132fc|Die|
|22|102131f8|Idle Trigger|
|26|102137a8|Barnacle Victim|
|27|102137dc|Barnacle Chomp|
|2a|10213a1c|Rush Target|

Для type1 вызов callback102230b0(0,e). Только при результате0 вызывается
virtual+1e4; ненулевой результат выбирает ActiveIdle, иначе IdleStand.
Вероятность не подменяется утверждением о реализации RNG в движке.

Type28 читает `m_pCine+34c`. NULL → Alert2 `Script failed for %s\n`,
вызов100fa530(this), затем **динамический** virtual+18c(1); результат прямо
возвращается. Это не безусловный возврат базового IdleStand: cleanup меняет
состояние, а override может выбрать другое расписание.
Ненулевой pCine: DWORD[pCine+384] 0→WaitForScript1021334c,
1→WalkToScript10213324, 2→RunToScript10213338,
4/6→TeleportToScript10213820, 5→FaceScript10213834;
3 и значения вне0..6 возвращают NULL без общего diagnostic.
Другие type, включая0/negative/holes, → Alert1 с числом type и IdleStand.

## 100c26f0 и 100bdf30: предикаты без мутаций

TaskIsRunning возвращает0 только при status+22c==4 или2; все остальные DWORD,
включая0, отрицательные и вне enum, дают1. Расписание и task pointer не читаются.

RouteIsClear сначала читает DWORD[this+244+16*DWORD(this+2bc)], затем, только
если он ненулевой, проверяет movementGoal+2b8. Возвращает0 только когда оба
ненулевые; иначе1. Индекс не ограничен размером массива. Даже goal0 не предотвращает
первое чтение slot. Нет записи, удаления узлов или вызова реального RouteClear100c1a70.

## 100c2a70 и 100c27c0: текущий и желаемый state

SetState(state): только при state1 проверяет enemy EHANDLE+184 через10017780.
Проверка означает edict!=NULL и совпадение serial; private data/death здесь
не проверяются. При valid handle10017740(NULL) зануляет оба DWORD handle,
затем Alert2 `Stripped\n`. Уже invalid/stale handle не обнуляется этой ветвью.
После этого current+224=ideal+228=state для **любого** входного DWORD.
Расписание, условия и задачи этот setter самостоятельно не сбрасывает.

GetIdealState получает M=1000b000(): при NULL schedule M=0, иначе
conditions+180 & schedule.interruptMask+8. Это **не все текущие conditions**.
Работает по currentState+224, возвращает фактически сохранённый ideal+228:

|current|Порядок условий и результат|
|---|---|
|1|M&10000→ideal2; иначе M&300→MakeIdealYaw(enemyLKP+2f4), ideal3; иначе M&20000→virtual1ec, приNULL сохранитьideal, иначе MakeIdealYaw(sound.xyz), и только BYTE(sound+c)&21→ideal3; без M&20000 проверяет M&40040→ideal3|
|2|enemy EHANDLE+184 invalid→ideal3, Alert2 `***Combat state with no enemy!\n`; valid→сохранитьideal|
|3|M&10010→ideal2; иначе M&20000→сначалаideal3, затемvirtual1ec и ненулевой sound→MakeIdealYaw; NULL оставляет уже записанное3|
|6|M&40000300→100fab90(this); иначе без изменений|
|8|ideal8 без проверки M|
|прочие|сохранитьideal|

MakeIdealYaw получает Vector **по значению** (12 stack bytes, helper RETc), а не
указатель. Сам helper имеет classname/flag исключения; вызов не гарантирует поворот.
100fab90: raw DWORD pev.deadflag+174==1 → ideal8 и return0; иначе при pCine!=NULL
вызывает100fa4b0, затемreturn1. GetIdealState игнорирует helper-result и перечитывает
ideal. Полная отмена cinematic за100fa4b0 остаётся отдельным контрактом.
`deadflag` в native save table имеет type0, но эта проверка использует integer bits1,
не float1.0.

## 1010b540 / 1010f330: разрешение и завершение rush

ResolveTarget читает pev.message+1d8 как string_t. Ноль → EAX=this.
Иначе `10118590(NULL, stringBase+message)`; найденный pointer возвращается.
Если не найден, Alert1 `scripted_startrush cant find entity %s\n` и EAX=this.
Нет изменения message, кэша или проверки типа цели. Caller хранит результат в
monster target EHANDLE+18c; повторные calls могут заново разрешить изменившуюся цель.

OnTargetReached читает pev.netname+1d4. Ноль → немедленный void-return.
Иначе точный cdecl call10101ff0 имеет **пять** аргументов:
`FireTargets(stringBase+netname, activator=stackArg, caller=this, useType=3, value=0.0f)`.
Ghidra показывает лишь первые два, остальные подтверждены PUSH в1010f345..35c.
FireTargets может интерпретировать target prefix/alias и подменять activator;
это downstream-эффект, не потеря исходного caller. Сам helper не очищает netname,
не удаляет себя и не меняет monster. В StartTask/RunTask caller передаёт monster,
предварительно очищая его rush name+358 и target EHANDLE; отсутствие rush-объекта
у callers приводит к diagnostic вместо вызова helper.

## 100c1ec0 / 100c19a0: save/restore

Оба сначала вызывают CBaseToggle: точные адреса Save10102b20 и
Restore10102890. Те проходят CBaseAnimating1000eaa0/1000ea60; native таблицы
20/5 полей сохранены как support. Возврат0 inherited слоя немедленно возвращает0,
не достигая собственного блока или post-restore cleanup.

Собственный блок имеет literal `CBaseMonster`, native table10216e08,
**49 decimal (=31 hex) descriptors**, stride10 hex. Все имена/offset/type/count/flags
сохранены в evidence. Save1011adc0 получает ECX=writer, stack
`diagnosticOwner, "CBaseMonster", this, table, 49`;
diagnosticOwner=targetname при nonzero string_t, иначе classname.
Это дополнительная диагностическая строка writer, а не отдельное поле сейва.
Результат EAX writer возвращается без изменения. Сам core1011adc0 на обычном возврате всегда устанавливает1 (ASM1011b097), даже после overflow/warnings; это не доказательство успешной целостной записи. Reader10117010 получает
ECX=reader и четыре stack args `"CBaseMonster",this,table,49`.

Restore запоминает **полный EAX reader**, затем независимо от его успеха:

1. RouteClear100c1a70 → route[0].flags+244=0, routeIndex+2bc=0,
   pev+130=0, memory+2ec&=~20, movementGoal+2b8=0, movementActivity+2d0=1.
   Остальные route slots, velocity и currentActivity этот helper не очищает.
2. schedule+230=NULL, taskStatus+22c=0, currentActivity+214=0.
3. Если enemy handle+184 invalid, conditions+180=0; иначе прочитанные conditions
   сохраняются. Сам invalid handle здесь не сбрасывается.
4. Возвращает ранее сохранённый reader EAX.

Так что local reader failure не транзакционен: частично прочитанное состояние и
очистки остаются. ScheduleIndex+234 и idealActivity+218 прямо не сбрасываются;
после успешного чтения они остаются загруженными, в отличие от currentActivity.
49-field table содержит state, conditions, activity, task status/index и rush
name/movetype/distance, но не schedule pointer, route array/index/goal или deadline+364.
`m_hRushEntity+358` имеет type1 STRING, не EHANDLE несмотря на префикс имени;
enemy+184 type4, pCine+34c type3. Полная объектная relocation/error семантика
ReadFields/WriteFields — в отдельном serializer-контракте, не подменена SDK.

## 100c1f50: смена анимационной activity

Вызывает LookupActivity1000e950(new). Он передаёт model pointer из callback10223070
в1000f450. NULL model даёт **0**, не -1, поэтому попадает в success branch.
Ненулевой model выбирает sequence с совпадающим activity и native weights;
при отсутствии совпадения -1. Внешняя корректность model/weights не проверяется здесь.

Пусть sequence=result>=0, oldActivity=this+214, loops=this+fc.
Frame pev+134 сбрасывается только если
`(oldSequence != sequence || loops == 0) && !(oldActivity in {3,4} && new in {3,4})`.
Таким образом переходы3↔4 сохраняют frame; тот же looping sequence тоже сохраняет.
Затем записывает sequence+12c, вызывает ResetSequenceInfo1000e9e0,
virtual+1c0(), после чего idealActivity+218=new и currentActivity+214=new.
Для Generic virtual+1c0=100b0a40 записывает pev.yaw_speed+ b0=90.0f;
не распространяем это на все overrides.

ResetSequenceInfo обновляет native fields FrameRate+ec/GroundSpeed+f0 из model,
loops+fc=sequenceFlags&1, pev.animtime+138=now, pev.framerate+13c=1.0f,
sequenceFinished+f8=0, lastEventCheck+f4=now. NULL model у helper1000f290
не пишет FrameRate/GroundSpeed; остальные reset writes всё равно выполняются.
Нет гарантии валидной модели только потому, что sequence-result>=0.

Lookup result<0 → Alert1 `%s has no sequence for act:%d\n`, pev.sequence=0,
ideal=current=new. В этой ветви frame, sequence-info и virtual+1c0 не обновляются.
В обоих исходах activity сохраняется без enum-validation; return-value не обещается.

## Остаточные вопросы

Закрыты локальные branches/returns и сохранённые native таблицы десяти primary.
Продолжение прохода04 закрывает прежние локальные зависимости: CBaseAnimating
Save/Restore1000eaa0/1000ea60, LookupActivity1000e950, ResetSequenceInfo1000e9e0 и
sequence-info1000f290 разобраны в [animation-state](../server-animation-state/contract.md);
нижний weighted selector1000f450 и studio dispatch/controls — в
[studio-controls](../server-studio-controls/contract.md). Route helpers и graph search
получили отдельный разбор в [pathfinding](../server-monster-pathfinding/contract.md).
Эти новые карточки не включены задним числом в исторические десять данного пакета.

Открыты все derived overrides и runtime валидность найденного rush entity;
полная scripted cleanup/cancel цепь100fa530/100fa4b0;
внешний lifetime model/save/route memory; engine RNG и точная последовательность map events.
Среди нижних studio зависимостей самостоятельный разбор ещё нужен для
1000eec0/1000ef20/1000f020/1000f150/1000f1d0; graph producers/cache lifecycle и
точная следующая адресная очередь указаны в конце пакета pathfinding.
Support-описания раскрывают необходимые вызовы, но не объявляют эти функции новыми
полностью разобранными карточками. Полный game AI из этой десятки не следует.
