# Движение и прыжок: контракт по бинарнику

Дата: 2026-11-19. Основной справочник — `decompiled/FUNCTION_CATALOG.txt`,
раздел `movement`. Это статический разбор конкретной сборки, не готовая
реализация и не подтверждение совпадения поведения в запущенной игре.

Сервер `hl.dll`, SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Все серверные тела ниже находятся в
`decompiled/server/partial-pass/functions/0xАДРЕС.c`; hashes/Evidence IDs
сохранены в `decompiled/server/partial-pass/index.json` и справочнике.
Адреса — preferred VA, не адреса ASLR процесса. Имена `PM_*` предложены по
телам и ABI, кроме явно экспортированных callbacks.

## Вход и порядок одного шага

`GetEntityAPI` выдаёт таблицу `0x102119f8`; слот 34 содержит `0x10006f30`
(`PM_Move` по DLL_FUNCTIONS ABI). Проверка таблицы и машинного кода:
`physics-evidence/capture.json`, воспроизводится `tools/capture_movement.py`.
Слот 35 — `0x100061d0` (init), 36 — `0x100056f0` (texture).

`10006f30(pmove, server)` сохраняет указатель в `10220c50`, вызывает
`10008a00(server != 0)`, затем синхронизирует `FL_ONGROUND=0x200` с `onground`.
В одиночной игре при `movetype=3` сбрасывает friction к 1.

`10008a00`:

1. `10004170` обрабатывает usercmd, ограничения и углы.
2. Сбрасывает число касаний, вычисляет `dt = cmd.msec * 0.001`, уменьшает
   таймеры (`10009000`) на `cmd.msec`, строит forward/right/up.
3. Spectator / положительный iuser1 идут в отдельную ветку. Для обычного
   движения проверяются застревание, земля и вода.
4. В воздухе сохраняет `fallVelocity = -velocity.z`.
5. Ищет физическую лестницу (`10006930`), обрабатывает шаги, приседание и
   движение по лестнице (`10006a40`). Это не менеджер анимированного CoF climb.
6. WALK=3: half-gravity; при обычном движении jump, ground-friction,
   AirMove или WalkMove, пересчёт земли, вычитание basevelocity,
   второй half-gravity, обнуление vz на земле, эффекты приземления.
   В воде отдельная ветка, включая water-jump.
7. FLY=5, NOCLIP=8, TOSS/BOUNCE=6/10 имеют свои ветки.

В теле Ghidra есть предупреждения `terminal call / fallthrough excluded`.
Поэтому маршруты проверены также по ограниченному disassembly
`physics-evidence/PM_PlayerMove.asm`. Не переносить вывод `void` или ранний
`return` декомпилятора как доказательство ABI целевой функции.

## Поля playermove и usercmd

Значения offsets наблюдаются в бинарнике. Названия полей сверены с
`deps/external/hlsdk-portable/pm_shared/pm_defs.h` и `common/usercmd.h`.
Это ABI-подсказка, не доказательство идентичности всех правил SDK и CoF.

| Offset от pmove | Тип / роль |
|---|---|
| `+04`, `+08`, `+10` | server, multiplayer, frametime |
| `+14`, `+20`, `+2c` | forward/right/up vectors |
| `+38`, `+44`, `+5c`, `+74` | origin, angles, velocity, basevelocity |
| `+88`, `+8c`, `+90` | view_ofs.z, duck timer, in-duck |
| `+94`, `+98`, `+9c` | step timer, step side, fall velocity |
| `+b8`, `+bc`, `+c0`, `+c4` | flags, hull, gravity scale, friction |
| `+c8`, `+cc` | oldbuttons, waterjumptime |
| `+d0`, `+d4`, `+d8`, `+dc` | dead, deadflag, spectator, movetype |
| `+e0`, `+e4`, `+e8` | onground (-1 = нет земли), waterlevel, watertype |
| `+1f4`, `+1f8` | maxspeed и clientmaxspeed; CoF использует второе как процент wishspeed |
| `+204`, `+214` | iuser3 / fuser3 по SDK; блокировки duck / jump и ветки WalkMove |
| `+45458` | начало usercmd (CoF size 0x38) |
| `+4545a`, `+45468`, `+4546c`, `+45470` | msec, forwardmove, sidemove, upmove |
| `+45476` | buttons, unsigned short |
| `+45490`, `+4f3f4`, `+4f4f4` | число touches, physinfo string, movevars pointer |

