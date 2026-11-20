# Derived death callbacks: RoofBossHead, Book Simon и squad cleanup

Статический разбор оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Восемь новых полных локальных контрактов; бинарник и игра не исполнялись. Приоритет имеют bounded native ASM, сверенные побайтно с PE. Saved Ghidra C сохранён как исходное свидетельство, его потерянные аргументы и прототипы не исправлялись. Адреса, offsets и masks — hex; интервалы и счётчики, помеченные обычными числами, — decimal.

## Связи и доказанные владельцы

| Entry | Native owner / связь | ABI |
|---|---|---|
|10068b50|CRoofBossHead, RTTI/vtable101b7adc, slot+6c|ECX=this, attacker entvars*, policy; RET8|
|1006eec0|CBookSimon, RTTI/vtable101b9480, slot+6c|ECX=this, attacker entvars*, неиспользуемый policy; RET8|
|10070050|Экспорт235 `CBookSimon::RealKilled`, прямой/Think callback из1006eec0|ECX=this; RET|
|10100d50|CSquadMonster, RTTI/vtable101af8e4, slot+6c|ECX=this, attacker entvars*, policy; RET8|
|10101980|Прямой callee10100d50, slot-mask cleanup|ECX=this; RET|
|10101860|Прямой callee10100d50, leader/member cleanup|ECX=context, member pointer; RET4|
|100ab840|Полное тело с tail JMP в generic Killed; concrete owner не установлен|ECX=this, два forwarded stack DWORD; effective RET8|
|101050b0|Полное тело с direct generic Killed; concrete owner не установлен|ECX=this, attacker entvars*, policy; RET8|

Во всех трёх подтверждённых vtables slot+144=100876d0 BecomeDead, slot+8=1000e1f0 parent-aware scheduling. Связь с [общей смертью](../server-monster-death/contract.md) подтверждена вызовами, но она не превращает все derived классы в один lifecycle. Прямые ShouldGib/GibMonster там — stubs; Book Simon обходит generic Killed и выполняет свой код.

Native ENTVARS1021aae0 подтверждает `frags+168`, `iuser1+248`, `effects+118`, `owner+19c`; `frags` нельзя называть health или отдельным scripted flag. MONSTER10216e08 подтверждает conditions+180, target EHANDLE+18c (m_hTargetEnt; m_hEnemy находится в+184), state+224, ideal state+228, memory+2ec. Native CSquadMonster save descriptors10219a18: leader EHANDLE+368, member EHANDLE[4]+370, m_iMySlot+39c. DWORD+390 используется как aggregate slot mask, но в этих пяти descriptors не сериализуется. Не приписываем ему исходное имя из SDK.

`evidence.json` содержит exact LE32 поиск адресов восьми функций только по raw `.rdata/.data`. Для двух неподписанных wrappers совпадений нет. Это не доказательство отсутствия runtime вызовов, relocated pointers или indirect construction; owners и полная достижимость остаются открыты. Никаких SDK-имён классов для этих двух тел не придумано.

### 0x10068b50 — CRoofBossHead_Killed_HideAndEmitBlood

Отправляет эффект и звуковые команды головы босса, отключает Think/модель/solid, затем передаёт смерть общему обработчику.

ECX=this; attacker entvars* и gibPolicy из stack пересылаются в1008a330 в исходном порядке; RET8. До generic Killed собственного memory/death latch нет, поэтому повторный вызов снова выполняет все эффекты даже когда generic затем немедленно вернётся.

Сначала RandomLong(90,110) → pitch для100fc9f0(ownEdict,channel4,"roofboss/rb_headdeath.wav",volume1.0,attenuation0.8,flags0,pitch). Wrapper может менять volume по своему глобальному режиму; фактический звук/backend не наблюдались.

