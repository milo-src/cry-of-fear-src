# Monster hearing: sensory frame, trigger conditions и map inputs

Pass23: три новых полных тела оригинального server hl.dll — 100c2970, 100bda70, 100bf970. SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`; публичный baseline pass22: 1946 REVIEW / 6709 pending. Только статические C, bounded ASM и PE bytes. Игра/DLL не исполнялись, ресурсы не менялись. Сохранённые Listen/BestSound/BestScent уже REVIEW и здесь не считаются новыми.

## Владение и связи

M — private monster object в ECX, V=[M+4], G=[10223188], S=[G+98]. Смещения, маски и адреса далее hex; значения selector/количества даны десятичными. Native MONSTER table10216e08 подтверждает M180=m_afConditions,184=m_hEnemy,224=m_MonsterState,32c=m_flDistLook,330=m_iTriggerCondition,334=m_iszTriggerTarget,344=m_iUseAlertAnims,350=m_iClass,354=m_iPlayerReact. M2d8 — union типов принятого слухового списка по уже разобранному Listen, не указатель на WAV. ENTVARS table1021aae0 связывает V164=health,174=deadflag,1a8=flags,1b4=max_health.

Concrete factory100b05e0 устанавливает vptr101ce36c, RTTI CGenericMonster. Эта таблица содержит +128→100c2970, +124→100bfc50 (Look), +1b8→100bd100, +1dc→100bf880 (IgnoreConditions), +208→100bed80 (GetEnemy), а +1d8/+204/+234 ведут соответственно к трёхбайтовым RET0 (C2 00 00) в10013290/100145a0/10013540. Поэтому в этой конкретной таблице последние три callbacks не дают effects, но оркестратор допускает другие overrides. +34→100b0770, чей fallback вызывает100bf970 после собственных ключей. Это подтверждает concrete путь map key к общему обработчику, без присвоения всем subclasses тех же bindings.

Звуковой тракт до данного пакета: [CSoundEnt](../server-sound-entity/contract.md)→[Listen/BestSound/BestScent](../server-monster-senses/contract.md). Listen получает mask через virtual1e8, пересекает с schedule mask, пишет audible head M2d4, union M2d8 и conditions; Best выбирает запись по уже построенной общей цепочке. Новый RunAI помещает Listen между Look и маской IgnoreConditions. Затем trigger cases7/8/9 проверяют сочетание condition20000 и union sound type, а не заново выбирают ближайший звук. Общие записи +1c могут быть перезаписаны другим Listen; сохранённый caller не делает snapshot всего pool.

## 100c2970 — Monster_RunSensoryAIFrame

ABI ECX=M, без stack arguments, plain RET; стабильный boolean результат не формируется. Читает state224. Только для1 или3 вызывает engine RandomLong(0,99), даже если позднее flags запретят callback. Лишь при EAX==0 и отсутствии маски2 в BYTE V.flags вызывает virtual234() без stack args. RandomLong не обязан быть равномерным по доказательствам этого caller; здесь нельзя превращать gate в обещание runtime вероятности. После callback заново читает state.

Если текущий state не0,5,8, выполняет sensory block. M32c, сохранённый как float, преобразуется CVTTSS2SI в signed integer с усечением к нулю и передаётся одним stack DWORD в virtual124. При masked invalid NaN/Inf/out-of-range дают integer indefinite INT_MIN; локального clamp нет. Затем прямой call Listen100bfae0(M), заново vptr→virtual1dc(), и M180 &= ~полный EAX. Mask применяется к ТЕКУЩИМ conditions после callback, а не к прежнему snapshot. Далее свежий vptr→virtual208().

После virtual208 проверяет EHANDLE M184 через10017780. При nonzero сохраняет текущий vptr, отдельно разрешает private pointer через10017790 и вызывает сохранённый virtual1b8(pointer). Boolean EHANDLE проверяет edict/serial, не гарантирует ненулевой private; результат второго getter не проверяется на NULL. Даже если lifetime/state изменился при промежуточных callbacks, повторного общего state gate нет. Затем свежий vptr→virtual1d8() без аргументов. Все эти callbacks, включая enemy assessment, происходят лишь внутри первоначально разрешённого sensory block.

Независимо от состояния и пропуска sensory block всегда вызывает100bda70(M), игнорирует его EAX, затем свежий virtual204(), затем MaintainSchedule1000b070(M). Только ПОСЛЕ scheduler очищает conditions маскойfffffcff (bits100/200). Поэтому trigger selector2 ещё может увидеть эти bits на текущем проходе, а scheduler также видит их до clear; callback mutations не откатываются. После этого заново читает state и для2/3/4 пишет DWORD M344=1. Для других states прежнее значение сохраняется, не сбрасывается.

При state0/5/8 RunAI сам не очищает и не перестраивает audible head/union: прямой trigger может видеть прошлые conditions/M2d8, если их не изменили внешние callbacks. Нельзя утверждать, что пропуск Listen означает отсутствие реакции на звук. Support MonsterThink100c0430 вызывает virtual128 на100c0671 в одной ветви, а в другой прямо100bda70 на100c0652; потому trigger не ограничен исключительно этим RunAI caller. Полный большой MonsterThink остаётся отдельным pending контрактом, здесь закреплены только эти callsites.

## 100bda70 — Monster_FireConfiguredAITrigger

ABI ECX=M, без stack args, plain RET, полный EAX0/1. Читает DWORD M330. Ноль возвращает0; затем DEC/CMP10/JA допускает лишь selectors1..11 с unsigned range guard, отрицательные и остальные значения также возвращают0. Native jump table100bdbe4 содержит11 DWORD targets; selectors5/6 сразу ведут в общий return0. Общий выход1 существует только после diagnostic, FireTargets и финальной записи M330=0.

Selectors имеют следующие точные local acceptance conditions. 1: boolean EHANDLE M184!=0, затем повторный private getter100177a0 и без NULL guard enemy.virtuald0()!=0, затем текущий BYTE M180&10!=0. 2: DWORD M180&300!=0. 3: own virtualbc()!=0 и ordered float32(max_health*0.5f)>=health. Здесь native COMISS/JAE отвергает unordered NaN, несмотря на упрощённое C `if (half<health) return0`; equality проходит, lower health bound отсутствует. 4: V.deadflag DWORD!=0. 5 и6 всегда0.

Selectors7,8,9 сначала требуют M180&20000!=0, затем BYTE M2d8 с маской соответственно2,4,1. Это union всех принятых типов Listen, не type только BestSound и не фактическое воспроизведение/occlusion. Selector10 требует M180&200000!=0. Selector11 требует тот же200000 и state224, отличный от2,5,6; прочие states, включая0/8, этим локальным selector допускаются. Все указанные conditions читаются в своей ветви; между callback gates и последующим чтением нет snapshot всей структуры.

На acceptance сначала AlertMessage(severity2,"AI Trigger Fire Target\n"), затем заново G/S и M334, далее FireTargets10101ff0(S+M334,M,M,3,0.0f). Пять аргументов подтверждены native stack: activator и caller оба M, use type3, value0. Имя может быть пустым string_t0; caller не проверяет target на0, наличие matching targets или успех dispatch. Только ПОСЛЕ возврата FireTargets пишет DWORD M330=0 и возвращает1. Поэтому результат1 означает выполнение этого пути, а не гарантированное срабатывание map target.

Alert callback может изменить M334 до его чтения. Пока FireTargets выполняется, M330 ещё не обнулён: повторный вход может снова пройти тот же trigger; поздняя запись0 также затрёт новую настройку330, которую callback успел задать. Собственный lifetime M не проверяется после внешних callbacks. Это порядок инструкций и потенциальная reentrancy-граница, не заявление о реально воспроизведённом сбое. На отклонённых ветвях M330 сохраняется, в том числе для unsupported selector5/6; target334 вообще не очищается.

## 100bf970 — Monster_KeyValueAITriggerAndReaction

ABI ECX=M, stack(K), RET4, incidental EAX без общего boolean contract. K.key=[K+4], value=[K+8], handled=[K+c]. Сначала сохраняет key pointer и проверяет точные NUL-terminated keys в порядке TriggerTarget, TriggerCondition, m_iClass, m_iPlayerReact, m_iStartAlert. Первые три comparisons inline по два байта, последние два через1000aba0; bounded helper подтверждает case-sensitive byte equality с полным EAX0/1. Prefix/case-insensitive/whitespace normalization отсутствуют. NULL/length guards ключа и value не добавлены.

TriggerTarget: engine AllocString(value) через10223054, полный EAX сохраняется в M334, затем handled=1. Нет проверки allocation failure, поиска target, копирования собственной heap-строки или освобождения старого string_t в этом теле. Native descriptor M334 — type1/count1, подтверждает string_t роль независимо от внешнего SDK.

TriggerCondition:1016b55e(value)→M330; m_iClass→M350; m_iPlayerReact→M354; m_iStartAlert→M344. Все записи DWORD, после каждой handled DWORD=1. Native MONSTER descriptors для них type10/count1, причём ключ m_iStartAlert записывает поле с именем m_iUseAlertAnims. Parser wrapper1016b55e передаёт base10 и selector1 в CRT1016a01f; полный locale/overflow parser здесь не закрыт. Нет проверки conversion status, clamp selector1..11 или логического приведения nonzero к1. Поэтому unsupported числа хранятся и впоследствии отсекаются trigger dispatcher, а M344 может быть иным integer до того, как RunAI при state2/3/4 перезапишет его1.

При отсутствии всех пяти совпадений вызывает10102480(M,K), сохраняя исходные object и pointer, затем RET4. Это inherited fallback, а не запись handled0: он может обработать другие keys. Полная нижняя цепочка KeyValue/CRT остаётся внешней границей. Собственный handler не запускает immediate target, Listen или schedule и не сбрасывает остальные AI поля при настройке одного ключа.

## Границы и воспроизводимость

Закрыты полные локальные3 bodies, jump table, конкретные CGenericMonster slots и producer/consumer связи. Indirect overrides других классов, полный Look/MonsterThink, содержимое maps, engine RNG/AllocString, преобразование нестандартных CRT inputs, lifetime/reentrancy и runtime frame ordering остаются отдельно. Старые REVIEW не пересчитаны; supports не равны новым карточкам.

`capture.py` воспроизводит bounded objdump, сравнивает каждую machine-byte строку с исходным PE и сохраняет hashes, raw constants/строки, RTTI/vtable,173 native descriptors, export и ограниченные LE32 data references. `verify.py` независимо отображает PE sections и сверяет ranges, headers, descriptors, jump targets, ABI/branch anchors и точные note paths. Никакого исполнения целевого бинарника или изменения ресурсов.
