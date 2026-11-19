# Клиентские studio events звуков лестницы

Статический аудит 2026-11-19. Исследован original client.dll SHA-256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Игра/DLL не исполнялись, ресурсы не изменялись, звук не прослушивался.

Потерян конкретный обработчик: оригинальный export `HUD_StudioEvent`1004c6c0
обрабатывает custom events5090/5093/5094, а SDK `cl_dll/entity.cpp` и обе подготовленные копии до исправления
 (`build/game-source`, `build/game-rtx-source`) оставляют
только5001/5011/5021/5031/5002/5004. Пустые options в ladder_climb.mdl здесь
нормальны: имя звука выбирается в коде по event, а не берётся из options.

| Event | Точное поведение original client | Громкость | Позиция/API |
|---|---|---:|---|
|5090 (`0x13e2`)|RandomLong(0,3), затем `common/bodydrop1.wav`…`bodydrop4.wav`|1.0|PlaySoundByNameAtLocation, attachment0|
|5093 (`0x13e5`)|`player/get_up.wav`|0.5|PlaySoundByNameAtLocation, attachment0|
|5094 (`0x13e6`)|RandomLong(0,1), затем `player/ladder_1.wav` или `player/ladder_2.wav`|1.0|PlaySoundByName, без явной позиции|
|5095|Нет ветки: outside switch range5001…5094, return|—|Нельзя придумывать звук на основании наличия event в модели|

Адреса доказательств:5090→1004d03f,5093→1004d114,5094→1004d142.
Switch в assembly1004c716 вычитает5001, затем unsigned-сравнение с93 и переход
в default1004d17e. Вызов101b2704 — engine PlaySoundByNameAtLocation;
101b2660 — PlaySoundByName;101b2718 — RandomLong. Это установлено по порядку
engine function table в `external/hlsdk-portable/engine/cdll_int.h` и сигнатурам
аргументов. attachment0 в original expanded entity — entity+0xb60. Для SDK
надо использовать именованное entity->attachment[0], не переносить offset.

Эти три ветки не зависят от weapon/model фильтра, GetLocalPlayer, options,
клавиши направления или состояния camera attachment. В начале общего export
есть проверка model path и GetLocalPlayer, но их результаты не блокируют
ветки5090/5093/5094. Воспроизведение привязано к пересечению animation frame,
а не к таймеру heldforward и не к движению origin лестничной камеры.

Точный client contract не задаёт channel/attenuation: эти поля отсутствуют
в обоих вызываемых API. Для **текущего Xash движка порта** пути доказаны исходником
`external/xash3d-fwgs/engine/client/dll_int/cl_game.c`:

- PlaySoundByName (строка1876): S_RegisterSound(name), затем
  S_StartSound(NULL, cl.viewentity, CHAN_ITEM=3, sound, volume,
  ATTN_NORM=0.8, PITCH_NORM=100, SND_STOP_LOOPING=1<<10).
- PlaySoundByNameAtLocation (строка2265): S_RegisterSound(name), затем
  S_StartSound(origin, cl.viewentity, CHAN_AUTO=0, sound, volume,
  ATTN_NORM=0.8, PITCH_NORM=100, flags0).

Это подтверждает channel/attenuation безопасного восстановления через те же
SDK API; не является исследованием внутренностей original GoldSrc engine.
Для5094 не следует заменять вызов на произвольный серверный spatial sound
сдругим каналом: это меняет установленный клиентский контракт.

Путь dispatch в порту: StudioModelRenderer.cpp1158/1449 при STUDIO_EVENTS
вычисляет attachments и зовёт IEngineStudio.StudioClientEvents. В OpenGL
renderer `ref/gl/gl_studio.c:2414` R_StudioClientEvents вычисляет end frame и
start=end-framerate*hostframetime*sequencefps; обходит события>=EVENT_CLIENT,
отправляя `(frame > start && frame <= end)` через pfnStudioEvent. При новом
незацикленном sequence start=-0.01; при gamepaused frametime0 возврат.
`engine/client/dll_int/ref_common.c:207` перенаправляет этот вызов в export
клиента. Software renderer имеет аналогичный вызов. Наличие пути в исходнике
не доказывает, что конкретная camera_model попадает в event-pass в каждом
runtime кадре: видимость, culling, sequence stepping и paused framerate
проверяет основная задача отдельно. Это существенная граница данного аудита.

