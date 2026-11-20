# Studio texture replacements: writers и lifecycle

Статический аудит 2026-11-20. Только сохранённые локальные captures,
FUNCTION_CATALOG и существующее bounded assembly evidence. REA и игра этим
агентом не запускались, ресурсы и чужие документы не изменялись.
Во время аудита основной агент добавил graphics-studio-texture-replacements;
их общая cache-схема учтена ниже. Подробная таблица ресурсных путей ведётся
отдельным [texture-helper аудитом](studio-texture-replacements.md), здесь
рассматриваются состояния и сбросы. Дополнительно использованы точные direct
write-xrefs из graphics-studio-texture-lifecycle/012..022.

## Карта состояния

Handle и ready-byte — разные значения: ненулевой GL name не означает успешную
загрузку текстуры. Пространство104d26b8..104d26f0 также содержит сохранённую
привязку GL, поэтому не является одним массивом replacement textures.

| GL name / state | Ready | Writer / использование |
|---|---|---|
|104d26b8 hoodie|104d26c5|10064340; consumer10065ef0 hoodie_grey/hoodie_blood|
|104d26bc SP sleeve|104d26c6|10064d60; sleeve branch|
|104d26c0 locked page|104d26c4|10064870; page/lock state branch|
|104d26c8 fingers|104d26c7|100648d0; eligible local/viewmodel/camera fingers branch|
|104d26cc glove|104d26d0|100642b0; viewmodel glove override|
|104d26d4 jeans|104d26d1|10064ec0; jeans with model exclusions|
|104d26d8 face|104d26d2|100641d0; head_face override|
|104d26dc MP sleeve|104d26d3|10064a40; alternate sleeve branch|
|104d26e8 live framebuffer capture|104d26e5|10064c10; camera viewfinder и screen blur|
|104d26ec saved GL_TEXTURE_BINDING_2D|не ready|Оба capture helpers пишут сюда предыдущее GL binding; это не отдельный capture texture|
|104d26f0 retained photograph|104d26e6|10064ac0; diffusegay camera-screen branch|
|104ce4a1 pending photograph|не ready|100719f0 пишет1;10065ef0 после capture очищает0|

Указанные ready flags подтверждены точечными чтениями/записями. Промежутки
104d26e0..e4 не следует объявлять ready flags по соседству: в прочитанном
коде нет достаточного назначения для этих байтов.

## Ленивое выделение и повторная загрузка

Helpers10064340/10064ec0/100641d0/10064870/10064d60/10064a40/100648d0/100642b0
при нулевом собственном handle забирают **DAT1018fe8c**, затем увеличивают
общий счётчик. Это ручное назначение GL name; вызова glGenTextures в этих
телах нет. При ready!=0 повторная загрузка пропускается. При ready==0
выбирается путь, вызывается10069630(path,0,handle), после успеха ready=1.

Смена selector/path сама по себе не входит в cache key: helpers не хранят
сравнение предыдущего имени, costume ID или player model. Поэтому внешние
сбросы ready являются частью рабочего контракта. Неуспешная загрузка обычно
оставляет ready0, но уже выделенный handle сохраняется; следующая подходящая
отрисовка может повторить попытку. Исключение glove100642b0 теперь подтверждено
assembly: при коротком custom path используется сохранённый входной ECX,
который у mesh caller ненулевой. Поэтому ready может стать1 без загрузки.
Переданный caller stack argument0 helper не читает. Для fingers неудачный
custom override оставляет ready0 даже после успешной базовой загрузки.
Подробности и assembly evidence — в texture-helper аудите.

## Подтверждённые внешние invalidation writers

### Смена выбранного костюма:1001f9d0

Источник: vgui-menu-actions/005-pseudocode.c. Для разрешённых unlockmask
actions1..11 функция задаёт costume selector1018ca20, очищает четыре ready:
**104d26c5,104d26c6,104d26d1,104d26d2**, затем отправляет `setclothes N`.
Action66 выбирает default0 и очищает тот же набор. Action50 только закрывает
меню; action12 вызывает10020230 и debounce. Новое тело callee раскрывает
выбор custom costume, описанный ниже.

В этом writer не обнуляются GL names b8/bc/d4/d8 и не вызывается GL delete.
Следовательно подтверждён именно reload в существующие texture IDs, а не
освобождение/пересоздание всего набора. Page/fingers/glove/MP sleeve flags
этим действием не сбрасываются.

### Custom costume:10020230

