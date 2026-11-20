# Серверная цепочка CustomSlv / CustomFng / CustomGlv

Статический разбор сохранённого server `hl.dll`, SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Источники — `decompiled/server/partial-pass/functions/0x<address>.c`.
В этом подзадании не запускались REA, DLL или игра. Общий каталог не изменён.
Клиентская сторона: `studio-custom-protocol.md`; загрузка ресурсов:
`studio-texture-replacements.md`; сброс кешей: `studio-texture-lifecycle-audit.md`.

## Регистрация, payload и поля

Регистратор `100e5fc0` создаёт три сообщения размера -1 (переменный размер):

| Сообщение | Message global | World private field | Клиентский путь |
|---|---|---|---|
| CustomSlv |102266e8|+f0|1018a0dc|
| CustomFng |102266ec|+f4|1018a1dc|
| CustomGlv |102266f0|+f8|1018a2dc|

В исследованных отправителях каждый пакет состоит из **одного WRITE_STRING**,
без отдельного byte/short length, texture id, player index или ready flag.
MESSAGE_BEGIN получает dest=1 (MSG_ONE), origin=NULL и edict адресата;
пакет завершается MESSAGE_END. Client получает только собственную строку.
Ширину и ограничения внутреннего wire-string задаёт движок, не эти функции.

World pointer — DAT10223190; в `10120eb0` ему присваивается `this` world
initialization. Строковые поля содержат `string_t`, не char buffers:
при отправке прибавляется `gpGlobals->pStringBase`, DAT10223188+98
(тот же DWORD[26]). Поля клиента из таблицы подтверждены отдельным
client protocol capture, их серверные смещения не тождественны клиентским.

## Источник1: world KeyValue101208e0

Точные keys и назначения:

| Key | World private |
|---|---|
|`customsleeve`|+f0|
|`customfingers`|+f4|
|`customgloves`|+f8|

Для каждого совпадения вызывается engine AllocString(value), результат
сохраняется в поле, handled=1, затем return. Ни префикса `models/`, ни
suffix `.tga`, ни изменения слешей/регистра функция не добавляет. Нет
strlen, clipping до255/256, проверки существования файла или расширения.
Это описание именно веток custom textures, а не всего большого world KV.

Сравнение1000aba0 — проверенный побайтовый equality доNUL: true только при
полном совпадении; keys чувствительны к регистру. Это не substring search.
Пустое значение тоже передаётся AllocString. Возвращает ли оригинальный
engine для пустой строки string_t0, этими телами не установлено.

## Источник2: runtime settings KV10095490 и применение100a38e0

| Runtime key10095490 | Source private | Куда копирует100a38e0 |
|---|---|---|
|`sleeve`|+ec|world+f0|
|`fingers`|+f0|world+f4|
|`gloves`|+f4|world+f8|

KV снова AllocString(value), handled1, return; ограничений и преобразования
пути нет. Общие неизвестные ключи уходят в1000dba0. Первые четыре строковых
поля source+dc/e0/e4/e8 также копируются в world+e0/e4/e8/ec и используются
как настройки player models; это соседняя функциональность.

`100a38e0` ничего не делает при world==NULL. Иначе копирует **только
ненулевые string_t** из всех семи source fields в world. Ноль означает
«не менять»; этот путь не обнуляет уже установленный world path.
После копирования цикл от1 до gpGlobals.maxClients(+90) получает игрока
через10119680(index); NULL пропускается. Для каждого ненулевого source
texture field отправляется соответствующий MSG_ONE с текущей world строкой.
Адресат — все найденные игроки, не только activator. Сравнения нового пути
со старым нет: повторное применение тех же данных повторяет сообщения.

Дополнительный хвост для каждого игрока: если game-rules pointer10222ee4
ненулевой и его vcall+20 возвращает ненуль, вызывается vcall+6c(player,
engine info-key buffer). Это согласуется с обновлением player models по
userinfo, но сам договор этого callback здесь не реконструирован.
Тело100a38e0 не читает activator, UseType или value; не приписываем ему
переключение/ON/OFF по стандартному SDK.

Export `cof_customiseplayer`100aa250 выделяет private size0xf8 и устанавливает
символическую `CCoFCustomisePlayerModels::vftable`. Размер и набор полей
согласуются с двумя функциями выше, но **числовая vtable связь с10095490 и
100a38e0 не доказана этим сохранённым корпусом**. Поэтому имя класса и
отнесение100a38e0 именно к Use остаются обозначенным пробелом; смысл
записей/отправок не зависит от этой будущей привязки.

