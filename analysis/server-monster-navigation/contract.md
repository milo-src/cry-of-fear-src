# Навигация и yaw монстров: 10 функций оригинального server hl.dll

Статический разбор сохранённых C, ограниченных диапазонов objdump и байтов PE.
SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Бинарник не запускался; новые REA сессии, сборка и игра не нужны. [capture.py](capture.py)
пересоздаёт [evidence.json](evidence.json) с проверкой каждого ASM byte row против PE.
Названия функций ниже аналитические; никаких исходных PDB имён этим не заявляется.
Адреса, смещения и маски — hex; численные дистанции, углы и счётчики — decimal.

## Карта и границы

| Entry | Аналитическая роль | ABI |
|---|---|---|
|100be5b0|YawAligned|ECX monster, полный EAX0/1, RET|
|100bed20|YawDelta|ECX monster, ST0 float-valued result, RET|
|100c00f0|MakeIdealYaw|ECX monster, Vector BY VALUE (3 float), RET12, void|
|100c1ab0|RouteNew|ECX monster, RET, void; только 2 записи|
|100c1a70|RouteClear|ECX monster, RET, void; расширенный сброс|
|100c1080|MoveToLocation|ECX monster, (int activity,float wait,Vector* goal), RET12, EAX refresh result|
|100c1120|MoveToTarget|ECX monster, (int activity,float wait), RET8, EAX refresh result|
|100bddb0|RefreshRoute|ECX monster, RET, полный EAX0/1|
|100bcbc0|BuildRoute|ECX monster, (Vector* goal,uint flags,entity* target), RET12, EAX0/1|
|100be5e0|FindCover|ECX monster, (Vector source,Vector viewOffset,float min,float max) BY VALUE, RET32, EAX0/1|

C-возвраты void у1080/1120 ошибочны: после call100bddb0 идёт только POP EBP/RET,
EAX не меняется; StartTask и FindCover проверяют его. Никаких дополнительных скрытых
аргументов не требуется. Вызовы EHANDLE внутри RefreshRoute не потребляют приготовленные
аргументы BuildRoute, хотя декомпилятор местами присоединяет stack values к ним.

Связь с owner: сохранённый factory100b05e0 создаёт CGenericMonster с таблицей101ce36c.
Её slot1c8=100be5e0; slot158=100bd590 (local-move test), slot1bc=100bdf80 (detour
candidate), slot1cc=10013480 (в этом классе EAX1, RET4). Это concrete dispatch, не
утверждение об одинаковых overrides всех монстров. Script/path-chain entities в
RefreshRoute используют собственный virtual+dc; generic monster table+dc=100176f0
(FindTargetname по pev.target), но это не доказывает таблицу каждого звена цепи.

## Состояние и владение

| Поле this | Установленный смысл |
|---|---|
|+4|entvars*|
|+0c|borrowed move-target entity pointer для цепи goal10|
|+184 /+18c|enemy/target EHANDLE, native m_hEnemy/m_hTargetEnt|
|+238 + i*10|route[i].position (3 float), i=0..7|
|+244 + i*10|route[i].flags (DWORD)|
|+2b8|текущий тип цели: 0,1,2,10,20,40; не флаговый switch|
|+2bc|индекс текущей точки маршрута|
|+2c0|float параметр ожидания, который записывают MoveTo*; полное потребление вне пакета|
|+2c4|m_vecMoveGoal (native descriptor)|
|+2d0|m_movementActivity (native descriptor)|
|+2ec|m_afMemory (native descriptor)|
|+2f4|m_vecEnemyLKP (native descriptor)|
|+304|m_afCapability (native descriptor), передаётся graph helpers|

Native CBaseMonster table10216e08 сохраняет имена перечисленных явно названных полей.
Route array/index/goal kind/wait+2c0 в её 49 descriptors отсутствуют; это не вывод об
отсутствии любой иной сериализации. Native ENTVARS table1021aae0 закрепляет origin+8,
angles+50, ideal_yaw+ac и sequence+12c. RouteClear пишет **соседний DWORD pev+130**;
название gaitsequence соответствует SDK ABI, но native save table его не называет,
поэтому доказанный контракт здесь оставлен как offset130, не sequence+12c.

