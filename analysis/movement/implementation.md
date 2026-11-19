# Перенос механик игрока в нативную игру

2026-11-19. Общий игровой код используется в обычном и RTX-режимах.
Это реализация по контрактам `FUNCTION_CATALOG.txt`, а не загрузка оригинальных
DLL. Оригинальные BSP/MDL/WAD и установленная игра не редактируются.

## Где менять механику

| Область | Рабочий код | Контракт / пояснения |
|---|---|---|
| Общая PM-физика | `tools/prepare_movement_physics.py` | `physics.md`; меняет только disposable `pm_shared.c`, который компилируется в обе DLL |
| Стамина, HP, бег, прыжок, dodge, падение, stairs | `src/cof/server/movement.cpp`, `.h` | `health-stamina.md`, `server-port.md` |
| Ввод, протокол, FOV, камера | `src/cof/client/movement.cpp`, `.h`; `status_hud.cpp` | `client.md` |
| Обычные и анимированные лестницы | `src/cof/server/ladders.cpp`, `.h` | `ladders.md`, `ladder-port.md` |
| SDK hooks и save fields | `tools/prepare_movement_server.py`, `prepare_movement_client.py`, `prepare_movement_ladders.py` | вызываются в конце `prepare_game.prepare()` |
| Сетевой адаптер камеры / ladder gate | `tools/prepare_movement_protocol.py` | генерирует отдельный runtime `delta.lst`, сохраняет hashes в `movement-protocol.json` |
| Настройки и установка | `tools/stage_movement.py`; `runtime/autoexec.cfg`, `runtime/config.cfg` | только `out/`; прежние forward200/230 мигрируют в300 один раз, остальные настройки сохраняются |

В собственной конфигурации `sv_maxspeed=300`, как в установленном CoF autoexec.
Рабочий `cl_forwardspeed=300`, back/side200 взяты из установленного CoF config.cfg.
Бинарный default230 не является скоростью после загрузки конфигурации; прежний
перенос ошибочно использовал его. `pev.maxspeed` — процент: primary75, secondary45,
sprint125, stairs50. Старое ограничение client usercmd этим процентом удалено.
Shift через существующий `+speed` теперь является алиасом `+sprint`.

## Включённое поведение

- Общая физика: асимметричная диагональ, sprint без sidemove, процент wishspeed,
  low-HP замедление, air acceleration, `jh`-прыжок, crouch600ms, ladder90 и
  отпрыгивание270. SDK collision/slide/step остаётся общей основой обеих сторон.
  Вода также использует процент скорости, sprint снимает множитель0.8;
  contents−19 исключён из swimming. Cadence шагов получает asd/bsd/csd из
  серверных cof_*steptime, включая асимметрию low-health.
- Сервер: onset бега−5, расход2 по tick, восстановление1/2, задержка истощения,
  Nightmare интервалы, FOV90/95, jump−15, dodge−15 и cooldown, HP100, low<25,
  queued heal с подтверждённым целочисленным временем, fall damage и stumble.
  Jump/dodge/stumble и приземление используют восстановленную PM-пружину камеры,
  а не прямой скачок punchangle. Клиентский dodge разрешён только на земле вне noclip.
- Лестницы: `func_ladder`, `func_laddercontrol`, `cof_ladder_manager`, endpoints,
  `camera_model`, штатные анимации вверх/вниз, команды направления, возврат камеры,
  cleanup при отмене/смерти/невалидной последовательности. Сетевой глаз вычисляется
  по attachment модели на сервере и передаётся клиенту.

## Исправление видимых служебных объёмов

`func_stairs::Spawn` ранее пропускал виртуальный Precache оригинала1010eed0:
SOLID_NOT не скрывал его модель. Восстановлены SOLID_TRIGGER и EF_NODRAW при
showtriggers=0, включая Precache после восстановления сохранения. Для
func_laddercontrol восстановлены обе ветки showtriggers. Скрытые обычные
лестницы отправляются клиентской физике с сохранением EF_NODRAW; их отбрасывание
stock AddToFullPack раньше разъединяло серверное и предсказанное лазание.
Доказательства: `trigger-visibility-audit.md`, `stairs-visibility-static.json`.
Runtime-тесты используют реальную BSP-модель и обе ветки AddToFullPack, чтобы
невидимость не оказалась ложноположительной из-за отсутствующей модели.

