# Graph helpers: classification, dynamic links, nearest candidates and heap

Статический разбор десяти сохранённых функций оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Оригинал не запускался и не изменялся. Адреса, offsets и masks ниже hexadecimal; размеры, индексы, целые числа в формулах и float constants — decimal. Предложенные имена служат навигации, не являются найденными PDB symbols.

[capture.py](capture.py) повторяет bounded objdump и побайтовую проверку по PE. [evidence.json](evidence.json) фиксирует 21 C и 21 ASM, native ENTVARS descriptors, две door vtables, raw operands/strings и хэши supporting sources. Важное исключение сохранено: metadata C для `100cbd50` заканчивается на `100cbd5e`, но native body продолжается до `RET 16` на `100cbfd1`, конец exclusive `100cbfd4`. C не исправлялся; расширение только ASM записано в `range_corrections`.

## Владельцы данных и связи

Это продолжение [pathfinding](../server-monster-pathfinding/contract.md). У graph object `+0/+4` — readiness gates, `+0c` — node array со stride `58`, `+24` — search records со stride `10`, `+1860` — generation. Candidate search меняет общий scratch state graph; это не отдельный result object. Allocation, load/save, generation initialization и cache invalidation принадлежат соседнему lifecycle audit, не выводятся из этих helpers.

Очередь — отдельный object: signed count в `+0`, записи по `+4+i*8`, каждая содержит DWORD node ID и float32 priority. По caller `100cd5e0` это stack workspace, который инициализируется `100ca6e0`, заполняется `100ce040` и извлекается `100cef50`; проверка count перед pop находится у caller. Heap helpers не выделяют и не освобождают память. Их локальный guard на 100 не доказывает ёмкость произвольного переданного object.

Инициализатор `100b4aa0` копирует 144 engine entries в `10222f48`; сопоставление с сохранённым `eiface.h`: slot31 TraceLine=`10222fc4`, slot61 AlertMessage=`1022303c`, slot69 PEntityOfEntOffset=`1022305c`, slot70 EntOffsetOfPEntity=`10223060`. Имена полей entvars подтверждены native ENTVARS table, а не предположением по SDK layout. Door factories `1008ce10/1008ced0` записывают `101bf290/101bf59c`; обе vtables имеют `+80=100102c0`, который возвращает private object `+100`. Это `m_toggle_state` из [door contract](../server-queue-b/contract.md), не IsLocked.

## 0x100cd530 — Graph_FindNearestNodeForEntity [high]

Преобразует свойства сущности в маску категорий и возвращает ближайший подходящий узел.

ABI: ECX=graph, stack `(Vector* query, entity*)`, `RET 8`, EAX — неизменённый результат `100ccea0`, несмотря C `void`. Сохраняет graph в ESI, вызывает `100ce8c0(entity)`, затем `100ccea0(query, categoryMask)` с исходным graph. Vector передаётся указателем; это не Vector by value и не копия позиции сущности.

Support classifier возвращает 1 при `pev.movetype != 5`; при movetype5 возвращает 4, если waterlevel ненулевой и watertype не равен -19 decimal, иначе 2. Это mask categories, не hull index следующей функции. Wrapper сам не проверяет NULL entity/query, graph readiness, node bounds или model. Возвращаемый -1, coordinate-only cache, signed SHORT cache hit и мутации search scratch принадлежат `100ccea0`; wrapper их не исправляет. Ближайшая точка не доказывает доступный полный маршрут.

## 0x100cde50 — Graph_SelectHullIndexFromEntityMins [high]

Выбирает индекс hull по movetype и точным mins сущности, без проверки maxs.

Один stack argument entity*, `RET 4`, EAX=0..3; входной ECX не используется. Сначала dereference `entity+4` в pev. При `pev+108 == 5` сразу 3, независимо от mins. Иначе точное ordered equality `mins(dc,e0,e4)==(-12,-12,0)` даёт 0; `(-32,-32,0)` даёт 2; остальные значения дают 1. В native есть повторный тест первого triple перед вторым, его нельзя использовать как дополнительную классификацию: первый matching triple уже вернул 0.

Сравнения `UCOMISS; LAHF; TEST AH,44; JP` отличают equality от unequal/unordered. NaN в любом требуемом компоненте не проходит triple; +0 и -0 равны. Constants `101d7648/101d764c` имеют raw float -12/-32. Не читает maxs, size, duck flags, classname, water fields или capabilities. NULL pointers и повреждённые entvars не отсечены. Возврат — именно индекс для четырёх link-mask вариантов; он не равен category mask из `100ce8c0`.

