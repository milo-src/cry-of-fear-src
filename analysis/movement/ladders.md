# Лестницы Cry of Fear: два независимых механизма

Статическое исследование серверного `hl.dll`, SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Игра не запускалась; оригинальный DLL, ресурсы и экспортированные C-файлы не изменялись.
Это описание наблюдаемой реализации, а не восстановленный компилируемый исходник.
Адреса — VA исследованного DLL, не RVA. Названия без экспортного символа являются
предлагаемыми. Важные привязки классов проверены RTTI/vtable и таблицами сохранения,
а неоднозначные вызовы — ограниченными дизассемблированными диапазонами.
Первичные дополнительные данные: [ladders-static.json](ladders-static.json).

## Разделение систем

| Система | Сущности | Движение | Вход и выход |
|---|---|---|---|
| Обычная brush-лестница | `func_ladder`, `func_laddercontrol` | PM physent с `skin=-16`, FLY, проекция ввода вдоль плоскости | Touch разрешает лестницу через `iuser1=0`; прыжок отталкивает на 270 |
| Анимированное карабканье CoF | `cof_ladder_manager`, `cof_ladder_manager_use`, `cof_ladderend_top/bottom` | Игрок заморожен, управление перемещает `camera_model` и проигрывает последовательности | Use запускает камеру; по завершении игрок переносится к endpoint +37 по Z |
| Дополнительный маркер | `cof_ladderclimb` | В рассмотренной Spawn-функции движения нет | Потребитель этого маркера пока не установлен |

Нельзя реализовать `cof_ladder_manager` только изменением PM скорости обычной лестницы:
у него собственные поля сохранения, камера, сообщения клиенту, шаги анимации и точки выхода.

## Фабрики и виртуальные методы

Экспортированные фабрики выделяют private data, привязывают `pev` и vtable. Они сами
не реализуют процесс лазания. Сопоставление подтверждено RTTI из DLL.

| Экспорт / VA | Класс, размер | vtable | Spawn | Precache | Use |
|---|---|---|---|---|---|
| `cof_ladder_manager` `10050010` | CCoFLadderManager, `1b4` | `101b1aa4` | `1004f380` | `1004f140` | `1004fb50` |
| `cof_ladder_manager_use` `10050020` | CCoFLadderManagerUse, `184` | `101b1ca8` | `1004f3e0` | `1004f170` | `1004fe80` |
| `cof_ladderend_bottom` `10050030` | CCoFLadderEndBottom, `dc` | `101b1f04` | `1004f2e0` | inherited | inherited |
| `cof_ladderend_top` `10050040` | CCoFLadderEndTop, `dc` | `101b1de4` | `1004f330` | inherited | inherited |
| `cof_ladderclimb` `100aa3e0` | CCoFLadderClimb, `dc` | `101c7b20` | `1009d070` | inherited | inherited |
| `func_ladder` `10115ce0` | CLadder, `180` | `101e2928` | `101108e0` | `1010ef30` | inherited |
| `func_laddercontrol` `10115cf0` | CLadderControl, `188` | `101e2a4c` | `10110920` | `1010efc0` | inherited |

Значения размеров/offset в таблицах шестнадцатеричные. Слоты vtable: Spawn `+2c`,
Precache `+30`, KeyValue `+34`, Save `+38`, Restore `+3c`, ObjectCaps `+40`, Use `+e8`.
`1004fe80` — **Use**, а не Touch, несмотря на пространственный характер brush-объекта.
Дубли локальных фабрик: `1004e410/1004e470/1004e350/1004e3b0/1008fec0/10107ad0/10107b30`
в том же порядке. Это отдельные тела с тем же назначением, не семь новых механик.

## CoF: авторские поля и конфигурация

Таблица сохранения менеджера `10212620` хранит 23 записи; реальные имена особенно
полезны для реконструкции, поскольку они не придуманы по соседним инструкциям.