Модельные event/frame данные сохранены основным агентом в
`analysis/movement/ladder-model-events.json`; они связывают эти custom events
с реальными sequences ladder_climb.mdl. Отдельные обработчики должны уважать
паузы, reverse movement/смену последовательности и не исполнять одно пересечение
дважды, если основной порт введёт свой event scheduler вместо render-pass.

Доказательства: `decompiled/client/captures/ladder-sound-client/000-pseudocode.c`
с capture.json (Ghidra12.1.4, Evidence ID и SHA), полный сырой REA результат в
`analysis/local/ladder-sound-client`; ограниченный assembly, dispatch table и
прочитанные PE строки в `analysis/movement/ladder-sound-client-static/`.
Никаких изменений реализации, builds, staging или игровых тестов этим аудитом
не выполнено.

## Курсор событий камеры: проверка SDK после runtime-наблюдений основной задачи

Основной агент сообщил, что runtime render-pass пропустил события целых
последовательностей 2 и 5 и дважды выдал frame13 последовательности 0.
Это его runtime-наблюдение, а не самостоятельный запуск данного аудита.
Следующие свойства проверены непосредственно в исходниках движка/SDK:

- `external/xash3d-fwgs/ref/gl/gl_studio.c:560` оценивает кадр как
  `curstate.frame*(numframes-1)/256 + max(0,time-animtime)*framerate*fps`.
  Для незацикленной последовательности результат ограничивается диапазоном
  `[0,numframes-1.001]`. Renderer использует modulo для STUDIO_LOOPING.
- `external/xash3d-fwgs/engine/client/cl_frame.c:217` обновляет
  `latched.sequencetime` только при изменении индекса sequence. Повторный Play
  той же последовательности таким способом не определяется.
- `external/hlsdk-portable/dlls/animating.cpp:44` обновляет `pev->animtime`
  при каждом StudioFrameAdvance, а не только при запуске последовательности.
  Поэтому одно изменение animtime также не является идентификатором Play.
- Текущий `CCofLadderCamera::Play` в `src/cof/server/ladders.cpp` принудительно
  отключает серверный looping: каждый Play является отдельным подъёмом/спуском
  даже для последовательности, помеченной STUDIO_LOOPING в модели.

Рекомендация для адаптера порта (не утверждение об оригинальном клиенте):
явно передавать счётчик Play камеры, увеличивать его даже при повторении того
же sequence и проверять фактическую доставку поля через entity delta.
Курсор привязывать к entity/model/serial; новый serial начинает интервал с
`-0.01`, затем обрабатывать события `(previousFrame,currentFrame]` и сохранять
максимум достигнутого кадра либо факт исполнения каждого event index.
Это предотвращает повтор из-за маленькой сетевой коррекции кадра, нескольких
CalcRefdef/render passes и паузы. Для этой камеры не делать modulo по флагу
модели: отдельный цикл определяется серверным Play serial. При отсутствии
нового serial возврат кадра назад не считать надёжным признаком перезапуска.
Обычный HUD_StudioEvent для своей камеры необходимо исключить из параллельного
воспроизведения, если этот курсор уже является владельцем её событий.

Первый полученный snapshot может уже быть позднее начала анимации; старт
курсора с -0.01 намеренно восполняет пропущенные ранние события один раз.
Полностью пропущенный сетевым клиентом Play таким курсором восстановить
невозможно: для строгой гарантии всех циклов потребовался бы отдельный журнал
или reliable start/end protocol. Существование полей SDK само по себе не
доказывает их доставку в delta или отсутствие такого пропуска.
