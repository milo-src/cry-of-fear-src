# Регистрация сообщений, multicast и возврат после Host_Error

Статический разбор original `hw.dll`, SHA256
`9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`.
Полные C/REA: `decompiled/engine/captures/queue-engine/` (9) и
`queue-engine-routing/` (4). Байт-проверенные ASM: `engine-dispatch-lifecycle-assembly/`.
Только чтение бинарника; игра, сеть и error paths не запускались.

## Быстрые точки входа

| Задача | Адрес | Что теперь установлено |
|---|---|---|
| Сравнение registration names |01d4676f|точное byte equality,0 либо-1, без case folding|
| Копирование имени |01d46622|forward copy до NUL, без capacity|
| Создание registration node |01d8cf91|malloc + memset0; поэтому unused name bytes initially0|
| Отправка описаний |01dd80af|19 bytes на node: command39,id,size,name[16]|
| Подключение |01dd8163|временное использование active list для описаний клиенту|
| Активация карты |01de007a|ServerActivate callback, startup frames, client signon|
| Переход pending→active |01d816e0,01dde46f|добавление pending chain в хвост active, затем pending=NULL|
| Spatial отбор и запись |01dd6a43,01dd696a|client gates, masks, capacity, drain multicast buffer|
| Точка возврата ошибки |01d7f2cc|setjmp027fc1a0; ненулевой return пропускает остаток frame wrapper|

Аналитические имена не являются найденными debug symbols. REVIEW означает
описанный статический контракт; внешние callees и перечисленные ниже вопросы
не объявляются восстановленными по одному телу.

## Registration node и wire

Продолжение [engine-message-followup-contract.md](engine-message-followup-contract.md).
RegUserMsg01de0e44 ищет имя только в active024988ac, а новую запись добавляет
в голову pending024988a8. Поля node: id+0,size+4,name[16]+8,next+18; allocation32.

`01d4676f(a,b)` сравнивает по байту до общего NUL. Любое несовпадение→-1,
совпадение→0. Это case-sensitive equality, не лексикографический strcmp с
разностью кодов. NULL guards/length limit отсутствуют. `01d46622(dst,src)`
копирует пока оба указателя nonnull и source byte!=0, затем **безусловно**
пишет NUL в текущий dst. NULL source при nonnull dst даёт пустую строку;
NULL dst не защищён завершающей записью. Нет capacity/overlap protection.

`01d8cf91(n)` вызывает CRT malloc(n), затем memset(result,0,n), возвращает
result; явного NULL guard или собственного Host_Error нет. Не приписывать ему
calloc overflow semantics: один аргумент n, умножения нет. Для успешного
RegUserMsg allocation32 нулевое заполнение вместе с name<=11 обеспечивает
NUL и нулевые оставшиеся bytes name[16]. Политика CRT allocation failure
и поведение исключений не установлены здесь.

`01dd80af(buffer)` проходит pending head по next+18. На каждый node пишет:

```text
BYTE 0x27; BYTE id; BYTE size; DWORD name[0..3]; DWORD name[4..7];
DWORD name[8..11]; DWORD name[12..15]
```

DWORD writer01d470eb резервирует4 и записывает LE low32 по байтам; он не
повторяет overflow flag guard после reserve. Получается ровно19 bytes, без
собственной завершающей NUL-команды или длины строки. Variable size-1 становится
wire byteFF. Для иных отрицательных registered sizes сериализуется low8;
receiver semantics этого случая ещё не разобраны. Serializer не меняет списки.

Это описание регистрационного сообщения движка, не формат прикладного PlaySFX.
Не выдавать saved runtime ID globals155 сообщений за фиксированные ID: порядок
вызовов RegUserMsg и pending promotion меняет назначение.

## Когда pending становится active

`01dde46f` сначала проходит client records base0251f324,count0251f328,stride5018.
Для record с nonnull entity+4b9c, flag+2548==0 и (state+0!=0 либо+0c!=0)
сериализует pending в buffer+7c. Перед этим отдельная ветка client+4cc0/+4cc4
обновляет client info через01ddeafb/01ddccec по времени027fc1e0; семантические
названия флагов не устанавливаются только по offsets.

