# Соседний блок поведения полёта: пробы, поворот, события и остановка

Pass28: baseline 2041 REVIEW / 6614 pending. Десять новых primary: 100ab410, 100ab4d0, 100ab5a0, 100ab710, 100ab740, 100ab7d0, 100ab880, 100abc90, 100abea0, 100abf60. Полностью прочитаны saved C и native ASM. Исходный server hl.dll SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Только статический анализ, без исполнения DLL и изменения игровых ресурсов. Адреса/offsets/masks hex, остальные числа decimal, f32 — отдельное native округление в float32.

M — входной private object ECX, V=[M+4], G=[10223188]. Native общие descriptors подтверждают V108=movetype, V1a8=flags, V50..58=angles, Mf0=m_flGroundSpeed, M218=m_IdealActivity. Route position находится в M238+16*i, flags в M244+16*i, cursor M2bc. Эти общие имена не устанавливают concrete class данного блока.

## Принадлежность и границы доказательства

Не найдено concrete native RTTI/vtable binding. Для всех десяти primary, 100ab7b0, ранее разобранных 100ab840 и 100ab8b0 exact LE32 scan по raw .rdata/.data возвращает пустой набор. Независимый instruction-aligned E8/E9 scan всей статически дизассемблированной .text также не даёт прямых call/jump к этим entry. Case-sensitive raw substring `Flying` в DLL отсутствует. Каждый scan сохранён с командой, областью, SHA и воспроизводится без ignored cache. Это НЕ доказательство dead code, отсутствия computed pointers, indirect dispatch, runtime construction или всех форм именования. Поэтому названия карточек описывают локальную семантику, не утверждают класс CFlyingMonster. CGenericMonster RTTI/table в evidence служит только support для базовых callbacks; она не является владельцем нового блока.

Связь с [исполнителем 100ab8b0](../server-monster-route-execution/contract.md) установлена по совпадающим конкретным полям и вызову общего Move: 100ab7d0 пишет M374=400 при event8; 100abf60 условно пишет M374=0 и всегда переносит shared vector в M368..370; 100ab880 при movetype5 копирует M374→Mf0. Ранее разобранный executor пишет M374=200 при восстановлении activity, меняет его через Approach и обновляет M378. В этих новых телах writer M37c не найден; его начальное значение, producer, save/restore и concrete ownership остаются неизвестными. Совпадающий displacement в чужом объекте не считается подтверждением общего поля.

Native-only entry 100ab7b0..100ab7c7 окружён INT3 и имеет собственный RET: прочитать V.movetype; полный EAX=50 при5, иначе1. ECX=M, stack arguments нет. В saved-C корпусе этой функции нет, поэтому она сохранена только как ASM evidence/coverage gap, без новой REVIEW-карточки. Уже разобранные [100ab840 death adapter](../server-derived-death/contract.md) и 100ab8b0 не пересчитываются.

## 0x100ab410 — FlyingBehavior_QueryCeilingOrWaterSurface

ABI: ECX=M, stack pointPointer, RET4, float-valued ST0. Сохранить point pointer и M. Скопировать исходные X/Y в local endpoint, сохранить исходный float Z отдельно, вычислить endpoint.z=f32(double(Z)+4096.0) с native double constant101cac30. `[EBP+8]` переиспользуется под сохранённый Z, но исходный pointer остаётся в ESI. Это не вызов с испорченным указателем и не чистое float32 addition.

Вызвать cdecl1011a800(point,&endpoint,1,NULL,&localTrace): engine TraceLine wrapper нормализует exact flag1 в1, ignore edict=NULL. TraceResult56-byte local не инициализирован caller. При ordered fraction==1 использовать построенный endpoint.z; при любом другом fraction, включая NaN через UCOMISS/LAHF/TEST44, заменить candidate на trace.endPos.z. Никакого fraction<1, startsolid/allsolid guard или проверки заполнения output нет.

После engine callback заново прочитать M.pev.flags и проверить mask0x2. Если сброшена, FLD candidate и RET4. Если установлена, передать cdecl1011aa30(originalPointPointer,savedOriginalZ,candidate), вернуть его ST0 без дополнительного float store. Таким образом XY для water helper читаются по прежнему pointer после trace callback, а нижний Z берётся из сохранённого значения до callback. Нельзя заменить всё свежей копией точки.

