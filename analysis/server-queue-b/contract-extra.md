# CBaseToggle: движение и CBaseDelay: цепь targets

Продолжение [разбора 34 дверных функций](contract.md): 20 новых actual C entries,
без прежнего REVIEW. Только static RE оригинального server `hl.dll`, тот же SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
[notes-extra.json](notes-extra.json) — карточки; [evidence-extra.json](evidence-extra.json)
содержит 20 новых и 15 supporting C/ASM hashes, native vtable bindings и строки.
Supporting-функции не превращены в дополнительные REVIEW. Игра/REA не запускались,
код порта и общий каталог не менялись.

## Быстрая навигация

| Задача | Вход / продолжение |
|---|---|
| Поставить линейное движение | 101025c0 → 101026e0 LinearMoveNow |
| Завершить линейное движение | 10102600 LinearMoveDone → 10102610 LinearMoveDoneNow |
| Поставить угловое движение | 10101b50 → 10101c60 AngularMoveNow |
| Завершить угловое движение | 10101b90 AngularMoveDone → 10101ba0 AngularMoveDoneNow |
| Выбор оси | 10101dc0 AxisDelta, 10101eb0 AxisValue, 10101e00 AxisDir |
| Превратить angles в movedir | 101021d0, с особыми значениями yaw=-1/-2 |
| Проверка master | 10102320 → 10119060, handle object+e4 |
| KeyValue toggle/delay | 10102480 → 101023c0 → 1000dba0 |
| Отдельный master у DM start | 10102350, owner CBaseDMStart |
| Передать targets сразу/позже | 10102930 → 10101ff0 либо временный CBaseDelay |
| Вызов отложенного targets | 10101ee0 DelayThink → 10102930 → удалить temporary edict |
| Проверить trace между глазами | 10101f20 → 1011a800 / engine slot 10222fc4 |

## Move: данные и ABI

Названия полей доказаны native CBaseToggle save descriptors `10219a98`, см.
первый evidence.json: final destination+158, linear speed+164, angular speed+168,
final angle+16c, completion callback+154. Think callback — object+78.
`101025c0` и `10101b50` принимают vector XYZ и float speed на 16 байтах стека,
ECX=this; ASM заканчивается `ret 10h`. Тип `undefined8` первых двух компонент
в C не означает double в исходном интерфейсе.

Setter сохраняет destination/speed, назначает соответствующий MoveNow и вызывает
`100c4850(this)`. Supporting ASM показывает flags+60|=100h, очистку scheduler
через `10017ad0`, далее `100c48b0` (flags|=80h). Последний выбирает
`100c3e50` или `100c44e0` по global1022318c. Поэтому нельзя утверждать, что
MoveNow всегда ждёт следующего engine frame: при doingDesired!=0 callback
выполняется сразу, иначе попадает в AssistList. Полный разобранный dispatch,
deadline correction и ограничения обхода: [MoveWith contract](contract-parent.md).

## Восстановленная формула MoveNow

Для linear `101026e0` и angular `10101c60` одна структура:

```
targetWorld = finalLocal + (parent ? parent.origin/angles : 0)
if targetWorld == current.origin/angles componentwise:
    MoveDone()                    // далее отдельный DoneNow
else:
    delta = targetWorld - current
    T = float(sqrt(double(float(delta.y² + delta.x² + delta.z²)))) / speed
    this->virtual_04(T, 1)
    this->think = MoveDone
    SetVelocity/SetAvelocity(this, delta / T)
```

Формула T и три деления delta/T доказаны bounded ASM, особенно
`101027d9..1010282e` и `10101d59..10101dae`. Ghidra здесь путает живые stack slots,
выдавая `unaff_ESI` и делитель `1.4013e-45`; их нельзя переносить в восстановленный код.
Вектор delta сохраняется до virtual callback, T также хранится на стеке и
перечитывается после него. Нет видимых clamp минимальной длительности, нормализации
углов до кратчайшей дуги или проверки speed>0. При zero/negative/nonfinite speed
полный результат зависит от SSE и scheduler; не считать эти входы безопасными.

Native vtables дверей из первого пакета содержат +04→10017110 и +08→1000e1f0.
Дополнительные vtables CBaseDelay/CBaseDMStart подтверждают ту же пару.
`10017110(T,mode)` вычисляет deadline относительно entvars+100 при movetype7,
иначе global time10223188[0]. У объекта без parent/children и без entvars.flags20h
пишет entvars+104 и object+58/+5c. Иначе пишет object+58, вызывает10018090 и
передаёт `(this,mode)` в100c4880. ASM доказывает второй аргумент, потерянный C;
его дальнейший смысл теперь установлен: mode управляет flag40 коррекции
скорости на долю кадра; см. [scheduler contract](contract-parent.md). Wrapper1000e1f0 передаёт mode0.