Затем MessageBegin(dest4,type23,origin=&pev.origin,edictNULL); BYTE115(73h), COORD origin.x/y/z, SHORT signExtend(WORD[10231f28]), SHORT signExtend(WORD[10231f20]), BYTE247(F7h), BYTE5, MessageEnd. Порядок двух SHORT именно28 затем20. Это стандартный temp-entity subtype115 (имя TE_BLOODSPRITE — сверенная SDK-аналогия); native writer globals и их runtime model indices здесь не восстановлены. Payload13 байт при COORD=int16, включая subtype BYTE; transport header не учтён. Origin компоненты и pev перечитываются между engine callbacks.

После сообщения this.Think+78=NULL. Два100fc9f0 вызова подряд: channel2, filenames "roofboss/rb_mouthidle1.wav" и "roofboss/rb_mouthidle2.wav", volume0,attenuation0,flags20h,pitch100; это команды с stop flag, не обычное воспроизведение с полной громкостью. Потом SetModel(ownEdict,"models/null.mdl"), pev.solid+10c=0 и generic1008a330(this,attacker,policy).

Здесь нет удаления entity, собственного deadflag или прямого создания CGib. Generic callback может заменить health и другие поля после скрытия. Precaches, writers sprite globals, engine message routing/rendering и дальнейший corpse AI отдельно.

### 0x1006eec0 — CBookSimon_Killed_BeginTransition

Сохраняет player attacker и выбирает немедленную либо отложенную смерть Book Simon с переходом состояния игроков.

ECX=this; stack attacker entvars*, policy; RET8, policy не читается. Если pev.iuser1+248!=0 — немедленный return без остальных действий. При iuser1==0 attacker разыменовывается без NULL guard. attacker.edict+20c==NULL разрешается через PEntityOfEntOffset(0); если edict/private существуют и private.virtual+d0()!=0,100125e0(private.pev) записывается в this+388. Результат cast может быть NULL; при не-player attacker прежний this+388 НЕ очищается. Это raw private pointer, не EHANDLE с serial validation; его producer/initialization вне тела.

Затем ordered frags+168==±0 выбирает отложенную ветку. Любое ненулевое значение, включая NaN, немедленно вызывает10070050(ECX=this) и возвращается. В этом пути iuser1 не выставляется, нет начального затемнения, SimonMode/музыкального stop и effects80. Отдельного предотвращения повторного RealKilled здесь нет.

Отложенная ветка: iuser1=1, DWORD10222f20=0. Если DWORD10222f14!=0 и global rules10222ee4.virtual+20()!=0, MSG_ALL(dest2) SimonMode(global ID102266d8) BYTE0. Имя и size1 подтверждены registry; адрес global не является самим числовым message ID.

Далее signed client indices1..globals.maxClients(+90), верхняя граница перечитывается. Helper10119680 пропускает недопустимый индекс, NULL/free edict, возвращает private pointer; дополнительных IsPlayer/IsAlive фильтров caller не делает. Для каждого nonNULL:10119c00(player,RGB Vector*=(0,0,0),duration2.0,hold0.5,alpha255,flags0), затем MSG_ONE(dest1,recipient player.edict) GreyFade(global1022667c) BYTE1,BYTE0, затем100ea600(ECX=player,1.0).

Support ScreenFade builder10119cc0/101166d0 для этих конечных constants формирует duration8192,hold2048,flags0,RGBA(0,0,0,255); sender10119d40 только при player.virtual+d4()!=0 шлёт global10226720 ScreenFade: SHORT8192,SHORT2048,SHORT0,BYTE0,0,0,255. GreyFade и queued music stop после этого не зависят от прохождения данного sender guard.100ea600 записывает player.music2310=0, BYTE231c=0, float2318=1.0, DWORD2314=1; немедленного PlayMP3 здесь нет.

После цикла this.Think=10070050, this.virtual+8(2.0), затем актуальный pev.effects|=80h. Scheduler вызывается до effects write; отсутствие игроков не отменяет планирование. Нет очистки solid/takedamage/health/Touch или memory death latch на этом этапе. [MP flow](../server-multiplayer-flow/contract.md) и [music protocol](../graphics/music-server-protocol.md) связывают globals и последующую доставку; визуальный/музыкальный результат не тестировался.

