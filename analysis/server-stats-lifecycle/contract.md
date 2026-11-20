# Статистика: начало, запрос новой кампании и текстовая запись состояния

Пять actual entries оригинального `hl.dll`, только статический разбор. Полные primary C и bounded ASM сверены с исходным PE. Имена proposed_name аналитические, кроме доказанных exports. Пакет не запускает DLL/игру и не записывает игровые cfg; capture читает файл и дизассемблирует его. Общий каталог не изменяется.

## Карта владения и границы

`cof_begingame(100aa110) → factory1008fce0 → CCoFGameBegin.vtable+e8 Use100a4080 → player flags/cvars`. Вызов Use не находится внутри фабрики: его осуществляет внешняя map/entity dispatch система. Вторая независимая цепь: существующий CCoFCoopStats → RestartCampaign1009a390 → engine ChangeLevel. Текстовый writer1004a6e0 читает player и item chains, но его gameplay caller не установлен данным пакетом. Эти функции нельзя склеивать в выдуманный единый reset/save/restart pipeline.

Смежные проверенные материалы: [расчёт score](../server-stats-score/contract.md), [CoopStats Use и unlock callers](../server-unlock-callers/contract.md), [item ownership](../server-item-lifecycle/contract.md), [native save descriptors](../server-serializer/contract.md). PLAYER table описывает `playerstats` как 80 байт с638; локальные offsets и типы отдельных обращений доказаны инструкциями, а не названиями C struct.

## Подтверждённые локальные контракты

### 0x100a4080 — CCoFGameBegin_Use_StartStats

Активирует статистику у разрешённых игроков, сохраняет difficulty/language и выставляет флаги начала; счётчики не обнуляет.

Native thiscall ECX=this, четыре stack аргумента Use, RET10h. Проверяет только первый (activator) на NULL; при NULL ничего не делает. Остальные три аргумента не читаются. RTTI CCoFGameBegin и vtable101c8ce0+e8 подтверждают владельца и этот virtual Use; это не object callback field+80. Начальный signed maxClients(globalvars+90)>=1, затем цикл i=1..текущее maxClients, которое перечитывается в конце каждого оборота. Resolver10119680(i) возвращает player private либо NULL; NULL пропускается. Нет отдельного IsAlive/activator-is-player guard.

Для каждого ненулевого player сначала BYTE+678=1. Затем engine CVarGetFloat("difficulty") возвращает ST0, helper1013df50 потребляет ST0 и возвращает EAX; DWORD+67c=EAX. Затем карта из globalvars.mapname(+c)+stringPool(+98) точно, с учётом регистра сравнивается с "c_nightmare" и "c_doc_city". Только при совпадении BYTE+679=1; на других картах прежнее значение НЕ обнуляется.

После проверки карты заново CVarGetFloat("cof_subtitlelanguage")→1013df50→DWORD player+684. Helper на обычных конечных значениях в диапазоне int32 отбрасывает дробь к нулю; нативный CPU gate102328ec>=2 выбирает FISTTP, иначе ветвистый x87 разбор. Никакого диапазонного clamp difficulty/language здесь нет. Out-of-range/NaN и FP exceptions не превращены в безопасные значения приложением; детали аппаратных исключений/CRT conversion вне гарантии игрового entry.

Читает this.pev.spawnflags(+1a4) low BYTE bit1. Если установлен: BYTE player+680=1 и player.pev.vuser1.x(+268)=float32 1.0. Иначе только vuser1.x=0; BYTE+680 не очищается. Это две различные записи в разных владельцах. Не следует считать vuser1.x полем внутри playerstats.

Native PLAYER descriptor задаёт весь playerstats как offset638, type14, count80 байт; он не перечисляет отдельные bool/int члены. Локальные ширины доказаны инструкциями. Entry не обнуляет shots, hits, kills, время, damage и весь блок638..687, не рассчитывает score, не посылает сообщение и не создаёт файл. Повторный Use повторяет cvar чтения и сохраняет latched679/680, если текущие условия не устанавливают их. Остальные производители/сбросы статистики остаются отдельным разбором.

### 0x1008fce0 — CCoFGameBegin_CreatePrivate

Возвращает уже имеющийся private либо выделяет 0xdc байт и связывает объект CCoFGameBegin с entvars.

Native cdecl, один stack entvars*, обычный RET; EAX возвращает private pointer на нормальном пути, несмотря void в decompiler. При NULL entvars вызывает engine CreateEntity. Ненулевой edict даёт entvars=edict+80. Если CreateEntity вернул NULL, последующее чтение entvars+20c обращается к нулевой базе; безопасного NULL return нет.

Далее edict=entvars.pContainingEntity(+20c). Если edict и edict.private(+7c) ненулевые, немедленно возвращает существующий private без проверки его типа, без смены vtable и без записи pev. Иначе PvAllocEntPrivateData(edict,0xdc). При успехе записывает vtable101c8ce0 в private+0 и исходный entvars в private+4, возвращает private. Иных явных конструкторных записей, вызова Spawn или инициализации статистики в этом теле нет; allocator может иметь свои действия вне тела.

