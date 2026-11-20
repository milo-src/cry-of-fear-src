# PlayerItem: owner, attachment, materialization и persistence

Статический разбор 12 ранее pending функций оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. DLL не запускалась, игровые ресурсы и код не менялись. `capture.py` заново снимает ограниченные objdump ranges и raw PE; `verify.py` независимо отображает PE sections и сверяет каждую машинную строку, C/doc hashes, descriptors, vtable и ABI assertions. Игровая работоспособность и parity этим не устанавливаются.

## Владельцы данных и связи

Везде `item` — C++ объект; `pev=*(item+4)` — отдельный entvars. Поэтому `item+108` означает сохранённый `m_iCurrCaps`, а `pev+108` — `movetype`. `item+160=m_pPlayer` отличается от `pev+160=renderfx`; `item+164=m_pNext` отличается от `pev+164=health`. Эти имена подтверждаются двумя независимыми native save tables, а не размещением стандартного SDK класса. Поле `item+14` — parent/m_pMoveWith из [parent tree](../server-parent-tree/contract.md); его virtual40 здесь только даёт маску caps.

Factory10018440 присваивает vtable101a7804 объекту CBasePlayerWeapon, но при уже существующем private pointer возвращает его без проверки RTTI. Захваченный prefix не объявляется полной таблицей класса. Слоты: +8→1011f680, +134→1011b860, +160→1011dfd0, +164→1011b920, +18c→10018cb0. Save/Restore слоты +38/+3c ведут к производным1011ede0/1011e7a0, разобранным в [spread-callers](../server-spread-callers/contract.md), а те зовут рассматриваемый PlayerItem parent. Нельзя переносить эти bindings на каждый возможный override.

Связный путь: AssignPlayer1011b840 → AddToPlayer1011b860 (weapons bit и ammo indices) отдельно от Attach1011b920 (aiment/owner, скрытие/flare и callbacks). FallInit1011d150 → FallThink1011d220 → Materialize1011e1c0; повторная materialization может проходить через Attempt1011bb00. DestroyItem1011ccf0 → owner.virtual90 → item.virtual160, в зафиксированной таблице это1011dfd0 → назначенный SUB_Remove101028e0. Эти стрелки не утверждают, что вся последовательность выполняется при каждом pickup.

## Локальные контракты

### 0x1011b840 — PlayerItem_AssignPlayerPointer

Присваивает item.m_pPlayer и возвращает 1 без проверки указателя.

Native thiscall: ECX=item, один DWORD player на стеке, RET4; MOV EAX,1 задаёт полный 32-битный результат. Единственная запись — item+160=player, включая NULL.

Имя поля m_pPlayer и type3 подтверждены native descriptor1021b188. Функция не связывает m_pNext+164, не меняет engine pev.owner и не приобретает/освобождает объект; дальнейший caller1011b860 сам разыменовывает player.

### 0x1011b860 — PlayerWeapon_AddToPlayerAndResolveAmmo

Назначает владельца, ставит бит оружия у игрока, при нулевом ammo type разрешает оба имени боеприпасов и вызывает следующий виртуальный этап.

Native thiscall ECX=weapon, stack player, RET4. Прямой 1011b840 пишет weapon+160 и возвращает 1; затем player.pev.weapons+16c обновляется BTS по weapon.m_iId+168. Register BTS использует младшие пять бит индекса, но индекс строки ammo table ниже не маскируется.

Только если weapon+1dc==0, вычисляет 32-битное id*44 и читает указатели имён из 10231890+id*44 и 10231898+id*44; 100dfe60 даёт индексы в +1dc/+1e0. При -1 или любом ином ненулевом +1dc повторного разрешения нет. Здесь нет проверки диапазона id, player, pev или результата lookup.

Сохранённый результат первого helper проверяется лишь после мутаций; при ненуле вызван weapon virtual+18c с тем же ECX, возвращается его полный EAX; нулевая ветка возвращает EAX0. В захваченном helper1011b840 обычный возврат всегда1, это не общий отказный механизм.

Factory10018440 устанавливает vtable101a7804: +134=эта функция, +18c=10018cb0. Последний сохраняет ECX=item и PUSH ECX передаёт тот же item как единственный stack argument virtual+184; затем возвращает1 независимо от его результата. Derived overrides и полное добавление в инвентарный список здесь не доказаны.

### 0x1011b920 — PlayerItem_AttachToPlayerAndDisablePickup

