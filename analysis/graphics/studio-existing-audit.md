# Studio renderer и viewmodel: аудит существующих captures

Дата: 2026-11-20. Только чтение сохранённых клиентских декомпиляций,
`decompiled/FUNCTION_CATALOG.txt` и таблицы экспортов `analysis/exports/client.csv`.
REA, сборка и игра этим агентом не запускались; ресурсы и общий каталог не изменены.
Дополнение: прочитаны четыре новых тела из `graphics-studio-lighting`,
предоставленные основным агентом. Для ABI-сверки использованы локальные
`external/hlsdk-portable/engine/cdll_int.h` и `engine/studio.h`.
Все адреса ниже — **оригинальный client.dll**. Названия FUN не приравниваются
к одноимённым функциям SDK без доказанной таблицы интерфейса/vtable.

## Что уже установлено

Документ теперь покрывает interface/ABI и routing studio renderer, а также
ранний разбор lighting setup. `1008cee0` управляет model draw/events,
`100678d0` готовит собственное освещение модели. Новые captures уже содержат
custom mesh/material проход, per-normal lighting и chrome helper.
Подробные контракты: [материалы](studio-material-contract.md),
[освещение](studio-lighting-contract.md), [chrome](studio-chrome-contract.md).
Этот документ фиксирует interface, ABI, маршруты вызовов и связь этих уровней.

| Адрес | Подтверждённая роль и состояние |
|---|---|
| 10053820 | HUD_GetStudioModelInterface: version1, returned table1018f830, copy43dwords engine studio API→105457b0, init10053810. Новое тело есть. |
| 1008cee0 | Draw orchestration: entity/model/header, setup/bones/events, выбор engine/custom lighting, sky и вложенные special models. Тело есть. |
| 100678d0 | Custom lighting setup: ambient/directional fields, особые модели/effects, до четырёх dynamic lights и данные на каждую кость. Тело есть. |
| 10060690 | Регистрация gl_renderer, gl_modelrenderer, gl_lambert и cof_fullbrighttextures. Тело есть; регистрация не доказывает применение texture flags. |
| 1004bb80 | Короткая световая вспышка в engine и custom light pools. Тело есть, вызывается из draw orchestration при pending flag. |
| 100aea10 | Обновление обычного/уменьшенного фонаря по HUD flags; существующий каталог относит к phone/reduced flashlight. Тело есть, не является material shader. |
| 100aee70 | Проекционный фонарь оружия по viewmodel attachments. Тело есть. |
| 100595f0 | Преобразование компонент света через общую gamma/brightness/contrast цепочку. Тело есть; внутри вызов math helper имеет утраченную сигнатуру. |
| 10094730 | Меняет знак всех трёх float-компонент вектора через XOR sign bit. Тело есть. |
| 10068c80 | Выбирает texture header исходной модели либо загружает отдельную модель T.mdl; не lighting consumer. Новое тело есть. |
| 10065710 | Инициализирует ambient/directional RGB и направление, вызывает BSP sampling вдоль Z±256; имеет fallback на sky color. Новое тело есть. |
| 100690f0 | Умножает вектор на транспонированную rotation-часть матрицы3x4, без translation. Новое тело есть. |
| 10065210 | Вычисляет difference между двумя3D-точками и передаёт его10094510; float-return потерян декомпилятором. Новое тело и length helper10094510 есть. |
| 1001d5a0 | Initialize копирует101dwords engine API→101b2608; version7, init thunk1006c390. Тело есть. |
| 10053750 /10053730 | DrawModel/DrawPlayer wrappers из returned interface; тела есть. |
| 1008f0b0 | Studio render wrapper: chrome origin, forced flags, effect19 double pass; тело есть. |
| 1008edd0 | Dispatch hardware/nonhardware render по IsHardware; тело есть. |
| 1008edf0 | Hardware render: custom/engine setup, bodypart loop, points draw и restore; тело есть. |
| 1008bb70 | Init связывает cvars, chrome sprite, counters и matrices с полями renderer. Тело есть. |

