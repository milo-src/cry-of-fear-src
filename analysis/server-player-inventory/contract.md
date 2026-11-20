# Player inventory: chains, GUI descriptors and ammunition

Static original server analysis, pass14. Original `hl.dll` SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. No target execution, game resources, runtime testing or port changes. `notes.json` contains **three new pending entries** (100daf10,100e04d0,100e2410); `notes-updated.json` completes the existing partial 100dad40 review without counting it again. Saved C is a guide; native stack arguments, RET cleanup, branch flags and EAX determine ABI. Offsets/addresses are hexadecimal; natural-language counts are decimal.

## Data ownership and surrounding flow

| Owner | Storage | Selection / lifetime |
|---|---|---|
| Player GUI inventory | `P+2200` onward, string_t slots 1..3 or 1..6 | `100dad40`; names may deduplicate only after finding a free slot |
| Player weapon inventory | six heads `P+2514..2528`, item next `+164` | `100daf10`, index chosen by item virtual180; `100e2410` searches one chain |
| Player active / pending weapon | `P+252c` / `P+2538`, byte `+1ef9` | callback-driven deferred change; insertion itself does not attach entity |
| Player reserve ammo | DWORD `P+2540+4*index` | `100e04d0`; normal name resolver returns 1..31 or -1 |
| Shared descriptors | stride44, ammo name `10231890+44*id`, maxclip `102318a4+44*id` | read by WpnInfo; producer1011fb60 remains previous REVIEW, not re-counted |

The item-pickup contract establishes DefaultTouch → descriptor insertion → virtual Player.AddPlayerItem and AttachToPlayer conditions. Read [item-pickup](../server-item-pickup/contract.md) and [item-lifecycle](../server-item-lifecycle/contract.md) for the source item methods. These operations are not one transaction: a GUI success can represent a duplicate/no-write, and AddPlayerItem returns zero after successful duplicate handling. The underlying item data and inherited serializer types remain as captured; no overlapping fields or duplicate save offsets were “repaired”.

## Exact local contracts

### 0x100daf10 Player_AddPlayerItemIntoChains

Добавляет предмет в выбранную оружейную цепочку либо обрабатывает дубликат; возврат 1 означает новую вставку, а не любой успешный pickup.

ABI: ECX=P (player), один аргумент S (предмет), RET 4; полный EAX 0/1. Player vtable 101a4da8+8c содержит этот вход. S.virtual180() выбирает индекс головы P+2514+4*index; индекс локально не ограничен. Цепочка идёт через item+164, classname сравнивается побайтно с учётом регистра через pev+0 и string pool globals+98. Pool base и incoming classname сохраняются один раз перед обходом цепи. Нет NULL-проверки S или защиты от циклов.

Если найден existing E с тем же classname, native PUSH player; PUSH existing; ECX=source вызывает S.virtual138(E,P). Ненулевой результат вызывает rules.virtual80(P,S), S.1011c040(), E.virtual150(), затем active=P+252c.virtual150(), если active ненулевой, и S.virtual160(). После всех этих действий возвращается 0: дубликат не включается в список повторно. Нулевой virtual138 идёт в общий отказ.

Если дубликата нет, S.virtual134(P) должен вернуть ненулевой результат. Затем rules.virtual80(P,S), S.1011c040(); S.virtual180() вызывается заново для чтения головы, эта голова записывается в S+164. Ещё один, отдельный S.virtual180() выбирает индекс для записи P.head=S. Два запроса индекса не заменены одним кэшированным значением; при изменяющемся callback возможны разные индексы.

После вставки только этот поздний rules lookup проверяется на NULL. Если rules.virtual18(P,S)!=0, вызывается P.100f5e50(S), его возврат игнорируется. Helper сначала проверяет S.virtual140(), вызывает P.100f1440(), active.virtual14c() без stack arguments, затем записывает P+2538=S и BYTE P+1ef9=1. Это отложенный запрос смены, а не непосредственная запись active+252c. Успешная вставка возвращает 1 независимо от отказа helper переключения.

Общий отказ вызывает S.virtual160() только при DWORD 1022647c!=0 либо 10226480!=0, затем возвращает 0. Rules перед virtual80 и внутри 1011c040 разыменовывается без NULL guard. 1011c040 вызывает rules.virtual84(S), и только при точном результате 1 делает tail dispatch S.virtualf0(). Звуки/AttachToPlayer/GUI-слоты эта функция напрямую не выполняет; источники и владельцы меняются вызванными методами. Повторных проверок жизни объектов после callbacks нет.