Переводит предмет в engine-состояние следования за игроком, отключает pickup callbacks и отдельно обрабатывает топор и горящую ракету.

Native thiscall ECX=item, stack player, RET4. Classname берётся через item.pev.pContainingEntity+20c → edict+80 → string pool. Два inline byte comparisons case-sensitive и сравнивают полные NUL-строки weapon_axe и weapon_flare. Маскирование edict==NULL даёт адрес0, который затем читается: безопасного NULL возврата нет.

Для weapon_axe, когда player+42c не содержит0x80000, вызывает 100dd000 с ECX=player и stack(0x80000,0,0). Только AL==0 добавляет бит0x80000 к player+42c. Это читатель unlock settings, не запись настроек и не безусловное открытие топора.

Если classname==weapon_flare и item.pev.iuser1+248==1, посылает 100fc9f0(edict,1,"weapons/flare/flare_burn.wav",0.0,0.0,0x20,100), затем renderfx+160=0, rendermode+14c=5, renderamt+150=0, body+114=0. На этой ветке effects не присваивается. Во всех остальных случаях effects+118 целиком заменяется0x80.

Обе ветки пишут pev.armorvalue+1c0=0, movetype+108=12, solid+10c=0, aiment+198=player edict и owner+19c=player edict. Затем item virtual+8 получает float32 0.1, Touch+7c и Use+80 обнуляются. Think+78 не очищается и не назначается этой функцией.

В конце item.m_iCurrCaps+108=(parent+14 ? parent.virtual40()&2 : 2). Item.m_pPlayer+160 и m_pNext+164 здесь не присваиваются; engine owner, follow entity и прямой player pointer — разные поля. Полный EAX не оформлен как результат bool.

### 0x1011bb00 — PlayerItem_AttemptToMaterialize

Запрашивает rules-задержку: ровно нулевая величина материализует предмет, любая иная назначает следующий Think.

Native thiscall ECX=item без stack args, plain RET. Через глобальный rules pointer10222ee4 вызывается virtual+8c с одним stack item; ST0 округляется в float32 до сравнения с literal101a1370=+0.0.

UCOMISS/LAHF/TEST AH,44/JP означает: +0.0 и -0.0 идут в прямой Materialize1011e1c0; nonzero, отрицательные значения, бесконечность и unordered NaN идут в item.virtual+8 с исходным округлённым float32. Это не clamp и не проверка delay>0.

Функция сама не меняет Think callback и не гарантирует валидность rules/item. При factory-bound virtual+8=1011f680 второй путь пишет global time+delay в оба nextthink поля; policy конкретного rules override остаётся вне этой карточки.

### 0x1011ccf0 — PlayerItem_DestroyViaOwnerAndVirtualKill

Передаёт предмет обработчику владельца, затем tail-dispatch в item virtual+160 независимо от результата владельца.

Native thiscall ECX=item, без stack args. Если item+160 ненулевой, owner загружается в ECX и вызывается owner.virtual+90(item). Возвращаемый EAX не проверяется. Затем перечитывается item.vptr, восстанавливается ECX=item и выполняется JMP [vptr+160].

Wrapper сам не обнуляет m_pPlayer, не отсоединяет m_pNext и не освобождает память. Захваченная factory vtable101a7804 связывает +160 с1011dfd0: отключить pickup и назначить SUB_Remove. Derived override может отличаться; валидность item после owner callback не проверяется.

### 0x1011d150 — PlayerItem_FallInit

Инициализирует падающий предмет с нулевыми bounds, Use/условным Touch, FallThink и задержкой0.1.

Native thiscall ECX=item, no stack args, plain RET. Сначала pev.movetype+108=6 и solid+10c=2; затем 10119fe0(item,&pev.origin+8) повторно устанавливает origin. Ghidra потерял эти два stack arguments, в ASM оба присутствуют.

Создаёт два самостоятельных локальных Vector(0,0,0) и вызывает 1011a030(pev,&mins,&maxs). Bridge передаёт edict и оба указателя engine global10222f5c (слот5, SDK pfnSetSize); это нулевые bounds, а не произвольная pickup коробка.

Use+80=10017ac0 (DefaultUse → DefaultTouch с activator), item.m_iCurrCaps+108=(parent?parent.virtual40()&2:2)|8. Touch+7c=1011c7d0 только если pev.iuser4+254==1; при иных значениях старый Touch сохраняется.