Основные источники: `menu-sky-render/002-pseudocode.c` и
`menu-sky-functions/001-pseudocode.c` внутри `decompiled/client/captures`.
У этих функций средняя уверенность в полном семантическом имени справедлива:
отдельные поля и виртуальные callbacks ещё не типизированы.

## Вход интерфейса и draw routing

`HUD_GetStudioModelInterface` — client VA **10053820**. Новое тело в
`graphics-studio-light-selection/000-pseudocode.c` принимает version1
(иначе return0), возвращает table1018f830, копирует43dwords входного
engine_studio_api в105457b0, вызывает10053810 и возвращает1.
`analysis/graphics/studio-interface-pe.json` основного агента фиксирует
слова returned table `{1,10053750,10053730}`: по r_studio_interface_t
это DrawModel wrapper10053750 и DrawPlayer wrapper10053730.

PE evidence также содержит две candidate vtables с совпадающими render slots:
+0x48→1008f0b0,+0x4c→1008edd0,+0x54→1008edf0. Assembly wrapper10053750
теперь прямо показывает `MOV ECX,0x101ba540` по адресу10053781 перед
`CALL1008cee0`: активный renderer instance — **101ba540**. Присваивание
vtable этому instance требует отдельного constructor evidence; обе
PE candidate tables совпадают по обсуждаемым draw slots. Новые read_bytes
`graphics-studio-math-abi/003-read_bytes.json` показывают по101ba540 исходные
байты00000000; это не готовый vtable pointer и не наблюдение runtime.
`004-read_bytes.json` непосредственно подтверждает100байт второй таблицы
по101515ec и её draw slots. Нулевой указатель в образе не исключает
последующую инициализацию constructor при загрузке DLL.

`10053810` вызывает1008bb70. DrawModel wrapper10053750 сравнивает
GetCurrentEntity с GetViewEntity; если различаются и effect!=0xa1,
вызывает1005ff50, затем1008cee0(flags). DrawPlayer wrapper10053730 всегда
вызывает1005ff50, затем1008dad0(flags,state). Это реальные wrappers из
returned interface, а не прямое предположение по сходству метода SDK.

Init1008bb70 получает cl_himodels→this+24,developer→+28,
**r_drawentities→+2c**, chrome sprite→+58, counters→+4098/+409c.
Engine matrices: bone transform→+40a8, light transform→+40ac,
alias transform→+40a4, rotation matrix→+40a0. Сбрасывает10545864/68=-1.
В этом init нет присваивания vtable; сохранять это различие при ABI-порте.

### Доказанная hardware render цепочка

1008f0b0 вызывает SetChromeOrigin (1054584c), SetForceFaceFlags(0)
(10545838), затем vtable+4c. Effect19 обрабатывается двумя проходами:
сначала временно effect0, затем forced flags2, привязка chrome sprite
через triangle API, восстановленный effect19 и второй render. Это chrome
overlay routing, но не доказанный расчёт chrome UV внутри custom mesh code.

1008edd0 проверяет IsHardware (10545850): ненулевой режим→vtable+54
(1008edf0), нулевой→+50 (candidate1008efe0, тела пока нет). Нельзя заменить
этот guard на `==1`: здесь проверяется любое ненулевое значение.

1008edf0 выбирает rendermode из entity+2f8, либо5 при GetForceFaceFlags!=0.
При gl_renderer&&gl_modelrenderer использует custom цепочку:
**100687d0(mode) → [10068770(bodypart),10065ef0()] →10067850**.
В альтернативной ветке ровно соответствующие engine callbacks:
SetupRenderer(10545844), StudioSetupModel(10545800),
StudioDrawPoints(10545814), RestoreRenderer(10545848).
Bodyparts идут0..header+cc-1; перед каждым draw вызывается
GL_SetRenderMode(10545858). Custom helpers захватывает основной агент.