## 0x100cd990 — Graph_AllowsDynamicLinkEntity [high]

Решает, можно ли учитывать link с brush entity, по readiness, classname, door state, flags и capability bit.

ABI: ECX=graph, stack `(unusedNode, entvars*, uint capabilities, int mode)`, `RET 16`, EAX всегда 0/1 на обычном возврате. Первый stack argument не читается. Graph `+0==0` или `+4==0` печатает AlertMessage severity2 `Graph not ready!` и возвращает 0. NULL entvars либо engine EntOffsetOfPEntity(entvars.pContainingEntity) == 0 печатает `dead path ent!` и возвращает **1**. Это проверка результата engine offset lookup, не proof edict/private-pointer validity и не `IsValid` predicate.

Case-sensitive classifier `1000aaf0` сравнивает classname из engine string pool. `func_door` и `func_door_rotating` идут в door branch. `func_breakable` разрешён только при mode==1; любой другой class либо breakable с иным mode печатает severity2 `Unhandled Ent in Path %s` и возвращает 0. `func_water` не попадает в door branch только на основании общей CBaseDoor factory.

Door private object получается из `pev.pContainingEntity+7c`; если pContainingEntity NULL, сначала engine PEntityOfEntOffset(0), и при NULL результате private pointer становится NULL. Перед дальнейшим virtual call отдельной проверки private pointer нет. Обозначим F=pev.spawnflags(+1a4), C=capabilities, Q=virtual+80(). Native generic door Q читает toggle state: 0 top, 1 bottom, 2 moving up, 3 moving down. Здесь state0 означает только конкретное числовое состояние, не универсальное «дверь достижима».

Если F&100: C&200 сразу даёт 1 без Q; иначе вызвать Q и разрешить ровно при Q==0 и F&20. Если F&100 сброшен: сначала вызвать Q; Q==0 и F&20 сразу даёт 1. Иначе разрешить, если C&200 и одновременно (F&200 сброшен ИЛИ mode==1); все прочие пути дают 0. Flag20 перечитывается после Q, затем могут перечитываться остальные flags; callback не объявлен чистым для произвольных overrides.

Другие capability bits, здоровье breakable, геометрия, master/locked target, targetname и скорость двери не проверяются. Собственных graph/entity writes нет, но diagnostic/engine/virtual calls остаются внешними. Динамическое уничтожение entity и нестандартные virtual tables здесь не моделируются. Link permission не равен фактическому успешному открыванию или ломанию препятствия.

## 0x100cbd50 — Graph_EvaluateNearestVisibleCandidate [high]

Один раз за generation оценивает узел, обновляет ближайший видимый результат и сужает search bounds.

ABI: ECX=graph, stack `(float queryX, float queryY, float queryZ, int nodeIndex)`, `RET 16`; query Vector передан **by value**, node index без bounds guard. Нет устойчивого bool результата; эффекты читаются из graph. Search record=`graph[24]+nodeIndex*10`, visited DWORD `+c`. Если visited==graph.generation1860, сразу выйти. Иначе записать generation **до** distance/trace checks; rejected candidate тоже помечается и второй раз в этой generation не рассматривается.

Node=`graph.nodes0c+nodeIndex*58`; расстояние берётся до node position **+c/+10/+14**, а не первых трёх float записи. Вычислить float32 dx,dy,dz; квадраты float32; сумма в порядке `(dy²+dx²)+dz²`, расширить до double, SQRTSD, округлить до float32 d. Только ordered negative double sum вызывает math fallback1016be90; NaN идёт через SQRTSD. При masked FP exceptions, продолжать только если ordered graph.bestDistance1828>d. Равенство и unordered отбрасываются (`COMISS best,d; JBE exit`), но visited уже записан.

Вызов `1011a800(&stackQuery, &node[c], 1, NULL, &trace)`; bridge преобразует третье значение в `==1` и tail-jumps engine TraceLine. При trace.fraction(+10) ordered equal1 продолжить; иначе выйти. Не проверяет allsolid/startsolid/plane/hit identity. После успеха сначала пишет graph.bestNode182c=nodeIndex, затем bestDistance1828=d; это до всех дальнейших integer divisions.