Новое graphics-studio-texture-final/001 подтверждает содержащий entry для
writes10020274/7b/82/89. Вызывается engine COM_LoadFile через101b2744 с
`models/costumes/custom_hoodie.tga`, usehunk5 и null length output. При
ненулевом результате selector1018ca20=12, ready c5/d1/c6/d2 очищаются,
формируется и отправляется `setclothes 12 custom_hoodie.tga`.

При неудаче selector и ready не меняются. В UI объект101b2600→+142c
копируются90байт из10140a78 в+0xd4; задаются+f18=255.0,+f1c/1d=0,+f20=0,
+bc=5. Текст и полная семантика этого UI состояния здесь не восстановлены.
Это проверка наличия custom hoodie до изменения выбора, а не вызов TGA
upload helper10069630 и не немедленное создание replacement GL texture.

### Предпросмотр разблокированной одежды:100294c0

Источник: vgui-menu-actions/006-pseudocode.c. При первом показе соответствующей
ветки (101b27b8==0) выбирается `models/costumes/unfolded_clothes.mdl`, preview
selector101b27bc=1..11, затем общий label10029a23 очищает только
**104d26c5,104d26d1,104d26d2** и ставит101b27b8=1. SP sleeve c6 здесь
не сбрасывается. При закрытии видна запись preview selector101b27bc=0,
но симметричный сброс этих ready в той же close-ветке не виден.
Это наблюдение, а не утверждение об отсутствии сброса через другие callbacks.

## Два framebuffer capture lifecycle

### Live capture10064c10

При handle104d26e8==0 создаётся black RGB texture256x256 с linear min/mag:
выделение CPU0x30000, zero-fill, сохранение текущего binding, bind счётчика
1018fe8c, glTexImage2D, восстановление прежнего binding, освобождение CPU,
присвоение handle и increment. Это allocation guard по handle, не ready.

Каждый вызов, включая последующие, записывает текущий binding в104d26ec,
bind live handle и делает glCopyTexImage2D RGB с centered crop:
`x=screenW/2-width/2`, `y=screenH/2-height/2` (при нулевом width/height
соответствующее вычитание пропускается). Затем104d26e5=1. После capture
helper **не восстанавливает binding сам**.

В mesh10065ef0 ветка cam_vfind требует cl_cameraeffect!=0, вызывает helper,
проверяет e5, bind e8, очищает e5=0 и отмечает local restore flag.
После отрисовки mesh возвращает binding104d26ec. Следовательно e5 здесь
является флагом доступного результата вызова, а не долговременным cache-valid.

Другой consumer **10071df0** (screen blur) вызывает тот же helper с размерами
экрана и использует **e8!=0**, а не e5. Он повторно bind e8 в цикле blurred
quads; e5 этим телом не очищается. Одной формулой «e5 всегда очищается после
использования» описать оба consumer нельзя.

### Retained photograph10064ac0 / TakePhoto

Регистрация TakePhoto в1006cf00 ведёт в wrapper1006eb10. Существующее
assembly100719f0 и новое тело graphics-studio-texture-loader/003 подтверждают
единственное действие reader: **104ce4a1=1**,
return1. Это pending capture, а не немедленный screenshot или fullscreen flash.

При очередной отрисовке texture-name branch `diffusegay` в10065ef0 pending
запускает10064ac0(textureWidth,textureHeight), после чего pending=0.
10064ac0 аналогично live helper выделяет RGB texture при f0==0, сохраняет
binding вec, выполняет centered glCopyTexImage2D и ставит **e6=1**.
Затем branch приe6!=0 привязывает f0. В отличие от cam_vfind, он не ставит
local restore flag и не очищает e6: прошлый снимок остаётся доступен на
последующих draw без повторного TakePhoto.

Наличие pending1 без draw соответствующего mesh не запускает capture.
Общая ячейка saved binding104d26ec используется обоими helpers; это stateful
GL contract, не два независимых GPU-capture объекта. GL error check после
copy и readiness только при успешном copy в сохранённых телах не видны.

## Точные write-xrefs и границы их покрытия

В graphics-studio-texture-lifecycle/012..022-inspect_native_instruction.json
получены incoming WRITE references к каждому указанному байту. Сопоставление
ниже использует тела функций, а не ближайшее имя по адресу.

