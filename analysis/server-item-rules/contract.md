# Item rules: pickup, ammo lookup и respawn queries

Статический реверс original server hl.dll, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.13 новых полных локальных тел; target не исполнялся. Все offsets/адреса и stride2c — hexadecimal, количества32/31/100/20 — decimal. Ghidra C проверен полным bounded ASM, не является оригинальным исходником.

Навигация: [pickup/ammo](../server-item-pickup/contract.md) → rules7c/a8 и linked [player inventory](../server-player-inventory/contract.md). Native RTTI/vtables SP101de3b0 иMP101d608c доказывают slots. Engine table binding100b4aa0 и pinned eiface.h связывают61 AlertMessage/105 NumberOfEntities; globalvars+94 соответствует maxEntities в pinned progdefs.h. На первом плане числовые native accesses, headers дают имена. ItemInfo producer1011fb60 уже имеет REVIEW в [resource precache](../server-resource-precache/contract.md); он поддерживает11 DWORD stride2c и регистрацию ammo. Runtime ItemInfo values/полный roster и derived virtual13c пока не объявлены восстановленными.

Полнота ограничена перечисленными13 entry. Четыре saved support bodies не новые REVIEW. Нет runtime/визуальной проверки, изменения игры или ресурсов. Native descriptors различают pev и object; read-only verification проверяет bytes, сохранённые значения таблиц и ABI, а не успешную реконструкцию игры. Производители/reset registry, повреждённые списки и произвольные dynamic callbacks остаются отдельной работой.

## 0x1011d0e0 — PlayerWeapon_ExtractClipAmmoToRecipientOwner

Передаёт clip исходного оружия владельцу recipient через GiveAmmo; clip не обнуляет.

Thiscall ECX=source S, один stack recipient R, RET4, полный EAX. Если R.clip(+1e4)==-666, немедленно EAX1 без чтения S/owner/table и без изменений. В отличие от ExtractDefaultAmmo1011d030, здесь нет дополнительного maxClip!=-1 условия.

Иначе кэширует S.clip, primaryName10231890+S.id*2c и vptr первоначального R.owner(+160); PUSH0 заранее кладёт четвёртый аргумент будущего GiveAmmo. Затем вызывает101202f0 с ECX=S, без собственного stack argument: декомпилированный FUN_101202f0(0) ошибочно относит staged0 к этому helper.

После carry helper заново читает R.owner, передаёт этот новый pointer в ECX, но target берёт из уже сохранённого vptr старого owner+94. Stack(count,primaryName,carryLimit,0), где count=0 только при S.clip==-1, иначе исходный signed clip, включая другие отрицательные значения. Результат virtual94 возвращает без нормализации в полном EAX; primaryName может бытьNULL.

S.clip, R.clip и S.defaultAmmo здесь не меняются; нет secondary ammo, sound, index assignment, remove либо owner/list mutations. Callback может это сделать отдельно. Если carry query изменит R.owner, возможен старый vptr с новым ECX; lifetime/null/bounds guards отсутствуют. Native weapon table101a7804+188=1011d0e0; базовый virtual184 продолжен отдельно в server-item-pickup.

## 0x1011e250 — ItemInfo_MaxAmmoCarryByStringId

Ищет ammo name в32 ItemInfo строках и возвращает первый primary/secondary carry limit.

Cdecl stack string_t, plain RET, полный EAX signed int. Это offset в engine string pool, а не char*. Кэширует указатель globals10223188 в EBX, но читает globals+98 перед каждым фактическим сравнением и перед diagnostic.

Обходит32 записи с stride2c, индексы0..31: primaryName10231890 и primaryMax10231894, затем secondaryName10231898 и secondaryMax1023189c. Для каждого ненулевого name сравнивает bytes с globals.pStringBase+input до NUL, case-sensitive. Primary в ранней строке имеет приоритет над secondary там же и всеми поздними совпадениями; NULL name пропускается, пустая строка допустима. Никакой rules/weaponstay override здесь нет.

На первом match возвращает соответствующий DWORD max без clamp/проверки знака. После проверки последней строки увеличивает cursor до10231e18; signed JL задаёт точную границу32. При отсутствии match вызывает engine AlertMessage(1,"MaxAmmoCarry() doesn't recognize '%s'!\n",resolvedInput), затем EAX=-1.