Debug cvar через this+2c — **r_drawentities**:2 рисует bones,3 hulls;
4 добавляет hull overlay,5 abs bbox. Поэтому отсутствие mesh draw при2/3 —
преднамеренная ветка. Это доказанный custom draw route; подробности
texture flags/chrome/light consumers10065ef0 описываются в отдельном
studio-material-contract.md.

`1008cee0` по фактическому телу:

1. Получает current entity через `DAT_105457c8`, сохраняет его в this+0x30.
   При null выходит. Запоминает renderer field this+0x18 и временно меняет
   его для совпадения с `DAT_10542bc0`, затем восстанавливает на выходах.
2. Получает модель из entity+0xb94, studio header через `DAT_105457c0` и
   передаёт их callbacks `DAT_1054583c`/`DAT_10545840`.
3. При `gl_renderer != 0 && gl_modelrenderer != 0` вызывает **10068c80**,
   который выбирает texture header (разбор ниже), затем vtable+0x14(0).
   10068c80 не рисует meshes и не рассчитывает lighting/chrome.
4. Бит `flags&1` отвечает draw-пути, `flags&2` — attachment/event-пути.
   Для второго вызываются vtable+0x1c и `DAT_10545830`, затем attachment
   vectors копируются в engine entity по index.
5. Перед model render (`vtable+0x48`) выбирает освещение. При выключенном
   gl_renderer или gl_modelrenderer, либо entity+0x304==0x3c, вызывает
   `DAT_10545808(entity,&lighting)` и `DAT_1054580c(&lighting)`.
   Для обычного engine-пути затем `DAT_10545810(&lighting)`; иначе —
   `100678d0`.
6. Для special effect0x3c записывает полученные поля в globals10550f0c/10/14
   и lighting shade/192→1054585c, после чего выходит без общего draw.
   Это исключение нельзя игнорировать при перенаправлении всех моделей.

Имена callbacks в п.5 теперь подтверждены copy-base105457b0 из10053820
и порядком полей engine_studio_api_t в локальном common/r_studioint.h:
slot22/23/24, offsets58/5c/60→cells10545808/0c/10 — StudioDynamicLight,
StudioEntityLight, StudioSetupLighting. Это адреса **ячеек указателей**,
не VA собственных клиентских функций.

Дополнительно: slot3/4→105457bc/c0 = Mod_ForName/Mod_Extradata;
slot6→105457c8 = GetCurrentEntity; slot9→105457d4 = **GetViewEntity**;
slot25→10545814 = engine StudioDrawPoints; slot29→10545824 = StudioSetupSkin;
slot32→10545830 = StudioClientEvents; slot39→1054584c = SetChromeOrigin.
Копируются именно43слота, поэтому поздние3дополнительных callbacks
локального Xash SDK header нельзя автоматически считать оригинальными.

## Особые draw/viewmodel ветви

* При entity+0x304==0x11 и допустимом index entity+0x2fc создаётся временный
  player-state и вызывается vtable+0x0c(flags,state), затем early return.
* Effect IDs0x46/0x89/0xb8 используют общий GL-ready gate **10053c70** (manager.status==2),
  дополнительные transforms и временный depth-range. Lighting override
  использует globals104ce070/74, если они не -1.
* Effect0x31/0x32 дополнительно рисует соответственно `models/zombie_eyes.mdl`
  или `models/mask.mdl`: вызывает **1008b3f0**, меняет header, merge-bones
  slot+0x24, повторяет lighting, временно выставляет render mode5 и amount255,
  затем восстанавливает сохранённую entity. Это не общий fullbright flag
  всех studio textures.
* Effect0x15 делает отдельный повторный draw с изменением матрицы и culling,
  временно обнуляя effect. Конкретный смысл эффекта здесь не переименован.
* У view-entity есть отдельная ветка weapon state ID0x0f и global10545868==0x0d:
  три компоненты матрицы умножаются на -1, меняется cull callback. Без связи
  исходных weapon IDs с этим draw-путём нельзя объявить это универсальным
  двухручным renderer.
