# Player inventory release, deferred selection and weapon-box packing

Pass23, только статический разбор оригинального server hl.dll. SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Шесть новых REVIEW относятся к полным сохранённым телам; поддерживающие функции и ограниченный фрагмент PreThink отдельно не считаются. DLL не запускалась, игровые ресурсы и код порта не менялись. Все адреса и смещения ниже шестнадцатеричные; значения float и естественные количества явно указаны. Ghidra C используется как навигация: ABI, NaN-ветви, перечитывания после callbacks и порядок записей установлены по native ASM.

## Ownership and native names

P — player, W — item/weapon, B — weapon box, V — entvars объекта. PLAYER native descriptors10217fe8: P+2514 — m_rgpPlayerItems[6], P+252c — m_pActiveItem, P+2534 — m_pLastItem, P+2538 — m_pNextItem; это class-pointer поля type3. P+1ef9 — m_bWeaponWaitingToDeploy, P+1ee4 — m_fPhoneCallTime, P+1ee8 — m_bInPhoneCall. MONSTER table10216e08 называет P+308 m_flNextAttack. ITEM1021b188: W+160=m_pPlayer, +164=m_pNext, +114=slotnumber. WEAPON1021b328: W+178=m_bIronSights; +1cc/+1d0/+1d4 — primary/secondary/tertiary attack deadlines.

WEAPON_BOX1021b4f0 содержит ровно пять descriptors: m_rgAmmo(+178,32 integers), m_rgiszAmmo(+f8,32 string_t), m_rgpPlayerItems(+e0,6 class pointers), m_cAmmoTypes(+1f8,integer), weaponmodel(+dc,string_t/type1). Последнее поле не объявлено MODELNAME/type16 и не тождественно pev.weaponmodel. Связь B с CWeaponBox подтверждается factory1011b470 (allocation1fc, vptr101e614c) и native RTTI; Player factory100125e0 пишет101a4da8, чей slot90 непосредственно равен100f1350. Generic weapon factory10018440 пишет101a7804. Ни наличие vtable, ни совпадение формы SDK не доказывает, что именно generic callback используется у каждого игрового оружия.

Поддерживающие контракты: [inventory chains](../server-player-inventory/contract.md), [RemoveAllItems/reset](../server-inventory-removal/contract.md), [item lifecycle](../server-item-lifecycle/contract.md), [item pickup/removal](../server-item-pickup/contract.md). В новом пакете закрыты player unlink и box transfer; старые зависимые карточки не импортируются повторно.

## Full local contracts
### 0x100f1350 Player_UnlinkItemAndClearActiveOrLast

Отсоединяет item от выбранной оружейной цепочки; отдельно очищает active либо last, не отменяя pending selection.

ABI: thiscall ECX=P, единственный stack argument W, RET4; полный EAX1 при удалении из цепочки, EAX0 если узел не найден. Player vtable101a4da8+90 содержит этот вход. Локально нет NULL-проверки W, проверки item owner, slot bounds, lifetime/serial либо циклов списка. Результат0 не означает отсутствие предшествовавших side effects.

Сначала сравнивает P+252c с W. При равенстве: P.100f1440 reset autoaim/crosshair, W.virtual14c() без stack arguments, W.10017ad0(), затем W+78=0; после callbacks без повторной проверки равенства обнуляет P+252c и player pev.viewmodel+bc/weaponmodel+c0. W фиксирован в ESI, тогда как player pev перечитывается перед каждой модельной записью. CancelThink всегда очищает W+58, но W.pev.nextthink+104 и W+5c только при W+14==0 и W+1c==0; поэтому нельзя обещать безусловную очистку engine deadline.

Только в ELSE-ветви, когда W не был active, сравнивает P+2534 с W и при равенстве пишет last=0. Если один указатель одновременно active и last, active-ветвь не очищает last. P+2538 и BYTE P+1ef9 эта функция не читает/не пишет. Также не очищает W+160 или W+164, GUI slots, ammo, player weapon bitmask, owner edict или сам entity.

После предварительных действий вызывает W.virtual180(), использует полный EAX как индекс P+2514+4*slot без bounds. Если голова равна W, вызывает virtual180 ВТОРОЙ раз и записывает W+164 в голову уже по новому результату; первый slot не кэшируется для записи. При не-head ищет предшественника по next+164 и заменяет predecessor.next на W.next. Пустой/исчерпанный список возвращает0, найденный head/predecessor возвращает1. Внешний virtual180 может менять состояние, стабильность его двух результатов не гарантируется.

