# Выбор Cg profile и маршрутизация воды

Статический аудит 2026-11-20. Использованы captures оригинального
`client.dll` и локальные исходники `cgshaders`; этот агент не запускал REA,
игру или сборку. Добавлены предоставленные основным агентом captures
`graphics-blur-material-state` и `graphics-surface-flags` для уточнения
трёх вспомогательных функций.
Адреса ниже относятся именно к **client**, а не к server с совпадающими VA.
Хеш исследованного клиента и полные тексты/хеши Cg сохранены в
`shader-coverage.json`; SHA-256 клиента:
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.

## Главный результат

Выбор `fp20_water_fp.cg`/`fp20_black_fp.cg` определяется единственным сравнением
**fragment profile == 0x1803** в `10086890`. Для любого другого значения выбираются
`water_fp.cg`/`black_fp.cg`. Это не ветка по наличию `GL_NV_texture_shader`:
проверка этого расширения в той же функции выбирает только формат Identity LUT.
В сохранённых телах нет попытки повторить неудачную modern-компиляцию через fp20.

Термин modern здесь означает имена без префикса `fp20_`, а не отдельный
аппаратный профиль, поколение GPU или наличие RTX. Алгоритм, по которому
библиотека Cg возвращает latest profile для конкретного драйвера, находится
за границей исследованного кода игры.

## Последовательность и отдельные объекты

1. `100863f0` пропускает загрузку, если `(*DAT_10545850)() != 1`. Проверка
   `10089830` — точно такое же сравнение режима render API с 1. Она **не проверяет**
   Cg context, готовность профиля или GL extension.
2. При нулевом context вызывается `10086670`: `cgCreateContext`, затем
   `cgGLGetLatestProfile(8)`, затем `(9)`. Для каждого результата отвергается
   `0x1801`, для принятых вызывается `cgGLSetOptimalOptions`.
3. Тип загрузки 2 использует первый профиль (vertex), тип 1 — второй (fragment).
   Это подтверждено и `10086580`, и `100863f0`; `10086560` возвращает второй.
4. Инициализация воды сначала загружает общий `water_vp.cg`, затем получает
   fragment profile и выбирает пару имён. Общий `black_vp.cg` также не меняется.
5. `10086d10` использует выбранные handles в одинаковой последовательности
   проходов. Повторного сравнения с `0x1803` в draw-функции нет.

| Cg manager, offset | Значение |
|---|---|
| +0x00 | Cg context |
| +0x04 | vertex profile из latest(8) |
| +0x08 | fragment profile из latest(9) |
| +0x0c | голова списка программ |
| +0x10, BYTE | результат инициализации: 1 только после обоих профилей |

| Water manager, offset | Значение |
|---|---|
| +0x00/+0x04 | glActiveTextureARB/glMultiTexCoord2fARB |
| +0x09, BYTE | разрешение custom water |
| +0x0c/+0x10, float | ближайшие покрывающие экран степени двойки |
| +0x14/+0x18/+0x1c | mask capture / noise-water capture / noise.tga |
| +0x20/+0x24 | исходная сцена / Identity LUT |
| +0x28/+0x2c | water fragment/vertex records |
| +0x30/+0x34 | black fragment/vertex records |
| +0x38/+0x3c | black/water ModelViewProj parameters |
| +0x40/+0x44 | water TexOffset/flScreen parameters |

Это разные `this`-объекты. Одинаковый `in_ECX` в декомпиляции не означает,
что Cg manager+8 и Water manager+8 обозначают одно поле.
Символьные имена числовых Cg enums здесь не восстановлены по стороннему SDK:
локальных Cg headers при этом проходе не найдено. Значение `0x1803` связано
с fp20 по реально выбранным именам файлов, `0x1801` — проверяемый sentinel.

## Загрузка, ошибки и пределы восстановленного контракта

`100863f0` проверяет существующую запись через `10086520(name)`, при необходимости
создаёт context, формирует `<game-dir>/cgshaders/<name>`, вызывает `10086580`,
создаёт запись 0x30 байт и загружает программу через `cgGLLoadProgram`.
В записи +0x20 хранит type, +0x24 Cg handle, +0x28/+0x2c ссылки списка.
Тело lookup `10086520` теперь подтверждено отдельным capture: начинает с
Cg manager+0x0c, сравнивает имя с началом записи через `__stricmp`, при
несовпадении переходит по record+0x28 и возвращает найденную запись либо null.
Ключ — имя без учёта регистра; type и profile в сравнении не участвуют.
Поэтому cache hit сам по себе не гарантирует соответствие запрошенному типу
или повторную компиляцию под изменённый профиль.

