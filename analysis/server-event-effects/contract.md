# События монстров: Particle, Ripple и отложенное удаление

Статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Двенадцать новых actual C entries, без импорта Ghidra и без исполнения игры/DLL. Это продолжение [monster-events](../server-monster-events/contract.md). Пакет не меняет игровой код и не касается RTX.

[evidence.json](evidence.json) фиксирует 26 server C/ASM, raw bytes, RTTI, префикс CParticle vtable до slot118h, native ENTVARS descriptors, SDK engine ABI, регистрацию usermessages и хеши вспомогательных документов. [capture.py](capture.py) воспроизводит чтение PE и ограниченный objdump. [verify.py](verify.py) независимо сверяет хеши, каждый ASM byte row, raw offsets и decoded tables. Отдельный engine WriteShort ASM — только support, без выдуманной C-карточки. Все адреса native VA; смещения полей/таблиц обозначены hex, обычные скалярные значения десятичные.

## Карта вызовов

```text
monster event 1016 / 1019
  → 1011f900(position,247,size60/45,velocity)
  → 10117770(position*,unused,color,count,velocity)
     → 1011a120 violence cvar
     → 10094060 create configured particle
        → 10092020 resolve/create private data
        → virtual2c = 1009efc0 Spawn
           → virtual30 = 10099830 → 10116990("sprites/null.spr")
        → player search → virtual118 = 1009bbf0 → Particle message
        → virtual8(delay) + Think=100984f0
           → body0 + virtual8(fuser1 or1) + Think=101028e0 SUB_Remove

monster event 2001 / 2002, waterlevel!=0
  → pre-existing water_splash sound
  → 1011a2f0(entity,0)
     → 1011a820 TraceLine wrapper
     → 1011ac00 repeats trace → water exit search → Ripple message
     → no extra sound for mode0

scripted monster cleanup100fa530 → 1008ac50 SUB_StartFadeOut
  → virtual8(0.2f), Think=101028e0 SUB_Remove
```

Только серверная отправка Particle/Ripple восстановлена в этом пакете. Client receivers, загрузка `.aur`, частицы и рисунок на экране здесь не считаются разобранными.

## Входные функции и точный ABI

| Entry | ABI / назначение |
|---|---|
| `10117770` | cdecl(origin*,unused DWORD,color,count,velocity xyz by value), blood gate |
| `1011a120` | cdecl(color), EAX0/1, violence cvar |
| `10094060` | cdecl, 44 входных stack bytes, EAX particle; layout ниже |
| `10092020` | cdecl(entvars*), EAX private pointer, несмотря на void в Ghidra |
| `1009efc0` | ECX particle, RET, Spawn |
| `10099830` | concrete virtual30, ECX не используется, RET |
| `1009bbf0` | ECX particle + ignored player argument, RET4 |
| `100984f0` | ECX particle, RET, KillParticle |
| `1008ac50` | ECX entity, RET, только планирование удаления |
| `1011a820` | cdecl(start*,end*,mode,glassFlag,skipEdict,result*), TraceLine bridge |
| `1011a2f0` | cdecl(entity*,soundMode), water gate |
| `1011ac00` | cdecl(entity*); дополнительные stack bytes не читаются |

Raw CParticle factory записывает vtable `101bff80`; RTTI имя `.?AVCParticle@@`. Подтверждённые слоты: +4=`10017110`, +8=`1000e1f0`, +2c=`1009efc0`, +30=`10099830`, +d0=`1000db80` (return0), +118=`1009bbf0`. Сохранён префикс таблицы, а не заявление о её полном размере или всех производных классах.

## Кровь: gate вместо параметров масштаба

`1011a120` для color==-1 возвращает0 без вызова cvar; для247 читает `violence_hblood`, для любого другого цвета — `violence_ablood`. Engine CVarGetFloat возвращает ST0, затем FSTP сохраняет float32. Ordered +0/-0 выключают эффект; ненулевые значения **и unordered NaN** дают1, если исполнение продолжается. Это не проверка значения>0.

`10117770` сначала вызывает этот gate, затем отдельно проверяет color!=-1 и count!=0. Отрицательный count также проходит. Второй аргумент не читается. Color и count не используются для настройки последующего эффекта. При успехе вызывает:

```text
10094060(string_t("aurora/blood_shot.aur"), 1,
         origin.x,origin.y,origin.z,
         skin=0, delay=0.25f, unused=0,
         velocity.x,velocity.y,velocity.z)
```

`string_t` получается вычитанием global stringbase из адреса native literal; локального копирования строки нет. Ненулевой count лишь разрешает создание. Поэтому различие 60/45 в двух monster events само по себе **не задаёт разный размер** в этом callee. Предыдущий wrapper `1011f900` выполняет CVTTSS2SI(float size), передавая полученный integer gate. Runtime визуальный масштаб определяет нижняя система, не исследованная здесь.