После этого Think+78=1011d220 (FallThink), затем virtual+8(float32 0.1). Эффекты, player owner и linked-list поля не сбрасываются. Callback body DefaultTouch и выбор режима iuser4 — внешние границы, не новый контракт pickup.

### 0x1011d220 — PlayerItem_FallThink

Повторно назначает Think через0.1 и при флаге земли обнуляет pitch/roll перед Materialize.

Native thiscall ECX=item без stack args. Сначала безусловно item.virtual+8(float32 0.1), затем читается pev.flags+1a8 и проверяется маска0x200. Это DWORD bit-test, несмотря на ошибочный float тип flags в native ENTVARS descriptor.

Если бит не установлен — обычный RET. Если установлен — pev.angles.x+50=+0.0 и angles.z+58=+0.0, yaw+54 сохранён; после восстановления регистра выполняется tail JMP1011e1c0. Это обычный возврат через Materialize, не noreturn-call, как могло показаться по Ghidra terminal-flow annotation.

Materialize затем обнуляет Think+78, но уже назначенные время item+58/pev.nextthink+104 этот wrapper не отменяет; выполнение дальнейшего engine scheduler здесь не наблюдалось.

### 0x1011dfd0 — PlayerItem_DisablePickupAndScheduleRemove

Отключает Use/Touch и назначает SUB_Remove, с нулевой задержкой и гашением эффектов для любого weapon_flare.

Native thiscall ECX=item, no stack args, plain RET. Сначала Use+80=0; item.m_iCurrCaps+108=(parent?parent.virtual40()&2:2); Touch+7c=0 и pev.armorvalue+1c0=0. m_pPlayer/m_pNext, engine owner, aiment, solid и effects здесь не очищаются.

Полное case-sensitive сравнение classname с weapon_flare такое же, как в attachment helper. При совпадении всегда вызывает 100fc9f0(edict,1,"weapons/flare/flare_burn.wav",0.0,0.0,0x20,100), затем renderfx=0, rendermode=5, renderamt=0, body=0. В отличие от1011b920, проверки iuser1==1 здесь нет.

Обе ветки пишут Think+78=101028e0 (CBaseEntity::SUB_Remove). Для flare virtual+8 получает float0; для остальных float32 0.1. Flare-ветка очищает только24 из28 байт аргументов EmitSound wrapper и переиспользует оставшийся stack DWORD под delay0: это не лишний аргумент callback.

Это отложенное удаление, не немедленный free. Support101028e0 вызывает UpdateOnRemove10102c50, при health>0 обнуляет health и печатает diagnostic, затем engine RemoveEntity(edict). Внутренние действия UpdateOnRemove и фактический момент engine dispatch остаются отдельными контрактами.

### 0x1011e1c0 — PlayerItem_MaterializePickup

Возвращает предмет в доступное для использования состояние, условно снимает скрытие и выключает Think callback.

Native thiscall ECX=item без stack args, plain RET. Проверяется знак младшего байта effects+118, то есть бит0x80; только при установленном бите он снимается (ANDffffff7f), затем добавляется бит2. При effects без0x80 бит2 не добавляется; остальные биты сохраняются.

Безусловно pev.solid+10c=1 и 10119fe0(item,&pev.origin+8). Затем Use+80=10017ac0; item.m_iCurrCaps+108=(parent?parent.virtual40()&2:2)|8. Это item caps, не одноимённое смещение movetype внутри pev.

Think+78=0 всегда. Только pev.iuser4+254==1 назначает Touch+7c=1011c7d0; иначе старый Touch остаётся. Функция не обнуляет nextthink, не меняет movetype, не воспроизводит звук и не создаёт новый предмет.

### 0x1011e760 — PlayerItem_RestoreFields

После успешного родительского Restore читает26 native descriptors блока CBasePlayerItem без собственного исправления владельца или duplicate поля.

Native thiscall ECX=item, stack restoreContext, RET4 и полный EAX. Сначала 1000ea60(item,context), parent CBaseAnimating Restore; EAX0 сразу возвращается. Иначе ECX=context и 10117010("CBasePlayerItem",item,1021b188,26). Ghidra void не описывает фактический возврат.

