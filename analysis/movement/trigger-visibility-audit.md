# Проверка невидимых лестничных brush-сущностей

Проверен исходный `hl.dll` с SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Данные прочитаны из PE, без запуска оригинальной игры. Важно прослеживать не только
Spawn, но и виртуальный вызов `vtable+0x30`: именно Precache выставляет видимость.

| Класс | vtable | Spawn | Precache (+30) | Поведение видимости |
|---|---|---|---|---|
| CFuncStairs | `101e2bd0` | `10110760` | `1010eed0` | SOLID_TRIGGER=1; showtriggers==0 ставит EF_NODRAW=80, иначе снимает |
| CLadder | `101e2928` | `101108e0` | `1010ef30` | SOLID_NOT=0, skin=-16; скрыт при showtriggers==0 и !(spawnflags&1); iuser1=1 |
| CLadderControl | `101e2a4c` | `10110920` | `1010efc0` | SOLID_TRIGGER=1; showtriggers==0 ставит EF_NODRAW, иначе снимает; очищает EHANDLE |
| CCoFLadderManagerUse | `101b1ca8` | `1004f3e0` | `1004f170` | Precache только звук noise; общего скрытия нет, Spawn ставит SOLID_BSP=4 |
| CCoFLadderManager | `101b1aa4` | `1004f380` | `1004f140` | Precache model; скрытие и SOLID_NOT находятся непосредственно в Spawn |

Новая [PE-проверка stairs](stairs-visibility-static.json) сохраняет RTTI type descriptor
`1021fb90`, complete-object locator `10201c24`, реальные значения слотов и байты
Precache-pointer. Остальные vtable проверены в [ladders-static.json](ladders-static.json).
Исходные тела доступны в `decompiled/server/partial-pass/functions/0x<address>.c`.

Ошибки переноса:

- У CFuncStairs была перенесена лишь часть Spawn, без вызова Precache, поэтому brush
  оставался видимым. Кроме того, SOLID_NOT отличался от исходного SOLID_TRIGGER.
  Исправление находится в серверной movement-системе.
- У CLadderControl логика скрытия была встроена только в Spawn и не снимала NODRAW
  при showtriggers!=0. Она перенесена в виртуальный Precache с обеими ветками, чтобы
  и повторная инициализация/восстановление использовали правильный метод.
- Скрытая CLadder не проходила SDK AddToFullPack: общий early return по NODRAW
  исключал ее из сетевого кадра. Серверная физика при этом продолжала видеть лестницу,
  а клиентская PM prediction не получала соответствующий physent.

Последний дефект исправляется узким исключением для SOLID_NOT+CONTENTS_LADDER.
Пакет сохраняет **EF_NODRAW** и iuser1; исключение не применяется к контроллерам
или другим триггерам. Это адаптация к исполняемому SDK/Xash-переносу: оригинальная
AddToFullPack `10018870`, подтвержденная DLL_FUNCTIONS `102119f8` slot39, проверяет
`effects == 0x80`, а не битовую маску. Не выдаем наше исключение за исходную ветку.

Оба используемых движка независимо разделяют physics и drawing:

- `external/xash3d-fwgs/engine/client/dll_int/cl_pmove.c` и соответствующий файл
  `external/xash-rt`: CL_AddLinksToPmove допускает скрытый SOLID_NOT/CONTENTS_LADDER
  в moveents; CL_CopyEntityToPhysEnt переносит iuser1.
- `engine/client/cl_frame.c` в обоих деревьях: CL_LinkPacketEntities пропускает
  любой EF_NODRAW перед добавлением сущности на отрисовку. Это действует до выбора
  OpenGL/RTX renderer. Для OpenGL есть также вторичная проверка в gl_rmain.c.

Runtime fixture теперь проверяет обе ветки showtriggers, видимый spawnflag обычной
лестницы и непосредственно AddToFullPack: скрытая лестница проходит с неизменным
NODRAW/skin/iuser1, скрытый контроллер не проходит. Модель для этой синхронной проверки
берется из уже предзагруженного player model; временные поля сразу возвращаются.
Эта проверка сетевого поведения не заменяет визуальную проверку.
