# Original server graph storage, .nod lifecycle and spatial index

Статический разбор 11 функций оригинального `hl.dll`; игра не запускалась и не менялась. Confidence high относится к локальным ABI/ветвям, а не к полноте всей навигации или CRT. Источники: сохранённый C, byte-verified objdump, native ENTVARS descriptors, PE import CreateDirectoryA и engine API bootstrap. Воспроизведение: `python analysis/server-graph-lifecycle/capture.py`; SHA-256 оригинала и каждого C/ASM, raw bytes и correction границы находятся в `evidence.json`.

## Быстрая карта связей

World initializer `10120eb0` → Clear → freshness → Load или AllocateInitialNodes; NodeEntity `100cf550` собирает nodes для build. Builder `100ca860` и reorder `100cf310` теперь имеют самостоятельные контракты в [graph builder](../server-graph-builder/contract.md) и [graph ordering](../server-graph-ordering/contract.md). Player initializer `100f0520` → Rebind, если graph есть, bindings ещё нет. Save требует graph+bindings ready. Producers hash и spatial index дополняют consumers из `analysis/server-monster-pathfinding/contract.md`; candidate/hull/heap/dynamic gate раскрыты в `analysis/server-graph-helpers/contract.md`; route producer — `analysis/server-graph-precompute/contract.md`.

## Layout, все offsets и размеры hex

Graph global `102238b0`, serialized size `20cc`:

| Offset | Подтверждённое использование |
|---|---|
| 0 / 4 / 8 | graph ready / entity bindings ready / use cached routes |
| c / 10 / 14 | nodes pointer / links pointer / route bytes pointer |
| 18 / 1c / 20 | node count / link count / route byte count |
| 24 | search records pointer, stride10 |
| 28,428,828 | 256 start ordinals для каждой оси |
| c28,1028,1428 | 256 end ordinals для каждой оси |
| 1860 | search generation |
| 1864..186c / 1870..1878 | xyz min / max |
| 187c..207b | 128 coordinate-cache records, stride10 |
| 207c | 16 probe steps DWORD |
| 20bc / 20c0 | SHORT hash table pointer / slot count |
| 20c4 / 20c8 | clear обнуляет; полная семантика ещё открыта |

Node stride58: position0, visibility position c, quantized bytes18..1a, category1c, link count20, first link24, 8 route offsets28..44, scratch cost48/pred4c, WORD hint50/activity52, float yaw54. Link stride18: source0,dest4,entvars8, raw model tag four bytes c, hull mask10,cost14. Search stride10: three permutation DWORDs0/4/8, visited generation c.

## .nod version 16: порядок секций

DWORD `10h`, raw graph `20cc`, nodes `58*N`, links `18*L`, search `10*N`, routes `R`, hash `2*H`. Counts берутся из raw header. Это снимок 32-bit layout с transient pointers, не переносимый исходный формат. Loader replaces five graph pointers, visited generations and readiness; Rebind позже заменяет link entity references по model tag. Coordinate cache из файла сохраняется. Ошибки parsing могут оставлять частичный graph; Saver success не доказывает успешную запись файла.

## Границы анализа

Аллокаторы/free/stdio имеют локальные CRT entrypoints, это НЕ PE import thunks. Роли calloc/free/fopen/fwrite/fclose опираются на сохранённые имена и call ABI; pending implementation не закрыта этим пакетом. Малые forwarding boundaries allocator/free retained raw; CreateDirectoryA отдельно подтверждён PE import. Callback имена привязаны к копированию144 DWORD в `100b4aa0` и header slots; полные реализации engine callback здесь не заявлены. Все counterexamples — статическая композиция инструкций, не runtime tests.

Не переносить предполагаемые исправления в восстановление молча: cached-pivot swap, start sentinel255, tag80 у соседнего route producer, unchecked I/O и partial-load state требуют отдельных решений совместимости. Original files и gameplay не изменяются.

## 0x100ca780 — Graph_AllocateInitialNodes [high]

Выделяет фиксированный массив для 1024 узлов глобального графа.

ECX не читается, stack arguments нет, RET; EAX=1 при ненулевом allocation, иначе 0. Вызывает local CRT allocator 10171536 с двумя аргументами (58h,400h), затем безусловно записывает результат в global graph.nodes 102238bc. calloc-подобная роль следует из сохранённого C и использования; полное поведение allocator 10181cbb здесь не закрыто.

При NULL печатает AlertMessage(2, malloc diagnostic, текущий nodeCount), возвращает 0. Не освобождает прежний nodes pointer, не меняет count/readiness и не откатывает прочие поля. World initializer 10120eb0 игнорирует этот return, в том числе после неудачной загрузки .nod. Лимит 1024 относится к этой allocation и producer 100cf550, не ко всем загруженным файлам.

