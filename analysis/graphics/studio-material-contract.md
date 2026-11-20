# Native studio mesh/material contract

Статический разбор 2026-11-20; оригинальная DLL и игра не исполнялись.
Источник: `decompiled/client/captures/graphics-studio-mesh-materials/`,
оригинальный client.dll SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Это частично восстановленный контракт четырёх функций, не готовая
реализация всего studio renderer и не заявление полного раскрытия helpers.

| Адрес | Capture | Назначение |
|---|---|---|
| `10065ef0` | `000-pseudocode.c` | Подготовка vertex/light/chrome arrays, выбор texture/skin, материал и emission mesh command stream |
| `100687d0` | `001-pseudocode.c` | Setup render state и alpha для entity/render mode |
| `10068770` | `002-pseudocode.c` | Выбор bodypart и его submodel из packed entity body |
| `10067850` | `003-pseudocode.c` | Частичное восстановление render state |

## ABI и пределы именования

Размеры и смещения сопоставлены с `external/hlsdk-portable/engine/studio.h`:
`mstudiobodyparts_t` 0x4c, `mstudiomodel_t` 0x70, `mstudiomesh_t` 0x14,
`mstudiotexture_t` 0x50. Texture: name+0, flags+40, width+44, height+48,
index+4c. Native читает flags и как DWORD, и как BYTE; SDK здесь делит поле
на два ushort. Не переносить в оригинал расширенные flags современного Xash.

Engine API base101b2608 доказана initializer capture, см.
`studio-existing-audit.md`. По порядку указателей из `cdll_int.h`:
101b2698=GetMaxClients, 101b26d4=GetLocalPlayer, 101b26d8=GetViewModel,
101b26e0=GetClientTime, 101b2714=RandomFloat, 101b2730=GetLevelName.
Это отдельная таблица от engine studio API.

GL вызовы в этих C косвенные. Первоначальное сопоставление по сигнатурам и
enum из локальных `ref/gl/gl_export.h` и
`3rdparty/gl4es/gl4es/include/GL/glext.h` теперь подтверждено именованными
GetProcAddress assignments в10053c80. Таблица ниже входит в71 core GL/WGL
entry points: `native-gl-dispatch-map.json`, цепочка instance/initializer —
`renderer-bootstrap-contract.md`. Это доказательство имён этих cells;
optional extension dispatch и фактическая поддержка драйвером рассматриваются
отдельно. Numeric contract сохранён:

| Cell | Интерпретация |
|---|---|
|101be644 / 648 / 64c / 650|AlphaFunc / Begin / BindTexture / BlendFunc|
|101be664 / 678 / 67c|Color4f / CullFace / DepthMask|
|101be688 / 698 / 6a0|Disable / Enable / End|
|101be704 / 714 / 720 / 724 / 748|ShadeModel / TexCoord2f / TexEnvf / TexEnvi / Vertex3f|

`100d3cf0(name,pattern)` используется как ненулевой результат совпадения
подстроки (в частности `jeans` с отдельным исключением `jeanss`). Его CRT-тело
не входит в эти captures; не назначаем ему окончательное исходное имя.
Описанные ниже name checks — этот helper, а не точное равенство всей строки.

## Bodypart, skin и buffers

`10068770(index)` берёт header+cc (numbodyparts), header+d0 (bodypartindex).
Сохранённая проверка — **count < index**, не >=: при её срабатывании печатает
`SetupModel: no such bodypart %d` и выбирает0. Не добавляем от себя проверку
отрицательного индекса и не исправляем граничный случай в описании оригинала.
Renderer+48 получает bodypart, +4c получает:
`header + bodypart.modelindex + ((entity.body / bodypart.base) % nummodels)*0x70`.

Mesh draw берёт model из renderer+4c, main header из+44 и отдельный texture
header из+40b0. Нулевой texture header либо entity+304==0x3c прекращает этот
путь. Текстуры идут от textureHeader+b8, skin table от+c8, numskinref от+c0,
numskinfamilies от+c4. При skin!=0 и skin<numskinfamilies смещает table на
`skin*numskinref*2`. Явной проверки skin>=0 в C нет. Каждый mesh.skinref
индексирует short table, затем выбранный texture descriptor0x50.