Нет проверки input0, границ string pool, валидности name pointers или table readiness. Нет аллокации, регистрации ammo, изменения счётчика либо выдачи игроку. Сравнение здесь отличается от case-folded ammo registry100dfe60; смешивать эти две политики нельзя.

## 0x100af520 — Rules_CanHaveAmmoBelowSignedLimit

Разрешает ammo только при известном имени и signed количестве игрока меньше переданного предела.

Virtual slot+a8 у CHalfLifeRules и CHalfLifeMultiplay. ABI stack(player,ammoName,maxCarry), RET0c; входной ECX rules не читается, затем ECX меняется наplayer. Полный EAX ровно0/1.

NULL ammoName даёт0. Иначе cdecl100dfe60(name) возвращает индекс; signed index<=-1 даёт0. При index>=0 вызывает100db130 с ECX=player и stack index. Сравнивает текущий signed count с signed maxCarry: count<maxCarry→1, иначе0. Не проверяет player alive, положительность maxCarry, count или запрошенное количество ammo.

Обычный name lookup выдаёт только1..31 либо-1, но локальный gate сам допускает0. Отрицательный счётчик может пройти при нулевом/отрицательном лимите, если он меньше. Нет clamp, выдачи ammo, sound или network; это predicate, а не подтверждение фактического изменения инвентаря.

## 0x100af560 — Rules_CanHavePlayerItemWithUseAndAmmoGate

Общий допуск подбора: deadflag, use/auto-pickup gates, запас ammo и наличие оружия.

Thiscall ECX=rules, stack(player P,item W), RET8, полный EAX0/1. Сначала P.pev.deadflag(+174) должен быть0, иначе0. HP/IsAlive здесь не проверяются. Затем допуск есть при любом DWORD1022647c!=0 или10226480!=0, либо W.pev.iuser4(+254)==1, либо ((P+22b4)|(P+22b0)|P.pev.button(+184))&20h!=0. Native PLAYER имена22b4=m_afButtonReleased,22b0=m_afButtonPressed; не только удержание use. При отсутствии всех gates EAX0.

После допуска читает primaryName10231890+W.id*2c. При nonNULL кэширует rules vptr, вызывает101202f0(W) для carry limit, затем cached rules virtual+a8 с ECX=исходный rules и stack(P,name,carry). Ненулевой полный EAX callback немедленно даёт1. Name и vptr захвачены до carry callback.

Если primaryName==NULL либо ammo predicate вернул0, вызывает P.100e2410(W). Его EAX0 (нет такого classname в выбранной slot-chain) даёт1, ненулевой bool даёт0. Так новый weapon допускается даже без места для его ammo, но duplicate с полным запасом отклоняется. Полный single-chain lookup разобран в server-player-inventory, не заменён шестисписочным100e2380.

Здесь нет remove, pickup attachment, выдачи, статистики, target firing или очистки iuser4. Их делает DefaultTouch и последующие callbacks. Нет NULL rules/player/item/owner/table bounds guards. Numeric globals1022647c/80 только читаются; полное их lifecycle и смысл режимов остаются внешней границей. SP table101de3b0+7c=этот entry; MP вызывает его после дополнительной weaponstay проверки.

## 0x100c6f50 — Multiplay_CanHavePlayerItemWithWeaponStay

При mp_weaponstay блокирует повторный ID в шести цепочках и делегирует общему pickup predicate.

Thiscall ECX=MP rules, stack(P,W), RET8, EAX0/1. COMISS(mp_weaponstay.value1021466c,+0)/JBE пропускает дополнительный поиск при<=0 либо unordered NaN (при masked FP exceptions). Только ordered>0 и отсутствие bit8 в BYTE ItemInfo.flags102318ac+W.id*2c включает поиск.

Кэширует W.id, обходит ровно6 DWORD heads P+2514..2528, в каждой цепочке item.next+164, сравнивает item.id+168 с исходным ID. Первое равенство возвращает0. Здесь не classname, не registry ammo name, не GUI descriptor; slot index и id границы не проверяются, защиты от циклов нет.

