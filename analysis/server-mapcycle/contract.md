# Mapcycle: файл, кольцо карт и фактический ChangeLevel

Статический original server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Шесть pending actual C entries; оригинал не запускался и не изменялся. Все C и машинные диапазоны закреплены в `evidence.json`, `capture.py` вызывает только bounded objdump и читает PE. `verify.py` проверяет байты самостоятельно; отсутствующего ignored listing ему не требуется. Названия ниже описательные, native особенности сохранены без исправления по SDK.

Адреса, поля и masks — hex; размерности/counts в обычном тексте — десятичные. `0x` явно отмечает неоднозначные размеры. Engine callback names опираются на `100b4aa0` copy144 DWORD → `10222f48` и pinned eiface.h. Это не заимствование поведения SDK.

## Владение и связи

```text
CHalfLifeMultiplay vtable101d608c +f8 →100c6fd0
  CVarGetString(mapcyclefile), client count100c7d40
  compare cached path1017bcbb
  path changed: copy path → destroy100c8520 → load100c9660
    COM_Parse100c6de0 + same-line probe100c6ef0
    allocate nodes → reverse → close ring
  select node → advance global next → rules-to-command100c8590
  IsMapValid → fallback if false → state10222f04=1
  diagnostics → ChangeLevel(map,NULL) → ServerCommand(commands) if nonempty
```

Путь вызова из Think закреплён ограниченным ASM `100ca3d7..100ca483` (exclusive): при межраундовом состоянии проверяет deadline/input и вызывает virtual+f8. Полный Think принадлежит соседнему пакету, см. [rules-bootstrap](../server-rules-bootstrap/contract.md). Здесь доказаны конкретная MP vtable, RTTI `.?AVCHalfLifeMultiplay@@` и target+f8, а не все виртуальные методы.

| Storage / field | Доказанная роль |
|---|---|
| global102237a8 | NUL-terminated cached mapcycle filename; до следующего global ровно256 bytes |
| global102238a8 | cycle.head, начало кольца |
| global102238ac | cycle.next, курсор выбора следующего кандидата |
| node+00 | next pointer |
| node+04..23 | map name, место32 bytes |
| node+24 | signed minplayers, 0 означает отсутствие нижнего ограничения |
| node+28 | signed maxplayers, 0 означает отсутствие верхнего ограничения |
| node+2c..42b | rule info string, место1024 bytes |

Узлы — allocation0x42c без vtable/конструктора; владеет контейнер cycle, не engine entity. Engine file buffer освобождается через FreeFile, узлы отдельно через1013dba5. String_t не используется: names/rules копируются в own inline arrays. Глобальное cached filename переживает destroy: `100c8520` обнуляет только два pointers. Локальное изменение содержимого того же файла не инициирует reload, если comparator считает имя равным. Прямые/косвенные внешние resets этих globals здесь не перечисляются как исчерпывающий lifecycle.

## 0x100c6ef0 — MapCycle_HasTokenBeforeLineEnd [high]

Проверяет наличие значимого байта до LF/NUL, не изменяя переданный cursor или общий token buffer.

ABI cdecl `(const char *cursor)`, normal RET, EAX строго0/1. Первый byte читается без NULL guard. NUL или LF немедленно дают0. Остальной byte передаётся через MOVSX в1016d250 (Ghidra label `_isspace`); результат0 даёт1. При ненулевом результате вызывает1016cd30 (label `_isalnum`) с тем же signed byte; ненулевой результат также даёт1. Только при space!=0 && alnum==0 продвигает локальный pointer на1 и повторяет. Даже если обычные locale predicates делают вторую проверку избыточной, native call не удаляется из контракта. CR отдельно не terminator: его обработка зависит от predicate. Полные ctype locale/negative-input/error semantics остаются за helpers.

Probe не распознаёт `//`, quotes или delimiter grammar: slash при обычном non-space результате сразу даёт1. Поэтому optional-rule проверка в loader лишь обнаруживает потенциальный токен на текущей строке; последующий общий tokenizer может пропустить комментарий и фактически вернуть token уже со следующей строки. Нет length argument, capacity, обновления caller cursor или гарантии безопасности malformed/NUL pointer.

## 0x100c7d40 — MapCycle_CountLiveClientPrivateData [high]

Считает client slots с ненулевыми private data для ограничений minplayers/maxplayers.