### 0x10070050 — CBookSimon_RealKilled_FinalizeAndRemove

Возвращает кооперативную музыку в очередь, меняет глобальное расписание Book Simon, выполняет свою подготовку смерти и отложенное удаление.

Native exported thiscall, ECX=this, без stack args, RET; EAX не является гарантированным status/pointer. Вызывается сразу либо как Think из1006eec0. В начале нет проверки iuser1, memory80, deadflag или предыдущего удаления: повторный вызов повторяет весь локальный порядок.

Для signed indices1..текущего globals.maxClients берёт10119680; при nonNULL заново CVarGetString("sv_coop_music"). Если pointer ненулевой и unsigned strlen>1, QueueMusic100ea5c0 получает ECX=этот player, filename=(rawPointer−globals.stringbase), loop=DWORD10222f18, volume=float10222f1c. Нет AllocString/copy и нет немедленного сообщения. При NULL/короткой строке музыка не меняется; цикл выполняется независимо от10222f14/rules gate.

Если DWORD10222f14!=0 и rules.virtual+20()!=0: BYTE102231a1=0, BYTE10222f24=0, BYTE102231a2=1; RandomLong(120,240), float32 conversion signed EAX, затем float32(now+convertedRandom)→102231a4. MSG_ALL TimerPlus(global102266a8,size3) BYTE0,BYTE0,BYTE2. Это тот же pending/deadline, который читает MP Think100c9ae0; случайный диапазон здесь отличается от initial player-spawn scheduling. RNG распределение не предполагается.

Внутри того же gate при raw this+388!=NULL вызывает100befc0(ECX=this,classnameString,this+388) и только после возврата очищает this+388. Существующий reward/helper имеет собственные проверки; этот caller не гарантирует награду и не валидирует lifetime raw player pointer. При закрытом global/rules gate поле388 не очищается этим кодом.

Далее всегда: memory+2ec|=80h;100fc9f0(ownEdict,1,"common/null.wav",1.0,0.8,0,100); conditions+180|=100h; ideal state+228=8. Owner из pev.owner, при NULL PEntityOfEntOffset(0); если edict/private nonNULL, owner.private.virtual54(victim.pev). Pev перечитывается после callback. Если актуальный flags low byte&20h, Touch+7c=NULL и virtual144(); captured BookSimon slot144=100876d0 заменяет health на max_health*0.5 и max_health на5.0. Затем ordered health<-99 →0; equality -99 и NaN не меняются. В отличие от generic1008a330 здесь после clamp НЕТ100177b0 healthbar update.

Ideal state=8 записывается ещё раз, затем10119900(this). Удаление отложенное: helper вызывает cleanup10102c50, ставит pev.flags40000000h и очищает targetname; не освобождает private pointer синхронно. Own code не вызывает generic Killed, ShouldGib/GibMonster и не выставляет deadflag. Точное поведение owner/cleanup overrides, engine removal и concrete reward остаётся связано с отдельными карточками.

### 0x10100d50 — CSquadMonster_Killed_ReleaseSlotAndDetach

Освобождает занятый слот отряда, условно вызывает очистку связей через leader и передаёт смерть generic Killed.

ECX=this; stack attacker entvars*,policy; RET8. Сначала без guard10101980(ECX=this). Затем10017780(ECX=&this.m_hSquadLeader+368) проверяет edict+serial и возвращает полный EAX0/1. Только при true заново10017790(&leader) получает private pointer; ECX для10101860 выбирается private!=NULL ? private : this, stack member=this. Даже валидный EHANDLE может иметь NULL private, потому fallback имеет значение.

После этой ветки всегда1008a330(ECX=this,originalAttacker,originalPolicy). Собственного повторного death latch нет; slot/list cleanup выполняется до generic memory80 check. Ни EHANDLE validation, ни helper не проверяют IsAlive и не удерживают ownership/lifetime. Поведение очистки не заменять SDK SquadRemove:10101860 в одной ветке сравнивает с ECX context, а не stack member; см. отдельный контракт.

