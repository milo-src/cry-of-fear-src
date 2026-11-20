# Достижимость сохранения состояния: ограниченный аудит pass17

Статический оригинальный `hl.dll`, SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Игра и DLL не исполнялись; новых Ghidra сессий не было. Новых REVIEW: **0**.
Это уточнение границ поиска, а не доказательство недостижимости кода.

## Результат

Положительный writer `BYTE M[0]`, где `M=DWORD[10222e10]`, **не найден**.
Полный поиск literal VA обнаружил 16 вхождений указателя global в семи уже
разобранных функциях. Все 16 — операнды подтверждённых native инструкций,
совпадают с HIGHLOW relocation slots. Нового прямого owner нет.

Для текстового writer `1004a6e0` и reader `100c5300` не найдено exact VA/RVA
literal, прямого `E8/E9 rel32` во вход или внутрь сохранённого тела, а также PE
export во вход/тело. В сохранённом C имена присутствуют только в собственных
definitions. Их тела разобраны, но подключение к обычной игровой цепочке
**не установлено**. Нельзя подключать их к переходу карты только потому, что
рядом существует in-memory manager.

## Точная область поиска

`capture.py` читает все **2 413 568 байт** исходного PE. VA и RVA ищутся как
четыре little-endian байта на **каждом** файловом смещении, включая headers,
padding и таблицы, без предположения о DWORD alignment. Найденный literal сам
по себе не считается xref; сопоставление с native instruction сохраняется отдельно.

В каждом raw executable section проверяется каждый возможный начальный байт
`E8` или `E9` с последующими четырьмя байтами displacement. Здесь executable
section один: `.text`, VA `10001000`, raw size `1a0000` = **1 703 936 байт**;
virtual size `19fe6c`. Адрес цели вычисляется modulo 2^32. Это надмножество
instruction-aligned CALL/JMP rel32. Нулевой результат исключает эту конкретную
кодировку в пределах проверенных raw sections независимо от Ghidra discovery.
Последние четыре байта секции не могут начать полную пятибайтную инструкцию.

Считаны все **846** entries PE Export Address Table, включая неназванные ordinal
entries и forwarder ranges. Разобран весь PE relocation directory; сохранены все
HIGHLOW записи со значением одного из семи искомых VA. Relocation не доказывает
чтение/запись, но независимо подтверждает местоположение абсолютного операнда.

Поиск текста охватывает **8074 сохранённых server C файла**, включая captures,
а не только partial-pass8000. `searched-c.json` содержит полный список путей,
SHA256 и entry при наличии header. Это покрытие сохранённого корпуса, не всех
10398 discovered procedures. Полная переносимая опись сохранена отдельно в
`analysis/corpus-coverage/server-discovered-evidence.json`; её hash закреплён.

Для семи owners, четырёх manager helpers и двух text functions сохранены полные
13 entry-aligned native ranges. Дизассемблирование начинается с Ghidra actual
entry и заканчивается на inclusive saved-C body end; каждый byte сверяется с
PE. В `references` записаны **22** инструкции: 16 literal references и 6 direct
helper calls. Это не новый полный обзор остальных функций из этих тел.

## Все прямые owners global10222e10

Адреса в таблице — начала инструкций, не interior operand offsets.

| Actual entry | Native instruction sites | Что делает с M |
|---|---|---|
|1001cc90|1001cd40,1001cd83,1001cd9c|Читает M; при M[0]!=0 очищает совпавшие A/B records; header не пишет|
|1004c100|1004c249,1004c31b|Clear M+4 размером10f38; capture каждого player|
|100a1f70|100a1f80,100a1fbd|Clear M+4 размером10f38; capture, затем ChangeLevel|
|100a4500|100a450f|Clear M+4 размером10f38; FireTargets|
|100c9210|100c93d5|Передаёт M как ECX в restore10029090; проверяет AL|
|100e9ab0|100e9ca9,100e9cd2|Проверяет M и вызывает capture в restart ветке|
|10120eb0|10121067,101210f5,10121127,10121137,1012113e|Clear, allocation/constructor, stores указателя и release; не положительный BYTE header writer|

