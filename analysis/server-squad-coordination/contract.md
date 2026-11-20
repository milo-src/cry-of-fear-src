# Отряды монстров: участники, слоты и сведения о враге

Статический pass29 оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Десять новых pending-функций; исходные C и DLL не изменены, игра не запускалась. Адреса и смещения ниже hex, обычные количества и радиусы — decimal. M — исходный private receiver ECX, V=[M+4], G=[10223188]. Формулы FP относятся к обычному исполнению с masked exceptions; не обещают отсутствие аппаратных исключений.

Native RTTI подтверждает `CSquadMonster` vtable101af8e4 и `CFlier` vtable101afb7c. Обе имеют slot148→10101910. В обеих slot7c→10041890 буквально `MOV EAX,ECX; RET`, slotbc→10013550 возвращает полный EAX=(V.deadflag174!=2). Slot50 у CSquadMonster→100132a0 возвращает M350, у CFlier→10040770 возвращает5. Это конкретные bindings, но кандидат из engine enumeration может иметь другую таблицу; virtual7c нельзя безусловно считать no-op/cast, virtualbc — проверкой health>0. Native MONSTER descriptor называет M350=m_iClass, M34c=m_pCine, M304=m_afCapability, M184=m_hEnemy, M2f4=m_vecEnemyLKP, M180=m_afConditions. Маски условий сохраняются численно.

Native SQUAD table10219a18 содержит пять descriptors: m_hSquadLeader368 type4/count1, m_hSquadMember370 type4/count4, m_fEnemyEluded398 type12/count1, m_flLastEnemySightTime394 type15/count1, m_iMySlot39c type10/count1. Aggregate mask390 в этом списке отсутствует. ENTVARS подтверждает origin8, view_ofs178, netname1d4, spawnflags1a4; edict argument V20c отдельно связан с ABI и bridge-кодом, не выдан за поле save table.

В контрактах `Valid(H)=10017780` означает ненулевой edict с совпавшим serial; `Resolve(H)=10017790` при таком edict возвращает edict+7c private pointer, который всё ещё может быть NULL. Оба вызывают10017ba0, не очищают stale handles, не проверяют free/alive/class и не удерживают lifetime. `Set(H,P)=10017740`: P==NULL очищает оба DWORD; nonNULL берёт P.V.edict и, если он nonNULL, его serial. При nonNULL P с NULL edict записывается нулевой edict, а прежний serial остаётся. Вызовы и повторные чтения нельзя заменять единым snapshot.

Почти все обходы используют L=Resolve(M368), при NULL — M; затем четыре Resolve(L370+8*i), после них пятым кандидатом сам L. Это не рекурсивный обход дерева и не набор уникальных объектов. Реальные self/duplicate/cyclic handles не нормализуются. Прямые E8/E9 и exact LE32 raw-data references закреплены отдельно в evidence; отсутствие найденного ребра не доказывает недостижимость через indirect вызовы.

## 0x10101090 — CSquadMonster_ReserveRequestedSlotOrSplitMarker

ABI ECX=M, один DWORD requestedMask, RET4, полный EAX0/1. Если Valid(M368)==0, немедленно вернуть1 без изменения M39c или aggregate mask. При валидном leader вызвать101012e0(M). Если он возвращает ненулевое значение, записать M39c=400h и вернуть1; requestedMask игнорируется, mask390 лидера не резервируется. Это отдельный marker для различающихся enemies, а не найденный свободный bit.

Иначе заново Resolve(M368), L=resolved либо M. Считать occupied=L390 и requestedMask. При полном DWORD equality вернуть0. Иначе последовательно i=0..10, bit=1<<i; первый bit, присутствующий в requestedMask и отсутствующий в occupied, записывается как L390=occupied|bit, затем M39c=bit, EAX1. В поиске участвуют только нижние11 bits; верхние bits occupied сохраняются, requested-only старшие bits не создают слот. Никаких callbacks внутри этого цикла нет.

Если подходящего bit нет, EAX0 и оба поля неизменны. Ранее выделенный M39c не освобождается перед новым резервированием, не проверяется на соответствие L390 и не сбрасывается при ошибке. Разрешение leader выполняется заново после split-query; результат может отличаться от ранее прочитанного. Освобождение — отдельный уже разобранный10101980, а не часть этой операции.

## 0x101011e0 — CSquadMonster_AddMemberAtFirstInvalidHandle

ABI ECX=L, один private member P, RET4, полный EAX0/1. Ровно четыре слота L370,L378,L380,L388 проверяются через Valid по порядку. Если все четыре имеют valid edict/serial, вернуть0 без записей, даже если их private pointers NULL. Первый invalid/stale handle считается свободным.

