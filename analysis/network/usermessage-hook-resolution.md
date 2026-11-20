# Разрешение клиентских HookUserMsg names

Статический проход по уже сохранённому C и оригинальному PE client.dll.
Игра, REA, сборки и ресурсы не изменялись. Этот документ уточняет
[индекс user messages](usermessage-registry.md), не заменяет разбор handlers.

## Четыре исходных DAT labels

Client SHA256: `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Скрипт проверяет полный hash до и после работы, переводит VA в raw section
offset PE и читает до NUL в пределах секции, максимум 256 байт. Для каждого
имени JSON сохраняет VA, end-exclusive, offset, байты с NUL и их SHA256.
Это чтение статического образа, не текущей памяти процесса.

| Label | Raw offset | Имя | Hook wrapper из явного вызова |
|---|---|---|---|
|1014e890|14d290|Logo|1006e7e0|
|1014e944|14d344|Blur|1006e510|
|1014e9d8|14d3d8|Boat|1006e530|
|1014eb1c|14d51c|MOTD|1006e800|

Связь подтверждается формой `(*DAT_101b2650)(&DAT_name,FUN_wrapper)` в теле
1006cf00, а не совпадением имени со строкой серверного реестра. Эти четыре
строки повторяются в трёх captures одного тела:

| Capture | Сохранённый selector | Настоящий entry из объявления C |
|---|---|---|
|graphics-client-first/005-pseudocode.c|1006d23f|1006cf00|
|inventory-ui-first/005-pseudocode.c|1006d4fe|1006cf00|
|menu-switch-initial/006-pseudocode.c|1006d640|1006cf00|

У всех трёх файлов один SHA256
`d9d1cf6174f7c3e31581ad06ae02592bd97504131f1fdc2d7d2fe885b8d4b434`.
Их manifest/evidence_id и selector сохранены в новых resolved records отдельно
от function_address. Это 12 доказательных вхождений четырёх labels, а не
12 независимых handlers или три разных функции инициализации.

`resolved_client_hook_labels` теперь содержит все 12 вхождений;
`unresolved_client_hook_labels` остаётся явным пустым массивом, и счётчики
отдельно показывают raw12, resolved12/4, unresolved0/0. Ошибка чтения будущего
label сохранялась бы как unresolved с причиной; серверное имя не подставляется
по предположению. Исходный source_expression не удаляется после разрешения.

Blur, Boat, MOTD совпали с тремя именами из 155 регистраций server100e5fc0.
Поэтому количество известных имён с явным client hook выросло **69→72**.
Logo не найден в этом server block; он не добавлен как выдуманная регистрация.
Вместо этого outside-list вырос **с 9 имён/27 вхождений до 10/30**.

## Девять прежних имён вне блока и дополнительный Logo

Во всех случаях доказан явный client hook в 1006cf00. Строки регистрации,
wrappers, ссылки и номера строк находятся в `client_outside_registration_audit`.
Внутреннее поведение wrapper в этом проходе не реконструировалось.

| Имя | Wrapper | Сравнение с локальным HLSDK hud.cpp |
|---|---|---|
|ViewMode|1006ecf0|Есть HOOK_MESSAGE(ViewMode)|
|GasMask|1006e6e0|Такого HOOK_MESSAGE нет|
|ValClass|1006ec60|Есть, в соседстве с TFFree CommandMenu|
|Feign|1006e670|Есть в той же группе|
|Detpack|1006e620|Есть в той же группе|
|BuildSt|1006e550|Есть в той же группе|
|RandomPC|1006e970|Есть в той же группе|
|Spectator|1006eae0|Есть HOOK_MESSAGE(Spectator)|
|AllowSpec|1006e480|Есть HOOK_MESSAGE(AllowSpec)|
|Logo, новый resolved label|1006e7e0|Есть HOOK_MESSAGE(Logo)|

Источник сравнения — `external/hlsdk-portable/cl_dll/hud.cpp`; JSON хранит
его hash и строку каждого точного макроса. Это поддерживает предположение
об унаследованных SDK hook names для восьми прежних имён и Logo. Оно **не
доказывает**, что оригинальный engine считает их встроенными, что у них есть
определённые numeric IDs, что тела CoF совпадают с SDK или что они не используются.
GasMask остаётся именем без аналога в этом ограниченном сравнении; назначение
маски и её payload по одному имени не восстанавливаются.

Повторный bounded поиск точных quoted literals этих десяти имён в 8000 server
partial-pass C и существующих engine capture C не дал совпадений. Это отдельная
проверка от «отсутствует в registration block». В JSON записаны scope, число
engine файлов и manifest digest; ноль не исключает raw DAT labels, другие
регистраторы, изменённую таблицу, alias, indirect call или ещё не сохранённые
функции. Оригинальные handlers не объявлены отсутствующими.

## Формат и воспроизводимость

Генератор `build-usermessage-registry.py` создаёт schema2 с прежними server
references, source-file/unique-function/null-entry counters и ID globals.
Адрес ID-слота по-прежнему не является runtime numeric ID. Client references
теперь различают literal и `raw_PE_resolved_hook_call_DAT_101b2650_in_C`.
`client_literal_occurrences` не включает raw references; новый
`client_reference_occurrences` включает оба вида, а отдельный raw counter
показывает разрешённые вхождения. Это явное изменение схемы.

Notes сохраняют прежние детали server100e5fc0 и client1006cf00 из общего
каталога, дополняя только проверкой имён и границами индекса. Новые карточки
неизвестных wrappers не создаются. Сам общий каталог этим проходом не меняется.

Дальнейший конкретный вопрос для outside-имён: есть ли соответствующая
регистрация/доставка в оригинальном engine или другом server участке, и что
делает фактический wrapper. Ответ требует native доказательств, а не переноса
SDK поведения только по названию.
