# MoveWith: дерево, scheduler и временная коррекция скоростей

Статический разбор **21 новой функции** исходного server `hl.dll`. Карточки —
`notes-parent.json`; исходные C, диапазоны PE и bounded ASM с SHA256 —
`evidence-parent.json` и `asm-parent/`. Общие каталог, исходники порта и ресурсы
не менялись. Игра не запускалась. Предыдущие дверные контракты находятся в
`contract.md`, LinearMove/AngularMove и endpoint callbacks — в `contract-extra.md`.

Здесь восстановлена связь между MoveNow/DoneNow и очередью assist, а также
правила движения дочерних объектов. Это не описание физики игрока и не полный
движковый алгоритм столкновений pushers.

## Карта данных и владельцев

Все смещения в таблице шестнадцатеричные. `entity` — private C++ object;
`pev = *(entity+4)` — другой объект, со своим пространством смещений.

| Поле | Смысл, доказанный чтениями и записями |
|---|---|
| entity+14 | MoveWith parent |
| entity+1c / +20 | первый child / следующий sibling |
| entity+24..2c | local origin, разность world origin и parent origin |
| entity+30..38 | local angles, покомпонентная разность углов |
| entity+3c | next в отдельном AssistList |
| entity+40..48 | сохранённая временная world velocity |
| entity+4c..54 | сохранённая временная world avelocity |
| entity+58 | desired think deadline |
| entity+5c | копия native nextthink при записи scheduler |
| entity+60 | набор scheduler/assist flags |
| pev+8..10 / +20..28 | origin / velocity |
| pev+50..58 / +5c..64 | angles / avelocity |
| pev+100 / +104 / +108 | ltime / nextthink / movetype |
| globals10223188+0 / +4 | time / frametime |
| global10223190 | объект-sentinel AssistList, первый элемент в sentinel+3c |
| global1022318c | режим doingDesired: запросы assist исполняются немедленно |

Контекст инициализации: существующее тело `10120eb0` записывает свой ECX в
`10223190` и обнуляет `this+3c`. Это прямое доказательство владельца sentinel;
весь большой precache/init body не объявлен новой полностью разобранной карточкой.
Названия pev/globals полей согласованы с локальными
`external/hlsdk-portable/engine/progdefs.h`, а movetype7 — с MOVETYPE_PUSH в
`common/const.h`. Совпадение SDK не подменяет чтение нативных offset.

| Flag entity+60 | Producer и consumer |
|---|---|
| 08 | saved velocity действительна; 100c3fa0/4240 → 100c41b0 |
| 10 | saved avelocity действительна; те же функции |
| 20 | desired deadline требует assist; 100c4880 → 100c4240 |
| 40 | разрешена коррекция скоростей на долю кадра; 100c4880 → 100c4240 |
| 80 | pending desired work; 100c48b0 → 100c3e50 |
| 100 | запрос virtual think+e0; 100c4850 → 100c3e50 |
| 200 | запрос восстановления скоростей; 100c4830 → 100c41b0 через dispatcher |
| 400 | diagnostic DesiredInfo; 100c4810 → 100c3e50 |
| 800 | запрос virtual slot0; 100c47f0 → 100c3e50 |

Смысл slot0 зависит от vtable конкретного объекта. Diagnostic400 разыменовывает
первого child без NULL проверки. Эти flags не являются pev.flags.

## Планирование времени и реальное исполнение callback

`10017110` — thiscall `(float delay, int correctionMode)`, `RET 8`.
`100171b0` — thiscall `(float absoluteTime, int correctionMode)`, тоже `RET 8`.
Ghidra потерял второй аргумент у обеих функций. В parent-aware ветках ASM
передаёт его в `100c4880(entity, mode)`.

Для относительного scheduler часы выбираются так:

```
clock = pev.movetype == 7 ? pev.ltime : globals.time
target = clock + delay
```

Прямой путь `10017110` допустим только без parent, без child и при
`(pev.flags & 0x20)==0`. Он пишет target в native nextthink, desired+58 и
cached+5c. В остальных случаях пишет desired+58, вызывает `10018090`, затем
`100c4880`. Абсолютный scheduler отличается: проверяет только parent/child,
не проверяет pev.flags20; target не складывает с clock.

`10018090` рекурсивно у каждого movetype7 заменяет nextthink на
`float(double(ltime)+1000000.0)` и копирует его в entity+5c. Desired+58
сохраняется. Для других movetypes native nextthink не изменяется, но обход
потомков продолжается. Миллион подтверждён double literal в PE.

