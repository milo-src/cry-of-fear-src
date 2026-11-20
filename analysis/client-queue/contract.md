# Client queue: input → view/model motion

Статический разбор 16 сохранённых функций оригинального `client.dll`. Новых REA запросов, запуска игры, тестов порта и изменения ресурсов не было. Карточки находятся в `notes.json`; `evidence.json` хранит SHA256 исходного DLL, cached listing, использованных C и семи извлечённых ASM диапазонов. Все байты ASM диапазонов сверены с PE; это не runtime/pixel verification.

## Карта владения состоянием

| Entry | Подтверждённая роль | Основное состояние |
|---|---|---|
| `1001d4c0` | HUD_PlayerMove → `10015650`, затем ground flag/friction | PM pointer `101ad6e8` |
| `1001d4d0` | HUD_PlayerMoveInit → `10011bf0`, `10012e40` | PM pointer, ready `101ad6f0` |
| `10078520` | keyboard pitch/clamps | key states, angle cvars |
| `1007b0e0` | joystick axes → usercmd/viewangles | mapping/deadzone/sensitivity tables |
| `1007b580` | mouse deltas → usercmd/viewangles/camera offsets | cursor accumulators, camera state |
| `1007c9f0` | **Telescope** message, четыре SHORT | entity `105436d8`, center/bounds |
| `100709a0` | IronSights model offset/active flag | HUD+291c..2924, +2934 |
| `100af250` | ground horizontal velocity bob | phase `10559680`, value/time cache |
| `100af160` | idle sine additions to viewangles | shared idle multiplier/axis coefficients |
| `100b1f60` | viewentity/velocity → roll helper | добавляет только camera roll |
| `100af400` | viewmodel angle composition | render/curstate/latched angle copies |
| `100ae9a0` | local spring impulse | velocity `10559620..28` |
| `100b2140` | MP spring / SP magnitude decay | caller-owned punch, shared velocity |
| `100ae850` | by-value vector spring variant | stack vector, shared velocity, отдельный clamp |
| `100adec0` | lazyweapon direction history lag | history `10559614..1c` |
| `100ad9d0` | motion sway/model/hand composition | globals `10559590..9c`, model fields |

Экспорты PM не являются новой независимой физикой. Основное движение делегируется `10015650`; postprocessing экспорта устанавливает/снимает bit `0x200` по onground и нормализует friction при SP WALK. Обязанности двух init helper пока не раскрыты; им не присвоены привычные SDK имена по сходству места вызова.

## Input и два различных сообщения камеры

Keyboard helper меняет pitch при klook, ограничивает pitch/roll; yaw здесь не меняется. Lookup/lookdown читаются, но в этом body только вызывают stop-drift helper при ненулевом значении. Это важное отличие от автоматически переносимого стандартного SDK алгоритма.

Joystick обрабатывает шесть mapping entries с раздельными deadzones, sensitivities и absolute/relative angular scales. Mouse обрабатывает накопленный cursor delta относительно window center, optional averaging, sensitivity и integer truncation. Оба завершают обычный SetViewAngles лишь при разрешающем state; mouse имеет дополнительные Telescope и attached-camera accumulators. Не все глобальные guards семантически названы: `101b2f10` диапазон1..4 сам по себе не доказывает конкретное GUI состояние.

`1007c9f0` — **Telescope**, что доказано registration ASM и PE literal `10150300`, а не именем папки capture. Пакет — `SHORT entity, SHORT x, SHORT y, SHORT z`, signed reader `10080a10`; координатного деления на8 здесь нет. Entity=-1 выключает pointer, остальные значения идут через GetEntityByIndex. Устанавливаются center и X/Y bounds±20; mouse reader отдельно интегрирует offsets pitch[-60,30],yaw[-60,60]. Эти два набора ограничений нельзя смешивать. Функция не является CameraZoom и не интерполирует FOV.

IronSights `100709a0` читает `COORD×3, BYTE, BYTE`: первый byte игнорируется, второй включает offsets либо обнуляет их. Для общего HUD `1018a0c0` active flag получается `1018c9f4`. Он прямо подавляет motion/lazyweapon effects ниже. Сам reader не применяет FOV, не проверяет reader bad flag и не доказывает назначение игнорируемого byte.

## View/model цепочка

Сохранённый main view `100af790` (`graphics-client-fog-waterlevel/000-pseudocode.c`) связывает рассмотренные функции: bob `100af250`, velocity roll `100b1f60`, idle `100af160`, viewmodel angles `100af400`, local decay `100b2140`, затем motion composition `100ad9d0` и lazy direction lag `100adec0`. Этот порядок описывает прочитанные вызовы, но не означает, что все ветви выполняются в каждом frame.