Прямой consumer PackWeapon1011e390 вызывает owner.virtual90(W) и прекращает transfer при EAX0. Уже разобранный DestroyItem1011ccf0 вызывает тот же owner slot при ненулевом W+160, но игнорирует его результат и затем tail-dispatches W.virtual160(). Это разные политики ошибки; успешный unlink сам по себе не освобождает объект.

### 0x100f1a50 Player_RequestItemByClassname

Ищет предмет по classname и ставит отложенное переключение после phone/movement/time guards.

ABI: thiscall ECX=P, stack const char* name, RET4; EAX не нормализуется как статус. Сначала запрещает BYTE P+1ee8!=0 и helper100e4ed0(P)!=0 (native helper возвращает полный EAX bool для pev.movetype+108==5), затем NULL name. Один now=float globals[0] сохраняется в XMM1. Отказывает только при ordered deadline>now для P+1ee4, затем при ненулевом active для W+1cc/+1d0/+1d4, затем P+308. ASM COMISS+JA означает, что NaN любого сравниваемого операнда не даёт этот отказ; псевдокод <= недостаточно точен.

Signed pev.waterlevel+1c4>=3 разрешает только точное case-sensitive имя weapon_action@101a9ae4. Затем UCOMISS/LAHF/TEST AH,44/JNP запрещает только ordered pev.fuser3+260==10.0; NaN не равен10 и проходит. Нет отдельной проверки здоровья, флага FL_FROZEN, capability или CanDeploy/CanHolster.

Последовательно перебирает шесть голов P+2514..2528 и next W+164; native сравнивает полный NUL-terminated classname из W.pev+0 с name, без case folding. Для каждой непустой цепочки кэшируется string pool globals+98; после исчерпания перечитывает globals перед следующей. Первый match выигрывает. Не найденный name, пустые цепочки и match==текущий active завершаются без новой постановки. Указатели/длины строк и циклы не валидируются.

Для отличающегося match сохраняет найденный W в ESI, вызывает reset100f1440(P), затем перечитывает active. Если active ненулевой и BYTE active+178!=0, вызывает active.virtual130() и заново читает P+252c; после этого повторной NULL-проверки нет. Вызывает полученный active.virtual14c(). Если active изначально NULL, обе virtual calls пропускаются. После callbacks пишет BYTE P+1ef9=1 и P+2538=найденный W. Ни немедленного active swap, ни Deploy, ни изменения last здесь нет; найденный W не проверяется заново после callbacks.

Поддержка generic vtable101a7804: +130=1001e5c0 (пустой RET), +14c=1011d410. Последний сбрасывает W+1f0 и модели owner-player, вызывает RandomLong(-5,5) для pitch100+result, затем RandomLong(0,2) и sound sleeve_generic1/2/3; никаких записей pending2538 он не делает. Это подтверждённый generic вариант, а не полный контракт derived Holster/ironsights всех оружий.

### 0x100f1c20 Player_RequestLastItemWithOptionalAttackBypass

Запрашивает предыдущий item, проверяя deploy/holster и меняя pending/last после callbacks.

ABI: ECX=P, один stack slot, читается только младший BYTE bypassAttack; RET4, возвращаемый EAX не является обещанным bool. Если last=P+2534 NULL, сразу выходит. При bypassAttack==0 читает active=P+252c БЕЗ NULL-проверки, фиксирует now и отклоняет ordered deadline>now для active+1cc/+1d0/+1d4 и P+308. Ненулевой BYTE пропускает только эти четыре сравнения, но не subsequent phone-time guard.

Затем сравнивает P+1ee4 с текущим globals.time, отказывает через COMISS+JA лишь при ordered >; все эти time gates пропускают unordered NaN. Calls last.virtual140() на указателе, загруженном в начале, требует полный EAX!=0. Перечитывает active; если ненулевой, требует active.virtual148()!=0. Нет собственного phone-call BYTE1ee8, waterlevel, fuser3, classname, slot membership или owner guard; ограничения могут добавляться конкретными virtual implementations.

