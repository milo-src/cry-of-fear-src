# PlaySFX: клиентский пакет и два звуковых пути

Статический разбор оригинального client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Без запуска игры, измерения звучания или изменения ресурсов. Основные тела:
wrapper1006e910, handler10071020, adapter1007fb10 и producer10080410.
Карточки: `playsfx-client-notes.json`; они синхронизированы с общим каталогом.

Регистрация1006cf00 в `graphics-client-first/005-pseudocode.c` связывает
строку `PlaySFX` с1006e910. Wrapper передаёт в10071020 четыре stack arguments:
HUD pointer1018a0c0, message name, size, buffer. Это не ECX-thiscall handler.
Сам handler использует size/buffer для InitReader10080850; переданный HUD
не используется как звуковой context. Context105440a4 приходит позднее,
только в локальной аудиоветке.

## Порядок чтения wire payload

| Порядок | Reader | Размер | Доказанное использование |
|---|---|---|---|
|1|ReadString10080a60|NUL-строка|sample path, указатель на общий reader scratch|
|2|ReadByte100808b0|1|mode для локального audio producer|
|3|ReadByte100808b0|1|aux byte; нормализуется в bool для adapter, producer его не использует|
|4..6|ReadCoord10080910|2×3|origin x,y,z; signed short /8|
|7|ReadByte100808b0|1|engineRoute:0 локальная ветка, любое ненулевое — event API|
|8|ReadSignedShort10080a10|2|прочитан, результат отброшен в handler|

Последнее поле по server contract может быть recipient; **клиентское тело
не использует его как фильтр или entity index**. Это именно signed short,
не long. ASM reader проверяет cursor+2<=size, собирает LE16 и sign-extends;
недостаток данных ставит bad flag, возвращает-1 без движения cursor.
ReadCoord умножает этот результат на доказанный double0.125.

При обычной строке длиной n wire size равен n+12 (строка с NUL и11 байт
полей). Если sender использует variable user message engine cap192, остаётся
n<=180. Это ограничение нормального отправителя, а не локальный preflight
handler: здесь нет проверки достаточности всего пакета или итогового bad flag.
Превышение192 на engine MessageEnd ведёт в Host_Error01d7d873; это нельзя
описывать как безобидное обрезание строки или обычный пропуск одного пакета.
Семантика общей ReadString при0xff/2047-char cap описана отдельно в
`../graphics/studio-custom-protocol.md`; она не заменена безопасным parser.

## Ненулевой engineRoute: spatial event API

Этот путь не проверяет105440a4/105440a8 и не вызывает10080410. При наличии
case-sensitive substring `weapons_new/` handler собирает `weapons/` + bytes
после **первого** slash или backslash во всей исходной строке. Это не общий
replace найденного substring и не case-insensitive prefix check. Полученный
путь используется локально; исходный reader scratch не изменяется.

После возможной замены ищутся case-sensitive substrings `fire` и `shoot`
в результирующем пути. Если найден хотя бы один, channel1; иначе channel0.
Вызов таблицы event API+4 имеет точные аргументы:

```text
EV_PlaySound(0, origin, channel, sample, 1.0f, 0.8f, 0, 100)
```

Volume1.0, attenuation0.8, flags0, pitch100 заданы литералами, а не полями
пакета. Mode и aux byte на этом пути не управляют loop/stop. Прочитанный
trailing short также не становится первым аргументом: ent равен0.

API-связь основана на Initialize1001d5a0, копирующем engine table в101b2608,
и x86 SDK layout: pEventAPI slot84→101b2758, `event_api_t` начинается с
version int, за которым EV_PlaySound находится по+4. Header:
`external/hlsdk-portable/common/event_api.h`. Не установлено, как фактический
engine трактует ent0 и channel0/1 при всех игровых состояниях: здесь доказан
вызов, а не слышимость или финальное смешивание звука.

## engineRoute==0: context adapter и локальный producer

Handler вызывает1007fb10(sample,mode,bool(aux),x,y,z). ASM подтверждает
шесть DWORD stack arguments, включая переданные float bits. Adapter при
nonnull105440a4 устанавливает ECX=context и передаёт те же аргументы10080410.
Producer выходит при context byte0==0 или backend105440a8==null.

Несмотря на шесть аргументов ABI (RET0x18),10080410 читает только первые два:
sample и mode. Остальные aux/origin не участвуют в создании звука. Ghidra
показала двухаргументную декларацию из-за отсутствия чтений, но фактическое
callee cleanup24 и adapter forwarding сохраняют расширенный ABI. Эта ветка
не получает spatial placement из отправленных координат.