| Flag / capture | Подтверждённые содержащие функции | Пока не разрешённые write sites |
|---|---|---|
|c4 /012|10064870:1006489e,100648be|Нет других прямых writers в выдаче|
|c5 /013|1001f9d0,100294c0,10064340,10020230:10020274|Нет|
|c6 /014|1001f9d0,10064d60,1006fc20:1006fc61,10020230:10020282|Нет|
|c7 /015|100648d0:1006490d,10064a24;1006fb40:1006fb9b;1003a170 leaf|MPModel invalidation, registration10038900|
|d0 /016|100642b0:100642e3,10064329;1006fbb0:1006fc0b|Нет|
|d1 /017|1001f9d0,100294c0,10064ec0,10020230:1002027b|Нет|
|d2 /018|1001f9d0,100294c0,100641d0,10020230:10020289|Нет|
|d3 /019|10064a40:10064a6b,10064aaf;1006fc20:1006fc6d|Нет|
|e5 /020|10064c10:10064d4d;10065ef0:10066ba1|Нет других прямых writers в выдаче|
|e6 /021|10064ac0:10064bfd|Нет других прямых writers в выдаче|
|104ce4a1 /022|10065ef0:10066bda;100719f0|Нет других прямых writers в выдаче|

Для c5/c6/d1/d2 серия1001fa31..1001fd7c принадлежит1001f9d0; записи
10029a23/2a/31 принадлежат100294c0. Точный полный набор instruction addresses
сохранён в перечисленных JSON, включая READ references и metadata бинарника.
У page c4 и retained photo e6 эта выдача не показывает внешнего direct reset.
Это не доказательство отсутствия bulk/индексированных/косвенных записей.

10020230 подтверждён полным телом. Первоначальный interior query1003a170
не дал Ghidra procedure (ошибка сохранена в graphics-studio-texture-final/
capture.json), но новый bounded assembly1003a140.asm доказывает отдельный
leaf entry1003a170..17c: byte[104d26c7]=0;return1. Предыдущий RET и4INT3,
следующий RET и3INT3 задают явные границы. Новый exact xref указывает на
DATA reference10038993; новое тело10038900 и raw string10146288 закрывают
имя callback **MPModel**. Payload он не читает, ready fingers обнуляет.
Полный обновлённый protocol — [studio-custom-protocol.md](studio-custom-protocol.md).

### Custom texture path messages

Новые graphics-studio-texture-loader/004..006 разрешили interior selectors:

| Entry | Destination | Дополнительное состояние | Invalidated ready |
|---|---|---|---|
|1006fb40|object+0x11c|10542bb0=1, при короткой строке0|104d26c7 fingers|
|1006fbb0|object+0x21c|10542bb1=1, при короткой строке0|104d26d0 glove|
|1006fc20|object+0x1c|Отдельного active flag в теле нет|104d26c6 и104d26d3, SP+MP sleeve|

Все три вызывают InitReader10080850 и ReadString10080a60, strncpy256 и
последующий NUL scan. Если длина меньше3, первый байт destination становится0.
Ready сбрасывается безусловно, включая пустую строку; немедленного TGA load
или GL deletion нет. Явной гарантии NUL в последнем байте после strncpy нет.

Registration1006cf00 содержит CustomFng→1006e5c0, CustomGlv→1006e5e0 и
CustomSlv→1006e600. Новые wrappers graphics-studio-flow-entry/000..002 и
bounded assembly1006e5c0.asm замыкают mapping: на стеке передаются
(object1018a0c0,name,size,buffer) в соответствующие readers1006fb40/1006fbb0/
1006fc20. Следовательно globals —1018a1dc fingers,1018a2dc glove,
1018a0dc sleeve. Это explicit object argument, не скрытый reader ECX.

Короткий CustomGlv также очищает active10542bb1; mesh требует active!=0.
Поэтому short-path ECX поведение glove helper не следует описывать как
обычный результат пустого packet. Подробные outer gates и соседство sleeve
buffer с source1018a1d8 разобраны в новом protocol документе.

## Общий renderer reset и пока не закрытые границы

Сохранённый **10060b10** вызывает100586a0,10059110,1005c3d0 и
**100640a0**, затем ставит renderer rebuild flag1018f848=1. Новое тело100640a0
(graphics-studio-texture-lifecycle/004) очищает104ce480/484/488/48c/490/494,
ставит104ce06c=0 и104ce070/074=-1. Это сброс sky marker/lighting override
state, а не studio replacement textures. В нём нет записи ready/handles
104d26b8..f0, pending104ce4a1 либо GL delete. Переносить этот reset на
texture cache нельзя. Назначение состояния подтверждают SkyMarker10063fb0
(menu-sky-functions/000: координаты и optional ambient/direct bytes) и
WorldMarker10064040 (menu-sky-transform-discovery/003: координаты и scale).
События вызова верхнего10060b10 ещё требуют callers.

