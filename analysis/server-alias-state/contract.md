# Alias state, save/restore и унаследованные методы

Пакет содержит24 ранее неразобранных actual C entry оригинального server DLL. Только статическое чтение сохранённого C, bounded objdump и PE tables. Игра, REA session, сборка и изменение игровых ресурсов не запускались. [Карточки](notes.json), [evidence](evidence.json), [воспроизводимый capture](capture.py). Оригинальный SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Все24 ASM диапазона побайтно сверены с PE, а не только с текстовым хэшем.

Связанные контракты: [target/alias resolution](../server-targets/contract.md), [parent tree](../server-parent-tree/contract.md), [serializer core](../server-serializer/contract.md). Здесь разобраны wrappers/таблицы/dispatch; core reader/writer и дерево parent имеют отдельных владельцев анализа. Названия методов предложены; field names ниже взяты из оригинальных строк descriptor tables.

## Создание объекта и vtable

| Функция | Export thunk | Класс | Allocation | Vtable |
|---|---|---|---|---|
| 1000d230 | info_alias1000e5a0 | CInfoAlias | e0 | 101a296c |
| 1000d290 | info_group1000e5b0 | CInfoGroup | 164 | 101a2710 |
| 1000d2f0 | multi_alias1000e5c0 | CMultiAlias | 16c | 101a2830 |
| 1000d350 | trigger_changealias1000e5d0 | CTriggerChangeAlias | dc | 101a2c70 |

Все четыре exports — 5-byte JMP на actual functions. Входной аргумент factory — entvars pointer, не private entity. Если онNULL, engine CreateEntity10222f9c возвращает edict и используется edict+80. Затем entvars+20c даёт edict; существующий private pointer edict+7c возвращается неизменённым. **Нет проверки класса существующего private object или повторной установки его vtable/pev.**

Если private object отсутствует, PvAllocEntPrivateData10223044 получает edict и размер изтаблицы. В successful path native код пишет лишь vtable и object+4=entvars. Никакого полного memset/constructor chain в этих wrappers нет: нулевые счётчики/links зависят от engine allocation contract. ABI engine callbacks подтверждён GiveFnptrsToDll100b4aa0 и slot offsets SDK в evidence.

Отказ allocation не обработан как безопасный returnNULL: ASM делает XOR EAX,EAX и записывает entvars в[EAX+4]. При CreateEntityNULL последующее чтение entvars+20c также остаётся. Это статический факт ветвей; не утверждается, что такие отказы происходят в обычной игре. Ghidra `iRam00000004` отражает эту ветвь, а не настоящий глобальный owner.

## Направление сериализации и ABI

**10117010 — reader/Restore; 1011adc0 — writer/Save.** Их нельзя именовать по порядку адресов. В этих vtables `+38` — Save, `+3c` — Restore.

| Класс / блок | Save | Restore | Базовая цепочка |
|---|---|---|---|
| CBaseAlias (реализация InfoAlias) | 1000e0c0 | 1000e000 | base Save10018000 / Restore10017f30 |
| CInfoGroup | 1000e120 | 1000e040 | тот же base напрямую, **не CBaseAlias** |
| CMultiAlias | 1000e180 | 1000e080 | CBaseAlias Save/Restore, затем собственный блок |
| CTriggerChangeAlias | 10018000 | 10017f30 | только inherited base entries втаблице |

На входе ECX=entity, единственный stack argument=context. Сначала вызывается соответствующая inherited функция; при EAX0 собственный блок не обрабатывается. Перед core call wrappers меняют ECX на **context** и передают entity отдельным stack argument. Core EAX сохраняется до RET4, хотя Ghidra объявляет wrappers void.

Reader получает `(blockName,entity,descriptorTable,count)`. Writer получает `(ownerLabel,blockName,entity,descriptorTable,count)`, где ownerLabel — targetname, если string_t+1d0 ненулевой, иначе classname. Это дополнительный diagnostic label для function-pointer serializer, а не другое имя блока. В own alias/group/multi descriptors type11 отсутствует, но inherited CBaseEntity block его содержит.

Wrapper не проверяет прочитанные count/weights, не повторяет KV setters, не делает alias flush и не откатывает изменения inherited блока при отказе собственного. Nonzero core result не означает полную транзакционную успешность: writer core имеет диагностические пути с обычным EAX1; reader отличает block-token mismatch, но не сводит все низкоуровневые ошибки в0. Подробный контракт — в serializer core.

## Native descriptor tables

Структура записи16 bytes: DWORD type, DWORD namePointer, DWORD objectOffset, SHORT count, SHORT flags. В собственных трёх таблицах всеflags0.

| Table/block | Field | Offset | Count | Native type |
|---|---|---|---|---|
| 102110d8 CBaseAlias | m_pNextAlias | dc | 1 | 3 CLASSPTR |
| 102110e8 CInfoGroup | m_cMembers | dc | 1 | 10 INTEGER |
| CInfoGroup | m_iszMemberName | e0 | 16 | 1 STRING |
| CInfoGroup | m_iszMemberValue | 120 | 16 | 1 STRING |
| CInfoGroup | m_iszDefaultMember | 160 | 1 | 1 STRING |
| 10211128 CMultiAlias | m_cTargets | e0 | 1 | 10 INTEGER |
| CMultiAlias | m_iszTargets | e4 | 16 | 1 STRING |
| CMultiAlias | m_iTotalValue | 124 | 1 | 10 INTEGER |
| CMultiAlias | m_iValues | 128 | 16 | 10 INTEGER |
| CMultiAlias | m_iMode | 168 | 1 | 10 INTEGER |