Нативные slots weapon table 101a7804: +134=1011b860, +138=1011b530, +160=1011dfd0. Их полные контракты находятся в item-lifecycle/item-pickup; derived overrides здесь не объявляются эквивалентными. Rules tables SP/MP и конкретные указатели сохранены в evidence. Поведение всех возможных derived virtual150/180, reentrancy и runtime lifetime остаётся внешней границей.

### 0x100e2410 Player_HasWeaponClassnameInSelectedChain

Проверяет classname предмета только в цепочке, выбранной его virtual180; совпадение объекта по адресу не требуется.

ABI: ECX=P, stack item W, RET 4, полный EAX 0/1. W.virtual180() выбирает P+2514+4*index. Далее W.pev.classname и classname каждого узла разрешаются через globals+98 и сравниваются полными NUL-terminated байтовыми строками с учётом регистра.

Pool base и искомый classname кэшируются перед обходом, не перечитываются для каждого узла. Первое совпадение возвращает 1; пустая голова или исчерпание item+164 возвращает 0. Разные указатели предметов с одним classname считаются совпадающими. Функция не перебирает остальные пять голов, в отличие от 100e2380, и не меняет списки, владельца, активное оружие или боезапас.

Локально нет проверок NULL W/pev/string pool, диапазона virtual180, валидности classname или ограничения числа узлов. Циклический next может не завершиться. Это статический контракт при доступных указателях; наличие штатных вызывающих guards и безопасность всех derived slot methods не предполагаются.

### 0x100e04d0 Player_GiveAmmoAndSynchronizeHUD

Ограничивает прибавление боезапаса, обновляет AmmoPickup/AmmoX/WpnInfo и возвращает индекс типа даже при нулевой фактической прибавке.

ABI исправляется по native: ECX=P, аргументы (int requestedCount, char *name, int maxCarry, BYTE suppressPickupText), RET 10h, полный EAX index либо -1, а не void из C. NULL name возвращает -1. При rules!=NULL вызывается rules.virtuala8(P,name,maxCarry); нулевой результат запрещает выдачу. Правила SP/MP имеют здесь одну цель 100af520. При rules==NULL проверка пропускается.

При отказе rules текст выводится только если (pev.button+184 | P+22b4 | P+22b0)&20h!=0. Сравнение name с адресами 101bbe38 (syringe) и 101dbab4 (flare) является сравнением указателей, не строк. Выбираются готовые локализованные строки либо format 101dbadc с name; затем 10119810(P,buffer,2,0). В любом варианте отказа возвращается -1.

100dfe60(name) ищет первый зарегистрированный тип 1..31, сравнивая имена через отдельно разобранный case-insensitive CRT helper 1017bcbb; неизвестный тип даёт -1. Caller делает unsigned index>31 guard. Формально index0 проходит caller guard, но прочитанный helper его не производит. Вычитание remaining=maxCarry-P.ammo[index] выполняется в 32 битах; accepted выбирается signed min(requestedCount,remaining) через CMOVL. Нет насыщения при переполнении.

Если signed accepted<1, переход 100e05f8 идёт прямо к 100e05c0, минуя OR EAX,-1 в 100e05bd. EAX всё ещё содержит ammoindex; успешный security-cookie helper 1013dbb3 EAX не меняет. Поэтому запрос 0/отрицательный либо полный магазин резервов может вернуть валидный индекс без каких-либо мутаций или сообщений. Только NULL/отказ rules/неизвестный индекс дают -1. Предыдущие item helpers, проверяющие result>0, могут считать этот случай успешным.

При accepted>=1 и нулевом младшем байте suppressPickupText выбирается текст по РАВЕНСТВУ УКАЗАТЕЛЕЙ: 101b91e0 (байты русского имени дробовика), 101b256c (m16), 101bbe38 (syringe), 101af17c (flares), 101b72d8 (русское имя револьвера), 101b77fc (rifle); иначе общий format. Для syringe/flares копируются фиксированные строки, для остальных подставляются accepted и иногда name. Ветка отказа использует flare в единственном числе, успешная — flares. Точные CP1251 bytes и format strings сохранены, кодировка отмечена как средство чтения.