* Weapon state ID0x15 меняет три controller bytes по global101b2f18/360*255.
  По одним числам нельзя заключить, что это skin или эмиссия телефона.
* Attachment0 сохраняется для globals10542bbc/10542bb8/10542bc0. Для последнего
  вычисляются camera angles из разностей attachments. Это camera geometry,
  не отражение или fullbright материала.

## Custom lighting 100678d0

Статически доказанные этапы:

* Entity effect0x3c немедленно выходит. Для остальных запрашивается базовое
  освещение через **10065710** в точке `entity.origin+(mins+maxs)/2`; передаётся
  `entity.effects & 0x10`, а выход начинается с global104d26f4.
  Новое тело10065710 обнуляет9float-значений; при world-model+0x17c==0
  ставит только первые RGB=(0.5,0.5,0.5). Иначе вызывает10065890 от этой
  точки до Z-256 при flag0, либо Z+256 при flag!=0, с world-model+0xa4.
  При miss берёт sv_skycolor_r/g/b, преобразует100595f0(color/255)*0.25,
  записывает одинаковые значения в RGB[0..2] иRGB[3..5], direction[6..8]=(0,0,1).
  Точная BSP surface sampling формула10065890 теперь разобрана отдельно
  в studio-lighting-contract.md.
* Особый local flag зависит от mode105458b0 и точного имени модели:
  mode0 `models/nv_goggles.mdl`, mode7 `models/bookmenu.mdl`, mode10
  `models/weapons/v_gasmask.mdl` либо `_simon.mdl`, mode1
  `models/items/tv_frame.mdl`, mode5 `models/props/blandat/v_telescope.mdl`,
  mode6 строка из global1018a3f0. При flag пропускаются инверсия направления
  и выбор dynamic lights. Ветка не содержит имени phone или произвольного
  оружейного материала.
* Без special flag направление global104d270c инвертируется 10094730.
* Для `models/flash1.mdl`/`flash2.mdl` три базовых компоненты становятся0.15.
  Аналогичный override есть при10556b48!=0 и mode6/7.
* Effect100 берёт `brightvalue`;137 — `skybrightvalue` и RGB из
  `skybrightcolourr/g/b`. `models/props/sky_stars.mdl` имеет дополнительную
  случайную вариацию. Большая часть IDs101..200 задаёт `(id-100)/100`, но
  IDs101/137 и более поздние ветви имеют overrides. Нельзя обобщать диапазон
  без сохранения порядка условий.
* Для IDs99/123/245/165 есть distance-dependent пульсация с использованием
  **10065210**, global1018d1b0 и switch10542ba4. Новое тело10065210 точно
  вычисляет secondPoint-firstPoint и передаёт этот вектор10094510. Caller
  использует float-результат, хотя декомпилятор объявил wrapper void;
  новое тело10094510 подтверждает sqrt(x²+y²+z²), float-result через x87.
  Названия эффектов
  из рассмотренного тела не следуют.
* Header+0x8c задаёт число костей; массив bone matrices this+0x40a8 имеет
  stride0x30. **100690f0** преобразует направление в данные для каждой кости.
  Новое тело подтверждает точную операцию: out.x=M[0]*x+M[4]*y+M[8]*z,
  out.y=M[1]*x+M[5]*y+M[9]*z, out.z=M[2]*x+M[6]*y+M[10]*z.
  Для row-major3x4 это transpose rotation (без translation), как переход
  направления в bone space. Эквивалентность полной обратной матрице требует
  ортонормальности; сама функция её не проверяет. In-place input/output
  здесь не гарантирован, поскольку компоненты пишутся последовательно.
* **1005bd90** получает origin/mins/maxs, массив кандидатов и флаг сравнения
  entity с указателем `DAT_101b26d8()`. Обрабатываются максимум **4** выбранных
  lights (global104ce4b0). Новый разбор политики отбора содержится в studio-lighting-contract.md;
  здесь остаётся только интерфейс его вызова.