Supporting bodies100c4ed0/100c4b90 прибавляют velocity/avelocity родителя,
проходят child list object+1c/child+20 через100c4db0/100c4c90 и пишут результат
в entvars+20/+5c. Локальный sibling-loop ограничен100 и диагностирует превышение;
глубинный budget также ограничен100. Это не распространяется на остальные
рекурсивные операции origin/angles; подробности в [parent contract](contract-parent.md).
При обычных конечных delta и ненулевом конечном T относительная скорость
имеет заданную величину с погрешностью float; underflow/overflow требуют отдельной
проверки. Движение parent может менять итоговую мировую скорость. Ускорения/сглаживания в этой формуле нет.

## Завершение и владение callback

`LinearMoveDone` / `AngularMoveDone` лишь ставят DoneNow в think+78 и вызывают
100c4850. Они не вызывают door endpoint напрямую. Соответствующий DoneNow:

1. Вызывает velocity helper с вектором globals10222f34..3c.
2. Заново получает текущие parent origin/angles и ставит точную конечную world pose.
3. Вызывает10017ad0, затем completion+154 с ECX=this, если он ненулевой.

Linear использует100c4550, angular100c48e0→100c4920. Последний пишет angles,
пересчитывает parent-relative object+30 и обходит children. Потерянные в C
ветви выбора child pose восстановлены по ASM в [parent contract](contract-parent.md). Для linear окончательная pose основана на **текущем**
parent origin, а не на snapshot из MoveNow. Angular аналогично.
Completion не очищается автоматически: linear делает CALL, angular tail-JMP.
Пара door completion pointers1008d870/1008d6f0 тем самым связана с реальным
окончанием move, а CMomentaryDoor1008df60 — со сбросом собственного состояния/звука.
Нулевое значение globals-вектора и весь его lifecycle отдельно не предполагаются;
с parent даже нулевой relative velocity сохраняет скорость родителя.

## Ось и направления

`10101dc0(flags,A,B)` возвращает A.z-B.z при flags&40h, иначе A.x-B.x при
flags&80h, иначе A.y-B.y. `10101eb0(flags,A)` выбирает ту же компоненту без
вычитания. Используется младший byte, не знак 32-bit spawnflags.

`10101e00(entvars)` меняет movedir+44 только при его точном равенстве вектору
globals10222f34..3c. Приоритет: flag40→(0,0,1), flag80→(1,0,0), иначе(0,1,0).
Таким образом явно заданный axes/movedir сохраняется, если он отличается от
этого эталона; оба flags вместе выбирают Z.

`101021d0(out,x,y,z)` распознаёт (0,-1,0)→(0,0,1) и (0,-2,0)→(0,0,-1).
Иначе вызывает10119320 с angles и копирует global direction+28/+2c/+30 в out,
возвращая out. Полный внешней engine MakeVectors math здесь не восстанавливался.

## Master и KeyValue: не смешивать владельцев

`10102320` передаёт this+e4 в10017790, затем
10119060(this+17c,resolvedActivator). Возвращает1 именно когда master helper
вернул0, иначе0. Это inverted predicate IsLocked, не вызов target.

`10102480`: native строки101cb1e8="lip",101d7e30="wait"; parsed float→+110/+10c;
distance→+108; master через строковый allocator10223054→+17c. Остальные ключи
идут101023c0: delay(float)→+dc, killtarget(string ID)→+e0; fallback1000dba0.
Признанный ключ ставит KeyValueData+0c=1. Проверка диапазона delay/distance тут отсутствует.

`10102350` также понимает master, но пишет **entvars+1d4**, а не object+17c.
Owner подтверждён factory101019d0 (CBaseDMStart, size0xdc), vtable101df30c+34.
Он не является альтернативным parser CBaseToggle. Factory10101a30 устанавливает
CBaseDelay vtable101a3478, size0xec; slot+34 там101023c0. Native имена классов
и bindings сохранены, не определены по одному общему строковому ключу.

## FireTargets: выбор имени, activator и Use

`10101ff0(targetString,activator,caller,useType,value)` — пятиаргументная cdecl.
NULL target или исходный type6 → return. Prefix '+' принудительно ставит type1,
'-' type0 и сдвигает начало имени. Это применяется и к пришедшему type4:
killtarget с таким prefix может стать обычным Use, а не удалением.

