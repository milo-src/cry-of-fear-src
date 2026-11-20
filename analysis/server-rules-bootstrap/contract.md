# Создание игровых правил и ограниченная цепь intermission

Статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Одиннадцать новых actual C entries. Игра и DLL не исполнялись, исходные ресурсы не изменялись. [capture.py](capture.py) воспроизводит ограниченный objdump и чтение PE; [verify.py](verify.py) сверяет C/ASM, каждую строку машинных байтов, таблицы и строки с оригиналом. [evidence.json](evidence.json) отделяет primary от support. Наличие support не означает полного разбора этих функций.

Адреса и смещения обозначены hex; обычные числа и длительности — десятичные. Имена классов взяты из native RTTI, функции ниже имеют предложенные имена. Engine callback slots привязаны через сохранённый GiveFnptrsToDll `100b4aa0`, базу `10222f48` и pinned eiface.h. SDK используется для названий ABI-полей, но не заменяет машинный код.

## Карта и владельцы

```text
world Precache10120eb0
  → освободить старый rules через1013dba5 (без virtual destructor)
  → 100af710: ServerCommand("exec game.cfg\n"), ServerExecute
      deathmatch ordered ==0 → allocation E8 → CHalfLifeRules100fc0f0
      иначе, включая NaN → allocation E4 → CHalfLifeMultiplay100c5180
  → result сохраняется в global10222ee4
  → world отдельно инициализирует общие поля правил

game_end Use100bb290 → rules.virtualF4
  → MP100c8580 → tail JMP rules.virtualFC → 100c8aa0
player PreThink100ef2d0 → rules.virtual54 → MP100c95f0(player)
MP Think100c9ae0 [support, только хвост разобран здесь]
  → intermission deadline/input gate → rules.virtualF8 → mapcycle100c6fd0

player Spawn100f4090 → rules.virtual50
  → SP100fc4d0(player): deferred map target + game_player_equip
```

Native vtables: `CHalfLifeRules=101de3b0`, сохранено F8h bytes; `CHalfLifeMultiplay=101d608c`, сохранено100h bytes. COL/type/hierarchy подтверждают обоим базовый `CGameRules` с mdisp0. Это конкретные таблицы данной DLL, не обещание совпадения всех методов с SDK.

| Slot | SP target | MP target | Установленная роль в этом пакете |
|---|---|---|---|
| +00 | 100af810 | 100c9640 | skill refresh; MP дополнительно +a0=time |
| +04 | 100fc610 | 100c9ae0 | кадр правил; MP body остаётся support |
| +2c | 100fc410 | 100c9090 | MP читает globals.coop и преобразует в int |
| +50 | 100fc4d0 | 100c9210 | player Spawn callback |
| +54 | 100fc600 | 100c95f0 | player PreThink callback |
| +64 | 100fc140 | 100c52d0 | разные predicates difficulty/crosshair |
| +f4 | 100c8570 | 100c8580 | MP tail-dispatch на +fc |
| +f8 | вне сохранённой SP таблицы | 100c6fd0 | выбор следующей карты, не primary |
| +fc | вне сохранённой SP таблицы | 100c8aa0 | начать intermission |

Остальные слоты сохранены как числовая карта, но их полная семантика здесь не заявлена. Конструкторы не вызывают базовый constructor и не делают memset всего allocation. Отсутствие локальной записи не доказывает значение поля в runtime.

## 100af710 — Rules_CreateForCurrentDeathmatch

Native cdecl без входных stack arguments, RET; результат pointer или локальный EAX0. Псевдокод ошибочно добавляет cookie как аргумент ServerCommand/constructor: ASM передаёт в ServerCommand только строку, в constructors только ECX=allocation.

Сначала ServerCommand(`exec game.cfg\n`, slot39), затем ServerExecute(slot40). Лишь после обоих callbacks читает globals+14h — `deathmatch` по ABI globalvars_t. Записывает DWORD global10222ee8=0. Если deathmatch ordered равен +0/-0, вызывает allocator1013e1e9(E8h); иначе, включая unordered NaN при продолжающемся исполнении, allocator(E4h). Первый результат передаётся в ECX конструктора100fc0f0, второй —100c5180. Не проверяет globals.coop, maxClients или sv_coop для выбора ветви.

Если allocator возвращает NULL, тело возвращает полный EAX0. При ненулевом результате возвращает EAX конструктора; оба конкретных конструктора возвращают исходный this. Отсутствуют локальные освобождение старого rules, запись global10222ee4 и обнуление allocation. Эти действия нельзя приписывать factory: caller10120eb0 отдельно освобождает предыдущий pointer через1013dba5(pointer,DCh), затем сохраняет новый result. Wrapper1013dba5 читает только первый argument и вызывает1013eed8; virtual destructor не вызывается.

