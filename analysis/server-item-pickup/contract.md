# Original PlayerItem pickup, duplicate ammo and respawn

Статический pass13 по исходному server hl.dll. Девять новых первичных функций отделены от поддерживающих C/ASM; игра, DLL и ресурсы не исполнялись и не изменялись. SHA256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Адреса/смещения hexadecimal; обычные числа count/time без префикса — decimal. Декомпиляция не является оригинальным исходником; ABI и неожиданные ветви проверены машинными байтами.

## Карта владения и вызовов

`DefaultTouch1011c7d0 → other.virtual8c(item) → player100daf10` (последний поддерживает linkage, не новая карточка). Для нового предмета player вызывает virtual134=AddToPlayer, затем list insertion; для дубликата вызывает source.virtual138(existingWeapon,player) → `1011b530 → source.virtual184(existingWeapon) → 1011d030 → recipient1011b6a0/1011b7c0 → recipient.owner.virtual94`.

В поддерживающем100daf10 duplicate-success branch вызывает callbacks и source.virtual160, но возвращает0; следовательно DefaultTouch не прикрепляет предмет-дубликат и всё же достигает своих targets. Полное поведение callbacks100daf10, rules и GiveAmmo оставлено внешней границей, без новых REVIEW для этих функций.

`Respawn1011e630 → rules90(out,source) → CreateNamedAtTransform → hidden replacement → rules88(source) → replacement.virtual10(absoluteTime) → AttemptToMaterialize1011bb00`. Исходный предмет и replacement — разные owners; ниже сохранены native записи, даже когда они выглядят неожиданно.

Native table101a7804 записывается factory10018440 и связывает slots138/15c/164/184 с1011b530/1011cf10/1011b920/1011d030. Player factory100125e0 записывает101a4da8, slots8c/94/d0=100daf10/100e04d0/100135b0. SP/MP rules ownership подтверждено отдельным [rules-bootstrap](../server-rules-bootstrap/contract.md); сохранены только нужные prefixes, не заявлен полный extent или все derived overrides.

Native descriptors различают object и entvars: item+110=`script`,+160=`m_pPlayer`,+164=`m_pNext`,+168=`m_iId`; weapon+1dc/+1e0 ammo types,+1e4 clip,+1f4 defaultammo. Entvars+1b4=`max_health`,+1c0=`armorvalue`,+b8=`model`,+248=`iuser1`,+254=`iuser4`. Не следует переносить смысл одинакового числового offset между структурами. Runtime descriptor access: row stride44, primaryName10231890, carry10231894, secondaryName10231898, secondaryMax1023189c, maxClip102318a4; table size/runtime producers здесь не закрыты.

Унаследованные callback/lifetime детали: [item-lifecycle](../server-item-lifecycle/contract.md), [entity-defaults](../server-entity-defaults/contract.md), [spread-callers](../server-spread-callers/contract.md). Engine API binding:100b4aa0 копирует144 DWORD в10222f48; pinned eiface.h даёт DropToFloor slot26 и AlertMessage slot61. Основное доказательство вызова — числовой адрес и stack в native, header используется для имени API.

## Локализованные диагностические bytes

Точные NUL-terminated bytes закреплены в evidence; CP1251 ниже — явно указанная интерпретация кодировки, не изменение игры.101e65dc: «Это оружие лишь дл` донаторов.»;101e6618: «У мен` уже и так много шприцев»;101e663c: «Я обожгусь, если возьму»;101e6654: «Вспышка выгорела дотла»;101c4ad0: «Инвентарь полон». Несоответствие текста про шприцы flare-ветви сохранено как наблюдение. Apostrophe/backtick не исправлены переводом.

## Полные локальные контракты

### 0x1011c7d0 — PlayerItem_DefaultTouchAndPickupGates

Обрабатывает касание предмета: ограничения класса/роли, инвентарный допуск, player callback, присоединение, учёт находок и targets.

Thiscall ECX=item, один stack entity*, RET4, семантического return value нет. NULL other либо other.virtual+d0()==0 прекращает обработку. Затем 100125e0(other.pev) даёт player P; helper возвращает существующий private pointer без RTTI-проверки. Если P==0, код лишь пропускает первые TMP/MP5 gates и продолжает путь, где P может разыменовываться. Нельзя добавлять в описание общий NULL-player guard или alive/health gate: их здесь нет.