При неудаче private allocation native XOR EAX,EAX, затем MOV [EAX+4],ESI. Это обращение по адресу4, а не корректный NULL return. При NULL pContainingEntity allocator вызывается с NULL edict. Порт не должен выдавать этот путь за успешно обработанную ошибку оригинала. Размерdc — размер map entity, а не playerstats80.

### 0x100aa110 — cof_begingame_ExportThunk

Экспорт cof_begingame передаёт аргумент и возврат внутренней фабрике CCoFGameBegin.

PE export cof_begingame имеет actual entry100aa110. Полное native тело — пять байт E9 cb5bfeff, tail JMP1008fce0. Один исходный stack entvars* и return address сохраняются; фабрика возвращается непосредственно вызывающему, EAX не изменён обёрткой. Сам thunk не вызывает Use или Spawn и не сбрасывает статистику.

Сохранённый C может отображать семантику thunk как развёрнутую фабрику; это не отдельная копия native реализации. Allocation/reuse/failure контракты принадлежат1008fce0. Native RTTI/vtable подтверждают CCoFGameBegin; имя exports подтверждено PE export table, не только именем файла.

### 0x1009a390 — CCoFCoopStats_RestartCampaign

Запрашивает ChangeLevel к карте из pev.message либо cof_campaign_01 с NULL landmark.

Native thiscall ECX=this, нет stack аргументов, обычный RET. PE export ?RestartCampaign@CCoFCoopStats@@AAEXXZ подтверждает владельца и приватный метод; это не вывод только из соседних адресов.

Берёт this.pev.message(+1d8). При ненулевом string ID выбирает globalvars.stringPool(+98)+ID, при нулевом — точный literal "cof_campaign_01". В ОБЕИХ ветках engine ChangeLevel(map,NULL), API slot6/address10222f60. NULL landmark кладётся на stack до проверки message; decompiler теряет этот второй аргумент в одной ветке. И пустой ненулевой string ID, и произвольное имя передаются без дополнительной валидации.

Нет очистки playerstats, выбора сложности, проверки готовности игроков, записи cfg или удаления think callback в этом теле. Вызов существующим CCoFCoopStats Use/таймером описан отдельно в server-unlock-callers. Реальная смена карты и судьба игроков после engine callback здесь не доказаны; запрос не тождественен завершённой загрузке карты.

### 0x1004a6e0 — WritePlayerStateTextCfg

Пишет HP, stamina, quick-select, девять счётчиков и оружейные цепи в txtfiles/<netname>.cfg через native stream.

Native принимает один stack player* и завершает RET4: callee снимает аргумент; входной ECX как this не используется. NULL player немедленно проходит к эпилогу без файловых действий. Нормальный EAX не является документированным bool/успехом. SEH/cookie epilogue не означает безопасную обработку всех ошибок и bounds.

Локальный буфер начинается EBP-410h, до cookie EBP-10h остаётся400h (1024) байта. Engine GetGameDir(slot99,address102230d4) получает только указатель. Затем ручные NUL scans/copies без видимого ограничения собирают <gameDir>/txtfiles/<netname>.cfg; netname=player.pev.netname(+1d4)+global stringPool. Слеши, точки, newline и длина имени не проверяются и не экранируются. Нет mkdir или временного имени/rename. Конструктор10049b60 получает ECX=stream и stack(path,2,40h,1); численные режимы подтверждены, полная CRT трактовка open/share/locale вынесена за границу entry.

Первая строка label "health ". Native COMISS 0,health; JB ведёт в floating insertion, то есть health>0 ИЛИ unordered NaN передаётся1004a350 как float32. Ordered health<=0, включая ±0 и -Inf, записывает integer50 через1004a1a0. Поэтому C запись if(0<health) недостаточна для NaN. Затем "stamina " и float32 player+21f0 без clamp/проверки. После каждого значения строковый100493b0 вставляет literal LF (0a00 по101a84c8); внешний text-file backend может преобразовать LF на диске.

Далее quicksel1/quicksel2/quicksel3 в этом порядке. NUL scan массивов player+204c/+20cc/+214c; только unsigned strlen>1 создаёт строку с label "quicksel1 ", "quicksel2 ", "quicksel3 ", исходным текстом и LF. Пустая и однобайтовая строки пропускаются. Никаких кавычек, escaping, размерного лимита или восстановления NUL здесь нет.

Девять DWORD значений идут в строгом порядке через integer insertion1004a1a0: +63c→"playerstats_shotsfired "; +640→"playerstats_shotshit "; +644→"playerstats_syringesused "; +670→"playerstats_monsterskilledmelee "; +674→"playerstats_monsterskilledshooting "; +664→"playerstats_seconds "; +668→"playerstats_minutes "; +66c→"playerstats_hours "; +658→"playerstats_damagetaken ". Все labels — raw PE literals, все offsets — PUSH [player+offset]. Каждый завершается LF. Значения читаются по очереди между stream calls, а не из предварительного snapshot. Не выводятся ratio+64c, saves+650, score+660, режим/язык/флаги+678..684 и весь блок целиком.

