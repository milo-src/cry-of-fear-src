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
| Настройки и установка | `tools/stage_movement.py`; `runtime/autoexec.cfg`, `runtime/config.cfg` | только `out/`; старый forward200 мигрирует в230 один раз, остальные настройки сохраняются |

В собственной конфигурации `sv_maxspeed=300`, как в установленном CoF autoexec.
Из бинарника восстановлен default `cl_forwardspeed=230`; back/side200 сохранены
по игровому autoexec. `pev.maxspeed` — процент: primary75, secondary45,
sprint125, stairs50. Старое ограничение client usercmd этим процентом удалено.
Shift через существующий `+speed` теперь является алиасом `+sprint`.

## Включённое поведение

- Общая физика: асимметричная диагональ, sprint без sidemove, процент wishspeed,
  low-HP замедление, air acceleration, `jh`-прыжок, crouch600ms, ladder90 и
  отпрыгивание270. SDK collision/slide/step остаётся общей основой обеих сторон.
- Сервер: onset бега−5, расход2 по tick, восстановление1/2, задержка истощения,
  Nightmare интервалы, FOV90/95, jump−15, dodge−15 и cooldown, HP100, low<25,
  queued heal с подтверждённым целочисленным временем, fall damage и stumble.
- Лестницы: `func_ladder`, `func_laddercontrol`, `cof_ladder_manager`, endpoints,
  `camera_model`, штатные анимации вверх/вниз, команды направления, возврат камеры,
  cleanup при отмене/смерти/невалидной последовательности. Сетевой глаз вычисляется
  по attachment модели на сервере и передаётся клиенту.

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
Переносимая сводка с SHA-256 установленных DLL: `runtime-verification.json`.
Проверка не является визуальной оценкой и не сравнивает кадры/траектории с
оригинальным CoF. Эталон — восстановленные числовые контракты.

## Границы переноса

Оружейные блокировки sprint/hold-breath доступны через явный адаптер
`CofMovementWeaponState`, без вымышленных private offsets оригинала.
Очередь лечения работает, но это ещё не реализация предмета/анимации морфина.
Не все сюжетные/кооперативные damage overrides, специальные режимы, hitgroups,
trip-анимации и неизвестные поля состояния восстановлены. Сохранение полей
и восстановление камеры подключены; полный сценарий save/load mid-climb пока
не проверен отдельным runtime-тестом. Подробные отличия перечислены в
`server-port.md`, `ladder-port.md` и разделе реализации `client.md`.