Следовательно next alias не является заведомо transient-only полем: его descriptor участвует в CBaseAlias block как class pointer, не как raw integer. Правила entity remapping задаёт core, не этот wrapper. У info_group тот же offset dc означает **счётчик**, а не alias link; table/type/inheritance различаются.

Поддерживающая native CBaseEntity table10211760 содержит object+14=`m_pMoveWith`, +60=`m_iLFlags`, +78/7c/80/84=`m_pfnThink/Touch/Use/Blocked`, все callback fields type11. Это сильнее аналогии с современным SDK и объясняет concrete dispatchers ниже.

Поддерживающая ENTVARS table1021aae0 (102 descriptors) подтверждает: spawnflags+1a4 type10; target+1cc иtargetname+1d0 type1 flags1; netname+1d4 иmessage+1d8 type1 flags0; **noise+1ec type17 SOUNDNAME**, noise3 находится+1f8. Alias pending target хранится именно вnoise+1ec, а active target вmessage+1d8. Эти поля уже входят в inherited ENTVARS save/restore. Нельзя называть+1ec noise3 по приблизительному SDK layout или объявлять pending state несохраняемым. Возможные soundname side effects требуют core restore context и разобраны отдельно, а не предполагаются по типу строки.

## State для master

Generic1000d9d0 находится вvirtual+58 всех четырёх таблиц. Он вызывает virtual+5c без дополнительных аргументов, сохраняет EAX и заканчиваетRET4. Переданный master activator **игнорируется**. Следовательно альтернативный context в `master(other)` не влияет на эти конкретные реализации, хотя другие virtual+58 overrides могут его использовать.

InfoAlias+5c=1000d9f0: native expression `~(spawnflags*2)&2` возвращает2 приbit0==0 и0 приbit0==1. Group/MultiAlias/TriggerChangeAlias+5c=1000d9e0 возвращает0. Через master10119060 обычная проверка — строгоstate==2; `~` инвертирует это сравнение. Ненулевые произвольные state не считаются ON.

Use1000e310 немедленно toggles spawnflags bit0 и обновляет pending noise, а active message меняется только при commit1000d660. Поэтому изменение master state и active alias target не обязаны происходить одновременно. Точная временная граница — **до первого flush**, а не до конца любого внешнего FireTargets: вложенный callback/FireTargets может выполнить flush раньше завершения outer enumeration. Flush очищает dirty bit и продвигает world.head, но **не обнуляет node.next+dc**. Эти два уточнения важны при чтении предыдущих формулировок и сохранённого next link.

## Capabilities и callback dispatch

1000df20 читает m_pMoveWith+14; без parent возвращает2, с parent вызывает virtual+40(parent) и маскируетresult&2. Bit2 соответствует SDK FCAP_ACROSS_TRANSITION, но конкретный downstream transition consumer этим пакетом не доказан. Этот helper **не установлен** в slot+40 четырёх исследованных alias-family таблиц.

Их собственные caps: InfoAlias/Group/MultiAlias→1000df40, TriggerChangeAlias→1000df50. Оба entry при наличии parent вызывают егоvirtual+40, затем безусловно возвращают0. Даже если результат0 постоянный, callback нельзя вычёркивать: side effects остаются возможны. 1000df40/50 — разные точки входа с одинаковой локальной семантикой.

| Entry | Field | Реальный ABI / действие |
|---|---|---|
| 1000e2a0 | +78 m_pfnThink | nonnull JMP callback, ECX неизменён, иначеRET |
| 1000e2b0 | +7c m_pfnTouch | nonnull tail JMP, один исходный stack arg; null RET4 |
| 1000e2e0 | +80 m_pfnUse | CALL с activator/caller/useType/value, arg4 переносится MOVSS; RET16 |
| 1000d400 | +84 m_pfnBlocked | nonnull tail JMP, один исходный stack arg; null RET4 |

Ghidra нулевая арность Touch/Blocked неверна как описание ABI: ASM сохраняет исходный аргумент для tail call. Wrapper не проверяет caller pointers, не меняет callback/nextthink и не владеет временем жизни callback. Поле object+7c нельзя путать с edict private pointer+7c — разные базы. Для CMultiAlias generic Use установлен вvirtual+e8; остальные три класса имеют свои Use overrides.

## Alias virtual defaults

1000dab0 возвращает1 вalias predicate+24 InfoAlias/MultiAlias; 1000dac0 возвращает0 для Group/TriggerChangeAlias. Это discriminator по классу, не успешность target resolution. Info_group разрешается отдельным `group.member` путём поclassname, поэтому не обязан проходить alias predicate.

1000d500 вCMultiAlias+124 игнорирует переданное значение, печатает severity4 `entities cannot change value`,RET4; массивыtargets/weights не меняются.1000d650 вCMultiAlias+128 — RET без side effects. Внешний FlushAliases всё равно двигает очередь и очищает dirty bit, даже когда commit пустой.

## Границы

Не доказаны engine allocation zero-fill/lifetime и обычная достижимость factory-failure ветвей; полнота всех subclasses/vtables; save-order world.head относительно m_pNextAlias; допустимость count после corrupt save; эффект callback ошибок на весь save transaction. Этот пакет не объявляет serialization runtime parity и не подменяет сохранённый бинарник кодом порта. Native descriptor strings/bytes и статический call order доказаны; engine/environment-dependent поведение оставлено явно открытым.
