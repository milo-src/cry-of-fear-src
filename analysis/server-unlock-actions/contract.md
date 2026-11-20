# Unlock actions: проверка доступности объектов и награда DeadCat

Статический оригинальный server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Игра/DLL не запускались. Этот пакет закрывает восемь локальных тел из предыдущего [индекса прямых обращений](../server-unlock-callers/contract.md). Score helpers, другие pickup/weapon методы и runtime-проверки не входят в scope. Числа offsets/адресов/масок с `0x` или hex-суффиксом — hexadecimal; остальные количества и индексы — decimal.

`capture.py` сохраняет bounded objdump, оригинальные raw bytes, RTTI/vtables, native save descriptors, export CatUse, литералы и switch table. `verify.py` сверяет доказательства без исполнения target. Сохранённый C — псевдокод Ghidra, не оригинальный исходник; скрытые аргументы и floating comparisons восстановлены из ASM. Только восемь primary получают новые REVIEW; support-функции не засчитываются повторно.

## Общая ABI, владельцы и доказанная достижимость

Семь коротких обработчиков имеют `ECX=this`, один stack pointer, `RET 4`. Их слот **vtable+0x118**, а не Use+0xe8. Названия `PlayerInitUnlockGate` ниже описательные: оригинальное имя виртуального метода не найдено. Native RTTI связывает entry с конкретным классом:

| Entry | Class | Vtable | Маска/роль |
|---|---|---|---|
|0x10021730|CAxe|0x101aa13c|0x80000|
|0x100244c0|CBookLaser|0x101aa990|0x200000|
|0x10027770|CCamera|0x101ab67c|0x100000|
|0x1002c7d0|CCoFDevCommentary|0x101aca34|0x400000 + cvar|
|0x1003c420|CFAMAS|0x101ae8dc|0x40|
|0x1009b750|CCoFHoodie|0x101c9348|16-way selector|
|0x100b5960|CNightVision|0x101d1f68|0x1000000|

Четыре weapon класса CAxe/CBookLaser/CCamera/CFAMAS имеют в RTTI CBasePlayerWeapon→CBasePlayerItem→CBaseAnimating→CBaseDelay→CBaseEntity при нулевом mdisp. CNightVision наследует CItem→CBaseEntity; нельзя приписывать ему weapon latch по аналогии.

Сохранённый player callback `0x100f1f30` явно вызывает slot+0x118: ASM `0x100f29c5..0x100f29ec` перебирает edict с free==0 и ненулевым private, кладёт собственный player pointer через `PUSH EBX` в `0x100f29d3` и вызывает virtual+0x118. Ghidra потерял этот stack argument. Другой поддерживающий caller `0x10094060` после создания/Spawn env_particle выбирает первого player и вызывает тот же слот с ним. Это доказывает ABI и существующие пути вызова, но не полноту всех косвенных callers или фактическое появление каждого объекта на любой карте. Семь callbacks сами не проверяют тип/живость получателя; кроме DevCommentary, указатель используется лишь как nonNULL gate и ECX reader.

Reader `0x100dd000(mask,0,0)` возвращает **AL**, не гарантированный полный EAX. Все семь функций анализируют `TEST AL,AL`; не превращают EAX в свой boolean result. Reader incoming ECX не читает, загружает общий `scriptsettings.dat` заново при каждом вызове. Подробные ошибки/ordinal/грамматика — [unlock settings](../server-unlock-settings/contract.md). В частности load failure даёт AL0; это может приводить к удалению locked объекта, но не при bypass/latch guards.

Native CBasePlayerWeapon save table `0x1021b328` (27 записей), подтверждённая Save wrapper `0x1011ede0`, называет object+0x1bc **m_bCheckedIfShouldBeDeleted**, type12/count1. Инструкции четырёх weapon callbacks читают/пишут только BYTE; serializer type12 имеет собственный DWORD контракт. Здесь не доказан полный набор constructor/reset writers этого latch. ENTVARS `0x1021aae0` подтверждает pev.spawnflags+0x1a4, iuser1+0x248, iuser2+0x24c, fuser1+0x258, euser1+0x298. Object+0x1bc нельзя путать с pev.armortype+0x1bc.

