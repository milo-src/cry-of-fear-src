# Server PM support: collision, materials, footsteps and state helpers

Статический пакет27 ранее не разобранных C-входов из оригинального `hl.dll`.
SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
`capture.py` воспроизводит27 ограниченных objdump-снимков и PE literals;
`evidence.json` связывает их с исходными C и хэшами. DLL/игра не запускались.
Имена ниже аналитические; старые SDK implementations не служат доказательством native branches.

## Поля, callback ABI и навигация

Общий указатель PM хранится по10220c50. Малая часть ABI соответствует
`external/hlsdk-portable/pm_shared/pm_defs.h`/`pm_movevars.h` (хэши в evidence),
а адреса и обращения установлены actual C/ASM:

| PM offset hex | Значение |
|---|---|
| 0 / 4 / 8 | player_index / server / multiplayer |
| 10 | frametime |
| 14 / 20 / 2c | forward / right / up |
| 38 / 44 / 5c / 68 / 74 / 7c | origin / angles / velocity / movedir / basevelocity / basevelocity.z |
| 88 / 8c / 90 / 98 | view_ofs.z / flDuckTime / bInDuck / iStepLeft |
| b8 / bc / c0 / c4 / c8 / cc | flags / usehull / gravity / friction / oldbuttons / waterjumptime |
| d0 / dc / e0 / e4 / e8 | dead / movetype / onground / waterlevel / watertype |
| 1fc / 200 / 204 / 214 / 234 | iuser1 / iuser2 / iuser3 / fuser3 / vuser3 |
| 24c / 250 | numphysent / physents, native stride e0 |
| 24754 / 24758 | numvisent / visents, native stride e0 |
| 4545a / 45468 / 4546c / 45470 / 45476 | cmd.msec BYTE / forwardmove / sidemove / upmove / buttons WORD |
| 45490 / 45494 | numtouch / touch array, native stride44 |
| 4f3f4 / 4f4f4 / 4f4f8 / 4f528 | physinfo / movevars pointer / hull mins[4] / maxs[4] |

Physent offsets: player20, origin24, model30, info50, angles54. Trace68-byte layout:
allsolid0,startsolid4,fraction10,endpos14,normal20,ent30. All offsets here hex.
Native callbacks +4f558 Info_ValueForKey; +4f560 TestPlayerPosition;
+4f568 Con_DPrintf; +4f56c Con_Printf; +4f570 Sys_FloatTime;
+4f574 StuckTouch; +4f578 PointContents; +4f584 PlayerTrace;
+4f58c RandomLong; +4f5a4 FileSize; +4f5a8 LoadFile; +4f5ac FreeFile;
+4f5b0 memfgets; +4f5b4 runfuncs; +4f5b8 PlaySound.
PlayerTrace использует native hidden result buffer первым stack argument и возвращает pointer.
Это сопоставление layout и вызовов, не доказательство всех реализаций callbacks движка.

## Исправленные decompiler ABI

Все27 wrappers здесь cdecl (обычный RET; stack arguments очищает caller).
Ghidra ошибочно обозначил несколько возвращающих функций как void:

| Entry | Фактический результат |
|---|---|
| 100044b0 CheckStuck | EAX0 свободно/исправлено; EAX1 всё ещё stuck либо throttle |
| 10004990 CheckWater | полный EAX bool level>1 |
| 10004eb0 ClipVelocity | полный EAX surface mask, не только BYTE |
| 100056f0 FindTextureType | AL; upper24 EAX не гарантированы |
| 10008ef0 PushEntity | EAX=первый outTrace pointer, struct-return ABI |
| 100094d0 SplineFraction | float result ST0 после SSE arithmetic |

Обычные скалярные getters100060f0/6180/61b0/6120/6e30 возвращают полный EAX.
Cookie1013dbb3 не изменяет EAX в нормальной ветви; ранее сохранённое доказательство:
`analysis/server-serializer/1013dbb3.asm`.

## Stuck и collision chain