Нельзя считать `fuser3` исключительно лестницей: его также меняет состояние
падения/оглушения. Серверную связь и transport см. в соседних отчётах.

## Ограничение ввода, ходьба и ускорение

`10004170`:

- При `IN_RUN=0x1000` и flags `0x40000` обнуляет sidemove.
- Иначе при ненулевых forwardmove и sidemove умножает forwardmove на 0.5.
- Вектор `(forward,side,up)` ограничивает длиной `pm.maxspeed`.
- flags `0x1001000` или dead обнуляют все три оси и buttons.
- Обрабатывает view/punch angles; ветка `fuser3 >= 50` отличается от обычной.

`10009e50` (WalkMove) вычисляет горизонтальный wishdir, нормализует его и берёт
`wishspeed = length(forward*fmove + right*smove) * clientmaxspeed / 100`;
затем ограничивает `wishspeed` сверху `maxspeed`.
Если `atoi(physinfo["low"]) != 0` и sprint-flag `0x40000` отсутствует:
`wishspeed *= 0.75`; при `pm+0x98 != 0` ещё `*=0.75`.
Последнее поле соответствует `iStepLeft` SDK, поэтому нельзя переименовывать
эту дополнительную проверку в «приседание» без новых доказательств.

Ground-acceleration `10003670(dir,wishspeed,accel)`:

```text
missing = wishspeed - dot(velocity, dir)
if !dead && waterjumptime==0 && missing>0:
    add = min(missing, dt * accel * wishspeed * friction)
    velocity += dir * add
```

WalkMove передаёт `max(30,wishspeed)` в acceleration. Затем добавляет
basevelocity и трассирует перемещение. При препятствии сравнивает обычный
slide с подъёмом на `movevars.stepsize` и спуском: оставляет путь с большей
горизонтальной дистанцией, отбрасывая ступень при normal.z < 0.7.
Фиксированное «18 units» здесь не доказано: высота берётся из movevars.

`10003a20` (AirMove) использует тот же процент wishspeed, но вызывает
`10003960` (AirAccelerate):

```text
missing = min(wishspeed,30) - dot(velocity,dir)
add = min(missing, wishspeed * airaccelerate * dt * friction)
```

При `missing<=0` добавления нет. В правой части множитель именно исходный
wishspeed, а не его ограниченное 30 значение.

`10005ea0` (friction) при ненулевом waterjumptime ничего не делает.
На земле считает drop от `max(speed, movevars.stopspeed) * movevars.friction
* player.friction * dt`; при отсутствии опоры впереди добавляет множитель
edgefriction. Новая скорость `max(speed-drop,0)/speed` масштабирует velocity.

`10003730` и `10005810` вычитают по половине
`movevars.gravity * (player.gravity или 1 при нуле) * dt`.
Первая половина также прибавляет `basevelocity.z*dt` и обнуляет basevelocity.z.

`10005880` — ядро swept collision / скольжения по плоскостям: накапливает
touches, уменьшает оставшееся dt, клипует velocity к normal; floor criterion
normal.z > 0.7, wall criterion normal.z == 0. Детальная ABI возвращаемого
trace и всех collision flags ещё требует отдельного контрактного теста.

## Прыжок: `10006520`

Источники: одноимённый `.c`, `physics-evidence/PM_Jump.asm`.
Строки physinfo прочитаны из PE: `tfc`, `slj`, `jh` (capture.json).

