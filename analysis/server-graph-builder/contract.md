# Построитель графа оригинального Cry of Fear

Семь новых локальных контрактов оригинального server DLL: построитель, три forwarding helpers и bodyqueue create/copy/SetOrigin. Только static RE: target не запускался, игровые исходники/ресурсы не менялись. Воспроизведение capture: `python analysis/server-graph-builder/capture.py`. `evidence.json` связывает C/ASM и raw PE с SHA-256 оригинального hl.dll. Confidence high относится к указанным собственным ветвям/ABI; зависимые engine/CRT implementation и фактические карты остаются открыты.

## Порядок и навигация

NodeEntity → CTestHull setup/DropDelay → CallBuild100cbbd0 → Build100ca860 → ConnectVisible100ce420 → WalkMove/TraceHull rejection → RejectInline100cebc0 → compact pool → Reorder100cf310 → hash → spatial buckets → lower ground position.z → compressed routes → .nod save.

Входной owner — CTestHull, graph — отдельный global102238b0. Поля/формат диска: [graph lifecycle](../server-graph-lifecycle/contract.md). Связи/перестановка: [graph ordering](../server-graph-ordering/contract.md). Отложенные callbacks/entities: [graph entities](../server-graph-entities/contract.md). Streams: [precompute](../server-graph-precompute/contract.md). Поиск: [pathfinding](../server-monster-pathfinding/contract.md).

| Hull index | Min | Max | Проверка |
|---|---|---|---|
| 0 | -12,-12,0 | 12,12,24 | WalkMove, rejection clears1/2/4 |
| 1 | -12,-12,0 | 12,12,72 | WalkMove, rejection clears2/4 |
| 2 | -32,-32,0 | 32,32,64 | WalkMove, rejection clears4 |
| 3 | -32,-32,0 | 32,32,64 | TraceHull index2, rejection clears8 |

## Границы и ошибки, которые нельзя потерять

Report .nrp обязателен для этого пути: ошибка fopen прекращает построение. Отсутствие rollback, unbounded path copy, partial graph readiness, native NaN branches и неверный varargs тип `%f` — свойства проверенных инструкций. Они не означают, что соответствующий сбой наблюдался на карте. Byte-verified jump table100cb72c содержит четыре hull branches. Имена TraceResult/ENTVARS полей привязаны к pinned SDK layout и native descriptors, engine значения не выдуманы по названиям.

Ignore-edict10231f60 имеет установленного владельца: current cursor четырёх bodyque edicts, созданных101207e0;10120500 копирует corpse state и двигает cursor по pev.owner. World initializer создаёт ring до graph load/build. Это не world edict и не NULL placeholder. Дальше требуется связать реальные .nod данные с ограничениями delta/cache, раскрыть engine callback implementations, bodyque factory/spawn, полный ring lifetime и report/CRT backend. Flag02000000 hit entity сохранён численно: стандартный SDK FL_MONSTERCLIP имеет другой bit, поэтому его имя здесь не навязывается.

## 0x10119780 — Engine_PointContents_Forward [high]

Без изменений передаёт указатель координат engine PointContents и сохраняет его integer return.

cdecl(const float* xyz); пролог PUSH EBP/MOV EBP,ESP/POP EBP, затем JMP [10222ffc], без собственного RET. Engine table base10222f48, slot45 PointContents подтверждён bootstrap100b4aa0 и eiface.h. Caller100ca860 передаёт pointer на node.position и сравнивает EAX с -3. Это не jumptable, несмотря предупреждение Ghidra.

Нет NULL/finite проверки, копии Vector или модификации stack arguments. Wrapper не классифицирует liquid types и не вычисляет BSP contents; переносит результат и возможные side effects внешнего callback. Определение contents и корректность границ мира требуют отдельного engine контракта.

## 0x1011a930 — Engine_VectorToYaw_Forward [high]

Передаёт вектор engine VecToYaw, возвращая его float через ST0.

cdecl(const float* vector), tail JMP [10222f6c] после нейтрального frame prologue; engine slot9 pfnVecToYaw. Caller100ca860 передаёт указатель на destination-origin и сразу FSTP float из ST0. Ghidra void и отсутствие аргумента не отражают native ABI.