* Для каждой кости вычисляется вектор от light к bone origin и множитель
  `max(0,1-distanceSquared/radiusSquared)`. Вектор нормализуется, преобразуется
  100690f0 и масштабируется **10094880**. Spotlights дополнительно ограничивают
  cone по dot-product; внутри cone множитель `(dot-threshold)/(1-threshold)`.
  Точное вычисление threshold включает cosine helper100f8160; новый
  lighting-аудит подтверждает его fallback через FCOS в10119a6f. Здесь
  не воспроизводится повторно полный math контракт.
* Light key **-666** при указанном entity-comparison flag получает особое
  расположение `entity.origin-forward*13+right*5` перед расчётом bone vectors.
  Это особенность viewmodel lighting: сопоставление GetViewModel с
  DAT101b26d8 подтверждается Initialize copy-base и SDK slot52; полный
  ABI-разбор приведён ниже.
* RGB каждого принятого света преобразуется через100595f0 и умножается0.5;
  сохраняется в global104e0518/1c/20. Consumer **10068d70** уже прочитан:
  composition и normal lighting подробно разобраны в
  [studio-lighting-contract.md](studio-lighting-contract.md).
* Последняя ветка IDs31..40 вычитает `(id-30)/10` из базового RGB.

## Телефон, оружейный фонарь и вспышки

`100aea10` проверяет HUD mask1018a41c bits1/2 и блокирующие camera/state globals.
Сглаживает реакцию на trace к стене. Для bit1 выделяет projected light key-1,
для bit2 без bit4 — key-2. Radius700, life=time+0.01; FOV меняется вокруг50
по сглаженной близости, текстура `gfx/flashlight.tga` либо `gfx/low/flashlight.tga`.
У reduced branch углы/radius/RGB управляются `cof_reducedlight*` cvars.
Существующее название PhoneAndReducedFlashlight описывает источник света.
Отдельный texture fullbright contract уже установлен в10065ef0 и описан в
[studio-material-contract.md](studio-material-contract.md); оба механизма
следует воспроизводить как разные уровни.

`100aee70` для mask bit4 получает origin через trace к attachment+0xb6c,
направление из attachment+0xb78 минус +0xb6c, преобразует его в angles и
инвертирует pitch. Light key-66, radius700, FOV70, RGB(0.5,0.5,0.5),
life=time+0.01, `flashlight2.tga`/low. Это проекция от оружия, а не StudioChrome.

`1004bb80` создаёт два краткоживущих light records: engine API light и
custom light через1005c0f0. Radius128, life+0.06; custom RGB примерно
(0.7,0.43,0.14). Draw orchestration вызывает его при pending105458c0,
сбрасывая флаг. Освещение вспышкой не доказывает fullbright самого muzzle mesh.

## Skin, chrome и fullbright: связь с отдельными контрактами

Новое тело **10068c80** закрывает выбор texture header. Из model header
this+0x44 проверяются +0xb4 и+0xb8: по локальному studiohdr_t это numtextures
и textureindex. При обоих ненулевых this+0x40b0 получает исходный header.
Иначе имя модели из this+0x34 копируется в буфер, окончание `.mdl` заменяется
на `T.mdl`, вызывается DAT105457bc(name,0), затем DAT105457c0(model).
Результат также сохраняется в this+0x40b0. При неудаче печатаются
`Mod_ForName: failed for %s` или `Mod_Extradata: failed for %s`; field остаётся0.
Это выбор texture-bearing studio header, а не StudioSetupSkin и не consumer
per-normal lighting. Валидации длины/расширения имени в этом теле не видно.

Consumer **10065ef0** теперь подтверждает skin/mesh flags и чтение
**104cddbc (cof_fullbrighttextures)**. Установлены texture-name fullbright
ветви, corona_, fullbright_mess exception и временные sleeves/gloves ветви;
chrome/nonchrome условия различаются. Полный контракт, условия и порядок
операций — в [studio-material-contract.md](studio-material-contract.md).
Это закрытый вопрос реверса consumer, а не оставшийся поиск xrefs.

