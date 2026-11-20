# Custom studio textures: message и costume protocol

Статический аудит сохранённых captures client/server.dll. Игра и REA этим
агентом не запускались. Это уточнение
[lifecycle](studio-texture-lifecycle-audit.md) и
[resource helpers](studio-texture-replacements.md), не утверждение pixel parity.

## Два независимых пути выбора

`CustomFng`, `CustomGlv`, `CustomSlv` доставляют строку texture path в клиентский
HUD object. Их readers инвалидируют соответствующие ready bytes, а загрузка
происходит позднее при подходящем studio mesh draw. Числового costume ID
в этих readers нет.

Гардероб использует `setclothes ID [filename]`, локальный selector1018ca20 и,
для custom costume12, строку `sv_custom_hoodie`. Hoodie helper добавляет
`models/costumes/` перед cvar value. Custom fingers/glove/sleeve helpers
передают свои strings loader напрямую и такого префикса не добавляют.

## Registration и reader contract

Клиент1006cf00 регистрирует CustomFng→1006e5c0, CustomGlv→1006e5e0,
CustomSlv→1006e600. Сервер100e5fc0 регистрирует эти сообщения с size=-1
(variable length) в globals102266ec/f0/e8 соответственно. Server producers и senders теперь прослежены отдельно в
[custom-texture-server.md](custom-texture-server.md); краткая связь приведена ниже.

| Reader entry | Destination относительно object | Дополнительный флаг | Ready reset |
|---|---|---|---|
|1006fb40|+0x11c,256байт|10542bb0|104d26c7 fingers|
|1006fbb0|+0x21c,256байт|10542bb1|104d26d0 glove|
|1006fc20|+0x1c,256байт|Нет в теле|104d26c6 SP sleeve и104d26d3 MP sleeve|

Каждый reader вызывает InitReader10080850(buffer,size), ReadString10080a60,
затем `strncpy(destination,string,256)`. После NUL scan строка длиной0..2
заменяется пустой. Fingers/glove сначала ставят active flag1, а при короткой
строке очищают active flag вместе с первым байтом пути. Ready сбрасывается
безусловно; return1. Файл здесь не проверяется, GPU upload не выполняется.

В полном reader нет явной записи NUL в destination[255] до scan. Поэтому
этот слой сам не доказывает безопасность входа длиной>=256. Обычная семантика
strncpy для короткого источника дополняет оставшиеся байты нулями. Новый ReadString10080a60 допускает до2047символов, то есть его cap
сам по себе не защищает256-байтный destination. Sender и фактический
engine packet-size limit остаются отдельными границами.

Bounded assembly1006e5c0.asm теперь закрывает все три wrappers. Они берут
входные `(name,size,buffer)`, передают на стеке `(0x1018a0c0,name,size,buffer)`
соответствующему reader и освобождают16байт аргументов. Это явный object
argument, а не зависимость reader от входного ECX. Return value reader
сохраняется. Таким образом точный полный маршрут:

- CustomFng →1006e5c0→1006fb40→1018a1dc, active10542bb0, ready104d26c7.
- CustomGlv →1006e5e0→1006fbb0→1018a2dc, active10542bb1, ready104d26d0.
- CustomSlv →1006e600→1006fc20→1018a0dc, ready104d26c6/104d26d3.

Ни wrapper, ни reader не меняют name в payload: name передан как отдельный
callback argument, а содержимое сообщения читается как строка.

## Message reader: cap и отсутствие входного NUL

InitReader10080850(buffer,size) сохраняет buffer105440b4 и size105440b8,
обнуляет cursor105440bc и error/state word105440c0. ReadString10080a60
обнуляет первый байт scratch105440c8 и использует локальный snapshot size.
Пока cursor+1<=size, вызывает100808e0; результаты0 и-1 заканчивают строку.
Остальные значения копируются как char. После2047скопированных символов
цикл прекращается, scratch[index]=0; возвращается общий2048-байтный buffer.

Следовательно missing input NUL не обязательно отклоняется: при достижении
границы size функция сама дописывает NUL в scratch. Длина>=256, допустимая
этим reader, приводит к strncpy256 без гарантированного NUL в destination,
после чего custom reader делает неограниченный scan. Это доказанная
несовместимость caps двух слоёв; реальная достижимость зависит от engine
packet limit и допустимых sender inputs. Не заявляется наблюдавшийся crash.
Новый ReadChar100808e0 закрывает byte semantics: если size<cursor+1,
ставит bad flag105440c0=1, возвращает-1 и не двигает cursor. Иначе cursor
увеличивается на1 и возвращается sign-extended `(int)*(char*)`.

Поэтому byte0xff потребляется и завершает ReadString как-1 **без** bad flag,
как и NUL завершает как0; остальные high bytes сохраняются через cast к char.
При обычном исчерпании packet size ReadString предварительно прекращает
цикл, не вызывает недостаточное чтение и сам bad flag не ставит. При cap2047
остальные bytes/NUL не дочитываются. Это контракт исходного byte reader,
не Unicode decoder и не предположение о фактической кодировке filenames.

