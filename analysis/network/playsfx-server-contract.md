# PlaySFX: серверный sender и оружейный lifecycle

Только статический RE оригинального `hl.dll`, SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Доказательства: [JSON](playsfx-server-evidence.json), четыре bounded asm и
[воспроизводимый capture script](playsfx-server-evidence-capture.py).
Исходный DLL не исполнялся; новая REA-сессия, игра и сборка не запускались.
Диапазоны raw/asm имеют VA, end-exclusive, file offset, SHA и команды.

## Маршрут и граница

`LinkUserMessages100e5fc0` регистрирует `PlaySFX` с size=-1 и сохраняет
runtime ID в `102266f4`. [Индекс сообщений](usermessage-registry.md) ведёт к
**10116a40**: в сохранённых 8000 server C только этот helper явно употребляет
ID при MessageBegin. Его вызывают 28 текстовых call sites в 27 C-файлах.
Все они перечислены в evidence JSON с hash и строками; это лексический
срез, не полный native callgraph. Основной класс callers — оружейные
выстрелы и общий weapon frame. Отдельный map entity Use/KeyValue/factory
PlaySFX этим срезом **не доказан**, и не выводится по аналогии с PlayMP3.

Клиентская сохранённая регистрация `1006cf00` связывает имя `PlaySFX` с
wrapper `1006e910`. Декодирование и playback backend описаны в отдельном
[клиентском контракте](playsfx-client-contract.md); серверный helper сам
аудио не воспроизводит.

## ABI и wire

Подтверждённый порядок восьми DWORD stack slots:

```text
10116a40(path, operation, byteArg, x, y, z, sourcePlayer, sendToAll)
ebp+       08       0c       10  14 18 1c       20             24
```

`byteArg` берётся как unsigned low byte через MOVZX. `sendToAll` проверяется
по low byte. XYZ являются тремя float values by value. Имена operation и
sendToAll — рабочие обозначения аргументов, не восстановленные C++ имена.

Вызовы во многих C выглядят как `10116a40(path,0,1)`: это потеря пяти
аргументов декомпилятором. [Glock call asm](playsfx-server-evidence-caller.asm)
по `10047b9f..10047bc7` явно готовит owner, flag1 и 12-byte vector через
virtual+104, затем BYTE argument1, operation0 и path; после вызова
`10047bbd` caller очищает **0x20** байт стека. Это не функция с тремя аргументами.

| Порядок | Writer / slot | Значение |
|---|---|---|
| 1 | STRING / `10223020` | `path` как прямой char pointer |
| 2 | BYTE / `10223008` | operation, младшие 8 бит на wire |
| 3 | BYTE / `10223008` | byteArg |
| 4–6 | COORD / `1022301c` | x, y, z |
| 7 | BYTE / `10223008` | в специальном MP fanout: recipient!=source; иначе 0 |
| 8 | SHORT / `10223010` | в том же fanout: index **recipient**; иначе 1 |

Завершает сообщение `10223004`. Все MessageBegin используют origin=NULL.
Порядок и оба suffix подтверждены [полным sender asm](playsfx-server-evidence-sender.asm),
в частности recipient compare `10116b42`, IndexOfEdict `10116b5f` и
WriteShort `10116b66`. Индекс источника вместо получателя здесь подставлять нельзя.

Engine COORD пишет `trunc(value*8)` в младшие 16 бит little-endian:
[engine wire evidence](../graphics/engine-wire-assembly/capture.json).
В обычном корректном случае STRING включает NUL, так что payload имеет
`strlen(path)+12` байт. Helper не проверяет длину, существование файла,
NaN/range координат и не нормализует имя. Limits/overflow engine являются
отдельным контрактом; size=-1 не означает безлимитный пакет.

## Точная маршрутизация

Пусть `M = rules.virtual+20()!=0` (используемая в корпусе MP-проверка),
`A = lowbyte(sendToAll)!=0`, `W = strstr(path,"weapons")!=NULL`.

| Условие | Доставка | Последние BYTE / SHORT |
|---|---|---|
| M && W && A | цикл indices1..maxClients, каждому найденному private player — MSG_ONE(1) | recipient!=source / IndexOfEdict(recipient) |
| (!M || !W) && A | MSG_ALL(2), recipient=NULL | 0 / 1 |
| !A | MSG_ONE(1), recipient=source.pev.pContainingEntity | 0 / 1 |

При **любом M**, ещё до проверки W/A, helper получает private player через
`100125e0(source.pev)` и вызывает virtual+228; результат заменяет все XYZ.
В специальном цикле `maxClients<1` ничего не отправляет. `10119680(index)`
проверяет границы1..maxClients, edict!=NULL и free==0, затем возвращает
private pointer; нулевые пропускаются. Проверки source/path на NULL нет;
их валидность является предусловием этих путей.

`1013f5f0` — сохранённый substring search: пустой needle возвращает haystack,
отсутствие —0, обычный scalar путь сопоставляет байты без приведения регистра;
присутствуют оптимизированные SIMD пути. Поэтому `"weapons"` здесь не
проверка префикса или расширения файла, и не case-insensitive match.
Строка raw `101e52d4` также сохранена. Полный SIMD implementation не объявляется
заново раскрытым этим protocol pass.