После этого единственного прохода:

```text
if pending != NULL:
    if active == NULL: active = pending
    else: tail(active).next = pending
    pending = NULL
```

Новые allocations добавлялись в голову pending, поэтому порядок внутри
переносимой цепочки обратен порядку её создания; старый active сохраняет порядок.
Здесь нет deduplication: два одинаковых имени, зарегистрированных до promotion
и отсутствовавших в active, могут создать два node. Это следствие видимого
lookup/list order, не наблюдение реальной игровой сессии.

Такое же продвижение списка находится в01d816e0 после успешного map preparation
01de04d1 и ветвей activation/load. В normal branch возможен ранний return при
025203a0==0; тогда этот участок не выполняется. Restore branch вызывает
01d8405b, при необходимости01de0ddb, выставляет025203a4/a8 и вызывает01de007a(0).
При state02dcf280!=0 после promotion ставит команду `connect local` через01d4542c.
Остальные map helpers остаются отдельными контрактами, а не раскрытыми здесь
операциями по одному названию.

## Signon и activation используют уже активные записи

`01dd8163` строит stack sizebuf capacity65536 с label `New Connection`.
Gate:02d7da1c!=1 и(client+4==0 либоclient+0!=0). Для принятой ветви устанавливает
client+0c=1, time+3578/+357c, +5010=0, сбрасывает client buffers+7c/+25c0,
вызывает channel helper01d8eece и server-info01dd7308. Затем сохраняет pending,
временно заменяет его active, вызывает serializer01dd80af и восстанавливает
pending. На обычном пути глобальные списки не теряются и не объединяются.
Nonlocal error внутри этого участка отдельно не проверен: отсутствие RAII
или явного finally не доказывает восстановление при longjmp.

Далее client+14=1; условно callback0250d900(entity). Подготавливает name/address
и128-byte reject reason, вызывает callback0250d8fc(entity,name,address,reason).
Ноль→command9 + `echo` reason и01d7e2d6; неноль→command9+`fullserverinfo`,
проход текущих/active/connected клиентов через01ddccec и submission helpers
01d90aad/01d90636 на channel client+20. Callback slots/аргументы видны;
низкоуровневые guarantees доставки и полная identity всех flags ещё открыты.

`01de007a(mode)` — более широкий activation body. Сбрасывает четыре game gates,
сравнивает directory с cstrike/cstrike_beta/czero/czeror/terror, устанавливает
соответствующие globals024988bc/c0/c4/c8. Вызывает game callback0250d914 с
entity base02572500,count025724f8,maxclients0251f328; затем helpers01dec557 и
01ddf19a, ставит025203a0=1,0257250c=2. Startup updates01de8fda:
mode0→один шаг с double027fc108=0.001;mode!=0 иmaxclients<2→два шага0.1;
иначе16 шагов0.8. Эти значения взяты из двух DWORD literal в C/ASM, не FPS.

Затем проходит eligible clients ((+0 либо+0c)!=0,+2548==0), готовит signon,
для active registrations также временно подставляет active в pending,
сериализует, восстанавливает pending, ставит+14=1 и вызывает channel helpers.
Stack sizebuf сбрасывается между клиентами. В конце пишет startup/map CRC
diagnostics и при непустом PTR01eca0c4 формирует `exec %s` в256-byte stack buffer
через formatter01e71ee7 и передаёт01d440eb. Bounds formatter здесь не доказаны.

## Раздача общих буферов после promotion

Вторая половина01dde46f сбрасывает overflow global datagram02572510 и
spectator0257488c после diagnostic, затем проходит active(+0!=0),
non-special(+2548==0) clients:

- global025734c4 → client+7c при `cursize+len < maxsize`, иначе01d90aad
  на channel+20;
- global02572510 → client+25c0 при таком же **строгом** `<`, иначе warning/drop;
- global0257488c → client+25c0 только при client+254c!=0 и достаточном месте.

В конце сбрасывает все три global sizebuf. Это стадия распределения/очереди,
не доказательство flush сокета, подтверждения пакета или клиентского вызова.
Равенство `cursize+len == maxsize` в этих проверках отклоняется.