`100c4880` ставит flag20, выставляет либо очищает40 по mode и непосредственно
добавляет entity в AssistList через `100c44e0`. Он не ставит80 и не использует
ветку немедленного desired dispatch.

MoveNow/DoneNow из предыдущего пакета назначаются через `100c4850`:

```
LinearMove / AngularMove / MoveDone:
  entity.think+78 = соответствующий Now callback
  100c4850(entity): flags |= 100
    → 10017ad0 CancelThink (ECX=entity)
    → 100c48b0: flags |= 80
       doingDesired != 0 → 100c3e50(entity) прямо сейчас
       doingDesired == 0 → 100c44e0 AddToAssistList(entity)
```

`10017ad0` уже имел отдельную REVIEW карточку. Он обнуляет desired+58,
а nextthink/+5c — только без parent/child. Новый пакет не переименовывает
старую карточку.

`100c3e50` также был разобран ранее; ASM здесь подтверждает точный порядок:
снять80 → снять800 и вызвать virtual0 → снять400 и diagnostic → снять200 и
восстановить скорости → снять100 и вызвать virtual+e0 с ECX=entity.
Flags перечитываются между стадиями. Callback может ставить новые flags, поэтому
это не снимок всех операций на входе. При doingDesired новые запросы могут
рекурсивно исполниться внутри текущего callback.

## Два прохода списка

`100c40c0` проходит AssistList и вызывает deadline checker100c4240.
После callback он перечитывает `previous.next`, а не полагается на старую
локальную current. Если текущий объект больше не имеет20 или80, его исключают
из списка и обнуляют next+3c. Возвращаемое значение checker не используется.
В этом обходе нет лимита длины.

`100c4120` устанавливает doingDesired=1 и исполняет100c3e50 для каждого
элемента. Здесь next сохраняется **до** callback. Лимит1000 уменьшает после
каждого вызова; diagnostic на тысячном вызове срабатывает даже при next=NULL.
Обычные выходы обнуляют doingDesired. Однако NULL sentinel ведёт к раннему
diagnostic/return **без сброса doingDesired** — это подтверждено C и ASM
100c4144..4163, а не предлагаемое поведение реконструкции.

Существующий wrapper1001e770 сначала вызывает virtual+250 у private object
edict (при наличии), восстанавливает globals.frametime из10222dfc, затем
tail-JMP в100c4120. ASM закрывает двусмысленный terminal-call комментарий
Ghidra: здесь нормальный хвостовой переход, не доказательство no-return.
Соседний1001e7b0 вызывает virtual+24c и сохраняет frametime в10222dfc.
Дополнительный [dispatch-разбор](../server-dispatch/contract.md) установил EntityAPI slots23/24: PreThink1001e7b0 и PostThink1001e770. StartFrame1001ece0 slot25 вызывает100c40c0 после gate; ServerDeactivate1001ea70 slot22 обнуляет sentinel. Полный порядок engine calls этим не установлен.

## Deadline внутри кадра: что именно масштабируется

Для обычных конечных чисел `100c4240` делает следующее:

1. При frametime==0 или отсутствии20 возвращает0 без работы.
2. При desired<=0 очищает20 и возвращает0.
3. Положительный deadline в будущем (`deadline>clock+dt`) возвращает1,
   оставляя задачу назначенной.
4. При достигнутом сроке вычисляет `f=(deadline-clock)/dt`. Если f==0,
   возвращает1, **не ставит think** и оставляет20.
5. При f!=0 и flag40 выполняет временную коррекцию ниже; без40 пропускает её.
6. Запрашивает think через100c4850, затем очищает20 и возвращает1.

При коррекции исходные world v и w сохраняются в+40/+4c только если
соответствующие saved flags ещё не стоят. Формулы:

```
без parent: vNew = vOld*f; wNew = wOld*f
с parent:  vNew = parentV + (vOld-parentV)*f
           wNew = parentW + (wOld-parentW)*f
deltaV = vOld-vNew
deltaW = wOld-wNew
100c3fa0(entity, deltaV, deltaW)
100c4830(entity)  // request saved-velocity restore
```

`100c3fa0` сохраняет скорости каждого потомка один раз и вычитает одинаковые
deltaV/deltaW на всех уровнях. Root он не меняет. `100c41b0` позднее
восстанавливает root и потомков по saved flags, очищает flags и перезаписывает
saved vectors значениями globals10222f34..3c. Это не прибавление обратной
дельты: восстанавливается исходный snapshot.

