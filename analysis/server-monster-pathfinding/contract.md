# Monster pathfinding: local probes, route reduction and graph readers

Статический разбор 11 сохранённых функций server. Все 11 были pending перед проходом. Оригинал `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Игра/DLL не запускались. `capture.py` читает PE и вызывает только objdump; `evidence.json` закрепляет C, ASM, байты, константы, API slots и native таблицы. Это описание оригинала, не исправление алгоритмов и не обещание runtime parity.

Адреса, offsets, masks и flags ниже шестнадцатеричные; количества, размеры шага и физические значения явно десятичные. Имена функций аналитические. Объект монстра передаётся в ECX, кроме явно отмеченных свободных helpers; graph readers получают **другой** ECX — graph. Native CGenericMonster vtable `101ce36c` содержит +158=`100bd590`, +1bc=`100bdf80`; другие overrides не исключаются.

## Ownership and calls

`100bcbc0 BuildRoute` → virtual +158 local probe → virtual +1bc triangulation → `100bdc10` graph fallback → `100cd5e0` path search. Direct/detour paths and successful graph fallback call `100c1ad0` simplifier. `100bddb0 RefreshRoute` также вызывает graph fallback напрямую для goalKind20. Предыдущий контекст: [navigation contract](../server-monster-navigation/contract.md).

Monster owns inline route `this+238`, 8 records по 16 байт: xyz+0/+4/+8, flags+c; index=`this+2bc`. GoalKind=`2b8`, capabilities=`304`. Изученные helpers не выделяют route и не меняют его ownership. Они могут временно менять origin через engine callbacks; восстановление origin не доказывает отсутствие остальных побочных эффектов.

Graph используется по адресу `102238b0` из `100bdc10`. В этом пакете подтверждены поля: +0/+4 readiness gates; +8 выбор precomputed routing; +c nodes pointer, +10 links pointer, +14 compressed bytes, +18 node count, +24 sorted-node/search records. Жизненный цикл выделения и освобождения этих буферов не установлен этим пакетом.

Node stride58: +0 xyz, +c отдельная тройка координат для nearest visibility; +18/+19/+1a quantized bytes; +1c category mask; +20 outgoing-link count; +24 first-link index; +28 четыре пары routing offsets; +48 transient float cost; +4c predecessor. Link stride18: +0 source, +4 destination, +8 optional entvars pointer, +10 hull-bit mask, +14 float cost. Поле +c link здесь не используется. Search record stride10: три permutation indices +0/+4/+8 и visited generation+c. Ни один reader не становится владельцем этих pointers.

Native engine API binding: initializer100b4aa0 copies 144 DWORDs to10222f48. Slots26/27/28 are DropToFloor/WalkMove/SetOrigin; 31 TraceLine; 86/87/89 CRC32_Init/ProcessBuffer/Final. Названия сверены с сохранённым eiface.h и фактическими offsets, не с похожим SDK алгоритмом. Native ENTVARS descriptors закрепляют origin8, size f4, flags1a8, waterlevel1c4, watertype1c8.

## 0x100bd590 — Monster_CheckLocalMoveByTemporaryWalk [high]

Проверяет локальный проход временным перемещением сущности, возвращая три разных кода.

Thiscall(Vector* start, Vector* end, entity* target, float* blockedDistance), RET16, полный EAX0/1/2. Сохраняет текущий pev.origin, вычисляет yaw(end-start) через1011a930 и горизонтальную длину sqrt(dx²+dy²), с float суммой, double sqrt и float округлением. Вызывает10119fe0(this,start), затем DropToFloor(edict), только если flags&3==0; результат DropToFloor игнорируется.

При положительной длине пробует WalkMove(edict,yaw,step,2). travelled начинается с0; nominalNext=travelled+16. Если nominalNext>=length-1, step=(length-travelled)-1, иначе step16. После успешного шага travelled=nominalNext, а не travelled+actualStep. Для 0<length<1 последний step отрицательный; отдельного clamp нет. Для length0/NaN walk loop пропускается по native COMISS/JBE.

При неудаче WalkMove пишет *blockedDistance=travelled, если pointer не NULL; на обычном успешном проходе output вообще не заполняется. Если target отсутствует либо target.edict не совпал с globals+74, возвращает0. При совпадении продолжает общий успешный путь, но output distance уже записан. Global+74 соответствует trace_ent в сохранённом globalvars layout; engine side effects этого поля отдельно не восстановлены.

Успешный путь даёт2. Только при flags&3==0 и (target==NULL либо target.flags&200!=0) проверяет abs(end.z-currentTemporaryOrigin.z)>64; тогда даёт1. Проверяется высота после пробных шагов/DropToFloor, не исходная сохранённая высота. Unordered высота не выбирает1. Все обычные выходы проходят через10119fe0(this,savedOrigin). Wrapper10119fe0 дополнительно обновляет this+618..620 при ненулевом virtual+d0 и вызывает engine SetOrigin; восстановление flags/groundentity/прочих результатов engine не производится этой функцией.

BuildRoute трактует2 как прямой проход,1 как переход сразу к графу,0 как возможность detour. Нельзя заменить результат bool. Input pointers и pev не проверяются; full WalkMove/DropToFloor engine semantics остаются вне этого пакета.

## 0x100bdf80 — Monster_TriangulateRouteDetour [high]

Ищет боковую, а для movetype5 также вертикальную промежуточную точку двумя локальными проверками.

Thiscall(Vector* start, Vector* end, float blockedDistance, entity* target, Vector* outApex), RET20, EAX0/1. Для конечных size.x ширина w=clamp(pev.size.x,24,48); h=pev.size.z. Direction=normalize(end-start), но при точной нулевой длине native задаёт (0,0,1). Cross вычисляется как direction×(0,0,1), с сохранёнными float умножениями на0; не горизонтальная повторная нормализация. При NaN MINSS/COMISS не эквивалентны обычному математическому clamp.

Базой кандидатов служит текущий **self.origin**, а не start. Первые боковые кандидаты P±=origin+direction*(blockedDistance+w) ± cross*(3*w). Только movetype5 добавляет U±=origin+direction*blockedDistance ± (0,0,3*h). Сохраняет текущую route[index].position в локальную goal, без проверки index. Переданный end используется для direction; второй участок проверяется до сохранённой route goal, которая может отличаться от end.

До8 итераций, в каждой порядок P+,P-,U+,U- (U только для movetype5). Для кандидата вызывает virtual+158(&currentOrigin,&candidate,target,NULL); только код2 разрешает второй вызов virtual+158(&candidate,&savedRouteGoal,target,NULL). Второй код2 завершает успех: копирует ровно12 байт candidate в outApex, если не NULL, и возвращает1. Сохранённые ASM stack addresses исправляют ошибочные Ghidra aliases во втором плече и в output.

После неудачной итерации P+ +=cross*(2*w), P- -=cross*(2*w); для movetype5 U± сдвигаются ещё на ±(0,0,2*h). Значит боковые множители3,5,...,17 при обычных конечных данных. После восьмой неудачи EAX0; output не очищается. Сам helper route не переписывает, но virtual probes могут иметь побочные эффекты. Нет отдельного теста от start до текущего origin, guards указателей или route index.

## 0x100c23e0 — RouteFlags_AllowSimplification [high]

Определяет разрешение упрощения по точной комбинации битов waypoint flags.

Свободная cdecl функция(uint flags), plain RET, полный EAX0/1; ECX не читает. Возвращает0 если (flags&~80)==10 либо flags&100!=0; иначе1. Маскируется только80 для сравнения с10: например10/90 запрещены,18 разрешён,118 запрещён. Это не проверка наличия любого бита10 и не проверка ненулевого flags: flags0 даёт1.

Caller100c1ad0 при0 сохраняет особую ветку записи waypoint, при1 пробует обход/средние точки. Значение флагов следует из call relationship; имена enum не восстановлены из этого тела.

## 0x100c1ad0 — Monster_SimplifyRouteWithMidpoints [medium]

Перестраивает оставшиеся waypoint через прямой проход и средние точки; отдельная native ветка оставляет незаполненный слот.

Thiscall(entity* target), RET4; определённого bool результата нет. Начиная с route[index], пока signed index<8, считает ненулевые flags до первого low-byte bit80 включительно. Нет нижней проверки index. При числе точек<2 ничего не меняет. Иначе использует локальный stack buffer, previous=self.origin и обрабатывает все точки кроме последней.

Для разрешённой100c23e0 точки cur сначала проверяет virtual+158(previous,next,target,NULL). Код2 удаляет cur без обновления previous. Иначе вычисляет M=(cur+next)*0.5 и N=(cur+previous)*0.5, flags'=(cur.flags&fffffe7f)|8, то есть удаляет80/100 и ставит8. Если probe(previous,M)==2, добавляет M. Иначе если probe(N,M)==2, добавляет N и M; отдельного probe(previous,N) нет. Иначе добавляет исходный cur целиком. После этих ветвей previous становится последней добавленной точкой.

**Native quirk**, подтверждён100c1bba..1be2→1ddf: когда100c23e0 вернул0, код копирует cur в текущий output, сразу увеличивает count и output pointer на16, а затем общая ветка читает xyz уже следующего, ещё не записанного этим проходом stack slot и снова увеличивает count/pointer. Поэтому остаётся один неопределённый record и previous берётся из него. Это не «аккуратное сохранение protected waypoint» и не ошибка только декомпиляции. Stack buffer заранее не обнуляется; runtime проявление не проверялось.

В конце добавляет последнюю исходную точку, записывает нулевой flags за концом временного списка и сбрасывает route index=0. Копирует максимум первые8 records в inline route. При копировании8 немедленно возвращается, не добавляя sentinel; при меньшем количестве обнуляет flags следующей route записи, координаты/дальнейший хвост не очищает. Временный список может содержать до15 records при корректном исходном index0..7; lower-bound, override mutations и необычные flags отдельно не валидируются. GoalKind, moveGoal, activity не переписывает. Confidence medium из-за неопределённых данных одной ветки и неизвестных derived probes, при полностью разобранной локальной ветвистости.

## 0x100bdc10 — Monster_BuildRouteFromGraph [high]

Преобразует путь графа в до8 inline waypoint монстра и при наличии места добавляет точную цель.

Thiscall(Vector goal BY VALUE), три stack float, RET12; реальные EAX0/1, несмотря Ghidra void. Для graph102238b0 вызывает100cd530(&self.origin,this) и100cd530(&stackGoal,this). Любой результат-1 даёт0. Затем100cde50(this) выбирает hull;100cd5e0(local10Ints,start,end,hull,this.capabilities304) возвращает count. Count0 печатает severity2 No Path и даёт0.

При положительном count берёт min(count,8), для каждого node index копирует node.position+0/+4/+8 из массива102238bc stride58, flags=20. Если получилось8, возвращает1 без добавления exact goal или terminal80. Иначе записывает goal в следующую позицию и делает flags|=80, сохраняя старые остальные биты. Route index, goalKind и хвост самостоятельно не сбрасывает; caller обычно уже сделал RouteNew. Source node, повторная goal node и точная goal могут дублировать точки.

Count не имеет отдельной защиты от отрицательного значения: nonzero negative дошёл бы до записи с отрицательным index; собственный100cd5e0 при корректных данных возвращает0 либо положительный count. Важнее: dynamic graph path writer не имеет лимита output10, хотя этот caller выделил только10 int перед security cookie. Clamp8 выполняется **после** завершения writer, поэтому не предотвращает слишком длинную запись. Это статическая граница, а не воспроизведённый runtime сбой.

## 0x100cd5e0 — Graph_FindPathCachedOrHeap [medium]

Строит список индексов либо по сжатой таблице переходов, либо поиском с очередью стоимости.

Thiscall graph(int* out,int start,int destination,int hull,uint capabilities), RET20, EAX=count либо0. Graph+0/+4 обязаны быть ненулевыми. Проверяет signed start<0 или start>nodeCount, **равный count проходит**; destination/hull/out не проверяет. start==destination пишет out[0]=start,out[1]=destination и возвращает2, даже если start==count. Проверки выполняются до выбора режима.

При graph+8!=0 пишет out[0]=start и count=1. Вызывает100ce830(current,destination,hull,(capabilities&340)!=0). next==current даёт0, оставляя уже записанный префикс. Если next отличается и count>=10, возвращает текущий count10 без записи next и без требования достигнутой destination. Иначе добавляет next; достижение destination возвращает count, остальное повторяет. Таким образом10 может означать усечённый префикс, а0 не означает нет побочных записей. Цикл без self-loop ограничен этим count.

При graph+8==0 создаёт на stack очередь100 записей и count=0 через100ca6e0. Hull0/1/2/3 выбирает mask1/2/4/8 по raw jump table100cd980. Иной hull копирует незаполненный DWORD stack-348 в mask; это не default0. Ставит node.cost48=-1 для всех nodes, у start cost0, predecessor4c=start, кладёт(start,0) в очередь100ce040. Очередь — min-heap по float cost (100cddf0/100cdd60); insert при count==100 сообщает Queue is full и пропускает вставку, не откатывая уже записанную node cost. Политика обработчика100cfec0 вне этого пакета.

Пока queue count!=0, извлекает100cef50(&poppedCost); destination останавливает expansion. Для outgoing links текущего node (count+20, first+24): mask link+10 должен содержать все hull bits. При link.entvars+8!=NULL дополнительный100cd990(current,entvars,capabilities,1) должен вернуть nonzero. CostCandidate=float(link.cost14+poppedCost). Обновление если oldCost<-0.5 либо double(candidate)<double(oldCost)-**raw double0.001**; не float epsilon. Пишет cost/predecessor и добавляет новую queue запись. Нет удаления устаревших queue entries, visited lock или проверки nonnegative edges; cost использует poppedCost, не перечитанный current.cost.

После очереди destination.cost>=-0.5 разрешает восстановление; native COMISS/JBE также идёт сюда при unordered NaN. Иначе0. Идёт по predecessors от destination до start, считая узлы, затем записывает их назад в out, включая start. Нет ограничения числа predecessors, cycle guard или output capacity; повреждённый цикл может не завершиться. EAX — полученный count; cookie checker сохраняет EAX на нормальном возврате. Graph transient cost/predecessor остаются изменёнными. Алгоритм Dijkstra-подобный для нормальных весов, но доказательство глобально кратчайшего/безопасного пути не заявляется.

## 0x100ccea0 — Graph_FindNearestVisibleNodeCached [medium]

Ищет ближайший видимый узел по пространственным bucket-таблицам с кэшем только по координатам.

Thiscall graph(Vector* position,uint categoryMask), RET8, signed EAX node/-1. Readiness+0/+4 failure печатает severity2 и возвращает-1. CRC32 трёх исходных float bytes (12 байт), index=crc&7f. Cache record=graph+187c+index*16: xyz и signed SHORT result+c. Если все три ordered-float equal, немедленно возвращает sign-extended cached result. Mask, hull, graph generation/visibility не входят в cache hit; validity byte не проверяется. Инициализация/инвалидация cache здесь отсутствуют. NaN никогда не равен; signed-zero bytes могут давать другой CRC bucket при float equality.

На miss increment generation1860; при wrap0 очищает searchRecord[i].visited+c для nodeCount записей и ставит generation1. Устанавливает bestIndex182c=-1, bestDistance1828=999999.0; bucket нижние1830/34/38=0, верхние183c/40/44=255, secondary bounds1848/4c/50=0 и1854/58/5c=255. Результат не обязан находиться даже при очень далёких видимых nodes: distance cap конечный.

Шесть проходов в фиксированном порядке: X buckets127 вниз до Lx; Y max(128,Ly) вверх до Uy; Z min(127,Uz) вниз до Lz; X max(128,Lx) вверх до Ux; Y min(127,Uy) вниз до Ly; Z max(128,Lz) вверх до Uz. Все пределы включительны и могут сужаться helper во время обхода. Для оси A startBucket=graph+28+A*400+bucket*4, endBucket=startBucket+c00. Внутри [start,end] inclusive ordinal записи stride10 берёт node index из +A*4. Таблицы и индексы не проверяются.

Каждый candidate сначала должен иметь node.mask1c&categoryMask!=0. Для X прохода byteY должен быть в [secondaryLy,secondaryUy], byteZ в [secondaryLz,secondaryUz]; byteY>upper прерывает текущий bucket. Для Y аналогично проверяются Z затем X, break при Z>upper; для Z — X затем Y, break при X>upper. Значения bytes unsigned, сравнения с bounds signed. Это зависит от заранее отсортированных таблиц; сам reader их не сортирует и не доказывает полноту.

100cbd50(position BY VALUE,nodeIndex) не повторяет уже помеченный generation candidate. Берёт **node+c** xyz, float squared distance→double sqrt→float, требует строго distance<bestDistance. TraceLine через1011a800(position,node+c,ignoreMonsters1,NULL,&trace), только ordered fraction==1 разрешает bestIndex/bestDistance update. Затем сужает bucket bounds через100cfde0 и вычисляет secondary bounds из position±distance, целочисленных truncations и signed divisions с graph min1864..6c/max1870..78. Формулы не clamp-нуты полностью; нулевые denominator/невалидные таблицы отдельно не защищены. Это проверка линии видимости, не размера hull и не фактического маршрута WalkMove.

На выходе miss сохраняет xyz bytes и **low16** bestIndex в cache, но первый return — полный32-bit bestIndex. Последующий hit sign-extends16; ограничения node count, гарантирующие равенство, здесь нет. Новых allocations нет; graph search/cache state изменяется. Продолжение закрыто локальными контрактами graph-lifecycle и graph-precompute: bucket writer имеет cached-pivot swap и start255; loader сохраняет coordinate cache из raw header. Полная корректность построенного графа этим не доказана. Candidate C metadata заканчивается100cbd5e, но расширенный byte-verified ASM до100cbfd4 закрывает фактическое тело без изменения исходного C.

## 0x100ce8c0 — Graph_NodeCategoryForEntity [high]

Выбирает маску категории узла по movetype и состоянию воды сущности.

Один stack entity*, RET4, EAX1/2/4; ECX не читается. pev.movetype108!=5 даёт1. При movetype5 и waterlevel1c4!=0 и watertype1c8!=-19(decimal) даёт4, иначе2. Не сравнивает waterlevel с2/3, не проверяет flags FL_SWIM/FL_FLY, размеры hull, health или graph readiness. Никаких записей и NULL guards.

100cd530 передаёт результат как categoryMask в100ccea0. Это отдельная классификация от hull selector100cde50, который возвращает0..3 для graph-link mask. Не смешивать две нумерации.

## 0x100ce830 — Graph_DecodeCompressedNextHop [high]

Декодирует следующий узел из сжатого byte-потока для source/destination/hull/capability режима.

Thiscall graph(int source,int destination,int hull,int mode), RET16, EAX next. Stream=graph.bytes14 + DWORD(graph.nodes0c + source*58 +28 + hull*8 +mode*4). Начальное result=source; remaining=destination+1. Даже при remaining<=0 адрес stream уже вычислен, но bytes не читаются. Нет readiness/index/mode/stream-length guards.

Signed tag<0: native NEG CL, затем MOVSX ESI,CL. Для tag=-1..-127 длина run=-tag; если remaining<=run, result=destination и цикл заканчивается, иначе remaining-=run, consumed1 byte. **tag0x80** после 8-bit NEG остаётся0x80 и sign-extend даёт-128; для положительного remaining эта ветка увеличивает remaining на128 и продолжает. Нельзя описывать её как обычный run128.

Tag>=0 означает runLength=tag+1 и дополнительный signed byte delta. Если remaining>runLength, уменьшает remaining и пропускает пару bytes. Иначе result=source+signedDelta; если result>=nodeCount, один раз subtract count, иначе если result<0 один раз add count. Завершает цикл. Это одношаговая коррекция, не произвольное modulo; destination/source/out-of-range и corrupted streams не ограничены. Таблица/поток только читаются, EAX тип int подтверждён ASM.

## 0x100cdcb0 — Graph_FindDirectedLinkInHash [high]

Ищет directed link по хэшу пары индексов и записывает signed результат через pointer.

Thiscall graph(int source,int destination,int* outLink), RET12; контракт результата — *outLink, не bool. В конце EAX содержит outLink pointer, но caller100ceaa0 читает память. CRC32 вычисляется над четырьмя bytes: low16 source, low16 destination. bucket=(crc>>4) unsigned modulo graph.hashSize20c0; probeStep=DWORD(graph+207c+(crc&f)*4); table pointer20bc содержит SHORT entries. Нет проверки hashSize0 или NULL.

Entryffff завершает поиск с-1. Иное значение sign-extends16 для индекса link stride18; сравнивает полные32-bit link.source/destination с входными int. При несовпадении next=bucket+step; если signed next<signed size, оставляет next, иначе один раз вычитает size. Повторяет до совпадения либо sentinel. Нет probe-count/cycle bound, проверки отрицательного index кромеffff или полноценного modulo для большого step. Правильность зависит от producer hash table/steps и допустимого числа links.

На выходе заново sign-extends selected SHORT и пишет *outLink; таблицу не меняет, memory ownership не передаёт. CRC collision low16 разрешается full-index compare, но отсутствие свободной клетки или неудачный шаг может не дать остановки; runtime воспроизведение не проводилось.

## 0x100ceaa0 — Graph_AccumulateCompressedRouteCost [high]

Суммирует стоимость links вдоль сжатого next-hop маршрута, возвращая0 также при ошибке.

Thiscall graph(int source,int destination,int hull,uint capabilities), RET16, float результат через ST0. Mode=(capabilities&340)!=0. Accumulator float0, budget=graph.nodeCount18. Если source==destination, сразу0. Иначе перед каждым hop требует прежний signed budget>0, затем уменьшает budget. Exhaustion печатает severity1 Route Failure и возвращает0.

Вызывает100ce830(current,destination,hull,mode); next==current даёт0 без сообщения. Затем100cdcb0(current,next,&stackSourceSlot). Negative link index печатает severity1 HashLinks is broken from current to **destination**, не next, и возвращает0. Иначе прибавляет link.cost14 float-операцией и продолжает до destination. Каждый шаг округляет accumulator в float; окончательный FLD расширяет его в ST0. NaN/negative link costs не фильтруются.

Не проверяет graph readiness, graph+8, hull/link flags, dynamic obstacles или buffer bounds; использует precomputed stream независимо от его lifecycle. Отдельного success flag нет: zero-length valid route, zero-cost route и failure дают одинаковый0. На nodeCount hops ставится loop bound, но внутренний next-hop decoder/hash lookup сами могут не завершиться на плохих данных. Изменяются только локальные данные, кроме непрямых engine diagnostic callbacks.

## Native boundaries and next selectors

Все primary C прочитаны и сопоставлены с ограниченным ASM, не с SDK implementation. `100cbd50` — support, его metadata range недостаточен; correction закреплён в evidence. Для normal-return EAX через1013dbb3 использован сохранённый cookie-checker body; аварийный cookie path не считается обычным возвратом.

Продолжение этой очереди разобрано отдельно: [graph helpers](../server-graph-helpers/contract.md), [graph lifecycle](../server-graph-lifecycle/contract.md), [route precompute](../server-graph-precompute/contract.md). Dynamic gate, candidate, heap, bounds, hash writer/steps, bucket/cache producer и load/save/reset больше не pending.

Уточнены producer boundaries: fresh allocation и NodeEntity ограничивают normal construction 1024 узлами, но disk loader не проверяет этот предел; encoder допускает identity128→tag80, несовместимый с decoder; Clear не очищает coordinate cache, bucket producer очищает, Load копирует cache из файла. Это не доказательство runtime проявления на оригинальных картах.

Builder, reorder и node/viewer lifecycle разобраны в [graph builder](../server-graph-builder/contract.md), [ordering](../server-graph-ordering/contract.md), [entities](../server-graph-entities/contract.md). Остаются engine matching/trace, CRT ownership/exception contracts, допустимость route output capacity у всех callers, actual map data и derived overrides. Новую очередь брать из этих владельцев и актуального --pending.
