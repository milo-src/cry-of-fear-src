# Map-control entities: global state, timed state, sparks and multisource

35 новых просмотренных server entrypoints. Статический проход читает оригинальный сохранённый C и ограниченные диапазоны исходного DLL; не выполняет игру, DLL, REA, build или port. Доказательство относится к SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641` (`cryoffear/cl_dlls/hl.dll`). [evidence-extra.json](evidence-extra.json) фиксирует 35 C, 17 support C, девять asm-диапазонов, четыре vtable-префикса, четыре export-thunks, четыре save-таблицы и строки. [capture-extra.py](capture-extra.py) воспроизводит чтение. [notes-extra.json](notes-extra.json) содержит отдельные карточки; ни один из этих entrypoints не имел REVIEW при отборе.

## Числовые связи и поля

| Entity | Export → factory | Allocation / vtable | Spawn / KV / Use |
|---|---|---|---|
| env_global | 10016760 → 100126a0 | e8 / 101a500c | 10015080 / 10013900 / 10015fe0 |
| env_spark | 10016770 → 10012700 | e4 / 101a5bc8 | 100150e0 / 10013a10 / inherited1000e2e0 |
| env_state | 10016780 → 10012760 | ec / 101a5160 | 100151b0 / 10013b30 / 10016070 |
| multisource | 100167c0 → 10012820 | 264 / 101a491c | 10015370 / 10013d50 / 100165a0 |

Factory возвращает существующий private-data pointer либо выделяет объект и пишет vtable и entvars в +4. Raw E9 и C7 00 связывают адреса численно. Полные классы, inherited callbacks и корректность invalid/OOM веток не утверждаются. В префиксе таблицы +2c=Spawn,+30=Precache,+34=KV,+38=Save,+3c=Restore,+5c=GetState,+e0=Think,+e8=Use. У env_state Think непосредственно **10015750**; у spark inherited Use вызывает object+80 callback.

Native save-таблицы (stride16, flags0 у всех записей):

| Class/table | Поля: имя@offset, type ID, count |
|---|---|
| CEnvGlobal /10211510 | m_globalstate@dc type1 count1; m_triggermode@e0 type10 count1; m_initialstate@e4 type10 count1 |
| CEnvSpark /102115e0 | m_flDelay@dc type0 count1; m_iState@e0 type10 count1 |
| CEnvState /10211540 | m_iState@dc type10 count1; m_fTurnOnTime@e0 type10 count1; m_fTurnOffTime@e4 type10 count1; m_sMaster@e8 type1 count1 |
| CMultiSource /10211600 | m_rgEntities@dc type4 count32; m_rgTriggered@1dc type10 count32; m_iTotal@25c type10 count1; m_globalstate@260 type1 count1 |

Save/Restore pairs: Global10014940/10014730; Spark100149a0/10014770; State10014a00/100147b0; MultiSource10014ac0/10014830. Каждый сначала требует успешного base10018000/10017f30 и лишь затем вызывает1011adc0/10117010 с этой таблицей. Save использует targetname, иначе classname как entity label. Обратите внимание: времена env_state парсятся и используются как **float**, но raw derived save table действительно содержит **type10**. Это не исправлено под ожидаемый SDK тип; эффект конкретного serializer требует отдельной проверки. Полный цикл base/callback save/restore этим проходом не закрывается.

## env_global: глобальный enum0/1/2

KeyValue10013900: `globalstate`→AllocString→dc, `triggermode`→atoi→e0, `initialstate`→atoi→e4. Handled устанавливается в начале, включая неизвестный ключ перед базовой делегацией. Spawn10015080 удаляет entity без globalstate name. При flag1 создаёт запись только если она ещё отсутствует; существующее значение не заменяет.

Use10015fe0 игнорирует входной USE_TYPE и использует собственный mode: 0 принудительно state0,1→1,2→2, остальные modes переключают0↔1, оставляя прочие states (в том числе2) прежними. Getter101206f0 возвращает0 для отсутствующей записи. Use создаёт её через10120670(name,mapname,newState) либо обновляет10120710.

Подтверждённые support helpers:10120770 ищет строковое имя в связном списке,10120670 выделяет0x68-байтовый узел с name@0,map@40,state@60,next@64,10120710 меняет найденное state. Они поддерживают локальное объяснение producer; ограничение строк, весь global-state save/transition lifecycle и все writers не являются результатом этой группы. Это global enum, его нельзя смешивать с four-state enum env_state.

## env_state: время и точные target arguments

Spawn100151b0 ставит state=(spawnflags&1)*2. KV10013b30 читает `turnontime`/`turnofftime` как float e0/e4 и `master` string-id e8; handled1 выставлен до ветвления. GetState100134a0 возвращает dc:0=off,1=turning-on,2=on,3=turning-off.

Use10016070 сначала вызывает ShouldToggleState10018350(UseType), затем master predicate10119060(master,**null**). Контекст activator в этот predicate не передаётся. States0/3 выбирают включение,1/2 — выключение. При ненулевой соответствующей задержке ставится промежуточное состояние1/3 и scheduler получает сам float delay — аргумент потерян в C, но восстановлен asm. Negative delay не отвергается локально. Master и отказ команды сопровождаются diagnostics только при flag2.

При нулевой задержке и при завершении Think вызывается общий FireTargets10101ff0(name,activator,caller,use,value):

| Путь | Основной pev.target+1cc | Второй target | Activator/caller |
|---|---|---|---|
| immediate ON | use1,value0 | pev.noise1+1f0,use3,value0 | входной activator / this |
| immediate OFF | use0,value0 | pev.noise2+1f4,use3,value0 | входной activator / this |
| delayed ON (state1→2) | use1,value0 | noise1,use3,value0 | this / this |
| delayed OFF (state3→0) | use0,value0 | noise2,use3,value0 | this / this |

После immediate dispatch10017ad0 всегда обнуляет object+58; pev.nextthink+104 и object+5c очищает только при отсутствии parent object+14 и children object+1c. Delayed Use не сохраняет активатора; override Think10015750 использует self/self, не повторяет master check. Другие states Think игнорирует. В Think нет явного сброса nextthink. Сам общий dispatcher допускает `+`/`-` prefixes и другие преобразования, поэтому таблица описывает **исходные call arguments**, а не гарантированные конечные UseType у произвольного имени. Диагностика и два calls не являются тремя отдельными target событиями.

## env_spark: callbacks важнее getter

KV10013a10: MaxDelay (регистр важен)→float dc; `style`,`height`,`killtarget`,`value1`,`value2`,`value3` только поглощаются handled1. Literal value1 подтверждён raw101a54d0. Прочее идёт базовому KV.

Spawn100150e0 очищает callbacks think+78/use+80, затем:

| Flags | Настройка |
|---|---|
|10|Cyclic use10014b50; без initial think и без default MaxDelay|
|без10, без20|автоматический SparkThink10014c30|
|без10,20 без40|только SparkStart10014ba0; нет default MaxDelay|
|без10,20 и40|SparkThink + SparkStop10014c10|

Только ветки с активным think планируют первое событие через `.1+RandomFloat(0,1.5)` и заменяют MaxDelay<=0 на1.5. Все вызывают Precache10014550: buttons/spark1.wav..spark6.wav и sprites/glow04.spr. Spawn **не пишет state e0**, поэтому GetState10013490 не всегда отражает уже установленный think.

SparkStart назначает Stop/Think, пишет state2 и планирует `.1+RandomFloat(0,MaxDelay)`; сам немедленную искру не создаёт. SparkStop назначает Start, обнуляет think, пишет state0; nextthink явно не сбрасывает. SparkThink создаёт эффект; если flag10 — обнуляет think, иначе планирует новый случайный интервал. State здесь не меняется.

Cyclic10014b50 при null think сразу создаёт искру, ставит SparkWait10014cb0 и планирует MaxDelay. Если Use пришёл до этого срока, только заменяет callback на SparkThink, сохраняя deadline: на нём получится одна дополнительная искра. Без повторного Use SparkWait просто обнуляет callback. Это не обычное ON/OFF переключение и не бесконечная cyclic очередь; входной UseType не фильтруется.

Effect helper100132d0 берёт позицию `param2 + pev.size/2`, затем1011a290 отправляет MessageBegin(4,23,position,null), BYTE9,3COORD,MessageEnd. Выбор WAV: `int(RandomFloat(0,1)*6)`, cases0..5→spark1..6, default без sound. Volume=`RandomFloat(.25,.75)*.4` (.1.. .3), channel2,attenuation.8,flags0,pitch100. Включительность верхней границы engine RNG здесь не доказана; branch default нельзя удалять из контракта. Wire producer не доказывает конкретный клиентский renderer эффект.

## multisource: регистрация, AND и граничная ошибка

Spawn10015370 устанавливает solid0/movetype0, flag2 (registering), thinkRegister100145b0 через.1. Register обнуляет count25c и **только** handle-array dc..1db длиной0x100. Trigger-array1dc..25b в этом теле не очищается. Think меняется на SUB_DoNothing.

Сначала101184e0 перечисляет entities, у которых `target==own targetname`; затем10118460 перечисляет multi_manager, чьи virtual+c8 подтверждают наличие own targetname. Максимум32 handles, каждый через10017740 хранит edict и serial; чтение10017790→10017ba0 проверяет serial перед private-data pointer. Dedup между проходами нет. Warning выводится уже при count>=32, даже без доказательства 33-го кандидата. В конце снимается flag2.

GetState100134b0: пока flag2 стоит,0; затем AND всех count DWORD trigger bits, плюс при globalstate260!=0 getter101206f0 должен вернуть ровно1. Результат2 при успехе,0 иначе. Count0 допускает пустой AND и результат2, если global gate разрешает.

Use100165a0 ищет **caller**, а не activator, в handles и XOR1 переключает соответствующий trigger. Сравнивает aggregate state до/после и только при изменении:

* старое2 → вызывает pev.netname+1d4, если оно ненулевое: FireTargets(netname,null,this,globalstate?0:3,0);
* старое0 → SUB_UseTargets(null,globalstate?1:3,0).

Входной USE_TYPE в этой логике не фильтруется. Полный state change зависит также от внешнего globalstate, но самостоятельного observer global-state mutations здесь нет.

**Существенное отклонение от предполагаемого безопасного поиска:** bounded asm100165a0 подтверждает, что index увеличивается до сравнения caller. После полного отсутствия совпадения index==count и `JLE` всё равно ведёт к XOR адресу `this+1d8+index*4`. При count>0 меняется последний trigger; при count0 — DWORD1d8 перед trigger-array (в конце handle-array). Diagnostic non-member ветка находится за проверкой index>count и не защищает нормальный полный miss. Это не артефакт decompiler: инструкции100165ba,100165ca..dd и10016652 сохранены. Достижимость и последствия для конкретных карт **не проверены в runtime**, и исправлений игры не вносилось.

## Оставшиеся границы

Закрыты локальные key/flag/state/formula/callback связи, factory/vtable идентичность, точные target-call arguments и производные save tables. Global-list persistence раскрыт в [global contract](contract-global.md), master parser — в [target contract](../server-targets/contract.md). Отдельно остаются общий base serializer (включая type10 для float-read times), engine RNG endpoint policy, temp-entity renderer и реальные map-trigger sequences. Ошибочные ABI артефакты C для scheduler/FireTargets и membership bounds уже уточнены asm и не должны оставаться в справочнике как отсутствующие arguments.