`10086580` действительно вызывает `cgCreateProgramFromFile`; это пробная
компиляция, а не простая проверка существования файла. При ошибке получает
текст через `cgGetError`/`cgGetErrorString`, печатает и возвращает 0. После
успеха loader компилирует файл ещё раз. В прочитанных телах нет уничтожения
пробного handle или проверки второго результата перед `cgGLLoadProgram`.
Это статическое наблюдение; утечка в конкретном запуске здесь не измерена.

Loader не читает ready-byte +0x10. Поэтому нулевой ready-byte нельзя
ретроспективно объявлять надёжным запретом всех дальнейших операций.
Инициализатор воды печатает ошибки загрузки программ, но не заменяет failed
modern program на fp20. У black vertex виден доступ к record+0x24 без
предшествующей проверки null. Надёжный порт может обрабатывать ошибки
безопаснее, но это адаптация, не дословно восстановленное поведение.

Ghidra объявила loader `void`, хотя его callers используют результат как record.
Это известное ограничение восстановленной сигнатуры, а не доказательство
отсутствия return value. Аналогично точные типы engine function pointers
нуждаются в ABI-контексте.

## Независимая ветка GL_NV_texture_shader

`10086890` передаёт результат `glGetString(0x1f03)` через `1010d34b`, затем
вызывает `1008a280("GL_NV_texture_shader", result)`. Последний helper теперь
прочитан: он сравнивает символы через `_tolower` и ищет подстроку, **не**
проверяя границы extension tokens. Совпадение внутри более длинного имени
может дать true. Проверок null у входных указателей нет.

Это также не точный эквивалент стандартного `strcasestr`: внешний индекс
ограничен `i < strlen(haystack)-1`, а частичное совпадение продвигает тот же
индекс без возврата к следующему возможному началу. Перекрывающиеся начала
после failed partial match могут пропускаться; строка длины 0/1 вообще не
попадает в основной цикл. Декомпилятор показывает возврат uint, но значим
младший байт 0/1; caller сохраняет результат в char. Верхние биты не нужно
объявлять нормализованным bool.

`1010d34b` теперь также подтверждён: null вход даёт null; иначе функция
измеряет длину строки, выделяет `len+1` байт через `100f7bff` и копирует
`_strcpy_s`. Null allocation даёт null, ошибка копирования вызывает
`__invoke_watson`, успех возвращает копию. Это дублирование строки, без
изменения регистра, удаления символов или разбиения на tokens. Water caller
не проверяет null перед передачей этой копии в `1008a280`, а освобождение
копии в сохранённом теле `10086890` не видно. Наблюдение не подменяет
измерение памяти в runtime. Внутренняя реализация allocator `100f7bff`
для ответа о выборе shader filenames не требуется и здесь не исследовалась.

LUT 256x256 заполняется парами байтов `[x,y]`. При истинном результате probe
используются internal format `0x8709` (GL_DSDT8_NV) и external format `0x86f5`
(GL_DSDT_NV). При ложном оба формата `0x1909` (GL_LUMINANCE). Type в обоих
случаях unsigned byte. Значения GL подтверждаются локальным
`deps/sdl2/SDL2-2.32.10/include/SDL_opengl_glext.h`.

Ветка LUMINANCE получает тот же interleaved массив; её нельзя автоматически
переименовать в эквивалентную современную RG-текстуру. Сравнения fp20 profile
с результатом extension probe нет: это две независимые ветки программы.

## Что реально рисуется

`HUD_DrawTransparentTriangles` (10093d10) при `DAT_10556b48 == 0` и ненулевом
float `cg_water` вызывает save bindings 10086cb0, draw 10086d10 и restore
10086c40. Смысл глобального guard в этом проходе не переименовывался.
Инициализатор и 10087860 проверяют **int(cg_water)**, поэтому значение 0.5
попадает во внешний callback, но отключает внутреннюю воду.

`HUD_DrawNormalTriangles` (10093cf0) при том же нулевом guard вызывает
10087860. При разрешённой воде тот обходит entity indices 0..1023, выбирает
skin/contents -3 и записывает три набора render fields (в т.ч. amount=0,
mode=5). Это подавляет исходное отображение water entities для замены
custom pass; точные поля структур следует брать из ABI, не числовых offsets
другой версии SDK.

