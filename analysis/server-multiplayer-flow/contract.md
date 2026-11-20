# Native multiplayer frame/spawn flow

Только статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Бинарник не загружался и игра не запускалась. Семь новых primary entries; остальные C/ASM только support. Адреса и смещения с `0x`/`h` — hexadecimal; число секунд, counts и ID в тексте — decimal, если не оговорено. Float сравнения ниже описывают обычное продолжающееся исполнение с masked floating-point exceptions; signaling exception handler не исследован.

## Навигация и границы

- `100c9ae0` — конкретный `CHalfLifeMultiplay::Think` (RTTI/vtable `101d608c+04`), порядок глобальных стадий и их local guards.
- `100c9210` — concrete `PlayerSpawn` slot `+50`, callback, а не вся процедура CBasePlayer::Spawn.
- `100e4c30`/`100e4d60` — producer статуса `DevDonator`; числовой role и wire tag не тождественны.
- `100deff0` — совместно используемый frozen/control helper, с условной отменой fall timer.
- `100b0210` — завершение голосования, а не полный command dispatcher.
- `1011a8a0` — local formatting ABI для countdown.

Связанный предыдущий этап: [rules bootstrap](../server-rules-bootstrap/contract.md). Mapcycle `100c6fd0` — [соседний пакет](../server-mapcycle/contract.md); его тела здесь не reviewed. Music producer и native engine wire рассмотрены в [music server state](../graphics/music-server-state-contract.md) и [engine wire](../graphics/engine-wire-contract.md). Эти ссылки дают отдельные контракты, не заменяют исследования callbacks из этого тела.

Полный `evidence.json` хранит original hashes, все bounded native ASM ranges и байты каждой строки, RTTI/vtables, native ENTVARS1021aae0/PLAYER10217fe8 descriptors, cvars, строковые литералы и import descriptor SteamFriends. `capture.py` повторно снимает только эти данные; `verify.py` сверяет их с исходным PE и проверяет ссылки карточек. Raw global IDs сообщений — адреса storage, реальные message IDs выдаёт RegUserMsg во время работы.

## Поля и wire

ENTVARS native descriptors: `+248 iuser1`, `+254 iuser4`, `+264 fuser4`, `+268 vuser1` (значит `+26c vuser1.y`). Это важно: выбор Book Simon trigger пишет **iuser1**, death-scene check читает **iuser4**, lobby exclusion читает **fuser4**. PLAYER: `+2500 m_iHideHUD`, `+1ecc m_fFallingTime`, `+1ed0 m_bShouldFallFreeze`, `+5ac pDeathScene`. Для `+c4`, `+4e8/+4ec/+4f0`, `+1f24/+1f28`, `+3c8/+3cc` имена не выдуманы: локальные действия доказаны, полная роль producer остаётся открытой.

| Сообщение / storage | Registration | Payload этого пакета |
|---|---:|---|
| DevDonator /102266c8 |2| ALL: BYTE entityIndex, BYTE tag0/1/2 |
| Lobby /102266b0 |3| ALL: BYTE index, BYTE ready, BYTE0; exit=0,0,1 |
| SimonMode /102266d8 |1| ONE spawning player: BYTE bool(10222f20) |
| GreyFade /1022667c |2| ONE spawning player:0,0 |
| TimerPlus /102266a8 |3| ALL:0,0,1 before explicit monster create |
| SayText /10226518 |-1| ONE each player: own index BYTE, STRING |
| Chapter /10226658 |-1| ONE: STRING raw death label, WriteString(NULL) |
| PlayMP3 /10226544 |-1| ONE: BYTE1,BYTE1,COORD0,STRING game_over.mp3 |

Countdown также передаёт `10119810(NULL,text,5,1)`; support helper отправляет global10226568 с MSG_ALL, BYTE5 и STRINGtext. Fade helper получает параметры в секундах, RGB floats, alpha и flags; native construction отправляет threeSHORT+fourBYTE и проверяет target virtual+d4. Его detailed conversion helper101166d0 остаётся отдельной зависимостью, а не новым primary здесь. `WriteString(NULL)` не переименован в безусловный zero byte: original engine берёт byte из zero-fill BSS02079bcc, runtime неизменность этой ячейки отдельно не доказана.