**10065050** вычисляет chrome UV; формулы и cache stamp разобраны в
[studio-chrome-contract.md](studio-chrome-contract.md). **10068d70**
применяет prepared lighting к normals; см.
[studio-lighting-contract.md](studio-lighting-contract.md). Эти функции
не означают capture отражённой сцены или RTX emission: их нативные операции
установлены отдельно. WeaponBody, texture flags и projected light сохраняют
разные роли; нет необходимости выводить материал телефона из UI message.

## Статус дальнейших функций и граница этого аудита

| Приоритет | Точный client VA / источник адреса | Зачем |
|---|---|---|
| Разобрано отдельно | **100687d0**, **10068770**, **10065ef0**, **10067850** | studio-material-contract.md. |
| Разобрано отдельно | **10065890**, прямой callee10065710 | BSP sampling: studio-lighting-contract.md. |
| Разобрано отдельно | **1005bd90**, прямой callee100678d0 | Выбор dynamic lights: studio-lighting-contract.md. |
| Разобрано отдельно | **10094880**, прямой callee100678d0 | Тело graphics-studio-math-abi/002: out=scale*A; studio-chrome-contract.md. |
| 2 | **1008b3f0**, прямой callee1008cee0 | Backup/setup перед extra eyes/mask render. |
| closed | **10053c70**, прямой callee1008cee0 | Общий GL-ready gate, не spatial culling; renderer-bootstrap-contract.md. |
| 3 | **1008efe0**, PE vtable+50 | Software render counterpart; не требуется для вывода о hardware цепочке. |
| После wrappers | vtable +0x18/+0x20/+0x24 | PE candidates раскрывают targets, но связь активного instance следует подтвердить constructor. |
| Разобрано отдельно | **10068d70**, **10065050**, **104cddbc** | Consumers lighting/chrome/fullbright установлены; подробности в трёх контрактах выше. |

Точные VA custom chrome **10065050** и per-normal lighting **10068d70**
теперь известны. Остаточные вопросы этой карты — constructor/vtable assignment,
отмеченные extra-model/software/sky helpers и runtime/pixel parity;
они не отменяют закрытые статические material/lighting контракты.

## Engine GetViewModel: проверка ABI закрыта

В локальном cdll_int.h cl_enginefuncs_s до этих функций состоит из указателей.
Для32-bit ABI размер каждого4байта, поэтому slot52 имеет offset0xd0.
Независимая сверка порядка полей даёт:

| SDK поле | Slot | Offset | Native cell при base101b2608 |
|---|---:|---:|---|
| pfnRegisterVariable |14|0x38|101b2640|
| pfnGetCvarFloat |15|0x3c|101b2644|
| GetViewAngles |34|0x88|101b2690|
| GetLocalPlayer |51|0xcc|101b26d4|
| GetViewModel |52|0xd0|**101b26d8**|
| GetEntityByIndex |53|0xd4|101b26dc|

Первые два совпадают с реальными регистрациями/чтением cvars в10060690,
а GetEntityByIndex соответствует вызовам с entity index в1008cee0 и world
index0 в10065710. В100aee70 указатель из101b26d8 используется как модель
с attachments и model field, что независимо согласуется с GetViewModel.
Это сильное согласованное ABI-доказательство имени GetViewModel, а не
произвольное имя по одному use-site.

Новое тело Initialize1001d5a0 в graphics-studio-draw-routing/003 подтверждает
базу непосредственно: copy101dwords из входной engine API в**101b2608**,
затем проверка version==7, повторная такая же копия, thunk1006c390 иreturn1.
При неверной версии первая копия всё равно уже выполнена, затемreturn0.
Таким образом **DAT101b26d8=GetViewModel доказан через initializer+SDK offset**.
Исходная оговорка об inferred base больше не требуется. Сравнение в100678d0
действительно выделяет viewmodel, а key-666 изменяет источник света именно
для неё. Engine client API и engine studio API — разные таблицы и разные
getters:101b26d8 GetViewModel не следует путать с105457d4 GetViewEntity.

