# Решения монстра: hint nodes, укрытие, цели и награды

Десять локальных entry оригинального server hl.dll разобраны статически по полному C и bounded native ASM. Адреса и offsets — hex; количества, расстояния и награды — decimal. DLL и игра не запускались. Имена функций аналитические, native RTTI/save descriptors используются только там, где сохранены доказательства.

## Маршрут чтения

- [Scheduler](../server-monster-scheduler/contract.md) → hint selection100be8e0 и lateral cover100bea60 → [pathfinding](../server-monster-pathfinding/contract.md).
- GetEnemy100bed80 → current EHANDLE, RememberOldEnemy100c1670/RestoreOldEnemy100c15e0 → relationship100bf7f0.
- Gun position100beef0 → MakeVectors с локальным m_HackedGunPos, без модели attachment.
- Kill callers → reward100befc0 → random named item, counters и [TimerPlus MP protocol](../server-multiplayer-flow/contract.md).

## Подтверждённые поля

| Объект | Offset | Роль |
|---|---|---|
| Monster |180| conditions |
| Monster |184/188| current enemy EHANDLE (edict, serial) |
| Monster |194..1b3| четыре old-enemy EHANDLE |
| Monster |1b4..1e3| четыре сохранённые Vector позиции |
| Monster |230| schedule pointer; interrupt mask в schedule+8 |
| Monster |2ec| m_afMemory |
| Monster |2f4| m_vecEnemyLKP |
| Monster |338| m_HackedGunPos, Vector |
| Monster |354| m_iPlayerReact |
| Node |50/52| unsigned hint type / signed activity |
| Global |10225974| общий cursor hint search |
| Recipient |638| увеличиваемый reward accumulator; readers отдельно |

CGenericMonster vtable101ce36c: +138=relationship100bf7f0, +1e0=reject hint100be5a0, +208=GetEnemy100bed80,+228=gun position100beef0. Таблица и RTTI сохранены; это не утверждение об одинаковых overrides всех NPC. Save descriptors подтверждают monster fields. Engine TraceLine/MakeVectors остаются внешними вызовами, не наблюдавшимися в runtime.

## Границы следующего разбора

Derived best-enemy/hint/cover/localmove/classification callbacks; global hint cursor и graph mutations со стороны других функций; полный kill lifecycle, survival manager state и player reward readers; writers relationship matrix и полный диапазон class IDs; client TimerPlus. Полные body helpers current-handle/route описаны отдельно, новый пакет не обещает потокобезопасность общего graph/basis или безопасное поведение повреждённых объектов. Статические malformed paths сохранены буквально.


## 0x100be5a0 — Monster_RejectHintType_Default

Возвращает false для hint type в подтверждённой CGenericMonster vtable.

Native XOR EAX,EAX; RET4. Принимает и снимает один stack DWORD, хотя C показывает void(void). ECX и аргумент не читаются, состояние не меняется. CGenericMonster vtable101ce36c+1e0 указывает сюда; FindHintNode передаёт zero-extended WORD node+50. Эта конкретная таблица отвергает каждый ненулевой hint, но другие overrides не исследованы этим телом.

## 0x100be8e0 — CBaseMonster_FindHintNodeRoundRobin

Ищет видимый допустимый hint node, используя общий циклический cursor.

Thiscall, RET, EAX signed index либо -1. При graphPresent102238b0==0: Alert2 и -1; cursor10225974 не меняет. Иначе signed cursor>=nodeCount102238c8 заменяет cursor на0; отрицательный cursor отдельно не проверяет. При count<=0 сбрасывает cursor0 и возвращает-1. Node pointer102238bc, stride58h, индекс=(cursor+iteration)%count через CDQ/IDIV, арифметика32-bit. Негативный cursor может дать отрицательный remainder; runtime корректность graph не проверена.

