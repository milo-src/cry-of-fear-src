# Игровые потребители unlock settings: меню одежды, титры и статистика

Только статический разбор оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Четыре новые карточки: `100a2050`, `100a24b0`, `100a2710`, `100a51c0`. Сохранённые C — псевдокод, приоритет имеют приложенные ASM и сырые таблицы. `capture.py` повторяет чтение доказательств, `verify.py` сверяет байты без исполнения DLL. Все offsets, адреса и маски ниже hex; обычные количества, интервалы, оценки и номера полей протокола — decimal.

## Краткий индекс карточек

| Адрес | Назначение |
|---|---|
| 0x100a2050 | Выбирает первого игрока, сжимает 12 unlock flags одежды, управляет именованными Simon/camera targets и отправляет Clothes только при value==0. |
| 0x100a24b0 | Планирует перезапуск кампании, пишет special48 для каждого из четырёх player slots и повторяет broadcast BeatCoop/CoopStats с точным порядком статистики. |
| 0x100a2710 | Формирует путь титров, обходит игроков, вычисляет ending/reward flags, обновляет общий settings-файл и отправляет Credits; special latches общие для цикла. |
| 0x100a51c0 | Собирает 32 unlock flags и отдельную шкалу ранга для экрана статистики, с условной заменой маски на1000000; посылает Credits с marker1. |

ECX=this, четыре stack-аргумента Use, RET10h; native RTTI/vtable+e8 подтверждают владельца. Reader100dd000 возвращает AL, writer100f2ed0(mask,0,flag47,flag48) пишет true в общий scriptsettings.dat, incoming ECXplayer helper не читает. Ошибка записи в этих callers не проверяется. См. полную таблицу wire и границы в contract.md.

## Граница и навигация

В `.text` проверены E8/E9 rel32 к четырём entry прошлого пакета: `100dd000`, `100e0db0`, `100e1690`, `100f2ed0`. Получены 236 совпадений, все подтверждены границами инструкций в сохранённых телах 20 владельцев: 198 вызовов `100dd000`, 38 вызовов `100f2ed0`. Прямых E8/E9 к двум остальным entry в этой секции не найдено. Это не поиск косвенных вызовов, не полный граф DLL и не доказательство отсутствия использования двух функций. Полный адресный список — `evidence.json/direct_reference_scan`; дополнительные `scan-*.asm` сохранены для навигации и проверки instruction boundary, их владельцам не приписан полный REVIEW.

RTTI и таблицы доказывают точных владельцев Use: `CCoFClothesMenu` vtable `101c9058`, `CCoFCoopStats` `101c9f68`, `CCoFCredits` `101c8a70`, `CCoFStats` `101c9aa8`; адрес соответствующего первичного метода лежит в слоте `+e8`. Иерархии содержат CPointEntity/CBaseEntity с нулевым смещением. Все четыре метода принимают `ECX=this`, четыре stack-аргумента Use и заканчиваются `RET 10h`; возвращаемое значение как контракт результата отсутствует.

Reader `100dd000(mask, flag47, flag48)` возвращает только AL. Writer `100f2ed0(mask, writeFalse, flag47, flag48)` в этих вызовах получает `writeFalse=0`, то есть записывает true. ECX, которому callers присваивают player, внутри этих helper не читается: это общий `scriptsettings.dat`, а не отдельный файл игрока. Каждый вызов reader заново загружает файл, каждый writer отдельно переписывает его. Ошибки записи здесь не проверяются. Подробности грамматики, ordinal и файлового lifecycle — [предыдущий контракт](../server-unlock-settings/contract.md).

Native PLAYER descriptor подтверждает `+424=m_iUnlockedClothes`, `+42c=m_iFoundHoodies`, BOOL `+4cd=m_b_Ending_RoofBossKilled`, `+4ce=m_b_Ending_GivenP345`, `+4cf=m_b_Ending_DeliveredPackage`. Блок `+638..687` сохранён как `playerstats`, type14/count80, без отдельных имён членов. Поэтому здесь `P678`, `P679`, `P680`, `P67c` означают именно offsets; названия difficulty/завершённая игра/режим нельзя считать доказанными одним save descriptor. Численные роли установлены ниже. ENTVARS подтверждает `+1d8=message`, `+1a4=spawnflags`, `+248=iuser1`, `+14c=rendermode`, `+150=renderamt`, `+20c=pContainingEntity`.