ABI без stack arguments, plain RET, EAX=count. Начинает index1/count0; signed upper bound gpGlobals.maxClients(+90) перечитывается после каждой итерации. Для каждого index вызывает10119680; только ненулевой EAX увеличивает count. Helper проверяет index>0 и<=maxClients, engine PEntityOfEntIndex !=NULL, edict.free==0, затем возвращает `[edict+7c]`. Никакого virtual IsPlayer, human/bot/spectator/alive/team predicate этот counter не добавляет. Не является snapshot: globals/engine data могут меняться между callbacks. При maxClients<1 возвращает0.

## 0x100c8520 — MapCycle_DestroyCircularNodes [high]

Освобождает узлы существующего кольца и затем обнуляет next/head контейнера.

ABI cdecl `(Cycle *cycle)`, plain RET без стабильного bool. cycle pointer должен быть ненулевым. При headNULL не вызывает release. Иначе стартует с head.next: перед каждым release сохраняет node.next в регистр, передаёт `(node,0x42c)` в1013dba5, идёт до исходного head. Если head.next==head, loop пропускается. После удаления остальных узлов перечитывает cycle.head и освобождает его последним. Затем stores cycle.next=0, cycle.head=0 именно в этом порядке.

Release helper1013dba5 по ASM читает только первый stack argument и передаёт pointer в1013eed8; второй size0x42c самим helper не читается. Здесь нет virtual destructor или отдельного освобождения inline names/rules. Не проверяет NULL link внутри ненулевого head, dangling pointer, повторный узел вне head или циклы иной формы; это routine для валидного кольца. Контейнер сохраняет старые pointers во время всех освобождений, поэтому не заявлена reentrancy/exception безопасность. Полное поведение нижнего heap release остаётся внешней границей, не превращается в выдуманный delete[] контракт.

## 0x100c8590 — MapCycle_AppendRuleCommands [high]

Разворачивает backslash-пары key/value в текст server commands и дописывает его в конец существующей output строки.

ABI cdecl `(const char *rules, char *out)`, plain RET; собственного return-status нет. Ни rules, ни out не проверяются наNULL. Если первый byte rules='\\', пропускает ровно один такой byte. Затем копирует key до следующего backslash в scratch512; если NUL встречен раньше delimiter, сразу заканчивает без добавления незавершённого key. После delimiter копирует value до backslash или NUL в другой scratch512 и завершает оба scratch NUL. Empty key/value разрешены.

Каждая завершённая пара добавляет key к текущему strlen(out). Если value непустое, добавляет WORD0x0020 (`space,NUL`) и value; затем всегда WORD0x000a (`LF,NUL`). Следующий backslash пропускается один раз, обработка повторяется. Значит `\\a\\1\\b\\` даёт `a 1\nb\n`, lone key без separator не выводится, пустые пары могут дать пустую либо начинающуюся с пробела command line. Input не изменяется и не удерживается. Out заранее не очищается: caller100c6fd0 делает command[0]=0.

Нет ограничений длины key/value/out, escaping/quoting, фильтрации command names, whitespace, LF или semicolon. Два scratch имеют512 bytes каждый, output caller1500; прямые stores и strcat-подобные REP MOVS идут без size arguments. Cookie check лишь после работы, не предотвращает overflow. Не обещается соответствие output валидной console grammar: это буквальное преобразование info-string, исполнение оставлено ServerCommand callback.

## 0x100c9660 — MapCycle_LoadFileAndCloseRing [high]

Загружает валидные карты и optional rule info в список, восстанавливает порядок файла и замыкает его в кольцо с cursor=head.

ABI cdecl `(const char *filename, Cycle *cycle)`, plain RET; **EAX=0/1** доказан ASM100c9927/100c994d несмотря на Ghidra void. Нормальный cookie-check1013dbb3 не меняет EAX. Не очищает cycle.head/next при входе; caller обязан предоставить подходящий список, обычно пустой после destroy. LoadFileForMe(filename,&length) сохраняет исходный buffer. Если bufferNULL либо length==0, parse/free ветка пропускается, но финальная перестройка существующего head всё равно выполняется. NonNULL zero-length buffer не освобождается. Отрицательный length отдельно не отвергается, length далее не является tokenizer bound.