| Offset от this | Имя из DLL | Роль |
|---|---|---|
| `dc`, `dd`, `e0` | m_bFinishedOnLadder, m_bEnableControl, m_flControlEnableTime | Запрет обработки ввода, ожидающий выход, время выхода |
| `e4`, `e8` | m_bDescending, m_sPreviousAnimation | Направление и предыдущая последовательность |
| `ec`, `f0`, `f4`, `f8` | m_sCustomOffAnimation, m_sCustomOnAnimation, m_sCustomOffDescendAnimation, m_sCustomOnDescendAnimation | Замены анимаций |
| `fc`, `104` | m_eTopEnt, m_eBottomEnt | EHANDLE точек выхода |
| `10c`, `110` | m_sTopEnt, m_sBottomEnt | Имена targetname для ленивого разрешения |
| `114`, `118` | m_pPlayer, m_iDescendOffset | Участник и начальная вертикальная поправка при спуске |
| `11c`, `120` | m_flLowerTime, m_bDoLower | Отложенное понижение камеры на 48 |
| `121`, `122` | m_bOriginReductionQueuedPrevious, m_bOriginReductionQueuedNext | Поправки между направлениями |
| `124`, count 33 | m_cAnimation | Массив pooled string_t последовательностей |
| `1a8`, `1ac`, `1b0` | m_bGotOnButNotDescended, m_iNumAnimations, m_iCurrentAnimation | Состояние входа, число заданных ключей, текущий индекс |

KeyValue `1004e4d0` принимает `animation1`…`animation30`, `customoff`, `customon`,
`customoffd`, `customond`, `descendoffset`, `topent`, `bottoment`. Индекс 1 начинается
с `this+128`; массив имеет также нулевой элемент. Число анимаций увеличивается при
обработке ключей, а не вычисляется как максимальный индекс. В сохраненном псевдокоде
ветка `animation13` записывает строку, но не увеличивает счетчик: это открытый вопрос
для отдельной проверки инструкций, а не исправленная нами ошибка игры.

Save `1004f220` вызывает базовую запись и записывает эти 23 поля; Restore `1004f1a0`
читает их. Не путать направления. Для объекта Use отдельно сохранены
`m_sMaster +17c`, `m_flNextUse +180` (таблица `10212790`, Save `1004f280`, Restore `1004f1e0`).

Manager Spawn `1004f380`: precache model, SetOrigin, `solid=0`, NODRAW, нулевой
v_angle, текущий индекс не меньше 1. EndTop/Bottom и `cof_ladderclimb` Spawn похожим
образом делают скрытую нетвердую точку. Это не доказательство отсутствия потребителей
маркерных сущностей в других частях игры.

ManagerUse Spawn `1004f3e0`: precache noise, SOLID_BSP=4, MOVETYPE_PUSH=7, SetOrigin,
SetSize, SetModel; время следующего использования и frame обнуляются.
ObjectCaps `1004f120` возвращает 8 (сопоставление SDK: FCAP_IMPULSE_USE).

## CoF: вход через Use и камера

`1004fe80` проверяет activator, IsPlayer, master (`10119060`), cooldown и ONGROUND.
Проигрывает `pev.noise`, если задан. Если `spawnflags&1` и есть target, находит цель
и допускает вызов при `(int)(player.z-target.z) <= 40`; передает значение 0.
В обычной ветке передает `(float)pev.iuser1`. Затем FireTargets вызывает цель
с USE_TOGGLE=3, activator/caller=player. Cooldown становится `time+1`, даже если
в ветке проверки высоты вызов цели не состоялся. Это односторонняя проверка высоты,
не абсолютное расстояние и не проверка горизонтальной близости.

`1004fb50`, CCoFLadderManager::Use:

1. Требует ненулевой activator и model менеджера, получает CBasePlayer.
2. Блокирует определенное состояние активного `weapon_flare` либо `weapon_dualweapon`
   со slot ID 13: находит предмет ID 13 и проверяет его `pev.iuser1`. Сообщение DLL:
   «Нужно выбросить вспышку, прежде чем лезть туда». Называть это общей блокировкой
   любого оружия было бы неверно.