```text
PM_Init100061d0
 -> CreateStuckOffsets10004fa0
 -> InitTextureTypes10006200
CheckStuck100044b0
 -> TestPlayerPosition
 -> ResetStuckOffsets100090c0 / GetRandomStuckOffsets10006120
 -> Sys_FloatTime / StuckTouch / дополнительные trace probes
PhysicsToss100070a0
 -> CheckWater10004990 / CheckVelocity10004880 / gravity100037d0
 -> PushEntity10008ef0 -> callback PlayerTrace -> AddToTouched10003840
 -> ClipVelocity10004eb0 / повторная PushEntity / CheckWater
```

Смещения stuck не случайны: счётчик `[2*player+server]` выдаёт signed oldCounter%54,
потом хранит oldCounter+1. Нет guards для player/server/overflow. Инициализатор
обнуляет54 triplet (0x288 bytes), затем заполняет53; последний остаётся нулевым.
Порядок:9 осевых малых,8 углов,3 Z(0,1,6),3 Y(-2,0,2),3 X(-2,0,2),27 XY/Z.
Имена “Random” из семантики SDK не означают RNG.

CheckStuck имеет быстрый client path при server==0 и world/model collision:
все54 offsets от исходного origin, любой свободный вариант переносит позицию.
Общий путь разрешён лишь `last < float(Sys_FloatTime()) - 0.05` (вычитание double).
Timestamp на игрока хранит отдельные стороны `server?0:1`. После StuckTouch одна
кандидатная проба; index<27 может возвратить0 без переноса origin. Index>=27
при успехе переносит. Если всё ещё solid и buttons&7 и hit.player!=0, перебор
45 точек: XY=-8,0,8; Z=0,18,36,54,72. Исходный hit может быть world0; индексы
callback здесь не валидируются. Неисправленная/throttled ветка возвращает1.

CheckVelocity проверяет IEEE exponent mask0x7f800000: и NaN, и бесконечности
обнуляются у origin/velocity. Затем velocity компонентно clamp к ±maxvelocity;
никакого clamp длины вектора или конечного диапазона origin нет.
ClipVelocity вычисляет `out=in-normal*(dot(in,normal)*overbounce)`, без normalization.
Компоненты строго внутри(-0.1,+0.1) становятся0; surface mask1 для normal.z>0,
2 для z==0,0 для z<0. In-place velocity поддерживается dot-before-store.

PhysicsToss отличается от общего walk: gravity исключён при types5/11/9,
отскок type10 использует2-friction, type11 использует2, остальные1. При normal.z>0.7
скорость менее gravity*dt прибивается к земле по Z; speed²<900 либо non-bounce
тип останавливает всё. Иначе остаётся ещё `(1-fraction)*dt*0.9*velocity` trace.
Начальный CheckWater вызывается всегда; повторный есть только на оставшемся
обычном пути. Ранние stationary и allsolid выходы повторный CheckWater обходят;
allsolid сначала устанавливает onground=trace.ent и velocity=sharedVector.
PushEntity всегда принимает endpos, включая allsolid, а touch добавляет только
fraction<1 && !allsolid. Точные dedup/overflow AddToTouched разбираются соседним
агентом; эта функция передаёт68-byte trace по значению и velocity pointer.

## Вода и crouch

CheckWater начинает с level0/type-1; первая проба у feet (mins.z+1), вторая
посередине hull, третья на view height. На первых двух содержимое -14..-3 и
-19..-17 считается жидкостью; у головы остаются -14..-3 и только-19.
Truecontents первой пробы -14..-9 выбирает current directions(+X,+Y,-X,-Y,+Z,-Z),
добавляя `50*level*direction` к уже имеющемуся basevelocity. Поэтому два вызова
не являются чистыми чтениями. CheckWater return level>1, но InWater100061b0
дополнительно исключает type-19.