Engine table copy144 DWORD подтверждён100b4aa0. Header matching учитывает пробел перед `)` в `pfnCheckVisibility )`; наивный regex без этого сдвигает поздние имена. В данном пакете slot143 правильно GetPlayerAuthId, а не SequenceGet. Имена engine callbacks опираются на positional ABI/header и native call shape; реализация engine GetPlayerAuthId/RandomLong и внешних Steam callbacks не разобрана здесь.

## Локальные контракты

### 0x100c9ae0 — CHalfLifeMultiplay_Think

Обновляет статусы игроков, лобби и голосование; запускает отложенную встречу с Book Simon и переход после intermission.

Thiscall ECX=rules, RET без stack arguments; семантического return value нет. RTTI CHalfLifeMultiplay и vtable101d608c+04 указывают на этот вход. Полный диапазон100c9ae0..100ca493 проверен. Порядок этапов: DevDonator → lobby →100b0210 vote → voice100014e0 → pending Book Simon → intermission. Нет раннего выхода, который при активном лобби исключал бы последующие этапы.

При ordered now > float rules+a0 записывает float32(now+2.0), затем проходит client indices1..maxClients включительно через10119680. Для валидного player вызывает100e4c30; true даёт pev.vuser1.y(+26c)=1.0; иначе100e4d60 даёт2.0 или0.0. На каждого отправляет MSG_ALL(2), DevDonator(global102266c8,size2): BYTE IndexOfEdict, BYTE CVTTSS2SI(vuser1.y). Native PLAYER role+c4, возвращаемые predicates и wire tag — разные величины; tag не копируется непосредственно из+c4. NaN в таймерном сравнении не запускает этап.

При BYTE rules+a8!=0 снова обходит всех валидных клиентов. Если ordered now > rules+a4, отправляет MSG_ALL Lobby(global102266b0,size3): BYTE IndexOfEdict, BYTE bool(rules+a9+IndexOfEdict), BYTE0; затем внутри этого же цикла ставит+a4=now+1.0. Это один общий deadline: при неизменном времени обычно обновляется только первый найденный клиент; per-player таймеров здесь нет. Перед этим read ready table нет отдельного ограничения индекса32. Для freeze/готовности ниже требуется ordered pev.fuser4(+264)==0 и loop index<=32. Каждый такой player получает m_iHideHUD(+2500)|=9, pev.flags(+1a8)|=80h,100deff0(0),10119c00(player,RGB0,0.0,1.0,255,5). local anyEligible становится1; local allReady изначально1 и становится0, если rules+a9+loopIndex равен0. Остальные игроки не участвуют в allReady.

Принудительный старт требует ordered rules+d8>0 и now>d8. Он не зависит от anyEligible/allReady: clear lobby+a8, MSG_ALL Lobby(0,0,1), затем обход всех валидных игроков с ordered fuser4==0 (без ограничения32),100deff0(1),fade(0.75,1,RGB0,255,flags0), hideHUD&=~9, flags&=~80h; лишь затем перечисляет classname cof_lobby_start через10118460 и вызывает virtual+e8 с ECX=entity, stack(NULL,NULL,USE_TYPE3,float1). Iterator продолжается от прежнего entity; сохранность после callback — внешний контракт.

Если принудительный deadline не истёк, нужны anyEligible && allReady. При этом inactive countdown устанавливает DWORD+d0=3, BYTE+d4=1, float+cc=now; в том же кадре tick не печатает. Уже активный countdown с signed count>=0 и ordered now>cc форматирует raw101d6254 (`43f2e0f0f2f3e5ec20f7e5f0e5e720256920f1e5ea2e00`, cp1251 display `Cтартуем через %i сек.`), вызывает10119810(NULL,text,5,1), уменьшает count, ставит+cc=now+1.0 и101182b0(worldedict,sharedVector,"common/wpn_hudoff.wav",1,0,0,100). Важное восстановление stack: 5,1 заранее push до format, но после удаления двух format arguments остаются аргументами10119810; PEntityOfEntOffset(0) принимает только один аргумент, остальные принадлежат следующему audio wrapper. После callback перечитывает+d4 и при0 пропускает завершение.

