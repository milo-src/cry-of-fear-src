# Инициализация follower speech и обход групп

Статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Primary только `10105f70` и `101058c0`; исходный snapshot pass18 подтверждает отсутствие REVIEW. Полные сохранённые C и native тела сопоставлены с байтами PE. Остальные тела — support без новых карточек. Адреса и смещения шестнадцатеричные; десятичные количества и индексы отмечены явно. Игра и DLL не исполнялись.

## Общий контракт и границы

Связь с CTalkMonster установлена экспортом FollowerUse ordinal135→101048c0 и связанными speech/follower callers, подробно разобранными в server-follower-behavior, server-monster-groups, server-follower-gates и server-follower-tasks. Точный LE32 поиск адресов обоих primary в raw .rdata/.data не нашёл указателей; exact RTTI `.?AVCTalkMonster@@` в raw PE также не найдено. Это не доказывает отсутствие вызовов в игре. Concrete vtable/factory и runtime-достижимость initializer, mapping virtual250 и callback virtual1a8 здесь не установлены; имена primary описательные, не восстановленные native symbols.

Engine API база10222f48 копируется initializer100b4aa0; слот67 по проверенному eiface.h — pfnAllocString, адрес10223054. Native код получает из callback полный EAX и прибавляет DWORD [globals+98], соответствующий pStringBase в 32-bit header. Поэтому поля374..3bc в этой цепочке содержат адреса строк, тогда как SpeakAs+3d0 и overrides3c4/3c8/3cc содержат offsets string_t. Владение памятью строк остаётся у engine; собственное тело не выделяет heap и не освобождает предыдущие строки. Внутренности engine interning/lifetime и поведение AllocString при ошибке не раскрыты.

Нативная таблица ENTVARS1021aae0 именует pev+1a4 как spawnflags. Смысл бита0x100 за пределами доказанного выбора suffix здесь не переименовывается в SDK-флаг. MONSTER target EHANDLE18c и enemy184 не смешиваются с отдельным speech EHANDLE3e0. Дополнительно перечитанная native таблица TALK10219c18 (11 descriptors) именует3d0 m_iszSpeakAs (type1),3d4 m_deathNoticed (type10),3c0 m_useTime (type15),3dc m_flStopTalkTime (type15),3e0 m_hTalkTarget (type4),3c4/3c8/3cc m_iszUse/m_iszUnUse/m_iszDecline (type1). Это native names, а не предположение по соседству; полный save/restore-путь разбирается отдельно в server-follower-schedule-io.

## 10105f70 — InitializeFollowerSpeechPrefixSlots

ABI: ECX=this, явных stack аргументов нет, RET без immediate. Собственное тело не формирует документированного boolean/status return; incidental EAX не следует использовать как критерий успешной инициализации. Prologue выделяет44h байта, cookie хранится по EBP-4; временная строка занимает ровно64 десятичных байта EBP-44..EBP-5. Epilogue вызывает1013dbb3 с cookie XOR EBP. Наличие cookie не добавляет проверки длины при копировании.

Сначала безусловно записывается DWORD0 в global10230d78. Затем единожды читается DWORD this+3d0: если0, весь блок построения строк пропускается. При обеих ветвях в конце this+370=100 (десятичное, DWORD0x64) и this+3d4 m_deathNoticed=0. При SpeakAs0 все19 прежних payload указателей сохраняются; нет заполнения defaults, очистки или вызовов AllocString. Действующие таймеры3c0/3dc, speech handle3e0, target/enemy, counters36c и overrides3c4/3c8/3cc этим телом не очищаются.

Если this+3d0!=0, источник вычисляется как текущий [globals+98]+offset. Байты копируются до первого NUL включительно без NULL/length guard. Затем вместо завершающего NUL записывается WORD из101df948: underscore и NUL. Один повторный strlen-подобный проход фиксирует позицию suffix в ESI. Последующие19 строк используют один локальный snapshot prefix и эту же позицию; префикс больше не перечитывается из объекта. Ненулевой offset на пустую строку проходит этот блок и создаёт имена вида `_ANSWER`; offset0 ведёт в отдельную skip-ветку. Case folding, trimming, удаление существующего underscore и проверка допустимости prefix отсутствуют.

Далее suffix заменяется на каждом шаге, включая его NUL, callback AllocString получает адрес локального буфера, а результат плюс заново прочитанная engine string base записывается в очередное поле. Результат не проверяется на0: даже0 превращается в текущий pStringBase. Каждый указатель публикуется сразу, до построения следующего, поэтому rollback или атомарного обновления всех slots нет. Тело не проверяет наличие sentence group, sound resource или успешность последующего воспроизведения; оно конструирует имена.