CheckWaterJump10004bd0 не проверяет level сам. Нужны timer0, velocity.z>=-180,
и отсутствие движения назад относительно горизонтального forward. Point hull2
проверяет24 units вперед от origin.z+8; первая стенка требует fraction<1 и
abs(normal.z)<float0.1. Upper trace идёт на origin.z+oldHullMax.z. Movedir
записывается как sharedVector-50*normal ДО upper trace, даже если она неудачна.
Успех: timer2000,velocity.z225,oldbuttons|2,flags|800. Hull восстанавливается.
WaterJump1000a590 ограничивает timer сверху10000 и вычитает cmd.msec; при
result<0 или level0 очищает timer/flag800. Ровно0 при ненулевом level оставляет
flag; active branch даже при очистке ещё копирует movedir XY в velocity XY.

100097a0 — отдельная альтернативная duck-подобная функция. Actual dispatcher10008a00
вызывает10005400 (PM_PlayerMove.asm10008b42), чьё прежнее описание в
analysis/movement/physics.md остаётся верным. Лексический поиск по8000 saved C
нашёл100097a0 только в собственном объявлении; косвенные callers этим не исключены.
100097a0 нельзя пересказывать стандартной SDK реализацией. Сначала
oldbuttons bit4 всегда обновлён; iuser3 или dead дают выход. При fuser3==0
release выходит. Press edge без flags4000 устанавливает timer1000,bInDuck1;
fuser3!=0 принуждает те же поля. Затем ASM1000987a/1000988c пропускает всё тело
при bInDuck!=0. Только bInDuck0 допускает интерполяцию или финальную ветку:
`h=3t²-2t³`, `t=max(0,1-ducktime/1000)*float(1/0.6)`;
viewZ=(1-h)*28+h*66 при grounded,timeFraction>0.4,fuser3==0.
Иначе hull0,viewZ28,flags&~4000,bInDuck1; grounded origin+=mins[1]-mins[0],
затем FixCrouchStuck(-1) до36 попыток и CategorizePosition. Эти необычные
условия подтверждены ASM; полная достижимость зависит от остальных writers.
100095b0 сохраняется как support для обратного перехода, не дублирует REVIEW.

Spectator10009150 также имеет нетипичный guard: при iuser1==3 после friction
и ускорения **origin интегрируется только при addspeed>0**. Friction использует
max(speed,stopspeed)*friction*1.5*dt; wishspeed capped spectatormaxspeed;
accelerate step=min(addspeed,accelerate*dt*wishspeed). Иначе iuser2>0 выбирает
первый physent.info, копирует angles/origin и обнуляет velocity общим vector.
Никакого collision trace в spectator body нет. GetPhysEntInfo/GetVisEntInfo
разрешают index==count (native JG), хотя usual iteration идёт index<count.

## Материалы и полный выбор звука шага

`InitTextureTypes10006200 → Sort100090e0 → Swap10009510 → Find100056f0 → CodeToStep10006e30 → PlayStep10007550`.
Loader guard10220c5c; reload request10233900 обслуживается PlayStep и принудительно
закрывает guard даже при load failure. Init сам ставит guard только после
ненулевого COM_LoadFile. До загрузки очищает512x13 имён,512 кодов,count0.
`mtl` со strlen>=3 задаёт custom path; иначе sound/materials.txt. FileSize,
LoadFile(usehunk5), memfgets(limit511), FreeFile — callbacks, не прямой fopen.
Код — первый алфавитный символ uppercase; slash-first/пустые строки игнорируются.
После token должен быть ненулевой whitespace delimiter; token до NUL без него
не принимается. Имя обрезается до12 байт. Case-insensitive pair-sort сохраняет
дубликаты; binary search strnicmp12 возвращает code AL либо C.