Только pointer name==101a8cb0 (flashlight) подавляет фактический 10119810(P,buffer,2,0), причём форматирование к этому моменту уже выполнено. Ненулевой suppressPickupText пропускает весь текст, но не начисление или HUD. Равные по содержимому строки по разным адресам получают разные специальные тексты. Стековый buffer имеет 128 байт до cookie; wrapper1001f160 передаёт formatter limit FFFFFFFF, не 128. Это отсутствие локальной границы, а не доказательство достижимого переполнения или полный аудит CRT.

Accepted прибавляется к P+2540+4*originalIndex до сетевых вызовов. Если ID10226508!=0, отправляется MSG_ONE AmmoPickup: BYTE 100dfe60(name), BYTE accepted, STRING name. Индекс вычисляется повторно после MessageBegin и заново не валидируется; accepted не ограничивается до 255 перед WriteByte. Затем без проверки ID отправляется AmmoX (ID102264e8): BYTE originalIndex, SHORT текущий P.ammo[originalIndex]. Полные серверные int сохраняются в памяти; wire width не расширяет эти значения.

После AmmoX вызывается P.100f5eb0(), обновляющий legacy-поля +8c,+90,+a8,+94,+98,+9c,+a0,+a4,+ac,+b0,+b4,+b8,+bc,+c0 через 100dfe60 и 100db130. Последний возвращает -1 для индекса -1, иначе читает P.ammo[index] без дополнительной границы. Отсутствующие зарегистрированные имена поэтому дают -1 в зеркалах, не автоматически 0.

Затем перебираются ровно шесть голов P+2514..2528 и все next+164. Для каждого item.id+168 используется 44-байтовая descriptor table: primaryAmmoName по 10231890+44*id. Ненулевое имя сравнивается с name здесь уже case-sensitive побайтно. Совпадение и ненулевой cached ID102265b8 дают WpnInfo: BYTE item.id, BYTE [102318a4+44*id] (descriptor maxclip), SHORT P.ammo[10018440(item.pev).primaryAmmoType+1dc]. Последнее значение не обязано использовать originalIndex. После отправки WpnInfo message ID перечитывается; при пропуске сохраняется кэш.

Нет локальных bounds для item.id, результата private-object resolver10018440 или weapon primaryAmmoType, и нет cycle guard списков. AmmoPickup callback/reentry не сопровождается rollback или пересчётом исходной прибавки. Финальный обычный возврат заново загружает originalIndex, проверяет cookie и RET10h. Регистрация100e5fc0 доказывает AmmoPickup variable/-1, AmmoX3 и WpnInfo4; клиентская обработка, фактическая доставка и все derived rules последствия вне этого пакета.

### 0x100dad40 Player_AddInventoryDescriptor

Ищет свободный GUI-слот, отдельно исключает дубликат оружейного имени и отправляет Inventory/звук/Syringe; успех не всегда означает новую запись.

Полный разбор расширяет прежний REVIEW, сохраняя его три evidence paths; это не новая функция в счётчике. Native ABI: ECX=P, три stack arguments (nameString_t, unusedSecondArg, classnameString_t), RET0c, полный EAX0/1. Второй аргумент не читается ни в одном из двух машинных диапазонов. nameString_t==0 вызывает AlertMessage(1,"ERROR: Missing name\n") и возвращает 0.

BYTE P+1e9c выбирает слоты 1..3 при ненулевом значении, иначе 1..6; физический первый слот P+2200. Через 100e4ee0(slotValue)==(slotValue==0) ищется первый пустой. Если нет свободного слота, возвращается 0 ещё ДО проверки дубликата имени. Существующее оружие при полном GUI-инвентаре поэтому не превращает отказ в успех.

Classname из string pool проверяется на первые семь байтов "weapon_" через native1016f680. ASM-only support подтверждает ограниченное count сравнение unsigned bytes без case folding, остановку на NUL и EAX0/-1/+1; функции без saved C не добавлена фиктивная карточка. При несовпадении префикса name записывается в P+21fc+4*slot и вызывается 100e4360(slot,name,0).