На первом таком слоте выполнить Set(slot,P), затем Set(P368,L), затем вернуть1. Leader самого L не проверяется и не назначается, class/alive/current squad/dedup/self checks отсутствуют. P==NULL не является безопасным remove: первый Set очищает слот, но следующий обращается через P+368. NonNULL P с NULL edict может дать EAX1 при фактически invalid member handle; setter при этом сохраняет старый serial, как описано в общей границе. Здесь нет allocation, удаления сущности или очистки прежней связи P с другим leader.

## 0x10101230 — CSquadMonster_CopyLeaderEnemyLkpToSelf

ABI ECX=M, без stack args, plain RET. L=Resolve(M368); при NULL использовать M. Если итоговый L ненулевой, скопировать сырые первые8 bytes L2f4→M2f4 через MOVQ, затем DWORD L2fc→M2fc. FP arithmetic и проверки enemy equality/видимости отсутствуют. При fallback на M копирование самому себе всё равно выполняется. Поздний тест L==NULL не делает входной NULL M безопасным: до него уже вызван resolver по M368.

После обычного копирования EAX содержит raw DWORD третьего компонента LKP, а не bool/успех. При пути с итоговым NULL EAX0. Другие enemy/condition/history поля не меняются. Support caller10100c20 вызывает этот helper при совпадении resolved enemies и нулевом результате своего CheckEnemy; родительская логика caller не является дополнительным guard внутри текущего тела.

## 0x10101270 — CSquadMonster_CountResolvedMembersAndLeader

ABI ECX=M, без аргументов, plain RET, полный EAX=count. Если Valid(M368)==0, вернуть полученный от Valid ноль. Иначе Resolve(M368), fallback L=M, обойти четыре Resolve(L370+8*i) и затем L. Для каждого nonNULL private pointer увеличить локальный count, в конце вернуть его. Никаких проверок deadflag/health/classification/current leader этих участников нет.

При нормальном ненулевом receiver и пройденном gate count лежит1..5, поскольку L считается пятым. Дубликаты, включая member-slot на самого leader, считаются повторно. Valid handle с NULL private не учитывается, хотя101011e0 считает такой слот занятым. Никакого поля totalCount или уплотнения списка функция не пишет; лидер и база массива фиксируются после одного Resolve, каждый member разрешается отдельно.

## 0x101012e0 — CSquadMonster_HasDifferentResolvedEnemy

ABI ECX=M, без аргументов, plain RET, полный EAX0/1. При invalid M368 вернуть0. Иначе L=Resolve(M368) либо M; один раз сохранить referenceEnemy=Resolve(L184). Обойти четыре member slots плюс самого L. NULL candidate пропустить. Для nonNULL candidate проверить Valid(candidate184), и только при true заново Resolve(candidate184); если этот pointer не равен сохранённому referenceEnemy, вернуть1. Иначе продолжить; отсутствие различия даёт0.

ReferenceEnemy может быть NULL: он получен без отдельного Valid gate. Candidate с valid edict/serial, но NULL private enemy сравнивается как NULL. Invalid candidate enemy пропускается, даже если его stale storage отличается. Leader в пятой позиции разрешает своего enemy повторно, поэтому при внешнем изменении storage теоретически может отличаться от собственного snapshot. Функция не сравнивает m_hTargetEnt18c, не требует живого enemy и ничего не записывает.

## 0x10101380 — CSquadMonster_PropagateEnemyAndPreserveHistory

ABI ECX=M, один private enemy E, RET4; нет нормализованного success return. Сначала Valid(M368); при false return даже для E==NULL. Если valid и E==NULL, AlertMessage severity1 с точной строкой `ERROR: SquadMakeEnemy() - pEnemy is NULL!\n` и return. Иначе L=Resolve(M368) либо M; четыре member slots и L обходятся последовательно без dedup.

Для каждого nonNULL candidate C: Resolve(C184)==E означает skip; иначе mask10h в BYTE C180 также означает skip. Если эти guards прошли и Valid(C184) ненулевой, сначала поставить на stack указатель C2f4, затем Resolve(C184), затем вызвать100c1670(C,oldEnemy,&C2f4). Первый pointer PUSH остаётся через zero-argument resolver; Ghidra неверно может приписать его resolver. History helper не принимает Vector by value, не очищает current enemy и игнорирует NULL oldEnemy; его собственные четыре слота/duplicate guards разобраны отдельно.

После возможного history вызова без проверки его результата выполнить Set(C184,E). Заново прочитать E.V, скопировать его origin.x/y сырыми8 bytes в C2f4, загрузить origin.z, OR C180 с10000h, затем записать z в C2fc. Порядок OR до z-store буквально native. LKP берётся отдельно для каждого candidate, не общей сохранённой позицией E. Squad slot mask не меняется. Не требуется E alive, relationship/classification/visibility или trace; callbacks/history/setter не обеспечивают pin/lifetime и rollback.