## Файлы доказательств

Все пути ниже относительно репозитория:

* `analysis/exports/client.csv` — адрес HUD_GetStudioModelInterface.
* `decompiled/client/captures/menu-sky-render/002-pseudocode.c` —1008cee0.
* `decompiled/client/captures/menu-sky-functions/001-pseudocode.c` —100678d0.
* `decompiled/client/captures/graphics-lighting-entry/000-pseudocode.c` —10060690.
* `decompiled/client/captures/graphics-lighting-entry/004-pseudocode.c` —100aea10.
* `decompiled/client/captures/graphics-lighting-entry/005-pseudocode.c` —100aee70.
* `decompiled/client/captures/weapons-client-effects/001-pseudocode.c` —1004bb80.
* `decompiled/client/captures/shader-pass-vector-helpers/001-pseudocode.c` —10094730.
* `decompiled/client/captures/graphics-lightmap-formulas/000-pseudocode.c` —100595f0.
* `decompiled/client/captures/graphics-studio-lighting/000-pseudocode.c` —10065710.
* `decompiled/client/captures/graphics-studio-lighting/001-pseudocode.c` —10065210.
* `decompiled/client/captures/graphics-studio-lighting/002-pseudocode.c` —100690f0.
* `decompiled/client/captures/graphics-studio-lighting/003-pseudocode.c` —10068c80.
* `external/hlsdk-portable/engine/cdll_int.h` — порядок engine API function pointers.
* `external/hlsdk-portable/engine/studio.h` — texture fields header+0xb4/+0xb8.
* `decompiled/client/captures/graphics-studio-light-selection/000-pseudocode.c` —10053820.
* `analysis/graphics/studio-interface-pe.json` — returned interface words и candidate vtables.
* `external/hlsdk-portable/common/r_studioint.h` — engine studio API slots и returned interface ABI.
* `decompiled/client/captures/graphics-studio-draw-routing/000-pseudocode.c` —10053810.
* `decompiled/client/captures/graphics-studio-draw-routing/001-pseudocode.c` —10053750.
* `decompiled/client/captures/graphics-studio-draw-routing/002-pseudocode.c` —10053730.
* `decompiled/client/captures/graphics-studio-draw-routing/003-pseudocode.c` —Initialize1001d5a0.
* `decompiled/client/captures/graphics-studio-draw-routing/004-pseudocode.c` —1008f0b0.
* `decompiled/client/captures/graphics-studio-draw-routing/005-pseudocode.c` —1008edd0.
* `decompiled/client/captures/graphics-studio-draw-routing/006-pseudocode.c` —1008edf0.
* `decompiled/client/captures/graphics-studio-draw-routing/007-pseudocode.c` —100690a0 RGBbyte→float/255.
* `decompiled/client/captures/graphics-studio-draw-routing/008-pseudocode.c` —10094510 vector length.
* `decompiled/client/captures/graphics-studio-mesh-materials/004-pseudocode.c` —1008bb70 init.
* `decompiled/client/captures/graphics-studio-mesh-materials/006-procedure_assembly.json` —DrawModel wrapper сECX101ba540.
* `decompiled/client/captures/graphics-studio-math-abi/003-read_bytes.json` —нулевой instance pointer в исходном образе.
* `decompiled/client/captures/graphics-studio-math-abi/004-read_bytes.json` —вторая candidate vtable по101515ec.
* `analysis/graphics/studio-material-contract.md` —mesh/skin/fullbright consumers.
* `analysis/graphics/studio-lighting-contract.md` —BSP/selection и per-normal lighting10068d70.
* `analysis/graphics/studio-chrome-contract.md` —chrome UV10065050 и math helpers.

Статический аудит не подтверждает runtime dispatch этих callbacks на нашем
движке и не проверяет pixel parity в обычном или RTX renderer.