Все локальные сравнения classname — побайтовые, case-sensitive, до NUL. При weapon_tmp и P!=0 вызывает 100e4d60(P), при EAX0 выдаёт diagnostic101e65dc через10119810(P,text,5,0) и выходит. Для weapon_mp5 запрещает только при одновременных условиях: 100e4c30(P)==0, P+c4 не2/3/4, rules10222ee4!=NULL, AL100af7e0(rules)==0. Тогда пишет "This is for mappers only." и выходит. Отсутствие rules пропускает именно этот запрет. Role predicates имеют отдельный контракт; это не универсальная проверка unlock-файла.

Для weapon_lantern вызывается P.100e2380("weapon_lantern"); найденный classname немедленно завершает Touch без сообщения/targets. Затем NULL rules допускает продолжение, иначе rules.virtual+7c(P,item) должен вернуть ненулевой EAX. При отказе и weapon_flare посылается exact diagnostic101e6618 (локализованные bytes относятся к шприцам, не исправлены по предполагаемому смыслу). После любого rules-отказа, если DWORD1022647c!=0 либо10226480!=0, вызывает10119900(item), затем выходит; без этих globals просто выходит. 10119900 — отложенная пометка удаления/cleanup, не непосредственный free.

На разрешённом пути сначала заменяет pev.iuser4(+254)==1 на0, до последующих отказов. Для weapon_flare: iuser1(+248)==1 выдаёт diagnostic101e663c, ==2 —101e6654, оба выхода сохраняют уже выполненный сброс iuser4. Классификация здесь использует string_t из edict+80, тогда как несколько других сравнений читают item.pev.classname; NULL edict маскируется в0 и затем разыменовывается, это не безопасный NULL guard.

Инвентарный preflight выполняется лишь при item.script(+110)!=0, pev.model(+b8)!=0 и pev.classname!=0. Classname weapon_dualweapon/weapon_action освобождает от него; уже имеющийся P.100e2380(classname) тоже освобождает. Иначе вызывает100dad40 с ECX=P и stack(script,modelString_t,classnameString_t). При EAX0 пишет diagnostic101c4ad0 с mode2 и выходит. Этот helper может уже изменить инвентарь/послать звук до последующего player callback; rollback на позднем отказе отсутствует.

Вызывает именно исходный other.virtual+8c(item), а не P.virtual+8c. Если EAX!=0, вызывает item.virtual+164(P), результат игнорирует. Native CBasePlayer table101a4da8+8c=100daf10, PlayerWeapon table101a7804+164=1011b920; существующий AttachToPlayer подробно разобран в item-lifecycle. Если AddPlayerItem вернул0, присоединения, find-counter и pickup-sound нет, но финальный UseTargets всё равно вызывается.

После успешного callback, кроме weapon_action/weapon_dualweapon, ищет item.id(+168) среди32 DWORD P+448..+4c4. Если id уже есть, ничего не меняет. Иначе ищет первый0 в тех же32 слотах; записывает id и увеличивает DWORD P+654 с wrap. Полная таблица молча не меняется. Для id0 уже имеющийся пустой слот считается совпадением, специальной проверки id нет. Это bounded producer счётчика находок, не полный смысл всех playerstats.

На успешном пути при10226480==0, classname!=weapon_dualweapon, pev.max_health(+1b4) не ordered1.0 и P!=0 вызывает100fc9f0(P.edict,3,"weapons/weapon_get.wav",1.0,0.8,0,100). UCOMISS/LAHF/TEST44/JNP исключает только ordered equality, NaN проходит как неравенство. weapon_action исключён из учёта находок, но не из этого звука. Последний общий шаг разрешённого пути:10102930 с ECX=item и stack(other,3,0.0), даже при AddPlayerItem EAX0. Ранние role/lantern/rules/flare/inventory выходы targets не вызывают. Callback reentrancy и срок жизни после них здесь не защищены отдельными guards.

### 0x1011b530 — PlayerWeapon_AddDuplicateViaExtractAmmo

Подготавливает вид/звук предмета-дубликата и передаёт извлечение патронов virtual184, сохраняя его результат.

Thiscall ECX=source item. Native RET8 доказывает два stack DWORD, хотя C объявляет один. Читает только первый, передаёт его item.virtual+184; второй не читается. Support100daf10 при совпавшем classname вызывает source.virtual+138(existingWeapon,player), PUSH player затем existingWeapon, и проверяет полный EAX. Table101a7804+138 связывает этот entry; virtual184 по той же таблице=1011d030. Возвращённый EAX callback сохраняется до RET8; утверждать void по C неверно.