## 100a2050 — CCoFClothesMenu::Use

Игнорирует activator, caller и useType. Выбирает первый объект classname `player` через `10118460(0,"player")` и `100125e0(found.pev)`; любой NULL прекращает обработку. Последний аргумент Use — float value — определяет открытие/закрытие независимо от useType.

Последовательно проверяет 12 масок `80,100,200,400,800,1000,2000,4000,8000,10000,20000,40000`, то есть ordinal51..62 reader. Формирует compact mask с битами 0..11, плюс boolean any. Player `+424` здесь не меняется. Все проверки происходят и при закрытии.

Только если обе строковые ссылки this `+dc` и `+e0` ненулевые, находит первые targetname: сначала `+e0`, затем `+dc`. Поддерживающий KeyValue `100953d0` прямо связывает `cameraent` с `+dc`, `simonent` с `+e0`, хранит AllocString и помечает handled. При ordered `value==0` найденному Simon устанавливает rendermode=0/renderamt=255.0, а найденной camera вызывает virtual+e8 с `(player,player,1,0.0)`. Иначе, включая NaN, устанавливает 5/0.0 и вызывает camera `(player,player,0,666.0)`. NULL каждого найденного target допустим независимо; отсутствие одной из исходных строк подавляет обе операции. Поведение самой camera вне этой локальной границы.

Только при ordered `value==0` отправляет `MessageBegin(1,Clothes,0,player.edict)`: `LONG compactMask; BYTE any; BYTE playerDWORD+424; BYTE 1`, затем End. У исходного DWORD+424 на wire остаётся BYTE; локального диапазонного clamp нет. `Clothes` зарегистрирован size7/globalID `10226698`. NaN и ненулевой value не посылают это сообщение. Нет проверки alive, multiplayer, уже открытого меню или результата camera callback.

## 100a24b0 — CCoFCoopStats::Use

Все четыре Use-аргумента игнорируются. Сначала назначает this `+78=1009a390` и вызывает virtual+8 с float delay 30.0 при spawnflag1, иначе 260.0. Native vtable связывает +8 с `1000e1f0`, который передаёт `(delay,0)` virtual+4=`10017110`. Последний использует pev.ltime при movetype7, иначе gpGlobals.time. Для обычного объекта без this+14/+1c и flags20 пишет nextthink, this+58/+5c; иначе пишет this+58 и делегирует планирование `10018090/100c4880`. Их полный parent-scheduler контракт здесь не переоткрывается. Callback `1009a390` вызывает `ChangeLevel(messageString,0)`, если message ненулевой, иначе `ChangeLevel("cof_campaign_01",0)`; второй NULL stack-аргумент явно присутствует в обеих ветвях.

Затем перебирает ровно индексы 1..4 через `10119680`, независимо от maxClients. NULL пропускает. Для каждого ненулевого player сначала пытается записать special ordinal48=true через writer `(0,0,0,1)`, затем делает два broadcast mode2 сообщения: пустое `BeatCoop` (size0/globalID `102266c0`) и `CoopStats` (size-1/globalID `102266b8`). Поэтому эти broadcast повторяются по числу найденных игроков, а не посылаются только один раз. Ни alive gate, ни guard повторного Use нет.

Порядок CoopStats: `BYTE IndexOfEdict(player.pev.pContainingEntity); SHORT +63c,+640,+644,+648; COORD ratio100dbfb0; SHORT +658,+664,+668,+66c,+670,+674; BYTE 1; BYTE (100e4c30(player)!=0); BYTE (100e4d60(player)!=0); BYTE readSpecial47; BYTE readSpecial48; BYTE (global10222f14!=0); SHORT (globalGate?player+638:0); BYTE spawnflag1; SHORT (globalGate?sumOfPlayers638:0)`. Для последней суммы заново запрашивает индексы1..4, пропускает NULL, складывает DWORD с 32-bit wrap, затем WriteShort. Имена глобального gate и сырых счётчиков не выводятся из места сериализации. Контракты двух role predicates — поддерживающий существующий корпус, а не новая карточка здесь.

## 100a2710 — CCoFCredits::Use

