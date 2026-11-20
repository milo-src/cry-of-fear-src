# Follower runtime helpers: четыре локальных контракта

Статический разбор оригинального server hl.dll. Игру и DLL не исполняли, ресурсы и порт не меняли. Четыре primary entry отсутствуют в baseline1857 REVIEW; поддержка не создаёт дополнительные карточки. Имена предложены по native поведению, а не восстановлены из PDB.

Полные C и bounded ASM привязаны к оригинальному SHA256 в evidence.json. Для ABI и FP-ветвей первично машинное тело: псевдокод теряет EAX у10104020 и неверно передаёт NaN-routing10106430. Поля target, condition, memory и pev проверены по сохранённым native descriptor tables; названия и размещение engine callbacks дополнительно связаны с initializer100b4aa0 и header eiface.h.

## Карта связи и границы

- Срок речи: writer10105f30 → поле3dc → predicate10104f50 → schedule10104a10, helper10105410 и реакция101064f0.
- Цель следования: target EHANDLE18c → serial validation/getter → virtual+bc → второй getter → distance10106430. Enemy184 и recipient3e0 — другие поля.
- Реакция101064f0 → other.virtual+d0 → memory gate → speech timer → XY speed → condition180 mask10000000 → MakeIdealYaw100c00f0 → engine VecToYaw.
- Wrapper10104020 выбирает own virtual+bc/+244 и передаёт полный EAX. Конкретное связывание этих primary с классом, Touch или vtable не установлено. Exact LE32 preferred-base scan всех raw offsets .rdata/.data не нашёл их адресов; он не покрывает вычисляемые, относительные, relocation-dependent или внешние связи.

Saved-C lexical caller scan фиксирует только явные FUN_... tokens в доступном корпусе. Нулевые результаты не означают отсутствия вызовов. CRT sqrt helper1016be90, concrete virtual implementations и фактический engine frame order остаются внешними границами. Ни callback success, ни runtime visual/audio behavior этим пакетом не проверены.

## Проверенные тела

### 0x10104020 — Follower_ForwardSelectedStateGate

Передаёт полный результат одного из двух виртуальных предикатов, выбранного аргументом.

Thiscall здесь означает ECX=this; один stack DWORD selector, RET4. При selector!=0, включая отрицательное значение, вызывает this.virtual+bc(); при selector==0 вызывает this.virtual+244(). Ни один callback не получает selector как stack argument. После CALL нет преобразования EAX: полный результат callback передаётся вызывающему без нормализации bool. Псевдокод void не отражает этот native return flow.

Собственных записей полей и проверки NULL this/vptr нет. Virtual+bc используется окружающими функциями как alive gate, +244 — как speech gate, но конкретный класс и implementations этим телом не установлены. Побочные эффекты callback не ограничиваются данной оболочкой. Отсутствие exact VA references в ограниченном data scan не доказывает недостижимость функции.

### 0x10104f50 — Follower_IsSpeechDeadlineActive

Проверяет строгое превышение срока речи над текущим временем; возвращает полный EAX 0 или 1.

ECX=this, без stack arguments, plain RET. Сначала читает float32 this+3dc, затем globals pointer10223188 и float32 globals.time+0. XOR EAX,EAX; COMISS deadline,now; SETA AL дают полный EAX=1 только при ordered deadline>now. Равенство, включая +0/-0, и unordered NaN дают 0 при маскированных FP exceptions. +infinity больше finite time, но не больше +infinity; нет проверки конечности, epsilon или clamp. COMISS может вызвать исключение при немаскированном invalid, поэтому это не гарантия безопасной обработки NaN при любом MXCSR.

Нет записи deadline, сброса timer, проверки sound backend или фактического проигрывания речи. Поддержка10105f30 устанавливает это поле: ordered duration<=0 заменяется сроком now+3.0; положительная duration или NaN используется в duration+now. Здесь проверяется только сохранённое значение. Прямые вызовы найдены в сохранённых C10104a10,10105410 и101064f0; поиск по сохранённому корпусу не является полной картой native callers.

### 0x10106430 — Follower_DistanceToLivingFollowTarget

Возвращает 3D-расстояние до цели следования либо float32 1000000 при отсутствии handle или нулевом alive gate.

ECX=this, без stack arguments, plain RET; результат возвращается через ST0 после FLD float32, а не как integer EAX. Использует EHANDLE this+18c (native MONSTER m_hTargetEnt), не enemy+184 и не speech recipient+3e0. Сначала10017780(&target) проверяет serial-valid edict; при 0 сразу загружает float32 1000000 из101bbb68. Иначе100177a0 возвращает private pointer, после чего без NULL guard вызывается target.virtual+bc(). Полный EAX callback==0 также даёт sentinel; любой ненулевой допускает измерение. Нет IsPlayer или проверки собственного alive state.