Если exact classname weapon_flare и source.pev.iuser1==1, при source.m_pPlayer(+160)!=NULL вызывает100fc9f0(ownerPlayer.edict,1,"weapons/flare/flare_burn.wav",0,0,0x20,100), затем source.pev.renderfx=0,rendermode=5,renderamt=0,body=0. При NULL m_pPlayer только звук пропускается, render writes выполняются. Во всех остальных случаях source.pev.effects присваивает0x80, не OR; flare-ветвь effects не присваивает. Здесь нет AttachToPlayer owner/aiment или очистки Use/Touch.

Перед virtual184 исполняет MOVSS armorvalue и UCOMISS с exact666.0, LAHF, но затем без условного перехода вызывает callback. Сравнение не выбирает дополнительную ветвь в этом теле. Visual/sound изменения происходят до извлечения и не откатываются при EAX0. Результат зависит от динамического override184; только базовый PlayerWeapon target разобран ниже.

### 0x1011cf10 — PlayerItem_DisablePickupAndScheduleDelayedRemove

Отключает Use/Touch предмета и планирует SUB_Remove через задержку0.1.

Thiscall ECX=item, без stack arguments, plain RET. Native PlayerWeapon vtable+15c указывает сюда. Сначала item.Use(+80)=0; если parent+14 ненулевой, вызывает parent.virtual+40 и берёт EAX&2, иначе2; результат записывает item.m_iCurrCaps(+108). Затем Touch(+7c)=0, Think(+78)=101028e0 SUB_Remove и item.virtual+8(float32 0.1).

Удаление не синхронное: здесь нет engine RemoveEntity, free, unlink player list или сброса item.m_pPlayer. При базовом PlayerWeapon slot+8=1011f680, который планирует относительно globals.time; derived override остаётся отдельной границей. В отличие от sibling1011dfd0, здесь нет flare sound/render cleanup, armorvalue reset и исключения delay0 для flare. EAX остаётся результатом/остатком scheduler callback и не является нормализованным success.

### 0x1011d030 — PlayerWeapon_ExtractDefaultAmmoIntoRecipient

Переносит default ammo исходного предмета в переданное оружие; secondary результат заменяет primary результат.

Thiscall ECX=source weapon S, stack recipient weapon R, RET4, полный EAX. При R.m_iClip(+1e4)==-666 и descriptor(S.id).maxClip по102318a4+id*44 !=-1 немедленно возвращает1: не выдаёт ammo и не очищает S.defaultAmmo. NULL R/табличные bounds/переполнение id*44 не проверены. Descriptor id всегда берётся у S, не у R.

Обычный путь начинает result=0. Если primary name pointer10231890+id*44 ненулевой, сохраняет name/maxClip, вызывает101202f0 с ECX=S, затем1011b6a0 с ECX=R и stack(S.defaultAmmo+1f4,primaryName,maxClip,computedCarry). Сохраняет полный EAX, после вызова безусловно обнуляет S.defaultAmmo, даже если helper вернул0 или только применил sentinel666. Source id перечитывается после primary callback.

Если secondary name10231898+id*44 ненулевой, вызывает1011b7c0 с ECX=R и stack(0,secondaryName,secondaryMax1023189c+id*44). Полный EAX этого вызова заменяет primary result, это не OR и не накопление. Поэтому secondary failure может вернуть0 после primary mutation/success. Если primary отсутствовал, S.defaultAmmo остаётся прежним; при отсутствии обоих names возвращает0. Source list links/owner и удаление в этом entry не меняются.

### 0x1011e630 — PlayerItem_RespawnHiddenReplacement

Создаёт скрытый replacement через rules position, назначает AttemptToMaterialize и абсолютное время, с раздельными изменениями source/new.

Thiscall ECX=source S, plain RET, EAX=new item либо0. Без NULL rules guard вызывает rules.virtual+90 с двумя stack arguments: hidden Vector output scratch[12] и S; EAX используется как pointer результата. Вызов Create10017950 получает ровно четыре cdecl arguments(classname,S-derived returnedPosition,&S.pev.angles,S.pev.owner). Angles pointer и owner предварительно лежат на stack и не являются лишними аргументами rules callback. Сохранённые SP100fc680/MP100ca550 targets копируют S.pev.origin в output, возвращают output в EAX, RET8.

10017950 создаёт named entity, присваивает owner/origin/angles и вызывает DispatchSpawn до возврата. Здесь не переносится произвольное состояние S, не клонируются ammo/defaultammo/script/body/список. При EAX0 вызывает AlertMessage(1,"Respawn failed to create %s!\n",source classname) и возвращает0. Native alert имеет три arguments; псевдокод ошибочно приписывает остаточные angles/owner.

