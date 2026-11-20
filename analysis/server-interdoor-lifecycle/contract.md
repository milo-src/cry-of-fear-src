# CInterDoor: фабрики, ключи и сохранение

Статический пакет pass28: 8 новых REVIEW и 6 полных уточнений прежних кратких карточек. Исходный hl.dll SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`; никакого запуска DLL/игры или изменения ресурсов. Все 14 primary C прочитаны вместе с полными native ranges. Поддерживающие функции не считаются новыми REVIEW. Адреса и offsets в тексте hex, количества явно decimal либо снабжены суффиксом h.

Связь export→factory→vtable→метод подтверждена PE export directory, записываемыми immediate vtable и native RTTI type names. Это доказательство конкретной статической привязки классов, не наблюдение загрузки сущности на карте. `evidence.json` содержит raw bytes, file offsets, hashes, 144 engine slots с отдельным SDK-header corroboration, таблицы и границы objdump. `capture.py` воспроизводит захват; `verify.py` независимо отображает PE через struct и проверяет байты. Публичный baseline — pass27 (2041/6614), сохранённые prior FUNCTION blocks удержаны в evidence; ignored local snapshots не нужны.

Предыдущие пути `analysis/doors/review.md` сохранены у всех шести уточнений. Полнота этого пакета относится к перечисленным локальным телам, а не ко всей системе переходов.

## 0x10047eb0 CCofInterDoorExitChange_Factory

ABI: один stack argument entvars*, обычный RET, полный EAX содержит существующий либо выделенный private object; очистка аргумента у caller. При NULL entvars вызывается engine CreateEntity через 10222f9c, ненулевой edict преобразуется в entvars адресом edict+80h. Далее читается entvars+20ch: при ненулевом edict и его private-data+7ch фабрика возвращает существующий указатель без проверки класса, без замены vtable и без повторной записи pev. Иначе вызывает PvAllocEntPrivateData через 10223044 с edict и указанным размером. На успехе пишет vtable и object+4=entvars; других полей не инициализирует и Spawn не вызывает.

Размер allocation dch, записываемая vtable 101b0f24; имя класса подтверждено PE RTTI COL/type descriptor. Export thunk 10049370 передаёт управление сюда одним JMP. Vtable+2ch=10048ba0 (solid=0, effects=80h присваиванием, movetype=0), +e8h=10048ef0 (переназначение target найденного объекта); +38h/+3ch — базовые Save/Restore 10018000/10017f30. Эти методы сохранены как support, новых REVIEW для них нет.

Нативные отказные ветви не являются безопасным NULL-return: если CreateEntity вернул NULL, следующий код читает [NULL+20ch]; если private allocation вернул NULL, XOR EAX,EAX непосредственно предшествует MOV [EAX+4],ESI. Это статически доказанные обращения, а не наблюдение падения игры. Начальное обнуление памяти, lifetime/serial и дальнейшая engine-dispatch последовательность здесь не устанавливаются.


## 0x10047f10 CInterDoor_Factory

ABI: один stack argument entvars*, обычный RET, полный EAX содержит существующий либо выделенный private object; очистка аргумента у caller. При NULL entvars вызывается engine CreateEntity через 10222f9c, ненулевой edict преобразуется в entvars адресом edict+80h. Далее читается entvars+20ch: при ненулевом edict и его private-data+7ch фабрика возвращает существующий указатель без проверки класса, без замены vtable и без повторной записи pev. Иначе вызывает PvAllocEntPrivateData через 10223044 с edict и указанным размером. На успехе пишет vtable и object+4=entvars; других полей не инициализирует и Spawn не вызывает.

Размер allocation 1b0h, записываемая vtable 101b0ab8; имя класса подтверждено PE RTTI COL/type descriptor. Export thunk 10049380 передаёт управление сюда одним JMP. Vtable связывает +2ch=10048bd0 Spawn, +30h=100488c0 Precache, +34h=10048550 KeyValue, +38h=10048990 Save, +3ch=10048950 Restore, +40h=100488a0 ObjectCaps, +e8h=10048f70 Use. Последний остаётся поддерживающей ранее разобранной функцией, его полная gameplay-цепь этим пакетом не объявляется закрытой.

Нативные отказные ветви не являются безопасным NULL-return: если CreateEntity вернул NULL, следующий код читает [NULL+20ch]; если private allocation вернул NULL, XOR EAX,EAX непосредственно предшествует MOV [EAX+4],ESI. Это статически доказанные обращения, а не наблюдение падения игры. Начальное обнуление памяти, lifetime/serial и дальнейшая engine-dispatch последовательность здесь не устанавливаются.


## 0x10047f70 CInterDoorDisable_Factory

ABI: один stack argument entvars*, обычный RET, полный EAX содержит существующий либо выделенный private object; очистка аргумента у caller. При NULL entvars вызывается engine CreateEntity через 10222f9c, ненулевой edict преобразуется в entvars адресом edict+80h. Далее читается entvars+20ch: при ненулевом edict и его private-data+7ch фабрика возвращает существующий указатель без проверки класса, без замены vtable и без повторной записи pev. Иначе вызывает PvAllocEntPrivateData через 10223044 с edict и указанным размером. На успехе пишет vtable и object+4=entvars; других полей не инициализирует и Spawn не вызывает.

Размер allocation dch, записываемая vtable 101b0e04; имя класса подтверждено PE RTTI COL/type descriptor. Export thunk 10049390 передаёт управление сюда одним JMP. Vtable+2ch=10048c70: virtual+30h, затем solid=0, effects=80h присваиванием, movetype=0. Здесь +30h=1000df90 — пустой RET0. Use+e8h=10049280, Save/Restore+38h/+3ch=10018000/10017f30. Поддерживающие тела не добавлены к числу новых REVIEW.

Нативные отказные ветви не являются безопасным NULL-return: если CreateEntity вернул NULL, следующий код читает [NULL+20ch]; если private allocation вернул NULL, XOR EAX,EAX непосредственно предшествует MOV [EAX+4],ESI. Это статически доказанные обращения, а не наблюдение падения игры. Начальное обнуление памяти, lifetime/serial и дальнейшая engine-dispatch последовательность здесь не устанавливаются.


## 0x10047fd0 CPointEntity_Factory

ABI: один stack argument entvars*, обычный RET, полный EAX содержит существующий либо выделенный private object; очистка аргумента у caller. При NULL entvars вызывается engine CreateEntity через 10222f9c, ненулевой edict преобразуется в entvars адресом edict+80h. Далее читается entvars+20ch: при ненулевом edict и его private-data+7ch фабрика возвращает существующий указатель без проверки класса, без замены vtable и без повторной записи pev. Иначе вызывает PvAllocEntPrivateData через 10223044 с edict и указанным размером. На успехе пишет vtable и object+4=entvars; других полей не инициализирует и Spawn не вызывает.

Размер allocation dch, записываемая vtable 101a249c; имя класса подтверждено PE RTTI COL/type descriptor. Export thunk 100493a0 передаёт управление сюда одним JMP. Несмотря на экспорт inter_door_exit, установлен именно RTTI CPointEntity, не отдельный класс двери. Vtable+2ch=10102c40 только записывает pev.solid=0; +e8h=1000e2e0 — общий callback dispatcher через object+80h, а не собственная операция перехода. Factory не устанавливает этот callback. Остальные настройки point entity нельзя приписывать этому телу.

Нативные отказные ветви не являются безопасным NULL-return: если CreateEntity вернул NULL, следующий код читает [NULL+20ch]; если private allocation вернул NULL, XOR EAX,EAX непосредственно предшествует MOV [EAX+4],ESI. Это статически доказанные обращения, а не наблюдение падения игры. Начальное обнуление памяти, lifetime/serial и дальнейшая engine-dispatch последовательность здесь не устанавливаются.


## 0x10049370 cof_inter_door_exitchange_Export

Полное native тело занимает 5 байтов: JMP 10047eb0. Имя и ordinal подтверждены PE export directory, не только CSV. Дополнительных branches, allocation или Spawn в thunk нет; один stack argument entvars* и EAX-result принадлежат фабрике. Сохранённый Ghidra C разворачивает логику callee, но это не отдельная копия машинного тела. Достижимость через экспорт доказана статически; вызов на конкретной карте не наблюдался.


## 0x10049380 inter_door_Export

Полное native тело занимает 5 байтов: JMP 10047f10. Имя и ordinal подтверждены PE export directory, не только CSV. Дополнительных branches, allocation или Spawn в thunk нет; один stack argument entvars* и EAX-result принадлежат фабрике. Сохранённый Ghidra C разворачивает логику callee, но это не отдельная копия машинного тела. Достижимость через экспорт доказана статически; вызов на конкретной карте не наблюдался.


## 0x10049390 inter_door_disable_Export

Полное native тело занимает 5 байтов: JMP 10047f70. Имя и ordinal подтверждены PE export directory, не только CSV. Дополнительных branches, allocation или Spawn в thunk нет; один stack argument entvars* и EAX-result принадлежат фабрике. Сохранённый Ghidra C разворачивает логику callee, но это не отдельная копия машинного тела. Достижимость через экспорт доказана статически; вызов на конкретной карте не наблюдался.


## 0x100493a0 inter_door_exit_Export

Полное native тело занимает 5 байтов: JMP 10047fd0. Имя и ordinal подтверждены PE export directory, не только CSV. Дополнительных branches, allocation или Spawn в thunk нет; один stack argument entvars* и EAX-result принадлежат фабрике. Сохранённый Ghidra C разворачивает логику callee, но это не отдельная копия машинного тела. Достижимость через экспорт доказана статически; вызов на конкретной карте не наблюдался.


## 0x10048550 CInterDoor_KeyValue

ECX=this, stack argument kv*, RET4; kv+4 — key C-string, kv+8 — value C-string, kv+ch — handled. Обе строки предполагаются валидными; собственных NULL/длины/UTF-проверок нет. Первые opensound/closesound/music сравниваются встроенным байтовым case-sensitive циклом до NUL, остальные через 1000aba0, который возвращает полный EAX=1 только при точном равенстве. Сравнение не prefix и не case-insensitive. Каждый распознанный ключ ставит handled=1; самостоятельный status через EAX не определён.

Строковые значения передаются engine AllocString через 10223054 без дописывания каталогов или extension. opensound→pev.noise+1ech; closesound→noise1+1f0h; lockedsnd→noise2+1f4h; unlockedsnd→noise3+1f8h. music→object+18ch m_sMusic; lockedby→190h m_sLockedBy; lockedmsg→194h m_sLockedMsg; unlockedmsg→198h m_sUnlockedMsg; propertarget→19ch m_sProperTarget; useunlock→1a0h m_sUseUnlock; newlevelsnd→184h m_iNewLevelDoorSound. Пустая строка также проходит AllocString; нулевой итоговый string_t определяется engine, не этим кодом.

musicfadein вызывает 1016f5ec(value) и FSTP DWORD object+1ach; musicfadeout так же пишет +1a8h. Это float32 storage результата ST0, несмотря на имена descriptor m_iMusicFadeIn/Out. Проверок знака, NaN, диапазона или errno нет. silentroom вызывает 1016b55e(value), проверяет полный EAX на неноль и SETNE/MOV BYTE пишет только object+188h, а не DWORD. Wrapper 1016b55e передаёт decimal base10 в 1016a01f; 1016f5ec вызывает 1016da44(value,0), сохраняя ST0. Полная locale/error/overflow грамматика этих CRT cores здесь не раскрывается.

При отсутствии совпадений тот же kv* передаётся 10102480 с исходным this (CBaseToggle KeyValue), а затем функция возвращается. Это не безусловный сброс handled в ноль. Поля могут изменяться повторными вызовами; данный метод не вызывает sounds, музыку или переход. Более поздний Spawn10048bd0 безусловно перезаписывает обе fade-настройки -1.0, поэтому один факт их успешного парсинга не доказывает сохранность значения после Spawn.


## 0x100488a0 CInterDoor_ObjectCaps

Без stack arguments; ECX=this. Читает object+14h m_pMoveWith (native BASE descriptor). Если NULL — сразу EAX=8; иначе ECX=parent, вызов parent.vtable+40h, затем EAX=8 независимо от полученного результата. RET, полного OR/AND с родительскими capabilities нет. Проверки serial/lifetime и циклов родителя отсутствуют; побочные эффекты virtual callback возможны. При точной CInterDoor vtable этот метод расположен в слоте40h; числовая маска8 соответствует FCAP_IMPULSE_USE в отдельно закреплённом SDK header, но сам numeric return доказан native.


## 0x100488c0 CInterDoor_Precache

ECX=this, без stack arguments, RET; EAX не является специально сформированным success-result. В порядке pev+1ech noise, +1f0h noise1, +1f4h noise2, +1f8h noise3 проверяет string_t!=0. Для каждого ненулевого складывает его с gpGlobals+98h string base и вызывает 10116a30(pointer), который хвостом переходит в engine PrecacheSound slot1 (10222f4c). После каждого из первых трёх выполненных callbacks заново читает this->pev перед следующим полем; все четыре имени заранее не снимались в snapshot.

Проверяется только ненулевой pooled offset, не первый символ строки и не наличие файла. Возвращаемый sound index не сохраняется; дубликаты не устраняются. m_sMusic+18ch и m_iNewLevelDoorSound+184h здесь не читаются. Это полное тело Precache, но не утверждение, что данные ресурсы не кешируются или не проигрываются другими частями игры.


## 0x10048950 CInterDoor_Restore

ECX=entity, один stack argument restoreContext*, RET4. Сначала вызывает 10102890(entity,context). Если полный EAX=0, немедленно возвращает0 без своего reader; иначе меняет ECX на context и вызывает 10117010("CInterDoor",entity,10212480h,12 decimal). Результат собственного reader в EAX возвращается без преобразования и без последующей проверки. Внутри этого метода нет вызова Spawn/Precache, rollback, дополнительного reset fade или post-restore action.

Native цепь наследования: 10102890 CBaseToggle→1000ea60 CBaseAnimating→10102850 CBaseDelay→10017f30 CBaseEntity. Собственные блоки имеют 20/5/3/22 descriptors соответственно; ENTVARS проходит базовым путём. Все соответствующие таблицы закреплены в evidence. Таблица CInterDoor10212480 содержит ровно12 descriptors, включая bool disabled/silentroom (type12), string_t и time/float; offsets и типы перечислены ниже. Reader может частично изменить объект до ошибки: отсутствие local rollback не следует путать с транзакционным восстановлением.


## 0x10048990 CInterDoor_Save

ECX=entity, stack argument saveContext*, RET4. Сначала 10102b20(entity,context); EAX=0 прерывает собственную запись. Иначе заново читает pev, targetname+1d0h и gpGlobals string base. Если targetname!=0, first writer argument=stringBase+targetname, иначе stringBase+classname (pev+0). Затем ECX=context, вызов 1011adc0(diagnosticName,"CInterDoor",entity,10212480h,12 decimal), полный EAX возвращается без изменений; Ghidra void скрывает этот ABI.

Имя wire-блока остаётся литералом CInterDoor; условный targetname/classname — отдельный diagnostic argument writer, а не другое название блока. По ранее полностью проверенному serializer core обычный возврат writer устанавливает EAX=1 даже после части предупреждений/overflow; поэтому этот результат не доказывает успешную сериализацию. CBaseToggle Save10102b20 вызывает CBaseAnimating1000eaa0→CBaseDelay10102ac0→CBaseEntity10018000; после успешной базовой цепи добавляется собственная таблица12. Полное engine save-file persistence вне этого локального контракта.


## 0x10048bd0 CInterDoor_Spawn

ECX=this, без stack arguments, RET. Если BYTE pev.spawnflags+1a4h &4 ненулевой, пишет BYTE object+180h m_bDisabled=1. При отсутствии флага не очищает поле. Затем вызывает this.vtable+30h (для factory CInterDoor — Precache100488c0), перечитывает pev и задаёт solid+10ch=4, movetype+108h=7 отдельными DWORD-присваиваниями. Числа соответствуют SOLID_BSP/MOVETYPE_PUSH в SDK header; это не самостоятельная команда движения.

Далее 10119fe0(this,&pev.origin+8h), затем 1011a030(pev,&mins+dch,&maxs+e8h), затем engine SetModel(edict, stringBase+pev.model+b8h). SetOrigin wrapper сначала вызывает virtual+d0h; точная CInterDoor vtable связывает его с 1000db80, возвращающим0, поэтому player-only write this+618h здесь не выполняется. SetSize wrapper передаёт существующие bounds engine. Код не проверяет model-string, размер или результаты callbacks; pev перечитывается между ними.

После SetModel заново берёт gpGlobals и копирует его current time float bits в object+1a4h m_fNextUse. Затем DWORD object+1a8h и +1ach безусловно получают bf800000h (-1.0f), в порядке Out,In. Это затирает значения musicfadeout/in, ранее установленные KeyValue. Spawn не очищает остальные string/bool поля, не ставит Think/Use callback и не выполняет сам переход через дверь. Общие initial-memory гарантии allocator и дальнейший gameplay остаются отдельными вопросами.

## Native таблица CInterDoor 10212480, count12 decimal

| Поле | Offset | Type id | Count | Flags |
|---|---|---|---|---|
| m_sMusic | 0x18c | 1 | 1 | 0 |
| m_sLockedBy | 0x190 | 1 | 1 | 0 |
| m_sLockedMsg | 0x194 | 1 | 1 | 0 |
| m_sUnlockedMsg | 0x198 | 1 | 1 | 0 |
| m_sProperTarget | 0x19c | 1 | 1 | 0 |
| m_sUseUnlock | 0x1a0 | 1 | 1 | 0 |
| m_fNextUse | 0x1a4 | 15 | 1 | 0 |
| m_iMusicFadeOut | 0x1a8 | 0 | 1 | 0 |
| m_iMusicFadeIn | 0x1ac | 0 | 1 | 0 |
| m_bSilentRoom | 0x188 | 12 | 1 | 0 |
| m_bDisabled | 0x180 | 12 | 1 | 0 |
| m_iNewLevelDoorSound | 0x184 | 1 | 1 | 0 |

Type1 — pooled string, type15 — time, type0 — float, type12 — count*4 raw DWORD storage по проверенному serializer, не предположение из префикса имени. Прямые записи disabled/silentroom в KeyValue/Spawn затрагивают только BYTE, но это не меняет DWORD ширину type12 при сериализации; верхние3 байта локальные producers не очищают. Имена m_iMusicFadeIn/Out не делают поля целочисленными: инструкции FSTP и native type0 доказывают float. Четыре noise поля входят в ENTVARS как type17 soundname, а не в эти12 собственных descriptors. Связь базовых таблиц и функций сохранения см. [toggle persistence](../server-toggle-persistence/contract.md), [animation state](../server-animation-state/contract.md) и [serializer](../server-serializer/contract.md).

## Границы и следующая работа

Полностью закрыты фабрики/экспортные thunks и локальные KeyValue/ObjectCaps/Precache/Save/Restore/Spawn CInterDoor. Сохранённые поддержки Use10048f70, door-end10048e40, disable10049280 и exit-change10048ef0 обеспечивают навигацию/привязки, но не повышают полноту старых карточек автоматически. Полное поведение player transfer, пользовательских сообщений, sound/music consumer и callbacks после использования потребует отдельного native прохода. Аллокатор/engine-dispatch/внешняя сериализация, CRT locale/ошибки конверсии и фактические значения карты остаются за границами; exact LE32 и лексические C-ссылки в evidence не являются полным графом вызовов.
