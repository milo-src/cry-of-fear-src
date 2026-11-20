# Studio texture replacements: одежда, руки и страницы

Статический разбор сохранённого client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Источник `decompiled/client/captures/graphics-studio-texture-replacements/`,
файлы000..007. REA и игра в этом подзадании не запускались. Это контракт
выбора/кеширования входных путей; декодирование TGA, screen copy и lifecycle
инвалидации изучаются отдельно. Связь с mesh consumer —
`analysis/graphics/studio-material-contract.md`.

## Общий механизм и реальный смысл аргументов

Каждый helper резервирует id, если его global texture id==0:
`id=DAT1018fe8c; ++DAT1018fe8c`. Это общий счётчик, не вызов glGenTextures.
Если ready byte ненулевой, загрузка пропускается. Иначе он остаётся0 до
успешного `10069630(path,0,id)`; ненулевой результат устанавливает ready=1.
Сам helper не сравнивает текущий путь/костюм с прежним и не делает
glDeleteTextures. После неудачи id сохраняется; следующий вызов может
повторить загрузку. Инвалидация при смене выбора обязана происходить снаружи.

Ноль в `10069630(path,0,id)` нельзя называть force: его смысл определяется
отдельным loader contract. В calls `10064a40(0)` и `100642b0(0)` из mesh
псевдокода тоже не доказан force-параметр: тела helpers не проверяют такой
аргумент, и оба gated готовностью. Assembly `graphics-studio-texture-lifecycle/008-procedure_assembly.json`
подтверждает PUSH0 и caller stack cleanup после обеих функций. Glove
не читает stack argument: он отдельно использует сохранённый входной ECX
на ветке короткой строки (подробно ниже).

У **hoodie10064340(char)** параметр действительно читается, но **выбирает
источник selector**: если param==0 либо101b27bc==0, берётся1018ca20;
иначе101b27bc. Ready early-out расположен раньше этой проверки. Ни param0,
ни param1 не принуждает повторную загрузку готового кеша.

| Helper / capture | Texture id | Ready | Дополнительный gate до allocation |
|---|---|---|---|
|10064340 /000 hoodie|104d26b8|104d26c5|Нет|
|10064ec0 /001 jeans|104d26d4|104d26d1|1018ca1c!=0 либо101b27bc!=0|
|100641d0 /002 face|104d26d8|104d26d2|1018ca1c!=0|
|10064870 /003 page|104d26c0|104d26c4|Нет|
|10064d60 /004 sleeve SP|104d26bc|104d26c6|1018ca1c!=0 либо strlen(1018a1dc)>=3|
|10064a40 /005 sleeve MP|104d26dc|104d26d3|Нет|
|100648d0 /006 fingers|104d26c8|104d26c7|Нет; null param блокирует loader после allocation|
|100642b0 /007 glove|104d26cc|104d26d0|Нет|

Названия SP/MP отражают routing mesh consumer, не самостоятельную проверку
числа игроков в каждом helper. Результат gate до allocation не очищает
уже готовый флаг. Поэтому внешний consumer и lifecycle тоже существенны.

## Hoodie10064340

Ниже полные пути для основного selector1018ca20. Буфер пути — локальные256байт.

| Selector | Путь |
|---|---|
|1|`models/costumes/Leatherhoff/Leatherhoff_Hoodie.tga`|
|2|`models/costumes/ModDB/ModDB_Hoodie.tga`|
|3|`models/costumes/Hello_Kitty/Hello_Kitty_Hoodie.tga`|
|4|`models/costumes/AoM/AoM_Hoodie.tga`|
|5|`models/costumes/Camo/Camo_Hoodie.tga`|
|6|`models/costumes/HLC/HLC_Hoodie.tga`|
|7|`models/costumes/Black_Metal/Black_Metal_Hoodie.tga`|
|8|`models/costumes/Team_Psykskallar/Team_Psykskallar_Hoodie.tga`|
|9|`models/costumes/Awesome/Awesome_Hoodie.tga`|
|10|`models/costumes/Sick_Simon/Sick_Simon_Hoodie.tga`|
|11|`models/costumes/Twitcher/Twitcher_Hoodie.tga`|
|12|`models/costumes/%s`, строка cvar `sv_custom_hoodie`|