Потом шесть голов player.m_rgpPlayerItems(+2514..2528), подтверждено native PLAYER table; m_rgAmmo(+2540) имеет32 элемента. Для каждой ненулевой головы один раз сравнивает head.pev.classname с "weapon_action" с учётом регистра. Равенство пропускает ВСЮ цепь. Иначе для каждого узла, включая следующие weapon_action без повторной проверки, пишет три строки: текущий classname; integer item+1e4; integer player[2540+4*item(+1dc)]. Переходит по item+164 до NULL. Эти поля соответствуют ранее описанным clip/ammo-index/item-next в server-item-lifecycle; здесь доказаны точные обращения. Нет проверки ammo index0..31, cycle guard, ограничения длины цепи, повторной проверки classname, сохранения active-item выбора или всего инвентаря.

ABI цепочки вставки исправляет неполный C:100493b0(stream,char*) возвращает stream;1004a1a0(this=stream,int32) и1004a350(this=stream,float32) возвращают EAX=исходный stream, RET4. Float helper расширяет float32 в double для virtual num_put+14; integer передаётся facet+24. Строки/числа не форматируются локальным printf. Точная locale/precision/NaN spelling/байты файла зависят от stream facet и CRT, не установлены одними literals.

Завершение:100497e0(stream)→10037bd0 flush-путь, затем1004cfb0(this=stream+4) close. Captured close вызывает10037080 при file pointer!=NULL, затем fclose1016fd61; возвращает NULL при пустом file pointer, false подготовке или ненулевом fclose, после чего всё равно обнуляет file pointer и сбрасывает buffer fields. При NULL результата writer обновляет ios state: ((oldState | (rdbuf ? 0 : 4)) & 15h) |2. Если newState&exceptionMask ненулевое, выбирает badbit (bit4), иначе failbit(bit2), иначе eofbit literal и идёт в C++ throw. Иначе, как и при успешном close, вызывает1004a510 destruction. Open/insert/flush тоже могут установить stream error либо бросить исключение; верхний entry не проверяет отдельный success result и не делает rollback. Нельзя гарантировать полную/атомарную запись, отсутствие частичного файла или успешную загрузку обратным reader.

Связь с gameplay caller и обратными читателями не закрыта этим пакетом: текстовый поиск сохранённого C по FUN_1004a6e0 не нашёл вызовов вне самого файла, что не доказывает отсутствие native callers, aliases или indirect dispatch. Pending100c5300 и10029090 — ориентиры отдельного чтения/восстановления, не уже проверенный round trip. Собственно низкоуровневые formatter/file/open/exception backends остаются внешними к игровому контракту. Здесь не выполнялось никакой записи игрового cfg.

## Воспроизводимость и оставшиеся вопросы

`python analysis/server-stats-lifecycle/capture.py` создаёт только evidence/ASM этого пакета из pinned оригинала. `write_notes.py` создаёт этот текст и пять notes; `verify.py` сверяет source hashes, все строки машинных байт, raw PE, native vtable, save descriptors, API binding, exports и IDs карточек. Это статическая проверка свидетельств, не тест исполнения и не подтверждение результата файловой записи.

Граница: не восстановлены все writers/reset 80-байтового playerstats, native callers текстового writer, полный reader round trip, глобальное locale/stream состояние, engine ChangeLevel и derived map/entity dispatch. Точные следующие ориентиры: pending100c5300/10029090 и direct/indirect native refs1004a6e0. Pending не означает уже доказанную конкретную роль всего тела.

## Продолжение разбора: pass15

Reader100c5300 теперь разобран в [text reader](../server-state-reader/contract.md), включая grammar, getline, stats/weapon ветви и попытку DeleteFile до закрытия stream. Quicksel строки не загружаются в player: native direction обратное. Integer parsing HP/stamina отличается от float writer; это не обещание точного roundtrip.10029090 — отдельное восстановление двух банков памяти в [state restore](../server-state-restore/contract.md), не обратный текстовый reader. Producers этих банков, map parser100c6570 и native callers writer1004a6e0 остаются задачами.

## Продолжение разбора: pass16

Актуальная очередь pass16: capture1002a480 и constructor/GUI helpers разобраны в server-state-capture; map parser100c6570 — server-map-equipment-parser; переходы/отключение/death restart — server-state-lifecycle. Их прежние pending-упоминания выше теперь закрыты отдельными контрактами. Native callers text writer1004a6e0/reader100c5300, прочие stats producers/reset и header M[0] writers остаются открыты. Не смешивать file cfg reader с двумя memory banks.

## Продолжение разбора: pass17

Pass17 caller audit1004a6e0/100c5300 и manager header находится в server-state-reachability. Точные области и отрицательные результаты сохранены; direct entry scan завершён, косвенные/computed/interior calls и ненулевые header writers не закрыты. Это навигационный audit0, а не повторная классификация известных C bodies.
