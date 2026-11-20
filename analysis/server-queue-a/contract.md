# Brush utilities: rotating, walls, conveyor and clipping

Статический разбор 34 ранее не просмотренных записей server-корпуса. Здесь восстановлены локальные условия и связи методов шести brush-классов, а не весь движок или готовая реализация. Игра, DLL и REA-процесс не запускались. Исходные C и игровые ресурсы не изменены.

## Доказательства и навигация

Основные тела: `decompiled/server/partial-pass/functions/0x<address>.c`. [evidence.json](evidence.json) содержит SHA-256 всех 34 тел, 12 вспомогательных тел, 12 ограниченных asm-диапазонов, шесть префиксов vtable, export-thunks, таблицу сохранения и строки. [capture.py](capture.py) воспроизводит чтение оригинального `cryoffear/cl_dlls/hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Диапазоны VA в JSON полуоткрытые; диапазоны исходного C сохранены как inclusive. Native entvars-offsets сверены с `analysis/doors/capture.json`; SDK используется для удобных имён числовых флагов, не как доказательство поведения оригинала.

| Entity | Export → factory | Размер / vtable | Основные методы |
|---|---|---|---|
| func_rotating | 10012530 → 1000fc80 | f8 / 101a3ebc | Spawn 100114a0; KV 100105e0; Precache 10010b10; Use 10010f90 |
| func_wall | 10012560 → 1000fda0 | e0 / 101a37e0 | Spawn 10011810; Use 100123a0 |
| func_wall_toggle | 10012570 → 1000fe00 | e0 / 101a3900 | Spawn 10011880; Use 100123e0; off/on 10012210/10012270 |
| func_conveyor | 100124e0 → 1000fb00 | e0 / 101a3a20 | Spawn 100112b0; Use 10012320; encoder 100122a0 |
| func_illusionary | 10012500 → 1000fbc0 | 180 / 101a3b40 | Spawn 100113f0; KV 10010570 |
| func_monsterclip | 10012510 → 1000fc20 | e0 / 101a3d8c | Spawn 10011450; no-op Use 10012360 |

Factories возвращают уже существующий edict private-data pointer либо выделяют объект указанного размера, записывают vtable и entvars в object+4. Сырые `E9 rel32` связывают экспорт с factory, `C7 00 imm32` — factory с vtable. Это не предположение из имени файла. Префиксы таблиц ограничены 0xf4 байтами: +2c Spawn, +30 Precache, +34 KeyValue, +38 Save, +3c Restore, +5c GetState, +e8 Use, +ec Blocked. Полные классы и все наследуемые методы этим не раскрываются. Декомпилятор искажает возвращаемое значение factory и путь ошибки выделения; asm сохранён, но безопасность invalid/OOM входов здесь не утверждается.

## CFuncRotating: поля и конфигурация

`this+dc` friction, `+e0` attenuation, `+e4` volume, `+e8` float pitch, `+ec` sounds, `+f0` current speed, `+f4` numeric state. `pev+44..4c` movedir, `+5c..64` avelocity, `+1fc` target speed, `+1f8` noise3. Spawn устанавливает state=0/current=0/pitch=99, volume==0 заменяет на 1, friction<=0 на 1, attenuation=.8; flags80 выбирает 2.0, иначе flags100 — 1.25. Speed<=0 становится 0, положительного значения по умолчанию нет.

KeyValue 100105e0: `fanfriction` = atof/100; `Volume` = clamp(atof/10,0,1); `sounds` = atoi; `axes` парсится в movedir. Все четыре ветки помечают handled. `spawnorigin` парсится и копируется в origin только при отличии от общей опорной vector-константы; эта ветка **не выставляет handled** и не делегирует базовому обработчику. Неизвестные ключи идут в 1000dba0. Имена `axes` и `skin` подтверждены сырыми PE-строками.

Общий vector 10222f34..10222f3f находится в virtual-only части PE: начальное loader zero-fill подтверждено границами секции, но это не снимок runtime и не доказательство неизменности. Ниже «нулевой vector» означает это обычное начальное состояние, а не доказанное отсутствие поздних writers.

Если movedir равен общему vector, Spawn выбирает ось: flag4 → (0,0,1), иначе flag8 → (1,0,0), иначе (0,1,0); flag2 меняет знак. Flag40 даёт solid0/skin−1, иначе solid4; movetype всегда7. SetOrigin/SetModel обновляют brush. Flag20 ставит HurtTouch в callback object+7c. Use callback object+80 = 10010f90; vtable Use1000e2e0 проверяет callback и передаёт все четыре аргумента. Если flag1 либо отсутствует targetname, Spawn ставит WaitForStart и задержку1.5. WaitForStart10012480 при global time>1 вызывает Use(this,this,3,0), иначе повторяет проверку через.1.

## Вращение и звук

Use проходит ShouldToggleState10018350: use2/3 допускаются; для state0/3 блокируется use0, для state1/2 блокируется use1. Состояния в этой семье: 0 остановлен/команда остановки без ramp-флага; 1 разгон; 2 вращение; 3 торможение с ramp-флагом. GetState10010230 непосредственно возвращает +f4.

| Условие RotatingUse | Действие |
|---|---|
| current=0, flag10 отсутствует | state2; звук channel6, volume заданный, pitch100; current=target; SetAvelocity(dir*current); Rotate |
| current!=0, flag10 отсутствует | state0 **до завершения торможения**; think SpinDown через.1 |
| current=0, flag10 установлен | state1; старт звука volume.01/pitch30; think SpinUp через.1 |
| current!=0, flag10 установлен | state3; think SpinDown через.1 |

SpinUp10011bc0 каждые.1 прибавляет target*friction, обновляет angular velocity; при current>=target ограничивает до target, ставит state2 и звук flags c0/pitch100, затем Rotate. SpinDown10011a90 вычитает target*friction; при current<=0 ставит state0/current0, задаёт общий vector скорости, вызывает звук с flags20/volume0/attenuation0/pitch=int(+e8), затем Rotate. Rotate10010f80 только планирует следующий think через10; само вращение выполняет движок по avelocity. Шаг скорости не умножается на frame time.

RampPitchVol10010df0 вычисляет ratio=current/target, pitch=int(30+70*ratio), заменяет ровно100 на99; volume=storedVolume*ratio, flags=c0. Передаваемый SpinUp/Down аргумент 1/0 в теле не используется. Нет локальной защиты target=0 и нет clamp ratio; это условия вызывающей цепочки, а не общий безопасный API.

Precache10010b10 использует непустой pev.message как пользовательский sound path (precache + AllocString). Иначе sounds1..5 выбирает fans/fan1.wav..fan5.wav; default — common/null.wav без явного precache именно в этой ветке. Noise3 хранит string-table offset. Если сохранённый current!=0, Precache устанавливает SpinUp через1.5, не просто возобновляет звук на старой скорости.

Задержки идут через virtual+8→1000e1f0→virtual+4/10017110. Для обычного movetype7 clock — pev.ltime, для других — global time; специальные MoveWith parent/child ветки отдельные. SetAvelocity100c4b90 прибавляет angular velocity родителя при его наличии и проходит детей. Поэтому dir*current — вход helper, не безусловно конечная world angular velocity при parent linkage.

## Урон и сохранение

Blocked1000fee0 без локального takedamage guard вызывает victim virtual+64 со своим pev как attacker/inflictor, pev.dmg и bits1. HurtTouch100102e0 сначала требует victim.pev.takedamage!=0, затем **перезаписывает собственный dmg=current/10**, вызывает тот же damage virtual. Берёт центр (absmin+absmax)/2 через10012420, направление от центра к origin жертвы и **перезаписывает** её velocity нормализованным направлением*dmg. Это не добавка к прежней скорости. Bounded asm снимает артефакт fStack_30: при нулевой длине fallback=(0,0,1). Локального cooldown и guard current>0 нет; при current0 ветка всё ещё записывает нулевую velocity. Отрицательный current до clamp может существовать внутри SpinDown, но runtime порядок touch/think не проверялся.

Save10011120 и Restore10010e80 сначала требуют успеха базового10018000/10017f30, затем вызывают сериализацию производной таблицы10211430, label CFuncRotating, count6. Save использует targetname, иначе classname как дополнительный entity label.

| Native имя | Offset | Type ID |
|---|---|---|
| m_flFanFriction | dc | 0 |
| m_flAttenuation | e0 | 0 |
| m_flVolume | e4 | 0 |
| m_pitch | e8 | 0 |
| m_sounds | ec | 10 |
| m_fCurSpeed | f0 | 0 |

Каждая запись count1/flags0. State f4 отсутствует в **этой** таблице. Это не утверждение, что поле не сохраняется никаким другим путём: общая base/callback сериализация и полный restore lifecycle вне текущей группы.

## Стены, конвейер и служебные brush entities

Wall Spawn10011810 очищает angles общим vector, устанавливает movetype7/solid4 и model. Если parent object+14 отсутствует, ставит pev.flags bit02000000 (SDK FL_WORLDBRUSH). Wall Use100123a0 проверяет ShouldToggleBool(useType,int(frame)) и делает frame=1−frame. **Обычная стена переключает texture frame, не solid/visibility.**

WallToggle Spawn10011880 вызывает Wall Spawn и при spawnflag1 делает Off. GetState10010270 возвращает0 при solid0, иначе2. Use100123e0 фильтрует команду через ShouldToggleBool(state==2), затем выбирает Off/On. Off10012210 ставит solid0 и OR effects80; On10012270 ставит solid4 и снимает только effects80. Оба вызывают SetOrigin helper **10119fe0**, с this и текущим pev.origin для relink; аргументы подтверждены asm. Другие effect bits сохраняются.

Conveyor Spawn100112b0 сначала переводит angles в movedir через10102b80/101021d0, затем Wall Spawn. Если flag1 отсутствует, ставит pev.flags bit4 (SDK FL_CONVEYOR); flag2 отключает solid и ставит skin0. Speed==0 заменяется на100. Encoder100122a0: n=int(abs(speed)*16), rendercolor=(speed<0 ? 1:0, n>>8, n&255), компоненты записываются float. Для ±100 это (0/1,6,64). G локально не ограничен одним байтом. Use10012320 XOR меняет sign bit speed и заново кодирует, **без** фильтра USE_TYPE. Декодирование конвейера renderer/physics этим проходом не закрывается.

Illusionary Spawn100113f0: angles=общий vector, movetype0/solid0, SetModel. EF_NODRAW здесь не ставится: это nonsolid brush, а не автоматически невидимая сущность. KeyValue10010570 для skin делает atof→числовое преобразование1013df50→pev.skin и handled1, прочее передаёт10102480.

MonsterClip Spawn10011450 вызывает Wall Spawn; при showtriggers==0 **присваивает** effects80, а не OR; всегда ставит flags00800000 (SDK FL_MONSTERCLIP). Use10012360 — пустой метод. Реальный engine collision filter и видимость при ненулевом showtriggers здесь не проверялись в runtime.

## Оставшиеся границы

Закрыты числовые factory/vtable связи, локальная конфигурация, callbacks, состояния, формулы, damage вызовы и производная save-таблица. Не закрыты полная shared vector writer history, весь MoveWith scheduler, engine collision/render consumers, обработка некорректных map values и OOM, все inherited методы, общий save lifecycle и runtime эффект. Следующий полезный проход: consumers FL_CONVEYOR/rendercolor и FL_MONSTERCLIP; отдельно base restore/think callbacks при сохранённом вращении. Ни один из этих пробелов не означает, что уже доказанные локальные тела неизвестны.