Есть native SEH frame, состояния0/1 вокруг constructor и восстановление FS:[0] на обычном возврате. Полный unwind не разобран. Support allocator1013e1e9 сначала вызывает1017556b(size), при0 вызывает10179a9d(size) и может повторять; исчерпание переходит в отдельные throw/failure helpers. Поэтому локальный NULL guard не доказывает, что любые allocation failures безопасно возвращают0. `10222ee8` оставлен адресным global: downstream uses вне данного scope не превращены в доказанное имя.

## 100fc0f0 — CHalfLifeRules_Construct

Thiscall ECX=this, RET, полный EAX=this. Native записи по порядку: vptr101de3b0; **BYTE** this+dc=0; DWORD this+e4=0; DWORD this+e0=0. Старшие три байта +dd..df не очищаются этой записью. Затем CVarSetFloat(`sv_coop`,0.0), потом прямой100af810 с ECX=this; результат refresh игнорируется, EAX явно восстанавливается из ESI.

Нет вызова voice manager, серверного config, записи this+a0 или обнуления прочих общих полей. E8h размер доказывается factory; имя — RTTI. Полное состояние после world Precache шире состояния после этого constructor: caller10120eb0 отдельно пишет +a8/+cc/+d0/+d4/+d8. Ни скорость игры, ни режим engine.deathmatch/coop constructor напрямую не меняет: он делает один setter sv_coop, а последствия engine cvar отдельно не исследованы.

Support100af810 читает difficulty через CVarGetFloat, округляет ST0 в float32 и CVTTSS2SI. Raw integer сохраняется в10222efc, а отдельный skill selector10226728 ограничивается диапазоном1..4. Это различие существенно для100fc140.

## 100c5180 — CHalfLifeMultiplay_Construct

Thiscall ECX=this, RET, EAX=this на всех обычных ветвях; cookie helper1013dbb3 на успешной проверке не меняет EAX. Vptr=101d608c. Вызов voice init100013a0 получает **ECX=global10223788**, stack(helper102177f0, globals.maxClients+90h), а не rules this. Caller игнорирует возвращённый bool; support ASM гарантирует только AL=1, не полный DWORD1.

После voice init: BYTE102231a1=0; BYTE102231a2=0; DWORD102231a4=0. Прямой100c9640 с ECX=rules вызывает skill refresh и сохраняет текущие float bits в this+a0. Затем DWORD this+dc=0, DWORD10223198=0; float1022319c=float32(globals.time+30.0f); BYTE102231a0=0; CVarSetFloat(`sv_coop`,1.0f). Локальной инициализации this+e0 здесь нет. Не следует распространять нули на весь allocation E4h.

После этого IsDedicatedServer(slot115): ненулевой результат → CVarGetString(`servercfgfile`), нулевой → `lservercfgfile`. NULL или первый NUL немедленно обходят config dispatch. Иначе Alert(1, соответствующая строка `Executing ... server config file\n`), форматирование `exec %s\n` в локальный buffer256 bytes и ServerCommand(buffer). **ServerExecute здесь отсутствует**: constructor лишь ставит команду в очередь. Это отличается от предварительного game.cfg в factory. Нет quoting, sanitation, проверки результата format/command или локального ограничения длины config name.

Support1001f160 передаёт нижнему formatter sentinel sizeFFFFFFFFh, а не256; потому не доказана безопасность произвольного длинного cvar. Его CRT implementation и фактическая конфигурация engine остаются границей. Refresh уже состоялся до queued config; constructor сам не повторяет его после queue. Cookie проверяет стек, но не делает форматирование bounded.

## 100c9640 — CHalfLifeMultiplay_RefreshSkillAndStamp

Thiscall ECX=this, RET. Сохраняет this в ESI, вызывает100af810 без stack arguments, затем читает DWORD globals.time(+0) и пишет те же bits в this+a0. Это float timestamp, не преобразование времени в целое. Native EAX после записи также содержит эти bits, однако функция используется как side-effect callback; не объявляется float-return в ST0 или status bool. Нет NULL guards, clamp или изменения this+a4/+dc.

Native MP vtable+0 указывает сюда; constructor вызывает напрямую. В начале MP Think100c9ae0 поле+a0 сравнивается с time и при строгом превышении становится float32(time+2.0f), после чего обновляются состояния игроков. Здесь закрыты только producer и локальный refresh; весь periodic/status/lobby Think не закрыт.

## 100c9090 — CHalfLifeMultiplay_GetCoopInteger