3. `m_bDescending = (value != 0)`. UseType не определяет направление в этом теле.
4. Сохраняет player; `100deff0(player,0)` ставит FL_FROZEN `1000` и обнуляет скорость.
5. Создает `camera_model` с origin/angles менеджера и owner=player, сохраняет в
   player `+5ac`. Индекс анимации: 1 для подъема, m_iNumAnimations для спуска.
6. Если камера создана, задает model и origin, при спуске добавляет descendoffset
   к camera.z; EHANDLE player `+388` указывает на камеру, копируется в `+5c0/+5c4`.
   Посылает AttachCam: SHORT camera entity index, BYTE 1.
7. Ставит игроку GODMODE `40` и NOTARGET `80`, owner менеджера указывает на игрока.
   Устанавливает Think `1004ed40`, первый вызов через 0.1 и вызывает `1004f470`.

Вызов `1004f470` выполняется и при начальном спуске: это обработка входной анимации,
поэтому название «Up» здесь не означает, что игрок уже движется вверх. При отказе
создания камеры Think все равно назначается; надежное восстановление управления
в этом случае рассмотренным путем не доказано.

Server ClientCommand `10018d60` принимает `forwardpressed/forwardreleased`,
`backpressed/backreleased` и ставит/снимает биты 8/16 у **camera_model.pev.button**.
Это реальный мост ввода для анимированной лестницы. Think не читает здесь PM usercmd.
SetupVisibility `1001eaa0` использует player `+5ac` как сущность обзора, что важно
для видимости из камеры; полный клиентский обработчик AttachCam этим отчетом не восстановлен.

## CoF: шаги, время и направление

`1004ed40` сначала обслуживает m_bDoLower: при `time > m_flLowerTime` опускает
камеру на 48. Если завершение еще не разрешено, после `time > pev.teleport_time`
и при `!m_bFinishedOnLadder` обрабатывает биты 8 и 16 двумя отдельными `if`:
forward → descending=0 → `1004f470`; back → descending=1 → `1004f780`.
Оба могут сработать за один Think. Переназначает Think с delay=0; частота зависит
от серверного планировщика, здесь нет обоснования для конкретного FPS.

`1004f470`, условное имя AdvanceUpOrMount:

- queuedNext снимается и вызывает camera.z -=48, устанавливает общий байт
  `DAT_10222e4c`. При индексе >1, подъеме и отсутствии `climb_loop_down` в previous
  камера поднимается на 48, кроме поправки этого байта и GotOnButNotDescended.
- Выбирает m_cAnimation[current]. Сравнения `1013f5f0` являются **strstr**,
  а не strcmp: проверяется вхождение `climb_end`, `up`, `climb_loop_down`.
- При подъеме конец с `climb_end`+`up` может заменяться customoff. При входе со
  спуском аналогичная проверка выбирает customond. Ветка customon внутри
  descending!=0 дополнительно требует descending==0; это противоречие подтверждено
  [ladder-up.asm](ladder-up.asm), а не исправлено предположением о намерении автора.
- Устанавливает последовательность камеры через `100c20c0`, запоминает имя.
  Продолжительность берется `1000f3e0` из studio sequence: `(numframes-1)/fps`,
  либо 0 при слишком малом числе кадров. Не заменять постоянной скоростью.
- Начальный descending сбрасывается; выставляются GotOnButNotDescended и queuedPrevious.
  Если старая descending=0 и индекс==count, назначает выход после продолжительности.
  При старой descending=0 увеличивает индекс. Нулевая длительность дает
  `Unable to find delay`, полноценный recovery не установлен.

`1004f780`, AdvanceDown:

- Сначала уменьшает индекс, снимает GotOnButNotDescended; queuedPrevious дает -48 Z.
- Если выбранный элемент содержит `climb_end`, может **изменить элемент массива**
  на customoff/customoffd в зависимости от descending.