## Первый deploy:1011c1a0

Это большой helper развёртывания оружия: выставляет view/weapon model,
animation extension, вызывает animation helpers, содержит звуки
`weapons/sleeve_generic1.wav`..`3.wav`. Здесь разобран только texture-send
блок; полный контракт deploy по этим notes не заявляется.

1. Начальная виртуальная проверка weapon+140 должна вернуть ненуль.
2. Weapon+160 (DWORD[58], player pointer) должен быть ненулевым.
3. Если BYTE player+3a9==0, он **немедленно ставится1**, затем проверяется
   world pointer. Даже world==NULL уже расходует этот флаг.
4. При world!=NULL каждый ненулевой world+f0/f4/f8 отдельно отправляется
   владельцу оружия как CustomSlv/Fng/Glv STRING(pool+string_t).

Пустой/нулевой world field не порождает reset packet. Последующие deploy
этого же игрока пропускают весь блок, пока кто-то не очистит player+3a9.
Это per-player latch, не per-weapon и не per-resource cache. Внутри блока
нет длины строки, path prefix, clamping либо file validation. Возврат helper
0 на начальной проверке/отсутствии player не отправляет пути и не ставит latch.

## Join/init clear:100c8b70

В начале100c8b70 очищаются player entvars+264 и BYTE player+3a9. Затем
адресату отправляются все три MSG_ONE по порядку Slv,Fng,Glv, у каждого
WRITE_STRING получает **NULL (literal0)**. Далее следуют сообщения/логи
`has joined the game`, `entered the game`, score/health/userinfo setup.
Это подтверждает роль join/init, но точный исходный класс game-rules и имя
виртуального метода здесь не назначаются по одному сходству со стандартным SDK.
Сохранённый10106de0 напрямую вызывает100c8b70 перед дальнейшим team setup.

NULL argument — установленный факт C, не самостоятельно доказанный wire
нулевой байт. У оригинального engine WRITE_STRING null-handling в этом
подзадании не исследован. Намерение сброса согласуется с клиентским empty
string handler; подменять engine implementation современным Xash нельзя.
Именно здесь найден явный сброс latch+3a9. Поиск сохранённых C не показал
других прямых ссылок+3a9, но partial-pass не исчерпывает все машинные записи.

## Длина, пустые строки и ресурсы

На обоих KV producer путях и всех трёх sender путях отсутствует видимый
предел длины. Сохранённые строки передаются движку целиком по указателю.
Следовательно, серверный слой **не доказывает** требование client
strncpy256 о наличииNUL в целевом буфере. Для полной границы нужны отдельно:
original engine AllocString/map parser limits, user-message size limit,
WRITE_STRING null/overflow behavior и client READ_STRING limit. Отсутствие
предела в этих функциях не означает, что сеть допускает любую длину.

Различать три случая:

- Source string_t0 в100a38e0: оставить прежнее значение и не отправлять.
- World string_t0 в1011c1a0: не отправлять, но latch уже установлен.
- WRITE_STRING(NULL) в100c8b70: явная отправка вызова reset для каждого сообщения.

Не установлено, как пустой map value преобразуется в string_t и сможет ли
он через runtime setter очистить custom texture. Непустые строки длиной1/2
сервер не фильтрует; client handler отдельно трактует их как отключение.
Никакого padding/suffix для руки police3 здесь нет: необычное клиентское
чтение с1018a1d8 не исправляется серверным форматированием.

Эти senders не прекешируют/не загружают TGA и не проверяют, есть ли файл
у клиента. Конкретные preset paths и inventory существующих ресурсов
описаны в studio-texture-replacements.md; данные произвольных map strings
из данного статического разбора не следуют.

## Каталог и evidence

Проверен snapshot prior reviews `analysis/local/studio-flow-prior-reviews.json`:
для10095490,100a38e0,100c8b70,1011c1a0,101208e0 предыдущих reviews нет.
Созданы5 отдельных scoped notes. Существующий большой review100e5fc0 не
перезаписывается: его C используется только как доказательство регистрации.
Неизвестные factory/vtable и engine string boundaries явно оставлены открытыми.

Прямые источники: server partial C1000aba0,10095490,100a38e0,100aa250,
100c8b70,100e5fc0,10106de0,1011c1a0,101208e0,10120eb0 и export CSV hl.csv.