Во всех случаях «remove» ниже означает `0x10119900(this)` с одним cdecl stack argument. Helper делает cleanup `0x10102c50`, OR pev.flags с `0x40000000`, очищает pev.targetname; это не немедленный delete/free в локальном теле. У boss-marked объектов helper также чистит связанные health bars. Последующее engine уничтожение и полный cleanup имеют отдельный контракт. Никакой из восьми primary не вызывает settings writer или непосредственно выдаёт новый inventory item.

## 0x10021730 — CAxe_PlayerInitUnlockGate

ECX=CAxe, stack(playerLike*), RET4, semantic result отсутствует. Если argument==NULL или BYTE object+0x1bc!=0, сразу возвращает без reader/removal. Иначе ставит latch=1 **до** проверки spawnflag1. При установленном spawnflag1 объект сохраняется без чтения settings, но latch уже установлен. При flag1==0 читает mask0x80000; AL0 вызывает remove(this), AL!=0 сохраняет объект.

Локальный latch не сбрасывается при reader false, ошибке файла, flag bypass или после remove. Повторный callback с тем же object и установленным latch не перечитывает файл. Доказана связка доступности CAxe с mask0x80000; поведение его Spawn, атаки, pickup и всех динамических выдач сюда не включено. Предыдущий Credits::Use также переносит найденный0x80000 из player+0x42c в settings; это отдельная стадия persistence.

## 0x100244c0 — CBookLaser_PlayerInitUnlockGate

ECX=CBookLaser, stack(playerLike*), RET4. NULL argument либо ненулевой BYTE m_bCheckedIfShouldBeDeleted немедленно завершает. Иначе устанавливает latch=1, вызывает reader mask0x200000 и удаляет this только при AL0. Spawnflags в теле не читаются: нельзя переносить обход CAxe в этот класс. EAX не оформлен как результат.

Native RTTI доказывает владельца CBookLaser. Предыдущий Credits::Use записывает0x200000 при score>=35 и spawnflag2 в обычной ветви P680==0; здесь этот же бит разрешает сохранение BookLaser entity. Это связь reward→availability, а не выдача BookLaser в inventory самим обработчиком. Успех записи в прежнем caller не проверялся, здесь результат reader определяет фактическую доступность при первом callback.

## 0x10027770 — CCamera_PlayerInitUnlockGate

ECX=CCamera, stack(playerLike*), RET4. Требует argument!=NULL, BYTE latch==0 и **установленный spawnflag1**. При любом непройденном guard не изменяет latch и не читает settings. Только после всех guards пишет latch=1, проверяет mask0x100000, при AL0 вызывает remove(this).

Отличие от CAxe принципиально: камера без flag1 остаётся с прежним latch0 и не проверяется; у Axe flag1 обходит проверку, но фиксирует latch1. Native callback не устанавливает model/camera view, не даёт предмет и не читает состояние игрока. Связка Credits::Use `T<=150 && spawnflag2`→settings0x100000 относится к доступности именно flagged CCamera, не ко всем обычным камерам карты.

## 0x1002c7d0 — CCoFDevCommentary_PlayerInitUnlockGate

ECX=CCoFDevCommentary, stack(playerLike*), RET4. Если spawnflag1 отсутствует, запрашивает engine CVarGetFloat("dev_commentary") через slot57/address0x1022302c; ST0 сохраняется в float32 и сравнивается с0. При ordered equal ±0 сразу вызывает remove(this), **даже если argument==NULL**. NaN проходит как unordered/nonzero. Если flag1 установлен, cvar не вызывается.

В оставшейся ветви NULL argument возвращает без удаления и без euser1 write. При ненулевом argument читает argument.pev.pContainingEntity и пишет этот сырой edict pointer в this.pev.euser1+0x298. Затем повторно проверяет spawnflag1: установленный flag возвращает без reader. Иначе reader mask0x400000; AL0 вызывает remove(this), AL!=0 возвращает. Поэтому euser1 записывается даже до удаления locked commentary entity. Pointer не является EHANDLE, serial/type/alive guard здесь отсутствует.

Нет one-shot latch: повторные callbacks могут менять euser1 и заново читать cvar/settings. Этот метод не запускает аудио. Native raw string точно `dev_commentary`; default и возможные runtime writers cvar не установлены здесь. Маска0x400000 записывается предыдущим Credits::Use при P680==0/spawnflag2; её consumer дополнительно требует cvar nonzero, если нет flag bypass.