При совпадении weapon_ вызывается 100e2240(pool+name,0): case-sensitive поиск такого отображаемого имени среди тех же 3/6 слотов, без удаления. Если совпадения нет, запись и Inventory выполняются; если оно есть, запись/Inventory пропускаются. Обе ветви продолжают общие постэффекты и возвращают 1. Это дедупликация по name, не classname и не указателю entity; обычные неоружейные строки не дедуплицируются.

100e4360 имеет native RET0c, третий аргумент игнорируется. Его Inventory packet MSG_ONE: BYTE slot, BYTE0, STRING pool+name, BYTE сохранённый перед отправкой bool(P+1e9c), BYTE bool(P+1ef8), BYTE bool(AL результата P.100e24a0()). Затем End и сброс P+1ef8, если он ненулевой. Последний helper в этом пакете остаётся явной внешней query, не догаданным именем состояния.

Если DWORD10226480==0, даже после дедупликации вызывается 100fc9f0(P.edict,3,"weapons/item_get.wav",1.0,0.8,0,100). Далее при rules!=NULL и rules.virtual20()!=0 проверяется точный classname "weapon_syringe". Совпадение отправляет MessageBegin(2,ID102266dc,NULL,NULL), BYTE IndexOfEdict(P.edict), BYTE1, End. Регистрация Syringe имеет size2; ID здесь не проверяется. В остальных случаях этот broadcast пропускается, но EAX1 сохраняется.

GUI string_t-слоты не являются weapon chains или ammo counters. Функция сама не создаёт сущность, не прикрепляет оружие, не меняет player active item и не обеспечивает атомарность с внешним DefaultTouch/AddPlayerItem. Нет проверки границ переданных string_t, второго ресурса или lifetime player после callbacks. Звук является вызовом wrapper, а не проверенной слышимостью; семантика всех derived rules.virtual20 и query100e24a0 остаётся внешней.

## Message registrations and interpretation boundaries

Registration is recovered from full native100e5fc0 and literal pointers, not assumed from an SDK packet. Message IDs are dynamic globals; sizes below are registration arguments.

| Name | ID global | Registered size | Local sender |
|---|---|---:|---|
| AmmoPickup | 10226508 | -1 | index BYTE, accepted BYTE, name STRING, only ID nonzero |
| AmmoX | 102264e8 | 3 | index BYTE, reserve SHORT, no ID guard |
| WpnInfo | 102265b8 | 4 | weapon ID BYTE, descriptor maxclip BYTE, reserve SHORT |
| Inventory | 102265e4 | -1 | slot BYTE, zero BYTE, name STRING, three boolean BYTE values |
| Syringe | 102266dc | 2 | player entity index BYTE, constant1 BYTE; destination2 |

Native engine API pointer addresses are pinned with the source SDK names as orientation; API initialization100b4aa0 copies the table into10222f48. Full engine serialization limits and client readers belong to their network packets; this report does not assert delivery or pixel/UI results.

## Provenance and remaining boundaries

`capture.py` reads the immutable DLL, regenerates bounded objdump evidence and checks source hashes. `verify.py` independently maps PE sections, checks every instruction byte, raw record, descriptor and selected ABI/branch assertions. The only ASM-only entry is comparator1016f680; it is support, not a new C function review. Original two-range100dad40 is preserved. Localized bytes are stored intact; CP1251 is labelled a decoding aid, including original backtick bytes rather than silently correcting text.

Closed: all local branches of four requested bodies, return values, list writes, GUI duplicate rules, ammo arithmetic, message ordering, native stack ownership. Still external: arbitrary derived virtual implementations and callback reentrancy, P.100f1440 transition internals, Inventory final query100e24a0, complete formatter/stack-cookie failure internals, runtime registries/string allocation and network delivery. None is silently converted into a safety guard. The parent pass14 item-rules packet owns rules100af520 and related respawn callbacks; it can refine those external edges without changing these caller facts.

## Продолжение разбора: pass15

Продолжение: [inventory removal](../server-inventory-removal/contract.md) закрывает100f0ba0,100e24a0,100f1440. Query возвращает AL-bool для weapon_glock с byte200; точное назначение этого derived byte ещё неизвестно. Reset обнуляет XYZ/crosshair только при X/Y!=0 (включая NaN), всегда264c=0. Removal имеет отдельные quick-slot/ammo/HUD paths и не очищает pending item напрямую. Прежние внешние границы этих трёх entry заменены данными контрактами; произвольные callbacks и UI consumers остаются открыты.