Для node+50==0 пропускает узел. Иначе virtual1e0 получает UNSIGNED WORD, zero-extended MOVZX, а не signed short из C. При false пропускает. Node+52 activity0 разрешён; ненулевой sign-extends через CWDE и вызывает1000e950, результат -1 отвергает. Native различает signedness двух соседних WORD. Node pointer сохраняется через callbacks, lifetime/изменение graph ими не защищены.

Trace от current pev.origin+view_ofs к node.origin+current view_ofs через1011a800(start,end,1,self.edict,&trace), то есть engine TraceLine flags1. Только ordered trace.fraction==1.0 (UCOMISS/LAHF/TEST44/JNP) принимает; NaN отвергается. Не проверяет startsolid/allsolid, distance, hull или достижимость маршрута. При успехе global cursor=index+1 и EAX=index; при полном неуспехе cursor0 и EAX-1.

После виртуальных вызовов/trace перечитывает global cursor/count; нулевой hint идёт с текущими cached значениями. Loop bound и следующие indices могут меняться из callbacks: не snapshot list и не сортировка nearest. На обычном неизменном graph ищет максимум count узлов от общего cursor. Конкретный CGenericMonster default1e0 всегда false.

## 0x100bea60 — CBaseMonster_FindLateralCover

Проверяет до пяти пар боковых точек и пытается построить маршрут к укрытию.

Thiscall(sourceOrigin*,sourceViewOffset*), RET8, EAX0/1. Сначала MakeVectors(pev.angles) через tail-wrapper10119320; сохраняет right.x/right.y из globals+40/+44, умноженные float32 на48. Две исходные точки=current origin. На каждой из пяти итераций minusPoint -= (stepX,stepY,+0), plusPoint += тот же step; z действительно выполняет SUBSS/ADDSS с +0. Сначала проверяет minus, затем plus; максимум10 проб в порядке -48,+48,-96,+96,...,-240,+240 по проекции right на XY. Не нормализует XY и не использует right.z.

Для каждой стороны заново строит sourceOrigin+sourceViewOffset и candidate+текущий pev.view_ofs.1011a820(start,end,1,1,self.edict,&trace) даёт TraceLine flags101h. Только ordered fraction==1.0 пропускает эту сторону; unordered NaN, любые другие значения допускают дальнейшие проверки. Это буквальное native !=1, не гарантированное fraction<1 и не полноценное доказательство укрытия.

Далее short-circuit virtual1cc(candidate)!=0, virtual158(&currentOrigin,candidate,NULL,NULL)==2,100c1080(activity4,wait0.0,candidate)!=0. При успехе сразу1. Последний helper пишет goal/movement поля и возвращает RefreshRoute EAX; неудачная проба может оставить изменения маршрута и callbacks. При пяти неудачных парах0; прежнее состояние не откатывается. Сам source не перемещает игрока/монстра и не ждёт завершения движения. Derived validation/localmove и engine trace остаются зависимостями.

## 0x100c1670 — CBaseMonster_RememberOldEnemy

Сохраняет цель и её позицию в первом свободном слоте истории из четырёх.

Thiscall(enemy*,position*), RET8; EAX не оформлен как status. NULL enemy сразу выходит. Сканирует i=0..3: EHANDLE this+194+i*8 сначала разрешает в private object через10017790; если равен enemy, сразу выходит, НЕ обновляя позицию. Иначе10017780 проверяет serial-valid edict; первый невалидный слот получает10017740(enemy), затем ровно12 bytes position в this+1b4+i*12. Нет проверки positionNULL.

Полная занятая история без совпадения оставляет всё как есть: не вытесняет старейшую цель и не сдвигает очередь. После найденного раннего свободного слота поздние дубликаты не проверяются, поэтому возможны duplicate targets при дырках. Setter может записать NULL edict, не нормализовав старый serial, но позиция всё равно копируется. Native save descriptors подтверждают m_hOldEnemy[4] и m_vecOldEnemy[4].