## Откуда берутся координаты

`100125e0` на ветке создания назначает vtable **101a4da8**. Доказанные raw slots:
`+104 -> 1000d5a0`, `+228 -> 100e01e0`. Оба сохранённых тела вычисляют
`(pev[8]+pev[178], pev[c]+pev[17c], pev[10]+pev[180])`, т.е. origin+view_ofs
по native entvars layout (см. `analysis/doors/capture.json`).
Первый slot поставляет исходную by-value позицию в показанном Glock caller;
второй повторно вычисляет её в MP sender. Это связь именно с доказанной
CBasePlayer vtable; произвольные другие подклассы этим не покрываются.

## Raw filename и MP5/TMP setters

Helper передаёт path в WriteString без `sound/`, преобразования separators,
смены `weapons` на `weapons_new`, AllocString или precache внутри sender.
Например, raw pointer `101adef4` содержит
`weapons_new/glock/glock_fire.wav` и прямо передаётся из caller.
Нельзя унифицировать похожие filenames без отдельного evidence.

Два полностью сохранённых precache/setup тела задают поля оружия:

| Функция | weapon+1a8 (loop path offset) | weapon+1ac (end path offset) |
|---|---|---|
| `1005b2e0` | `weapons/mp5/mp5_shoot_loop.wav` | `weapons/mp5/mp5_shoot_end.wav` |
| `1007f070` | `weapons/tmp/tmp_shoot_loop.wav` | `weapons/tmp/tmp_shoot_end.wav` |

Значения сохраняются как **literalPointer − stringBase**, не как доказанный
результат AllocString. При отправке прибавляется `DAT10223188+98`.
Эти setup тела вызывают `10116a30`, thunk к engine PrecacheSound slot
`10222f4c`; это не PlaySFX и не playback. Проверки существования файла в
самом thunk не видны. Это прямые setters, не обнаруженные KeyValue keys.

## Начало и прекращение loop: только звуковой участок

В `1005b400` (MP5 primary) и `1007f1a0` (TMP primary) при
`weapon.byte+1a5==0 && weapon+1a8!=0` устанавливается latch `+1a5=1`.
В SP вызывается PlaySFX с path+1a8, operation1, byteArg1. MP выбирает другой
engine sound path `100fc9f0`, а не этот вызов PlaySFX. Остальная механика
выстрела описана в `analysis/weapons/ranged.json` и здесь не пересматривается.

Префикс `1011d560` до `1011d81b` управляет прекращением latch; он отдельно
сохранён [в asm](playsfx-server-evidence-weapon-frame.asm):

- Не dualweapon: при active latch сброс вызывают нулевой player virtual+bc,
  clip+1e4<1, поле+1f0!=0, отсутствие button bit1 или weapon+128!=0.
- Dualweapon: вызывает1002f180 с pev того же weapon edict (private lookup/возможная allocation), проверяет DWORD результата+200 в наборе14/23/27,
  а также снятие button bit0x800 либо weapon+128!=0. Прочие dual-state
  переходы этим звуковым фрагментом не исчерпываются.
  Полное тело, reload completion и input dispatch теперь разобраны в
  [server-glock-frame](../server-glock-frame/contract.md); трактовка lookup как отдельного партнёра не подтверждена native ABI.
- После сброса при loop offset+1a8!=0 SP отправляет operation2, byteArg1.
  В **dual** ветке path берётся из+1a8; в **не dual** — из+1ac.
  Это фактическое различие, а не опечатка, требующая исправления игры.
- При end offset+1ac!=0 SP затем отправляет operation0, byteArg1, end path.
  В MP соответствующие ветви вызывают1001e990 для loop и100fc9f0 для end,
  т.е. иной sound API. Их полный контракт в этот проход не входит.

Клиентский контракт объясняет различие path для operation2: nonspatial
consumer прекращает retained handle независимо от выбора файла; однако
до dispatch строка всё равно читается и может переписываться. Поэтому
«не выбирает stop handle» не означает «path вообще не читается».
Тот же reader потребляет trailing SHORT, но не использует его; это
не меняет доказанного server факта recipient index на wire.

Sender10116a40 не владеет persistent sound handle, очередью, timer или
per-file cache; он синхронно формирует user message. Значение operation2
для backend и выбор retained handle нужно сверять с клиентским consumer,
а не выводить только по названию end path. Другие callers с operation0,
включая пути `weapons_new/...` и отдельный `weapons/vp70/...`, перечислены
в evidence JSON без объявления всех ветвей оружия исследованными.

## Что осталось

Закрыты серверный wire, delivery branches, обычный eight-DWORD ABI,
CBasePlayer position slots и bounded MP5/TMP loop lifecycle. Не закрываются
автоматически все callers вне8000 C, entity factory/KeyValue для отдельного
ambient SFX, save/restore sound latch, весь weapon frame и backend API.
Клиентская ветка spatial/retained loop должна читаться в отдельном contract;
никакого runtime-паритета этот статический проход не заявляет.