Требует только ненулевой первый Use-аргумент activator; указатель не разыменовывает и больше не использует. Caller/useType/value игнорируются. Два latch `L47`/`L48` обнуляет один раз перед всем циклом игроков, не перед каждым игроком.

Вызывает GetGameDir с одним output pointer в 256-byte stack buffer. При message==0 дописывает `/txtfiles/credits.txt`. При ненулевом message ищет case-sensitive подстроку `txtfiles/` в любом месте. Если её нет, второй 256-byte buffer получает `/txtfiles/`+message, и результат дописывается к gameDir. Если подстрока есть, message дописывается к gameDir напрямую, без добавления разделителя. NUL scan/копирование не ограничены ёмкостью buffer; финальный security cookie не является проверкой длины. Здесь файл титров не открывается: готовый путь передаётся клиенту.

Перебирает player index от1 до gpGlobals.maxClients включительно, заново читая границу после итерации. Применяет `10119680`, затем `100125e0(pev)`, NULL пропускает. Для каждого player начинает с `U=0`, `ending=0`, `rank=7`. Если BYTE P678!=0 и mapname содержит case-sensitive `c_ending`, записывает P679=1. Далее основной reward block выполняется при P678!=0, P679!=0 и отсутствии entity spawnflag1. Следующие пункты идут именно в этом порядке внутри данного блока.

1. При spawnflag2 переносит найденные биты player+42c в settings и U, без предварительного чтения старого settings. Порядок: `80000`, затем `80..40000` (12 степеней двойки), затем `2000000,4000000,8000000,10000000,20000000,40000000`. Каждый присутствующий бит вызывает отдельный writer true. Несмотря на имя m_iFoundHoodies, маска80000 также подтверждённо участвует в допуске Axe у GiveNamedItem; нельзя переименовывать все эти биты в одежду.
2. Вычисляет signed int32 `T=P668+60*P66c` с wrap. Если T<=150 и spawnflag2, читает маску100000; включает её в U только если reader false и P680==0. Writer100000=true вызывается независимо от старого значения и от P680. Это важное отличие от большинства остальных reward branches.
3. При P680==0 и spawnflag2 выбирает ending по точным BOOL значениям: roof/given=(0,0) → ending1/mask1; (0,1)→2/2; (1,0)→3/4; (1,1)→4/8. В каждой ветви читает старое значение, добавляет в U только новый бит, но writer вызывает и для уже true. Затем deliveredPackage==1 при тех же gates даёт ending5/mask10, перекрывая предыдущий ending. Наконец P680!=0 и spawnflag2 независимо от deliveredPackage устанавливает L47=1, записывает special47=true и ending6. Поля и flags перечитываются между helper calls; это порядок локальных проверок, а не атомарный snapshot player.
4. Читает special48 и при true устанавливает L48=1; false его не сбрасывает. Это latch на весь вызов Use, как и L47, поэтому сообщение последующего игрока может содержать значение от предыдущего.
5. При P680==0 вызывает score10092ce0. Display rank: score<=2→2; 3..7→6; 8..14→5; 15..21→4; 22..28→3; 29..34→2; >=35→1. При >=35 читает mask200000 и, если spawnflag2, добавляет её в U только при старом false, затем в любом случае записывает true. При P680!=0 вызывает score10092f60: <=2→7; 3..4→6; 5..10→5; 11..14→4; 15..16→3; 17→2; >=18→1. Отрицательные оценки входят в первые signed диапазоны.
6. По очереди читает маски `2000000,400000,80000000,20`. При P680==0 и spawnflag2 записывает каждую true, включая U только если раньше false. При P67c==4 с теми же gates аналогично обрабатывает mask40. Связь40 с допуском Famas подтверждена ранее GiveNamedItem, но локальная функция предмет не выдаёт.
7. Short-circuit читает все11 масок `80..20000`. Если все true, P680==0 и spawnflag2, обрабатывает mask40000 по схеме new-bit→U и writer true независимо от старого состояния.
8. При P680==0/spawnflag2 награда за выбранный ending: 1→2000; 2→800; 3→4000; 4→10000, затем800000; 5→80. Для каждой читает старое значение, включает в U только новое, пишет true. Ending6 не имеет ветви здесь.
9. Short-circuit читает все пять ending masks `1,2,4,8,10`; при всех true, P680==0 и spawnflag2 обрабатывает mask8000 той же схемой.