В таблице m_pPlayer+160 и m_pNext+164 имеют type3, count1, flags0: decoder восстанавливает private-object pointer через сохранённый entity index, а не копирует старый адрес. Type1 worldmodel/script заново превращаются в string IDs; time type15 прибавляет savedata.time+550. Все26 descriptors count1/flags0, отдельного post-restore attach/link/callback fixup нет.

Native records15 и16 (нумерация с0) имеют одно имя m_iSprintIdleAnim1 и один offset+158, но type10 и type15. ReadFields начинает поиск с0 и после каждого match ставит cursor=index+1; ReadField10116c50 ищет циклически. В обычном потоке собственного writer первая одноимённая запись идёт в descriptor15, вторая в16 и перезаписывает тот же DWORD с float time rebasing. Для изменённого/частичного потока попадание зависит от cursor; правило «всегда первый» неверно.

Type12/count1 в этом ABI имеет размер4, в том числе поля +104,+105,+106,+107: области перекрываются между собой и с ранними байтами caps+108. Перед чтением совпавшего блока generic reader очищает descriptor ranges; нельзя сокращать эти операции до одного байта по префиксу m_b. Native Save/Restore сохраняются как есть, корректность точного roundtrip overlapping/float данных не заявлена.

Parent failure оставляет уже сделанные parent mutations; собственный block-token mismatch возвращает0 до очистки item fields. При совпавшем token generic reader возвращает1 даже при неизвестном поле/внутренних ignored errors. Поэтому EAX1 не доказывает целостность восстановленного инвентаря.

### 0x1011ed80 — PlayerItem_SaveFields

После родительского Save передаёт26 descriptors CBasePlayerItem в общий serializer, включая native duplicate offset и перекрывающиеся BOOL.

Native thiscall ECX=item, stack saveContext, RET4 и полный EAX. Сначала 1000eaa0 (CBaseAnimating Save), при EAX0 возврат. Далее owner diagnostic label=stringPool+(pev.globalname+1d0, если ненулевой, иначе pev.classname+0); block label всегда "CBasePlayerItem". Writer1011adc0 получает ECX=context и пять stack аргументов label,block,item,1021b188,26.

m_pPlayer+160/m_pNext+164 type3 проходят entity mapping. Поля type15: +12c,+154,+158,+134; writer1011b3c0 интерпретирует четыре байта как float и при ненулевом savedata вычитает time+550. Type10 raw DWORD, type12 тоже raw DWORD4; type1 сохраняет текст строки. Эти операции не задают самостоятельное владение объектами.

Два последовательных descriptor m_iSprintIdleAnim1 на+158 (type10 и15) не дедуплицируются. Общий writer тестирует исходные четыре байта каждого на all-zero; при ненулевых байтах оба поля попадают в поток с одним именем, первое raw DWORD, второе float-relative time. Writer не меняет исходный DWORD. Ноль может быть пропущен; -0.0 имеет ненулевые биты и не является all-zero.

После writer нет восстановления callback, фиксации ссылок или дополнительной валидации. Generic writer на обычном возврате выдаёт EAX1, в том числе после диагностических/overflow путей, которые не прервали выполнение; не приравнивать это к гарантированной успешной записи файла.

### 0x1011f680 — PlayerItem_SetThinkDelay

Складывает global time с задержкой и одним округлённым float32 записывает оба времени Think.

Native thiscall ECX=item, один float32 delay на стеке, RET4. Helper1011ab20 загружает *globalvars10223188 в x87 ST0; FADD использует delay, затем ровно один FSTP DWORD округляет сумму в float32. MOVSS копирует одинаковые биты в item+58 и pev.nextthink+104.

Нет parent/children guard, clamp, проверок отрицательного/NaN/Inf delay, подстановки frame time или вызова самого Think. В отличие от общих parent-aware setters это непосредственная синхронизация двух полей; связь virtual+8 доказана factory vtable101a7804. EAX содержит промежуточный pev, но API не оформляет возвращаемый bool/float.

## Полный native descriptor блока CBasePlayerItem

Таблица1021b188, stride16, count26; у всех count1 и flags0. Type IDs не исправлялись на предполагаемый C++ тип. Дублирование строки и перекрытия ниже — данные PE. Общее кодирование и ошибки описаны в [serializer](../server-serializer/contract.md), родительский слой в [animation state](../server-animation-state/contract.md).