Сам wrapper не нормализует вектор, не ограничивает угол и не обрабатывает zero/NaN/Inf; не читает this. Точные значения yaw для граничных входов и rounding принадлежат engine callback и не выводятся из SDK имени.

## 0x100cfe30 — CRT_Fprintf_OptionsVarargsForward [high]

Передаёт FILE, format, va_list и глобальные options в локальный CRT vfprintf backend.

cdecl(FILE* stream,const char* format,...), plain RET, EAX backend без преобразования. LEA EBP+10h создаёт pointer на первый unnamed argument. Укладывает va_list, locale NULL, format, stream, вызывает10001790 (он лишь возвращает10220aa8), затем PUSH options.high/options.low и вызывает1015cc01. Реальные шесть DWORD аргументов backend: low,high,stream,format,NULL,va_list.

Аргументы, видимые Ghidra у10001790, заранее положены для backend, не входят в контракт getter. Это прямой local call, не IAT import. Options читаются заново при каждом вызове, writers/initial runtime value не установлены. Нет собственной проверки stream/format/числа varargs, копии текста или flush; normal EAX полностью сохраняется.

Supporting backend1015cc01 проверяет stream/format NULL, на этом пути пишет22 в errno-like helper, вызывает invalid-parameter helper и при его возврате даёт -1. Полный parser/locking/encoding/I/O/errors глубже1014bd3a пока не раскрыт. Builder игнорирует все результаты fprintf; mismatch format/аргументы не исправляется wrapper.

## 0x100ca860 — CTestHull_BuildGlobalNodeGraph [high]

Строит global graph через временный test hull: классификация узлов, связи, проверка проходимости, compact/remap/hash/cache и .nod.

ECX=CTestHull object, stack arguments нет, plain RET, не bool. Owner НЕ graph: работа идёт с global102238b0. Вход ставит object.think+78=101028e0 SUB_Remove и virtual+8(0.0f); native CTestHull vtable101d6b7c: +8→1000e1f0→virtual+4(delay,0), +4→10017110. Scheduling остаётся реальной side effect даже при ранней ошибке. Caller100cbbd0 ставит global10222df0=1, вызывает builder с тем же ECX, после обычного возврата ставит0.

Выделяет temporary links через10171536(18h,wrap32(nodeCount<<7)), то есть normal capacity128 links на узел. NULL: severity2 diagnostic и return. Затем GetGameDir, CreateDirectoryA /maps и /graphs без проверки результатов, path <game>/maps/graphs/<mapname>.nrp, fopen-like101743a1(path,"w+"). При NULL report handle освобождает temporary links и возвращает. Mapname берётся из gpGlobals.mapname+0c и stringBase+98. Начало path buffer — balanced stack+170, cookie — stack+27c, между ними268 bytes; исходный declared array type не восстановлен, length guards отсутствуют.

При открытом report для каждого node обнуляет linkCount+20,firstLink+24 и восемь route offsets+28..44; пишет исходные position/hints/yaw в report. Position для %d преобразуется CVTTSS2SI, hints sign-extend WORD, yaw float→double. Report output не проверяется. Не очищает global ready/cache flags или старые allocations при входе.

Классификация: category bit2 (air) пропускает ground/water stage. Иначе PointContents(position)==-3 OR-ит bit4, без drop. Для всех прочих contents OR-ит bit1 и делает две TraceLine вниз384: mode1 и mode0, ignored edict global10231f60. Mode передаётся через helper1011a800, который заменяет его на equality-to1. Если fraction первой трассы ordered больше второй, pHit второй ненулевой и hit edict+228 имеет bit02000000, выбирает endpos второй; иначе первой. Без проверки hit/fraction/startsolid записывает выбранный endpos.z+8 в position.z и visibilityPosition.z. X/Y остаются прежними; категории не присваиваются заново, а OR-ятся.

ConnectVisible100ce420 вызывается с ECX=global graph и stack(tempLinks,report,&badNode). EAX0 трактуется как failure: severity2, think+78=ShowBadNode100cef90, position test hull прямо копируется из nodes[badNode], затем free temporary и fclose. Bad index локально не проверен; исходный local slot до callback хранит owner pointer. Нет rollback уже изменённых nodes/flags. Полный producer и значение badNode на его разных выходах — соседний graph-ordering contract.