## Particle creation и фактический порядок перезаписей

В `10094060` stack layout относительно EBP:

| Offset | Читаемое значение |
|---|---|
| +08 | string_t definition |
| +0c | enabled: используется только младший byte DWORD |
| +10/+14/+18 | origin xyz by value |
| +1c | skin DWORD |
| +20 | delay float |
| +24 | не читается |
| +28/+2c/+30 | velocity xyz by value |

Factory `10092020(0)` создаёт edict через engine CreateEntity и разрешает private data. Если private уже существует, возвращает его без проверки класса/замены vtable. Иначе engine выделяет DCh bytes, после чего записываются только vtable и object.pev. Собственного zero-fill здесь нет. Failure paths не являются безопасным `return NULL`: при неудаче CreateEntity остаётся dereference NULL+20ch, при неудаче private allocation выполняется запись `[EAX+4]` после `XOR EAX,EAX`. Следующий caller тоже не проверяет NULL.

Последовательность `10094060`:

1. `10119fe0` устанавливает origin. Для concrete particle virtual+d0 возвращает0, поэтому особая дополнительная запись monster+618 не выполняется.
2. Полностью заменяет spawnflags на bool(enabled.lowByte), записывает skin.
3. При хотя бы одном nonzero/unordered velocity component: skin=666, movetype=5, velocity копируется. Ordered три нуля, включая signed zeros, пропускают ветвь.
4. Записывает pev.message=string_t; вызывает virtual+2c.
5. Concrete Spawn `1009efc0` **безусловно ставит movetype=0**, solid=0, renderamt=128.0, rendermode=2, body=spawnflags&1. Skin и velocity здесь не меняются. Затем virtual30 → precache helper, повторная установка origin, SetModel `sprites/null.spr`.
6. Ищет первую classname `player` через `10118460(NULL,"player")`; получает private data через `100125e0(pev)`. Только при ненулевом результате вызывает virtual118(player).
7. Если float delay после conversion double ordered >= native double0.1, вызывает virtual8(delay), затем Think=KillParticle100984f0. NaN и меньшие delay пропускаются.
8. Последним действием classname становится `env_particle`; возвращается object pointer.

Промежуточную запись movetype5 нельзя объявлять финальным движением server particle: последующий Spawn её стирает. Наличие skin666/velocity остаётся потенциальным входом других механизмов, но их consumer здесь не доказан.

`10099830` лишь передаёт `sprites/null.spr` в `10116990`. Support callee проверяет имя, отбрасывает `*`, пробует LoadFileForMe, освобождает загруженный буфер и затем вызывает PrecacheModel. Wrapper не проверяет полученный индекс. Он не загружает `.aur`.

## Particle wire contract `1009bbf0`

Registration `100e5fc0`: `global10226490=RegUserMsg("Particle",-1)`. Конкретный ID зависит от регистрации в engine. Handler принимает player argument и делает RET4, однако ни разу его не читает.

| Порядок | Native вызов / данные |
|---|---|
| Begin | MessageBegin(2,global10226490,NULL,NULL) |
| 1 | WriteShort(IndexOfEdict(this.pev.containingedict)) |
| 2 | WriteString(global.stringbase + pev.message) |
| 3 | WriteByte(0) |
| 4 | WriteString(`nah`) |
| 5 | WriteShort(-1) |
| End | MessageEnd() |

Literal `101c2d70` содержит `nah\0`, **не пустую строку**. Destination2 соответствует MSG_ALL в pinned SDK; нет recipient edict. Поиск player в factory служит guard вызова, а не назначает unicast-получателя. При обычном успешном engine encoding длина payload `N+10`, где N — байтовая длина definition доNUL. Первый entity index — SHORT, не BYTE. В этом сообщении нет origin/velocity/skin/body. Их сериализация и чтение клиентом остаются за пределами данного sender.

## Вода: два trace и необязательный звук

`1011a820` составляет flags:

```text
flags = (mode == 1 ? 1 : 0) | (glassFlag != 0 ? 0x100 : 0)
TraceLine(start,end,flags,skipEdict,result)
```

`mode!=0` не эквивалентно `mode==1`. Это восстановленный wrapper, не реализация геометрии engine trace. SDK TraceResult соответствует используемым native offsets fraction+10h/endPos+14h.

`1011a2f0` требует entity!=NULL, pev.containingedict!=NULL и EntOffsetOfPEntity(edict)!=0. Последний callback slot70 — не IndexOfEdict, не player/client predicate. Отдельного guard pev==NULL нет.