| # (с0) | Native name | Offset item | Type |
|---|---|---|---|
| 0 | m_pPlayer | 0x160 | 3 |
| 1 | m_pNext | 0x164 | 3 |
| 2 | m_iId | 0x168 | 10 |
| 3 | m_iCurrCaps | 0x108 | 10 |
| 4 | strwmodel | 0x10c | 1 |
| 5 | script | 0x110 | 1 |
| 6 | m_iSprintState | 0x128 | 10 |
| 7 | m_iNextSprintAnim | 0x12c | 15 |
| 8 | m_bCanSuicide | 0x13c | 12 |
| 9 | m_iSuicideState | 0x140 | 10 |
| 10 | m_iSuicideButtonsNeeded | 0x144 | 10 |
| 11 | m_iSuicideButtonsPressed | 0x148 | 10 |
| 12 | m_iRageNeeded | 0x14c | 10 |
| 13 | m_iRageLevel | 0x150 | 10 |
| 14 | m_fNextRageDecrease | 0x154 | 15 |
| 15 | m_iSprintIdleAnim1 | 0x158 | 10 |
| 16 | m_iSprintIdleAnim1 | 0x158 | 15 |
| 17 | m_fReloadSpeed | 0x138 | 0 |
| 18 | m_bRifleReload | 0x104 | 12 |
| 19 | m_bWantToEndReload | 0x105 | 12 |
| 20 | m_bRaised | 0x106 | 12 |
| 21 | m_iReloadState | 0x130 | 10 |
| 22 | m_iNextReloadAnim | 0x134 | 15 |
| 23 | slotnumber | 0x114 | 10 |
| 24 | m_Accuracy | 0x118 | 0 |
| 25 | m_bCanDualWield | 0x107 | 12 |

## Границы и следующие адреса

Локальные ветви всех12 entry разобраны, но полное владение инвентарём этим пакетом не закрыто. Pickup/duplicate/removal/extract/Respawn продолжены самостоятельными REVIEW в server-item-pickup (ссылка ниже). Открыты producer ammo ItemInfo table10231890, конкретный owner.virtual90 и полные rules policies. Свежий pending статус этих зависимостей следует проверять в общем каталоге перед следующим пакетом.

`10017ac0` DefaultUse только передаёт activator в DefaultTouch; caller/useType/value не передаются. Отложенное удаление не доказывает корректность player linked list после owner callback; Destroy не проверяет его результат и не защищается от удаления this внутри callback. Аналогично сохранённый m_pPlayer не превращается автоматически в engine owner/aiment после Restore. В данном entry нет такой операции; поведение внешнего восстановления может дополнять его.

Attachment для flare и обычного предмета намеренно различается, эффекты не нормализованы «для удобства». Точные sound arguments подтверждены wrapper [sentence lifecycle](../server-sentence-lifecycle/contract.md); бит0x20 передаётся как флаг остановки, runtime звучание не проверялось. Axe reader с AL-семантикой разобран в [unlock settings](../server-unlock-settings/contract.md). Конкретные derived weapons, клиентский HUD и отображение моделей находятся вне этого пакета.

Duplicate+158, type12 DWORD-overlap, нулевые bounds, повторный Think time до очистки callback и NaN delay сохранены в описании как наблюдаемое поведение. Они не объявляются исправленными ошибками или гарантированно достижимыми проблемами. Тест rotating-match в verify.py проверяет только воспроизведение decoder index rule для упорядоченного списка, не запускает serializer и не доказывает savegame roundtrip.

## Продолжение разбора: pass13

DefaultTouch1011c7d0, duplicate1011b530, removal1011cf10, extract1011d030 и Respawn1011e630 теперь имеют самостоятельные локальные REVIEW: [item pickup](../server-item-pickup/contract.md). Там же primary/secondary ammo1011b6a0/1011b7c0, carry limit101202f0 и six-chain lookup100e2380. Эти адреса исключены из pending очереди. Полные player100daf10/100e04d0, inventory100dad40, lookup100e2410, runtime ItemInfo producer и derived callbacks требуют отдельного продолжения; сначала сверять текущие REVIEW.

## Продолжение разбора: pass14

Полные player100daf10/100e04d0/100dad40/100e2410: [player inventory](../server-player-inventory/contract.md). SP/MP ammo/pickup и respawn queries, различие absolute time и delay в цепочке Attempt, registry1..31 против ItemInfo0..31: [item rules](../server-item-rules/contract.md). Предыдущая очередь pass13 для этих адресов закрыта; новые вопросы — derived overrides, таблицы/registry producers и UI/network consumers.
