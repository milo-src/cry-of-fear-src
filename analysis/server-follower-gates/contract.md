# Follower: проверки состояния, события, yaw и таймеры

Статический разбор оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Полные восемь primary C/native bodies: `10103fe0`, `10104d40`, `10104d60`, `10104de0`, `10104e20`, `10104ec0`, `10104f10`, `10105f30`. Перед разбором все восемь находились без REVIEW в срезе 1842 reviewed / 6813 pending. Остальные сохранённые C/ASM — support, не новые разобранные функции. Код DLL не запускался; ресурсы и игровые исходники не менялись.

Адреса, смещения, маски и номера virtual slots ниже шестнадцатеричные. Числа в формулах, RNG и значения событий — десятичные, если не указано `0x`. `RET 4/8/12` — десятичный размер очищаемого стека. Возврат `EAX` отличён от `AL` и `ST0`; смысл не приписывается случайному остаточному регистру.

## Общая связность и границы

Во всех восьми entry `ECX=this`. Native MONSTER descriptors `10216e08` подтверждают `+184 m_hEnemy`, `+18c m_hTargetEnt`, `+224 m_MonsterState`, `+2ec m_afMemory`, `+304 m_afCapability`, `+34c m_pCine`. Функция `10104f10` проверяет именно target, не enemy. Поля `+370`, `+374` и `+3dc` названы по наблюдаемым операциям: DWORD база результата RNG, payload речи и float deadline. Отдельная исходная декларация этих полей не восстановлена. ENTVARS table подтверждает `angles+50` (yaw-компонент `+54`), `origin+8`, `deadflag+174`.

Engine initializer `100b4aa0` копирует 144 DWORD в `10222f48` и устанавливает globals `10223188`. Сопоставление с сохранённым eiface.h даёт RandomLong slot90 / `102230b0`, RandomFloat slot91 / `102230b4`, VecToYaw slot9 / `10222f6c`, GetModelPtr slot74 / `10223070`. Вызовы engine остаются внешней границей; последовательность расходования RNG доказана, его конкретный генератор и распределение не восстановлены этим пакетом.

Экспорт ordinal135 связывает соседний caller `101048c0` с `CTalkMonster::FollowerUse`; сохранённые вызовы этого caller, speech helper `101041f0` и task dispatchers `10105410/101059e0` связывают рассматриваемые тела с follower-подсистемой. Это не доказывает конкретный runtime класс каждого объекта. Точный поиск preferred-base LE32 адресов восьми primary в raw `.rdata/.data` не нашёл ссылок; точная RTTI-строка `.?AVCTalkMonster@@` в raw PE sections также не найдена. Отрицательный результат ограничен методом, не означает недостижимости или отсутствия виртуального владельца.

Речевые вызовы `virtual1a0` получают четыре stack DWORD `(payload, durationFloat, 1.0f, 2.0f)`. Последние два аргумента заранее уложены до RandomFloat; native освобождает лишь первый аргумент RNG и заменяет оставшийся high на ST0→float32. Ghidra ошибочно относит лишние аргументы к RNG. Concrete implementation `virtual1a0` и её результат здесь не установлены: наличие callback не доказывает фактическое проигрывание звука. Target/entity/model pointers заимствованные, callbacks не ограждены от изменения или уничтожения объектов.

## 10103fe0 — Follower_CinematicAndAliveGate

ECX=this, без stack arguments, plain RET; возвращает полный EAX строго 0 или 1. При `this+224 != 6` cinematic gate полностью пропускается. При state=6 читает pointer `this+34c` и вызывает `100fa480(ECX=cine)` без NULL-проверки. Нулевой результат этого helper немедленно даёт EAX0 и не вызывает own `virtualbc`.

Supporting `100fa480` требует DWORD cine+3bc!=0, затем разрешает cine target EHANDLE+18c через10017790, требует private!=NULL и его pev.deadflag==0. Это target cinematic object, а не target follower и не enemy. При NULL cine первый же доступ +3bc не защищён; ограничение нельзя заменить утверждением «невалидная cinematic безопасно отклоняется».