## 0x100ca7c0 — Graph_BuildDirectedLinkHash [high]

Создаёт SHORT hash table всех directed links и заполняет её через CRC probing.

ECX=graph, без stack arguments, RET; стабильного bool результата нет. Вычисляет signed trunc(wrap32(linkCount*3)/2)+3 и пишет hashSize+20c0. Вызывает 100cdaf0(size), allocator 10171536(2,size), пишет table+20bc. При NULL AlertMessage severity2 и ранний выход. Старый pointer не освобождается.

Для signed size>0 заполняет все SHORT значением ffff. Для каждого signed index от 0 до linkCount-1 вызывает 100cdc20(link.source,link.destination,index), stride18h. Не ограничивает index 32767, не проверяет дубликаты, hash load factor после overflow, корректность links/count и не обновляет readiness. Consumer 100cdcb0 sign-extends SHORT: запись low16 не гарантирует корректного чтения больших индексов.

## 0x100cb740 — Graph_BuildSpatialSearchBuckets [high]

Перестраивает пространственные перестановки узлов, byte coordinates, bucket ranges и coordinate cache.

ECX=graph, RET, void. Освобождает прежний search+24, выделяет allocator(10h,nodeCount), пишет pointer; NULL даёт severity2 и выход после освобождения старого storage. Успех: min/max+1864..1878 начинают с float ±1e9, обновляются ordered strict comparisons по node position; NaN не обновляет экстремум.

Для каждой оси q=low8(IDIV(wrap32((CVTTSS2SI(pos)-CVTTSS2SI(min))<<8),wrap32(CVTTSS2SI(max)-CVTTSS2SI(min)+1))). Нет clamp, проверки DIV0/overflow или finite. Записывает q в node+18/+19/+1a. Search stride10h содержит три DWORD permutation и generation+0c; начальные permutations равны индексам.

Каждой оси соответствуют 256 DWORD start/end: start+28/+428/+828 и end+c28/+1028/+1428. Инициализация start=255, end=0. Ключи permutations: XYZ,YZX,ZXY из unsigned bytes. В pair-swap sort pivot key в ESI вычисляется один раз для внешней позиции и НЕ обновляется после swap. Поэтому это не гарантированная сортировка: статический пример ключей [3,1,2] даёт [2,1,3]. Не заменять автоматически корректным sort при описании оригинала.

Для ordinal i start[bucket]=min_signed(start,i), end=max_signed(end,i). Начальное 255 сохраняется, если первое появление bucket позже ordinal255; пустой bucket остаётся [255,0]. Затем memset(graph+187c,0,800h), то есть 128 coordinate-cache records по16 bytes. Generation+1860 прямо не сбрасывается. Consumer 100ccea0 сравнивает только xyz, поэтому zeroed entry совпадёт с query(0,0,0) и вернёт SHORT0 без category/trace проверки. Это статическое следствие, не наблюдение игры.

Сохранённая metadata заканчивается byte100cb9a9: это конец JMP100cb9a8→100cb9b3. Проверенное продолжение того же frame до RET100cbbc5 включено в ASM, exclusive end100cbbc6; исходный C не менялся. Совместная корректность bucket scan при несортированных permutations остаётся отдельным вопросом; producer не доказывает глобальные гарантии nearest-node.

## 0x100cbbf0 — Graph_IsNodeFileCurrent [high]

Проверяет существование и относительное время BSP/NOD через engine callback.

Вход: один stack map basename, RET4, ECX не используется, EAX=0/1 вопреки void в C. Собирает maps/<name>.bsp и maps/graphs/<name>.nod в двух локальных buffers по260 bytes. Нет length bound, нормализации или удаления расширения.

Вызывает engine slot98 CompareFileTime(first,second,&result). Callback0 даёт return0; иначе signed result<=0 даёт1; result>0 печатает severity2 .NOD File will be updated и даёт0. Значение ordering зависит от контракта engine callback; native body лишь сравнивает полученный int. Ничего не записывает на диск. Normal-return cookie helper1013dbb3 сохраняет EAX.

## 0x100cc810 — Graph_LoadNodeFile [high]

Загружает .nod версии16 как снимок графа с последовательным восстановлением пяти allocation.

ECX=graph, stack map basename, RET4, EAX=1/0; ошибочная C сигнатура void не отражает native. GetGameDir и CreateDirectoryA создают <game>/maps и /graphs, результаты directory calls игнорируются. LoadFileForMe получает relative maps/graphs/<name>.nod и length. NULL сразу0. Buffers260 bytes, копирование без проверки длины.