Сначала10118500(NULL,fullName,originalActivator) ищет полное имя. Только если
ничего не найдено, разбирается первая конструкция `target(overrideActivator)`:
строка внутри скобок ищется с **originalActivator**; найденный объект становится
effectiveActivator. Затем ищется prefix target также с originalActivator.
Оставшийся suffix после ')' в этом разборе не проверяется. Missing ')' даёт
diagnostic и return. Context semantics10118500 и alias/group разобраны в [target contract](../server-targets/contract.md); engine matching/wildcard правила остаются внешними.

Временный buffer80. Оба strncpy происходят **до** bounds checks `<80` для
завершающего NUL; native ASM101020c9→101020d1 и10102102→1010210b подтверждает
порядок. Нельзя описывать parser как безопасно ограниченный80 символами.
Длинные/враждебные строки не исполнялись.

Iteration пропускает сущности с entvars.flags+1a8 &40000000h. Для type4
вызывает10119900(entity); иначе entity.virtual+e8(effectiveActivator,caller,type,value).
Следующий lookup использует предыдущую entity, выбранное target name и
originalActivator. После обычного завершения цикла вызывается10118700;
ранние выходы этой функции его не вызывают. Helper10118700 оказался flush отложенных alias, а не общим search-state cleanup;
контракт и reentrancy разобраны в [target contract](../server-targets/contract.md).
Удаление10119900 и все рекурсивные Use callbacks остаются отдельными зависимостями.

## CBaseDelay: где теряются value и исходный caller

ASM10102930 устанавливает thiscall сигнатуру `(activator,type,float value)`:
три аргумента, `ret 0ch`, в отличие от двух параметров Ghidra C.
Если оба target entvars+1cc и killtarget object+e0 нулевые — return.

При delay+dc!=0 создаётся temporary CBaseDelay через10101a30(0):
classname="DelayedUse"; scheduler virtual+08(delay); think=10101ee0;
type сохраняется в temporary.entvars+184, killtarget копируется в+e0,
target копируется в entvars+1cc, own delay=0, activator сохраняется в temporary+e4.
Исходный float value **не сохраняется**. Проверки результата фабрики перед deref нет.

DelayThink разрешает temporary+e4 handle, вызывает
10102930(resolvedActivator,savedType,0.0), затем engine10222fa0(temporary.edict).
Смысл slot10222fa0 согласуется с RemoveEntity SDK, точная реальная деструкция
остаётся внешним engine lifecycle. Сброс delay=0 предотвращает повторное создание
delay только этой веткой. При последующем FireTargets caller=this — уже temporary,
а не исходная дверь. Это точный контракт, не сохранение всей исходной команды.

При delay==0 сначала killtarget→10101ff0(name,activator,this,4,0), затем, если
обычный target всё ещё ненулевой,10101ff0(name,activator,this,type,value).
KillTarget может вызвать внешнее удаление/Use до чтения обычного target; код
перечитывает entvars после этой операции. Lifetime/reentrancy гарантий из этого
порядка самостоятельно не следует.

## Trace между view positions

`10101f20(entvarsA,entvarsB)` складывает origin+8 с view offset+178 для обеих
сторон, вызывает1011a800(start,end,1,A.edict,trace). Native helper прыгает в
engine slot10222fc4; SDK layout соответствует TraceLine.
Return1 только если `(trace.+8==0 || trace.+c==0) && fraction(+10)==1.0`.
В SDK это `(!fInOpen || !fInWater) && fraction==1`, а не проверка
`!fAllSolid && !fStartSolid`: первые два DWORD trace вообще не читаются.
Содержимое engine trace и поведение мира здесь не запускались/не восстанавливались.

## Что теперь закрыто, что остаётся

Закрыты entry→MoveNow→Done→DoneNow→door callback, native duration/velocity formula,
parent offset при старте/окончании, передача targets и состояние временного DelayedUse.
Это дополняет вопросы1/часть3 из первого contract, не переписывает замороженные карточки.

Следующий [parent пакет](contract-parent.md) закрыл dispatch flags80/100,
scheduler MoveWith и child velocity propagation. Поиск целей, master state==2 и alias flush раскрыты в
[target contract](../server-targets/contract.md);10119900 (deferred removal) остаётся отдельной границей.
Engine collision/pusher integration,
изменение parent во время движения и ошибки чисел отдельно не объявлены восстановленными.
