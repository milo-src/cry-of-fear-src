# Поведение сопровождающих NPC: использование, реплики и реакция на урон

Только статический разбор оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Полностью прочитаны шесть сохранённых C-тел и соответствующие native ASM: `101048c0`, `10105920`, `10104110`, `101041f0`, `10104540`, `10105eb0`. `capture.py` воспроизводит ограниченные чтения PE и objdump, `verify.py` проверяет байты, хеши и таблицы; DLL не исполняется. Новые REVIEW только для этих шести адресов. Остальные 22 C/ASM — supporting evidence, не дополнительные новые карточки.

Адреса, смещения, маски, номера slots/tasks ниже шестнадцатеричные; десятичные величины и float явно обозначены. `virtualXYZ` означает смещение в таблице объекта, а не установленный адрес реализации. ECX является `this` во всех шести entry.

## Общая связность и границы

PE export ordinal 135 непосредственно связывает `101048c0` с `?FollowerUse@CTalkMonster@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z`. Это положительное доказательство владельца данного entry. Для соседних функций доказаны прямые вызовы и общий layout, но не конкретная runtime vtable каждого класса. Точный поиск LE32 адресов всех шести primary по raw `.rdata`/`.data` не дал совпадений; точная RTTI-строка `.?AVCTalkMonster@@` также не найдена в raw секциях. Это ограниченный отрицательный результат, не доказательство отсутствия объекта или недостижимости экспортированного кода в игре. Создание, установка Use callback и конкретные implementations `virtual240/244/248/24c/250` остаются отдельной задачей.

Native MONSTER table `10216e08` однозначно различает `this+184 m_hEnemy` и `this+18c m_hTargetEnt`; оба EHANDLE из двух DWORD. Здесь следование и проверка здоровья относятся к target+18c. Та же таблица подтверждает `+224 m_MonsterState`, `+228 m_IdealMonsterState`, `+2ec m_afMemory`, `+34c m_pCine`. Поля `+368` (маски реплик), `+36c` (счётчик), `+3c0` (deadline использования), `+3dc` (deadline реплики) и `+3e0/+3e4` (отдельный EHANDLE адресата реплики) описаны по доступам; их исходные названия и отдельная save-table не установлены. Нельзя переносить сюда squad layout из другого класса. ENTVARS table `1021aae0` подтверждает `pev+164 health`, `+1b4 max_health`, `+174 deadflag`, `+1a4 spawnflags`, `+1a8 flags`.

Во всех рассматриваемых речевых вызовах `virtual1a0` получает четыре stack DWORD: `(payload, float duration, float 1.0, float 2.0)`. Ghidra иногда приписывает последние два аргумента `RandomFloat` и показывает лишь два аргумента последующего виртуального вызова. Native код заранее выделяет четыре slots, вызывает engine `RandomFloat(low,high)`, освобождает только один DWORD, заменяет оставшийся high на ST0→float32 и добавляет payload. Engine table `10222f48` имеет RandomFloat slot 91 по адресу `102230b4`, RandomLong slot 90 по `102230b0`; имена привязаны к копированию 144 DWORD в `100b4aa0` и сохранённому eiface header. Payload — буквально DWORD из указанных object fields: тип строки, sentence group, наличие звука и смысл последних float требуют concrete virtual1a0. Ни один рассмотренный body не проверяет успешность воспроизведения.

По уже проверенному `10104670` аргумент 1 ищет ближайшего видимого `player`, аргумент 0 ищет среди шести mapped classname selectors через `virtual250`. Поиск исключает this, неживых кандидатов и состояния 5/6, требует trace fraction==1 и расстояние строго меньше 500.0. Это контекст вызовов, а не доказательство имен неизвестных virtual callbacks. Возвращаемые private pointers заимствованные; после произвольных виртуальных callbacks эти тела не устанавливают новый lifetime guard. Разрешение EHANDLE и setter привязаны к сохранённым `10017740/780/790/7a0`.

## 101048c0 — CTalkMonster_FollowerUse

ABI: ECX=this, четыре stack arguments `(entityA, entityB, useType, float value)`, `RET 10h`. Тело читает второй entity pointer `[ebp+c]` и useType `[ebp+10]`; первый pointer и value не читаются. Export подтверждает типы, но не имена параметров. Нельзя автоматически назвать используемый entityB activator по привычному SDK прототипу. Возврат не нормализован в bool; исходное экспортированное имя имеет void return.

Сначала сравнивается float `this+3c0` с текущим `*10223188`. Только ordered deadline>now вместе с useType=2 блокирует вызов. Equality и unordered NaN проходят через JBE. После этого требуется ненулевой entityB, его `virtuald0()!=0` и `10103fe0(this)!=0`. Последний helper при state+224=6 вызывает `100fa480` на `m_pCine+34c` без собственного NULL guard, затем требует own `virtualbc()!=0`. В cinematic helper необходимы ненулевое поле cinematic+3bc, разрешаемый cinematic target EHANDLE+18c и target.pev.deadflag=0. Это не проверка target самого follower.