При доступном ненулевом length: zero rulesScratch1024; COM_Parse100c6de0(buffer) создаёт общий token102231a8 и borrowed next cursor. Пока token непустой, без bounds копирует его в local mapName[32]. Probe100c6ef0(nextCursor) решает, читать ли ещё один token как rules. Если прочитанный token непустой, flagHasRules=1 и он без bounds копируется в rulesScratch1024. Иначе flag остаётся0. Затем IsMapValid(mapName): при0 AlertMessage(1,"Skipping %s from mapcycle, not a valid map\n",mapName) и узел не создаётся. Следующий token всё равно читается от cursor после optional rules. Invalid map не сохраняется как fallback.

Для valid map вызывает1013e1e9(0x42c), считает возвращённый EAX node pointer без локальной NULL проверки, копирует mapName в node+4, обнуляет min/max и rules1024. Allocation helper сначала пробует1017556b(size), при0 вызывает10179a9d(size) и при разрешённом retry повторяет; отказ уходит во внешнюю failure ветку1013f0ad (либо особую size=-1). Поэтому здесь не утверждается обычный NULL return allocator; loader не имеет собственной cleanup/unwind схемы для его failure.

Если HasRules: InfoKeyValue(rules,"minplayers"), затем отдельно "maxplayers". NULL/empty returned pointer оставляет соответствующий field0. Иначе передаёт string в1016b55e (library label atoi), затем native signed clamps: `x=max(result,0); field=x; field=min(x,gpGlobals.maxClients)`. При испорченном отрицательном maxClients окончательный field может стать отрицательным; это не безусловный clamp к допустимому диапазону. Точные atoi overflow/locale semantics вне scope. Оба Info_RemoveKey callback вызываются всегда внутри HasRules — сначала minplayers, потом maxplayers — даже если значения пусты/отсутствуют. Остаток rulesScratch после callbacks копируется в inline node.rules. Ни min<=max, ни duplicate maps, ни command whitelist не проверяются.

Node.next=cycle.head; cycle.head=node: временно список строится в обратном порядке. Каждый iteration обнуляет rulesScratch1024, затем вызывает COM_Parse на сохранённом cursor. После tokenEOF освобождает **исходный** file buffer. Общий tokenizer здесь support: signed high-byte whitespace, quoted tokens, // comments и поздняя проверка1500bytes остаются native; наличие его лимита не защищает local32/1024 копии. Inline comment после map способен пройти probe, а затем tokenizer пропустит comment/LF и поглотит имя следующей карты в качестве rules; это вывод из соединения двух доказанных функций, не runtime observation.

Финал вне file-success guard: reverse chain по next доNULL; записывает cycle.head=reverseHead. Если headNULL, возвращает0, **cycle.next не очищает**. Иначе ищет tail с nextNULL, tail.next=head, cycle.next=head и возвращает1. При изначально пустом контейнере это сохраняет порядок valid entries файла, включая повторы. При предоставленном старом линейном списке он также участвует в reversal, поэтому true не означает, что новый файл успешно прочитан. Уже замкнутое старое кольцо нарушает предпосылку: reverse меняет links, но последующий поиск NULL-tail может не закончиться; routine не универсальный append/reload для ring. Caller100c6fd0 перед reload сначала destroy обнуляет контейнер. Малформированный input, oversized copies, allocator/engine errors не имеют локального rollback.

## 0x100c6fd0 — CHalfLifeMultiplay_SelectAndChangeLevel [high]

Выбирает следующий узел mapcycle по native обходу, вызывает engine ChangeLevel и затем ставит rule commands в server queue.

ABI MP virtual slot+f8, ECX=this предоставляется caller, но body ECX как this не использует; stack arguments отсутствуют, plain RET. Stack layout: fallbackMap32 по EBP-44, nextMap32 по EBP-24, commands1500 по EBP-bfc, originalRules1500 по EBP-620; min/max diagnostic DWORD по EBP-c00/-c04. Изначально fallbackMap="hldm1", diagnostic min/max0, commands[0]=rules[0]=0. **nextMap не инициализируется на входе.** CVarGetString("mapcyclefile") возвращает retained borrowed pointer; затем100c7d40 считает clients и1017bcbb сравнивает filename с cached102237a8.