После virtual callback сохраняет own pev=[this+4], затем повторно вызывает100177a0(&target) и немедленно читает [returnedPrivate+4]. Второго bool gate и NULL private guard нет. При изменении handle во время callback будет использован новый target либо возникнет недопустимое разыменование; lifetime stability не обеспечена. Helpers10017ba0/10017780 сравнивают edict serial с handle+4, но не доказывают nonNULL private, free==0 или живое состояние объекта. Own pev сохраняется до второго getter.

Пусть dx,dy,dz — target.origin−self.origin, каждое вычитание округляется float32. Каждое произведение dx²,dy²,dz² также float32. Native порядок суммы: q=float32(float32(dy²+dx²)+dz²). Затем q расширяется в double; UCOMISD(0,q)/JA направляет только ordered q<0 к1016be90. Обычная ветвь, включая unordered q, выполняет SQRTSD, округляет CVTSD2SS до float32 и возвращает через FLD/ST0. Псевдокод if(0<=q) ошибочно представляет NaN-routing: native NaN идёт в SQRTSD, а не в precise helper.

Ветка1016be90 принимает double в XMM0, затем использует возвращённый XMM0 с тем же float32→ST0 завершением; полная CRT обработка исключений/errno здесь не разобрана. При обычных неотрицательных данных результат — 3D, включая Z, не XY-distance. Zero distance остаётся 0; overflow q может дать +infinity; NaN не заменяется sentinel, если вычисление продолжается. Значения больше1000000 не ограничиваются. Нет записи цели, health, schedule или deadline.

### 0x101064f0 — Follower_OnPlayerTouchSetPushConditionAndYaw

При быстром касании игроком и отсутствии speech/memory gates ставит condition и рассчитывает ideal yaw к его позиции.

ECX=this, один stack DWORD other*, RET4; возврат не нормализован в success bool. Без NULL guard вызывает other.virtual+d0() и проверяет полный EAX!=0. Затем требует отсутствия mask1 в собственном BYTE this+2ec (low byte native MONSTER m_afMemory), затем10104f50(this)==0. При провале любого gate выходит без собственных записей. Название OnPlayerTouch описывает операцию; concrete Touch/vtable assignment к этому entry пока не доказан.

После callbacks читает other.pev.velocity.y(+24) и x(+20), расширяет каждый float32 в double через CVTPS2PD. ANDPS с101a1f90, то есть двумя QWORD 0x7fffffffffffffff, очищает double sign. Сумма abs(double(vy))+abs(double(vx)) вычисляется ADDSD, затем CVTPD2PS округляет её до float32. COMISS с float32 50.0 из101a1efc и JBE пропускают тело при <=50 либо unordered. Требуется ordered строго >50; +infinity проходит, NaN не проходит при маскированных exceptions. Это XY Manhattan speed с double intermediate, не евклидова длина и не скорость по Z; не следует заменять порядок округлений выражением float32 fabs+fabs.

При успехе OR DWORD this+180 с0x10000000, сохраняя остальные condition bits. Затем заново читает other.pev, копирует origin.x/y/z в12 stack bytes и вызывает100c00f0(this,Vector-by-value). Callee RET0c очищает вектор; primary RET4 очищает other. Condition записан до yaw helper и остаётся установленным даже если helper пропустит изменение yaw. Нет прямого изменения velocity, actual angles, route, speech recipient или timer.

Поддержка100c00f0 — ранее разобранный MakeIdealYaw: exact classname monster_slowerstuck, monster_spitter либо BYTE this+9!=0 запрещают yaw write. Иначе activity+2d0==0b преобразует входной XY в(-y,x), activity==0c — в(y,x), прочие оставляют(x,y); далее вычитает own origin, вызывает1011a930→engine VecToYaw(slot9,10222f6c) и записывает ST0 как float32 pev.ideal_yaw+ac. Результат не означает, что модель сразу повернулась: actual angle update и выбор расписания находятся за границей текущего body. Support class exclusions и поля подтверждены native bytes/descriptors, не импортированы из ожидаемого SDK поведения.

## Воспроизведение и навигация

`python analysis/server-follower-runtime-helpers/capture.py` сохраняет только статические evidence; `write_notes.py` восстанавливает этот контракт и notes; `verify.py` независимо разбирает PE sections и сверяет SHA, все ASM bytes, constants, native fields, exact-data scan и локальные ABI anchors. Скрипты не загружают DLL как исполняемый модуль и не создают Ghidra session.

Соседние доказанные контракты: [speech policy](../server-follower-speech-policy/contract.md), [follower gates](../server-follower-gates/contract.md), [follower tasks](../server-follower-tasks/contract.md), [monster navigation](../server-monster-navigation/contract.md). Продолжение требует отдельно установить concrete callback binding; отсутствие direct pointer literals не заменяет эту работу.