ECX не читается, RET, полный EAX=CVTTSS2SI(globals+18h). Поле+18h — float coop по pinned globalvars ABI; это **не** проверка bool, не чтение св_coop по имени и не деление на maxClients. Для обычных представимых finite значений усечение к нулю:0.5→0,1.9→1,−1.9→−1. При masked invalid conversion NaN/Inf/out-of-range дают архитектурное80000000h; при unmasked exception нормальный возврат не гарантирован. ST0 не является возвращаемым каналом. Native MP slot+2c связывает метод с этим правилом; engine propagation от CVarSetFloat(sv_coop) до globals.coop здесь не доказан.

## 100c52d0 — CHalfLifeMultiplay_GetAutoCrosshairCvarBoolean

ECX не читается, RET, полный EAX0/1. Читает float102146a8, UCOMISS с native0, LAHF/TEST AH,44h и CMOVP. Ordered ±0→0; ненулевые значения, включая отрицательные, и unordered NaN→1, если сравнение не прервало исполнение. Это не тест >0 и не чтение difficulty.

Native descriptor1021469c связывает value+0c=102146a8 с именем `mp_autocrosshair`, default string `1`, flags4. В PE float value первоначально0 и next0; эти raw данные **не runtime значение зарегистрированного cvar**. MP slot+64 доказан числовой vtable. Название предлагаемого метода отражает чтение cvar; полный autoaim consumer и влияние на попадание/отрисовку не разобраны.

## 100fc140 — CHalfLifeRules_IsRawDifficultyOne

ECX не читается, RET, полный EAX0/1: XOR EAX,EAX; CMP DWORD10222efc,1; SETE AL. Читает raw integer difficulty, записанный100af810; **не** clamp selector10226728. Например raw0 оставляет selector1, но этот predicate вернёт0; raw1 вернёт1. Не делает свежего CVarGetFloat и не проверяет диапазон. Native SP slot+64 соответствует MP cvar predicate100c52d0. Полный consumer slot+64 остаётся отдельно; совпадение места в таблице не доказывает весь autoaim.

## 100c8aa0 — CHalfLifeMultiplay_BeginIntermission

Thiscall ECX=this, RET, не status result. Если DWORD10222f04!=0, немедленный выход без messages/изменений. Иначе MessageBegin(2,30,NULL,NULL), MessageEnd: пустой payload фиксированного engine message number30. Pinned protocol.h называет30 `svc_intermission`; это не dynamically registered usermessage, и данный пакет не разбирает native client consumer.

Затем CVarGetFloat(`mp_chattime`) ST0→float32→CVTTSS2SI. Signed integer<1 вызывает CVarSetString(`mp_chattime`,`1`); >120 вызывает1011ab30(120)→CVarSetString(name,result);1..120 оставляет cvar без изменения. Следовательно120.9 не исправляется по этому gate, а0.9 исправляется. При masked invalid conversion INT_MIN попадает в нижнюю ветвь. Native1011ab30 форматирует integer по `%d` в общий buffer10231064 и возвращает его pointer; caller передаёт строку немедленно.

Далее независимо читает float **из native cvar storage102148b0**, снова CVTTSS2SI→CVTDQ2PS; this+dc=float32(float(trunc(storage))+globals.time). Сохраняет отдельно прочитанный globals.time в float10223198, DWORD10222f04=1, DWORD this+e0=0. Нельзя подменить storage значением предыдущего callback или обещать синхронность setter без engine evidence. Raw cvar descriptor102148a4 подтверждает `mp_chattime`, default string `10`, flags4, value+0c; исходный PE value0 не runtime default.

Срок здесь первоначально **целочисленный**, но не окончательный на каждый кадр. Support хвост100c9ae0, ASM100ca3d7..100ca47d, при10222f04!=0 повторяет clamp и записывает this+dc=float32(storage102148b0+start10223198), уже **без усечения storage**. Лишь если currentTime ordered > deadline и (this+e0!=0 либо currentTime ordered > float32(start+120.0f)), вызывает virtual+f8=100c6fd0. NaN блокирует strict comparisons. Это объясняет reader созданного состояния, но не закрывает весь Think/mapcycle. Ни вход, ни input latch сами карту не меняют.

## 100c95f0 — CHalfLifeMultiplay_ConsumeIntermissionInput

Thiscall ECX=rules, stack player*, RET4. Если10222f04==0, выход без чтения player. Иначе читает player+22b0; при mask0827h!=0 пишет DWORD rules+e0=1. Поле не сбрасывается при последующих кадрах без подходящей кнопки. Далее, независимо от mask, очищает DWORD player+22b0, pev.button+184h, DWORD player+22b4. Native PLAYER descriptors10218018/28 называют поля `m_afButtonPressed`/`m_afButtonReleased` (type10,count1), ENTVARS подтверждает button.