Ниже точный порядок19 вызовов. Каждое значение имеет вид `prefix + "_" + suffix`; колонки clear/set относятся к pev.spawnflags &0x100. Одинаковые колонки не означают чтение флага на этом шаге. Единственные TEST флага находятся101060c1,10106115,1010616b перед полями384/388/38c соответственно; callback предыдущего AllocString может изменить pev/flags, поэтому эти три решения не обязаны использовать одно общее snapshot-значение.

| Порядок (decimal) | Поле this+ | suffix clear | suffix set | Native AllocString CALL |
|---|---|---|---|---|
| 1 | 0x374 | `ANSWER` | `ANSWER` | 0x1010600d |
| 2 | 0x378 | `QUESTION` | `QUESTION` | 0x10106042 |
| 3 | 0x37c | `IDLE` | `IDLE` | 0x10106072 |
| 4 | 0x380 | `STARE` | `STARE` | 0x101060a3 |
| 5 | 0x384 | `OK` | `PFOLLOW` | 0x101060f7 |
| 6 | 0x388 | `WAIT` | `PWAIT` | 0x1010614d |
| 7 | 0x38c | `NOTOK` | `POK` | 0x10106199 |
| 8 | 0x390 | `STOP` | `STOP` | 0x101061c9 |
| 9 | 0x394 | `NOSHOOT` | `NOSHOOT` | 0x101061f5 |
| 10 | 0x398 | `HELLO` | `HELLO` | 0x10106226 |
| 11 | 0x3a8 | `PLHURT1` | `PLHURT1` | 0x10106252 |
| 12 | 0x3ac | `PLHURT2` | `PLHURT2` | 0x1010627e |
| 13 | 0x3b0 | `PLHURT3` | `PLHURT3` | 0x101062aa |
| 14 | 0x39c | `PHELLO` | `PHELLO` | 0x101062e6 |
| 15 | 0x3a0 | `PIDLE` | `PIDLE` | 0x10106317 |
| 16 | 0x3a4 | `PQUESTION` | `PQUESTION` | 0x1010634d |
| 17 | 0x3b4 | `SMELL` | `SMELL` | 0x1010637e |
| 18 | 0x3b8 | `WOUND` | `WOUND` | 0x101063af |
| 19 | 0x3bc | `MORTAL` | `MORTAL` | 0x101063eb |

Текст suffix подтверждён raw literals101df948..101df9ce и immediate MOV-байтами PFOLLOW/POK/NOSHOOT/PLHURT1..3. В частности при установленном0x100 поле38c получает `POK`, а при снятом `NOTOK`; это не исправляется по ожидаемому названию. PLHURT1..3 записываются раньше PHELLO/PIDLE/PQUESTION, несмотря на более высокие адреса полей.

Максимальный suffix здесь PQUESTION длиной9 десятичных байт. Для сохранения всей строки внутри local64 нужны prefixBytes+1+9+1<=64, то есть prefixBytes<=53. Это выведенная граница вместимости, НЕ native validation и НЕ утверждение, что допустимые игровые значения имеют такой лимит. Даже исходное копирование prefix и добавление underscore не ограничены; слишком длинная строка выходит за локальный буфер до проверки cookie. Для корректного NUL-terminated входа длиной<=53 каждый из описанных19 вариантов помещается; Unicode characters не считаются, копируются сырые байты.

Связь producer SpeakAs подтверждена support10104f70: сравнение ключа с raw `SpeakAs` через1000aba0 является точным case-sensitive равенством NUL-строк (EAX0/1). На совпадении AllocString(kv.value)→this+3d0 и kv.handled+0c=1, RET4. Ни producer, ни initializer в этих ветвях не нормализуют prefix и не проверяют его длину. Соседние UseSentence/UnUseSentence/RefusalSentence записывают offsets3c4/3c8/3cc, а не payload slots. Полный остальной KeyValue dispatcher не получает REVIEW этим пакетом.

Проверенные consumers связывают созданные строки с предыдущими контрактами:10104ec0 передаёт374 в speech virtual1a0;101041f0 использует378/37c и3a8/3ac/3b0;10104110 выбирает398/39c;10104540 использует380;10105920 передаёт384 при follow-реплике; StartTask101059e0 передаёт390 для task5e и394 для65. Аргументом служит DWORD адреса строки. Эти direct field uses не устанавливают конкретный virtual1a0 callee. Полный список потребителей остальных slots и реализация defaults при SpeakAs0 остаются вне доказанного локального контракта.