Пока не доказаны: все initial/load/save/vid-reset writers ready flags,
срок жизни GL IDs при смене карты/контекста, полный список writers custom
paths1018a0dc/1018a1dc/1018a2dc и соответствующая invalidation. Простое
отсутствие текстового DAT-имени в captures не исключает bulk memset,
индексированную запись или ещё неснятую функцию.

## Связь с gamma: разные состояния

1005a110 (graphics-lighting-entry/006) обновляет cached gamma101cc084,
brightness101cc088,contrast101cc08c и world lightmap buffers при условии
1005a000. В его теле нет прямого сброса рассмотренных studio replacement
ready/handles. Gamma formula100595f0 используется light sampling/shading;
не следует утверждать, что изменение gamma автоматически перезагружает TGA
replacement textures. Для этого потребовались бы writers/callees именно
loader10069630;100640a0 уже исключён как прямой writer этого cache.
Gamma math и decoder/upload10069630 подробно ведутся отдельными аудитами.

## Конкретные xrefs / минимальное продолжение

| Приоритет | Адрес / запрос | Что закрывает |
|---|---|---|
|2|WRITE xrefs **104d26b8/bc/c0/c8/cc/d4/d8/dc/e8/f0**, **1018fe8c**|Срок жизни GL IDs и reset общего allocator counter; ec искать отдельно как binding state|
|2|WRITE xrefs **1018a0dc/1018a1dc/1018a2dc**, selector **1018ca20/101b27bc**|Custom sleeve/hands/glove paths и их invalidation|
|3|Callers **10060b10**|Доказать конкретные события запуска общего renderer reset|

TakePhoto100719f0 закрыт и полным C телом, и bounded assembly с хешем DLL.
Entry1003a170 закрыт bounded assembly; registration10038900 подтверждает MPModel.
Video-init1006d9e0 дополнительно подтверждает очистку трёх path strings/active
flags и вызов10060b10; это не автоматическое доказательство GL cache deletion.

## Прямые источники

Пути относительно репозитория:

* `decompiled/client/captures/graphics-studio-mesh-materials/000-pseudocode.c` —10065ef0, consumers и сбросы capture flags.
* `decompiled/client/captures/vgui-menu-actions/005-pseudocode.c` —1001f9d0.
* `decompiled/client/captures/vgui-menu-actions/006-pseudocode.c` —100294c0.
* `decompiled/client/captures/shader-pass-inputs/007-pseudocode.c` —10064c10.
* `decompiled/client/captures/shader-pass-bindings/005-pseudocode.c` —10071df0.
* `decompiled/client/captures/graphics-material-reset/000-pseudocode.c` —10060b10.
* `decompiled/client/captures/graphics-lighting-entry/006-pseudocode.c` —1005a110.
* `decompiled/client/captures/graphics-studio-texture-replacements` —новые lazy loader bodies.
* `decompiled/client/captures/graphics-studio-texture-lifecycle/004-pseudocode.c` —100640a0 sky state reset.
* `decompiled/client/captures/graphics-studio-texture-lifecycle/012-inspect_native_instruction.json` .. `022-inspect_native_instruction.json` —exact-address incoming references ready/pending bytes.
* `decompiled/client/captures/graphics-studio-texture-loader/003-pseudocode.c` .. `006-pseudocode.c` —TakePhoto и custom texture path readers.
* `decompiled/client/captures/graphics-studio-texture-final/001-pseudocode.c` —custom costume10020230.
* `decompiled/client/captures/graphics-studio-texture-final/capture.json` —неудачный interior query1003a170 без принятого function evidence.
* `analysis/graphics/studio-texture-loader-contract.md` —COM_LoadFile ABI и TGA upload, отдельно от выбора костюма.
* `analysis/graphics/studio-texture-replacements.md` —детальный resource/helper контракт и glove ABI exception.
* `analysis/weapons/photo-body-evidence/100719f0.asm` —pending writer.
* `analysis/weapons/photo-body-evidence/1006eb10.asm` —message wrapper.
* `analysis/weapons/photo-body-evidence/10064ac0.asm` —полный retained capture writer.
* `analysis/weapons/photo-body-evidence/capture.json` —binary hash и границы assembly.

Это карта статического lifecycle, не проверка утечки памяти, корректности GL
при смене контекста или визуального совпадения normal/RTX.

Новые источники closure: `graphics-studio-flow-entry/000..003` в client captures;
`analysis/graphics/studio-flow-assembly/1006e5c0.asm`, `1003a140.asm` и `capture.json`.