Для каждой оси a∈{x,y,z} определить `lo=trunc_i32(graph.worldMin[a])`, `hi=trunc_i32(graph.worldMax[a])`, `q=IDIV(wrap32((trunc_i32(query[a])-lo)<<8), wrap32(hi-lo+1))`. CVTTSS2SI округляет к нулю; subtraction, shift и denominator делаются в 32 bits. Вызвать `100cfde0(&lower[a], &upper[a], q, zeroExtend(node.bucketByte[a]))`: lower1830/34/38, upper183c/40/44, bytes node18/19/1a. Оси выполняются x,y,z по порядку, bytes и world bounds перечитываются.

После трёх shrink calls записывает secondary bounds: для каждой оси `(query[a]-d)` и `(query[a]+d)` сначала округляются float32, затем trunc_i32; далее та же формула `(converted-lo)<<8` / `(hi-lo+1)`. Lower — 1848/4c/50, upper — 1854/58/5c. Denominator переиспользуется для пары данной оси; bounds не clamped в0..255 и не пересекаются через max/min, а прямо заменяются.

CVTTSS2SI NaN/overflow даёт INT_MIN при masked invalid; integer wrapping не заменён математической арифметикой. IDIV при denominator0 или INT_MIN/-1 может fault; локального guard нет. Generation, best и часть bounds к этому моменту уже изменены — операция не транзакционна. Не проверены graph readiness, arrays, node count, coordinate span или trace storage lifetime; memory ownership не передаётся. Producer guarantees и внешние FP exception modes остаются отдельной границей.

## 0x100ca6e0 — GraphQueue_ResetCount [high]

Обнуляет только счётчик очереди и возвращает её адрес.

ECX=queue, stack arguments отсутствуют, обычный RET, EAX=исходный ECX. Машинный код: MOV [ECX],0; MOV EAX,ECX; RET. C `void` теряет возврат. Не очищает записи, не задаёт capacity, не выделяет memory и не освобождает прежние pointers. Node IDs здесь raw values, отдельного ownership transfer нет. NULL queue не проверяется. Caller100cd5e0 использует это как initialization своего stack heap; другие контексты из одного короткого тела не выводятся.

## 0x100ce040 — GraphQueue_PushNodeCost [high]

Добавляет node/cost и поднимает запись в heap; при count ровно100 печатает предупреждение и не добавляет.

ECX=queue, stack `(int node, float32 priority)`, `RET 8`; публичный bool success не доказан. Если count==100 decimal, вызвать100cfec0(`Queue is full!\n`) и вернуться без собственных queue writes. Это обычный CRT formatted-output path с возвратом, а не доказанный fatal error. Проверка **равенства**, не count>=100 и не unsigned capacity check; negative или count>100 не отклоняются.

Иначе сохранить raw priority в `queue+count*8+8`, перечитать count, записать node в `+count*8+4`, увеличить count на1, затем вызвать100cddf0 с ECX=queue. Priority остаётся float bits; C int declaration не означает numeric float→int conversion. Нет проверки finite cost, ID, duplicate node, buffer span, overflow count/address. Heap заполнен к моменту sift-up, rollback отсутствует. В path search cost/predecessor обновляются до push; потеря insertion при full queue не отменяет те внешние записи. На malformed count отдельной гарантии остановки/безопасности нет.

## 0x100cef50 — GraphQueue_PopNodeAndWriteCost [high]

Возвращает node корня в EAX, отдельно пишет priority и переносит последнюю запись в корень.

ECX=queue, stack `float* outCost`, `RET 4`, EAX — сохранённый DWORD root node. Порядок: прочитать root priority(+8) и node(+4); записать raw priority bits в *outCost; уменьшить queue.count; по **новому** count прочитать последнюю node/cost и скопировать в root; вызвать100cdd60(0); вернуть первоначальный node. Cost pointer может совпасть с queue memory, поэтому нельзя переставлять output write после decrement при описании arbitrary aliasing.

Empty/negative count, NULL outCost и bounds не проверяются. Caller100cd5e0 проверяет count!=0 перед pop (CMP с0; JE), а не signed count>0; положительность следует только из нормального состояния очереди. При count1 функция всё равно копирует прежний корень в себя и вызывает sift-down при count0; sift-down читает/перезаписывает root, но не идёт в children. При count0 decrement даёт -1, и чтение last обращается перед payload; helper не выдаёт отдельного empty result. Last slot не очищается, cost не конвертируется в integer, память не освобождается. Node value0 не является failure sentinel этого ABI.

