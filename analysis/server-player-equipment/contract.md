# Выдача снаряжения: game_player_equip и player item creation

Только статический разбор оригинального server hl.dll SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Никаких запусков игры или изменений ресурсов. Адреса и смещения обозначены hex; размеры массивов 32 и stack buffer 128 — десятичные. 13 новых карточек; support тела не считаются новыми REVIEW.

## Цепь и структура

`PE game_player_equip100bb810 → factory100ba160 → vtable101d4528`.
`KeyValue+34 →100ba510 → base100babd0 → names/counts`; `Spawn+2c →100bafb0 →100baf80`.
`SP100fc4d0 / MP100c9210 PlayerSpawn → enumerate classname → virtual+e4 Touch100bb0f0 → master100ba460 → EquipPlayer100ba490 → player100e0a80 → CreateNamedEntity → DispatchSpawn → DispatchTouch`.
`Use+e8=100bb2c0` обходит master/spawnflags, но передаёт activator в тот же EquipPlayer.

RTTI: CGamePlayerEquip → CRulePointEntity → CRuleEntity → CBaseEntity. Private allocation size1e0h. Object+dc=m_iszMaster; names[32] +e0, counts[32] +160. Имя key обрезается на #, поэтому несколько key с разными #suffix дают повторяющиеся classname entries. Пустой names slot завершает выдачу целиком. Количество ограничено снизу1 при KeyValue, верхней границы нет. Сам объект не хранит «уже выдано».

Native ENTVARS даёт exact names: model+b8, movetype+108, solid+10c, effects+118, frame+134, frags+168, spawnflags+1a4, max_health+1b4, iuser3+250, iuser4+254. В item-give max_health и frags используются как pre-Spawn markers; их названия нельзя заменять словами health/ammo без consumer proof. Edict содержит entvars с+80h.

Native CGamePlayerEquip slots+38/+3c ведут в inherited CRuleEntity Save100baeb0/Restore100badb0: после base вызова собственная native таблица10216cf8 содержит только m_iszMaster (FIELD_STRING1,+dc,count1). В этих wrappers нет equipment arrays. Это ограниченное доказательство данного слоя сериализации, не утверждение, что весь engine не может восстановить map keys другим путём; helpers оставлены support, а не новые карточки.

## Полные локальные контракты

### 0x100ba160 CGamePlayerEquip_Instance

Получает существующие private data либо создаёт объект выдачи снаряжения размером 1e0h.

Cdecl с одним entvars* на stack, RET; EAX возвращает private object, хотя saved C объявляет void. Native factory записывает vtable101d4528. RTTI доказывает CGamePlayerEquip → CRulePointEntity → CRuleEntity → CBaseEntity, все mdisp=0. Экспорт game_player_equip100bb810 ведёт сюда.

Если entvars==NULL, вызывает engine CreateEntity(slot21,10222f9c); успешный edict преобразует в entvars=edict+80h. Затем читает entvars+20c edict и, если edict!=NULL и private[edict+7c]!=NULL, возвращает существующий pointer без проверки его типа или повторного Spawn.

Иначе вызывает PvAllocEntPrivateData(slot63,10223044) с edict и size1e0h. При успехе пишет только vtable и object+4=entvars; явного обнуления master/двух массивов здесь нет, свойства allocator остаются внешним контрактом. При failure allocation делает EAX=0, затем MOV [EAX+4],ESI: это null write, не безопасный NULL return. Если CreateEntity вернул NULL, ранее возможен read [NULL+20c]. Фактическая реакция engine allocator при нехватке памяти этим телом не установлена.

### 0x100bb810 game_player_equip_Export

Экспортированный вход game_player_equip передаёт исходные аргументы native фабрике.

PE export name/ordinal/EAT в evidence.json связывают game_player_equip с100bb810. Весь native диапазон состоит из пяти байтов E9 4b e9 ff ff: tail JMP100ba160; нет prologue, нового аргумента или изменения ECX.

Сохраняет cdecl stack entvars* и EAX результата фабрики. Ghidra разворачивает фабрику в псевдокод экспорта, но не следует считать его вторым самостоятельным allocator/constructor. Вся ветвистая семантика и failure paths описаны в100ba160.

### 0x100baf80 CRuleEntity_Spawn

Делает rule entity неподвижной, несолидной и скрытой.

Thiscall ECX=entity, RET без аргументов; последовательно пишет pev.solid(+10c)=0, pev.movetype(+108)=0, pev.effects(+118)=80h. Имена и смещения доказаны native ENTVARS1021aae0; NODRAW80h соответствует сохранённому ABI, это присваивание, не OR со старыми effects.