Route storage встроен в объект: функции не выделяют и не освобождают память. Векторы
копируются побитово по12 bytes. Ссылки на entities/nodes borrowed; lifetime handles,
общего графа и корректность указателей предполагаются. Return0 не означает откат.

## Два разных сброса

100c1ab0 обнуляет только flags первой точки+244 и индекс+2bc. Старые координаты,
остальные семь flags, тип цели, moveGoal и activity остаются. Это sentinel reset,
не memset массива.

100c1a70 сначала вызывает1ab0, затем pev+130=0, memory&=~20, goalKind+2b8=0,
movementActivity+2d0=1. Не меняет velocity, currentActivity+214, idealActivity+218,
moveGoal+2c4, wait+2c0 и task status. Поэтому техническое «очищает маршрут» нельзя
расширять до полной остановки физического движения. Restore и task completion
используют именно этот более широкий reset; см. [scheduler](../server-monster-scheduler/contract.md).

## Yaw: точная арифметика и исключения

100bed20 получает float-rounded `current=10117420(pev.angles.y)`, читает desired=pev.ideal_yaw. Exact equality даёт ST0 +0.0; иначе
возвращает10117360(desired,current). Никаких записей в angles/ideal_yaw нет.

Support10117360 вычисляет float d=desired-current. Если desired>current и d>=180,
вычитает360; иначе если desired<=current и d<=-180, прибавляет360. Это максимум
одна поправка, не повторная нормализация. Граница +180 возвращает-180, граница
-180 возвращает+180 для соответствующих ветвей.

**Нативный10117420 нельзя заменять стандартным modulo по названию:** для a<0
ASM выполняет float division на-360, CVTTSS2SI, integer `(1-q)*360`, float conversion
и прибавляет a. Raw101e5a58=-360.0, инструкция10117444 SUB ECX,EAX. Поэтому a=-90
даёт270, a=-360 даёт-360, a=-450 даёт-450; «всегда диапазон0..360» неверно. Для
finite a>=360 положительная ветка a-trunc(a/360)*360. Это наблюдение original
support helper, не новый REVIEW этой функции. Overflow/NaN/Inf не объявляются
обычной математической нормализацией.

100be5b0 округляет YawDelta доfloat, снимает sign bit ANDPS7fffffff, расширяет вdouble
и сравнивает с rawdouble0.006 (101d54b0, bytes fa7e6abc7493783f). Полный EAX1 iff
abs(delta)<=0.006; NaN даёт0 через COMISD/SETAE. Это angular tolerance, не время и
не float0.006, расширенный доdouble. Используется RunTask для завершения поворота.

100c00f0 не меняет yaw при exact classname monster_slowerstuck/monster_spitter,
либо при BYTEthis+9!=0. Смысл последнего флага здесь не расширяется. В остальных
случаях берёт **абсолютный входной target**, преобразует XY согласно movementActivity:

- activity0xb: (x,y,z)→(-y,x,z);
- activity0xc: (x,y,z)→(y,x,z), без отрицания x;
- иначе исходный вектор.

Затем вычитает self.origin из всех трёх компонент, передаёт адрес временного Vector
в1011a930 и пишет ST0 float вpev.ideal_yaw. Перестановка сделана до вычитания origin:
это не привычное вращение target-origin. API thunk1011a930→10222f6c, slot9 таблицы
enginefuncs10222f48 (GiveFnptrs100b4aa0) соответствует VecToYaw. Вызов сохраняет
обычные C stack args, сам helper yaw не интерполирует и не поворачивает angles.

## MoveTo и RefreshRoute

MoveToLocation1080 пишет activity, wait, goalKind40, копирует goal в+2c4, вызывает
RefreshRoute и возвращает его EAX. MoveToTarget1120 пишет activity, wait, goalKind1;
moveGoal не копирует. Обе функции сохраняют эти записи при failure.

RefreshRoute всегда начинает с RouteNew. Далее switch **точных** значений goalKind:

| Goal kind | Действие / возврат |
|---|---|
|1|EHANDLE target+18c должен пройти10017780; затем entity через10017790/100177a0, BuildRoute(target.pev.origin,1,target). Приinvalid0. Отдельной проверки private entity pointer нет.|
|2|BuildRoute(enemyLKP,2,EHANDLE enemy+184 через10017790); enemy может бытьNULL.|
|10|Начать сthis+0c; до8 звеньев записать origin,flags10; взять next через virtual+dc. ЕслиnextNULL, добавить80 текущемуflags. Вернуть1 даже при изначальномNULL и пустомroute; если цепь длиннее8, вернуть1 без80 на восьмой точке.|
|20|100bdc10(moveGoal BY VALUE), передать EAX.|
|40|BuildRoute(&moveGoal,40,NULL), передатьEAX.|
|other|0 после уже выполненного RouteNew.|

Goal1,2,40 BuildRoute ещё раз вызывают RouteNew. Goal10 не обновляет this+0c,
не проверяет циклы; bound8 ограничивает только данный вызов. Результат1 не гарантирует
конечный пункт в восьми точках. Raw6-target table100bded8 и64-byte remap100bdef0
сохранены отдельно.

## BuildRoute100bcbc0

1. RouteNew; helper100c1a20(flags) выбирает первое присутствующее из1,2,10,20,40
   (именно этот приоритет), иначе0; записать вgoalKind. route[0]=goal,
   route[0].flags=flags|80.
2. Virtual158(&self.origin,goal,target,&distance). Четвёртый аргумент — адрес
   stack slot бывшего входного goal pointer; оригинальный pointer сохранён вEDI.
   Приreturn2 сразу вернуть1. Приreturn1 пропустить detour и идти кgraph fallback.
3. При другом результате вызвать virtual1bc(&self.origin,goal,distance,target,&apex).
   Это две Vector pointers, float, entity*, выход Vector*. Еслиtrue: route[0]=apex,
   flags=flags|8; route[1]=goal,flags=flags|80;100c1ad0(target); вернуть1.
4. Иначе100bdc10(goal BY VALUE). Если0 вернуть0; еслиnonzero копировать goal в
   m_vecMoveGoal,100c1ad0(target), вернуть1.

Ветви direct/detour не записывают m_vecMoveGoal сами. При failure prefilledroute[0],
goalKind и reset index остаются; clear/failure rollback отсутствует. Флаги входа не
ограничиваются известной маской: добавление8/80 не очищает уже переданные биты.
На custom virtual158 ожидается записьdistance при нужном результате: caller не
инициализирует отдельный float значением0. Здесь нельзя делать вывод о валидности
out-param для произвольного override.

Concrete generic virtual158100bd590 содержит шаговую проверку локального движения;
его0/1/2 различаются, поэтому сведение к bool в BuildRoute изменит управление.
Detour100bdf80, simplifier100c1ad0 и local-move100bd590 теперь имеют самостоятельный
разбор локальных ветвей в [pathfinding, проход04](../server-monster-pathfinding/contract.md).
В исходных десяти карточках этого пакета они остаются support; новые доказательства
и ограничения алгоритмов находятся в отдельном пакете.

Support100bdc10 действительно возвращает EAX0/1, хотя Cvoid: failure0, success1,
security cookie normal branch сохраняет EAX (ASM1013dbb3). Он ищет nearest nodes,
строит node route через100cd5e0, копирует максимум8 точек сflags20; когда их меньше8,
добавляет finalgoal и OR80 в существующийflags этой ячейки. Детали pathfinder/ошибочных
negative counts раскрыты в указанном пакете pathfinding, но не объявлены безопасными.
Проверка graph ready непосредственно в100bdc10 отсутствует; callee nearest100ccea0
проверяет graph+0/+4. Это не проверка всех указателей, индексов или ёмкости output.

## FindCover100be5e0: локальные ветви полностью

Восемь stack floats: два Vector BY VALUE и min/max. Если max exact0 (+0/-0), max=784.0.
Если min>double(max)*0.5, min=float(double(max)*0.5). Другого clamp/positivity guard нет.
При graph DWORD102238b0==0 или+4==0 →AlertMessage severity2 иEAX0.

Приготовление сECX=graph102238b0: nearest(self.origin,this), nearest(source,this),
hull selector100cde50(this). Еслиself nearest==-1 —severity2,0. Еслиsource nearest==-1,
заменить егоself nearest. sourceEye=source+viewOffset. nodeCount=DWORD102238c8;
если<=0 вернуть0. Node array pointer102238bc, stride58, позиция первые3float.

