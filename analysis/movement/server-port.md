# Серверный перенос движения и здоровья

Исходники: `src/cof/server/movement.cpp/.h`; интеграция только в disposable SDK — `tools/prepare_movement_server.py`. Оригинальные `hl.dll`, игровые ресурсы и vendored SDK не изменяются. Этот слой применяется одинаково для обычного и RTX рендера.

## Реализовано

- Spawn/restore и сериализация отдельных `m_cof*` полей: stamina, её таймеры и cache, очередь лечения, dodge cooldown, stumble, low-health, jump-height, nightmare, ограничения и adapter состояния оружия.
- Sprint при IN_RUN=0x1000, stamina start cost5, обычные/nightmare шаги расхода и восстановления, crouch regen, задержка истощения5/10с и seed0.1. Порядок отрицательных значений, clamp и exhaustion сохранён.
- Значения `sk_primary/secondary/sprint/stair_speed[1..4]` передаются как процент в `pev->maxspeed`. Общая PM-физика применяет процент, а не SDK velocity cap.
- Серверный Jump вызывается через обычный `CBasePlayer::Jump`, использует фронт IN_JUMP, стоимость15 без собственного stamina threshold, исходные grounded/water guards и conveyor momentum. Вертикальную скорость задаёт shared PM.
- Текстовые команды dodgeforward/backward/left/right вызывают реальный handler с ценой15, cooldown1с, направлением±600, сохранением z и штатными запретами.
- `func_stairs` сохраняет brush model и MOVETYPE_PUSH; overlap проверяется раз в0.1с. Stairs ограничивает скорость и вызывает FallOver при входе бегом. Для нескольких пересекающихся объёмов используется OR отдельно для каждого игрока.
- Landing сохраняет исходную формулу `(speed−580)*100/444`, пропуск урона в воде, FallOver до TakeDamage и исключение брони. Multiplayer больше не подменяет формулу SDK fixed10 damage.
- HP sender выдаёт3 байта HP/index/multiplayer; Stamina —BYTE+COORD; HoldBreath, HealthCap и CameraZoom подключены к клиенту. Stock Damage пока остаётся12байт: значение13-го байта не доказано достаточно для изменения sender.
- `CofMovementQueueHeal` и `CofMovementQueueSyringe` обеспечивают очередь HP+stamina с максимум5 за вызов, перезапись очереди и ограничение HP. **Сохранена подтверждённая ошибка оригинала:** last-heal является int, поэтому после дробной части секунды≥0.1 несколько последовательных кадров могут каждый выполнять шаг.
- Low-health boundary25 синхронизирует physics key `low`; `jh` и `slj` обновляются при spawn/restore. Heartbeat вызывается с интервалом1с.

## Отличия и незавершённые зависимости

Исследованные методы не означают, что вся игра восстановлена. Реальные CoF weapon reload/zoom state и сам syringe inventory/анимация ещё не восстановлены этим слоем. `CofMovementWeaponState` принимает уже известное состояние от будущих оружейных классов; он не читает выдуманные SDK byte-offsets. Пока оружейный adapter не включён, scope hold-breath не появляется сам. Очередь syringe имеет рабочий API и проверяется handler-тестом, но этот patch не создаёт новый предмет или бесплатную пользовательскую команду лечения.

Stairs occupancy в многопользовательском режиме и при пересечении нескольких объёмов сделана устойчивее оригинального single-player EHANDLE алгоритма. Точный authored shape заменён тем же AABB принципом; это не collision reconstruction самого brush.

FallOver отправляет второй байт0: у исходного stumble/reset sender был только один байт, тогда как клиент безусловно читал два. Новый sender намеренно устраняет короткий payload. Полноценная интерактивная анимация get-up пока отсутствует; tapgetup распознаётся без изменения таймера. `fuser3=1` принадлежит stumble, лестничный manager использует3; stumble cleanup не очищает чужое состояние.

Сохранены SDK системы TakeHealth/TakeDamage и смерти, но исправлены доказанные armor exclusions и native HP wire format. Не добавлялись неизвестные режимные множители monster damage, оригинальные weapon hitgroups, все сюжетные HP overrides, оригинальные байты immortality/disable flags и morphine-trip эффекты. Точные CBasePlayer binary offsets не применяются к новой компоновке класса.

Механизмы crouch/death/water в SDK могут дополнительно менять движение. Sprint выполняется после ItemPostFrame, чтобы оружейный ResetMaxSpeed не перезаписал процент. Для frozen/scripted movement и `fuser3!=0` старт sprint/dodge дополнительно блокируется; это защита интеграции с восстановленными лестницами/дверями.

## Проверка

`tests/cof/server/movement_runtime_tests.inc` активируется только `COF_MOVEMENTTEST=1`. Он вызывает те же игровые handlers для sprint, exhaustion, прыжка, dodge-команд, лечения, low-health, stairs, hold-breath adapter и landing; проверяет последствия, а не копию формулы в отдельной тестовой модели. Затем вызывает shared `CofPMRunTests()`.

Тест работает в выделенной игровой сессии smoke runner с изолированным desktop и `-nosound`; сам код теста не создаёт видимые окна, не переключает desktop и не посылает ввод пользователю. Маркер завершения: `COF_MOVEMENT_TEST_COMPLETE failures=0`. Итоговый статус сборки/runtime фиксирует основной отчёт интеграции; наличие этого файла само по себе не означает, что runtime-проверка уже прошла.

Интегратор подтвердил нормальную x86 Waf-сборку и изолированную runtime-проверку: `COF_MOVEMENT_TEST_COMPLETE failures=0`, shared PM также PASS. При последующем review обнаружена отсутствовавшая передача `pev->fuser3` в `clientdata`: серверный PM видел stumble/climb state, а клиентский predictor получал0. В preparer добавлена эта передача и отдельная проверка реального `UpdateClientData` packet; после неё обе сборки повторно прошли изолированный smoke, включая этот packet assertion. В итоговую сборку включена также синхронизация HoldBreath/FallOver при HUD init. Jump-disable пока относится к server action guard; поле не имеет пользовательского setter, а общий запрет PM осуществляется `fuser3`.
