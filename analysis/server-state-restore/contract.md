# Восстановление состояния игрока: 10029090

Статический разбор оригинального hl.dll, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Единственная новая REVIEW-функция — `10029090`; десять других сохранённых C/ASM являются support. DLL не исполнялась, ресурсы и реализация игры не менялись. Числа адресов/offsets/размеров записаны в hex, если явно не указано иначе; количество элементов32,33,15,6 — decimal.

## Связи и границы

`10120eb0 WorldPrecache → allocate10f3c → 10029070 constructor → global10222e10`; `100c9210 MP PlayerSpawn → 10029090(manager,player) → TEST AL → game_player_equip fallback при0`.

Внутри: запись → прямые player fields → `100e0a80 GiveNamedItem` → обход item chains → `100e2380`/`100f1a50` для выбора → HUD packets → очистка записи. В mode1 и no-match отдельно вызывается `100c6570`, parser map configuration. Он не объявлен полностью разобранным этим пакетом.

Смежные контракты: [world owner](../server-world-bootstrap/contract.md), [MP spawn caller](../server-multiplayer-flow/contract.md), [GiveNamedItem](../server-player-equipment/contract.md), [inventory chains](../server-player-inventory/contract.md), [pickup callbacks](../server-item-pickup/contract.md), [stats fields](../server-stats-lifecycle/contract.md).

## Формат записи, наблюдаемый consumer

`R=A_i` или `B_i`; поля вне списка этим consumer не интерпретируются. A/B — аналитические имена банков. Никакая сериализация raw pointers не предполагается.

| Offset R | Тип / содержимое | Использование |
|---|---|---|
| 0 | BYTE valid | Поиск обоих банков |
| 4 | DWORD | A.mode0 → P+3b4 |
| 8 | raw char pointer | Равенство адресу netname |
| c | raw classname pointer | Выбор active, только после непустой записи6 |
| 14 | BYTE | Третий аргумент GiveNamedItem |
| 48,4c | signed int32 | float health, stamina |
| 1d0 | BYTE mode | A:0 полная,1 stats/config,прочие пропуск |
| 1d8..210 | 15 DWORD | P+63c..674 |
| 214,218,21c | BYTE,DWORD,BYTE | P+678,67c,680 |
| 224,228,22c | 3 DWORD | Quickslots P+3dc..3e4 |
| 230..277 | 6 ×12 bytes | classname pointer,clip,reserve |
| 278,2f8,378 | Начала строк | NUL-copy без ограничения80h |
| 3f9..418 | 32 bytes | P+3f5..414 |

## Матрица результатов

| Условие | Действия | Очистка | AL |
|---|---|---|---|
| P=NULL | Нет | Нет |0|
| B match при M[0]!=0 | stats | B_i затем A_i |1|
| A match,mode1 | stats;map config;AmmoX×32 | **A_32** |1|
| A match,mode0 | state/strings/weapons/quickslots | A_i |1|
| Нет match,cvar ordered0 | map config;AmmoX×32 | Нет |0|
| Нет match,cvar nonzero/NaN | Нет | Нет |0|

## Полный локальный контракт

Восстанавливает состояние игрока из двух банков записей менеджера: статистику либо статистику с экипировкой; AL сообщает caller, нужно ли пропустить обычные game_player_equip.

ABI: ECX=M, один stack argument P, RET 4; возвращается только AL=0/1, верхние 24 бита EAX не нормализованы. NULL P даёт AL=0; для ненулевого P нет проверки NULL M. MP PlayerSpawn100c9210 вызывает global10222e10 и проверяет TEST AL,AL: 1 пропускает game_player_equip, 0 оставляет обычную выдачу. Это не общий признак отсутствия побочных эффектов.

Два банка: S=0x41c, A_i=M+4+i*S, B_i=A_i+0x879c; i=1..32. Для каждого i сначала проверяется B_i при ненулевом BYTE M[0], затем A_i. Поэтому ранняя A-запись приоритетнее поздней B. Нужны ненулевой valid BYTE R[0] и точное равенство DWORD R+8 адресу stringPool+P.pev.netname(1d4). Это сравнение указателей, не текста имени. Для A дополнительно BYTE R+1d0 должен быть 1 или 0; другие значения пропускаются. M[0] не отключает A.