### 0x10101980 — CSquadMonster_ReleaseMySlotMask

При валидном leader handle снимает собственную slot mask с leader либо self и очищает m_iMySlot.

ECX=this; без stack args, RET; EAX не объявляется bool. Если DWORD this+39c==0, немедленный return. Иначе10017780(&this+368): при невалидном/нулевом EHANDLE return, причём ненулевой m_iMySlot сохраняется.

При валидном handle10017790(&this+368) получает private; target=private!=NULL ? private : this. Читает текущую DWORD mask из исходного this+39c, target+390 &= ~mask, затем исходное this+39c=0. Не чистит leader handle/member list/чужие slot fields. Mask — все32 бита без ограничений; отсутствие private вызывает локальное снятие mask, а не пропуск операции.

Native save table даёт имя m_iMySlot+39c, но aggregate+390 не описан её пятью полями. Прямой Killed caller10100d50 и идентичный локальный thunk101011d0 поддерживают назначение cleanup; остальные slot producers и сохранение aggregate требуют отдельного разбора.

### 0x10101860 — CSquadMonster_DetachLinks_AsymmetricContext

Очищает leader/member EHANDLE по двум разным путям; non-leader путь ищет context, а итоговая запись всегда очищает stack member.

ECX=context `C`, stack member pointer `M`, RET4. Нет NULL guard входов. Resolve(H)=10017790: edict должен существовать и совпадать serial, затем возвращается private; невалидный handle не обнуляется resolver. Сначала `L=Resolve(C+368)`, при NULL `L=C`.

Если `M==L`: для ровно четырёх EHANDLE `C+370+8*i` берёт Resolve. При nonNULL `P` очищает `P+368` посредством10017740(0), затем очищает этот member-slot самого C. Если Resolve вернулNULL, slot не меняется, даже если содержит stale edict/serial. Итерируется массив C, не абстрактный массив переменной L; никаких callback для member/slot-mask cleanup нет.

Иначе повторно Resolve(C+368), с fallback C. Если итоговый pointer nonNULL, перебирает четыре его member-slot; сравнение native101018d7 — resolvedMember==C (EBX), НЕ==M. При первом совпадении очищает только найденный slot и выходит из цикла. Если совпадения нет, список не меняется. В caller Killed обычная форма C=leader,M=dying member, поэтому нельзя заявить, что именно dying member обязательно удалён из leader.members. Фактическая достижимость вариантов зависит от заполнения handles; runtime bug/корректность за все состояния не объявляются.

После любой ветки безусловно10017740(ECX=M+368,stack0): обнуляет DWORD edict и DWORD serial у stack member. M==NULL приводит к обращению через368, безопасного fallback нет. Не освобождает сущности, не переносит лидерство, не уплотняет список и не обновляет masks+390/+39c. Эти отрицательные факты ограничены полным данным телом.

### 0x100ab840 — MonsterKilled_ResetMoveAngles_TailGeneric

Меняет movetype, ground flag и две компоненты углов перед tail-передачей в generic Killed; concrete class не установлен.

Полное native тело100ab840..100ab876: ECX=this, записи через pev, затем POP EBP; JMP1008a330. Исходные два stack arguments остаются нетронутыми, effective cleanup — RET8 generic handler. Ghidra `void(void)` потерял этот ABI; нельзя вызывать как zero-argument helper.

Строгий порядок: pev.movetype+108=4; flags+1a8&=~200h; angles.z+58=0; angles.x+50=0; каждый раз pev перечитывается. Yaw, velocity/avelocity, solid, Think/Touch и health локально не меняет. Затем generic Killed может перезаписать movetype через virtual144, потому значение4 не гарантировано конечным состоянием.