Vertices преобразуются helper10091790 по bone matrix из renderer+40a8
(stride0x30), результат в DAT104ce4a8. Для каждого mesh нормали последовательно
передаются в lighting10068d70: output RGB, bone id, texture flags, normalXYZ.
Тип `local_34` как указателя здесь артефакт Ghidra: загружается flags DWORD
из texture+40, а не адрес структуры. При flags&2 дополнительно вызывается
chrome10065050, результат int UV-пары в104ce4b8 (stride8).

Setup назначает DAT104ce4a8=104d8718 и DAT104ce4ac=104d2718: transformed
position и RGB arrays соответственно. Применение lighting/chrome формул
изучается отдельно в телах10068d70/10065050, а не выводится из одного вызова.
Точный chrome UV контракт: `studio-chrome-contract.md`; независимое тело
сохранено в `graphics-studio-normal-lighting/001-pseudocode.c`.

## Mesh flags и command stream

Перед mesh emission задаётся CullFace(0x404=FRONT), но здесь не включается
сам GL_CULL_FACE. Масштаб UV — 1/texture.width и 1/texture.height.

| Flag / условие | Подтверждённый consumer |
|---|---|
| flags&0x02 | Chrome UV из массива int-пар, вместо command stream S/T |
| flags&0x20 и DAT104ce4b4==0 | Enable(BLEND), BlendFunc(SRC_ALPHA,ONE); после mesh Disable(BLEND) |
| flags&0x40 и DAT104ce4b4==0 | Enable(ALPHA_TEST), AlphaFunc(GREATER,0.5); после mesh Disable(ALPHA_TEST), AlphaFunc(GREATER,0) |
| flags&0x04 | В этом теле нет отдельного direct branch; flags переданы lighting helper. Не объявлять FULLBRIGHT flag неработающим |
| flags&0x10 | Отдельного material branch здесь не найдено; SDK название ALPHA не доказывает consumer |

Entity-level blending подавляет оба per-texture переключения20/40. Per-mesh
additive здесь не выключает depth writes; они зависят от setup render mode.
Combine flags20|40 могут включить blending и alpha test одновременно.

Triangle command stream состоит из signed short count; 0 завершает stream,
отрицательное значение даёт FAN(6), положительное STRIP(5), затем abs(count)
записей по8байт: vertex index, normal index, S, T. Nonchrome использует S/T,
chrome — UV normal index; RGB берётся по normal index, XYZ по vertex index,
alpha всегда DAT1018fe88. Конец каждого primitive вызывает End.

Nonchrome путь дополнительно пропускает отдельные вершины по условиям оружия
и именам костей, затем по entity+358 mask (Bip01 ноги/руки/кисти). Это
нестандартная фильтрация command stream; не трактовать её как независимую
корректную culling целых треугольников. Семантика mask здесь не раскрыта. Raw capture texture-replacements015/016
определяет имена1014dd7c/1014dd80 как `r_`/`l_` соответственно. Chrome ветка такой фильтрации не содержит.

## Именной fullbright и временное затемнение рук

Регистрация `cof_fullbrighttextures`→DAT104cddbc доказана
`decompiled/client/captures/graphics-lighting-entry/000-pseudocode.c`.
Здесь показан её прямой consumer, помимо регистрации. Значение по умолчанию
**0.5** подтверждено raw string1014cc24: `30 2e 35 00`, capture
`decompiled/client/captures/graphics-studio-math-abi/005-read_bytes.json`.
В сочетании с setup RGB_SCALE2 обычный name-fullbright даёт RGB текстуры
без дополнительного затемнения (0.5*2=1, до blending и прочих внешних stages);
это вывод из двух подтверждённых операций, не результат visual QA.