После reward block, даже если он был пропущен, spawnflag2/P680==0 разрешает повторные чтения `1,2,4,8,10` с OR всех true в U. Таким образом U не является строго «только новые unlocks»: содержит текущие ending flags, перенесённые found bits и некоторые новые награды. После этого отправляет индивидуальный Credits по таблице ниже. Нет собственного ChangeLevel, выдачи оружия, сброса управления или чтения содержимого credits-файла. Неудачи persistence не подавляют локальное U или ending.

## 100a51c0 — CCoFStats::Use

Игнорирует четыре Use-аргумента. Находит первого classname player и применяет `100125e0`, NULL прекращает обработку. При P680==0 вызывает score10092ce0, иначе10092f60; затем в ветви P680!=0 вызывает10092f60 ещё раз и использует второй результат.

Display rank при P680==0: score<=4→7; 5..8→6; **9..12→0**; 13..16→5; 17..20→4; 21..24→3; 25..27→2; >=28→1. Нулевая «дыра» подтверждена initial XOR и native comparisons; нельзя подменять шкалой Credits::Use. При P680!=0 шкала совпадает с alternate Credits: <=2→7; 3..4→6; 5..10→5; 11..14→4; 15..16→3; 17→2; >=18→1.

Сохраняет локальные snapshot `(P680!=0)` и readSpecial48. Затем читает отдельно все32 маски `1..80000000` и собирает U через OR. Если P678!=0 && P679!=0 && P680!=0, проверяет1000000, при false пытается записать true, после чего **присваивает U=1000000**, заменяя собранную маску даже при уже установленном бите или неуспешной записи. Отправляет индивидуальный Credits со строковым literal `nah` и специальным marker1. P679 в этом теле не изменяется. Чтения и свежие special flags в конце сообщения могут отличаться от snapshot, поскольку файл общий и повторно загружается.

## Credits wire layout: общий порядок двух отправителей

`Credits` зарегистрирован size-1, globalID `1022668c`. Оба sender используют `MessageBegin(1,id,0,player.edict)`, затем ровно следующий порядок. Поля3..18 одинаковы. Типы BYTE/SHORT/LONG/COORD/STRING установлены по engine table slots48/50/51/53/54 с native GiveFnptrsToDll binding, не по ошибочным прототипам псевдокода.

| № | Тип | Credits::Use100a2710 | Stats::Use100a51c0 |
|---|---|---|---|
|1|BYTE|message!=0 && !(spawnflags&4)|message!=0|
|2|STRING|построенный gameDir/credits path|literal `nah` по101c2d70, bytes6e616800|
|3–6|SHORT×4|player DWORD +63c,+640,+644,+648|то же|
|7|COORD|ST0 ratio100dbfb0, сохранённый как float32|то же|
|8–10|SHORT×3|DWORD +650,+654,+658|то же|
|11–12|SHORT×2|CVTTSS2SI(float +65c), CVTTSS2SI(float +660)|то же|
|13–17|SHORT×5|DWORD +664,+668,+66c,+670,+674|то же|
|18|BYTE|P678!=0 && P679!=0|то же|
|19|BYTE|entity.pev.iuser1|30 decimal|
|20|BYTE|(entity.spawnflags&1)!=0|то же|
|21|BYTE|DWORD P67c|то же|
|22|LONG|U по reward branches|U по всем32 чтениям либо override1000000|
|23|BYTE|ending0..6|0|
|24|BYTE|rank по шкале Credits|rank по шкале Stats|
|25|BYTE|P680!=0|то же|
|26|BYTE|0|1|
|27|BYTE|rules10222ee4!=NULL && virtual+20()!=0|то же|
|28|BYTE|L47, latch всего вызова|snapshot(P680!=0)|
|29|BYTE|L48, latch всего вызова|snapshot readSpecial48|
|30|BYTE|свежий readSpecial47|то же|
|31|BYTE|свежий readSpecial48|то же|
|32|BYTE|P678!=0 && strstr(mapname,"c_ending")!=NULL|то же|