`10121127` сохраняет в global EAX после constructor; `10121137` сохраняет
нулевой EAX при allocation failure. Это два writer **указателя**, не `M[0]`.
При release `1012114d` вызывает `1013dba5(M,10f3c)` и в этом native пути
global не обнуляет. Полные guard/lifetime caveats см.
[world bootstrap](../server-world-bootstrap/contract.md).

## Поток M и header

| Caller site | Прямой callee | Передача |
|---|---|---|
|1012111b|10029070|ECX = новый allocation result|
|100c93e0|10029090|ECX = global M; stack = player|
|1004c326|1002a480|ECX = перечитанный global M; stack = player|
|100a1fc4|1002a480|ECX = перечитанный global M; stack = player|
|100e9cd9|1002a480|ECX = перечитанный global M; stack = player|
|1002a85d|1002a000|ECX = сохранённый входной M; четыре stack arguments|

`10029070` native `10029073..10029083` вызывает memset(M+4,0,10f38), затем
возвращает M в EAX. Первые четыре байта manager не записываются. Не следует
считать `M[0]` инициализированным нулём только из-за этого constructor.

`1002a480` при ненулевом P пишет `BYTE [ECX]=0` в **1002a49a**, ещё до поиска
свободной записи и player virtual callback. Это единственный собственный store
в header, доказанный в проверенной manager цепочке. При full bank этот сброс
уже выполнен. `1002a5d0` пишет1 по ESI, но ESI=`M+i*41c+4`, то есть valid A_i,
**не M[0]**. Копия dead record в B также начинается после header.

Header читают `1001cd50` (ClientDisconnect, EDX=M) и `100290ba..100290be`
(restore, EDI=M). В первом случае ноль запрещает очистку совпавших записей,
во втором — проверку B_i, но не A_i. Отрицательный результат поиска writer
не превращает эти native ветви в no-op.

Обычные clear начинаются с M+4; record copies/clears используют положительные
смещения банков. У `1002a000` нет bounds checks собственного recordIndex,
но показанный direct caller передаёт выбранный индекс1..32. Внешние alias,
повреждение памяти и unbounded copies не моделировались как доказанный способ
включения header. Opaque callbacks не объявляются неспособными изменить M.

## Text writer/reader: что именно отрицательно

| Проверка в оригинальном PE |1004a6e0|100c5300|
|---|---:|---:|
|Exact 4-byte VA literal, весь файл|0|0|
|Exact 4-byte RVA literal, весь файл|0|0|
|E8/E9 rel32, executable raw sections, цель entry|0|0|
|E8/E9 rel32, executable raw sections, цель любая точка saved body|0|0|
|PE EAT target, entry или saved body|0|0|
|HIGHLOW relocation slot со значением exact VA|0|0|
|Saved C token hits вне собственного definition|0|0|

Scope exact body ranges закреплён C headers и `ranges` evidence, не назначен
по следующему соседнему symbol. Такой результат сильнее одного текстового
поиска, но всё ещё не доказывает отсутствие косвенного вызова. Не проверены
computed addresses, register-indirect CALL/JMP, таблицы относительных offsets,
short/conditional jumps, fall-through из соседнего кода, внешние модули,
runtime patching/hooking и engine address resolution. Также не выполнен
полный symbolic alias analysis адреса M через все 10398 procedures.

## Как использовать результат дальше

- Для обычного map transition ориентир — [in-memory lifecycle](../server-state-lifecycle/contract.md),
  [capture](../server-state-capture/contract.md) и [restore](../server-state-restore/contract.md).
- [Текстовый writer](../server-stats-lifecycle/contract.md) и
  [reader](../server-state-reader/contract.md) сохранять как разобранные тела
  с неподтверждённой внешней точкой подключения, не приписывать вызов spawn/mapchange.
- При следующей адресной Ghidra сессии полезны typed refs к exact entries,
  global10222e10 и incoming references ко всем body ranges; затем value-flow
  alias analysis только новых источников. Эти запросы данным аудитом не исполнялись.
- Ненулевой header может существовать без положительного game store из-за
  неинициализированного allocation contents либо нарушенного lifetime. Это
  возможные состояния, **не** установленная intended логика и не runtime наблюдение.

`capture.py` воспроизводит поиск и bounded ASM; `verify.py` независимо сверяет
PE/hash/ASM, повторяет raw scan и проверяет scope. `notes.json` содержит пустой
`functions` список намеренно: отрицательное свидетельство не создаёт REVIEW.