- При индексе >1 проигрывает `climb_loop_down`; иначе `climb_end_down` или customoff[d].
- В обеих ветках дополнительное -48 Z выполняется, когда previous **содержит**
  `climb_loop_down` (`strstr != 0`). Это отличается от условия в AdvanceUp.
- При индексе <=1 назначает восстановление управления на time+duration даже после
  предупреждения о нулевой длительности. В верхней ветке при duration=0 выходит раньше.

Нормальные переходы можно описать как Ready → FrozenCameraMount → WaitingAnimation →
InputStep → WaitingAnimation → DetachAndPlace. Этот граф описывает устойчивый путь,
но не заменяет точные условия полей; отдельного enum состояния в этих телах не найдено.

## CoF: завершение

Когда `m_bEnableControl && player && time > m_flControlEnableTime`, Think:

1. Вызывает EnableControl(1), снимающий FL_FROZEN; удаляет camera_model и обнуляет
   player `+5ac`, очищает EHANDLE `+388`.
2. Посылает AttachCam SHORT 0, BYTE 0; снимает GODMODE/NOTARGET; отправляет
   клиентскую команду `finishladder\n`. Предыдущее состояние этих двух флагов не восстанавливается.
3. По descending выбирает верхний или нижний EHANDLE; если невалиден, ищет targetname.
4. Если endpoint найден: SetOrigin(player, endpoint.origin + (0,0,37)); переносит
   angles, обнуляет basevelocity и velocity, устанавливает yaw обзора и fixangle,
   снимает ONGROUND. Без endpoint шаг переноса пропускается, но detach уже произошел.
5. CameraZoom: WRITE_COORD 50.0, BYTE 0, BYTE 0; записывает 90.0 в player.pev+274.
   Последнее поле здесь оставлено по offset: его нельзя автоматически называть
   стандартным `pev.fov` только по числу 90.
6. Если задан manager.target, FireTargets(target,player,player,USE_TOGGLE,0).
   Снимает m_bEnableControl.

## Обычные brush-лестницы

Precache CLadder `1010ef30`: `solid=0`, `skin=-16`, NODRAW зависит от showtriggers
и spawnflags&1; **iuser1 устанавливается 1 в обеих ветках**. Spawn `101108e0`
привязывает brush model и MOVETYPE_PUSH=7.

CLadderControl Precache `1010efc0`: SOLID_TRIGGER=1, видимость через showtriggers,
очистка cached EHANDLE. Spawn `10110920` задает model, MOVETYPE_PUSH=7, Think через
0.1 и callback Touch. Здесь нет создания camera_model и переходов CoF manager.

Touch `1010d970` требует FL_CLIENT, базовый фильтр `10109c40`, IsPlayer и CBasePlayer.
Ищет target по имени. Если активного предмета нет, разрешает target лестницу
записью `target.pev.iuser1=0`. Если предмет есть, требует нулевых полей item+1f0
и item+1c8. Их точные имена не установлены: нельзя без дополнительного анализа
подменять их «двуручным оружием», «перезарядкой» или «под водой».
При отсутствии target/сущности выводит разные mapper errors.

Think `1010d890` каждые 0.1 вызывает EntitiesInBox с буфером 32 и FL_CLIENT.
В аргументы передаются `pev+dc/+e8` (mins/maxs), не absmin/absmax. Если игроков
нет, разрешает cached targetname и ставит лестнице `iuser1=1` — отключает PM выбор.
Геометрическую интерпретацию этих bounds для origin-bearing brush нужно проверять
на конкретных картах, а не молча заменять на abs bounds.

## PM: обнаружение и физика

`10006930`, PM_FindLadder: перебирает `pmove.nummoveent (+20f50)` и moveents
`+20f54`, stride `e0`. Требует model!=0, callback GetModelType(model)==0,
`physent.skin(+64)=-16`, `physent.iuser1(+90)!=1`. Получает hull и offset,
проверяет point=player.origin-offset; HullPointContents != CONTENTS_EMPTY(-1)
возвращает первый подходящий physent. При отсутствии возвращает NULL.
В экспортированном C стоит ошибочное `void`: [pm-find-ladder.asm](pm-find-ladder.asm)
доказывает `mov eax,esi` на успешном пути и `xor eax,eax` при отсутствии.