Start=origin+view_ofs, end=start−(0,0,100), TraceLine(start,end,1,0,ownEdict,result). Ordered fraction==1 останавливает путь; unordered NaN проходит сравнение. Затем PointContents(result.endPos) должен вернуть -3 (CONTENTS_WATER в pinned SDK).

Вызывается `1011ac00(entity,...)`. Необычный ASM: caller выделяет ещё12 stack bytes и три раза копирует в них raw bits entity pointer. Это не настоящий координатный вектор. Callee читает только первый entity argument, полностью игнорируя дополнительные12bytes.

После возврата выбор soundMode1/2/3 задаёт соответственно `player/water_small_splash.wav`, `player/water_splash.wav`, `player/water_jump.wav`. Channel0, volume1, attenuation0.8, flags0, pitch=RandomLong(-5,5)+100. Остальные mode не дают дополнительного звука. Поскольку `1011ac00` заново трассирует и не возвращает success, sound gate зависит только от **первой** trace: звук возможен даже если повторный trace не отправил Ripple.

В monster events2001/2002 при waterlevel!=0 звук `water_splash.wav` уже отправлен до `1011a2f0(entity,0)`. Mode0 здесь означает только попытку Ripple без ещё одного выбранного sound helper.

## Ripple wire contract `1011ac00`

Функция без собственных NULL guards повторно вычисляет start/end и TraceLine с теми же параметрами. Требует fraction не ordered1 и PointContents(endPos)==-3. Копирует endPos, повторно проверяет PointContents выбранной позиции, затем **пока contents==-3** добавляет float1.0 к z и снова проверяет.

Нет лимита высоты/числа итераций/проверки изменения float. При недостаточной точности z или engine, продолжающем возвращать -3, локальный код не гарантирует завершения. Отправляется первый проверенный nonwater sample; это дискретный поиск с шагом1, а не точная поверхность воды.

Registration `100e5fc0`: `global10226644=RegUserMsg("Ripple",-1)`.

| Порядок | Native вызов / данные |
|---|---|
| Begin | MessageBegin(2,global10226644,NULL,NULL) |
| 1..3 | WriteCoord(selected.x), WriteCoord(selected.y), WriteCoord(selected.z) |
| 4 | WriteShort(40) |
| End | MessageEnd() |

Payload при обычном engine encoding —8bytes. Координаты не передаются float32: [engine-wire-contract](../graphics/engine-wire-contract.md) доказывает trunc(8*x) и младшие16bits. Новый ограниченный [WriteShort support](engine-write-short-support.asm) связывает engine table slot50 `01da6829` с уже сохранённым writer `01d47080`: два байта, low затем high. Регистрация, sender и обычная wire ширина доказаны; клиентский смысл40 и отображение Ripple остаются открытыми.

## Удаление: что действительно делает native код

`100984f0` KillParticle ставит body=0. Если fuser1(+258h) ordered равен0, планирует virtual8(1.0); иначе virtual8(fuser1), включая отрицательные значения и NaN при продолжающемся исполнении. После scheduler устанавливает Think=SUB_Remove101028e0. `10094060` не записывает fuser1, поэтому нельзя обещать одинаковую вторую задержку для всех объектов, не исследовав его других producers/engine initialization.

Concrete vtable+8=`1000e1f0` перенаправляет `(delay,0)` в +4=`10017110`. [Разобранный scheduler](../server-queue-b/contract-parent.md) выбирает globals.time или pev.ltime для movetype7, может использовать parent/child assist; delay не ограничивает. Это не гарантия точного реального времени или фиксированного числа кадров.

`1008ac50` SUB_StartFadeOut имеет всего две операции: virtual8(0.2f), затем Think=SUB_Remove. Нет изменения прозрачности, промежуточного fade callback, отключения collision или sound. Существующий [SUB_Remove](../server-parent-tree/contract.md) делает UpdateOnRemove, при health>0 обнуляет health/пишет diagnostic и отдаёт edict engine RemoveEntity. Самостоятельного освобождения private memory в описанных helpers нет.

## Оставшиеся конкретные задачи

- Client Particle/Ripple consumers: привязать entity fields, строку `nah`, short -1/40, lifetime и `.aur` parser; sender сам этого не доказывает.
- Producers fuser1 для CParticle: здесь найден только reader, а factory не задаёт поле. Нельзя подменять неопределённость предположением о zero-fill engine allocation.
- Другие производные virtual2c/30/118/8 могут менять поведение; пакет доказывает конкретный CParticle prefix и local dispatch, не все типы.
- Engine TraceLine/PointContents, фактическая поверхность воды и entity replication не разобраны этим пакетом.
- Возврат из message API предполагает обычный успешный путь. Engine message size limits, fatal errors и coordinate overflow описаны отдельно; здесь не заявлена безопасность произвольных строк или NaN.