При сравнении !=0 сначала без bounds копирует filename в cached102237a8, затем Destroy(&head), затем LoadFileAndCloseRing(filename,&head). Loader EAX0 либо headNULL вызывает Alert "Unable to load map cycle file %s\n" и переход к validation. При равном имени и headNULL тоже сразу validation, без retry load. Cached path уже обновлён до failure, поэтому следующий вызов с тем же именем сам не повторяет неудачную загрузку. Filename длиной256 уже пишет terminator в adjacent head102238a8 до destroy; размер локальных/глобальных arrays не обеспечен code guard.

Если head ненулевой, сначала **оба** fallbackMap и nextMap получают текущее gpGlobals.mapname через stringBase; fallback после этого уже не hldm1. Копии в32bytes без bounds. Стартовый node берётся из global next102238ac без отдельной NULL/membership проверки. Singleton (start.next==start) выбирается без min/max тестов. Для кольца изN>1 nodes выполняется следующий точный алгоритм; все сравнения client counts signed, p.next читается после продвижения:

```text
anyPassedNonzeroBound = false
p = start
repeat:
    rejectMin = false
    if p.min != 0:
        if clients < p.min: rejectMin = true
        else: anyPassedNonzeroBound = true; diagMin = p.min
    if p.max == 0 or clients <= p.max:
        if p.max != 0: anyPassedNonzeroBound = true; diagMax = p.max
        if not rejectMin: choose p; next = p.next; stop
    p = p.next
    next = p.next
    if next == start: break
if exhausted:
    if not anyPassedNonzeroBound: p = start; next = p.next
    choose p
```

Таким образом последний узел перед start не проверяется: после продвижения на него next==start завершает loop. Если хотя бы одна отдельная ненулевая граница ранее прошла, выбирается этот последний непроверенный узел; если ни одна не прошла — исходный start. Latch не означает полную пригодность карты: min мог пройти при нарушенном max или наоборот. Diagnostic min/max не сбрасываются между кандидатами и могут относиться к разным nodes. Пример для двух nodes: первый min=10,max=20 при clients5 нарушает min, но max проходит → latch1 → выбирается второй без проверки его bounds. Если первый min=0,max=3 при clients5, latch остаётся0 → повторно выбирается первый, даже если второй подошёл бы. Это native алгоритм, не рекомендуемая политика.

До копирования выбранного mapName global next становится вычисленным next. Выбранные rules преобразуются100c8590 в commands, исходная info string копируется в originalRules для diagnostics. Затем общий validation путь вызывает IsMapValid(nextMap). **При отсутствующем/неудачном cycle nextMap всё ещё содержит неопределённый stack**, так что hldm1 не гарантированно выбирается: только если callback возвращает0, fallback копируется в nextMap. Fallback отдельно не валидируется. При invalid выбранной карте fallback — текущая карта, но cursor уже продвинут, а commands/rules остаются от invalid node.

Затем global10222f04=1; Alert "CHANGE LEVEL: %s\n"; optional PLAYER COUNT diagnostic при min/max!=0; optional RULES diagnostic при rules[0]!=0. Engine ChangeLevel(nextMap,NULL) вызывается **до** ServerCommand(commands), и commands передаются только если callback ChangeLevel вернулся и строка непустая. ServerExecute здесь не вызывается. Переход карты/время исполнения queue/копирование borrowed stack buffers — engine boundary, не наблюдение runtime. Нет возврата success, abort/rollback, выбора по позиции текущей карты в списке или защиты от повторного вызова после установки global; это всё не следует добавлять из SDK.

## Comparator и открытые границы

Filename comparator1017bcbb закреплён тремя ASM ranges: при mode10232e78==0 ASCII A..Z→a..z и unsigned byte difference, иначе table-mapped bytes через1017bd04. Поэтому фраза «путь не изменился» означает только EAX==0 этого comparator, а не filesystem identity/canonicalization. NULL validation в comparator не исправляет вызывающий CVarGetString/copy path. Полный bounded контракт и пределы locale/error helpers — [sentence-lifecycle](../server-sentence-lifecycle/contract.md).

Остаются внешними: engine InfoKeyValue/Info_RemoveKey и rules-file allocation/termination; full atoi/ctype behavior; CRT failure/unwind; точное queue timing ChangeLevel/ServerCommand; исчерпывающие writers/reset глобального cycle. Подробности full MP Think/Spawn анализируются отдельно; этот пакет закрывает его mapcycle call target, не остальные responsibilities. Ни одна native странность не исправлялась и ни один malformed файл не запускался.