Перед каждой записью перечитывает object+4. Здесь нет NULL guards, scheduler, callback установки, модели, precache, очистки equipment arrays или выдачи предметов. Вызывается непосредственным base-call из100bafb0; идентификация CRuleEntity поддержана RTTI цепочкой CGamePlayerEquip.

### 0x100bafb0 CRulePointEntity_Spawn

Добавляет к rule Spawn сброс frame и model string.

Thiscall ECX=entity, RET без stack arguments. В CGamePlayerEquip vtable101d4528 slot+2c стоит этот общий point-rule Spawn, а не отдельный конструктор equipment.

Сначала100baf80, затем pev.frame(+134)=0.0 и pev.model string_t(+b8)=0. Не пишет modelindex, bbox, origin, arrays names/counts, master или nextthink. Возвращаемое EAX после последней загрузки pev не является обещанным семантическим результатом.

### 0x100ba460 CRuleEntity_CanFireForActivator

Проверяет master только при непустом activator и имени master.

Thiscall ECX=rule, stack activator*, RET4; возвращает полный EAX0/1. Если activator==NULL либо object+dc==0, немедленно EAX1. Поле+dc связано с native save descriptor10216cf8: FIELD_STRING1, m_iszMaster, count1, flags0.

Иначе вызывает cdecl10119060(master string_t,activator). При его нуле возвращает0, любой ненулевой результат нормализует в1. Helper10119060 имеет отдельный REVIEW с инверсией/состоянием master; здесь не подразумевается, что любое отсутствующее/неверное имя автоматически запрещает действие. Собственных побочных записей нет; NULL this при nonNULL activator не защищён.

### 0x100babd0 CRuleEntity_KeyValue

Обрабатывает master, movewith, skill и style перед разбором equipment keys.

Thiscall ECX=rule, stack KeyValueData*, RET4; поля входа key+4, value+8, handled+0c. Четыре exact case-sensitive byte comparisons, без NULL guards/trim/case folding. master → AllocString(value) в object+dc; movewith → AllocString(value) в object+18; skill → atoi(value) в signed DWORD+60; style → atoi(value) в DWORD+64.

Любое распознанное имя выставляет handled=1 и возвращается. Нераспознанное имя явно пишет handled=0, даже если входной handled был1. Ветви skill/style не ограничивают отрицательные/большие значения; точный overflow CRT atoi1016b55e здесь не специфицируется. Нет передачи неизвестного ключа базовому KeyValue или сброса других полей.

Native RTTI устанавливает base-owner CRuleEntity; m_iszMaster подтверждён собственной save таблицей. Для movewith/skill/style в этом пакете доказаны key→offset writes, а не полная семантика всех потребителей.

### 0x100ba510 CGamePlayerEquip_KeyValue

Добавляет до 32 имён предметов и положительные количества из неизвестных base-rule keys.

Thiscall ECX=equipment, stack KeyValueData*, RET4. Сначала100babd0; если handled!=0, больше ничего не делает. Иначе ищет первый нулевой DWORD массива names[32] в object+e0..15f. Если все32 ненулевые, возвращается, оставляя handled=0; предупреждения и замены существующего имени нет.

Копирует key через1011a760 в stack buffer128: helper останавливается на первом # или NUL, дописывает NUL, но не принимает размер и не ограничивает число байтов. Поэтому key вида weapon_glock#2 сохраняет weapon_glock; повторные одинаковые базовые имена занимают отдельные slots. Пустой key или начальный # дают пустую строку; её AllocString result записывается без проверки. Если engine возвратит0, slot останется пустым несмотря на handled=1/count write.

Вызывает AllocString(buffer), записывает names[i], затем atoi(value); signed result<1 заменяет1, иначе сохраняет без верхней границы. counts[i] в object+160..1df; handled=1. Не проверяет classname/prefix существующего оружия и не выдаёт предметы в KeyValue. Cookie1013dbb3 проверяет stack, но не является явным ограничителем копирования; ABI RET4 и early full-table path проверены в ASM.

### 0x100ba490 CGamePlayerEquip_EquipPlayer

Проходит equipment slots и запрашивает выдачу каждого предмета заданное число раз.

Thiscall ECX=equipment, stack recipient*, RET4, семантического return value нет. Сначала без NULL guard dereference recipient vtable и вызов slot+d0. При EAX0 завершает; native CBasePlayer vtable101a4da8+d0→100135b0 возвращает EAX1, CBaseEntity implementation1000db80 возвращает0. Это локальный player predicate, без проверки alive/health/team.

При принятом recipient идёт i=0..31. Первый names[i]==0 завершает весь проход, а не пропускает дырку. Signed counts[i]<=0 пропускает только текущий item. Иначе j=0; пока j<counts[i], вызывает100e0a80 с ECX=recipient и stack(stringbase+names[i],0,0), затем j++. Количество и name перечитываются между вызовами; заранее фиксированной snapshot-копии нет.