## 0x10101490 — CSquadMonster_AnyMemberWithinHorizontalRadius

ABI ECX=M, stack point pointer Q и float radius, RET8, полный EAX0/1. При invalid M368 вернуть0. Иначе Resolve leader с fallback M; четыре member Resolve и затем L, NULL candidates пропустить. Для каждого nonNULL C заново прочитать Q.x/y и C.V.origin.x/y. Z не участвует, сам leader включён, дубликаты не устраняются. NULL Q не проверяется, но не разыменовывается до первого nonNULL candidate.

Native dx=float32(Q.x−origin.x), dy=float32(Q.y−origin.y); squareSum=float32(float32(dy*dy)+float32(dx*dx)), именно y²+x². Расширить sum в double. Ordered sum<0 направляет в1016be90; все остальные значения, включая NaN, идут SQRTSD. Double root округлить в float32 distance. COMISS(radius,distance)/JAE принимает только ordered radius>=distance, включая equality, и возвращает1. NaN radius/distance не проходит. Нет ABS(radius), clamp или finite checks; положительная infinity может принять infinite distance. Если никто не подошёл,0.

Свой список и поля эта функция не меняет. Support10100ca0 при valid leader вызывает её с radius128.0 и обращает результат; полная политика выбора точки принадлежит caller. Математический libm fallback и engine FP environment не объявлены восстановленными внутри этого пакета.

## 0x10101550 — CSquadMonster_CopySelfEnemyLkpToLeader

ABI ECX=M, без аргументов, plain RET. L=Resolve(M368), fallback M; при nonNULL L скопировать M2f4..2fb в L2f4 через MOVQ, затем DWORD M2fc в L2fc. Это обратное направление10101230. Никакого Valid gate, enemy equality/visibility/deadflag test здесь нет. При invalid handle это self-copy, а не early skip; входной NULL M не защищён предварительно.

После обычного копирования EAX=raw DWORD M2fc, не bool; путь с итоговым NULL сохраняет EAX0. Остальные поля не меняются, все12 bytes копируются без float преобразования. Caller10100c20 использует это направление при совпадении resolved enemies и ненулевом результате своего CheckEnemy; текущая функция не повторяет его проверки.

## 0x10101590 — CSquadMonster_RecruitByNetnameOrSphere

ABI ECX=M, stack signed integer radius R и signed initialLimit K, RET8, полный EAX результата. Сначала fresh virtual50(M) и сохранить classification; только потом Valid(M368). Valid leader либо K<2 даёт EAX0 без собственных записей. Virtual50 вызывается даже при последующем отказе. Иначе Set(M368,M), затем ПЕРЕЗАПИСАТЬ stack K числом1 и использовать его как count. Исходный K больше нигде не ограничивает count. Массив member slots заранее не очищается, masks390/39c не обнуляются.

При текущем V.netname1d4!=0 выбрать named-ветку:10118480(NULL,`netname`,G.stringBase+netname). Если первый результат NULL, очистить M368 и вернуть1. Для каждого nonNULL enumeration object B вызвать fresh virtual7c(B), получить C. Только C!=NULL, Valid(C368)==0, virtual50(C)==сохранённой classification и C!=M допускают AddMember101011e0(M,C). Проверки идут в этом порядке; comparison C!=M выполняется после classification callback. AddMember0 прекращает enumeration, иначе count++. Named-ветка НЕ проверяет candidate deadflag/health/script-controller, classname, distance или trace.

После каждой пропущенной/добавленной named-кандидатуры заново читать M.V.netname и G.stringBase, вызвать10118480(предыдущий B,`netname`,fresh name). Продолжение enumeration использует B, а не возвращённый virtual7c private C. Родительский netname не snapshot на весь проход; смена name после callback влияет на следующий поиск. Helper10118480 преобразует previous private→edict, вызывает engine FindEntityByString, требует ненулевые edict и EntOffsetOfPEntity, пропускает valid edict с NULL private продолжением поиска. Здесь не подменяется поиск по alias/targetname.

При начальном netname==0 выбрать spatial-ветку: convert signed R через CVTDQ2PS в float32, вызвать101186b0(NULL,&M.V.origin,Rfloat). Первый NULL также очищает M368 и возвращает1. На каждом B сначала fresh virtual7c(B)→C. Нужны C!=NULL,C!=M, fresh virtualbc(C)!=0, DWORD C34c==0, Valid(C368)==0, fresh virtual50(C)==сохранённой classification. Все guards последовательны; конкретные CSquadMonster/CFlier bc проверяют лишь deadflag!=2, другие overrides внешние. Собственный M304 capability здесь не проверяется.