Маска0827h=bits0,1,2,5,11; pinned const.h даёт имена IN_ATTACK,IN_JUMP,IN_DUCK,IN_USE,IN_ATTACK2. Другие кнопки не выставляют latch, однако также стираются в перечисленных полях. Нет очистки player+22ac (previous buttons), impulse, velocity или cmd structure. NULL player/pev при активном intermission не проверяется. Связь с player PreThink подтверждена native100f01eb..100f01fe: push player, virtual54, затем check10222f04 и ранний выход из обычной обработки игрока. Цепь server input до этого callback шире данного тела.

## 100c8580 — CHalfLifeMultiplay_EndGameTailDispatch

Две инструкции: MOV EAX,[ECX]; **JMP [EAX+FCh]**. Это tail dispatch, не CALL+RET и не jump table по пользовательскому selector. ECX и stack сохраняются; ABI/возврат полностью передаются конечному target. У конкретного MP target100c8aa0, поэтому без stack args. Нет собственных NULL guards, чтения intermission global или установки latch.

Native MP slot+f4 указывает сюда. Support100bb290 вызывает rules.virtualF4 после успешного master predicate100ba460(activator); параметры Use не передаются в rules callback. Это ограниченная связь game_end→intermission, не полный контракт100bb290/master. SP slot+f4 другой100c8570; нельзя применять этот tail path ко всем rules.

## 100fc4d0 — CHalfLifeRules_PlayerSpawnTargetsAndEquipment

Thiscall-compatible callback с одним stack player*, RET4; ECX=this не читается. Native SP slot+50; вызов100f49e0..100f49e8 из player Spawn100f4090 передаёт player. Сначала CVarGetString(`map_trigger_ent`), ручной NUL-scan без NULL/length limit. Только при unsigned length>1 продолжается deferred target path; пустое и однобуквенное имя пропускаются.

Сравнивает CVarGetString(`map_trigger_ent_map`) с текущим globals.mapname+stringBase **точно и case-sensitive**. При несовпадении оставляет оба cvar как есть. При совпадении повторно запрашивает target name и перечисляет10118590(start,name), wrapper target/alias resolver без explicit activator. Каждому найденному объекту вызывает virtual+e8(player,player,3,0.0f). После каждого Use заново читает `map_trigger_ent` и использует текущий объект как next-start. Поэтому callbacks могут изменить последующий selector; snapshot target list отсутствует. Lifetime/защита удалённого current pointer здесь не доказаны.

После исчерпания поиска, **даже при нуле найденных объектов**, CVarSetString обоих cvar в native empty string101a2496. Затем при всех ветвях (включая mismatch/короткое имя) перечисляет classname `game_player_equip` через10118460 и каждому вызывает virtual+e4(player), а не+e8 Use. Это Touch-подобный callback native entity ABI, один аргумент, без проверки flags/наличия item. Player pointer может бытьNULL — локального guard нет. Нет fallback loadout, проверки успеха экипировки или вызова reset skill/rules. Полная семантика конкретных game_player_equip handlers остаётся зависимостью.

## Оставшиеся границы

- Продолжение этого пакета: [multiplayer-flow](../server-multiplayer-flow/contract.md) разбирает полные локальные MP Think100c9ae0/PlayerSpawn100c9210 и прямые helpers; [mapcycle](../server-mapcycle/contract.md) —100c6fd0 и list loader. Открыты remaining state producers, persistence/equipment/boss downstream, autoaim consumer slot64 и внешние callbacks. Ранние support-описания выше обозначают область именно bootstrap-пакета.
- `CGameRules` save/restore и наследники кроме двух concrete RTTI tables. Не найден общий constructor, который можно автоматически считать zero-fill.
- Engine ServerCommand/Execute, CVarGet/Set и propagation `sv_coop`→globals.coop; native client message30 consumer. Порядок вызовов доказан, успешный эффект callbacks не наблюдался.
- CRT allocator/formatter/exception unwind за сохранёнными локальными обёртками. Никаких обещаний безопасного восстановления после OOM или длинной config string.
- Значения opaque globals10222ee8 и102231a0/a1/a2/a4 вне показанных writes; init1022319c=time+30 ещё не раскрывает весь reader lifecycle.

Этот пакет снимает constructor/factory часть открытого пункта [world bootstrap](../server-world-bootstrap/contract.md), но не объявляет закрытыми runtime cooperative transitions и прочие зависимости того пакета.
