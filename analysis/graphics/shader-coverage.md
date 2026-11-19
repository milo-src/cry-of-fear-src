# Полнота восстановления графики CoF — аудит 2026-11-19

Графическая часть **не восстановлена полностью**. Наличие шести файлов Cg и
рабочей воды не означает восстановления света, материалов и всех экранных
эффектов. В оригинале значительная часть графики задаётся кодом клиента:
комбинированием текстур, register combiners, матрицами проекции и несколькими
проходами OpenGL. Поэтому поиск только файлов с названием `shader` неполон.

Этот документ фиксирует исходное состояние перед исправлением фонаря.
Новые изменения фонаря проверяются отдельно; приведённые ниже отсутствующие
проходы нельзя объявлять готовыми по одному успешному тесту фонаря.

## Воспроизводимые данные

`python tools/inspect_shader_coverage.py` читает оригинальные файлы без загрузки
DLL. Результат: `analysis/graphics/shader-coverage.json`. Он содержит полный
текст и SHA-256 шести исходников Cg и двух встроенных ARB-программ, размеры,
смещения в файле, виртуальные адреса и найденные в байтах кандидаты ссылок.

Граница поиска: все отдельные `.cg/.glsl/.vsh/.fsh/.vert/.frag/.vp/.fp` под
каталогом установленной игры; ASCII-маркеры программ `!!ARB/FP/VP/RC/TS` в
оригинальных `client.dll`, `hw.dll`, `opengl32.dll`. В `hw.dll` и
`opengl32.dll` таких программ не найдено. Это **не доказательство** отсутствия
динамически собираемых программ или fixed-function эффектов. Полный обход
каталога установки обнаружил **0 контейнеров .pak/.pk3/.zip/.vpk**; скрытых в
таких контейнерах shader entries в этой установке нет. Код стороннего
компилятора Cg этим проходом не исследовался.

Идентичность клиента: SHA-256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Старые REA-записи проверяются через `decompiled/client/captures/graphics-*/capture.json`;
они указывают адрес, хеш псевдокода и Evidence ID. Нельзя выбирать функцию
по одному номеру файла: некоторые запрошенные interior selectors разрешились
в начало другой функции (например, запрос `1005ac3f` дал `FUN_1005ab50`).

## Все найденные исходники и программы

| Объект | Доказанное поведение | Состояние обычного рендера |
|---|---|---|
| `water_vp.cg` | `MVP * position`, копирует UV; дополнительный UV.y += flScreen | GLSL `water.vert`, подключён |
| `water_fp.cg` | Смещение scene UV на `TexOffset.xy * noise.r + TexOffset.zw * noise.g`, умножение RGB и alpha на mask.r | GLSL `water.frag`, подключён с noise/scene/mask captures |
| `black_vp.cg` | `MVP * position`, копирование UV | GLSL `black.vert`, также используется десатурацией |
| `black_fp.cg` | `RGB = 1.2 - 4*(r+g+b)`, alpha=1 | `black.frag` компилируется, но исходный активирующий call path не доказан; вызова `UseProgram(blackProgram)` в `gl_cof.c` нет |
| `fp20_water_fp.cg` | noise.gb → Identity lookup → `offsettex2D(scene, uv2, lookup, TexOffset)`; mask множитель | Не подключён; современная исходная ветка воды используется вместо legacy fp20 |
| `fp20_black_fp.cg` | Вариант black с `expand()` старого Cg profile | Отдельный legacy путь не подключён |
| client VA `1018f858`, 660 байт | Cubemap-направление и 2D-направление, saturate dot в степени 4, два цветовых множителя | Встроенная ARBfp программа извлечена полностью; эквивалентного specular pass в обычном рендере нет |
| client VA `1018faf0`, 858 байт | Нормализованный half-vector, normal map, saturate dot в степени 16, light color и gloss | Встроенная ARBfp программа извлечена полностью; эквивалентного high-specular pass в обычном рендере нет |

Для modern water активный native pipeline, sampler bindings и порядок проходов
доказаны отдельно: `graphics-client-first/002-pseudocode.c`, функция
`10086d10`. Формула воды не содержит отражённую камеру, Fresnel или ray tracing.
RTX-вода — дополнительный эффект проекта, а не восстановленный код этой Cg-ветки.

### Встроенные specular-программы

Для программы `1018f858` обозначим `decode(x)=2*x-1` и `sat(x)=clamp(x,0,1)`:

```
E = decode(textureCube(unit0, texcoord0).rgb)
L = decode(texture2D(unit1, texcoord1).rgb)
s = sat(dot(E,L))^4
RGB = sat(texture2D(unit2,texcoord2).rgb
        * texture2D(unit3,texcoord3).rgb * s)
```

Она не нормализует E/L внутри программы: нормализация E зависит от содержимого
cubemap, L — от подготовленной текстуры. Назначение цветовых units должно
подтверждаться native binding call path, а не названием временной переменной.
SHA-256: `2df8119a7cd961151f7325a425e89784015eba56c0deb0ee5b8424cbba2dbe07`.
Единственный найденный raw pointer candidate: `10060f6e`.