## 0x100cddf0 — GraphQueue_SiftUpLast [high]

Поднимает последнюю запись по float priority, сохраняя native unordered comparison.

ECX=queue, stack arguments отсутствуют, обычный RET; отдельный return contract не используется. i=count-1. Если i==0, ничего не читать/менять в payload. Иначе parent=trunc_signed((i-1)/2), реализовано CDQ, SUB и SAR; сравнить float32 childCost с parentCost. `COMISS child,parent; JAE stop` останавливает на ordered child>=parent; при child<parent **или unordered** выполняет swap двух raw DWORD каждой записи. Далее i=parent, продолжать пока i!=0.

При finite values это min-heap sift-up, equality не переставляется. При masked NaN swap происходит независимо от того, какая сторона NaN; обычное C `child<parent` этому не эквивалентно. При unmasked invalid возможен FP fault. Count0 не превращён в no-op: i=-1 и вычисления адресов/parent выполняются; отрицательные или переполненные values не имеют validity guard, отдельного iteration cap нет. Heap array/count/IDs не меняют ownership. Swap сохраняет priority bits, включая NaN payload и signed zero.

## 0x100cdd60 — GraphQueue_SiftDownAtIndex [high]

Опускает сохранённую запись и переносит меньшего ребёнка вверх, с точными NaN и tie ветвями.

ECX=queue, stack `int index`, `RET 4`; effects in place, публичный bool result не доказан. Сохраняет node и raw priority текущего index **до** проверки children. left=2*index+1; пока signed left<count: right=2*index+2; если signed right<count, `COMISS leftCost,rightCost; CMOVA child,right` выбирает right только при ordered left>right. Equality и unordered оставляют left.

Затем `COMISS chosenCost,savedCost; JAE stop`: остановка только при ordered chosen>=saved, перенос ребёнка вверх при chosen<saved **или unordered**. После переноса index=child, count перечитывается и вычисляется новый left. На выходе записывает raw savedCost и savedNode в последнюю позицию. Даже без children исходный slot перезаписывается теми же bits. Это не numeric `(int)float` из Ghidra C: MOV DWORD сохраняет исходное представление.

На finite heap равенства не вызывают продвижения saved node, равные дети выбирают left. При NaN результат отличается от обычного C less/equal; при unmasked invalid возможен fault. Нет guard index>=0, index<count, count<=100, NULL queue или integer overflow child/address. Возврат EAX может содержать saved node как побочный результат instructions, но caller pop использует собственный ранее сохранённый node; нельзя объявлять sift-down API как bool.

## 0x100cfde0 — Graph_ShrinkMirroredBucketInterval [high]

Сужает две signed границы вокруг query bucket и candidate bucket с односторонним clamp.

cdecl `(int* lower, int* upper, int queryBucket, int candidateBucket)`, обычный RET; caller убирает16 bytes. Входной ECX не является owner. Вычислить r=wrap32(2*queryBucket-candidateBucket). Если queryBucket<candidateBucket signed: proposedLower=max_signed(r,0), proposedUpper=candidateBucket. Иначе proposedLower=candidateBucket, proposedUpper=min_signed(r,255). Только отражённый конец clamped, исходный candidate не приводится в0..255.

Сначала если proposedUpper<*upper signed, записать *upper. Затем если *lower<proposedLower signed, записать *lower. Нижний pointer загружается после возможного upper write; при alias это точная последовательность, не одновременный min/max. EAX на обычном выходе содержит lower pointer, но функциональный результат — writes. Не проверяет NULL, interval ordering, range query/candidate или arithmetic overflow. Для произвольных входов lower может стать больше upper; код не гарантирует непустой диапазон. В candidate caller candidate zero-extends byte, однако query integer не clamped.

## Остаточные границы

Все десять primary local bodies и ABI сопоставлены с native bytes. Отдельные unknown: engine TraceLine/edict conversion semantics beyond the API binding; graph producers/lifecycle, корректность coordinate spans и cache generations; внешняя валидность arrays/door private pointers; runtime inputs и FP exception mode. Producer100cbfe0 и graph initializer/load/save рассматриваются соседними пакетами, не получают карточки здесь. CRT100cfec0, math fallback1016be90 и derived door behavior не объявлены полностью разобранными только из support вызова. Эти ограничения не заменены SDK assumptions или runtime parity claims.