`f` не ограничена[0,1]. Просроченный deadline при положительном dt может
дать отрицательную скорость. Проверки finite/NaN отсутствуют; формулы выше
не утверждают поведение exceptional FP inputs. При уже активном doingDesired
запрос восстановления может выполниться немедленно — фиксированный разрыв
между двумя кадрами из этих функций не следует.

## Присвоение origin/angles: потерянные C ветви восстановлены по ASM

`100c4550(entity,XYZ)` вызывает100c4590 с updateLocal=1.
Тот сохраняет delta=newOrigin-oldOrigin, вызывает10119fe0 и при parent
перезаписывает local origin, если updateLocal!=0. Supporting10119fe0 передаёт
вектор в engine callback10222fb8; при virtual+d0()!=0 дополнительно обновляет
object+618..620. Полная принадлежность этих дополнительных полей здесь не
объявлена восстановленной.

Для каждого child ASM100c4724..47cc выбирает:

| Условие | Новая child origin |
|---|---|
| child.movetype==7 и хотя бы одна child.velocity != parent.velocity | child.currentOrigin + delta |
| иначе | newOrigin + child.localOrigin |

Затем вызывает100c4590(child,target,0), сохраняя локальный offset child.
В C этот выбор пропущен: остался только пустой вызов внутри цикла.

`100c48e0` аналогично вызывает100c4920 с updateLocal=1, но тот напрямую
пишет pev.angles, без engine SetOrigin. Для angular recursion:

| Условие | Новые child angles |
|---|---|
| все child.avelocity точно равны parent.avelocity | newAngles + child.localAngles |
| иначе | child.currentAngles + deltaAngles |

Здесь movetype7 gate **нет**. Рекурсивный updateLocal также0.
Неравенство включает unordered FP comparison; epsilon отсутствует.
Нет преобразования позиции матрицей поворота, angle wrapping или защиты
от циклического дерева. Diagnostic для delta length>0.01 включает реальный
cvar **`sohl_mwdebug`**, прочитанный из PE, и не блокирует присвоение.

## Линейные и угловые скорости

`100c4ed0` принимает requested relative velocity; `100c4b90` — requested
relative avelocity. При parent прибавляют его текущую world скорость.
Перед записью root они распространяют новый world vector по детям.

`100c4db0` и100c4c90 соответственно вычисляют:

```
childNewWorld = newParentWorld + (childOldWorld - oldParentWorld)
```

Рекурсия идёт **до записи** текущего объекта: иначе его дети потеряли бы
oldParentWorld. В каждом sibling списке предел100 вызовов, глубинный budget
также стартует100 и уменьшается на уровень. При отсутствии parent либо
budget<1 helper печатает diagnostic и не меняет текущий объект. На сотом
sibling diagnostic появляется даже если next ужеNULL. Это ограничение не
распространяется на origin/angles recursion, save/restore или defer-think.

Здесь нет cross-product `omega × offset` и нет автоматического расчёта
касательной линейной скорости от угловой. Requested relative zero оставляет
world parent velocity/avelocity; это объясняет, почему DoneNow не обязан
обнулять world движение child.

## Точные оставшиеся вопросы

- Binding обоих проходов теперь описан в [dispatch contract](../server-dispatch/contract.md). Открыты полный engine frame order, player pairing и pusher/collision steps; локальные wrapper/caller уже найдены.
- Построение и разрушение parent/child/sibling графа, проверки циклов и
  reparenting. UpdateOnRemove10102c50 принадлежит параллельному global-state
  разбору; этот пакет не обещает валидность всех входных деревьев.
- Реализации virtual0 и virtual+e0 по конкретным class vtables. Общий dispatch
  доказан, но callback identity нельзя присвоить всем объектам одинаковую.
- Движковая SetOrigin10222fb8 и pusher collision/physics, включая условия
  ltime advance, не заменены выдуманным точным переносом в новый движок.
- Удаление объекта callback и сохранённый next при100c4120: lifetime guarantee
  не следует из имеющегося обхода. No-runtime анализ не проверяет его на карте.

Эти границы не мешают использовать доказанные формулы и ABI для ориентации,
но отделяют восстановленный код от ещё не подтверждённого поведения игры.

Создание, смена и удаление parent links, BASE save fields, Attach/Use differences и bounds дополнены в [parent tree](../server-parent-tree/contract.md). Wire relocation BASE полей разобран в [serializer](../server-serializer/contract.md).
