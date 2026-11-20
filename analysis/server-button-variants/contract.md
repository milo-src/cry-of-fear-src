# Кнопки: вращение, мишень и обработка урона

Pass29: 12 новых локальных контрактов. Статический разбор исходного server hl.dll SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`, сохранённого Ghidra C и полных native ranges; DLL не запускалась. `capture.py` сохраняет байты, PE RTTI/vtables/exports и таблицы полей; независимый `verify.py` сверяет оригинальный PE. Это локальные контракты, не готовые исходники или runtime-проверка.

B=this, E=B.pev(+4), G=*(10223188), S=G.stringBase(+98). Смещения hex. ENTVARS связывает E+44 movedir, +50 angles, +f4 size, +108 movetype, +10c solid, +134 frame, +164 health, +170 takedamage, +1a4 spawnflags, +1cc target, +1ec noise, +1fc speed, +20c edict. TOGGLE/BUTTON native descriptors связывают B+100 state, +108 moveDistance, +10c wait, +110 lip, +11c/+128 position1/2, +134/+140 angle1/2, +1a8 stayPushed, +1ac rotating, +1dc sounds. BASE связывает parent+14; +7c/+80 touch/use callbacks, +e4 activator EHANDLE подтверждены соседними проверенными контрактами. Не переносить одно смещение между разными классами без привязки.

## 0x10012640 — CButtonTarget_Factory

Один stack argument entvars*, cdecl/RET; полный EAX возвращает existing или newly allocated private object. При NULL entvars вызывает engine CreateEntity10222f9c и при ненулевом edict ставит E=edict+80. Затем E+20c даёт edict; если edict и edict.private+7c ненулевые, возвращает private pointer без проверки типа, записи pev/vtable или Spawn. Иначе engine PvAllocEntPrivateData10223044(edict,dch), при успехе пишет vtable101a5d00 и object+4=E. RTTI подтверждает CButtonTarget. Остальные поля здесь не инициализируются.

Отказы не оформлены безопасным NULL-return: NULL CreateEntity ведёт к чтению [NULL+20c]; NULL allocator — XOR EAX,EAX и MOV [EAX+4],ESI. Это статические пути, не наблюдённое падение. Export button_target10016740 непосредственно прыгает в фабрику. Vtable связывает Spawn+2c=10015010, Caps+40=10013f80, TakeDamage+64=10015700, Use+e8=10015f60; Save/Restore — базовые10018000/10017f30, собственная BUTTON таблица этому классу не приписывается. Начальное обнуление private memory и engine lifecycle остаются внешними.

## 0x10012880 — CRotButton_Factory

Один stack argument entvars*, cdecl/RET с полным EAX private object. NULL entvars разрешается через CreateEntity10222f9c и edict+80; existing E.edict.private возвращается как есть, без проверки класса и повторной инициализации. Иначе PvAllocEntPrivateData10223044(edict,1e4h), при успехе vtable101a5948 и object+4=E. RTTI подтверждает CRotButton; export func_rot_button100167a0 — прямой JMP сюда. Spawn и конструктор здесь не вызываются, остальные поля не очищаются.

NULL CreateEntity приводит к чтению [NULL+20c], NULL allocation к записи [NULL+4]; исправления ошибок нельзя приписывать исходному коду. Vtable+2c=100153b0, +30=10014260, +34=10013e80, +38/+3c=100148e0/100146f0, +40=10013f00, +64=10015620. Слот+48 — пустой10014250, тогда как у CBaseButton это100140a0; вращающаяся разновидность не использует линейный пересчёт endpoints через этот слот. Общие dispatch/persistence контракты находятся в server-button-dispatch и server-button-lifecycle.

## 0x10013e80 — CRotButton_KeyValue

ECX=B, один kv* stack argument, RET4. Сравнивает kv.key(+4) побайтно, регистрозависимо, до NUL с literal101a4010="axes". Только точное совпадение вызывает cdecl1011a6c0(E+44,kv.value(+8)), затем handled(+c)=1. Это прямой разбор movedir, не Euler angles и не нормализация. Ветка несовпадения передаёт тот же kv* в CBaseButton_KeyValue100135e0 с исходным this; она не обнуляет handled сама.

Поддерживающий1011a6c0 копирует NUL-terminated byte string в локальную область128 байтов без проверки длины, затем делает максимум3 вызова narrow atof-wrapper1016f5ec, сохраняя ST0 как float32. Продвижение идёт до очередного ASCII space, не универсального whitespace delimiter; при раннем NUL недостающие компоненты очищаются DWORD-нулём. Повторные пробелы не схлопываются этим scanner. Сам KeyValue не проверяет NULL/длину/NaN/диапазон и не выполняет нормализацию; CRT locale/ошибки/переполнение и последствия слишком длинного ввода остаются отдельными границами. Полный старый parser контракт — server-save-dispatch.

## 0x10013f80 — CButtonTarget_ObjectCaps

ECX=B, без stack arguments, RET с полным EAX. Если B.parent(+14)!=NULL, вызывает parent.virtual+40 с ECX=parent; результат игнорируется. Затем заново читает B.pev и младший BYTE spawnflags, возвращает (flags&1)<<3, то есть0 либо8. Parent callbacks могут изменить поля до окончательного чтения; флаг не кешируется до callback. Маска8 соответствует FCAP_IMPULSE_USE в отдельно закреплённом SDK, но числовая формула доказана native. Нет OR родительских caps, health/takedamage/locked проверок или serial/lifetime защиты parent.

## 0x100140a0 — CBaseButton_RecomputeLinearEndpoints

ECX=B, без аргументов, RET; привязка CBaseButton.vtable+48. Сохраняет E и parent один раз. Если parent NULL, position1=B+11c получает E.origin(+8) побитовым копированием; иначе каждая компонента position1=float32(E.origin-parent.pev.origin). Это только вычитание позиций, без inverse rotation/матрицы. Других callbacks до sqrt fallback нет; shared parent pointer предполагается валидным.

В float32 вычисляет D=((abs((size.x-2)*dir.x)+abs((size.y-2)*dir.y))+abs((size.z-2)*dir.z))-lip, где abs — маска7fffffff. Затем position2=float32(position1+dir*D) покомпонентно. Порядок native суммы квадратов: float32(float32(dy*dy+dx*dx)+dz*dz), далее расширение до double и SQRTSD; только ordered negative аргумент вызывает1016be90, после чего результат сужается до float32. Deeper CRT exceptional policy здесь не раскрывается.

Если ordered длина<1 либо E.spawnflags&1, копирует position1 в position2. NaN длины сам по себе не проходит сравнение, но flag1 всё равно схлопывает endpoints. Нет clamp D, нормализации dir, записи moveDistance, angles/state/velocity или вызова движения. Parent-relative position1 используется и в вычислении position2. Это полный пересчёт после Spawn, не новый Spawn; вращающаяся таблица вместо него имеет пустой slot10014250.

## 0x10015010 — CButtonTarget_Spawn

ECX=B, без stack arguments, RET. Последовательно пишет E.movetype=7, E.solid=4, вызывает engine SetModel(E.edict,S+E.model), затем перечитывает pev и ставит E.takedamage=1.0f без проверки health. После callback и этой записи вновь читает pev; если младший BYTE spawnflags&2, пишет E.frame=1.0f. При отсутствии флага frame не очищается. Значения7/4 соответствуют PUSH/BSP по закреплённому SDK; здесь нет команды движения.

Не вызывает virtual Precache, не устанавливает здоровье, Think/Touch/Use pointers, не назначает звук и не запускает targets. Поведение Use/TakeDamage обеспечивается таблицей виртуальных функций фабрики, а не установленными callbacks. Возвращаемый EAX не сформирован как success-result; SetModel и валидность pooled model string принадлежат engine.

## 0x100153b0 — CRotButton_Spawn

ECX=B, без stack arguments, RET. Сначала full DWORD B.sounds передаётся10012df0, полученная строка проходит PrecacheSound10116a30 и AllocString10223054, итог записывается E.noise. Затем10101e00(E) оставляет явно заданный movedir, а при ordered равенстве всех3 компонент shared vector10222f34..3c выбирает ось: flag40→(0,0,1), иначе flag80→(1,0,0), иначе(0,1,0). Runtime shared vector нельзя безусловно заменить литеральным нулём. Если flag2 установлен, умножает все3 компоненты movedir на float32(-1).

Устанавливает movetype7 и solid=((~spawnflags)&1)<<2, вызывает SetModel, перечитывает pev. Ordered speed==0 (включая -0, исключая NaN) получает40.0f; ordered wait==0 получает1.0f. При ordered health>0 пишет takedamage1.0f и перечитывает wait; иначе takedamage не очищается. Дальше state=1, angle1=E.angles побитово, angle2=float32(E.angles+E.movedir*B.moveDistance) покомпонентно, rotating=1. StayPushed DWORD равен1 только при ordered cached wait==-1.0f, иначе0. Нет parent-relative поправки углов, clamp distance или нормализации оси.

Flag100 определяет touch: clear→NULL, set→10012f70. При clear100 default Use10013090, при set100 default IgnorePlayer10013220; flag200 меняет выбор на противоположный. Это XOR двух flags, а не безусловный IgnorePlayer при200. Указатель Use пишется в B+80, touch в+7c. Native не вызывает virtual Precache10014260 и не выполняет часть инициализации линейного CBaseButton Spawn: locked byte/timers и spark think здесь не устанавливаются. Эти пропуски подтверждены полным телом и не означают, что никакой внешний lifecycle их никогда не задаёт.

## 0x10015620 — CBaseButton_TakeDamage

ECX=B, четыре stack arguments (inflictor entvars*, attacker entvars*, damage float, bits int), RET16; первый, третий и четвёртый не читаются. Всегда возвращает полный EAX0, не уменьшает health и не проверяет magnitude/type damage. Сначала ResponseToTouch10012d00: states2/3→0, state0→2 только при stayPushed==0 и flag20, прочие nonzero states→1. Ответ0 возвращается без изменения touch/activator.

При ненулевом ответе сначала B.touch=NULL. Затем attacker.entvars+20c даёт edict; NULL edict вызывает engine PEntityOfEntOffset1022305c(0), после чего при ненулевом результате берётся edict.private+7c. Сам attacker pointer NULL не защищён. Полученный private object присваивается EHANDLE B+e4 через10017740;10017780 проверяет существование serial-valid edict. Неуспех возвращает0 с touch ужеNULL и изменённым handle. Никакой самостоятельной key-lock/unlockTime/nextUseTime проверки нет.

Ответ1 вызывает Activate10012a80 с ECX=B: его noise/master/feedback/motion правила сохраняются. Ответ2 сначала emits100fc9f0(E.edict,2,S+noise,1.0f,0.8f,0,100); после callback читает fresh spawnflags. Если flag20 теперь сброшен, вызывает UseTargets10102930(B,HandleGet(B+e4),3,0.0f), затем в любом случае ButtonReturn10012d50. Входной Response2 требовал flag20, но он не кешируется через sound callback: ветку повторной проверки нельзя объявлять недостижимой или инвертировать. Обработка targets в ButtonBackHome остаётся отдельным шагом. Ни failure Activate, ни invalid handle не восстанавливают touch локально.

## 0x10015700 — CButtonTarget_TakeDamage

ECX=B, четыре stack arguments как обычный TakeDamage, RET16; использует только второй attacker entvars*. Читает attacker.edict(+20c), при NULL пробует PEntityOfEntOffset(0), затем берёт private+7c либоNULL. Нет защиты NULL attacker и нет EHANDLE/serial validation этого private pointer. Вызывает B.virtual+e8(activator=private,caller=B,useType=3,value=0.0f) с четырьмя явными аргументами; saved Ghidra C потерял три из них. Для точной фабрики CButtonTarget slot=e8 связывает10015f60.

После virtual callback возвращает полный EAX1 независимо от эффекта/результата Use. Не читает inflictor, damage или damage bits, не уменьшает health, не проверяет frame, caps, takedamage, cooldown или blocked state. Нулевой activator передаётся как есть. Это триггер переключения мишени от принятого вызова TakeDamage, а внешнее engine решение о доставке damage сюда отдельно.

## 0x10015f60 — CButtonTarget_Use

ECX=B, stack(activator,caller,useType,value float), RET16; caller/value не используются. Сначала CVTTSS2SI преобразует E.frame в signed int32 усечением к нулю, затем100183a0(useType,integerFrame). Predicate разрешает types2/3 всегда; для прочих запрещает type0 при integerFrame==0 и type1 при integerFrame!=0, остальные значения разрешает. Отказ ничего не пишет и не вызывает targets. При NaN/out-of-range CVTTSS2SI имеет native MXCSR exceptional/indefinite поведение, а не C++ boolean conversion.

Разрешённый путь перечитывает E.frame и пишет float32(1.0f-frame); это арифметика, не boolean XOR и не clamp в0..1. Потом перечитывает pev/frame: ordered frame==0 вызывает10102a80(B,activator,0,0.0f), все остальные значения, включая NaN при masked exceptions, вызывают тот же helper с type1. Caller/value входного Use не передаются. Helper немедленно FireTargets(S+E.target,activator,B,type,0.0f), только если target!=0; delay/killtarget путь10102930 здесь не используется. Вызванные targets могут менять состояние после записи frame; локального rollback нет. EAX не является стабильным status результата Use.

## 0x10016740 — button_target_Export

Полное native тело ровно5 байтов JMP10012640. PE export directory независимо связывает имя button_target и ordinal с этим адресом. ABI и EAX-result унаследованы от фабрики, дополнительных argument guards/allocation/Spawn нет. Сохранённый Ghidra C разворачивает фабрику внутри thunk, но native не содержит второй копии её тела. Доставка engine export на конкретной карте не наблюдалась.

## 0x100167a0 — func_rot_button_Export

Полное native тело ровно5 байтов JMP10012880. PE export directory связывает имя func_rot_button и ordinal. ABI и EAX принадлежат фабрике; thunk не содержит собственный конструктор, Spawn или обработку ошибки. Развёрнутый saved C является представлением перехода, а не отдельным машинным алгоритмом. Concrete binding статический, runtime создание объекта не проверялось.

## Границы следующего прохода

Вращающаяся дискретная кнопка и button_target имеют полный локальный разбор перечисленных методов; momentary_rot_button127c0/13c40/151d0/15c00/15cc0/15e30/15ee0/164b0 и его callbacks остаются отдельным блоком. Реальные engine damage delivery/parent scheduling, lifecycle memory defaults, глубокие CRT conversion/sqrt errors и все карты не доказаны этим пакетом. Предыдущие call-chain контракты: [dispatch](../server-button-dispatch/contract.md), [lifecycle](../server-button-lifecycle/contract.md), [targets](../server-targets/contract.md), [handles](../server-handles/contract.md).