101b2648 соответствует GetCvarString по подтверждённой engine API base
101b2608 и `external/hlsdk-portable/engine/cdll_int.h`. При12 проверяется
только ненулевой указатель cvar; длина и расширение здесь не проверяются.

Альтернативный selector101b27bc поддерживает1..11. Отличия регистра:
7→`models/costumes/black_metal/Black_Metal_Hoodie.tga`;
11→`models/costumes/Twitcher/Twitcher_hoodie.tga`. Остальные пути совпадают.
Case12 для этой ветки отсутствует.

При неизвестном selector, либо основном12 с null cvar, псевдокод доходит
до loader с **не назначенным в данном пути local_108**. Не придумываем
default hoodie, пустую строку или безопасный отказ: ни один из них здесь
не доказан. Дополнительная assembly может уточнить артефакты восстановления.

## Jeans10064ec0 и face100641d0

Jeans selector —101b27bc, если он!=0, иначе1018ca20. После allocation и
ready gate значения2,5,6,8 выходят без загрузки и с ready0.

| Selector | Jeans путь |
|---|---|
|1|`models/costumes/leatherhoff/Leatherhoff_Jeans.tga`|
|3|`models/costumes/hello_kitty/Hello_Kitty_Jeans.tga`|
|4|`models/costumes/AoM/AoM_Jeans.tga`|
|7|`models/costumes/black_metal/Black_Metal_Jeans.tga`|
|9|`models/costumes/awesome/Awesome_Jeans.tga`|
|10|`models/costumes/sick_simon/Sick_Simon_Jeans.tga`|
|11|`models/costumes/twitcher/Twitcher_Jeans.tga`|

Face использует только1018ca20 и не учитывает alternate selector101b27bc.
Cases1,2,3,4,5,6,8,9 выходят без loader. Только7,10,11 задают путь:
`models/costumes/black_metal/Black_Metal_Face.tga`,
`models/costumes/sick_simon/Sick_Simon_Face.tga`,
`models/costumes/twitcher/Twitcher_Face.tga` соответственно.

У обеих функций неизвестные cases (включая0/12) попадают в default,
который вызывает loader с local_108 без видимого назначения в этом пути.
Отсутствие отдельного jeans/face для некоторых костюмов доказано явными
return cases, но не следует распространять безопасное поведение на default.

## Page10064870

Единственный путь `models/page_locked.tga`, одна texture id и ready byte.
Сам helper не знает page index и не проверяет bits разблокировки. Это делает
mesh consumer10065ef0: match page1..5 и отсутствующий бит25..29 соответственно
при дополнительном render gate. Поэтому это общий образ закрытой страницы,
а не пять независимо загружаемых изображений.

## Sleeve SP10064d60

Важное различие: entry gate проверяет длину строки **1018a1dc**, тогда как
override ниже читает **1018a0dc**. Это разные globals, разнесённые на256байт.
Не исправлять адреса по предположению, что они должны совпадать.

| Selector1018ca20 | Путь |
|---|---|
|1|`models/costumes/leatherhoff/Leatherhoff_Sleeve.tga`|
|2|`models/costumes/moddb/ModDB_Sleeve.tga`|
|3|`models/costumes/hello_kitty/Hello_Kitty_Sleeve.tga`|
|4,7,8,9|`models/costumes/awesome/Awesome_Sleeve.tga`|
|5|`models/costumes/camo/Camo_Sleeve.tga`|
|6|`models/costumes/hlc/HLC_Sleeve.tga`|
|10|`models/costumes/sick_simon/Sick_Simon_Sleeve.tga`|
|11|`models/costumes/twitcher/twitcher_sleeve.tga`|
|12|Немедленный выход без loader и **до проверки custom override**|

После известных cases, а также default, strlen(1018a0dc)>2 заменяет локальный
путь прямой копией этой строки (до NUL). Никакого префикса helper не добавляет.
В default при коротком override local_108 остаётся без назначения. Нельзя
считать неизвестный costume безопасно выбирающим стандартный рукав.
В явном цикле копирования не показан предел256байт; происхождение и
ограничения длины глобальной строки требуют lifecycle producer evidence.

## Sleeve MP10064a40