## 0x1003c420 — CFAMAS_PlayerInitUnlockGate

ECX=CFAMAS, stack(playerLike*), RET4. Если argument==NULL либо BYTE latch!=0, немедленный выход. Иначе latch=1, reader mask0x40, AL0→remove(this), AL!=0→сохранить. Spawnflags не участвуют. Все обращения к получателю ограничены nonNULL gate и reader ECX, сам reader player state не читает.

Этот callback проверяет доступность уже существующего CFAMAS object; другая ранее исследованная проверка GiveNamedItem также использует0x40, а Credits::Use записывает этот бит при P67c==4/P680==0/spawnflag2. Эти связи не заменяют полного контракта FAMAS Spawn/AddToPlayer/атаки. Result EAX случайный для semantic API, проверять его как success нельзя.

## 0x100b5960 — CNightVision_PlayerInitUnlockGate

ECX=CNightVision (RTTI наследует CItem, не CBasePlayerWeapon), stack(playerLike*), RET4. Единственный начальный guard — argument!=NULL. При ненулевом argument всегда читает mask0x1000000 и при AL0 вызывает remove(this). Здесь нет latch, spawnflag bypass, player IsAlive/IsPlayer или настройки ночного зрения. Повторный callback повторяет чтение.

Связка с предыдущим Stats::Use: когда P678/P679/P680 ненулевые, тот sender пытается записать mask0x1000000 и заменяет отправляемую unlock mask этим битом. Новый consumer доказывает привязку этой маски к доступности CNightVision entity; значение самих P678/P679/P680 не переименовывается по предположению о названии кампании. Подбор и эффект предмета остаются другой стадией.

## 0x1009b750 — CCoFHoodie_PlayerInitUnlockGate

ECX=CCoFHoodie, stack(playerLike*), RET4. NULL argument возвращает без reads. Читает DWORD pev.iuser1 и unsigned проверяет <=15: отрицательные signed значения тоже отклоняются. Native jump table0x1009b8bc содержит ровно16 targets; selector не clamp/modulo.

Индексы0..9 проверяют ровно один бит соответственно `0x80,0x100,0x200,0x400,0x800,0x1000,0x2000,0x4000,0x8000,0x10000`. При **AL!=0** вызывают remove(this); AL0 оставляет hoodie. Полярность обратна locked weapons: уже открытый вариант удаляется. One-shot latch отсутствует.

Индексы10..15 используют массив `M=[0x20000,0x2000000,0x4000000,0x8000000,0x10000000,0x20000000]`. При selector k читает **все элементы M начиная с k-10 до конца**, в порядке массива. Каждый true вызывает remove(this), после чего обработка продолжается; false также продолжает. Например selector10 делает до шести отдельных reader и до шести remove, selector14 — две пары, selector15 — одну. Это native fallthrough0x1009b807..0x1009b8b5, не артефакт C switch. Нет раннего выхода после первого true, нет повторной проверки iuser1, flags или жизненного состояния this.

Ни mask0x40000, ни mask0x40000000 в этом switch нет. Не расширять его по списку wardrobe меню: Clothes::Use и Credits::Use имеют другие диапазоны. Primary не выдаёт clothing, не ставит player+0x42c и не пишет settings. Отдельный exported HoodieUse0x10094ec0 и его lifecycle остаются downstream границей. Повторные remove здесь не доказывают use-after-free: локальный remove helper ставит deferred kill flag, а не освобождает память непосредственно.

## 0x100931f0 — CCoFDeadCat::CatUse

Native exported ordinal49 `?CatUse@CCoFDeadCat@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z`, ECX=this, четыре stack аргумента Use, RET10h. Использует только activator. Требует activator!=NULL, activator.virtual+0xd0()!=0 (IsPlayer), virtual+0xbc()!=0 (IsAlive), затем успешный player resolver0x100125e0(activator.pev). Нет useType/value/caller gate.