Для i=0,1,... с текущимpositive count:

1. index=(DWORD10225978+i) signed remainder count (IDIV), записать globalCursor=index+1.
   Это **не** `(initialCursor+i)%count`: cursor обновляется в теле. При стабильномcount4,
   начальномcursor0 и отсутствии раннегоsuccess проверки идут0,2,1,1 — узел3 не посещён.
   Отрицательный/переполненныйcursor не нормализуется отдельной проверкой.
2. Расстояние3D self.origin→node.position: float сумма квадратов, sqrt double,
   затемfloat rounding. Допускается min<=distance<max (верхняя граница исключена).
3. nodeEye=node.position+тот жеviewOffset. TraceLine(nodeEye,sourceEye,1,1,self.edict,&tr)
   через1011a820; helper преобразует флаги в0x101 и передаётengine slot31 TraceLine.
   Читаетсяtr+10 fraction. Только fraction!=1 идётдальше; других traceflags/точного
   blocker identity не проверяет. NaNfraction также неравен1 на native equalitytest.
4. Еслиnearest self/source различаются, получить float-rounded graph route costs
   selfNode→candidate иsourceNode→candidate через100ceaa0(hull,capabilities).
   При sourceCost<selfCost пропустить; unordered comparison также пропускает.
   Это path costs, не непосредственная евклидова дистанция. helper error0 не имеет
   здесь отдельной обработки; нельзя читать этотguard как доказательство достижимости.
5. Virtual1cc(nodePositionPointer) должен вернутьnonzero. Тогда MoveToLocation(4,0,node).
   Приnonzero вернуть1; при0 продолжить. Каждый failed attempt мог изменить monster route
   иactivity — FindCover не сохраняет/восстанавливает их вокруг кандидатов.
6. После trace/cost/predicate/move paths count перечитывается изglobal, затем++i;
   продолжать покаi<count. Для раннего distance reject используется уже имеющийсяcount.
   По исчерпании0. Cursor сохраняется даже при общем failure.

Predicate1cc в CGenericMonster —10013480 EAX1 RET4, то есть в данном concrete классе
дополнительной проверкинет; derived overrides могут отказать. Trace/cost/move guards
не обеспечивают уникальный перебор всехузлов. Graph pointers/count/lifetime не
проверяются универсально. Никаких runtime claims об отсутствии/наличииукрытия.

## Разобранное продолжение и оставшиеся границы

Прежняя очередь из11 адресов закрыта отдельным статическим пакетом
[server-monster-pathfinding](../server-monster-pathfinding/contract.md):
100bd590 local move,100bdf80 detour,100c1ad0 simplifier,100c23e0 flags predicate,
100bdc10 node-route assembly,100cd5e0 path search,100ccea0 nearest node,
100ce8c0 node category,100ce830 next-hop,100cdcb0 hash lookup,100ceaa0 route cost.
Это разбор native ветвей и ABI, а не доказательство корректных runtime inputs.

Продолжение graph helpers, producer сжатых маршрутов, graph load/save/reset/hash/cache теперь разобрано в [graph helpers](../server-graph-helpers/contract.md), [graph lifecycle](../server-graph-lifecycle/contract.md) и [route precompute](../server-graph-precompute/contract.md). Эти адреса исключены из pending. Подтверждены cached-pivot/start255, сохранение cache при Load и producer identity128→tag80; реальные данные карт не проверялись.

Builder, reorder и node/viewer lifecycle разобраны в [graph builder](../server-graph-builder/contract.md), [ordering](../server-graph-ordering/contract.md), [entities](../server-graph-entities/contract.md). Остаются ёмкость route output у всех callers, внешние CRT/engine гарантии и derived overrides. Подробные открытые вопросы — в концах трёх пакетов; support не равен REVIEW.

Смежная анимация разобрана отдельно: [состояние и wrappers](../server-animation-state/contract.md)
и [studio dispatch/controls](../server-studio-controls/contract.md). Эти пакеты не
закрывают engine WalkMove/DropToFloor internals или lifetime graph/model данных.
Исторические десять карточек и evidence этого пакета неизменны. Все таблицы/const
в evidence содержат PE bytes, а mutable BSS globals перечислены как
unbacked_operands: их runtime значения не выдуманы.