После разрешений вызывает reset100f1440(P), перечитывает active, при ненулевом вызывает virtual14c и ещё раз перечитывает P+252c. Затем читает ТЕКУЩИЙ last=P+2534, пишет waiting BYTE1ef9=1, pending2538=currentLast, last2534=currentActive. Таким образом это не атомарный swap первоначальных указателей: callback может изменить оба. При отсутствии active после reset ECX=0 и именно0 записывается в last. Active252c напрямую не меняется, Deploy здесь не вызывается; равенство active и last не запрещено.

Для native generic weapon slots +140=1011c020: возвращает0 только если W+160 ненулевой и owner.movetype==5, иначе1; +148=10018d30 возвращает полныйEAX1. Это локальные base defaults и не доказательство поведения всех derived weapons. В частности bypassAttack не отменяет виртуальную проверку deploy.

### 0x100f1d00 Player_RotateSlotAndSetDeployWaiting

Вращает head выбранной цепочки, если он активен, и ставит waiting-флаг, не записывая next item.

ABI: ECX=P, stack signed/raw DWORD slotIndex, RET4; EAX не нормализуется. Фиксирует один now, отклоняет только ordered P+1ee4>now, затем загружает head=P+2514+4*slotIndex. Bounds для slotIndex нет. NULL head завершает. Ненулевой head ведёт к чтению active=P+252c БЕЗ NULL-проверки; ordered active deadlines1cc/1d0/1d4>now либо P+308>now также завершают. Все COMISS+JA time gates допускают unordered NaN.

Если head==active, берёт next=head+164. NULL next завершает без reset/holster/waiting. Иначе проходит next-цепочку до tail, пишет tail.next=исходный active, затем обнуляет next у перечитанного P+252c и записывает новый head в выбранный slot. Во время этого обхода внешних callbacks нет; cycle guard отсутствует. Если head!=active, список вообще не меняется.

После успешной ротации либо head!=active вызывает reset100f1440(P), перечитывает active и, если ненулевой, вызывает virtual14c(). Затем только BYTE P+1ef9=1. Полное native тело НЕ пишет P+2538: нельзя автоматически дописывать туда head или называть это завершённым выбором следующего оружия. Произвольный derived callback может менять pending, но generic Holster1011d410 этого не делает. Pending consumer позже использует уже имеющееся P+2538, не голову выбранного slot.

Нет локального CanDeploy/CanHolster, phone-call BYTE guard, fuser3/waterlevel guard, выбора другого непустого slot или revalidation после Holster. Lexical reference scan сохранён как navigation: кроме собственного declaration, token FUN_100f1d00 в доступных partial-pass C не найден. Это не доказывает отсутствие runtime вызова через иные формы/неполный корпус.

### 0x1011d350 WeaponBox_HasClassnameInItemSlot

Проверяет classname-дубликат в одной цепочке weapon box, выбранной virtual slot предмета.

ABI: ECX=B, stack W, RET4, полный EAX0/1. Немедленно вызывает W.virtual180() и индексирует B+e0+4*result. NULL W, диапазон slot, динамический тип и lifetime объектов не проверяются. Пустая голова возвращает0.

При непустой цепочке один раз кэширует globals.stringPool+98 и входящий classname pointer из W.pev+0. Для каждого node получает его classname из node.pev+0 и сравнивает case-sensitive NUL-terminated bytes. Совпадение даёт1, иначе идёт по node+164; NULL tail даёт0. Проверяется имя, а не равенство object pointers, id оружия, боезапас или owner. Циклический список/невалидные строки не ограничены.

Нет собственных записей, но virtual180 является внешним вызовом и может иметь side effects. Прямой native caller1011e390 проверяет результат перед любой собственной box mutation; повторный virtual180 для фактической вставки выполняется позже, поэтому первая проверка не гарантирует неизменность slot между query и insertion.

### 0x1011e390 WeaponBox_PackWeaponAfterOwnerUnlink

Переносит предмет в цепочку weapon box после проверки дубликата и разрешённого удаления из player inventory.

ABI: ECX=B, stack W и string_t model, RET8; полный EAX0/1. Сначала B.1011d350(W): ненулевой результат сразу0. Затем читает owner=W+160; если ненулевой, вызывает owner.virtual90(W), и полный EAX0 возвращает0. Для factory-bound player slot90=100f1350; unlink может очистить active/model/last даже если позже возвращает0. Собственные box/item мутации PackWeapon начинаются только после этих guards; внешние side effects не откатываются.