При count<0 countdown-ветка очищает+a8, сначала вызывает все cof_lobby_start Use(NULL,NULL,3,1), затем Lobby(0,0,1), затем unfreeze/fade/clear HUD и NOTARGET тем же предикатом fuser4==0. Порядок противоположен части forced path; normal ticks показывают3,2,1,0, последний сразу уменьшает до−1 и завершает в этом кадре. Если готовых нет/не все готовы, reset происходит только при+d4!=0: clear+d4, count=3, cc=now. Ни successful path не обнуляет+d4/count/deadline отдельно, ни ready array здесь не чистится.

После лобби100b0210 получает тот же ECX=rules. Voice100014e0 получает ECX=global10223788 и один double аргумент: float globals.frametime(+4) явно расширен до double. Это не передача float и не rules.this в voice. Полный voice update уже имеет отдельный REVIEW; его дальнейшие effects здесь не переименованы.

Book Simon выполняется только если BYTE102231a2!=0, ordered now>float102231a4 и BYTE10226477==0. Если последний gate закрыт, pending сохраняется. При проходе сразу clear a2 и deadline a4, затем при DWORD10222f20!=0 ничего не создаёт и не повторяет попытку. Иначе ищет trigger_booksimon; при наличии, RandomLong(0,1)==1 и DWORD10222f14==0 выбирает trigger path; иначе spawnpoint path. RandomLong вызывается лишь после найденного trigger (short-circuit).

Оба пути берут PEntityOfEntIndex(1), проверяют signed maxEntities>1 и линейно идут maxEntities−1 записей с stride32ch: indices1..maxEntities−1, не world0. Кандидат требует edict.free==0, edict.private(+7c)!=NULL и точное classname из private.pev+0/stringbase. Trigger path ищет trigger_booksimon, другой info_simon_spawnpoint. Для каждого совпадения count сначала увеличивается; pointer сохраняется в [ebp−84h+4*count] только если signed count<=30. После scan RandomLong(1,count) использует полный count без clamp. При count>30 возможен read неинициализированного/чужого stack slot (31→ebp−8,32→cookie ebp−4); это доказанная граница локального тела, не утверждение о частоте в штатных картах. No candidates → продолжение без spawn.

Trigger path без NULL guard выбранного pointer записывает entity.pev.iuser1(+248)=1; это НЕ iuser4(+254). Spawnpoint path проверяет selected!=NULL; при DWORD10222f14!=0 перед созданием посылает MSG_ALL TimerPlus(0,0,1), затем10017950("monster_booksimon",&selected.pev.origin,+angles,ownerNULL). Результат Create не проверяется, pending уже очищен; создание/ошибки самого monster и обработчик trigger вне этого тела.

Intermission требует DWORD10222f04!=0. CVarGetFloat("mp_chattime") ST0 сначала округляется в float32, CVTTSS2SI; int<1 → CVarSetString("1"), int>120 → форматированная"120". Затем независимо берётся float storage102148b0 и складывается float32 со start10223198, результат rules+dc. Когда ordered now>dc и (DWORD rules+e0!=0 либо ordered now>start+120.0), вызывает virtual+f8 (MP target100c6fd0). Поэтому исходный значение ограничивается по integer, дробное120.9 не clamp; runtime setter может влиять на storage. Native NaN comparisons с JBE не проходят. Mapcycle разобран отдельным пакетом; ни перезапуск таймеров после callback, ни новый spawn loop здесь не подразумеваются.

### 0x100c9210 — CHalfLifeMultiplay_PlayerSpawn

Синхронизирует режим, музыку и позднее подключение игрока; выдаёт map equipment и ставит случайный Book Simon timer.

Native RET4, единственный stack argument player; входной rules ECX в теле не читается. Vtable101d608c+50. Сначала ClientCommand(player.edict,"donatorcheck\n"), затем pev.weapons(+16c)|=80000000h. Не восстанавливает здоровье, origin, movement или инвентарь сам по себе: это callback в большем player Spawn lifecycle. NULL player/pev guards отсутствуют.