Bounded support1011aa30 сначала проверяет PointContents(XY,lowerZ)==-3, иначе возвращает lowerZ; затем upperZ, при water возвращает upperZ; иначе двоичный поиск по вертикали до ordered width<=1 и возвращает последнюю проверенную Z через ST0. Отдельные native отрицательные/NaN bounds не исправлены. Полный engine contents/trace policy и lifetime pointer остаются внешними; mask0x2 соответствует FL_SWIM в pinned header, но данный body не задаёт flags сам.

## 0x100ab4d0 — FlyingBehavior_BankThenChangeYaw

ABI: ECX=M, один исходный stack DWORD yawSpeed, RET4. На обычном возврате ST0 от базового100bcdc0 сохраняется: wrapper не делает FSTP после последнего call. Ghidra void не отражает этот фактический float return. Аргумент передаётся исходными bits, а базовый helper численно трактует его как signed integer speed; это не float interval.

Если начальный V.movetype!=5, сразу передать yawSpeed в100bcdc0(M) и вернуть его результат. При movetype5 сначала вызвать100bed20(M) — signed yaw difference — и FSTP округлить ST0 в float32 local до вызова M.virtual168(). Initial bankTarget=+0.0. После callback перечитать M218 и сравнить с возвращённым полным EAX. Только при различии выбрать target: ordered delta<-20 даёт+90, ordered delta>20 даёт-90, иначе0. Оба threshold strict; -20/+20 и NaN оставляют0. Callback не считается чистым или постоянным.

После выбора загрузить свежие G.frametime и M.pev. Delta=f32(double(frametime)*220.0), где220 — double constant101cac28. Передать cdecl101174a0(bankTarget,current V.angles.z,delta); затем снова прочитать M.pev и записать ST0 через FSTP в его angles.z. Approach имеет собственные ordered сравнения, не вводит lower/finite clamp для delta. Ни X angle, ни velocity здесь не меняются. Завершить безусловным100bcdc0(M,originalYawSpeed), даже если virtual168 или Approach изменили activity/movetype. Полные base yaw/angle contracts остаются [в navigation](../server-monster-navigation/contract.md).

## 0x100ab5a0 — FlyingBehavior_CheckElevatedHullLocalMove

ABI: ECX=M, stack(startPointer,endPointer,targetPrivate,optionalDistanceOut), RET16, полный EAX0 либо2. Обязательные указатели M/V/start/end не проверяются. Если initial V.flags mask0x2 установлен, вызвать PointContents10119780(end); при результате!=signed-3 немедленно вернуть0, не писать optionalDistanceOut. Другие medium checks или попытка проложить путь отсутствуют.

Создать две local точки: X/Y=f32(originalX/Y+positiveZero), Z=f32(originalZ+32). Это реальные ADDSS, не побитовый copy: signed zero/NaN могут вести себя иначе. End копируется до start. Вызвать TraceHull1011a7e0(&elevatedStart,&elevatedEnd,0,hull2,currentOwnEdict,&trace). Caller не инициализирует local trace, engine должен заполнить его. +32 с literal101a9728 применяется к обеим точкам, не к bounding-box размерам.

После trace при nonNULL optionalDistanceOut вычислить длину `(trace.endPos−(0,0,32))−*startPointer` с отдельными float32 subtraction; start читается заново через сохранённый pointer. Сумма квадратов идёт y²+x²+z² в float32, затем double SQRTSD (ordered negative →1016be90), округление в float32 и запись output. Это фактически пройденная длина, не fraction и не длина исходного полного segment. Output пишется ДО окончательного решения hit/target. При ошибке medium до trace остаётся нетронутым.

Blocked condition — localTrace.startsolid!=0 ИЛИ ordered fraction<1. COMISS(1,fraction)/JBE при startsolid0 считает NaN неблокированным, так же fraction>=1; это literal branch, не ожидаемая collision semantics. При отсутствии blocked condition вернуть2. При blocked condition вернуть2 только если targetPrivate!=NULL и targetPrivate.pev.edict равен текущему G.trace_ent(+74). Сравнивается engine global, не local trace.pHit; target/V/edict валидность отдельно не проверяется. Во всех остальных случаях0. Нет allsolid test, условия distance>0 или собственного изменения origin, route и speed.

## 0x100ab710 — FlyingBehavior_ForwardTriangulateDetour

ABI: ECX=M, пять stack DWORD: startPointer,endPointer,float blockedDistance,targetPrivate,apexOutPointer; RET20. Caller переупаковывает их в том же порядке и вызывает100bdf80 с тем же ECX. Третий argument проходит MOVSS load/store без численного преобразования; прочие DWORD — PUSH исходных bits. Это pointers на vectors, не три BY VALUE floats.