Затем MessageEnd. BYTE/SHORT не получают локального range clamp. CVTTSS2SI даёт truncation к нулю; особые float/overflow не заменяются безопасным пользовательским значением. Это контракт серверного порядка полей, не доказательство названий каждого клиентского UI счётчика или реакций всех получателей.

## Поддерживающие score helpers и оставшиеся границы

`100dbfb0` — thiscall player, ST0 float. При signed denominator P63c>0 и numerator P640>0 вычисляет float32 `100.0 * (float32(numerator)/float32(denominator))`; при denominator>0 и numerator==0 возвращает0; при denominator>0 и numerator<0 —100. При denominator<=0 возвращает100 независимо от numerator, включая numerator==0. Сохраняет результат в P64c, не ограничивает сверху100. Название ratio следует формуле; имена shots/hits требуют проверки producers.

`10092ce0(player*)` и `10092f60(player*)` — cdecl с полным EAX, а не char, несмотря на тип первого C. Оба сначала пересчитывают ratio, в конце возвращают сумму только если BYTE P678==1, иначе0. Первый суммирует: P67c1/2/3/4→2/4/6/7 (иначе0); ratio [30,40),[40,50),[50,60),[60,70),[70,80),[80,90),>=90→1..7 (иначе0); P650 <=5/6..10/11..25/26..40/41..60/61..70/>70→7/6/5/4/3/2/1; P644 <=2/3..10/11..20/21..30/31..40/41..45/>45→7/6/5/4/3/2/1; signed T=P668+60*P66c <=150/151..180/181..240/241..300/301..360/361..420/>420→7/5/4/3/2/1/0. Второй: P67c в1..4 даёт4, иначе0; тот же ratio bucket; T<=8/9/10/11/12/13/14/>14→7/6/5/4/3/2/1/0. Отрицательные signed значения попадают в первые интервалы. Native COMISS/CMOV для ratio исключают NaN из положительных buckets. Формулы разобраны как support, отдельные новые карточки этим helper здесь не присваиваются.

Закрыты локальные ветви четырёх Use, владельцы, порядок reward writes, аргументы и wire fields. Открыты: producers каждого playerstats-члена; точные визуальные названия одежды/награды многих масок; клиентские обработчики Clothes/CoopStats/Credits; непокрытые условия прежних частичных REVIEW владельцев direct-reference scan (все20 адресов теперь размечены; продолжение ниже); косвенные callers; поведение target cameras и изменение состояния callbacks при повторном входе. Parent scheduler, player casting, role checks и файловая ошибка уже имеют отдельные доказательства/границы, а не объявляются здесь полностью восстановленной игрой. Raw BSS/global addresses — ссылки на runtime state, не считанные runtime значения.

## Продолжение разбора: pass13

Ratio100dbfb0 и оба scorer10092ce0/10092f60 получили отдельные полные локальные контракты: [stats score](../server-stats-score/contract.md). Проверены signed overflow, BYTE gate, native float rounding и фактический порядок чтений;835 синтетических replay cases не являются запуском DLL. Восемь unlock action callbacks продолжены в [unlock actions](../server-unlock-actions/contract.md). Все20 владельцев зафиксированных прямых E8/E9 ссылок теперь имеют REVIEW, включая12 ранее размеченных; некоторые прежние карточки частичные, поэтому это покрытие адресов, не доказательство полного семантического разбора всех20. Косвенные вызовы и полный playerstats lifecycle открыты.

## Продолжение разбора: pass14

Начало статистики CCoFGameBegin100a4080 сfactory/export1008fce0/100aa110, RestartCampaign1009a390 и текстовый writer1004a6e0 продолжены в [stats lifecycle](../server-stats-lifecycle/contract.md). Writer доказывает девять исходных labels/offsets, включая+664 seconds,+668 minutes,+66c hours; producer Use связывает+67c сdifficulty,+684 сcof_subtitlelanguage. Полный reset, native callers writer и обратные readers100c5300/10029090 остаются отдельными задачами.

## Продолжение разбора: pass15

Текстовый reader100c5300 продолжен в server-state-reader;10029090 продолжен в server-state-restore как in-memory restore. Эти тела больше не pending. Writer1004a6e0 и остальные stats producers/reset/callers требуют самостоятельной проверки по текущему WORKBOARD.