Нет локального latch, owner или virtual binding. Exact LE32 поиск по raw .rdata/.data не нашёл адреса wrapper; прямые/косвенные callers, factory и class остаются открыты. Имя здесь только описательное по телу, не восстановленный native class symbol.

### 0x101050b0 — MonsterKilled_NotifyGroup_ClearTargetAndUse

Выбирает уведомление группы по attacker flag, очищает target handle/Use callback и вызывает generic Killed; concrete class не установлен.

ECX=this; stack attacker entvars* `A`, policy; RET8. Group logic выполняется только A!=NULL и this.m_MonsterState+224!=5. State6 здесь не исключается. Если A.flags low byte&8, сначала10103f70(ECX=this), затем A.edict+20c либо PEntityOfEntOffset(0), и10105180(ECX=this,attackerPrivateOrNULL,0). NULL edict/private не блокирует group helper; predicate virtual IsPlayer для attacker здесь отсутствует.

Support10103f70 перечисляет шесть selectors0..5 через10104040(previous,selector,1), вызывает candidate.virtual78, затем без NULL guard результата virtualbc IsAlive, и для alive ставит memory+2ec|=1.10105180 перечисляет selectors0..5 с последним аргументом0, берёт virtual78 при nonNULL, сравнивает Resolve(candidate.m_hTargetEnt+18c) с переданным private. Счётчик совпадений общий по всем шести selectors; при signed count>stack limit вызывает candidate.virtual240(1,1). Здесь limit0, то есть вызов для каждого совпадения, включая обаNULL. Classname mapping virtual250/таблица10219cc8 и конкретные callbacks отдельны; не называем результат «все союзники начинают атаковать».

Если attacker flag8 отсутствует: только DWORD this+3d4==0 открывает ветку. Сразу +3d4=1 (до поиска), затем10104670(ECX=this,0). При nonNULL результате и его virtualbc()!=0 вызывается результат.virtual254(stack this). PUSH ESI1010513e потерян Ghidra: callback получает dying object. Если поиск неудачен/цель нежива, latch всё равно остаётся1. Не сбрасывается в этом entry.

Support10104670 с arg0 ищет ближайшего подходящего по selectors5..0: classname через own.virtual250 и10219cc8, кандидаты !=this, alive, nonNULL virtual78 и state!=5/6; расстояние по origin.x/y и absmax.z+ d8, visibility trace.fraction ordered==1, strict distance<500.0 и strict improvement. Собственный libm fallback, mapping/result lifetime и virtual254 semantics не закрыты этим caller; таблица может индексироваться без bounds. Это не доказанный вид конкретного human NPC.

После group logic ВСЕГДА10017740(ECX=&this.m_hTargetEnt+18c,0), own.virtual1a8() без stack args, this.Use+80=NULL, затем1008a330(this,A,policy). Обнуление target происходит до virtual callback, Use после него. Нет собственного memory/death latch, нет проверки изменения this после callbacks. Owner/vtable и все дальнейшие override effects остаются открыты: exact preferred-base LE32 .rdata/.data scan для101050b0 нулевой, что не заменяет full native call graph.

## Оставшиеся границы

Полная runtime достижимость двух неподписанных wrappers; writers/initialization BookSimon+388, frags/iuser1 и global gates; native callbacks private.virtual54/254/240 и group mapping; другие derived deaths, multi-gib producers и engine removal/trace/message consumers. Восемь primary полностью прочитаны, но support функции и весь gameplay не считаются автоматически восстановленными. Пакет не меняет игру, исходный порт, ресурсы или RTX.

## Продолжение разбора: pass15

[Monster groups](../server-monster-groups/contract.md) закрывает10103f70/10104040/10104670/10105180: шесть classname selectors, notify/target count/nearest trace paths. Точечное исправление101050b0: object+18c — m_hTargetEnt по native MONSTER descriptor, не enemy. Предыдущее утверждение и основание сохранены в correction.json нового пакета; это исправление не увеличивает reviewed count. Derived callbacks и неизвестные concrete owners остаются отдельными вопросами.