Не проверяет результат выдачи и не уменьшает counts; нет одноразового latch, master/spawnflags gate, выбора активного оружия, обнуления прежнего inventory или local ammo-cap. Повторные Touch/Use снова обходят список. Фактическое принятие/duplicate item/ammo определяется GiveNamedItem и dispatch/weapon callbacks; успешный вызов не доказывает появление предмета в inventory.

### 0x100bb0f0 CGamePlayerEquip_Touch

Автоматическая выдача: master gate и запрет spawnflags bit1 перед EquipPlayer.

Thiscall ECX=equipment, один stack other*, RET4. Сначала100ba460(other); если EAX0, завершение. Затем TEST BYTE pev.spawnflags(+1a4),1; при установленном bit0 также завершение. Иначе100ba490(other). Master проверяется раньше spawnflags даже при запрещённой выдаче.

Собственного NULL guard нет:100ba460(NULL) возвращает1; если spawnflags bit0==0, дальнейший EquipPlayer разыменует NULL. SP PlayerSpawn100fc4d0 и MP PlayerSpawn100c9210 перечисляют game_player_equip и вызывают именно virtual+e4, поэтому их автоматическая выдача подчиняется этим двум gates. Это не доказательство реального физического столкновения: Spawn делает point entity nonsolid. Нет cooldown/once latch.

### 0x100bb2c0 CGamePlayerEquip_Use

Явная активация выдаёт снаряжение activator без master и touch-only gates.

Thiscall ECX=equipment, четыре stack arguments (activator,caller,useType,value), RET10h. Native тело передаёт только первый DWORD activator в100ba490; остальные12 байт принимает и очищает, но не читает. Saved C показывает лишь один аргумент и скрывает этот ABI.

Use не вызывает100ba460 и не читает spawnflags. Значения USE_OFF/ON/TOGGLE и value не меняют поведение; даже NULL activator передаётся дальше без замены на caller/player1 и без защиты. EquipPlayer оставляет собственный virtual+d0 gate. Ни успешность выдачи, ни once semantics здесь не формируются.

### 0x100af7e0 CGameRules_ReadSingleplayerByteDC

Через native dynamic_cast читает byte+dc именно объекта CHalfLifeRules.

Thiscall ECX=rules, RET без stack arguments, результат только AL. Пять cdecl arguments в101411d6: (rules,0,&TypeDescriptor CGameRules1021d650,&TypeDescriptor CHalfLifeRules1021d66c,0). Имена считаны из native raw RTTI, helper101411d6 подтверждает checked RTTI cast и pointer-failure branch. Saved C скрывает весь setup и потому ошибочно выглядит как вызов без параметров.

При NULL результата cast выполняет XOR AL,AL; при успехе MOV AL,[EAX+dc]. Byte не нормализует к1, старшие24 EAX не обещаны. Поэтому это не общий multiplayer predicate и не произвольный global byte. CHalfLifeRules ctor100fc0f0 инициализирует этот byte нулём до RefreshSkillData; остальные его producers/смысл требуют отдельного анализа.

В GiveNamedItem100e0a80 применяется только к MP5 guard после developer/role исключений и только если global rules!=NULL. NULL global rules в caller вообще пропускает этот запрет; NULL passed непосредственно helper даст AL0 по cast contract. Чтение ничего не записывает.

### 0x100e0a80 CBasePlayer_GiveNamedItem

Проверяет ограничения специальных weapons, создаёт предмет у игрока и отправляет Spawn/Touch.

Thiscall ECX=player, stack(classname pointer,byte modeOverride,byte tmpBypass), RET0ch. Полного item/bool return contract нет. Четыре exact case-sensitive classname gates до CreateNamedEntity: weapon_famas требует AL!=0 от100dd000(40h,0,0); weapon_axe требует AL!=0 от100dd000(80000h,0,0). Это два отдельных запрета; остальные флаги их не обходят.

weapon_tmp запрещён только когда tmpBypass==0, donor predicate100e4d60 возвращает0 и DWORD player+3b4==0. weapon_mp5 запрещён только когда developer100e4c30==0, DWORD player+c4 не равен2,3,4, global rules10222ee4!=NULL и100af7e0(rules) возвращает AL0. При rules==NULL последний запрет не применяется. Role predicates подробно разобраны в server-multiplayer-flow; runtime producers player+3b4 здесь не установлены.

Если classname==NULL, ранняя ветка пропускает строковые gates, но НЕ возвращает: далее всегда передаёт CreateNamedEntity(slot23,10222fa4) integer classname−globals.stringbase(+98), без AllocString и без нормализации пути. Нужен адрес из корректного engine string pool; произвольный C-string pointer не преобразуется автоматически.