Для каждого source и каждого его candidate link сначала mask+10=f. Hulls0..3 проверяются по порядку. Bounds (min→max):0=(-12,-12,0)→(12,12,24);1=(-12,-12,0)→(12,12,72);2 и3=(-32,-32,0)→(32,32,64). SetSize1011a030 получает owner.pev,min,max; SetOrigin10119fe0 получает owner,source.position. Если pev.flags bit200 отсутствует, только diagnostic, тест продолжается. Negative local link ordinal имеет отдельный abort/free/fclose, но обычный цикл стартует с0.

Hulls0..2: сохраняет полный pev.flags; при source category&4 добавляет bit2 и выбирает WalkMove mode0, иначе mode1 без принудительного удаления bit2. Yaw=VecToYaw(destination.position-owner.origin). D=rounded float(sqrt(double(float(dy*dy+dx*dx)))); при ordered D>0 двигает test hull шагами16, счётчик s — signed int с +16. Если ordered s+16>=D-1, step=float(float(D-s)-1); иначе16. Возможны нулевой/отрицательный последний step, clamp нет. Engine WalkMove(slot27) получает(edict,yaw,step,mode), EAX0 отвергает hull. Пока EAX!=0 и ordered D>float(s), цикл продолжается.

После walk считает 3D distance от текущего origin до destination, каждый квадрат/sum float, sqrt double→float; hull считается достигнутым при distance<=64 ИЛИ unordered/NaN (COMISS/JBE, если FP exceptions masked). NaN D пропускает шаги; ни finite guard, ни общий iteration cap отсутствуют. На отказе hull0 очищает mask bits1|2|4 и помечает пропуск hull1/2; hull1 очищает2|4 и пропускает hull2; hull2 очищает4. Hull3 проверяется всегда. На каждом normal выходе hull0..2 восстанавливается сохранённый полный pev.flags, включая возможные изменения engine; location не восстанавливается до следующего SetOrigin.

Диагностика отказа ground hull имеет ABI mismatch: строки NODE_*_HULL step %f требуют double, но native100cb178/100cb1b1/100cb1f2 кладёт только PUSH ESI, integer счётчик шагов. Wrapper не исправляет это. Не выдавать printed step за достоверное измерение; фактический вывод/ошибка CRT не запускались.

Hull3: TraceHull(start=source.position+(0,0,32), end=destination.visibilityPosition+(0,0,32), mode1,hull2,owner.edict,outTrace). Очищает bit8, если startsolid(out+4)!=0 либо ordered fraction<1; allsolid(out+0) отдельно не проверяется, NaN fraction сам по себе bit8 не снимает. Mask0 удаляет link заменой последним link этого source; decrements source.linkCount и total, повторно проверяет перенесённый link на той же позиции. Это не stable erase.

Затем calls100cebc0(tempLinks,report), subtract его return из total. Allocates permanent links10171536(18h,total), сразу публикует global+10; старый pointer не освобождается. NULL: diagnostic/free temp/fclose и return без rollback nodes/readiness. Успех: global.linkCount=total, копирует surviving links source за source в contiguous pool, заменяя source.firstLink текущим write index; не сверяет фактический write count с total. Далее global graph calls100cf310 reorder,100ca7c0 hash; их результаты не проверяет.

Reverse-link pairing проходит каждый link source→dest и lookup(dest,source,&index); negative index только warning, не создание обратного link и не сравнение masks/costs. Затем100cb740 строит spatial buckets. ПОСЛЕ этого каждый node с category&1 получает position.z-=8, visibilityPosition.z остаётся поднятой; extrema/quantized bucket coordinates уже получены из поднятых positions и не пересчитываются. Это точный порядок оригинала, не гарантия геометрической согласованности.

В конце free temporary и fclose(report), graph.ready+0=1,bindings+4=1,cached+8=0, BuildCompressedRoutes100cbfe0, SaveNodeFile100ccba0(mapname), AlertMessage severity1 о завершении. Return Save игнорируется, а helper failures не превращают builder в bool failure. Readiness не доказывает успешность hash/bucket/route allocation или записи. Не снимает флаги bound entities и не восстанавливает прежние graph allocations.