Общий блок статистики: 15 DWORD R+1d8+4*j → P+63c+4*j (j=0..14), BYTE R+214 → P+678, DWORD R+218 → P+67c, BYTE R+21c → P+680. Это 66 копируемых байтов, не непрерывный player stats block. P+638,679..67b,681..687 не копируются. Никаких проверок диапазонов или нормализации этой статистики здесь нет.

Совпавшая B-запись копирует только статистику, затем memset(B_i,0,41c), затем memset(A_i,0,41c), AL=1. A_i стирается без проверки его имени/valid. В этой ветке непосредственно нет выдачи оружия, восстановления здоровья или сообщений HUD. M[0] не меняется.

A.mode=1: копируется статистика, вызывается внешняя map-config функция100c6570(P), затем 32 AmmoX (BYTE index0..31, SHORT P.ammo[index], MSG_ONE). После loop ESI=32, и native очищает A_32, а не исходную найденную A_i: XOR ESI,ESI100293d1, IMUL EAX,ESI,41c1002941d. Для i!=32 совпавшая запись остаётся. AL=1 независимо от результата map-config; B не очищается.

A.mode=0 сначала переводит signed int32 R+48 и R+4c в float32 и записывает pev.health+164 и P+21f0 (stamina), без clamp. DWORD R+4 → P+3b4; R+224/228/22c → P+3dc/3e0/3e4. Затем копирует статистику, 32 байта R+3f9..418 → P+3f5..414 и три NUL-terminated строки R+278/2f8/378 → P+204c/20cc/214c. Интервал между строками80h не является ограничением: native копирует до NUL без проверки длины.

Шесть записей оружия имеют начало R+230+12*k (k=0..5): raw classname pointer, clip DWORD, reserve DWORD. Для каждого ненулевого classname вызывается100e0a80(ECX=P, classname,0,zeroExtend(BYTE R+14)), результат игнорируется. Classname перечитывается после callback. Точное строковое сравнение weapon_syringe вызывает Syringe(MSG_ALL=2, BYTE IndexOfEdict(P), BYTE1) даже без подтверждённого успешного pickup.

После каждой выдачи сканируются шесть голов P+2514..2528 и next item+164. Если имя ГОЛОВЫ равно weapon_action, вся цепь пропускается; следующие элементы не проходят повторный action-filter. Все элементы с точным совпадением classname получают item+1e4=clip и P+2540+4*(item+1dc)=reserve. Нет проверки ammo index, capacity, отрицательных значений, циклов; обновляются все совпадения, включая существовавшие до выдачи. Повторные записи могут перезаписывать один reserve. Локальных AmmoX после этих прямых записей нет; сообщения внутри callee этим не исключаются.

Восстановление active weapon находится внутри ветки НЕПУСТОЙ шестой weapon-записи: JE10029d83→10029f19 обходит блок10029ef7. Только здесь ненулевой raw pointer R+c проверяется100e2380(P,name); при наличии вызывается100f1a50(P,name). Последний может отказаться и иначе ставит отложенные P+2538/1ef9, а не прямо active+252c; результат здесь не проверяется. Записи1..5 сами не обеспечивают этот шаг.

Завершение A.mode=0 отправляет QSlotUpdate MSG_ONE, BYTE slot1/2/3, BYTE value для каждого ненулевого DWORD P+3dc/3e0/3e4. Нулевые значения не посылают clear; значения не clamp, wire BYTE обрезает. Затем очищается найденная A_i целиком41c и AL=1. B_i и M[0] остаются. Старые цепочки оружия и все ammo counters предварительно не обнуляются этой функцией.