При ready0 использует1018a0dc, если длина>=3; иначе
`police/police_sleeve.tga`. Эти пути передаются loader напрямую — helper
не дописывает `models/`. Если ready1, новая строка игнорируется до внешней
инвалидации. В теле нет проверки force аргумента либо числа игроков.

## Fingers100648d0

Выделяет id до проверки null param. При param==0 и ready0 не загружает и
оставляет ready0. Param используется как строка для100d3cf0(param,"police3"):
это selector по тексту, не boolean force.

Сначала всегда загружается базовая текстура: при match police3
`police/police3_hands.tga`, иначе `police/police_hands.tga`, в тот же id.
Если strlen(1018a1dc)>=3, выполняется **вторая** загрузка:

- Для обычного param — непосредственно строка1018a1dc.
- Для police3 псевдокод копирует строку с адреса1018a1d8 (на4байта раньше)
  в локальный буфер и дописывает `_black.tga`. Assembly
  `graphics-studio-texture-lifecycle/007-procedure_assembly.json` подтверждает
  буквальное чтение1018a1d8 в100649a0, затем поиск NUL локального буфера
  и копирование11байт suffix из1014d894 в100649ca..100649ee.
  Это не восстановленное удаление `.tga` у строки1018a1dc: чтение начинается
  на4байта раньше, значение этих байтов зависит от runtime producer.
  Подставлять стандартное replace-extension вместо этого алгоритма нельзя.

Результат второго loader **заменяет** результат первого. Если базовый TGA
загрузился, но override не загрузился, ready остаётся0. Нельзя объявлять
успешный base гарантированным fallback на уровне ready: consumer связывает
эту texture только при ready1. Содержимое GL id при отказе второго loader
зависит от его собственной реализации.
Первое копирование1018a1dc в local_108 происходит и на обычной ветке, но
туда затем передаётся исходный global; не выдумывать преобразование расширения.

## Glove100642b0: подтверждённое ready без загрузки

Один custom путь по1018a2dc, loader вызывается лишь при strlen>=3.
Запасного police-glove filename нет. При вызове loader его ненулевой
результат ставит ready1, ноль оставляет0.

Assembly `graphics-studio-texture-lifecycle/006-procedure_assembly.json`
разрешает странный `in_ECX` из псевдокода: на входе PUSH ECX сохраняет
входной регистр в[EBP-4]. Если длина строки<=2,10064318 восстанавливает
этот регистр и затем TEST/CMOVNZ ставит ready1 при ненулевом ECX, хотя
loader не вызывался. Это не неинициализированная локальная переменная:
она содержит фактический входной регистр.

Caller assembly008 подтверждает:10065f02 сохраняет renderer this в[EBP-8];
10066afb загружает его вECX;10066b14 делает PUSH0;10066b16 вызывает helper.
Между загрузкой ECX и вызовом нет его обнуления. Стековый ноль helper не
читает. Поэтому на этом подтверждённом пути с валидным renderer и короткой
custom строкой **ready становится1 без загрузки TGA**, после чего mesh
bind-ит104d26cc. Если id только выделен, пиксели им ещё не заданы этим
helper; если он использовался раньше, может остаться старое содержимое.
Сам GL результат зависит от внешнего контекста и не проверялся запуском.

Это конкретная нативная особенность, не force reload и не гарантированный
fallback на обычную glove texture. После ready1 последующие вызовы ничего
не загружают до внешнего сброса ready.

## Нераскрытые части

Loader10069630, path-normalization и ошибки TGA описываются основным
исследованием; screen copies10064c10/10064ac0 не входят в этот документ.
Сброс ready/id и producers strings/selectors: `studio-texture-lifecycle-audit.md`.
Ни происхождение custom строк, ни bounds их записи здесь не предполагаются.
Новые notes содержат8 функций; fingers byte algorithm и glove register
branch дополнительно проверены assembly. Runtime producers/prefix contents
не предполагаются. Общий каталог не изменён.

Read-only инвентаризация ресурсов основного исследования:
`studio-replacement-resource-inventory.json` содержит35 литеральных TGA paths
с существующими loose files, заголовками и хэшами. `_black.tga` — suffix,
не самостоятельный отсутствующий файл. Этот список не гарантирует
существование всех динамических custom путей или успех runtime загрузки.