До выбора mode producer ищет `weapons/` и при совпадении собирает
`weapons_new/` + suffix после первого slash/backslash исходного имени.
Даже stop mode2 проходит этот разбор пути до остановки handle.

| Mode | Операции |
|---|---|
|1|Если105440ac!=null, вызывает его virtual+18; создаёт новый handle через backend.virtual+8(path,1,1,1,0,0), результат сохраняет105440ac|
|2|Если105440ac!=null, вызывает его virtual+18; возвращается, global pointer не очищается|
|прочие, включая0|backend.virtual+8(path,0,1,1,0,0); результат хранится только в локальной переменной|

Создаваемый path — `<GetGameDirectory()>/sound/<sample>` в локальном буфере.
ASM закрывает ошибку variadic pseudocode: PUSH sample остаётся на стеке перед
нулеаргументным GetGameDirectory, затем PUSH dir,format,dest; cleanup16.
Callback GetGameDirectory не принимает sample как настоящий аргумент.

Ненулевой полученный handle получает:

1. virtual+20(clamp(cvar `volume`,0,1)) для обычного конечного float;
2. virtual+60(float(1.0 + RandomFloat(-0.1,0.1)));
3. virtual+10(0).

Это соответствует известному пути loop/stop/one-shot, изменения громкости,
playback rate и снятия начальной паузы. Непосредственные доказательства —
receiver, slot и аргументы; ABI всех методов внешней библиотеки здесь заново
не восстановлен. Пакет не несёт отдельного применяемого volume или pitch.
Для retained105440ac update1007f740 позднее повторно применяет текущий `volume`;
локальный one-shot handle в этом update не хранится.

## Время жизни и границы копирования

105440a4 — context,105440a8 — backend,105440ac — retained effect handle;
это не музыкальный handle105440b0. Mode1 останавливает прежний ac перед
заменой, но явного release/drop здесь нет. Mode2 не обнуляет ac; one-shot
pointer после вызовов не сохраняется. Внутреннее владение backend и финальный
release не установлены; отсутствие видимого drop не является измеренной утечкой.

ReadString возвращает общий scratch; последующие byte/coord/short readers
его не перезаписывают. Переписанные пути и formatted path — stack buffers,
переданные во внешние calls синхронно. Копирует ли внешняя библиотека строку
при создании, не доказано чтением одного callsite.

Оба path-remap имеют256-byte локальные буферы, копируют suffix в цикле,
а rangecheck suffix<256 выполняется после накопления. Добавление prefix и
форматтер1000c900 не следует автоматически считать bounded snprintf.
Нормальная wire cap180 уменьшает входную длину, но длина game directory и
другие прямые callers producer не ограничены данным message контрактом.

Новые C находятся в `decompiled/client/captures/network-playsfx-client/000-pseudocode.c`
 и `001-pseudocode.c`. Ghidra показывает `void` для wrapper/handler; это не
доказательство отсутствия результата: ASM выставляет EAX=1 на обоих обычных
выходах handler. Нормализация aux меняет только младший байт сохранённого
DWORD. Для корректного ReadByte0..255 получается0/1; при reader error-1
верхние байты остаются0xffffff. Producer всё равно этот аргумент не читает.

Handler обычно возвращает1 после любой из двух ветвей, даже если adapter
ничего не сделал либо backend вернул null. Return1 не доказывает воспроизведение.
Остаются поведение event API/backend, ownership handles/path, полный форматтер
1000c900 и семантика полей sender, которые здесь читаются, но игнорируются.

## Сохранённые доказательства

`playsfx-client-assembly/capture.json` фиксирует SHA256 исходного DLL,
полного retained listing и шести bounded ASM: wrapper,handler,adapter,
producer,ReadShort,ReadCoord. Все извлечённые opcode bytes сверены с PE.
Там же сохранены literal paths, fire/shoot,format,volume и doubles0.125/1.0.
Исходные C для adapter/producer переиспользованы из `weapons-client-core/007`
и `weapons-client-effects/000`; карточки обновлены и синхронизированы при интеграции этого этапа.

## Уточнение зависимости formatter (pass04)

`1000c900` разобран в [client-profont-dependencies](../client-profont-dependencies/contract.md): cdecl varargs wrapper передаёт размер `size_t(-1)` в общий printf backend. Это не bounded snprintf и не ограничение размером локального массива. Полный `100efb51` backend остаётся открытым; остальные ограничения PlaySFX выше сохраняются.