В nonchrome пути при cvar.value==0 RGB остаётся рассчитанным lighting.
Иначе name с `fullbright` обычно получает одинаковые RGB=cvar.value;
для `corona_` прибавляется RandomFloat(-0.1,0.1), одинаковый для трёх каналов
данной вершины. Проверки выполняются внутри vertex loop: это не один
случайный коэффициент на весь объект/кадр. `fullbright_mess` при
DAT1018cb49!=0 возвращается к обычному RGB; при нуле использует cvar RGB.
Явного clamp RGB в этом месте нет.

Если имя не fullbright, но это viewmodel либо DAT10556b48!=0 и name совпадает
с `sleeve` или `glove`, RGB дополнительно делится на коэффициент времени.
При time>=start105595a0+duration105595a4 коэффициент1; раньше:
`3 - min((time-start)/duration,1)`. Нулевой duration/отрицательное время
здесь отдельно не нормализуются. Это не глобальный fullbright для рук.

Chrome ветка **отличается**: name fullbright сразу использует cvar.value
(плюс corona random), даже если cvar==0; у неё нет отдельного исключения
fullbright_mess и нет временного затемнения sleeve/glove. Поэтому простая
замена всех имён fullbright на STUDIO_NF_FULLBRIGHT не воспроизводит оригинал.

## Динамические texture bindings

Обычный fallback BindTexture(TEXTURE_2D, ushort(texture.index)). Загрузка
replacement helpers выделена в `studio-texture-replacements.md`: таблица
ниже описывает вызов, availability byte и выбранный GL id; конкретные paths
и cache/failure semantics приведены в том отдельном контракте.

| Texture name match | Helper / ready / texture id | Условия и исключения |
|---|---|---|
| hoodie_grey либо hoodie_blood |10064340 /104d26c5 /104d26b8|Основной выбор при1018ca1c!=0, кроме unfolded_clothes/booksimon; unfolded_clothes при101b27bc>0 вызывает helper(1), обычный путь helper(0)|
| jeans, но не jeanss |10064ec0 /104d26d1 /104d26d4|Нужно1018ca1c!=0 либо101b27bc!=0; исключения model name ниже|
| head_face |100641d0 /104d26d2 /104d26d8|Нужно1018ca1c!=0; исключение booksimon|
| page (строка1014dd08, raw capture013) |10064870 /104d26c4 /104d26c0|Нужно10556b48!=0 и хотя бы page1..5 с отсутствующим соответствующим битом25..29 в1018a3f8|
| sleeve, single-player (maxclients<=1) |10064d60 /104d26c6 /104d26bc|Если1018ca1c==0 и длина строки1018a0dc<3, сразу обычная текстура|
| sleeve, multiplayer |10064a40(0) /104d26d3 /104d26dc|Viewmodel либо10556b48!=0 либо entity==10542bc0; viewmodel exception weapon+9c==0x14|
| fingers |100648d0 /104d26c7 /104d26c8|MP/10542bb0 gates уточнены ниже; helper получает результат1054582c(localplayer.index-1), а не filename|
| glove |100642b0(0) /104d26d0 /104d26cc|Только viewmodel и10542bb1!=0|
| cam_vfind |10064c10(width,height,0,0) /104d26e5 /104d26e8|Нужно cvar по105433f8!=0; ready сбрасывается, после mesh bind104d26ec|
| diffusegay |10064ac0(width,height) /104d26e6 /104d26f0|Helper вызывается при104ce4a1!=0, затем104ce4a1=0; binding зависит от ready|

Jeans model exclusions: `badkarne1`, `sophie.mdl`, `tortyrscen`, `deadvictim`,
`booksimon`, `coopend`, `coop` (строка1014dcd8, raw capture014), `gettingshotgun`,
`sophie_dead`. Имена сохраняются ровно как в доказательстве.