`10104f10(this)` определяет текущую ветвь следования: serial-valid target EHANDLE+18c и его `virtuald0()!=0`. Helper после валидного edict получает private pointer без отдельного NULL guard. При отсутствии следования useType=0 ничего не делает. useType=2 проходит дополнительные gates: `10102320(this)==0` и не `(pev.spawnflags&100 && this+17c==0)`. Любой другой ненулевой useType, в том числе отрицательный, минует эти два gates. `10102320` разрешает EHANDLE this+e4, передаёт его вместе с this+17c в `10119060` и возвращает полный EAX=1 ровно при нулевом результате master predicate; никакой новой интерпретации самого master здесь не добавляется.

В разрешённой ветви начала сначала вызывается `10105180(this,entityB,1)`: ранее разобранный обход группы с совпадающим m_hTargetEnt, который после signed лимита вызывает candidate.virtual240(1,1). Лишь ПОСЛЕ этого проверяется own memory+2ec mask1. Если она установлена, engine AlertMessage получает severity=2 и literal `I'm not following you, you evil person!\n`; следование не начинается, хотя предыдущий обход уже мог изменить других NPC. Иначе вызывается `10105920(this,entityB,useType==2)`, затем own flags+368 OR=8. Результат helper не проверяется.

При уже существующем следовании useType=1 ничего не делает. useType=2 использует те же lock/spawnflag gates; все остальные значения проходят к own `virtual240(1,useType==2)`. Следовательно type0 вызывает `(1,0)`, type2 `(1,1)`, прочие кроме1 также `(1,0)`. Собственные изменения target или остановки движения зависят от callback и не приписываются этому body.

Отказ по lock/spawnflag в обеих ветвях вызывает own `virtual248()` без stack arguments; затем заново читает текущее время и пишет float32 `this+3c0=now+3.0`. Это единственная локальная запись use deadline; ранние отказы по NULL, virtual predicates, type0/1 или memory не назначают эту паузу. Порядок callback→time read сохранён.

## 10105920 — Follower_BeginFollowTargetAndOptionalSpeech

ABI: ECX=this, `(targetPrivate, speakFlag)` на стеке, `RET 8`; осмысленный bool return не формируется. При ненулевом `m_pCine+34c` сначала вызывается `100fa4b0` на cinematic object. Supporting body отменяет одиночную cinematic либо одноимённую targetname-группу через `100fba10`; подробности cleanup и callbacks остаются в существующих cinematic/events контрактах. После вызова this и аргумент не перепроверяются на уничтожение.

Затем `10017780(&this.m_hEnemy+184)` проверяет serial-valid edict. При ненулевом результате `m_IdealMonsterState+228=3`; валидность private data врага отдельно не проверяется. При отсутствии врага старое ideal state сохраняется. Setter `10017740(&this.m_hTargetEnt+18c,targetPrivate)` записывает target EHANDLE, включая очистку при NULL. Собственного player/alive guard здесь нет: это ответственность caller или дальнейшего virtual поведения.

Если speakFlag!=0, сохраняется текущий vtable pointer, вызывается RandomFloat(2.8,3.2), результат округляется в float32, затем `virtual1a0(this+384,duration,1.0,2.0)`. ПОСЛЕ callback копируются текущие два DWORD target+18c/+190 в речь EHANDLE+3e0/+3e4. Это не копия первоначального target аргумента: callback мог изменить target. При speakFlag=0 речи и копирования нет, прежний адресат+3e0 остаётся.

В конце всегда `conditions+180 &= ~10000000h` и `1000aad0(this)` очищает taskStatus+22c, schedule pointer+230 и task index+234. Helper не ставит greeting bit8: это делает вызывающий FollowerUse после возврата. Скорость, маршрут, velocity и непосредственно анимация здесь не задаются.

## 10104110 — Follower_TryFirstGreeting

ABI: ECX=this, без stack arguments, `RET`, полный EAX=0/1. Требуются own `virtual244()!=0`, отсутствующий mask8 в this+368, ненулевой `10104670(this,1)`, затем последовательно own `virtual154(candidate)!=0` и own `virtual114(candidate)!=0`. Последние два predicate получают именно candidate pointer; их конкретные implementations здесь не доказаны. Любой отказ даёт EAX=0 без локальной записи greeting mask.