Если cinematic gate пропущен или прошёл, вызывается own `virtualbc()`. Любой ненулевой результат нормализуется в полный EAX1, ноль в EAX0. Тело не пишет состояния, target, расписание или таймер. Экспортированный FollowerUse вызывает его после проверки второго entity argument на IsPlayer; отдельный caller не превращает этот helper в проверку player. Смысл own virtualbc соответствует alive-проверкам существующих контрактов, но адрес concrete override этого объекта не найден.

## 10104d40 — Follower_RandomOffsetPlusField370

ECX=this, без stack arguments, plain RET. Сохраняет this, вызывает engine RandomLong с аргументами `(0,3)`, затем native ADD прибавляет DWORD `this+370` к EAX и возвращает весь 32-битный результат. Поле читается ПОСЛЕ callback, поэтому это не снимок базы перед RNG. Переполнение соответствует 32-битному ADD; saturate, modulo диапазона либо проверки отрицательности нет. Ограниченный диапазон 0..3 гарантируется только внешним контрактом engine, не локальным clamp.

Локальных записей в объект или global нет. В `101041f0` и `10104ec0` возвращаемое число не используется, однако вызов RNG не удалён из native последовательности. Имя вроде «выбор pitch/голоса» не доказано одним полем+370: сохранённые consumers здесь не применяют результат. Функция не является bool и не возвращает float/ST0.

## 10104d60 — Follower_AnimationSpeechEventsOrBase

ECX=this, один stack argument `Event8*`, RET4. В начале без NULL guard читает DWORD event+0. Event ID1005 (`0x3ed`) непосредственно идёт в речевую ветку; ID1009 (`0x3f1`) сначала вызывает RandomLong(0,99) и выходит, если signed EAX<75. Ровно75 и выше проходят; отрицательный ответ RNG пропускает речь. Другие IDs без преобразования передаются `100bf310(ECX=this,eventPointer)` и после его возврата функция заканчивается. В собственной ветке1009 base handler не вызывается, включая пропущенную речь.

Перед собственной речью вызывается `101058c0(this)`. Supporting helper перебирает selectors0..5: `10104040(previous,selector,requireTrace=1)` находит mapped кандидатов, candidate.virtual78() даёт объект; при nonNULL результата вызывает его virtual1a8() без stack arguments. Callback получает именно результат virtual78. Перечисление продолжается от прежнего candidate, lifetime не проверяется; класс и эффект virtual1a8 не установлены. Нельзя без concrete callback назвать это гарантированной остановкой всех звуков. После завершения обхода собственный vtable загружается заново.

Далее RandomFloat(2.8,3.4), ST0 округляется в float32, затем вызывается сохранённый own virtual1a0 с `(DWORD(event+4), duration,1.0,2.0)`. Payload читается ПОСЛЕ RNG и групповых callbacks, event не копируется. Нет own virtual244 ready gate, проверки payload на NULL/пустоту, назначения speech target, изменения greeting mask или проверки результата речи. Сохранённый vtable может отличаться от текущего после RandomFloat; повторного lifetime guard нет.

Native producer1000f020 записывает output pair `{eventID, borrowed char*options}`; options указывает в модель `eventBase + index*0x4c + 0xc`. Dispatcher1000e5f0 передаёт адрес stack pair в virtual11c. Это доказывает формат совместимого animation-event payload; numeric vtable привязка именно10104d60 к concrete virtual11c пока не найдена. Полный base100bf310 уже разобран в monster-events; здесь сохранена граница fallback, а его внутренняя логика не считается новой REVIEW. Возврат не нормализован: early RNG path оставляет RNG EAX, остальные — остаток вызовов; boolean success не объявляется.

## 10104de0 — Follower_PlayerMemoryRelationOverride

ECX=this, stack `otherPrivate`, RET4; возвращает полный EAX. Без NULL guard читает other vtable и вызывает `other.virtuald0()`. Только после callback проверяет младший байт own memory+2ec mask1. Если predicate ненулевой и mask установлен, возвращает integer2. Это значение отношения, а не true/false; оно совпадает с аналогичной веткой native base relation. Сами virtuald0 side effects выполняются даже при заведомо снятом memory bit.