На возврате POP EBP/RET20 сохраняют полный EAX helper, вопреки void в saved C. Wrapper не проверяет аргументы/результат, не обнуляет apex output, не меняет M сам и не добавляет flying-specific offset. Полный detour algorithm принадлежит [100bdf80](../server-monster-pathfinding/contract.md); его callbacks/mutations/false paths нельзя выдавать за независимый shortcut в этом wrapper.

## 0x100ab740 — FlyingBehavior_QueryFloorHeight

ABI: один stack pointPointer, RET4, ST0 float-valued result; входной ECX не используется как object. Создать local endpoint=(point.x,point.y,f32(point.z−2048.0f)), вызвать1011a800(point,&endpoint,1,NULL,&localTrace). Trace storage56 bytes не инициализирован; -2048 вычисляется SUBSS с float constant101afed8, в отличие от double+4096 в100ab410.

Только ordered fraction==1 возвращает endpoint.z через FLD. Любое unequal/unordered значение, включая NaN, возвращает trace.endPos.z. Нет clamp, проверки контакта/solid flags, NULL guard или medium logic. Exact bits final local float расширяются в ST0, дополнительных арифметических преобразований после trace нет.

## 0x100ab7d0 — FlyingBehavior_HandleSpeedAndFlapEvents

ABI: ECX=M, один stack eventPointer, RET4 для собственных ветвей; event ID — DWORD[*eventPointer], options здесь не читаются. ID8 пишет точные bits0x43c80000 (float400.0) в M374 и возвращает. Ни Mf0, M378, direction, velocity, activity, ни deadline этим event не изменяются. Это дополнительный producer speed storage, который следующая100ab880 может перенести в groundspeed.

ID9 читает M380 как char* sound pointer; NULL означает return без эффекта. Иначе100fc9f0(current M.pev.edict,channel4,sample,1.0f,float32(0.8),flags0,pitch100). Параметры передаются как обычные wav/sentence emitter arguments, его возможное global volume scaling — внешний контракт. Здесь не выбираются случайные samples, не проверяется alive и не устанавливается think.

Все прочие ID tail JMP100bf310 после восстановления EBP, с прежним ECX и event stack argument. Ghidra terminal-call пометка не означает noreturn: native именно E9, normal cleanup наследуется от base event handler. Новая функция не обещает нормализованный EAX/status: event8 оставляет результат арифметического dispatch, event9 зависит от пройденной ветви/emitter, fallback от base. Pointers/lifetime и concrete animation-model association не доказаны этим body.

## 0x100ab880 — FlyingBehavior_CopySpeedThenMove

ABI: ECX=M, один stack float interval, RET4. При initial V.movetype==5 побитово скопировать DWORD M374 в Mf0; при другом movetype ничего не писать до базового вызова. Затем безусловно вызвать100c0750(M,interval), передав исходные float bits через MOVSS stack copy. No finite/positive/speed clamp, activity check или delay gate.

Это producer groundspeed перед общим [Move](../server-monster-movement/contract.md), а не вызов100ab8b0 напрямую. Какая virtual160 будет выбрана внутри Move, зависит от runtime object table, здесь не установленной. Базовые mutations/guards применяются уже после копии; даже если Move немедленно отклонит движение, собственная Mf0 запись wrapper уже произошла. После call нет собственного feedback или rollback. EAX не является нормализованным результатом, он просто не перезаписывается wrapper после base return.

## 0x100abc90 — FlyingBehavior_FindContentsBoundaryFraction

ABI: ECX=M, stack(startPointer,endPointer,requiredFractionOut), RET12, полный EAX0/1. Сначала вызвать PointContents(start), сохранить signed contents C. Затем прочитать свежие M.pev.flags. Если bool(flags&2) не равен bool(C==-3), записать float0 в requiredOut и вернуть1 без чтения end. NULL requiredOut не проверяется. При согласованном начале вызвать PointContents(end); если result==C, записать float1 и вернуть0. Это equality всех contents codes, не только water/nonwater.

Для разных contents прочитать свежие start/end координаты, delta=f32(end−start), length=f32(sqrt(double(f32(f32(dx²+dy²)+dz²)))). Ordered negative sum идёт через math helper, NaN через SQRTSD. Только ordered zero length выбирает direction=(0,0,1); иначе reciprocal=f32(1/length) и float32 умножения. EAX от contents сохранён независимо от этих FP operations.