После разрешения пишет B+dc=model (native descriptor weaponmodel, type1 string_t). Вызывает W.virtual180() заново, индексирует B+e0+4*EAX без bounds. Если oldHead!=NULL, сначала W.next+164=oldHead, затем B.head=W. Если oldHead==NULL, сначала B.head=W, затем W.next=0. Проверка дубликата и slot не повторяются после owner callback; callback может изменить ownership/списки и result virtual180.

Далее последовательно: W.pev.spawnflags+1a4 OR40000000h; W.pev.movetype+108=0; solid+10c=0; effects+118=80h (assignment, не OR); modelindex+b4=0; model+b8=0. Наконец W.pev.owner+19c=B.pev+20c (edict). Перед каждой pev mutation native перечитывает W+4; world model path из B+dc здесь не передаётся SetModel и не precache-ится.

После engine-owner записи устанавливает полный EAX1 и обнуляет W+78(m_pfnThink), W+7c(m_pfnTouch), W+160(m_pPlayer), W+114(slotnumber). W.next сохраняется как box-chain link. Не вызывает CancelThink для этого общего пути, не обнуляет W+58/5c/pev.nextthink, use/blocked callbacks, ammo/clip, velocity или player weapons bitmask. Ветка active unlink могла отдельно отменить think; unowned/nonactive paths такого обещания не дают.

Успех означает локальную вставку и эти field writes, не физическое выбрасывание/создание ящика, доставку pickup или подтверждение валидности внешних указателей. Функция не выделяет B/W, не задаёт box origin/velocity, не пакует ammo и не удаляет entity. В доступном saved-C lexical scan найдено только собственное объявление FUN_1011e390; exact LE32 raw .rdata/.data scan тоже не нашёл указатель на этот entry. Оба поиска ограничены и не доказывают dead code либо недостижимость в полном бинарнике.

## Deferred consumer and non-atomic cancellation

Отдельно byte-verified диапазон100edfb4..100ee068 внутри уже reviewed PreThink100ead70 подтверждает consumer. При BYTE P+1ef9!=0 и **ordered now>P+308** (COMISS+JBE отклоняет equality и NaN) читает pending=P+2538, копирует прежний active в last2534, затем active252c=pending. Ненулевой pending с classname, отличным от weapon_action, получает virtual144(), затем после перечитывания active — virtual150(). Classname берётся через edict+80; NULL edict не превращён в безопасную пустую строку. После normal возврата callbacks или skip обнуляет BYTE1ef9; pending2538 не очищается. Никакого автоматического fallback на slot head, owner check, CanDeploy или сохранённый last в этом фрагменте нет.

Это объясняет различие локальных функций без выдуманного исправления оригинала: select-by-name/last explicitly назначают pending; slot rotation не назначает; unlink не отменяет pending; pack меняет ownership. Нельзя из этих статических фактов утверждать, что stale pending обязательно возникает в игре: внешний вызывающий код и derived callbacks могут задавать дополнительные инварианты. Проверка не запускала runtime и не меняла реализацию.

## Evidence and remaining boundaries

`capture.py` перепроверяет SHA оригинала, сохраняет полный native range каждой primary и отдельные support ranges, raw RTTI/vtable/descriptors/constants, byte-verifies objdump rows и фиксирует pending blocks. `verify.py` использует отдельный PE mapper, сверяет строки машинных байтов/границы, native tables и API slot binding, контрольные ветви/RET/calls, все hashes и соответствие шести notes контракту. Baseline — публичный full-reverse-pass22-verification.json; ignored local snapshot не нужен для replay.

Полностью закрыты локальные ветви этих шести C/native entries. Открыты полный call graph и актуальные callers у PackWeapon/slot rotation, произвольные derived virtual130/140/144/148/14c/150/180, runtime lifetime/string-pool invariants, глобальная политика удаления pending и полноценный world-drop/PackDeadPlayerItems producer. Bounds/rollback/NULL guards не добавлены по аналогии с SDK. Ограниченный PreThink фрагмент не объявлен новым полным разбором всей функции.