При любом другом результате передаёт тот же other pointer в `100bf7f0(ECX=this,other)` и возвращает его полный EAX без изменения. Базовый helper использует other.virtual50/classification и own classification либо override+354; его полный контракт находится в monster-decisions. Этот wrapper не заменяет classification IsPlayer-проверкой на fallback path, не проверяет alive и не записывает enemy/target/memory. Если other является player и memory bit1 установлен, base classification/override не вызывается вообще.

Raw table/indices и conventional labels отношения остаются у base-контракта: здесь доказано ровно возвращаемое число2 и передача fallback. Для самого10104de0 concrete virtual slot не установлен; CGenericMonster+138→100bf7f0 из прежнего пакета не доказывает наличие этого follower override в той же таблице.

## 10104e20 — Follower_SetControllerZeroTowardPoint

ECX=this, stack `const float* worldPoint`, RET4, определённого EAX/ST0 результата нет. Если DWORD capability+304 mask0x400 снят, сразу выходит, не читая point и не вызывая controller helper. При установленном mask вычисляет три SSE float32 разности point.xyz−pev.origin.xyz. Передаёт их BY VALUE тремя stack DWORD в `100c2760(ECX=this,dx,dy,dz)`; native helper очищает12 байт. Указатель point не передаётся в100c2760 и не записывается.

Supporting100c2760 при всех трёх ordered нулях (включая ±0) возвращает текущий pev.angles.y через ST0; любой ненулевой или NaN компонент идёт в1011a930(pointerToStackVector), который tail-jumps engine VecToYaw. После helper исходный caller перечитывает pev pointer; ST0 округляется в float32 в собственный stack argument slot, затем SSE вычитает текущий pev.angles.y. Это перезапись копии указателя на стеке caller, не памяти worldPoint. Внешний VecToYaw и callbacks могут менять состояние; переданный vector остаётся снимком до вызова.

Полученный delta корректируется двумя последовательными strict ordered проверками: если delta>180.0, один раз вычесть360.0; затем если уже изменённый delta<−180.0, один раз прибавить360.0. На ровно±180 ничего не меняется. NaN проходит обе JBE и остаётся NaN; это не fmod и не цикл нормализации, поэтому произвольно большой finite delta не обязан попасть в диапазон. Арифметика и константы float32.

Наконец `1000eb70(ECX=this,index=0,value=delta)`; его ST0 результат явно отбрасывается FSTP. Wrapper1000eb70 вызывает GetModelPtr(pev.pContainingEntity), затем1000f880(model,pev,controllerIndex,value), возвращающий ST0. Нижнее квантование/пределы controller описаны в animation-state/studio-controls, не дублируются новым утверждением о точном повороте головы. Эта функция не пишет pev.angles, velocity или route и не гарантирует наличие controller0 в модели. Сохранённый caller task10105410 передаёт как target-related point, так и own origin; собственных guards на pointer/model здесь нет.

## 10104ec0 — Follower_SpeakPayload374AfterRandomAdvance

ECX=this, без stack arguments, plain RET, собственного boolean result нет. Сначала безусловно вызывает10104d40; EAX результата отбрасывается. После его RNG загружается own vtable, затем RandomFloat(2.8,3.2); ST0 округляется в float32. Вызывается сохранённый virtual1a0 с `(DWORD(this+374),duration,1.0,2.0)`; payload+374 читается после второго RNG.

Нет own virtual244 ready gate, IsPlayer/alive проверки, изменения target18c или speech handle3e0, проверки payload/результата callback. Два RNG вызова и их порядок являются частью native поведения, даже если первый результат не используется. Собственных state writes и таймера нет, но callback может их выполнять. Сохранённый101059e0 имеет прямой call этого helper в своём task dispatch; полный dispatcher находится в отдельном pass17 пакете server-follower-tasks.

## 10104f10 — Follower_TargetHandleIsPlayer