При отсутствии совпадения или пропуске дополнительного поиска вызывает100af560 с первоначальным ECX rules и stack(P,W), возвращает его полный EAX. Ветка descriptor bit8 прыгает прямо к подготовке аргументов, пока ECX ещё исходный; после реального обхода ECX восстановлен из EBX. Не выполнять лишний lookup/допуск при duplicate, даже если общий gate мог разрешить.

Начальный globals.value читается один раз. Native cvar descriptor10214660 содержит имя mp_weaponstay, string default0, flags4; PE value0 не считается текущим runtime значением. В этой функции нет изменения инвентаря, respawn либо ammo.

## 0x100fc2b0 — SinglePlayer_WeaponRespawnTimeMinusOne

SP respawn-time query возвращает ST0=-1 и потребляет один argument.

CHalfLifeRules vtable+88. Native две инструкции: FLD float32 literal101a13d0=-1.0; RET4. ECX и один stack argument не читаются. Результат именно ST0, EAX не определён этим телом; Ghidra отсутствие аргумента не соответствует RET4.

Не удаляет предмет и не отключает расписание самостоятельно. Caller Respawn1011e630 округляет ST0 в float32 и передаёт replacement.virtual10 как абсолютное время. Политика обработки отрицательного deadline принадлежит scheduler и не выводится из одной константы.

## 0x100fc2c0 — SinglePlayer_TryWeaponRespawnNoDelay

SP try-respawn query всегда возвращает ST0=+0.

CHalfLifeRules vtable+8c. Native FLDZ; RET4; ECX и argument item не читаются. Возвращает x87+0, не bool в EAX.

В AttemptToMaterialize1011bb00 этот query вызывается с item и нулевой результат ведёт в Materialize; сам entry не меняет callbacks, visibility или state. Runtime override и caller lifetime отдельно от полного локального constant body.

## 0x100fc680 — SinglePlayer_WeaponRespawnSpotCopyOrigin

Копирует origin исходного предмета в hidden Vector output и возвращает этот указатель.

Virtual+90 соответствующей SP/MP rules table. ABI two stack DWORD(outVector,item), RET8; входной ECX rules не используется. Читает item.pev и последовательно копирует три DWORD pev+8/+c/+10 в out+0/+4/+8, возвращает out pointer в EAX. Это не void и не struct return через ST0.

Копирование побитовое, без float arithmetic, Trace/DropToFloor/поиска свободного места или изменения origin source. Нет NULL/alias/overlap guard; порядок load/store последовательный, не предварительный snapshot всех12 bytes. При обычном отдельном scratch output caller получает точную исходную origin. Respawn1011e630 передаёт returned EAX в entity factory; выбор другого места для derived rules не доказан этим entry.

## 0x100ca550 — Multiplay_WeaponRespawnSpotCopyOrigin

Копирует origin исходного предмета в hidden Vector output и возвращает этот указатель.

Virtual+90 соответствующей SP/MP rules table. ABI two stack DWORD(outVector,item), RET8; входной ECX rules не используется. Читает item.pev и последовательно копирует три DWORD pev+8/+c/+10 в out+0/+4/+8, возвращает out pointer в EAX. Это не void и не struct return через ST0.

Копирование побитовое, без float arithmetic, Trace/DropToFloor/поиска свободного места или изменения origin source. Нет NULL/alias/overlap guard; порядок load/store последовательный, не предварительный snapshot всех12 bytes. При обычном отдельном scratch output caller получает точную исходную origin. Respawn1011e630 передаёт returned EAX в entity factory; выбор другого места для derived rules не доказан этим entry.

## 0x100c8850 — Multiplay_WeaponRespawnAbsoluteTime

Возвращает time+0 при weaponstay для обычного оружия, иначе time+20 через ST0.

Thiscall rules, stack item, RET4, ST0; ECX не читается. Только ordered mp_weaponstay.value>0 и отсутствие bit8 в BYTE ItemInfo.flags102318ac+item.id*2c выбирает короткую ветвь. COMISS/JBE направляетNaN/<=0 в обычную ветвь. При<=0/NaN item вообще не разыменовывается; при>0 нет NULL guard.