Draw 10086d10 сохраняет сцену, создаёт depth-tested noise-water capture и
white-water mask по верхним плоскостям bounding boxes water entities,
возвращает сцену на экран и выполняет blend-проход выбранной Cg программы.
Привязки общие для обеих веток:

| TEXUNIT | Текстура |
|---|---|
| 0 | noise-water capture |
| 1 | Identity LUT |
| 2 | исходная scene capture |
| 3 | mask capture |

Устанавливаются `TexOffset=(0,0.05,0,0.05)`, `flScreen=0x3f770a3d` (~0.965),
ModelViewProj. UV покрывают экранную долю pow2 capture. Включено смешивание
SRC_ALPHA/ONE_MINUS_SRC_ALPHA. Формулы прочитанных оригинальных Cg:

* Modern: `noise=tex2D(unit0, uv0)`,
  `sceneUV=uv1 + TexOffset.xy*noise.r + TexOffset.zw*noise.g`,
  `output=vec4(tex2D(unit2,sceneUV).rgb,1)*tex2D(unit3,uv3).r`.
* Fp20: `noise=tex2D(unit0,uv0)`, `lookup=tex2D(unit1,noise.gb)`,
  `output=offsettex2D(unit2,uv2,lookup,TexOffset)`; затем alpha=1 и
  умножение всех каналов на mask.r. Vertex shader делает `uv2.y=uv0.y+flScreen`.
* Modern читает uv1, поэтому flScreen и Identity LUT не участвуют в его
  фрагментной формуле. Fp20 действительно использует оба. Это разные пути,
  а не доказанно тождественные реализации одного сэмплирования.

`100877d0` связывает выбранные black fragment/vertex handles и matrix, но сам
не рисует. Существующий аудит `shader-pass-contracts.md` не обнаружил прямых
callers этой функции; загрузка black program не доказывает видимый проход.
BlackWhite/desaturation — отдельный путь, его нельзя подменять этой программой.

## Остаточные вопросы и граница проверки

| Точный callee (client) | Чего не хватало в существующих captures |
|---|---|
| внешний cgGLGetLatestProfile | Решение Cg/драйвера о поддерживаемом profile; client caller этого не раскрывает. |

Сохранённые тела закрывают все три ранее отсутствовавших клиентских callee:
1008a280, 10086520 и 1010d34b. Дополнительных адресов client для объяснения
основной ветки modern/fp20 в этом проходе не требуется.

Доказаны статические выбор имён, места проверки режима, upload formats,
bindings и различие формул. Не выполнены: измерение возвращаемого профиля на
разных GPU, запуск старого Cg/fp20, сопоставление GPU readback/pixels, проверка
поведения драйвера при отсутствующем extension и parity ошибок компиляции.
Современная реализация воды в проекте не становится fp20-эквивалентной лишь
из-за общей последовательности capture passes. Эти выводы также не являются
визуальной проверкой RTX.

## Прямые источники

* `decompiled/client/captures/graphics-client-blackwhite/003-pseudocode.c` — context/profiles.
* `decompiled/client/captures/graphics-client-blackwhite/004-pseudocode.c` — trial compile.
* `decompiled/client/captures/graphics-client-second/000-pseudocode.c` — loader.
* `decompiled/client/captures/graphics-client-second/001-pseudocode.c` — fragment getter.
* `decompiled/client/captures/graphics-client-second/008-pseudocode.c` — API-mode guard.
* `decompiled/client/captures/graphics-client-first/000-pseudocode.c` — water init/profile filename branch; 001 содержит ту же функцию.
* `decompiled/client/captures/graphics-client-first/002-pseudocode.c` — draw passes/bindings.
* `decompiled/client/captures/graphics-client-first/003-pseudocode.c` — original water entity render fields.
* `decompiled/client/captures/graphics-client-first/004-pseudocode.c` — transparent callback.
* `decompiled/client/captures/graphics-client-second/009-pseudocode.c` — normal callback.
* `decompiled/client/captures/graphics-client-blackwhite/002-pseudocode.c` — black binder.
* `decompiled/client/captures/graphics-blur-material-state/006-pseudocode.c` — case-insensitive substring helper 1008a280.
* `decompiled/client/captures/graphics-blur-material-state/007-pseudocode.c` — case-insensitive name cache lookup 10086520.
* `decompiled/client/captures/graphics-surface-flags/002-pseudocode.c` — string duplicate 1010d34b.
* `analysis/graphics/shader-coverage.json` — сохранённые исходники Cg и хеши.
* `analysis/graphics/shader-pass-contracts.md` — black binder reachability и остальной shader pipeline.