## 0x100c15e0 — CBaseMonster_RestoreOldEnemy

Просматривает историю целей с конца и восстанавливает первую живую цель.

Thiscall, RET, EAX0/1. Идёт i=3..0 по EHANDLE this+194+i*8. Serial-invalid handles пропускает и НЕ очищает. Для valid edict получает private object100177a0 и вызывает virtualbc (alive predicate). False очищает этот handle через10017740(NULL), сохраняя старую position. True копирует два DWORD handle в currentEnemy+184/+188 и12 bytes stored position в enemyLKP+2f4, возвращает1.

Выбранный history slot не очищается: это не удаляющий pop. При отсутствии живой цели0, currentEnemy/LKP оставляет прежними. Valid edict не гарантирует nonNULL private pointer; перед virtualbc local NULL guard нет. Состояние/conditions schedule эта функция сама не меняет, actual derived alive semantics — граница.

## 0x100bed80 — CBaseMonster_SelectOrRestoreEnemy

Выбирает новую цель, сохраняет историю и связывает игрока с преследующим монстром.

Thiscall, RET, EAX0/1. При conditions+180 &40000ah вызывает virtual14c (candidate selector) и сравнивает с current EHANDLE+184 private target. Только иной nonNULL candidate при nonNULL schedule+230 проходит далее. Если schedule.interruptMask+8 &10000h: RememberOldEnemy(currentEnemy,&enemyLKP), conditions|=10000h, присваивает candidate handle и копирует его origin в enemyLKP. Если interrupt bit отсутствует, currentEnemy не заменяет.

При прошедших outer gates независимо от interrupt bit читает candidate.pev.owner+19c. NonNULL owner edict/private→virtual78, результат nonNULL с pev.flags lowBYTE&20h и this.virtual138(result)!=0 добавляется в историю с ТЕКУЩЕЙ enemyLKP. Сюда не передаётся owner origin и проверка relationship допускает любой nonzero, не только положительное значение. Не является отдельным немедленным назначением owner текущим enemy.

Затем если current EHANDLE serial-invalid вызывает RestoreOldEnemy; если она вернула1 и текущий schedule nonNULL с interrupt bit10000h, выставляет condition10000h. Повторно проверяет handle: invalid→0. Valid→private.virtuald0; при nonzero получает currentEnemy и записывает this через EHANDLE setter в enemy+2340. Native ECX этой последней записи — enemy+2340, не this и не текущий enemy handle, что скрыто в C. Возвращает1 независимо от d0, когда current handle valid.

Native descriptors связывают currentEnemy, enemyLKP, conditions и memory; exact meaning player backlink+2340 и producers/derived selector не домысливаются. Проверяется serial edict, а не гарантированная private-pointer валидность; неоднократные callbacks/resolves не делают lifetime snapshot. Старый player backlink при смене цели здесь не очищается.

## 0x100beef0 — CBaseMonster_GetHackedGunPosition

Преобразует локальное смещение оружия монстра в мировую точку.

Thiscall(outVector*), RET4, EAX=out pointer. Вызывает MakeVectors(pev.angles) через10119320, затем для каждой координаты пишет float32 (((forward[i]*hacked.y)+origin[i])+(right[i]*hacked.x))+(up[i]*hacked.z). Hacked vector=this+338/+33c/+340, native m_HackedGunPos descriptor; globals forward+28,right+40,up+34. Сначала пишет x, затем y,z; все MULSS/ADDSS отдельные, не FMA.

Не берёт model attachment/bone, view_ofs или player camera. MakeVectors меняет общий basis. Нет guard outNULL, нормализации или finite checks. Hacked components загружаются один раз после callback, но basis/origin читаются по компонентам между output stores: произвольное alias out с источником может менять последующие результаты, поэтому vector formula предполагает обычный отдельный destination.

## 0x100bf2e0 — Monster_HealthNonzeroCode

Возвращает код2 при health, отличном от нуля, иначе0.