`ref_params_t` layout привязан к локальному SDK header: frametime+3c,time+40,onground+50,simvel+58,cl_viewangles+80,crosshairangle+90,punchangle+a0,viewentity+b0,movevars+cc. Engine table — копирование101DWORD в `101b2608` из Initialize (`graphics-studio-draw-routing/003`), сопоставленное с `cdll_int.h`: GetViewAngles2690,SetViewAngles2694,GetMaxClients2698,GetViewModel26d8,GetEntityByIndex26dc,GetClientTime26e0. Это адресное основание имён API, а не предположение по типу вызова.

Bob advances phase только на земле и при новом time, сохраняет предыдущий результат в воздухе. Формула `A*(0.3+0.7*sin(theta))`, A=horizontal speed*cl_bob, итог[-7,4]; theta имеет две части по cl_bobup. Регистрация и PE defaults: cl_bobcycle0.8,cl_bob0.01,cl_bobup0.5. Названия и значения сохранены в evidence, они не заимствованы из текущего config порта.

Idle добавляет три sine колебания в camera angles. Viewmodel angle composer использует crosshair+camera, вычитает idle (pitch вполовину), добавляет половину ref.punchangle и дополнительные guarded corrections. Итог копируется в три набора model angle fields; это синхронизация representations, не три независимых эффекта.

Motion composer использует два basis: входные model angles и camera cl_viewangles; добавляет motion globals и hand-dependent yaw/roll. Cached caller ASM доказывает семь аргументов, включая model/hand, хотя decompiler caller теряет часть аргументов. Lazyweapon изменяет origin по исходной разности current forward/history; history сглаживается и нормализуется отдельно. Threshold0 отменяет видимый origin/angle результат, но не уже выполненное обновление history.

## Два local spring helper не эквивалентны

`100ae9a0` добавляет `(-pitch,+yaw,+roll)*20` в velocity `10559620..28` при точном guard `10542bc0==0 ||10542bc4>0`. Это не прямая запись viewangles.

`100b2140(dt,float* punch)` действительно in-place. При GetMaxClients()>1:

```
punch += dt*velocity
velocity *= max(0,1-9*dt)
velocity -= clamp(65*dt,0,2)*punch
clamp punch to (±89,±179,±89)
```

Ветка выполняется только при length(punch)>.001 или length(velocity)>.001. При SP вместо этого нормализует punch и задаёт длину `max(0,L-(.5*L+10)*dt)`; velocity в этом пути не изменяется. Main view вызывает helper на `105595b4..bc`. Нельзя автоматически отождествлять этот vector с PM/ref_params punch.

`100ae850` принципиально иной: ASM передаёт интегрируемый vector **по значению на stack** `[EBP+8..10]`, а ref pointer находится в `[EBP+14]`. Формула меняет эту копию и общую velocity. После неё clamp выполняется над отдельными globals `105595b4..bc`; copyback интегрированной stack vector в globals отсутствует в полном сохранённом body. Его live caller/назначение остаётся открытым. `void(void)` Ghidra здесь не является ABI.

Scalar sine `100f8320` также имеет ошибочно пустую C сигнатуру: XMM0 double input/output и fallback `10119b5f` с FSIN сохранены и byte-verified. Cosine `100f8160` ранее доказан отдельно в `analysis/graphics/studio-chrome-contract.md`; math helper IDs не добавлены фиктивными C карточками.

## Конкретные границы следующего чтения

- `10011bf0`, `10012e40`: два PM initialization helper, в выбранных C есть только вызовы.
- `100b1870`: точная velocity roll projection/clamp; текущая карточка честно описывает wrapper.
- `100ae110`: источник motion globals перед composer; нужен отдельный body, а не название по месту вызова.
- `100ff550`: точная nonlinear joystick curve, включая exponent/ABI. `1007be70`, `1007bb20` — backend/mapping setup/read boundaries.
- `1007bbb0`: GUI-conditioned mouse action; recenter имя пока не установлено данным scope.
- `100ae850`: live callers и смысл stack/global mismatch; нельзя исправлять бинарник или порт на основании одного подозрительного pseudo.

Это конечные границы данного пакета, не утверждение об отсутствии функций/ветвей в программе. Runtime delivery, input feel, graphical equivalence и полнота реконструкции здесь не проверялись.