Коды: B19,D2,F11,G4,H17,I13,M1,O14,P15,R18,S6,T5,U12,V3,W9,Y16,Z10; default0.
Custom overrides требуют длину>=2: type6→psnd;7→wsnd;8→lsnd;прочие→ssnd.
Только ordinary branch при отсутствии ssnd читает stype (-1→0,nonzero override).
Wsnd использует общий counter10220fec и пропускает каждый первый вызов цикла4.
Custom helper заменяет лишь первый ? по variant0/1/2/3→символ1/3/2/4 (default#)
и играет channel4,volume аргумент,attenuation0.8,flags0,pitch100. Копия в shared
buffer10222bf0 не проверяет длину.

PlayStep сначала toggles iStepLeft, затем early guards fuser3/runfuncs. До MP
footsteps gate выполняются equipment/bag sound и SP camera impulse. При level<3
volume снаряжения0.7 для buttons1000&&flags40000,иначе0.1; pitch100+RNG(-30,30).
SP bag, MP equipment. SP импульс через10009dd0: sprint(-3,1,roll), обычный
(-0.75,0.5,roll); roll0 если low0,иначе stepLeft?-2:1. Native helper добавляет
(-pitch,+yaw,+roll)*20 в vuser3 только multiplayer0. Интегратор10005260 раскрыт
ранее в movement evidence. После этого variant=RNG(0,1)+2*stepLeft; MP footsteps0
завершает функцию. Crouch добавляет crawl1..4/channel0/volume0.7, не заменяя шаг.

Все stock filenames имеют префикс `player/footsteps/`, суффикс1..4.wav.

| Step type | Семейство | Выбор | Pitch / дополнение |
|---|---|---|---|
| 0,5,unknown | concrete | RNG0..3 |100 |
| 1,3,4 | metal | RNG0..3 |100 |
| 2 | dirt | alternating variant |100 |
| 6 | splash | RNG0..3 |100;10226704=stepLeft?1:2 |
| 7 | wade | alternating variant |80; level>=3 exit, иначе10226704=3 |
| 8 | metal | RNG0..3 |150; дополнительный camera(-5,stepLeft?0.5:-0.5,0) |
| 9 | wood | RNG0..3 |100 |
| 10 | carpet | RNG0..3 |100 |
| 11,13 | mud | RNG0..3 |100 |
| 12 | grass | RNG0..3 |100 |
| 14 | sand | RNG0..3 |100 |
| 15 | snow | RNG0..3 |100 |
| 16 | glass | RNG0..3 |100 |
| 17 | paper | RNG0..3 |100 |
| 18 | gravel | RNG0..3 |100 |
| 19 | grass + optional twig_snap | см. ниже |100 + random twig pitch |

Stock calls:channel4,volume аргумент,attenuation0.8,flags0. Type19 сначала grass,
затем только RNG(1,10)<=3 пробует twig. Pitch100+RNG(-5,5), selectionRNG(0,8).
Switch имеет case0→twig_snap1,1→no sound,2→twig_snap2,...,8→twig_snap8,
9→twig_snap9 (не достигается при обычном documented inclusive RNG0..8).
ASM10008046..10008086 устраняет ложный Ghidra пятиаргументный RandomLong:
pitch/flags/attenuation заранее размещены на stack; настоящий RandomLong(0,0)
оставляет результат для volume+float(result), затем вызывается шестипольный
PlaySound(channel0,path,volume+result,0.8,0,pitch). Здесь стек переиспользуется,
не меняется ABI callbacks. При обычном RNG(0,0) добавка0; implementation RNG
движка не проверялась этим пакетом, поэтому не заявляется измеренная вероятность.

## Что осталось открытым

- Полный runtime порядок engine PM и реальные значения callbacks/world data.
- Writers/consumers reload10233900 и step-effect10226704 за пределами body;
  общий lifetime PM caches между картами/режимами.
- Достижимость необычных crouch/spectator/index==count веток в штатной игре.
- Полные геометрические/звуковые реализации внешних callbacks, точная политика
  RNG; чтение материалов на диске и фактическая длина custom strings.
- Shared vector10220c40 используется как нулевая база по ABI/исходному коду;
  здесь не доказана невозможность сторонней записи во время исполнения.

Разобранные ветви/ABI не означают runtime паритет или готовую реализацию.