После проверки remaining>=4 и DWORD version==10h требует ещё20cch bytes. Копирует весь header в graph, включая flags/counts/cache/pointers, без освобождения старых allocation; затем обнуляет только nodes+c,links+10,search+24,routes+14,hash+20bc. Последовательно allocate→subtract signed remaining→copy: nodes58h*nodeCount; links18h*linkCount; search10h*nodeCount; route bytes count+20; hash SHORT count+20c0. NULL любого allocation или JS после SUB ведёт к failure.

Перед route allocation пишет graph+8=0. После успешного route allocation generation+1860=0 и visited+0c всех search records=0; затем проверяет длину и копирует routes. Перед hash allocation пишет +8=1. Успех после hash copy: +0=1,+4=0, FreeFile, warning при trailing bytes, EAX1. Coordinate cache+187c не сбрасывается, остаётся из header.

Все failures после LoadFile освобождают лишь file buffer, возвращают0; уже созданные graph allocations, copied header и readiness не откатываются. Version/short-header failures до memcpy graph не меняют. Native SUB/IMUL/SHL арифметика wrap32, JS не проверяет OF; нет общего positive-count/index/1024-limit validation. Zero-size allocation semantics принадлежат CRT. Это не безопасный parser произвольного повреждённого файла.

Caller10120eb0 делает Clear, freshness, затем Load либо AllocateInitialNodes. При Load0 вызывает AllocateInitialNodes без повторного Clear: может заменить nodes pointer и оставить иные частичные поля/allocations. После отказа hash allocation +8 уже1, а +0/+4 ещё из header: штатный Saver записывает оба ненулевыми. Такой failure может сохранить ready state и заставить NodeEntity удалять map nodes. Это статическое следствие, не наблюдённый сбой. Caller100f0520 при +0!=0,+4==0 вызывает RebindLinkEntities; полный world/player initialization не закрыт.

Loader не проверяет row offsets, tags/delta и не исправляет несовместимость identity128/tag80 producer100cbfe0 и decoder100ce830. Он переносит сжатые bytes буквально; успешный EAX1 не доказывает корректную декодируемость всех маршрутов.

## 0x100ccba0 — Graph_SaveNodeFile [high]

Записывает версию16, raw graph header и массивы .nod без проверки результатов fwrite/fclose.

ECX=graph, stack map basename, RET4, EAX0/1. Если +0==0 либо +4==0: severity2 Graph not ready,0. Иначе GetGameDir, CreateDirectoryA для /maps и /graphs без проверки, absolute <game>/maps/graphs/<name>.nod, local buffer260 без length guards.

Вызывает CRT fopen-like101743a1(path,"wb"), затем печатает Created:path ДО проверки NULL handle. NULL: Could not create diagnostic и0. Успех открытия: calls fwrite-like101710d0(version,4,1), (graph,20cc,1), (nodes,58,nodeCount), (links,18,linkCount), (search,10,nodeCount). Routes пишутся как size1/count+20 только при ненулевых ptr и count; hash как size2/count+20c0 при тех же условиях.

Затем fclose-like1016fd61 и безусловный EAX1. Результаты write/close не проверяются; нет temporary file/atomic replace или rollback. Gate не проверяет +8 и целостность pool: ненулевой route count при NULL routes сохраняется в header, но секция пропускается; Loader всё равно ожидает этот count, то есть round-trip не гарантирован. Файл содержит runtime pointers, cache и transient fields. Loader позже заменяет пять pointers, visited generations и link entities, но не все transient поля. Идентификация CRT роли по C/call ABI; полные CRT bodies и фактический I/O здесь не восстановлены.

## 0x100ccde0 — Graph_RebindLinkEntities [high]

Заново находит препятствия links по четырём bytes имени model и помечает graph bindings готовыми.

ECX=graph, RET, EAX1 на каждом обычном возврате. Для links с ненулевым entvars+8 копирует DWORD modelTag+c в stack buffer и добавляет NUL пятым byte. Вызывает FindEntityByString10118480(NULL,"model",tag). NULL: diagnostic, link.entvars=0. Найдено: link.entvars=entity.pev.

При найденной сущности читает pev.flags+1a8 (НЕ spawnflags+1a4). Если bit10000 не установлен, прибавляет10000 и пишет flags. Native save table подтверждает названия полей. В конце graph+4=1 независимо от пропущенных или отсутствующих entities; +0 не проверяется. Graph clear не снимает entity bit.