Успех требует nonNULL edict и nonzero EntOffsetOfPEntity(slot70,10223060). Иначе AlertMessage(type1,"NULL Ent in GiveNamedItem!\n") и выход; удаление уже созданного edict при offset0 не выполняется. При успехе копирует player.pev.origin в item edict+88..90; OR item.pev.spawnflags(+1a4) с40000000h, ставит item.pev.iuser4(+254)=1.

Если global BYTE10226488!=0, ставит item.pev.iuser3(+250)=1 и очищает global byte. Латч потребляется лишь после успешного CreateNamedEntity/offset gate, поэтому ранние оружейные запреты/failure сохраняют его. Его producer и смысл остаются открытыми. Нулевой latch не приводит к явному обнулению item.iuser3.

При player BYTE+1ef8!=0 и strstr(classname,"weapon_")!=NULL пишет item.pev.max_health(+1b4)=1.0. Затем при modeOverride!=0 и том же substring пишет2.0, перезаписывая1.0. Это не prefix comparison и не установка текущего health. Оба поля идентифицированы native ENTVARS; смысл marker в downstream weapon logic отдельно не объявляется. Player+1ef8 в данном наборе PLAYER save descriptors не назван.

Далее DispatchSpawn100167d0(item edict), затем DispatchTouch10016980(item edict,player.pev.edict(+20c)). После Spawn не проверяет его EAX, free/killed/private state или сохранность entity; dispatch имеет собственные gates. Нет прямой AddToPlayer, ammo write, item selection, rollback или удаления при неудавшемся Touch. Не следует называть завершение гарантированной выдачей.

Граница unlock support100dd000: тело загружает scriptsettings.dat и возвращает AL, а не полный EAX; load failure, EOF и branch100dd31a возвращают AL0, branch100dd953 после FreeFile даёт AL1. Для Famas/Axe caller проверяет именно AL. Полный набор строковых токенов, альтернативные flags и вся unlock state machine здесь не получает REVIEW; сохранённый support C/ASM оставлен для следующего прохода.

### 0x100e0ce0 CBasePlayer_GiveNamedItemWithFragsMarker

Создаёт предмет без специальных оружейных gates; неотрицательный аргумент записывает в weapon frags marker.

Thiscall ECX=player, stack(classname pointer,signed int marker), RET8. Передаёт classname−globals.stringbase в CreateNamedEntity; ни AllocString, ни NULL guard, ни Famas/Axe/TMP/MP5 gates100e0a80. Требует nonNULL edict и EntOffsetOfPEntity!=0, иначе тот же AlertMessage(type1,"NULL Ent in GiveNamedItem!\n").

При успехе копирует player origin, OR item spawnflags40000000h. Затем проверяет strstr на фактическом classname созданного entity (stringbase+edict.pev.classname), не на исходном pointer. Если содержит"weapon_" и signed marker>=0, CVTDQ2PS преобразует marker в float32 и пишет edict+1e8 = pev.frags(+168). Это не health и не доказанное прямое количество ammo; negative marker сохраняет старое поле.

Не пишет iuser4/iuser3/max_health, не потребляет global10226488 и не читает player+1ef8. Затем Spawn→Touch в том же порядке с теми же внешними failure границами. Дальнейший consumer frags marker требует отдельной карточки. Семантического return value/body ownership после callbacks нет.

## Что закрыто и что ещё открыто

Закрыты локальные ABI и ветви 13 входов: native export/factory/vtable связь, key parsing, 32-slot traversal, Touch против Use, специальные gates, native field writes, Spawn/Touch порядок и bool AL при RTTI helper. Никакое локальное завершение не объявлено гарантированным inventory pickup.

Дальше: полный unlock parser100dd000; producers player+3b4/+1ef8 и global10226488; setters/игровой смысл CHalfLifeRules byte+dc; weapon consumers max_health/frags/iuser3/iuser4; сохранение equipment map keys при restore за пределами inherited wrapper. Native engine string-pool/allocator zero initialization и полное CRT поведение переполнения atoi остаются внешними условиями. Это не запрос запускать игру.

## Воспроизводимость

`python analysis/server-player-equipment/capture.py` заново читает hash-pinned PE, сохраняет ограниченные objdump ranges и сырые RTTI/vtables/ENTVARS/PLAYER/export records. Все строки машинных байтов сравниваются с PE; BSS не читается как file-backed runtime state. `python analysis/server-player-equipment/verify.py` независимо проверяет hashes, byte rows, таблицы и пути карточек. Engine API labels сопоставлены через initializer100b4aa0 и eiface.h с regex, допускающим whitespace перед закрывающей скобкой. Оригинальная DLL никогда не загружается для исполнения. Общий каталог интегрируется отдельно; этот пакет содержит самостоятельные доказательства.