Начальные bounds low=+0.0 и high=length. Пока ordered f32(high−low)>1, mid=f32(double(width)*0.5+double(low)), где0.5 — double101a1e48. Построить probeXYZ=f32(direction*mid+*startPointer), причём start координаты заново читаются на каждой итерации; направление и исходная length остаются сохранёнными. При PointContents(probe)==C установить low=mid, иначе high=mid; только ordered новая width>1 продолжает. Это поиск границы начального contents по пробам, не гарантия first crossing для произвольной неоднородной среды.

После цикла записать f32(low/originalLength) и вернуть1; нет проверки zero/NaN divisor, clamp к[0,1] или предела итераций. При inconsistent engine responses одинаковые точки могут дать length0 при разных contents и итог0/0; NaN length тоже не превращается в безопасный0. В обычном finite стабильном случае precision остановки — ширина segment в мировых units не больше1, а не fraction epsilon. Ошибочные или изменяющиеся callback результаты не исправляются; функция сама не перемещает объект и не меняет flags.

## 0x100abea0 — FlyingBehavior_ShouldAdvanceWaypointWithFrameTolerance

ABI: ECX=M, один stack float distance, RET4, полный EAX0/1 посредством XOR EAX/SETAE AL. Прочитать M2bc без bounds check и low-byte mask0x80 текущего waypoint. Если mask сброшена, использовать входной distance. Если установлена, игнорировать входной distance и вычислить полную3D длину waypoint.position−current V.origin: float32 sum y²+x²+z², double SQRTSD/ordered-negative fallback, float32 rounding.

Threshold=f32(f32(current Mf0*G.frametime)+64.0f), literal101a1f04. Вернуть1 только при ordered chosenDistance<=threshold. Equality допускается, NaN любого operand даёт0, отрицательные distance/speed/dt не запрещены. Здесь нет фиксированного8-unit threshold100c2390 и нет terminal completion double(groundspeed)*0.2 из100bc290. Это только predicate без cursor increment, origin write, tracing, route refresh или activity change; actual virtual binding не доказана.

## 0x100abf60 — FlyingBehavior_StopAnglesAndStoredDirection

ABI: ECX=M, stack arguments нет, plain RET. Сохранить M, вызвать свежий virtual168() и сравнить полный EAX с перечитанным M218. Только при различии записать M374=positiveZero bits и M218=EAX. Если activity уже равна, speed storage M374 сохраняется, даже если ненулевой. Mf0 не обнуляется ни в одной ветви; нельзя свести функцию к безусловной остановке всей скорости.

После этого в обеих ветвях перечитать V и обнулить angles.z(+58), затем снова перечитать V и обнулить angles.x(+50). Yaw(+54), velocity, movetype, route/goal и M378/M37c не меняются. Далее скопировать QWORD shared10222f34→M368/M36c и DWORD10222f3c→M370. Это не гарантированный zero vector: native storage находится в virtual zero-fill .data, но runtime writers/value остаются внешними. На выходе EAX содержит последние bits shared vector.z, а не callback result, bool или status.

Ни object lifetime guard после virtual168, ни NULL checks, ни normalization не предусмотрены. Совпадающие stores связывают эту функцию с direction state исполнителя100ab8b0, но сами по себе не доказывают конкретную class/vtable. Возможные последующие Move/engine callbacks описываются отдельно и здесь не вызываются.

## Воспроизведение и остаточные вопросы

`capture.py → write_notes.py → verify.py` воспроизводят packet без ignored полного listing: static objdump .text для edge scan хранится только в памяти, bounded ASM и PE byte hashes сохранены. Десять новых REVIEW и один ASM-only gap учитываются отдельно; старые reviews не изменяются. Поддержки [route execution](../server-monster-route-execution/contract.md), [navigation](../server-monster-navigation/contract.md), [pathfinding](../server-monster-pathfinding/contract.md), [death](../server-derived-death/contract.md) сохраняют прежние границы.

Открыты concrete owner/virtual slots, constructor и producer M37c, начальное значение и persistence M368..380, все indirect entry paths, содержимое engine world и runtime достижимость ветвей. Механическое совпадение offset со сторонним объектом не использовано как доказательство. Отсутствие static references не объявляется недостижимостью. Игровая/визуальная parity не проверялась.