После gates setter записывает candidate в EHANDLE this+3e0. Native сохраняет own vtable перед RNG. При `pev.spawnflags&100` выбирается payload this+39c, иначе this+398; в обоих случаях RandomFloat(3.0,3.5) и `virtual1a0(payload,duration,1.0,2.0)`. После callback this+368 OR=8 и EAX=1, независимо от результата речевого callback. Не пишет target+18c и не увеличивает счётчик+36c. Адресат закреплён до речи, в отличие от `10104540`.

## 101041f0 — Follower_TryHealthOrIdleSpeech

ABI: ECX=this, без stack arguments, `RET`, полный EAX=0/1. Нулевой own `virtual244()` немедленно возвращается как EAX=0. При снятом `pev.spawnflags&100` сохраняются player payload+37c и group payload+378, duration=RandomFloat(2.8,3.2); при установленном — соответственно +3a0,+3a4 и RandomFloat(4.8,5.2). Duration единожды округляется в float32 и используется далее во всех ветвях. Затем всегда вызывается `10104d40`: RandomLong(0,3)+DWORD this+370; его EAX не используется. Этот лишний на первый взгляд вызов всё же расходует RNG.

При разрешаемом m_hTargetEnt+18c, target.virtuald0()!=0 и target.virtualbc()!=0 два текущих DWORD target EHANDLE копируются в this+3e0/+3e4. Далее последовательно проверяются одноразовые masks 4,2,1 в this+368. Для ещё не установленного mask вызывается resolver+7a0 дважды без NULL private guard, читаются target health и max_health. Проверки: health<=float32(max_health*0.125) для mask4/payload+3b0; health<=float32(max_health*0.25) для mask2/payload+3ac; health<=float32(max_health*0.5) для mask1/payload+3a8. COMISS threshold,health / JB пропускает ветку при unordered NaN; equality срабатывает. Это последовательность наиболее тяжёлой реакции к менее тяжёлой, не выбор единственного непересекающегося диапазона.

Первая сработавшая health-ветка вызывает own `virtual1a0(payload,duration,1.0,2.0)`, ПОСЛЕ callback ставит соответствующий mask и возвращает EAX=1. При сохраняющемся низком здоровье последующие вызовы могут последовательно израсходовать другие masks. Copy target→speech EHANDLE происходит даже если ни один порог не сработал. Положительность max_health, особые отрицательные значения и finite данные отдельно не проверяются.

Если health-ветки не вернули успех, вызывается `10104670(this,0)`. Для ненулевого кандидата с candidate.virtual9c()==0 выполняется RandomLong(0,99); native signed результат должен быть меньше 75 (все эти три величины десятичные). Тогда own `virtual1a0(groupPayload,duration,1.0,2.0)` вызывается ДО setter speech EHANDLE=candidate. После setter вызывается candidate.virtual24c(this): PUSH исходного this потерян в Ghidra. Затем candidate+3dc получает текущий this+3dc, прочитанный после callback, this+36c увеличивается DWORD INC и EAX=1. Проверки состояния/lifetime после speech callback нет; не следует превращать signed сравнение RNG в более широкий clamp.

При неудаче group-ветки выполняется RandomLong(0,1). Если результат ненулевой, `10104670(this,1)` ищет player. Ненулевой результат сначала записывается setter в speech EHANDLE+3e0, затем вызывается own `virtual1a0(playerPayload,duration,1.0,2.0)`, счётчик+36c увеличивается и EAX=1. Здесь нет дополнительных own virtual154/114 gates из greeting helper.

Финальная неудача вызывает `10105f30(this,0.0)`, затем обнуляет DWORD global10230d78 и возвращает EAX=0. В этом конкретном вызове helper пишет float32 this+3dc=now+3.0. Его общий ABI RET4 и ветвление таковы: ordered argument<=0 даёт now+3.0; положительный или NaN argument идёт в now+argument. Тип/другие consumers global10230d78 и конкретная причина использования паузы здесь не восстанавливаются по одному присваиванию. Ранний отказ virtual244 не делает ни этой паузы, ни global reset.

## 10104540 — Follower_SpecialSpeechThenSelectPlayer

ABI: ECX=this, без stack arguments, `RET`, полный EAX=0/1. При own virtual244()==0 возвращает этот ноль немедленно. Иначе сохраняет vtable, получает RandomFloat(5.0,7.5), округляет ST0 до float32 и вызывает own `virtual1a0(this+380,duration,1.0,2.0)`.

Лишь ПОСЛЕ речевого callback выполняется `10104670(this,1)` и setter его результата в EHANDLE this+3e0. NULL результата очищает handle; он не отменяет уже отправленную реплику. EAX=1 в любом случае после прохождения первого gate, включая отсутствие player. Нет изменения greeting mask+368, счётчика+36c или target+18c. Исходный смысл payload+380 за пределами этой функции не установлен.

## 10105eb0 — Follower_TakeDamageNotifyNearestThenBase