Thiscall, RET, полный EAX. Читает pev.health+164; UCOMISS относительно native0, LAHF/TEST44/CMOVP. Ordered +0/-0 дают0, любой ненулевой finite/Inf и unordered NaN дают2 при продолжающемся исполнении. Не проверяет health>0: отрицательное здоровье тоже2. Нет записи health, проверки deadflag или вызова IsAlive. Более высокое смысловое назначение кода этим телом не доказано.

## 0x100bf7f0 — CBaseMonster_RelationshipWithPlayerOverride

Возвращает отношение к классу цели с особым правилом реакции на игрока.

Thiscall(target*), RET4, полный EAX. Сначала target.virtual50→targetClass. При class2 и this.m_iPlayerReact+354!=0: react1 всегда0; иначе react4 либо memory+2ec lowBYTE&1 дают2, остальные0. Этот путь не вызывает собственный Classify. Native descriptors подтверждают поля, но числам0/2 здесь не приписывается автоматически enum из другого SDK.

Во всех остальных случаях this.virtual50→ownClass, адрес DWORD=10217118+4*(ownClass*19+targetClass), 32-bit arithmetic; чтение без bounds/signedness guards. Evidence сохраняет первые19 строк по19 DWORD; stride19 доказан инструкцией IMUL13h, общий размер native allocation/полный диапазон классов этим телом не установлен. Не сохраняет отношение и не проверяет NULL target; virtual классификация и возможные writers таблицы остаются границами.

## 0x100befc0 — Monster_AwardSurvivalDropAndTime

Создаёт случайный предмет, начисляет награду и отправляет TimerPlus участникам.

Thiscall(unused DWORD,recipient*), RET8. Первый stack argument не читается; identity погибшего берёт из this.pev.edict→edict+80.classname, затем global stringbase. Весь путь разрешён только DWORD10222f14!=0 и10222f20==0. В начале angles=(0,this.pev.angles.y,0), RandomLong(1,6)==1 выбирает weapon_syringe. Иначе новый RandomLong(1,100): <=5 ещё RandomLong(0,1), равный1→ammo_rifle, иначеammo_g43;6..10 revolver;11..20 m16;21..40 shells;41..50 p345;51..70 vp70;>70 glock. Signed comparisons, диапазоны предполагают корректный engine RNG; uniform probabilities не доказаны телом.

Вызывает CreateNamedAtTransform(name,&origin,&angles,NULL). Результат игнорирует: failure drop не отменяет награду. Затем exact case-sensitive classname даёт reward: default20, monster_nerd30, monster_taller50, monster_sawcrazy60, monster_booksimon120. Заново читает entity после Create callback, не использует переданный first argument. NULL edict ведёт к чтениюNULL, не безопасному default.

Безусловно recipient+638 += reward (DWORD wrap), затем recipient.virtuald0. Приfalse заканчивает, уже создав drop и изменив поле. Приtrue ищет ПЕРВУЮ cof_survivalmode, разрешает private object через10090400; если есть и pev+24c DWORD!=0 и object+dd BYTE==1: +ec +=reward, +f4 +=reward. При signed newF4>=59 ставит f4=max(newF4-60,0), increments f8 ОДИН раз. Порог59 реальный; не while и не division, так что120 может оставить ещё>=60 после единственного increment. Называть эти offsets минутами/секундами без readers нельзя.

Далее для indices1..свежий maxClients через10119680 каждый valid private recipient получает MSG_ONE TimerPlus(global102266a8,size3 из отдельного MP registration contract): BYTE reward, BYTE(pointer==recipient), BYTE0. Pointer equality вычисляется перед MessageBegin; оба пути передают edict адресата. Нет health/spectator/distance filter. Счётчики и сообщения не откатываются и не dedup: повторный caller может повторно начислить. Full killer/death lifecycle, field638 readers, survival manager counters и client TimerPlus handling — отдельные зависимости.