Границы: весь собственный control flow и вызовы сверены с byte-verified ASM; семантика callbacks WalkMove/TraceLine/TraceHull/PointContents/VecToYaw и CRT allocation/I/O не восстановлена этим пакетом. Полные visibility/rejection/reorder — graph-ordering; delayed lifecycle — graph-entities. Сценарии bad inputs/NaN/allocation failure описаны как статические ветви, не доказанное проявление на оригинальных картах. Нельзя подменять локальную точность обещанием полной корректности построителя.

## 0x10119fa0 — Engine_SetOrigin_EdictForward [high]

Без адаптации передаёт edict и origin pointer engine SetOrigin.

Ровно FF25 [10222fb8], tail JMP без собственного frame/RET. ABI cdecl(edict*,const float* origin) подтверждён slot28 и caller10120500. В отличие от10119fe0 не принимает CBaseEntity*, не вызывает virtual predicate и не пишет cache+618. Возвращаемый register принадлежит void engine callback, смысловой результат wrapper не определён.

Нет NULL/vector bounds проверки или копирования. Простая запись entvars.origin не эквивалентна этому переходу: engine side effects/spatial linkage вне wrapper ещё требуют разбора.

## 0x101207e0 — BodyQueue_CreateFourEdictRing [high]

Создаёт кольцо из четырёх bodyque edicts и публикует его текущий элемент.

Без stack arguments, plain RET, ECX не используется. Получает string_t как wrap32(address literal bodyque101e6dbc - gpGlobals.stringBase+98), не через AllocString. Четыре раза вызывает CreateNamedEntity engine slot23 с этим значением. Первый edict сразу сохраняется в global10231f60. Для каждого предыдущего edict использует pev=edict+80h и пишет pev.owner+19c=следующий; четвёртый owner указывает обратно на первый.

NULL callback result преобразуется в pev0, но последующая запись owner всё равно выполняется. Нет recovery/free/rollback; первый или промежуточный failure может вызвать запись по низкому адресу, частично созданные edicts остаются. Повторный вызов не освобождает прежнее кольцо. Unique/distinct pointers и корректные private objects полагаются на engine; функция их не проверяет.

Подтверждённый world initializer10120eb0 вызывает это до graph.Clear/freshness/load. Поэтому graph builder использует current bodyqueue edict как ignored entity, не специальный world/NULL sentinel. Полные runtime ordering и lifetime при смене карты, entity bodyque factory/spawn и все callers не закрыты этим локальным контрактом.

## 0x10120500 — BodyQueue_CopyCorpseAndAdvance [high]

Копирует состояние тела в текущий bodyque edict и сдвигает общий cursor по owner chain.

cdecl(entvars* source), plain RET, void. Если source.effects+118 имеет bit80, return без обращения к ring. Иначе destination pev=current global10231f60+80h при nonnull edict, либо0 при NULL, но записи в destination всё равно выполняются: NULL cursor не считается безопасным отказом.

В порядке native копирует angles50..58, model+b8, modelindex+b4, frame+134, colormap+1ac; задаёт movetype+108=6; копирует velocity20..28; задаёт flags+1a8=0; копирует deadflag+174; задаёт renderfx+160=11h. Затем IndexOfEdict(source.pContainingEntity+20c), signed int→float через CVTDQ2PS, пишет renderamt+150. Это IndexOfEdict slot71, не EntOffsetOfPEntity.

После callback перечитывает source.effects и пишет destination.effects=source.effects|20h, затем sequence+12c и animtime+138. Вызывает10119fa0(global current edict,source.origin+8), затем1011a030(destination pev,source.mins+dc,source.maxs+e8). Только после обоих callbacks перечитывает destination.owner+19c и присваивает global10231f60. Destination pev был захвачен до IndexOfEdict, а global cursor для SetOrigin читается позже; reentrant callbacks не объявляются чистыми.

Не копирует все entvars, не назначает solid/health/think самостоятельно, не удаляет source и не выделяет storage. Names полей подтверждены native save descriptors. Source/destination alias и другие callback writes меняют дальнейшие чтения по native порядку; атомарный snapshot не обещается. Создание кольца связано с101207e0, однако полный список callers copy и lifecycle bodyque пока открыт. Тот же cursor читают graph TraceLine consumers, поэтому ignore edict может меняться после copy.