ABI: ECX=this, четыре stack arguments `(inflictorEntvars,attackerEntvars,float damage,damageBits)`, `RET 10h`. Native возвращает полный EAX от `1008bc50` без изменений; Ghidra void-прототип не описывает этот контракт. Damage float переносится MOVSS без пересчёта, остальные три DWORD передаются непосредственно.

Предварительная реакция требует own virtualbc()!=0, ненулевой attacker, own state+224!=5 и маску 0x8 (бит 3) в младшем байте attacker.pev.flags+1a8. Затем `10104670(this,0)` должен дать кандидата, и candidate.virtualbc() должен быть ненулевым. Только тогда `1000aa50(candidate,10219e54)` меняет schedule КАНДИДАТА: ECX перед call берётся из candidate, не this.

Native descriptor `10219e54` содержит task pointer `10219e4c`, decimal count=1, interrupt mask=30300h, sound mask=0, name pointer `101df8b8` со строкой `Idle Stop Shooting`. Единственная пара task=65h, argument float0.0. Supporting `1000aa50` пишет schedule+230, очищает index+234, taskStatus+22c, conditions+180 и поле+320. Для этих конкретных масок interrupt&20000h ненулевой при sound mask=0, поэтому helper после назначения schedule вызывает AlertMessage(2) с предупреждением о sound interrupt без sound mask; предупреждение не откатывает запись. В поддерживающем task dispatcher `101059e0` case65 вызывает speech payload+394 с RandomFloat(2.8,3.2) и дополнительными float(1.0,0.8); это отдельный callback path, не один из primary speech bodies с последним float2.0. Название расписания не доказывает, какой конкретный actor его реально исполняет.

Независимо от всех notification gates затем всегда вызывается generic `1008bc50(this,inflictor,attacker,damage,damageBits)` и передаётся его EAX. Эта функция не блокирует damage при собственном dead state или NULL attacker, не меняет attacker на кандидата и не пересчитывает сумму. Полный generic damage уже разобран в `analysis/server-monster-damage`; concrete override reachability для `10105eb0` остаётся открытой.

## Входящие связи и следующие ограниченные вопросы

Native `10105410` в case5ch вызывает greeting10104110, а затем при RandomLong(0,this+36c*decimal20)==0 idle101041f0. Native `101059e0` cases62h/63h/66h прямо вызывают соответственно idle101041f0/greeting10104110/special10104540. Сохранены полные C/ASM этих dispatchers как support; новые REVIEW им не присваиваются. Прямой start-follow helper10105920 вызывается из экспортированного FollowerUse. Для damage-wrapper конкретная vtable ещё не найдена. Эти связи показывают локальное использование кода, но не заменяют доказательство spawned runtime класса и установки callbacks.

Следующий полезный шаг: конкретные владельцы virtual1a0/240/244/248/24c/250, writers полей payload+378..3b0, готовность речи и lifecycle глобального10230d78, а также полные contracts task dispatchers10105410/101059e0. Названия классов по classname table и типичные имена SDK не подменяют отсутствующий numeric vtable link. Support-функции и найденные dependencies не считаются закрытым новым backlog этого пакета.

## Продолжение разбора: pass17

Актуальный статус pass17: helpers10103fe0/10104d40/10104d60/10104de0/10104e20/10104ec0/10104f10/10105f30 — [follower gates](../server-follower-gates/contract.md); полные task dispatchers10105410/101059e0 — [follower tasks](../server-follower-tasks/contract.md); schedule selection, KeyValue, stop following и speech10104a10/10104f70/10105dc0/10105210/10105280 — [speech policy](../server-follower-speech-policy/contract.md). Эти15 тел больше не pending. Получение конкретных vtable bindings, writers payload/overrides и runtime reachability остаётся отдельным; совпадение смыслов не доказывает binding virtual1a0/240/244 и других.

## Продолжение разбора: pass18

Актуальное продолжение pass18: [initialization](../server-follower-initialization/contract.md) закрывает10105f70/101058c0:19 payload strings, prefix, independent spawnflag checks и group dispatch. [Schedule/IO](../server-follower-schedule-io/contract.md) закрывает101053d0/101057f0/10105850/10105880/10105890,11 native schedule descriptors и11 TALK save fields. [Runtime helpers](../server-follower-runtime-helpers/contract.md) закрывает10104020/10104f50/10106430/101064f0. Эти11 primary больше не pending. Таблица10219c18 подтверждает3d4=m_deathNoticed,3d0=m_iszSpeakAs,3c0=m_useTime,3dc=m_flStopTalkTime,3e0=m_hTalkTarget. Concrete vtable bindings, runtime reachability и engine string lifetime по-прежнему открыты; см. точные границы новых контрактов.