При успехе N.pev.effects |=0x80; N.Use(+80)=0. Затем вычисляет parent caps ИЗ S.parent(+14) и записывает результат ИМЕННО S.caps(+108), не N.caps. При NULL parent2, иначе parent.virtual40()&2. Далее N.Touch(+7c)=0,N.Think(+78)=1011bb00 AttemptToMaterialize. Эта асимметрия source/replacement подтверждена EBX/EDI в native и не исправляется по SDK.

Далее engine slot26/global10222fb0 DropToFloor получает S.pev.edict, не N.edict, return игнорируется. rules.virtual+88(S) возвращает ST0, значение округляется в float32 и передаётся N.virtual+10. Native PlayerWeapon prefix связывает +10=1000d3b0→+0c=100171b0 с additional argument0: абсолютное scheduling, не повторное добавление текущего time. SP target100fc2b0 возвращает-1.0 и RET4; MP100c8850 возвращает globals.time+0 при ordered cvarStorage1021466c>0 и отсутствии descriptorFlags&8, иначе globals.time+20.0. Эти узкие support bodies подтверждают форму возврата; общий rules respawn policy не объявлен полностью разобранным.

Возвращает N после всех callbacks, не удаляет S и не проверяет результат floor/scheduler. При старте callbacks N уже создан и DispatchSpawn завершён; rollback при поздних ошибках отсутствует. AttemptToMaterialize уже имеет отдельный REVIEW и спрашивает rules+8c, затем materializes либо перепланирует; его ранее доказанный контракт не пересчитывается как новая карточка.

### 0x1011b6a0 — PlayerWeapon_AddPrimaryAmmoWithClipAndSentinel

Обрабатывает special armorvalue666, заполнение clip и передачу остатка owner.virtual94; возвращает нормализованный bool в полном EAX.

Thiscall ECX=recipient weapon W, четыре stack arguments(count,name,maxClip,maxCarry), RET10h. Если W.pev.armorvalue(+1c0) ordered равно666.0, вызывает100e2410 с ECX=W.m_pPlayer и stack W. При EAX0 обнуляет armorvalue и возвращает полный EAX1 без clip/ammo/callback/sound. При найденном classname продолжает обычный путь, armorvalue не очищает. UCOMISS/LAHF/TEST44/JP исключает из sentinel ветви NaN. m_pPlayer не проверяется на NULL.

Если signed maxClip<1, W.m_iClip=-1; остаток count передаётся неизменённым. Иначе только при W.clip==0 устанавливает clip=signed min(count,maxClip), затем remaining=count-clip с native32bit wrap. Отрицательный count не clamp: может стать отрицательным clip. При прежнем clip!=0 дополнительного заполнения нет, remaining=count. Эти mutations происходят до вызова owner и остаются при его отказе.

Вызывает W.m_pPlayer.virtual+94(remaining,name,maxCarry,0), принимает signed полный EAX index. Только index>0 записывает W.primaryAmmoType(+1dc)=index. Затем заново проверяет owner.100e2410(W); при found!=0 и W.pev.max_health(+1b4) не ordered1.0 вызывает100fc9f0(W.edict,3,"weapons/item_get.wav",1.0,0.8,0,100). Звук идёт от weapon edict, не owner edict. NaN max_health проходит этот неравный gate. Глобальный10226480 здесь не проверяется.

Возвращает ровно0/1 полного EAX: XOR EAX,EAX перед SETG AL, не неопределённые верхние байты bool. Значение index<=0 не очищает старый ammoType. Успех отражает возврат virtual94, а не факт clip mutation или точное число принятых патронов. Native player table+94=100e04d0; его полный сетевой/инвентарный body вне текущих9 и не подменяется контрактом SDK.

### 0x1011b7c0 — PlayerWeapon_AddSecondaryAmmo

Передаёт secondary ammo owner callback, сохраняет положительный index и условно воспроизводит item_get.

Thiscall ECX=recipient weapon W, stack(count,name,maxCarry), RET0ch. Без NULL guard вызывает W.m_pPlayer.virtual+94(count,name,maxCarry,0). При signed EAX>0 сохраняет W.secondaryAmmoType(+1e0); index<=0 оставляет старое поле. Возвращает полный EAX0/1 через XOR EAX,EAX; SETG AL.

При index>0 и W.pev.max_health(+1b4) не ordered1.0 вызывает100fc9f0(W.edict,3,"weapons/item_get.wav",1.0,0.8,0,100). NaN проходит как неравенство. Здесь нет sentinel666, clip fill, проверки owner inventory100e2410 или глобального sound gate10226480. Именно поэтому вызов с count0 в ExtractDefaultAmmo не сокращается в описании до no-op: он всё равно вызывает динамический owner callback, результат которого перезаписывает primary result.