Link tag содержит максимум четыре исходных bytes. Здесь нет проверки полноты model name, уникальности совпадения, entity lifetime или rebuild routes/hash. Ненулевой serialized entvars выступает признаком необходимости binding, его старый адрес не dereference. Caller100f0520 интерпретирует EAX1 как installed даже при missing models. Полные гарантии FindEntityByString и динамического удаления остаются вне этого тела.

## 0x100cdaf0 — Graph_GenerateHashProbeSteps [high]

Подбирает 16 шагов probing по статической таблице и перемешивает их engine RNG.

ECX=graph, stack signed hashSize, RET4; не bool. Upper=min_signed(trunc(hashSize/2),1039), increment=trunc(upper/16), target=1. Таблица102177f8 содержит176 ненулевых DWORD (первый1, последний1039), затем0. Это on-disk initial data, отсутствие других runtime writers здесь не доказано.

Для каждого результата previous=1. Сканирует table; первый элемент допустим всегда, последующие divisor hashSize пропускаются без изменения previous. Если previous<=target<=current, выбирает ближайший, tie в пользу previous, пишет следующий graph+207c DWORD. Иначе previous=current. После сканирования target+=increment; повторяет до16 записей. Нет внешнего attempt bound, guards отрицательного/некорректного size или доказательства coprime для произвольных значений.

Преобразует even slots0,2,...14 в hashSize-step. Затем i=15..1, engine RandomLong(0,i), swap(step[i],step[random]). Не проверяет range возвращённого RNG. Readiness не меняет. Свойства distribution и CRT/engine arithmetic вне native wrapper не заявлены.

## 0x100cdc20 — Graph_InsertDirectedLinkHash [high]

Вставляет low16 link index в первую свободную SHORT ячейку hash table.

ECX=graph, stack(source,destination,index), RET12, void. CRC_Init/ProcessBuffer/Final engine slots86/87/89 обрабатывают четыре bytes low16 source+low16 destination. Bucket=(crc>>4) unsigned DIV remainder hashSize+20c0; step=graph+207c[(crc&f)]. Нет нулевого-size/NULL guards.

Пока table[bucket]!=ffff, next=wrap32(bucket+step); если signed next<signed size, bucket=next, иначе bucket=next-size один раз. Нет probe bound, cycle detection, полного modulo или сравнения source/destination. Записывает low16 index; ffff сохраняет empty sentinel, 8000..fffe consumer читает отрицательным индексом. Дубликаты не заменяются, получают новую ячейку. Return register не означает успех.

## 0x100cdf20 — Graph_ClearOwnedStorage [high]

Сбрасывает readiness и освобождает пять массивов графа, оставляя вспомогательные поля нетронутыми.

ECX=graph, RET, void. Сначала +0,+4,+8=0. Для каждого ненулевого pointer в порядке links+10,nodes+c,search+24,routes+14,hash+20bc вызывает local CRT free-like101714d1, затем zero pointer. После этого обнуляет counts+18,+1c,+20 и поля+20c4/+20c8.

Не обнуляет hashSize+20c0, steps+207c, bucket arrays, min/max, generation+1860, coordinate cache+187c. Не снимает pev.flags bit10000 на ранее привязанных сущностях. Нет NULL-this проверки или dedup aliased allocations. Полное освобождение internal allocator, exceptions/heap corruption и альтернативные ownership paths не заявлены.

## 0x100cf550 — NodeEntity_AppendOrDiscard [high]

Добавляет map node в global graph либо удаляет node entity при уже загруженном графе.

ECX=node object, RET, void. Всегда пишет pev.movetype+108=0 и solid+10c=0. Если graph+0!=0, сразу RemoveEntity(pev.edict+20c). Иначе при nodeCount==0 создаёт CTestHull через100ca650(NULL), передаёт returned object в ECX и node.pev stack argument в100cf940; NULL result отдельно не проверяется.

Signed nodeCount>=1024: severity2 cNodes > MAX_NODES и return ДО RemoveEntity, entity остаётся с обнулёнными movement/solid. Иначе node=nodes+58h*count: origin→position0/4/8 и visibility position c/10/14, pev.angles.y+54→node+54, object WORD+dc/+de→node+50/+52. Case-sensitive classname info_node_air даёт category+1c=2, прочие0; count++. Затем RemoveEntity.

Нет guards negative count/NULL nodes и сброса прочих node fields. Изначальное zero storage связано с allocator, но частичный loader state этой функции не проверяется. Producers object hints100ce080, CTestHull initialization/build chain и graph builder100ca860 разобраны в [graph entities](../server-graph-entities/contract.md) и [graph builder](../server-graph-builder/contract.md). Engine dispatch/allocation и фактические данные карт остаются отдельными границами.