Перечисляет все cof_survivalmode через10118460, boolean existence. Если BYTE102231a1==0 && BYTE10222f24==0, ставит a1=1 ещё до random. При survival всегда ставит pending a2=1 и deadline a4=float32(now+RandomLong(60,180)); иначе сначала RandomLong(1,5), только результат1 ставит a2=1 и deadline now+RandomLong(20,240). Неудачный random не очищает прежний a2/a4; следующий spawn не повторит попытку до внешнего reset a1. MP constructor100c5180 очищает a1/a2/a4, конкретный смысл global10222f24 здесь оставлен адресным gate.

Если DWORD10222f14!=0 и global rules.virtual+20()!=0, MSG_ONE(1) SimonMode(global102266d8,size1) адресуется spawning player с BYTE bool(DWORD10222f20). ASM обеих ветвей подтверждает все четыре MessageBegin arguments, несмотря на отсутствующие args одной C-ветви. Concrete MP predicate100c90b0 возвращает1, SP100fc430 возвращает0.

Когда10222f20==0, CVarGetString("sv_coop_music"); если nonNULL и strlen>1, QueueMusic100ea5c0 получает ECX=player, raw string pointer−globals.stringbase (без AllocString/copy здесь), loopDWORD10222f18, float10222f1c. Иначе музыка не меняется. При10222f20!=0 QueueMusic получает literal"fucked.mp3"−stringbase,loop1,volume1.0, затем MSG_ONE GreyFade(global1022667c,size2) BYTE0,BYTE0. QueueMusic сохраняет поля+2310/+231c/+2320 и pendingDWORD+2314=1; сам не отправляет PlayMP3 немедленно.

Если global10222e10==NULL либо вызов10029090(ECX=global10222e10, stack player) вернул AL0, перечисляет все game_player_equip и вызывает каждый virtual+e4(player) с ECX=equipment. Это Touch-slot по общей entity ABI, не Use и не аргумент rules. Проверяется только AL результата persistence, не весь EAX. Внутренние правила persistence и equipment callbacks остаются зависимостями, не считаются раскрытыми этим REVIEW.

Затем clients1..maxClients: для каждого валидного q с BYTE q+4e8!=0 копирует q→player DWORD+1f24, BYTE+1f28, BYTE+4e8, DWORD+4ec,+4f0 и устанавливает local found. Нет исключения q==player, последняя подходящая запись выигрывает; source/target raw fields, которых нет в native save table, не переименованы догадкой. Независимо, если q.pDeathScene(+5ac)!=NULL и scene.pev.iuser4(+254)!=1, пишет player BYTE+3c8=1,float+3cc=now+1.0. Нет serial validation raw pDeathScene pointer и нет clear этих полей при отсутствии scene.

При found ставит player.m_iHideHUD(+2500)|=9, pev.flags|=80h,100deff0(0),fade RGB0,duration0,hold1,alpha255,flags5. Затем MSG_ONE Chapter(global10226658,-1): WriteString(raw101ca428=`c2fb20efeee3e8e1ebe800`, cp1251 `Вы погибли`), WriteString(NULL). Второй аргумент действительноNULL в ASM, не pointer на пустую строку; native engine NULL-string branch описана отдельно и читает BSS byte. Далее MSG_ONE PlayMP3(global10226544,-1): BYTE1,BYTE1,COORD float0,STRING"game_over.mp3". Этот прямой message не отменяет ранее поставленный QueueMusic pending внутри данного тела. Последствия очереди/прямого send и late-join UI зависят от следующих player/client updates.

### 0x100e4c30 — CBasePlayer_IsDeveloperRoleOrAuthId

Проверяет role4 или один из четырёх фиксированных engine auth IDs.

Thiscall ECX=player, RET, полный EAX0/1. Если DWORD player+c4==4, сразуEAX1 без engine lookup. Иначе до четырёх раз вызывает engine GetPlayerAuthId(slot143,global10223184) с player.pev.edict; результаты не кешируются. Каждый сравнивает байт-в-байт, case-sensitive и доNUL с literal по порядку101dcb74,101dcb88,101dcb9c,101dcbb0: STEAM_0:0:3663311; STEAM_0:0:4453997; STEAM_0:1:4458650; STEAM_0:1:2483364. Совпадение сразу1, все несовпадения0.