## Инициализация и внешний render gate

В начале1006cf00 очищаются первые байты this+0x1c, this+0x11c,
global1018a2dc и active flags10542bb0/bb1. Новый video-init1006d9e0 повторяет эти очистки paths/active flags и позднее
вызывает renderer reset10060b10. В этих прямых очистках нет сбросов
replacement ready104d26c5..d3 или texture IDs. Очистка строки и cache
invalidation — разные операции; другие вызываемые init helpers этим
наблюдением не исключены.

Mesh10065ef0 выполняет glove override лишь для entity==GetViewModel() и
active10542bb1!=0. Поэтому пустой/короткий CustomGlv, который очищает active,
**не является доказанным обычным способом достичь** short-path ECX branch
100642b0. Само поведение helper (ready1 без upload при коротком path и
ненулевом ECX) доказано assembly, но его достижимость должна учитывать
внешний gate. Нельзя превращать локальную особенность helper в утверждение
о каждом empty-message сценарии.

Fingers branch допускается mode/render gates либо active10542bb0, затем
проверяет подходящую entity, local player и SetupPlayerModel result.
Это не безусловная замена рук всех игроков. Полные gates приведены в
[mesh contract](studio-material-contract.md).

## Соседние buffers и police3

В100648d0 обычный custom fingers path читается из1018a1dc. Для police3
assembly подтверждает начало копирования с1018a1d8, затем добавление
`_black.tga`. Это не удаление расширения исходного fingers path.

Подтверждённый object base1018a0c0 задаёт sleeve destination1018a0dc..1018a1db,
fingers —1018a1dc..1018a2db, glove —1018a2dc..1018a3db. В этом layout
1018a1d8 — последние4байта sleeve destination. Тогда короткая CustomSlv
через strncpy zero padding может сделать первое чтение1018a1d8 нулевым,
а итоговый suffix-path — `_black.tga`. Это вывод о байтовом алгоритме при
указанных условиях, не наблюдение реального кадра или доказательство всех
runtime значений хвоста. Layout подтверждён wrapper ABI; нулевой tail —
условие рассмотренного сценария, а не значение, прочитанное из процесса.

SP sleeve10064d60 имеет ещё один независимый coupling: при costume-enable0
его входной gate смотрит длину **fingers1018a1dc**, но override ниже читает
**sleeve1018a0dc**. Case costume12 выходит до custom sleeve override. Эти
адреса и порядок нужно сохранять в описании оригинала, не исправлять
догадкой, что два paths должны быть одним.

## Costume command round trip

1001f9d0 при разрешённом unlock ID1..11 выбирает1018ca20=ID, сбрасывает
hoodie/SP sleeve/jeans/face ready и отправляет `setclothes ID`. Default action66
делает то же для0. Custom action12 вызывает10020230.

10020230 проверяет COM_LoadFile(`models/costumes/custom_hoodie.tga`,5,null).
При успехе выбирает12, сбрасывает те же4ready и отправляет
`setclothes 12 custom_hoodie.tga`. При failure сохраняет selector/ready и
обновляет UI notification state; texture upload здесь отсутствует.

Сохранённый server ClientCommand10018d60 обрабатывает `setclothes`:
atoi(argv1) записывается в player+0x424 при ненулевом player. Ненулевой
указатель argv2 приводит к CvarSetString(`sv_custom_hoodie`,argv2). Здесь
не показана проверка длины argv2, диапазона ID или unlock mask. Проверка
ненулевого указателя не эквивалентна проверке непустой строки.

Клиентский hoodie10064340 при selector12 строит `models/costumes/%s` из
GetCvarString(`sv_custom_hoodie`). Смена cvar сама по себе не является cache
key: при ready1 helper выходит раньше чтения selector/path. Проверенная
UI ветка выполняет invalidation явно. Доставка server cvar клиенту и
обновление selector вне локальной UI ветки — следующие отдельные границы.

## Дополнительный fingers invalidator1003a170

Предыдущий Ghidra interior query не дал procedure, но новый bounded objdump
1003a140.asm показывает самостоятельный13-байтный leaf1003a170..1003a17c:

```text
byte[104d26c7] = 0;
return 1;
```

Перед ним предыдущая функция заканчивается RET1003a16b и четырьмя INT3,
после него RET1003a17c и три INT3. Это доказательство отдельного entry и
полного короткого тела, а не ближайшего имени по адресу. Функция не читает
payload, не меняет path/active flag/texture ID. Новый exact xref ведёт в registration10038900: инструкция10038993 передаёт
callback1003a170 в HookUserMsg для **MPModel**. Raw bytes10146288 также
подтверждают строку `MPModel\0`. Это message-triggered invalidation, payload
callback не читает. Он не выбирает модель по payload: следующая загрузка
fingers снова получает player model через внешний studio consumer.
Предыдущее отсутствие Ghidra procedure теперь является ограничением
автоанализа, а не основанием объявлять bytes не-функцией.