Короткая ветвь FLD globals.time(float32); FADD native+0.0. Обычная FLD globals.time; FADD float32 literal101a1eec=20.0. Возвращается x87 intermediate без локального округления в float32; caller может округлить. Не упрощать time+0 до чистой bitcopy: signed zero/FP exceptions могут различаться. Полный x87 control word здесь не устанавливается.

Смысл результата в прямом Respawn1011e630 — absolute deadline. Однако TryRespawn100c88a0 может вернуть тот же результат в AttemptToMaterialize, который использует его как delay через virtual8; это фактическая цепочка, а не повод исправлять оригинальное значение на20. Здесь нет scheduling, materialize или hidden flag writes.

## 0x100c88a0 — Multiplay_TryWeaponRespawnAtEntityLimit

При редком ItemInfo flag8 и нехватке entity slots возвращает dynamic respawn time, иначе нулевую задержку.

Thiscall ECX=rules, stack item, RET4, ST0. NULL item или item.id==0 сразу FLDZ. Иначе читает BYTE ItemInfo.flags102318ac+id*2c; без bit8 также FLDZ. Отрицательный/большой id не отсекается.

На flag8 вызывает engine NumberOfEntities(), slot105/global102230ec. После callback перечитывает globals10223188 и signed maxEntities(+94); порог wrap32(maxEntities-100). Signed count>=threshold вызывает rules.virtual+88(item) с сохранённым ECX и напрямую возвращает его ST0. count<threshold→+0. Текущий mp_weaponstay здесь не читается: он влияет только через конкретный target+88.

Native CHalfLifeMultiplay+88=100c8850; при flag8 тот target всегда выбирает time+20 даже при weaponstay>0. Ранее разобранный AttemptToMaterialize1011bb00 получает значение как delay, а не новое абсолютное время. Caller добавляет его через virtual8, что может дать now+(now+20); временные snapshots и override могут различаться. Это статический вывод о базовой цепочке, не наблюдение запуска.

Нет reservations, удаления entity, повторного подсчёта после query, clamp deadline или исключения отрицательного count/maxEntities. Результат не bool: ненулевое float вызывает повторную попытку на стороне caller.

## 0x100db130 — Player_AmmoInventoryAtIndexOrMinusOne

Читает DWORD ammo inventory по index, отдельно обрабатывая только-1.

Thiscall ECX=player, stack signed index, RET4, полный EAX. Если index==-1, возвращает EAX=-1 (OR EAX,EAX оставляет значение); player не разыменовывается. Иначе MOV EAX,[ECX+index*4+2540], включая index0, другие отрицательные и выходящие за массив.

Native PLAYER descriptor именует+2540 m_rgAmmo с count32; это доказательство хранения, но не bounds check. Функция не ограничивает count, не читает ammo registry и не проверяет alive/player NULL. Правила допустимого индекса лежат на callers.

## 0x100dfe60 — AmmoRegistry_FindIndexCaseFolded

Ищет ammo name в registry slots1..31, пропуская slot0 и пустые pointers.

Cdecl stack char*ammoName, plain RET, полный signed EAX. NULL input сразу-1. Иначе индексы1..31 включительно: DWORD name pointer10231e08+index*8; NULL pointer пропускается, прочие передаются comparator1017bcbb(input,name). Первый EAX0 возвращает index. После31 без match→-1.

Comparator разобран в server-sentence-lifecycle: default ASCII A..Z fold и отдельная runtime mapped-byte/locale ветвь. Здесь нет собственной нормализации/копии имени; это не case-sensitive ItemInfo MaxAmmoCarry1011e250. Не читать library label как доказательство всей locale policy.

Возвращает loop index, а не соседний registry DWORD10231e0c+index*8. Support writer1011b4d0 сканирует0..31, увеличивает registry counter с wrap в0 и записывает name/index; поэтому запись вslot0 может существовать, но этот lookup её намеренно пропускает. Противоречие диапазонов сохранено по native. Данные runtime, не нулевые PE bytes.

Нет регистрации, выделения, увеличения ammo или изменения counter. Пустая NUL строка input допускается и сравнивается с nonNULL strings. Lifetime name pointers/конкурентная смена registry/полный reset остаются внешними границами.