### 0x101202f0 — PlayerWeapon_QueryPrimaryCarryLimit

Возвращает primary carry limit из runtime descriptor либо режимный override для syringe/трёх магазинов.

Thiscall ECX=weapon, без stack arguments, plain RET, полный EAX int32. Если rules10222ee4==NULL либо rules.virtual+20()==0, возвращает DWORD10231894+id*44. При ненулевом query и exact case-sensitive classname weapon_syringe возвращает1, не читая descriptor carry/maxClip. Classname взят через pev.edict+80; NULL edict не является безопасным случаем.

Для остальных классов при этом режиме сначала читает signed descriptorCarry. Если carry<=0, возвращает его неизменным. Только carry>0 приводит к EAX=3*descriptorMaxClip(102318a4+id*44), LEA с32-bit wrap. Нет clamp на maxClip/-1, поэтому положительный carry и maxClip=-1 дают-3. Нет проверки id и размера descriptor table. Это runtime storage в BSS, исходные PE bytes не объявлены текущими значениями.

1011d030 вычисляет лимит на source и передаёт его recipient helper, тогда как recipient может иметь другой id/owner. Полное значение зависит от rules virtual query и runtime producers descriptor; полный roster/max-ammo dataset этим entry не устанавливается.

### 0x100e2380 — Player_HasWeaponClassnameInSixChains

Ищет точный classname в шести связанных списках player items и возвращает полный EAX0/1.

Thiscall ECX=player, stack char*classname, RET4. Обходит ровно6 DWORD heads player+2514,+2518,+251c,+2520,+2524,+2528 в порядке0..5. Для каждого nonNULL item сравнивает input с stringsBase+item.pev.classname побайтово, case-sensitive, до NUL. Первый match возвращает EAX1, исчерпание всех цепочек —EAX0.

Next читается из item+164; heads не меняются, ownership не передаётся. Нет NULL input/pev guard, ограничения длины строки, защиты от циклической/повреждённой chain или bound количества nodes. Native список шести heads отличается от32-slot found-id массива DefaultTouch и от6/3 GUI descriptor slots100dad40.

DefaultTouch использует lookup для запрета второго lantern и для обхода inventory preflight уже имеющегося класса. Support100e2410 похож по classname, но выбирает только один head индексом weapon.virtual180() и не проверяет этот индекс; его нельзя считать вызовом данного шестисписочного helper.


## Границы и следующая очередь

Все9 первичных тела прочитаны полностью. Поддерживающие bodies/таблицы подтверждают owner, ABI, callback targets и определённые локальные условия, а не добавляют скрытые новые REVIEW. Player100daf10/100e04d0, inventory100dad40, single-chain100e2410 и конкретные SP/MP CanHave/respawn callbacks продолжены полными локальными контрактами pass14 ниже. Произвольные derived184 overrides и другие runtime policies остаются внешними. Эти продолжения не пересчитывают девять entry этого пакета. Descriptor runtime initialization, globals1022647c/80 lifecycle, player found-id persistence и callback reentrancy остаются отдельными вопросами. Ни отсутствие NULL guard, ни странная исходная запись caps/DropToFloor не являются предложением менять оригинал.

## Воспроизводимость

`python analysis/server-item-pickup/capture.py` читает hash-pinned PE и запускает только статический objdump для bounded ranges. `verify.py` независимо отображает PE sections, сверяет каждую машинную строку, raw/constants/descriptors/vtables и контрактные ABI assertions. Гигантский ignored disassembly cache не нужен. Support document pins не являются runtime evidence. Проверки не подтверждают поведение игры при исполнении, visual parity или совместимость реконструкции.

## Продолжение разбора: pass14

Три player callbacks100daf10/100e04d0/100e2410 теперь имеют самостоятельные REVIEW;100dad40 расширен из прежней частичной карточки: [player inventory](../server-player-inventory/contract.md). Различены новая вставка и успешный дубликат с EAX0, reserve index и фактическая прибавка, GUI dedup и chain lookup. Правила pickup/ammo и SP/MP respawn queries, extract clip1011d0e0, ItemInfo carry lookup1011e250, registry lookup100dfe60/100db130 продолжены в [item rules](../server-item-rules/contract.md). Derived callbacks, descriptor roster, runtime registry initialization/reset и сетевые consumers остаются открыты.