Точное fingers gate: `(maxclients>1 || DAT10542bb0!=0)` и
`(DAT10556b48!=0 || entity==GetViewModel() || (DAT10542bc0!=0 && entity==DAT10542bc0))`.
После этого нужен localplayer с ненулевым DWORD+0xb94; если он отсутствует,
переход сразу к material stage **без нового bind**. При невалидном index,
нулевом1054582c результате или ready==0 используется обычная текстура.
Это потенциально унаследованный binding, а не гарантированный fallback;
исправлять эту особенность в описании оригинала нельзя.

`local_5` для cam_vfind устанавливается внутри mesh loop, но обнуляется
до loop, а не для каждого mesh; последующие mesh тоже выполняют bind104d26ec.
Capture helpers теперь разобраны в `camera-capture-contract.md`: live texture
104d26e8 используется viewfinder и HUD blur, retained photo104d26f0 — веткой
diffusegay после TakePhoto. Они копируют framebuffer через доказанный
glCopyTexImage2D, без отдельного рендера сцены. Внешний engine frame ordering,
read-buffer state и срок жизни IDs при смене GL context остаются открытыми.
Не называем этот механизм SSR/кубической картой/зеркалом.

## Setup / restore

`100687d0` включает SMOOTH shading, alpha=1, entityBlendFlag=0.
Mode5 (SDK TransAdd): depth writes0, BLEND enabled, SRC_ALPHA/ONE.
Mode2 или4 (TransTexture/TransAlpha): depth writes0, BLEND enabled,
SRC_ALPHA/ONE_MINUS_SRC_ALPHA. Для этих режимов flag=1,
alpha=entity+2fc /255.0 (renderamt по ABI). Другие режимы в этой функции
не меняют blending/depth mask; это не универсальный reset состояния.

При отсутствии DAT101be77c настраивается texture-env COMBINE/MODULATE,
source0=TEXTURE, source1=PREVIOUS, RGB_SCALE=2. Alpha combine здесь отдельно
не перепрограммируется. Альтернативная NV-register-combiners ветка включает
REGISTER_COMBINERS_NV, один combiner, textureRGB*primaryRGB с scale2 в SPARE0,
textureAlpha*primaryAlpha без scale; final RGB/alpha выводит SPARE0.
Это fixed-function doubling, не PBR shader.

Setup затем может заменить alpha на0.7 по точному имени модели и selector
DAT105458b0: 0→models/nv_goggles.mdl; 10→v_gasmask.mdl либо v_gasmask_simon.mdl
в models/weapons; 1→models/items/tv_frame.mdl; 2→models/weapons/v_death.mdl
либо v_death_doctor.mdl по105431dc; 5→models/props/blandat/v_telescope.mdl;
6→динамическое имя по1018a3f0. Эта последняя коррекция alpha сама не включает
blending, поэтому эффект зависит от ранее установленного режима.

`10067850`: fallback RGB_SCALE=1 либо Disable(REGISTER_COMBINERS_NV), затем
TexEnvf(TEXTURE_ENV,TEXTURE_ENV_MODE,7681.0=REPLACE), FLAT shading. Если
entityBlendFlag!=0 — depth writes1, Disable(BLEND). Это не сохранение/возврат
произвольного входного GL state: cull mode, текущая текстура, blend factors,
alpha func и другие состояния не восстанавливаются снимком.

## Остаточные границы

Ранние gates10065ef0 по globals/viewmodel и entity+304 (0x5c/5d/5e),
карты college1dark/forest1..6 и расстояния800/1000/600 являются draw culling,
а не свойствами texture. Helper10072710 и часть globals не названы; полного
контракта этих gates здесь не заявлено. Paths и replacement helper bodies теперь раскрыты отдельно в
`studio-texture-replacements.md`; raw strings013..016 подтверждают page/coop/r_/l_.
Загрузка core GL dispatch доказана в `renderer-bootstrap-contract.md`;
replacement invalidation и TakePhoto scheduling описаны в
`studio-texture-lifecycle-audit.md` и `camera-capture-contract.md`. Полный смысл
bone mask, полный GL resource lifetime и внешнее engine ordering остаются
открытыми вопросами. Новые notes описывают только
показанные ветки. Общий каталог не изменён, runtime/visual QA не проводились.