При отсутствии подходящего слота CVarGetFloat(sv_coop_nosave) сохраняется в float32 и сравнивается с0. Только ordered ±0 вызывает100c6570(P) и 32 AmmoX; ненулевые значения и NaN этот шаг пропускают. Обе ветки возвращают AL=0. Поэтому parser может изменить игрока, после чего caller ещё применяет game_player_equip. Cvar не блокирует найденные A/B записи.

Owner support: WorldPrecache10120eb0 создаёт manager размером10f3c; constructor10029070 очищает M+4 длиной10f38 и возвращает this, не инициализируя первые4байта. 4+2*33*41c=10f3c. World reset также очищает лишь M+4. В non-MP release global10222e10 не обнуляется (см. world-bootstrap). Производители строковых указателей/записей, значение M[0], concrete class name и lifetime pointees здесь не установлены; это формат памяти, не доказанный формат файла или сетевого save.

Полное тело10029090 проверено по native, включая все шесть unrolled weapon blocks и четыре return paths. Map-config100c6570, все derived pickup callbacks и корректность доставки HUD остаются отдельными границами; их результаты не подменены гарантиями успеха. Нет rollback, локальных проверок жизни объектов после callbacks или runtime/pixel проверки.

## Сообщения и API

В `100e5fc0` регистрируются `AmmoX` (global102264e8,size3), `Syringe` (102266dc,size2), `QSlotUpdate` (10226690,size2). Идентификаторы динамические. Native API base10222f48 подтверждён memcpy в100b4aa0; eiface header используется для имён slots, не для доказательства ENTVARS offsets. В evidence сохранена нативная ENTVARS table1021aae0 со102descriptors: netname1d4,health164. Поле pev+20c отдельно наблюдается как edict argument в MessageBegin/IndexOfEdict; ENTVARS save table не содержит его descriptor. Здесь нет проверок message IDs на0. API MessageBegin/WriteByte/WriteShort/MessageEnd — slots46/48/50/47; CVarGetFloat57, IndexOfEdict71, RegUserMsg75.

## Точные особенности для дальнейшего поиска

1. Производители M[0],valid,name pointers,mode и обеих banks ещё нужны. Constructor не доказывает нулевой mode; malloc не является zero allocator. Сравнение указателей зависит от lifetime исходного string pool.
2. Mode1 clear A32 и зависимость active-selection от entry6 — непосредственно доказанные native ветви; их нельзя исправлять в справочнике на ожидаемое поведение.
3. Полное исполнение mapcfg parser100c6570 требует отдельного пакета; callback выдачи может менять списки/статистику. AL1 не гарантирует восстановление всех желаемых предметов, AL0 не означает отсутствие изменений.
4. Исходные slots0 обоих банков не читаются; их роль и выбор33-entry storage не выводятся из предположения о максимальном player count. Producer-side границы остаются открытыми.
5. Reentrancy, allocator failures внутри зависимостей, валидность строк и сетевой delivery не проверялись запуском. Локальные отсутствие bounds/NULL/cycle checks не является утверждением о всех upstream callers.

## Воспроизведение

`python -X utf8 analysis/server-state-restore/capture.py` снимает статический objdump непосредственно с DLL и проверяет каждый byte; giant ignored cache не нужен. `python -X utf8 analysis/server-state-restore/verify.py` независимо отображает PE через struct, сверяет hashes/ASM/raw/table/header, return/branch/slot assertions и соответствие notes. Список support не увеличивает REVIEW count.

## Продолжение разбора: pass16

Актуальный статус pass16: все четыре constructor/capture helpers10029070/1002a000/1002a480/100e4ee0 разобраны в [state capture](../server-state-capture/contract.md); пять callers/reset/disconnect/death путей — [state lifecycle](../server-state-lifecycle/contract.md); полный100c6570 — [map equipment parser](../server-map-equipment-parser/contract.md). Прежние указания этих тел как внешних границ относятся к объёму pass15 и больше не входят в текущую очередь. Открыты ненулевые writers M[0], жизнь raw string-pool pointers, оставшиеся косвенные callbacks/owners. Capture обнуляет M[0] при nonNULL P, clear(M+4) сохраняет header; B-copy сам не включает B lookup.