## Spatial route01dd6a43

Аргументы `(sourceEntity,origin,mask,reliableFlag)`; общий multicast sizebuf02574478.
Сохраняет current client027fc11c, вычисляет origin index через01ddd3c7.
При nonnull source ищет matching client.entity+4b9c, если current не совпадает.
Если source не найден, current остаётся прежним — это существенно для mask80.

Перебирает все records5018: нужен client+0!=0; mask80 исключает current.
Если source и recipient entity оба имеют nonzero group bits+2c4, применяется
global0242f310:0 требует пересечение,1 требует отсутствие пересечения;
другие значения не накладывают этот дополнительный фильтр. При sourceNULL
или нулевых group bits фильтр обходится.

После predicate01dd696a(client,originIndex,mask): при0 увеличивает счётчик
024988a0 на multicast.cursize. При1 выбирает client+25c0 дляreliableFlag0,
иначеclient+7c; копирует только если `payload < maxsize-cursize` (строго).
Нехватка места здесь не добавляет счётчик rejected-by-predicate. После прохода
reset multicast и restore currentclient на обычном пути.

Predicate01dd696a удаляет mask80, но не прочие bits. Если helper01d7f691!=0
либо client+254c!=0, возвращает1 без table check. Иначе mask1→all;mask2→table
01d45b16(index);mask4→01d45b3d(index);прочие→diagnostic и0. Nonnull table
проверяется по leafIndex recipient: byte[(leaf-1)>>3] & (1<<((leaf-1)&7)).
Здесь нет отдельного guard leaf<=0. NULL table не отвергает клиента.

ASM helpers table2/table4: при nonnull bases0206baa0/0206ba9c возвращают
base+index*stride0206b698, иначе общий fallback0206b69c. Названия PVS/PAS
нельзя окончательно назначить только по числам2/4; построение таблиц и
fallback bytes остаётся следующим этапом.

01ddd3c7(point) вызывает01d623cb(point,world025204d0); NULL→0, иначе signed
`(result-world[+8c])/0x3c`. Структура leaf array и BSP traversal helper ещё
не восстановлены полностью. End destination4/5 вызывает route сmask2/4 и
reliable0;6/7 по-прежнему не проходят прежний WriteDest selector.

## Host_Error: где продолжается управление

`01d7f2cc(arg,state,out)` вызывает01e73274/__setjmp3(027fc1a0,0). ASM helper
сохраняет ESP в jmpbuf+0x10, return PC в jmpbuf+0x14,
EBP/EBX/EDI/ESI и SEH metadata, затем EAX=0.
При нормальном return0 wrapper обновляет state0250d988 (кроме guard state3 и
023c9f48!=0), очищает*out, вызывает frame01d7f0f8(arg), переносит/reset02499f64
в*out, при profile gate01ebc994 измеряет time, суммирует и раз в1000 кадров
печатает profile. Точная x87 формула converted integer профиля отдельно не
типизирована по потере `__ftol` аргумента в C.

Ранее установленный longjmp01e731bc восстанавливает этот PC и отдаёт EAX1
изHost_Error или2 изrecursive fatal. В обоих случаях wrapper сразу возвращает
текущий0250d988, пропуская нормальную работу и оставшуюся post-frame часть.
Он не сбрасывает*out заново в nonzero branch и не откатывает произвольные
глобальные изменения. Поэтому «ошибка обработана» не значит transaction rollback.

Literal scan retained objdump нашёл один setjmp use027fc1a0 и три longjmp
callsites; это ограниченный поиск literal operands, не доказательство отсутствия
косвенных aliases. Один дополнительный longjmp находится в01d7d865; его owner
и точные условия ещё не описаны. Runtime recovery/sound/resource cleanup не
проверялись.

## Оставшиеся конкретные зависимости

- BSP point/leaf traversal01d623cb и построение/размеры visibility tables;
- receiver registration command39 и размеры при необычных negative registrations;
- channel helpers01d90aad/01d90636, reliable acknowledgements и socket transport;
- полный frame01d7f0f8 и дополнительный longjmp owner01d7d865;
- освобождение registration nodes, reset nextID и mutations via indirect aliases.