ECX=this, без stack arguments, plain RET; возвращает полный EAX строго0/1. Создаёт адрес EHANDLE this+18c и вызывает10017780 — boolean serial-valid edict, а не проверку private data. При нуле немедленно EAX0. При ненулевом результате вызывает100177a0 на том же handle; результат используется как private pointer без дополнительного NULL guard, затем его virtuald0(). Ненулевой predicate→EAX1, нулевой→EAX0.

Underlying10017ba0 сравнивает сохранённый serial с edict+4;100177a0 возвращает edict.private+7c после serial-valid lookup. Поэтому валидный handle с NULL private не превращается здесь в безопасный false: subsequent vtable load не защищён. Enemy+184 не читается, alive/расстояние/расписание/таймер не проверяются, own target не изменяется. Понятие «сейчас следует» используется caller101048c0 по этому единственному predicate, а не по наличию movement route.

## 10105f30 — Follower_SetSpeechDeadlineWithDefault

ECX=this, stack float duration, RET4; локальная запись одна: float this+3dc. Сначала COMISS сравнивает0.0 с duration. При ordered duration<=0 (включая−0, отрицательные finite и−∞) пишет SSE float32(now+3.0). При positive duration либо unordered NaN пишет SSE float32(duration+now). Default3.0 применяется до чтения и сложения времени, а не clamp к минимальному сроку после сложения.

Global10223188 читается как pointer, затем now из первого float. Никакой проверки now/duration на finite нет; positive∞ и NaN передаются в arithmetic path. Инструкции не вызывают external callbacks и не обновляют global10230d78, use deadline+3c0, target или schedule. В101041f0 финальная неудача вызывает helper(0), а уже caller отдельно очищает10230d78; нельзя приписывать global reset этому entry. ST0 не устанавливается, bool/AL успех не формируется; EAX случайно содержит загруженный globals pointer и не объявляется публичным result.

## Что закрыто и что осталось

Закрыты локальные ветви восьми сохранённых entry, их stack cleanup, full-EAX predicates, расход RNG, yaw by-value и float/NaN правила. Восьми карточкам не приписывается восстановление всего поведения сопровождающих NPC или runtime-паритет. Поля target/enemy и capability подтверждены native descriptors, scopes callback подтверждены регистрами, а не догадкой по SDK.

Остаются concrete virtual1a0/1a8/244/240/248/24c/250 владельцы и payload writers, готовность и остановка речи, lifetime model/options и engine RNG/VecToYaw, установка event override10104d60 и relation override10104de0 на spawned objects. Helper101058c0 сохранён как support, не новая REVIEW; owner inference не подменяет полный отдельный контракт. Task10105410/101059e0 принадлежат параллельному пакету server-follower-tasks. Нет необходимости повторно разбирать предыдущие FollowerUse/BeginFollow/health-speech bodies, уже закрытые в server-follower-behavior.

`capture.py` воспроизводит ограниченный objdump непосредственно из original PE без ignored giant cache. `verify.py` независимо отображает PE sections и проверяет source/ASM/raw hashes, native descriptors, engine slot ABI, bounded reference scans и критические инструкции. Ошибки доступа, неперехваченные FP exceptions, чужие callbacks и игровое выполнение не тестировались.

## Продолжение разбора: pass18

Актуальное продолжение pass18: [initialization](../server-follower-initialization/contract.md) закрывает10105f70/101058c0:19 payload strings, prefix, independent spawnflag checks и group dispatch. [Schedule/IO](../server-follower-schedule-io/contract.md) закрывает101053d0/101057f0/10105850/10105880/10105890,11 native schedule descriptors и11 TALK save fields. [Runtime helpers](../server-follower-runtime-helpers/contract.md) закрывает10104020/10104f50/10106430/101064f0. Эти11 primary больше не pending. Таблица10219c18 подтверждает3d4=m_deathNoticed,3d0=m_iszSpeakAs,3c0=m_useTime,3dc=m_flStopTalkTime,3e0=m_hTalkTarget. Concrete vtable bindings, runtime reachability и engine string lifetime по-прежнему открыты; см. точные границы новых контрактов.