Нет NULL guard результата GetPlayerAuthId, bounds для строк или fallback SteamFriends. Поле+c4 не изменяет, Steam ID не копирует/не освобождает. Локальное имя developer-classification выведено из downstream DevDonator tag1; полная семантика числовых role и их producer/network validation здесь не раскрыта. Четыре literal — данные shipped DLL, не наблюдения runtime пользователей. Native144-slot engine table copy и исправленный header parser подтверждают имя callback.

### 0x100e4d60 — CBasePlayer_IsDonatorRoleOrSteamGroup

Для MP проверяет role; для SP/отсутствующих rules ищет фиксированный Steam group ID через внешние virtual callbacks.

Thiscall ECX=player, RET, полный EAX0/1. При global rules!=NULL и virtual+20()!=0 возвращает1 тогда и только тогда, когда signed/unsigned DWORD player+c4 не равен0,3,4. Никаких диапазонных guards: прочие значения, включая отрицательные, принимаются. При rulesNULL или predicate0 вместо этого использует SteamFriends импорт по IAT101a11ac (raw PE descriptor steam_api.dll!SteamFriends сохранён).

Сначала SteamFriends() проверяется наNULL. Затем снова вызывает SteamFriends и virtual+2c(), сохраняет первый count; ещё раз SteamFriends и+2c(), второй count должен быть signed>0, затем первый count тоже signed>0. Loop index0..firstCount−1 каждый раз заново вызывает SteamFriends и virtual+30(скрытый указатель на local8bytes, index). Caller использует записанные дваDWORD, не EAX результата: (highDWORD &00f00000h)==00700000h и lowDWORD==0029d6cah →EAX1. Все остальные поля highDWORD игнорируются; это не полное сравнение64-bit ID.

Нет повторногоNULL guard при последующих SteamFriends calls; count меняется внешним backend, но loop bound сохраняет первый count. Literal mask и lowID полностью доказаны; названия GetClanCount/GetClanByIndex совместимы с этим ABI, однако конкретная SteamFriends interface version и внешняя реализация не сняты, поэтому доказан callback-slot contract, а не полнота Steam membership semantics. Downstream Think использует результат только после false developer predicate и пишет DevDonator tag2.

### 0x100deff0 — CBasePlayer_EnableControl

Включает/выключает frozen-флаг игрока и отменяет активный fall-freeze timer.

Thiscall ECX=player, stack int enabled, RET4; не нормализует EAX как результат. При enabled==0 ставит pev.flags(+1a8)|=1000h, затем копирует shared vector10222f34..3c в pev.velocity(+20..28). Этот global лежит в PE virtual zero-fill, начальное0 не является доказательством неизменности во время игры. При enabled!=0 только снимает1000h и не восстанавливает прошлую скорость. Имена flags FL_FROZEN и полеvelocity согласованы с native ENTVARS/ABI; не меняет buttons, maxspeed, movetype, solidity или другие freeze sources.

После обеих ветвей, только если BYTE player+1ed0!=0, очищает этотBYTE и DWORD+1ecc. Native PLAYER descriptors называют их m_bShouldFallFreeze(type12) и m_fFallingTime(type15). Если BYTE уже0, deadline остаётся как был. Функция не различает, кто установил frozen; лобби и late-join callers вызывают её с0/1, а fall-freeze state может принадлежать другой системе. Нет NULL guards и сетевых сообщений.

### 0x100b0210 — CGameRules_UpdateVoteKick

Завершает просроченное голосование, находит цель по auth ID, уведомляет игроков и ставит kick в очередь команд.

Thiscall ECX=rules (Think передаёт тот жеthis), RET; result не нормализован. Делает работу только если BYTE+8!=0, ordered now>float+c и pointer+4!=NULL. Равенство/NaN/NULL оставляют всё состояние активным; deadline не очищается на этих ранних выходах. При проходе печатает diagnostic и сканирует clients1..maxClients через10119680, сравнивая GetPlayerAuthId(edict) с borrowed pointer rules+4. Последнее совпадение выигрывает, обновляет rules+18=current netname pointer; отсутствие совпадений/clients пропускает messages и sound, но всё равно очищает vote state.