`10006a40`, PM_LadderMove:

- В NOCLIP=8 ничего не делает. Из model bounds и physent.origin вычисляет центр,
  ставит MOVETYPE_FLY=5 и gravity=0. Проверяет contents на точке под ногами:
  origin.z + player_mins[usehull].z -1.
- TraceModel от origin к центру дает normal. Только при fraction!=1 обрабатывает ввод.
- Forward/back дают +/-90; move right/left +/-90. Прыжок (button2) переключает
  WALK=3 и ставит velocity=normal*270. Без направлений обнуляет velocity.
- Для желаемого вектора `wish=forward*f + right*s`: `into=dot(wish,n)`,
  `perp=normalize(cross((0,0,1),n))`, `vertical=cross(n,perp)`,
  `velocity=(wish-n*into)-vertical*into`. При contents под ногами SOLID(-2)
  и into>0 добавляет normal*90 для отхода от плоскости.
- При fraction==1 остается установленным FLY/gravity0, а новый velocity в этой
  ветке не записывается. Дальнейшее поведение определяется диспетчером.

PM dispatcher `10008a00` вызывает поиск и обработку лестницы перед switch movetype.
Таким образом связь Control Touch → entity iuser1 → physent iuser1 → PM_FindLadder
объясняет разрешение обычной лестницы. Детальная схема переноса сетевых полей и
клиентский prediction должны сверяться отдельно, не считаться доказанными одним Touch.

## Открытые вопросы для точного воспроизведения

- Изучить actual studio models/sequence tables и карту, связывающую manager, Use и
  endpoints; имеющиеся тела не определяют полный набор карт и анимаций.
- Восстановить клиентские AttachCam/finishladder/CameraZoom и ввод, включая отмену,
  смерть, загрузку сохранения в середине шага. Рассмотренный happy path их не доказывает.
- Установить потребителя `cof_ladderclimb`, имена weapon+1c8/+1f0 и player.pev+274.
- Проверить ветку animation13 в инструкциях, границы индекса при повторных/пропущенных
  ключах, при одновременном forward/back и при отсутствии модели/endpoint.
- `DAT_10222e4c` — общий байт, а не поле экземпляра. Для кооператива нельзя переносить
  его в per-player state без осознанного отличия от найденной реализации.
- Не объявлять `m_bFinishedOnLadder`, m_bDoLower и queuedNext полностью понятными:
  читатели и metadata найдены, но полный набор записывающих путей не прослежен.

## Первичные ссылки

Файлы исходного экспорта лежат в `decompiled/server/partial-pass/functions/0x<VA>.c`.
Ключевые тела: [Think](../../decompiled/server/partial-pass/functions/0x1004ed40.c),
[Manager Use](../../decompiled/server/partial-pass/functions/0x1004fb50.c),
[Use brush](../../decompiled/server/partial-pass/functions/0x1004fe80.c),
[Up](../../decompiled/server/partial-pass/functions/0x1004f470.c),
[Down](../../decompiled/server/partial-pass/functions/0x1004f780.c),
[KeyValue](../../decompiled/server/partial-pass/functions/0x1004e4d0.c),
[Control Think](../../decompiled/server/partial-pass/functions/0x1010d890.c),
[Control Touch](../../decompiled/server/partial-pass/functions/0x1010d970.c),
[PM Find](../../decompiled/server/partial-pass/functions/0x10006930.c),
[PM Move](../../decompiled/server/partial-pass/functions/0x10006a40.c).
Символы экспортов: [hl.csv](../exports/hl.csv). Сопоставление стандартных констант
можно проверить по локальному `external/hlsdk-portable/common/const.h`; это reference SDK,
а не доказательство происхождения всего кода CoF. Проверочные assembly диапазоны
и их raw-byte hashes записаны в ladders-static.json.