## Сборка и проверка

Обычный runtime:

```powershell
python waf configure build install
python tools/stage_movement.py --runtime out/runtime
python tools/audit_runtime.py
python tools/smoke_rtx.py --renderer normal --movement --timeout 70
```

Полная RTX-сборка по существующему Waf pipeline:

```powershell
python tools/build_rtx.py
python tools/smoke_rtx.py --renderer rtx --movement --timeout 100
```

`--movement` запускает настоящие обработчики в загруженных DLL с тестовыми
состояниями: общий PM на обеих сторонах, расход/regen/HP, payload sizes и gates,
реальные Think/анимационные длительности лестницы, transport камеры, затем
небольшое движение игрока. Тесты включаются только environment-переменными;
обычная игровая сессия их не выполняет. Все автоматические запуски идут через
изолированный desktop с `-nosound`, без ввода на рабочем столе пользователя.

Отчёты: `analysis/local/normal-c_sdkmap1-movement-isolated.json` и
`analysis/local/rtx-c_sdkmap1-movement-isolated.json`, рядом полные логи.
Итоговый прогон обеих Waf-сборок прошёл: PM server/client PASS, movement server,
movement client и ladder COMPLETE failures=0; network_eye=1 и реальное движение
игрока подтверждены. Проверены также передача fuser3 и переход ввода через меню.
Повторный прогон после регрессии прошёл в обоих режимах: скрытие/отладочная
видимость stairs с BSP-моделью, скрытая ladder в prediction, spring impulse
и clientdata, cadence, water wishspeed и grounded dodge. Аудиты модулей также PASS.
После уточнения прыжка/камеры/Alt обе сборки снова прошли smoke: нулевая
стамина блокирует прыжок в server и shared PM, float HUD FOV сглажен, короткий
Alt и удержание проверены по всем четырём направлениям. Аудиты модулей PASS.
Переносимая сводка с SHA-256 установленных DLL: `runtime-verification.json`.
Проверка не является визуальной оценкой и не сравнивает кадры/траектории с
оригинальным CoF. Эталон — восстановленные числовые контракты.

## Границы переноса

После уточнения управления добавлен запрет наземного прыжка при пустой шкале:
stamina<1, включая служебный запас0.1 при истощении. Это явное правило порта
по запросу пользователя: в изученных native Jump/PM_Jump/клиентском вводе
порог15 не найден, поэтому возможность прыгнуть с1..14 очками сохранена.
Сервер передаёт admission через physinfo `cof_jb`; PreThink фиксирует его до
списания15 за принятый прыжок, PostThink обновляет для следующей команды.
Обе стороны PM запрещают импульс и фиксируют oldbuttons: удержание Space во
время восстановления не создаёт бесплатный прыжок. Всплытие и отпрыгивание с
лестницы остаются отдельными ветками. Unlimited stamina обходит пустую шкалу.
В runtime/config и существующие runtime добавляется исходная привязка Alt→+dodge.

Оружейные блокировки sprint/hold-breath доступны через явный адаптер
`CofMovementWeaponState`, без вымышленных private offsets оригинала.
Очередь лечения работает, но это ещё не реализация предмета/анимации морфина.
Не все сюжетные/кооперативные damage overrides, специальные режимы, hitgroups,
trip-анимации и неизвестные поля состояния восстановлены. Сохранение полей
и восстановление камеры подключены; полный сценарий save/load mid-climb пока
не проверен отдельным runtime-тестом. Подробные отличия перечислены в
`server-port.md`, `ladder-port.md` и разделе реализации `client.md`.


Звуки ladder: см. ladder-port.md, раздел исправления2026-11-19. Восстановлены
client studio5090/5093/5094, курсор кадров с Play serial и owner-only camera PVS
исключение. В обоих runtime24 события полного подъёма/спуска точно совпадают
с оригинальной моделью; -nosound означает проверку dispatch, не прослушивание.