Для программы `1018faf0`:

```
L = decode(texture2D(unit1, tex_lightmap).rgb)
H = normalize(normalize(tex_camdir.xyz) + L)
N = decode(texture2D(unit0, tex_face).rgb)
s = sat(dot(N,H))^16
RGB = sat(texture2D(unit2,tex_lightmap).rgb * s)
      * texture2D(unit3,tex_face).rgb
```

Промежуточный `MUL_SAT` стоит **до** последнего множителя; последняя инструкция
сама не содержит SAT. N и L внутри программы отдельно не нормализуются.
SHA-256: `4fb69448e13b0a454d24002e879afda8f924523426a8f5a368ee99ee3e2c8225`.
Единственный найденный raw pointer candidate: `100629f2`.
Полные ARB инструкции, включая alpha, сохранены в JSON; формулы выше относятся
к RGB. Найденные ссылки ещё не являются проверенным runtime call graph.

## Остальные пути, которые нельзя потерять при восстановлении

| Подсистема | Доказательство оригинала | Что действительно имеется / чего не хватает |
|---|---|---|
| Фонарь, телефон, tactical light | Native `100ae540`, `100aea10`; lighting entry/core/projection captures | На момент аудита weapon effects включали исходный Xash flashlight. Оригинальные cookie/FOV/RGB/радиус/сглаживание требовали отдельного renderer adapter. Это непосредственная причина для расследования жалобы, а не black/water Cg |
| Динамические и map spotlights | `10060000`, `1005c0f0`, attenuation `1005a630/750/8c0`, `1005ab50` | Server state есть. Нужны полный world+brush+studio consumer, cookie/attenuation, отсечение и корректные состояния GL; один dlight их не заменяет |
| Directional lightmaps | `10059660`, `10059880`, `10059f30`, `10059990` | `cof_lightmap.h` реализует flat-normal fallback. Отдельные ambient/diffuse/direction atlases, tangent basis и per-pixel normal lighting не восстановлены полностью |
| Bump/gloss/high-gloss | Ассоциация `gfx/bumpmaps/<name>.tga`, `_gloss`, `_glosshi` в фактической функции `10069410`; два ARB program literals | Имена ресурсов и формулы найдены; sampler binding, blend/depth state, проходы и выбор hardware fallback ещё должны быть замкнуты |
| BlackWhite | `1006f9f0` → `1005e230` → register-combiner `1005d7a0` | Реальный GLSL desaturation: dot RGB с (.32,.59,.09), alpha=messageByte/255; это отдельный эффект, не black Cg |
| Fog | `10071760`, `10072740`, `10093bc0`, `10092320`, waterlevel gate `100af790` | Протокол, интерполяция и normal world bridge реализованы; RTX имеет отдельный авторский путь |
| Screen blur | Cvars в `10060690`: gl_screenblur, gl_blurstepsx/y, gl_opacity, gl_blurtest | Регистрация cvars не доказывает алгоритм; полный native pass/capture lifecycle и соответствие порта не установлены этим аудитом |
| Weather | `analysis/graphics/weather.md`, `src/cof/client/weather.cpp` | Rain/snow/impact simulation и TriangleAPI draw уже реализованы. Старый `implementation.md` со словами «rain unresolved» устарел |
| Studio/brush lighting, sky | Native renderer entry `1005ff50`, ветвления и gl_modelrenderer/gl_brushents в `10060690` | Отдельная область проверки; рабочий viewmodel не доказывает исходную модель освещения/теней |

`src/cof/render/rtx_*`, RTGL1 shaders и дополнительные материалы не являются
доказательством оригинальных CoF алгоритмов. `tools/prepare_engine.py` явно
отделяет RTX lighting/water/tonemapping от обычной GLSL-интеграции.

## Очерёдность завершения

1. Исправить handheld lights по native producer и projected-light consumer:
   сохранить cookie, цвет, затухание, FOV и near-wall smoothing; проверить
   движение луча, world surfaces, brush entities и отсутствие второго Xash света.
2. Замкнуть пути `10060f6e` и `100629f2`: точные функции загрузки, используемые
   texture units, blend/depth состояния, caller/cvars; затем портировать оба
   specular режима вместе с directional atlases и normal-map binding.
3. Разобрать оставшиеся register-combiner/fixed-function пути, blur и реальный
   trigger black Cg. Не подключать black shader к BlackWhite без доказательства.
4. Проверить original-vs-port renderer readback на контролируемых сценах:
   освещение вплотную к стене, наклонный пол, стык BSP faces, moving brush,
   studio model, normal/gloss materials, смена карты/разрешения и отсутствие GLSL.

Текущие smoke assertions подтверждают вызовы и состояние процесса, но не
равенство пикселей оригиналу. Никакие тесты в этом аудите не запускали игру,
не захватывали рабочий стол и не изменяли установленные ресурсы.
