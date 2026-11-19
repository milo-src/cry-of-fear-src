# Клиент: ввод, prediction, здоровье и stamina

Статический разбор `client.dll`, SHA-256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`,
preferred image base `0x10000000`. Адреса ниже — VA этой версии, не универсальные
имена функций. DLL не запускалась. Новые C-выборки находятся в
`decompiled/client/captures/movement-client-pass1`, `movement-client-pass2`,
`movement-client-pass3`; сохранённый ограниченный дизассемблер — в
`analysis/movement/client-static`, с командами и хешем в `capture.json`.

Это описание наблюдаемого клиентского поведения. Расход/регенерация stamina,
урон и серверная проверка команд этим документом не устанавливаются.

## Поток управления

1. Зарегистрированные `+forward/+jump/+duck/+sprint/+dodge` изменяют структуры
   кнопок. Некоторые обработчики также отправляют текстовые команды серверу.
2. `CL_CreateMove` (`1007a880`) собирает расширенный `usercmd` размером `0x38`.
3. `HUD_PlayerMove` (`1001d4c0`, переход к `10013b70`) запускает клиентскую PM
   симуляцию через `10015650`. Это самостоятельный путь от HUD-индикации.
4. `HUD_ProcessPlayerState`, `HUD_TxferLocalOverrides`,
   `HUD_TxferPredictionData` переносят сетевое/предсказанное состояние.
5. `Health`, `Damage`, `Stamina`, `Ladder`, `FallOver`, `Wheelchair` обновляют
   отдельные поля HUD/ввода. Рисование шкалы не является реализацией механики.

## Ввод и команды

Регистрации: `graphics-client-first/007-pseudocode.c`. Базовая структура кнопки:
два идентификатора удерживаемых клавиш (`+0`, `+4`), маска состояния (`+8`):
`1=held`, `2=pressed`, `4=released`.

`KeyDown` (`1007a780`) принимает номер клавиши из аргумента консольной команды,
использует `-1` при пустом аргументе, хранит максимум две физические клавиши.
Повторное нажатие той же клавиши игнорируется; третья выдаёт диагностику.
Первый переход в held делает `state |= 3`.
`KeyUp` (`1007a7f0`, asm) снимает соответствующий слот; пока второй удерживается,
кнопка остаётся активной. Без аргумента очищает оба слота и ставит `state=4`.

`KeyState` (`10078840`) выдаёт долю кадра: held без переходов `1`, новое
нажатие `0.5`, нажатие+отпускание с конечным released `0.25`, оба перехода с
конечным held `0.75`, released/неактивная `0`. После чтения сохраняет только bit0.
Это дискретные коэффициенты, не измеренное время удержания.

| Действие | Структура кнопки | Маска в usercmd.buttons | Особенности |
|---|---|---|---|
| Forward | `10543420` | `0x0008` | double-tap и явный dodge могут отправить `dodgeforward` |
| Back | `1054342c` | `0x0010` | Используется CL_CreateMove |
| Move left/right | `10543450/1054345c` | `0x0200/0x0400` | sidemove из cl_sidespeed |
| Jump | `1054348c` | `0x0002` | При FallOver вместо обычного прыжка считает tapgetup |
| Duck | `105434c8` | `0x0004` | Заблокирован FallOver и вторым сетевым gate |
| Sprint | `10543474` | `0x1000` | `+sprint` отключён на точном `maps/c_nightmare.bsp` |
| Dodge | `10543528` | `0x0080` | Есть также текстовые dodge-команды |

Маски доказаны `10078670`; таблица не присваивает им все стандартные HL-имена.
Эта функция собирает `(state & 3) != 0`, при аргументе `1` снимает press-bit
с перечисленных кнопок. **У dodge `10543530` в списке очистки нет**:
не следует незаметно исправлять это при совместимом переносе.
`0x8000` дополнительно включается при HP<1 или `1018f648 != 0` и ещё по
значению engine helper; точный смысл последнего условия пока не установлен.

`+forward` (`10078f50`) не работает при `1018cb58 != 0` (FallOver) или
`101b2f10 != 0` (поступает из entity.vuser4.x; семантика ещё не доказана).
В отдельном debug-режиме изменяет `105594f4` на `+0.25` и возвращается.
В обычном пути обновляет кнопку и вызывает `10076a20(8)`.
Double-tap: `now < 1018d284`, cvar `cl_nodoubletapdodge == 0`,
gate `10559515 != 0`; затем deadline обновляется до `now + 0.18`.
Отдельный путь при удержанном dodge и том же gate может послать вторую
`dodgeforward` в одном вызове. Gate похож на возможность уклонения/опору,
но источник байта в этой выборке не разобран: **не утверждаем, что это onground**.
При `10542bc0 != 0` отправляются также `forwardpressed` / `forwardreleased`.

`+jump` (`10079200`): при FallOver увеличивает `10542bac`; начиная с порога
`10542ba8` отправляет `tapgetup` на каждом вызове (сброс здесь отсутствует).
Затем отдельный gate `101b2f10`; debug-режим меняет `105594f8` на `+0.25`.
Обычный путь KeyDown и `10076a20(2)`. `+duck` (`10078ee0`) имеет те же два
блокирующих gate, debug меняет `105594f8` на `-0.25`, обычный helper получает `4`.
Назначение `10076a20`/`10076bc0` не выведено только из их числовых аргументов.

`CL_CreateMove` масштабирует forward/back/side/up соответствующими cvar;
при удержанном dodge и gate `10559515` отправляет первую подходящую команду
в порядке forward → backward → right → left. Число кадров удержания может
влиять на число команд; клиент не доказывает серверную частоту исполнения.
Сбрасывает импульс/выбор оружия после записи, собирает buttons,
может снять attack-bit по `1000b960`, ограничивает yaw/pitch вокруг
`1018d238`/`1018d23c`/`1018d240` при `1018d228 != 0`.

`1007bad0` вызывает `1007b580` при двух gate, затем всегда `1007b0e0`.
Это дополнительный input dispatch; тела дочерних функций пока не разобраны,
поэтому назвать каждую mouse/joystick обработкой только по шаблону SDK нельзя.
`1007ada0` точно выдаёт engine Key_Event на изменениях кнопок и POV:
POV `0/9000/18000/27000` отображается в четыре бита, `0xffff` означает отсутствие.

## HP, stamina и связанные сообщения

READ_BYTE=`100808b0`; READ_SHORT=`10080a10`; READ_LONG=`100809b0`;
READ_COORD=`10080910`, signed little-endian SHORT / 8.
Начало reader=`10080850`. Названия восстановлены по реализации, не по
неопределённым типам Ghidra. **10080a10 не READ_LONG**.

| Сообщение | Функция тела | Последовательность wire-полей | Действие |
|---|---|---|---|
| Health | `1006bfe0` | BYTE HP, BYTE index, BYTE mode | локальный HP и/или массив игроков |
| Damage | `1006bf10` | BYTE, BYTE, LONG damage bits, COORD x/y/z, BYTE extra | damage indicators и короткий таймер |
| Stamina | `1003a360` | BYTE value, COORD duration | panel+1000 и красный overlay |
| HealthCap | `10039a70` | BYTE variant | выбор комплекта health TGA 0/1/2 |
| Ladder | `10070ac0` | BYTE state, COORD x/y/z | HUD+2a94, +2ab0/+2ab4/+2ab8, timestamp+2aac |
| FallOver | `1006fcc0` | BYTE state, BYTE tapsRequired | HUD+2a98, taps threshold, обнуление counter |
| Wheelchair | `10071c90` | SHORT entityIndex, BYTE flag | special entity pointer либо отдельный latch |

Регистрации Ladder/FallOver/Wheelchair есть в `inventory-ui-first/005-pseudocode.c`;
Wheelchair `1006ed30 → 10071c90` подтверждён сохранённым asm. Health registration
`1006bd60 → wrapper1006c350 → 1006bfe0` задаёт ECX `1018d634`.
Для Health необходим непустой local-player pointer; иначе возвращается 0.
При mode=0 включает active-bit HUD, при mode!=0 проверяет **local index** на
диапазон [0,maxClients], пишет `this+0x34+4*messageIndex`; если messageIndex не
local, возвращается без изменения локального HP. В этой функции отдельной
проверки границ **messageIndex** не видно. При изменении локального HP ставит
float `this+0x30=100`, записывает `this+0x14=HP` (`1018d648`), вызывает `10098000`.
Следовательно сетевой HP здесь байтовый; трактовать его как полный integer
серверного здоровья без исследования отправителя нельзя.

Damage передаёт bits в `1006c130`, при extra!=0 ставит `1018a3e8=now+0.15`,
при положительном одном из первых двух байтов вызывает направленный helper
`1006ba00(source)`. Первые два поля по SDK напоминают armor/blood, но порядок
и игровой смысл нужно сверить с отправителем. Это не вычитание HP в клиенте.

Stamina value хранится в панели, duration>0 ставит deadline `now+duration`;
duration<=0 **не сбрасывает предыдущий deadline**. Полная шкала и обрезаемая
empty-накладка имеют область 11×118, clipping `int((100-value)*1.18)`.
Во время deadline красная накладка имеет transparency128, после него +15
за вызов solve до255 (инверсная VGUI transparency, не alpha=opacity).
HealthCap меняет картинки, а не формулу деления процентов. Подробные
координаты и видимость уже записаны в `analysis/ui/hud.md`.

Wheelchair при flag!=0 ставит byte `10542bb2=1` и возвращается; этот путь
не меняет entity pointer и **в данной функции latch не очищается**.
При flag=0 индекс<1 даёт pointer0, иначе GetEntityByIndex, затем сброс
`10559500/105594fc`. Pointer хранится в `10542bb8`; влияет на cmd angles,
special cmd fields и скрытие stamina. Latch `10542bb2` заставляет health display
показывать0. Это отдельный механизм от общего HP и FallOver.

## PM и prediction

`HUD_PlayerMoveInit` export `1001d4d0 → 10012e10` устанавливает global pmove
`101ad6e8`, вызывает `10011bf0/10012e40`, ставит initialized `101ad6f0=1`.
`10013b70` присваивает pmove, вызывает `10015650(server!=0)`, синхронизирует
FL_ONGROUND `0x200` с `pmove+e0 != -1`, в singleplayer WALK сбрасывает friction=1.

`10015650` записывает server flag, вызывает параметры `10010dc0`, обнуляет
numtouch+45490, получает frametime из byte cmd.msec+4545a ×0.001, обновляет
таймеры и угловой базис. Spectator или положительный iuser1 выводят в отдельный
путь. Обычный путь проверяет stuck/categorization, ищет ladder `10013570` при
не-dead и без flag0x1000000; найденный объект передаётся `10013680`.
WALK=3: водяной/наземный/воздушный пути; Jump=`10013160`, WalkMove=`10016ba0`,
AirMove=`10010670`, Duck=`10012050`. FLY=5, NOCLIP=8, TOSS/BOUNCE=6/10
обрабатываются отдельно. Этот dispatcher не содержит сам формул прыжка,
ускорения и движения по ladder: нужны тела перечисленных функций.

Отдельное сравнение `analysis/movement/prediction-comparison.json` установило
совпадение нормализованных тел трёх пар: Jump `client10013160/server10006520`,
CheckParameters `client10010dc0/server10004170`, WalkMove
`client10016ba0/server10009e50`. Это сравнение декомпилированных тел после
переименования адресных символов, не проверка равенства бинарных байтов или
всей PM-системы. Dispatcher отличается: клиент после поиска ladder зеркалит
`bInDuck(+90) != 0 || (flags+b8 & 0x4000) != 0` в global `1055b5c8`, устанавливая
его0/1 только при отличии. Это **1055b5c8**, не initialized-флаг101ad6f0.

`HUD_ProcessPlayerState` (`1004c4a0`) переносит entity fields; для local player
кеширует spectator/health/iuser1..3 и собственные vuser-поля. В частности,
`101b2f10=(int)state.vuser4.x`, блокирующий ввод. Само значение и источник
нельзя назвать stamina/death/ladder только по этому чтению.

`HUD_TxferLocalOverrides` (`1004dd40`) переносит client origin, iuser1..4,
vuser1..4 в entity state и вызывает fog helper10060a10.
`HUD_TxferPredictionData` (`1004de00`) сохраняет oldbuttons/fall velocity/
step-left/spectator; viewmodel/ammo/weapon/fov/deadflag и custom client fields.
`1018f724=0` только при `(previous.iuser1==0 && previous.deadflag!=0)`, иначе1.
Это управляет сохранением текущих/прошлых cmd angles; не точная копия HP test.
Копируется weapon-data block длиной `0x2e0 DWORD = 2944 bytes`.

`HUD_PostRunCmd` (`1006c760`) **в данной реализации** зануляет `to+1b4`,
сохраняет указатель to и вызывает `1006c710`: кеширует eye position как
`to.entity.origin(+10/+14/+18) + to.client.view_ofs(+188/+18c/+190)`.
Сопоставление локальному SDK даёт `to+1b4=client+60`, где в SDK расположен FOV
(weaponanim находится +64). До восстановления оригинального layout безопасное
имя этого действия — запись0 по смещению1b4, а не сброс анимации оружия.
Полной HL weapons post-think в этом коротком теле нет. Сигнатура декомпилятора
с двумя используемыми аргументами не отменяет ABI экспортной функции.

`HUD_UpdateClientData` (`1001d530`) вызывает обработку joystick transitions
`1007ada0`, затем `10078070`: кеширует origin/viewangles, читает buttons без
сброса press, вызывает HUD think10073610, меняет выходной FOV и передаёт кнопки
helper100788f0. Назначение всех полей HUD think не установлено этим wrapper.

## Ограничения ABI для восстановления

- Оригинальный usercmd очищается на **0x38**, локальный SDK usercmd_t имеет
  обычный layout до +30, размер **0x34**. Дополнительный DWORD+34 необходимо
  сохранить отдельно, не писать за буфер SDK.
- `cmd+30` получает 0/1 по special entity pointer; предыдущая запись z тут же
  перекрывается. `cmd+0c`, обычный roll, принудительно становится0/1 по полю
  helper-object+1787c. Передавать эти поля как обычную геометрию ошибочно.
- clientdata в prediction включает +1dc, тогда как показанный локальный SDK
  заканчивает vuser4 на +1d8. Требуется сверка полного engine/client ABI.
- Размер блока weapon-data2944 не совпадает с предположением64 стандартных
  структур по88байт (`weaponinfo.h`). Нельзя выбрать количество слотов наугад.
- Captures могут запрашивать export thunk, а Ghidra вернуть тело по другому VA:
  `1001d4c0→10013b70`, `1001d4d0→10012e10`. В notes основной адрес — тела;
  экспортная связь указана явно.
- Double/float10/undefined4 и неявный ECX в C — артефакты декомпиляции;
  поля и wire-порядок подтверждены действиями, не типами сгенерированного C.

## Что остаётся неизвестным

Серверные расходы/регенерация stamina, HP cap и cooldown dodge описаны в соседнем
серверном анализе. Оставшиеся вопросы клиентской части: custom vuser4.x; точный
специальные camera flags (обычная FOV-интерполяция разобрана ниже); дополнительные режимы mouse/joystick input;
смысл extra DWORD usercmd+34 и точный расширенный layout weapon_data/clientdata.
Следующие адреса для целевого чтения: `10013680`, `10013570`, `10012050`,
`10010670`, `1007b580`, `1007b0e0`, `10076a20`, `10076bc0`.
Jump/CheckParameters/WalkMove (`10013160/10010dc0/10016ba0`) исследуются отдельной
симметричной выборкой с сервером; здесь сохранён факт сравнения, а формулы
описаны в серверной/физической части анализа.

## Нативная реализация в репозитории

`src/cof/client/movement.cpp/.h` и `tools/prepare_movement_client.py` подключают
ввод и сообщения к собираемому SDK. Transform работает только с disposable
деревом `build/game*-source`, исходный SDK и оригинальные ресурсы игры не меняет.
`status_hud.cpp` сохраняет прежние шкалы и получает reset на ResetHUD/InitHUD.

Реализованы `+sprint/-sprint`, `+dodge/-dodge`, directional double-tap с окном
0.18с, jump/duck gates при FallOver и camera attachment, сообщения Health,
Stamina, HealthCap, FallOver, HoldBreath, Ladder, AttachCam и CameraZoom.
Серверные проверки и расход stamina выполняет серверный movement-модуль.
Исходные скорости forward/back/side по строке `1014fb80` равны230; stock SDK
умножение движения на `cl_movespeedkey` и предварительный GetClientMaxspeed
clamp удалены: CoF использует clientmaxspeed как процент в PM-коде.
Существующая привязка `+speed` стала совместимым alias для `+sprint`.

Передаются обычные поля `usercmd_t` SDK; оригинальное расширение0x38 и скрытые
flags в roll/impact_position не копируются. Повторный аудит восстановил
client gate10559515: отправка dodge требует onground и выключенного noclip;
кнопка dodge при этом может удерживаться в воздухе. Stamina/cooldown остаются
серверными проверками. Исправлено залипание короткого dodge
tap: его pressed-bit после сборки команды очищается. Health принимает3байта
CoF и legacy1байт, Damage —12 или13, FallOver —1 или2; остальные обработчики
отклоняют неверную длину до чтения. Health с mode!=0 проверяет message index,
что строже оригинального reader. Remote player HP пока не отображается отдельной
таблицей; обновление локальной шкалы реализовано.

Лестничная камера использует native entity marker `iuser4=0x434f46`,
`vuser1=world eye`, `vuser2=view angles`; это **новый безопасный транспорт порта**,
а не утверждение об оригинальной ABI. Пакует поля серверный ladder-модуль,
runtime delta готовит `tools/prepare_movement_protocol.py`. До появления этих
полей возможен fallback на client attachment0/позицию камеры. Viewmodel скрывается
при attachment, finishladder снимает local camera/input state. CameraZoom
передаёт постоянную скорость перехода к серверному SetFOV, не FOV50;
повторная выборка10073610 восстановила интерполятор и float HUD output (ниже).

Нормальная Waf-сборка и изолированный movement smoke с `-nosound` прошли:
`COF_MOVEMENT_CLIENT_COMPLETE failures=0`, включая проверки wire lengths,
signed COORD, HP index, stamina deadline, sprint/dodge bits, FallOver блокировки
и границы SDK usercmd. `COF_MOVEMENT_CAMERA_APPLIED ... network_eye=1` подтвердил
доставку и применение сетевого положения головы. Это runtime assertions,
**не визуальная проверка**. Итоговый повторный прогон x86 и RTX x64 также прошёл,
включая shared PM на клиенте и сервере и переход ввода через меню.

Оставшиеся ограничения: HoldBreath reader подключён, но отдельная scoped-rifle
механика ожидает реализации оружия; расширенные camera flags пока не перенесены.
Лестница получает forward/back press/release команды. Открытие меню/инвентаря
или потеря active ввода посылает release обоих направлений один раз; возврат
посылает press только ещё удерживаемых кнопок. Тест вызывает настоящий обработчик
перехода с перехватом сетевых команд и проверяет отсутствие повторных отправок.


## Повторный аудит ощущения движения (2026-11-19)

Прочитаны ещё 12 тел из того же неизменённого client.dll; сохранены точные C и
capture metadata в `decompiled/client/captures/movement-client-view-audit`,
`movement-client-spring-audit` и `movement-client-spring-core`. Это статическое
чтение, оригинальный DLL не исполнялся. Выборки последних двух core-функций
запрашивали внутренние адреса100ae875/100b21d2, реальные начала100ae850/100b2140.
`analysis/movement/client-view-audit/capture.json` также фиксирует ограниченную
ассемблерную выборку10011eb0 и прочитанные PE-литералы.

**Подтверждённые расхождения и исправления.** В100af790 поле ref_params+50
проверяется вместе с callback101b26d0. Позиция callback в engine table соответствует
IsNoClipping; ref_params+50 — onground. Xash выдаёт здесь bool, не номер ground
physent. Глобальный10559515 включается только на земле вне noclip. Клиентская
реализация теперь не отправляет airborne dodge; сохранено удержание +dodge в
воздухе, чтобы после приземления сработала обычная проверка. Runtime suite
перехватывает настоящий SendDodge и проверяет отсутствие сетевой команды в
воздухе и прохождение наземного/noclip gate. Интеграционный isolated smoke после
исправлений прошёл в ordinary x86 и RTX x64; см. runtime-verification.json.

PE-default forward/back/side230 не означает настройки установленной игры:
оригинальные config.cfg/autoexec.cfg задают forward300, back200, side200 и
sv_maxspeed300. Это важное различие default строки и фактического gameplay;
runtime migration выполняет основной prepare_game, а не клиентский reader.

**Spring и prediction.**10011eb0 (парная серверная10005260) интегрирует
pmove.punchangle из pmove+234..23c, то есть SDK vuser3. Формула:
`punch += dt*velocity; velocity *= max(0,1-9*dt);
velocity -= clamp(65*dt,0,2)*punch`, затем pitch/roll ограничены±89, yaw±179.
Порог длины обоих векторов0.001; death присваивает velocity.z670. Это shared-PM
состояние, которое стандартный Xash уже переносит между pmove и clientdata,
а HUD_TxferPredictionData уже копирует все четыре vuser. Обычный view получает
предсказанный punchangle через ref_params. Дополнительная клиентская пружина
или CofPunch message для singleplayer поэтому не нужны.

100ae9a0 — отдельный local impulse helper: velocity +=(-pitch,+yaw,+roll)*20.
100b2140 имеет **разные** ветви: singleplayer использует старое уменьшение
длины локального punch, multiplayer — локальную пружину с коэффициентами9/65.
Нельзя переносить MP-ветку поверх SP-PM и удваивать движение камеры.

Для будущего включения SDK CLIENT_WEAPONS необходимо освободить все оси vuser3:
старый hl_weapons.cpp использует vuser3.z как secondary ammo TYPE. Disposable
transform переносит только TYPE в client.fuser4, согласованно с сервером,
и добавляет fuser4 в HUD_TxferPredictionData. vuser4.z — secondary ammo COUNT,
он остаётся на месте. Сейчас CLIENT_WEAPONS=OFF, поэтому этот конфликт был
латентным; перенос защищает выбранный ABI от будущего включения prediction.
Обновление clientdata delta и серверного UpdateClientData выполняет сервер/PM
часть интеграции. Не следует переносить expanded entvars+280 буквально в SDK.

**Что не заменено без необходимости.**100af250 воспроизводит SDK bob: горизонтальная
скорость, cl_bob, период cl_bobcycle/cl_bobup, смесь0.3+0.7*sin и clamp[-7,4].
100af160 — привычный idle sine;100b1f60 — velocity roll. Ступени в100af790
сглаживаются150 units/s с18-unit пределом, как в SDK. Это не доказательство
визуального тождества всего view: оружейный sway100ad9d0/100adec0 и расширенные
камерные режимы отдельны. Найденные дополнительные отличия keyboard-only
+left/+right/+lookup/+lookdown от SDK в этой правке не изменены; основной
восстановленный вклад в jump/landing feel находится в shared-PM spring.


## Исправление sprint FOV и короткого Alt (2026-11-19)

**Причина резкого FOV найдена в реальном пути движка.** Старый порт записывал
ref_params.fov_x/fov_y внутри CalcRefdef. Но Xash V_GetRefParams после вызова
CalcRefdef заново вычисляет проекцию из cl.local.scr_fov и не читает эти поля.
Следовательно прежнее сглаживание вообще не влияло на обычный кадр. Кроме того,
его zoomActive мог погаснуть, если CameraZoom пришёл до следующего SetFOV:
старые current90/target90 совпадали, затем target95 менялся без интерполяции.

Native10078070 записывает в client_data_t+1c **float** CHud+3124. Новая выборка
`movement-client-fov-think/000-pseudocode.c` (10073610) восстановила обновление
этого float. CameraZoom100393d0 (в `movement-client-fov-audit/000-pseudocode.c`)
сохраняет COORD в CHud+3144; это постоянная скорость, не одноразовая активация.
Два BYTE сохраняются в отдельных полях, второй при ненулевом значении отмечает
время; обычная sprint-ветка посылает оба0. В CHudThink они не участвуют.

Формула при обычной цели90/95: шаг=dt*rate*max(30,abs(target-current))/30,
без overshoot. Для90→95 rate50 даёт90.5 через0.01с и95 через0.1с. Rate0 выбирает
cl_zoomspeed (PE-default100); rate666 мгновенно достигает цели. При zoom30 или
выходе из завершённого zoom30 коэффициент удваивается. В оригинале некоторые
малые значения сетевого target трактуются как режимы (2→60,3→30); наш порт
получает обычный абсолютный SetFOV и не вводит чужие режимные номера в SDK ABI.

Transform теперь вызывает CofMovementFov из HUD_UpdateClientData и передаёт
результат через cdata->fov, оставляя gHUD.m_iFOV целочисленной серверной целью.
Xash применяет aspect/widescreen projection после этого ровно один раз. Поэтому
90 base на16:9 остаётся примерно106.26° горизонтально, а первый sprint-step
90.5 base становится примерно106.74°; подстановка raw90 вместо wide106 исключена.
Rate сохраняется при отсутствии новой цели, прекращение бега95→90 идёт тем же
путём. Новая сцена/сброс времени переинициализируют накопленное состояние.

Alt связывается с +dodge (конфиг исправляет основной prepare_game). Удержание
Alt с WASD уже повторяло directional command, сервер ограничивал cooldown.
Недоставленный случай — очень короткое нажатие/отпускание между двумя CreateMove:
kbutton.state6 содержит pressed impulse, но старое условие проверяло толькоheld.
Теперь при held **или** pressed передаётся directional dodge, затем pressed
очищается. Это явная поправка доставки короткого ввода в порту: оригинальный
capture проверяетheld, а пользователь ожидает нажатие и удержание. При
отсутствии направления dodge не выдумывается; gate ground/noclip сохранён.

Runtime suite дополнена проверками вызванного настоящим HUD FOV hook,
CameraZoom длины/COORD50, отложенной цели,90.5 first-step, монотонного достижения95,
плавного возврата94.5 и widescreen-проекции. Для всех четырёх направлений
перехватываются команды: короткий Alt отправляет ровно одну, удержание повторяет
попытки с серверным cooldown. Тесты сохраняют/восстанавливают всё затронутое
состояние, не отправляют fixture-ввод в реальную сеть и не касаются desktop.
Обе Waf-сборки (normal x86 / RTX x64) установлены и прошли изолированный
--movement smoke с -nosound; все новые проверки PASS. Аудиты модулей PASS.
Это числовая/протокольная проверка, не визуальное сравнение с оригиналом;
SHA-256 и результаты сохранены в runtime-verification.json.

Jump при пустой stamina блокируется общим PM через серверный physics key.
Клиентский JumpDown специально не фильтрует по шкале HUD: это сломало бы
swimming, unlimited stamina и tapgetup при FallOver.