Достижимость доказана отдельно: CCoFDeadCat vtable0x101c91a0+0x2c→Spawn0x1009cbe0, который ставит object+0x80=CatUse и pev.fuser1=gpGlobals.time. Vtable+0xe8→base dispatcher0x1000e2e0 вызывает object+0x80, сохраняя ECX и передавая все четыре Use arguments. Spawn также задаёт model `models/props/blandat/dead_cat.mdl`, sequence lookup `idle_test` и планирует next think0.1; полные animation/think последствия здесь не объявляются новой REVIEW.

После player guards необходимо **ordered now>pev.fuser1**. COMISS/JBE отклоняет equality и NaN с любой стороны. Начальное fuser1=spawn time поэтому блокирует взаимодействие в тот же момент. Далее обычная ветвь выбирается, если signed iuser1<5; иначе читает mask0x200 и выбирает обычную ветвь при AL!=0; иначе проверяет signed iuser2>0 и также выбирает обычную ветвь. Reader не вызывается, пока count<5.

Обычная ветвь увеличивает DWORD iuser1 на1 с native wrap, вызывает text helper0x10119810(player,text101c9334,5,0), затем сохраняет fuser1=float32(double(currentTime)+0.75). Сырые bytes строки декодируются cp1251 как ``Дохла` кошка...`` — символ0x60 сохранён буквально, не исправлен на предположительную букву. Counter общий у entity для всех активаторов, не per-player. Он увеличивается и при уже открытом unlock или положительном iuser2.

Reward ветвь требует iuser1>=5, reader0x200==false и iuser2<=0. Вызывает text helper(player,text101c9324,0,0), где bytes дают cp1251 `Привет, киска.`. Затем вызывает sound wrapper0x100fc9f0(player.edict,channel2,"subtitles/hellokitty.wav",volume1.0,attenuation0.8,flags0,pitch100), OR player.m_iFoundHoodies+0x42c с0x200, и sound wrapper с channel0/`player/find_note.wav` при тех же остальных arguments. Затем entity.iuser2=1 и fuser1=float32(double(currentTime)+1.5). Наградная ветвь iuser1 не увеличивает. Глобальное время перечитывается после callbacks, это не исходный time snapshot.

Здесь **нет записи settings**: OR только found-mask текущего player. Привязка к persistence доказана предыдущим Credits::Use: при его собственных completion/spawnflag2 gates он переносит найденный0x200 в файл; Clothes::Use отображает этот бит как compact bit2. При fresh entity с iuser1=0/iuser2=0 и false unlock первые пять разрешённых взаимодействий идут обычной ветвью, шестое выдаёт награду. Нулевые initial counters не гарантируются этим CatUse/Spawn телом; это условный пример, а не доказанное начало любой savegame.

Text helper при fourth arg0 требует recipient!=NULL и recipient.virtual+0xd4()!=0, затем отправляет `MessageBegin(8,ProFont,0,edict); BYTE mode; STRING text; End`. GlobalID0x10226568 — runtime registration slot, не wire ID; registry фиксирует имя ProFont. Поэтому локальный вызов текста не гарантирует доставку при провале helper guard. Sound wrapper имеет дополнительные глобальные volume gates и backend; caller передаёт указанные параметры, не обещает фактически слышимый звук. Полный audio backend/sentence resolver контракт остаётся отдельным.

## Что закрыто и что остаётся

Закрыты полные локальные ветви восьми primary, AL tests, native class ownership, слот+0x118 caller ABI, CatUse dispatch, latch differences, signed/NaN gates, hoodie fallthrough и точные reward/text/audio arguments. Новая mask→consumer привязка: 0x200000 BookLaser; 0x100000 flagged Camera; 0x400000 commentary с cvar; 0x1000000 NightVision; 0x200 DeadCat found clothing. Axe/FAMAS согласуются с ранее доказанными проверками выдачи.

Открыты constructor/reset writers latch и counters, все косвенные callers slot+0x118, deployment/pickup/actual effect этих items, клиентское отображение названий одежды, HoodieUse, дальнейшее engine удаление и условия persistence вне разобранного Credits/Stats scope. Существующие материалы [unlock settings](../server-unlock-settings/contract.md), [unlock callers](../server-unlock-callers/contract.md) и [player equipment](../server-player-equipment/contract.md) задают связанные, но отдельные этапы. Capture runtime globals/BSS не выдаётся за текущие игровые значения.