Только при сохранённой classification==7 дополнительно сравнить classname strings текущих M/C побайтно до NUL. Native inline unsigned-byte comparator без case folding, locale или длины; любая разница исключает C. Для других classification classname comparison нет. Затем нужен текущий C.V.netname==0. Classification callback мог изменить fields; именно после него заново берутся classname/netname и entvars. Это не relationship matrix и не проверка команды игрока.

Для оставшегося C построить traceStart=float32(M.origin+M.view_ofs), traceEnd=float32(C.origin+M.view_ofs), по компонентам. На обоих концах используется view_ofs M, а не C. Вызвать1011a800(&start,&end,1,C.V.edict,&uninitialized local TraceResult). Wrapper пересылает это engine TraceLine; ignored edict принадлежит C. Только ordered fraction==1.0 допускает AddMember(M,C); NaN, другие fraction исключают. startsolid/allsolid/trace hit entity не проверяются. Trace buffer заранее не обнуляется. AddMember0 прекращает проход, success увеличивает count.

Следующий spatial поиск всегда101186b0(предыдущий B,&fresh M.V.origin,float32(signed R)); radius преобразуется снова, origin заново получен. Helper делает один engine FindEntityInSphere и возвращает private лишь при edict!=NULL и EntOffsetOfPEntity!=0; NULL private завершает внешний цикл, здесь нет внутреннего skip-loop как в string-search. Расстояние, sorting и полнота engine enumeration — внешние. Нет дополнительной проверки точной сферы в текущем теле после helper.

После обычного окончания либо первого AddMember failure: если count==1, очистить только M368, оставить member slots/masks как есть; вернуть count. Таким образом после стартового допуска возврат1 означает отсутствие добавленных участников и снятый self-leader, но не EAX0. При обычном неповреждённом списке максимум новых additions4 и count5; исходный K=2 или4 не задаёт меньшего лимита. Уже существующие занятые member slots не входят в count, хотя сокращают доступные места. Нет rollback успешных additions, дедупликации или гарантии, что count равен10101270 после внешних мутаций.

## 0x10101910 — CSquadMonster_StartAndAttemptRecruit

ABI ECX=M, без stack args, plain RET; EAX не нормализованный status. Сначала всегда вызвать базовый starter100c2450(M). Только после него перечитать BYTE M304 и требовать mask8. Далее Valid(M368)==0; затем свежий V.netname==0 либо mask20h в BYTE V.spawnflags1a4. При провале любого gate return. Capability mask8 не следует смешивать с spawnflags20; netname не targetname.

При допуске вызвать10101590(M,signed radius1024,initialLimit4). Ненулевой EAX вызывает AlertMessage severity2 с точной строкой `Squad of %d %s formed\n`, result и fresh classname через current G.stringBase. Даже result1 из recruit, который уже очистил self-leader из-за отсутствия additions, печатается как formed1; диагностика не доказывает существование группы. Ноль — без сообщения. Никаких собственных масок/list/state resets после recruit нет.

Concrete CSquadMonster и CFlier slot148 подтверждены native RTTI/table. Вызов base starter предшествует всем squad-guards: он выполняет capability/activity/model queries, placement/target/schedule операции согласно прежнему attack-dispatch контракту. Эти effects не отменяются при отказе recruit. Статическая привязка не доказывает наличие конкретного монстра на картах или успешный runtime startup.

## Доказательства и продолжение

`capture.py` заново получает bounded ASM из исходной DLL, сверяет каждую машинную строку с PE, сохраняет native descriptors/RTTI/virtual slots/API/export bindings, exact LE32 raw-data references и полный instruction-aligned static E8/E9 scan в памяти. Большой listing не нужен в tracked files. `verify.py` независимо отображает PE и повторяет byte/hash/table/scan проверки; отдельный replay сравнивает hashes всех файлов пакета. C-псевдокод не считается точным ABI: возвраты EAX, RET cleanup и pointer/float arguments установлены по native.

Связанные прежние contracts: [handles](../server-handles/contract.md), [death/slot release/detach](../server-derived-death/contract.md), [enemy history](../server-monster-decisions/contract.md), [starter](../server-monster-attack-dispatch/contract.md), [search](../server-targets/contract.md). Supporting Save/Restore10101130/10101170 подтверждают label/table, но не получают новые REVIEW. Остальные squad callers10100c20/10100ca0 и edge10100d21→10101380 показаны только как поддержка/навигация; их полные будущие карточки не заявлены.

Открыты полные adjacent squad overrides/persistence, конкретные callback mutations иных subclasses, engine enumeration/trace lifetime semantics и runtime maps. Здесь не исправляется оригинальный initialLimit overwrite или асимметрия старого DetachLinks. Никаких новых игровых реализаций, visual/audio parity или runtime достижимости пакет не утверждает.