Поле370 после initializer имеет100; support10104d40 вызывает engine RandomLong(0,3), затем читает370 и складывает его с результатом в32битном EAX. Это связывает инициализацию с числовой вариацией speech-параметра без догадки о полном backend ABI. Global10230d78 используется как общий float deadline соседним10105280: при ненулевом payload сначала float32(now+duration), затем расширение вdouble, прибавление double2.0 и округление вfloat32 перед записью. Init обнуляет именно этот общий адрес, не только состояние текущего объекта. Полная speech implementation10105280 и все её внешние sound callees не считаются разобранными двумя новыми карточками.

Сохранённый partial-pass C lexical scan не обнаружил явного FUN_10105f70 call вне самого тела. Это отсутствие точного текстового вызова в сохранённом подмножестве; непрямой virtual caller, пропущенные тела и runtime patching таким поиском не исключаются. Поэтому нельзя утверждать, что initializer вызывается при Spawn каждого NPC или что все созданные имена реально используются в Cry of Fear.

## 101058c0 — InvokeMappedGroupObjectCallback1A8

ABI: ECX=this, stack аргументов нет, RET. Сохраняет this в EBX, cursor в ESI, selector в EDI. Начальные cursor=0 и selector=0. Для каждого selector0..5 (десятичные шесть проходов) вызывает10104040(this,cursor,selector,1). Последняя единица включает visibility trace в finder. При NULL-результате переходит к следующему selector; cursor при этом уже равен0. После шестого исчерпания обычный EAX остаётся0 от finder; это не число обработанных объектов и не отдельный success/status contract.

Каждый ненулевой candidate сохраняется в ESI. Вызывает candidate.virtual78 без stack аргументов; если полный EAX=M!=NULL, загружает vtable именно M и вызывает M.virtual1a8 без stack аргументов, с ECX=M. Это может быть другой private object, не candidate; менять адресат на исходный entity нельзя. NULL M просто пропускается. Затем finder снова получает исходный candidate как previous, тот же selector и trace=1. Результат callback1a8 не проверяется и не управляет продолжением.

Support finder10104040 выполняет this.virtual250(selector) и использует полный EAX как индекс raw таблицы10219cc8. Нативные шесть строк:0 monster_human_alpha,1 monster_alpha_pistol,2 monster_human_military,3 monster_barney,4 monster_scientist,5 monster_sitting_scientist. Равенство selector и returned index не доказано; ни индекс, ни selector этим finder не ограничиваются. Поэтому шесть selector-проходов не равнозначны доказанному посещению каждого из шести классов ровно один раз. Повторяющиеся mapping могут повторно обработать один entity.

Finder пропускает this и требует nonzero candidate.virtualbc. Для trace=1 вызывает TraceLine(origin(this), (origin.x,origin.y,absmax.z)(candidate), mode1, skip=this.pev+20c); принимает только ordered fraction==1.0f. Equality допускается именно с1; NaN отклоняется. Дополнительных distance/FOV/team/relationship gates здесь нет. Полный уже разобранный finder находится в server-monster-groups; этот пакет не переименовывает виртуальный predicate по одной SDK-аналогии.

В собственном теле helper нет записи entity fields, глобальных таймеров, allocation/free, dedup или lifetime pin. Нет отдельного лимита entity iterations: очередной NULL должен прийти от finder. После callback используется прежний candidate; helper не проверяет serial/lifetime и не пересобирает snapshot списка. Callback может менять состояние поиска, а эффект callback1a8 требует concrete binding. Название StopTalking допустимо лишь как гипотеза назначения, не как установленный эффект: ни прямого sound-stop, ни записи speech deadline это тело не содержит.

Два сохранённых direct caller подтверждены native CALL:10104d99 внутри animation-event helper10104d60 и1010521c внутри10105210. Первый вызывает группу для event1005 либо event1009 после signed RandomLong(0,99)>=75, затем свою speech virtual1a0 с payload event+4 и duration2.8..3.4. Второй имеет шесть stack аргументов и RET18h; вызывает группу только если пятый DWORD==0, затем пишетfloat now+duration вthis+3c0, передаёт первые четыре аргумента в свою virtual1a0, а шестой аргумент сохраняет EHANDLE setter вthis+3e0. Вызов группы предшествует этим действиям, return группы игнорируется. Полный outer speech dispatcher/конкретная vtable остаётся отдельной задачей, хотя эти callsites и порядок доказаны.

## Открытые границы

Закрыты все локальные ветви двух primary, порядок19 strings, storage distinction offset/pointer, три независимых flag checks, два known caller sites и механика шести selector-проходов. Открыты concrete vtable/factory/dispatch initializer, actual mapping250, эффект callback1a8, engine string lifetime/error contract, все consumers payloads и достижимость на реальных картах. Наличие legacy classname-строк не является доказательством активных NPC в игре. Ни запуск, ни восстановление игровой реализации не выполнялись.