## Server producer → client path

World KeyValue101208e0 принимает `customsleeve`, `customfingers`, `customgloves`,
передаёт исходное value в AllocString и хранит string_t в world+f0/f4/f8.
Префикса/расширения и явного length limit в этих ветках нет.

Dynamic KeyValue10095490 принимает `sleeve`, `fingers`, `gloves`,
AllocString(value)→source+ec/f0/f4 и handled1, без видимой нормализации
или проверки длины. Dynamic setter100a38e0 переносит ненулевые source+ec/f0/f4 в world+f0/f4/f8
и отправляет соответствующий CustomSlv/Fng/Glv через MSG_ONE каждому
разрешённому player. WRITE_STRING получает world string offset+string pool
base напрямую. Нулевой source string_t пропускается: это не безусловная
очистка всех прежних значений.

Weapon deploy1011c1a0 при player+3a9==0 ставит latch1 **до** world!=null
проверки, затем отправляет ненулевые world paths. Join100c8b70 сбрасывает
latch0 и вызывает WRITE_STRING(NULL) для каждого из трёх сообщений.
Фактическую сериализацию NULL выполняет engine writer; этот серверный body
не содержит байтов результата. Client contract для полученной пустой строки
доказан независимо и описан выше. Ни один из прочитанных sender bodies не
вводит проверяемый maximum strlen перед client strncpy256.

Точное сопоставление numeric dynamic setter class с classname ведётся
серверным аудитом; оно не выводится из имени callback клиента. Нулевой
string_t не равнозначен любой пустой строке: результат AllocString(empty)
зависит от engine реализации, а setter проверяет именно numeric offset.

## Конкретные оставшиеся границы

1. MPModel1003a170 связан с registration10038900; payload не читается.
   Server event timing этого отдельного сообщения ещё не следует из client body.
2. Sender maximum string length и engine WRITE_STRING(NULL) serialization;
   world KeyValue, dynamic resend, join reset и deploy latch уже прослежены.
3. ReadString cap2047, signed-byte decoding, error/cursor и trailing NUL
   закрыты. Реальная кодировка filename и допускаемый packet size engine
   не выводятся из этого низкоуровневого reader.
4. Синхронизация player+424 / local selector1018ca20 и server cvar flags:
   не приписывать обычному CvarSetString доказанную репликацию.
5. Другие writers в буферы, ready и renderer lifetime. Точный direct xref
   не исключает bulk/индексированные записи или context loss.

## Источники

- `decompiled/client/captures/graphics-client-first/005-pseudocode.c` —1006cf00.
- `decompiled/client/captures/graphics-studio-texture-loader/004-pseudocode.c` .. `006-pseudocode.c` —три reader.
- `decompiled/client/captures/graphics-studio-mesh-materials/000-pseudocode.c` —10065ef0 и active/entity gates.
- `decompiled/client/captures/graphics-studio-texture-replacements/000-pseudocode.c`, `004-pseudocode.c`, `006-pseudocode.c` —hoodie/sleeve/fingers paths.
- `decompiled/client/captures/graphics-studio-texture-lifecycle/007-procedure_assembly.json` —буквальное fingers source1018a1d8.
- `decompiled/client/captures/vgui-menu-actions/005-pseudocode.c` —1001f9d0.
- `decompiled/client/captures/graphics-studio-texture-final/001-pseudocode.c` —10020230.
- `decompiled/server/captures/chat-server-core/002-pseudocode.c` —variable-size registration.
- `decompiled/server/captures/menu-switch-server-flow/001-pseudocode.c` —ClientCommand10018d60.

- `analysis/graphics/studio-flow-assembly/1006e5c0.asm` —все три wrappers и explicit object argument.
- `analysis/graphics/studio-flow-assembly/1003a140.asm` —границы и полное тело1003a170.
- `analysis/graphics/studio-flow-assembly/capture.json` —hash исходного DLL, bounded ranges и отсутствие запуска target.

- `decompiled/client/captures/graphics-studio-flow-entry/000-pseudocode.c` .. `003-inspect_native_instruction.json` —wrappers и callback reference.
- `decompiled/client/captures/graphics-studio-flow-routing/003-pseudocode.c`, `004-pseudocode.c`, `008-read_bytes.json` —MPModel registration, video-init, raw name.
- `decompiled/server/partial-pass/functions/0x100a38e0.c`, `0x1011c1a0.c`, `0x100c8b70.c`, `0x101208e0.c` —прочитанные sender/KeyValue тела.

- `decompiled/server/partial-pass/functions/0x10095490.c` —dynamic source keys sleeve/fingers/gloves.

- `decompiled/client/captures/graphics-studio-flow-abi/001-pseudocode.c`, `002-pseudocode.c` —InitReader и ReadString cap2047.

- `decompiled/client/captures/graphics-studio-flow-init/003-pseudocode.c` —ReadChar100808e0 signed-byte/error/cursor semantics.