1. `fuser3 != 0` блокирует обработку. Dead устанавливает oldbuttons bit2 и
   выходит. Сохранился guard `tfc==1 && deadflag==5`.
2. Ненулевой waterjumptime обслуживается отдельно. В воде уровня >=2
   (кроме contents -19) прыжок задаёт vz: water(-3)=100, slime(-4)=80,
   прочее=50. Swim sound timer = 5000ms.
3. На суше без земли ставит oldbuttons bit2 и выходит. Если bit2 уже был,
   новый прыжок не начинается. Отпускание jump очищает bit2 в dispatcher.
4. При принятом прыжке onground становится -1. `10008e70` ограничивает
   чрезмерную скорость: если speed > 1.7*maxspeed, масштабирует весь velocity
   на `(1.7*maxspeed/speed)*0.65`.
5. В обычном стоячем состоянии:

   `velocity.z = sqrt((atoi(physinfo["jh"]) << 4) * 45.0)`.

   Это integer conversion и сдвиг перед вычислением float. Не подменять
   произвольным коэффициентом прыжка. При штатном `jh=100` получается
   `sqrt(72000) ≈ 268.328` до half-gravity. `100f39e0` пишет player+0x2334 и
   физический ключ `jh`; spawn `100f4090` вызывает его со 100.
6. При duck/in-duck обычная вертикальная константа ≈268.328. Отдельная ветка
   longjump требует `slj==1`, IN_DUCK, duck timer>0, speed>50: горизонтально
   forward*350*1.6, вертикально ≈299.333, punch pitch=-5.
   Наличие ветки не означает доступность longjump в обычном прохождении.
7. В конце вызывает half-gravity `10005810`, ставит oldbuttons bit2.

Расход стамины не находится в этой PM-функции. Серверный обработчик прыжка
и расход нужно смотреть вместе с ней в `health-stamina.md`, иначе получится
физически похожий прыжок без правил CoF.

## Приседание и приземление

`10005400` хранит IN_DUCK в oldbuttons. При уже установленном DUCKING=0x4000
умножает три оси usercmd на 0.333. При нажатии задаёт duck timer 1000ms;
на земле интерполирует view offset, затем выбирает hull1, view z=12,
ставит DUCKING и корректирует origin по разнице mins hull0/hull1.
`100095b0` при отпускании трассирует свободное место; если полный hull
перекрыт, оставляет hull1. При успешном вставании: hull0, view z=28,
сброс DUCKING/timer/in-duck. Guards: dead, iuser3, fuser3.

`10003ef0` при приземлении использует fallVelocity для звуков и camera kick,
затем обнуляет его. Порог эффектов 350; вклад камеры
`min(fallVelocity,700)*0.42`. Это **не** расчёт потери HP: damage находится
на серверной стороне игрока.

## Проверка при последующем переносе

Сопоставлены сервер и клиент: Jump `10006520 ↔ 10013160`, CheckParameters
`10004170 ↔ 10010dc0`, WalkMove `10009e50 ↔ 10016ba0`. Сохранённый псевдокод
этих трёх пар совпадает после удаления комментариев/пробелов и согласованной
замены адресных меток FUN/DAT/LAB; числовые константы, строки и offsets
сохранены при сравнении. Результат и hashes: `prediction-comparison.json`.
Это не сравнение машинных инструкций и не доказательство равенства значений
всех адресованных globals. Dispatcher не совпал: клиент дополнительно
зеркалирует состояние duck в отдельный global; см. `client.md`.

Пока ни одного игрового запуска для этого разбора не было. Проверить позже:
одинаковые последовательности usercmd при разных msec; диагональ; начало и
конец sprint; airborne control; jump held/released; jh=100 и изменённый jh;
низкий потолок, duck-jump и выход из duck; лестница и прыжок с неё;
waterjump; stairs/edgefriction; landing damage отдельно от camera kick.
Для runtime-тестов действуют isolated-desktop и `-nosound` из AGENTS.md.