Подтверждение producer100aff70: rules+4 получает результат engine GetPlayerAuthId без копирования, +8active,+c=sv_votekick_time+now, +10=initial yes1, +14=no0, +20..9f —32 pointers; +20 получает authID инициатора. В updater нет повторного подсчёта игроков/голосов, quorum, процента, исключения spectate/dead или защиты role. Решение — signed DWORD+10 > DWORD+14, равенство означаетfailure. Полная обработка дальнейших yes/no commands вне этого пакета.

При найденной цели и yes>no каждый валидный получатель получает MSG_ONE SayText(global10226518,-1): BYTE IndexOfEdict самого получателя (НЕ цели), STRING sprintf_s(buffer128," Vote kick: Kicking %s",current target.netname). Затем101182b0(worldedict,sharedVector,"common/votekick/votekick_succeeded.wav",1,0,0,100), format1001f160(second stackbuffer128,"kick \"%s\"\n",target.netname), ServerCommand(buffer). Engine ServerExecute не вызывается. Native format второй строки использует неограниченный helper, имя не экранируется здесь; максимальная длина engine netname и командный parser — внешние ограничения. Ни функция, ни этот статический аудит не выполняют kick.

При yes<=no каждый валидный получатель получает SayText со своимBYTEindex и literal" Vote kick failed. Yes votes must exceed no votes."; затем аналогичный ambient wrapper с common/votekick/votekick_failed.wav. Engine PEntityOfEntOffset(0) получает только0; остальные предварительно поставленные arguments принадлежат101182b0. Дополнительный argument уGetPlayerAuthId в C диагностической ветви тоже артефакт: saved rules+4 заранее push для следующего AlertMessage(format,name,currentID,targetID), actual lookup получает одинedict.

Общий cleanup: BYTE+8=0; DWORD+4,+18,+14,+10=0; восемьMOVUPS очищают128bytes+20..9f. +c deadline, +1c и vptr не изменяет. Не free borrowed auth/netname pointers. Cookie проверяется на выходе. Нельзя считать ServerCommand подтверждением disconnect: выполнение очереди и matching by quoted netname находятся в engine; совпадениеauth было только доqueue.

### 0x1011a8a0 — UTIL_VarArgs_StaticFormat

Форматирует varargs в общий static buffer и всегда возвращает его адрес.

Cdecl(format,...), RET, полный EAX=10231088. Передаёт va_list=&stack argument2, localeNULL, format, buffer_countFFFFFFFFh, destination10231088 в backend1015cf61. Options получает через10001790: дваDWORD, lowDWORD OR1; имя backend __stdio_common_vsprintf присутствует в сохранённом C, полная CRT реализация здесь не восстановлена. Игнорирует status backend и возвращает один и тот жеpointer.

Нет проверкиNULL format, собственной длины output, очистки buffer, allocation/free или per-thread storage. Capacity actual global buffer не доказана этим телом, FFFFFFFFh не означает реальный размерallocation. Следующий вызов может перезаписать прежний результат; caller Think потребляетpointer немедленно через10119810. Предварительно pushed5,1 в Think не отдельные параметры API formatter: формат содержит только%i и использует count; этиstackwords остаются для следующего helper после ADD ESP,8.

## Что остаётся вне закрытого локального контракта

game_player_equip Touch/Use/KeyValue и GiveNamedItem теперь имеют локальные контракты в [player-equipment](../server-player-equipment/contract.md). Остаются полные CBasePlayer Spawn/persistence10029090, setup/commands ready table и role+c4, death-scene/late-join fields, global10226477/10222f24 producers, trigger_booksimon и monster_booksimon downstream, external Steam interface implementation/version, engine callback RNG/auth/command execution, CRT formatter capacity/error handler. Часть этих зависимостей имеет самостоятельные REVIEW в каталоге; этот пакет не объявляет их автоматически закрытыми. Возможный unsafe stack selection при>30 кандидатах и borrowed string lifetimes описаны как статические свойства; runtime reproduction не проводилась.
