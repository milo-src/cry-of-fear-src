# Исполняемый перенос лестниц

Реализация: `src/cof/server/ladders.cpp`; интеграция только в подготовленное дерево SDK:
`tools/prepare_movement_ladders.py`. Источник поведения и нерешенные поля перечислены
в [статическом исследовании](ladders.md). Оригинальные DLL и ресурсы не изменяются.

Экспортируются `func_ladder`, `func_laddercontrol`, `cof_ladder_manager`,
`cof_ladder_manager_use`, `cof_ladderend_top`, `cof_ladderend_bottom`,
`cof_ladderclimb`, `camera_model`. Обычная лестница использует PM projection и iuser1;
анимированная — замороженного игрока, studio camera, authored sequence durations,
шаги 48 единиц, направление по forward/back и выход в endpoint +37 Z.

На установленном ресурсе `models/ladder_climb.mdl` проверены реальные имена:
`climb_start_up`, `climb_loop_up`, `climb_end_up`, `climb_start_down`,
`climb_loop_down`, `climb_end_down`, а также авторские варианты выходов.
Продолжительности базовых последовательностей: 2.225/1.35/2.55 и
2.975/1.35/2.225 секунды. Они вычисляются из `(numframes-1)/fps`, а не задаются в коде.
Модель содержит четыре attachments; camera eye — attachment0,
attachment1 задает направление взгляда. В `c_avlopp.bsp` действительно присутствуют
менеджеры с тремя animation-ключами, model=`models/ladder_climb.mdl`, descendoffset=96
и customond/customoffd. Это проверка совместимости с имеющимися ресурсами, не
визуальная проверка игрового результата.

`AttachCam` передает SHORT entity index и BYTE enabled. Клиентский обработчик
принадлежит `src/cof/client/movement.cpp`; сервер также вызывает SET_VIEW и выбирает
камеру в SetupVisibility. `CofLadderPackCamera` передает eye world position и angles
через vuser1/vuser2 с iuser4=`0x434f46`. Это **новый протокольный адаптер проекта**:
`tools/prepare_movement_protocol.py` читает оригинальный delta.lst и генерирует
расширенную копию только в out/runtime[-rtx]/cryoffear. В entity_state_t добавлены
iuser1 (ordinary ladder prediction), iuser4 и два вектора. Другие таблицы сохраняются.
Рядом пишется manifest с SHA оригинала и результата. Исходный delta.lst не заменяется.

Для восстановления сохранений менеджер сохраняет EHANDLE player/camera/endpoints,
последовательности, индекс, таймер, направление и предыдущее состояние игрока.
После загрузки возобновляет Think; HUD initialization повторно передает AttachCam.
Spawn, Killed, Disconnect и удаление менеджера освобождают камеру. Команда
`laddercancel` позволяет прервать карабканье с возвратом управления в исходной
позиции игрока; обычное завершение переносит к верхней/нижней точке.

Сознательные отличия от исходного псевдокода:

- Проверяются диапазоны индексов, наличие последовательностей и camera attachments.
  Неполная конфигурация и отсутствие endpoint не оставляют игрока замороженным.
- Animation count вычисляется как максимальный индекс. Ошибка/неясность animation13
  и повторных ключей не воспроизводится.
- Прежние GODMODE/NOTARGET/FROZEN и HUD/fuser3 восстанавливаются. Два одновременных
  противоположных ввода не выполняют два шага в одном Think.
- customon применяется к начальной анимации подъема, вместо противоречивой ветки
  оригинала. При отсутствии customond используется существующая `climb_start_down`.
- Оригинальные неизвестные weapon+1c8/+1f0 и dualweapon item-ID поля не подменены
  выдуманными SDK полями; до восстановления оружия соответствующая проверка ограничена.
- `func_laddercontrol` использует abs bounds для корректной работы перенесенных brush
  сущностей; original mins/maxs и ограничение этого вывода сохранены в исследовании.
- Дополнительные исходные m_bDoLower/queuedNext пути не перенесены как вымышленные
  transitions: их писатели пока не восстановлены. `cof_ladderclimb` остается маркером
  согласно доказанному Spawn, а не альтернативным механизмом лазания.

Opt-in `COF_LADDERTEST=1` запускает engine-backed assertions через
`tests/cof/server/ladder_runtime_tests.inc`: обычный controller enable/disable,
реальные анимационные подъем/спуск, endpoint/yaw, сохранение флагов, отмена,
ошибочная последовательность и отсутствующая точка выхода. Тест начинается после
1.5 секунды и требует примерно 13 секунд на реальные анимации. Итоговый маркер:
`COF_LADDER_TEST_COMPLETE failures=0`. Эти проверки не являются визуальной оценкой.

Проверка нормального x86 runtime: Waf сборка прошла; изолированный movement smoke
завершился с `COF_LADDER_TEST_COMPLETE failures=0`. Клиент подтвердил два применения
камеры с `network_eye=1`, то есть новые eye-поля действительно дошли через delta
protocol до view hook. Это проверяет выполнение и передачу данных, без оценки изображения.

Итоговый повторный прогон прошёл также на RTX x64. Оба runtime собраны через Waf;
последняя версия включает отложенную синхронизацию камеры после ResetHUD.
Отдельный save/load mid-climb сценарий этим тестом не покрыт.
