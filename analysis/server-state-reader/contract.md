# Полный локальный контракт100c5300: текстовое чтение состояния игрока

Один новый primary оригинального hl.dll. Прочитаны всё сохранённое тело и весь bounded native ASM, а не только ветка health или совпадение имени reader. Proposed name аналитическое; это не доказанное исходное имя. Пакет — статический разбор, DLL/игра не запускались, cfg не создавались и не удалялись. Source hash,21 C,34 ASM ranges, raw PE imports/literals/descriptors сохранены в evidence.json. Supporting CRT entries не получают REVIEW автоматически.

Навигация: [writer и начало статистики](../server-stats-lifecycle/contract.md), [GiveNamedItem](../server-player-equipment/contract.md), [Inventory sender](../server-player-inventory/contract.md), [item ownership](../server-item-lifecycle/contract.md), [native serializer types](../server-serializer/contract.md).

Поток: `P!=NULL → timestamp → wildcard enumeration → zero probe + exact filename → open reconstructed path → sequential mutable line parser → DeleteFileA → stream destruction → next file → six Inventory refresh → cleanup`. Ошибки/исключения могут оборвать эту цепь; это не atomic restore.

## ABI, первая запись и владельцы

100c5300 — native cdecl с одним stack player* P; входной ECX не используется как this, обычный RET100c655c без снятия аргумента. Значимый success/bool return не установлен. При P==NULL переход к эпилогу без файловых операций и записей. При P!=NULL первым побочным действием P+438 получает raw DWORD globalvars.time (100c5346), ещё до поиска файла. Native PLAYER descriptor называет +438 m_flNextTimeTakenCheck, type15/count1. Это происходит и при отсутствии cfg, несовпадении имени, неудаче открытия. Нет проверки IsPlayer, alive, multiplayer или готовности статистики внутри entry.

## Пути и выбор enumerated entry

Engine GetGameDir slot99/address102230d4 получает один указатель на stack buffer EBP-910h; показанный в C лишний аргумент не является частью native вызова. К NUL-terminated результату без ограничения длины дописывается literal "\txtfiles\". Малые строки directory и "*.cfg" соединяются100c5040; FindFirstFileA(IAT101a1004) получает шаблон <gameDir>\txtfiles\*.cfg и WIN32_FIND_DATAA. INVALID_HANDLE_VALUE(-1) сразу ведёт к очистке строк, минуя шесть Inventory refresh. Успешная enumeration не гарантирует подходящий файл: атрибуты FindData (в частности directory) не проверяются.

## Probe, имя и повторное построение пути

Для каждого entry100c5090 соединяет сохранённую directory и FindData.cFileName(+2c). Затем101740ac(fullpath,scratch48); только EAX==0 продолжает проверку имени. Сохранённый actual entry101740ac — bounded native tail JMP10172c49; тело backend не сохранено, поэтому точная stat/тип/время семантика probe не объявлена доказанной. Из P.pev.netname(+1d4)+globalvars.stringPool(+98) без ограничений копируется имя в 256-байтовый scratch EBP-110h, затем дописывается ".cfg". Это имя сравнивается с cFileName побайтно с учётом регистра, целиком до NUL. Нет escaping, очистки разделителей, path traversal проверки или длины netname. Heap string helpers имеют overflow guard суммы относительно7fffffff, но не защищают эти stack copies.

## Открытие совпавшего файла

При совпадении имени1001f160 записывает "%s",cFileName в отдельный 1024-байтовый buffer EBP-d10h; этот результат далее в primary не читается. GetGameDir вызывается повторно в buffer EBP-510h, и заново читается текущий netname для пути <gameDir>/txtfiles/<netname>.cfg. Здесь slash literal "/txtfiles/", в enumeration — backslash. Путь открытия не является тем же сохранённым объектом строки, который позднее передаётся DeleteFileA. Все append/copy здесь NUL-циклы без контроля 1024-байтовой области. 1002f8d0 строит ifstream по адресу EBP-fb8h с numeric аргументами(path,1,40h,1); затем сразу getline, без отдельного is_open/success gate. Конструктор может установить stream error или бросить исключение; OS sharing и file-open backend не доказаны одним значением40h.

## getline, EOF и mutable line

Одна std::string S по EBP-d28h используется для всех проверок и дополнительных оружейных строк. Длина DWORD по-d18h, capacity по-d14h; capacity>=16 выбирает heap pointer, иначе inline buffer. 1002f550 получает delimiter через ctype facet virtual+20 с аргументом10 и передаёт его1002f350. Для обычного facet это LF; CRLF translation принадлежит filebuf/CRT. Вызов getline(stream,&S) возвращает stream, после чего reader проверяет BYTE state(stream+virtual-base+0c)&6: failbit2 или badbit4 прекращают обработку, один eofbit1 её не прекращает. Успешно извлечённая последняя непустая строка без delimiter поэтому обрабатывается. Пустая строка с delimiter также принимается, но сама по себе не совпадает с labels.

## Детали EOF и отказов getline

1002f350 вызывает sentry10037300 с аргументом1, то есть без пропуска начального whitespace; при хорошем stream очищает S и накапливает байты до delimiter/EOF. Delimiter потребляется, не добавляется в S, и считается извлечением даже при пустой S. EOF до любого извлечения даёт eof|fail, EOF после байтов — eof без fail. При уже ненулевом state sentry добавляет fail и возвращает AL0, а S не очищается. Поэтому второе чтение после EOF может оставить предыдущую S. 1002f49f — сохранённый Ghidra фрагмент того же stack frame, достигаемый native JMP из1002f350; это не самостоятельная игровая операция. Он объединяет state, проверяет exceptionMask и возвращает исходный stream либо передаёт ошибку C++ exception. Здесь нет catch/rollback player mutations.

## Грамматика: независимые substring-проверки

Проверки идут строго последовательно: health, stamina, quicksel1, quicksel2, quicksel3, shotsfired, shotshit, syringesused, monsterskilledmelee, monsterskilledshooting, seconds, minutes, hours, damagetaken, weapon_. Каждая вызывает case-sensitive byte substring helper1013f5f0 на ТЕКУЩЕЙ S. Это отдельные if, не else-if и не поиск точного токена в начале. Возвращённая позиция совпадения не используется. Для первых14 labels удаляются первые min(unsigned S.length,K) байт, где K — точная длина соответствующего label вместе с пробелом, через memmove101406b0(dst=S,src=S+n,count=newLength+1). Дальнейшие if видят уже изменённую S. Нельзя заменить это split-on-space, prefix parser, независимыми копиями исходной строки или переставить проверки без изменения native поведения.

## Числовая конверсия и её граница

Каждое числовое значение получается1016b55e: wrapper вызывает1016a01f(NULL,text,NULL,10,1), то есть decimal signed32, без end pointer. Native parser пропускает начальные байты, классифицированные locale helper как whitespace (mask8), допускает один +/-, читает десятичные цифры до первого другого байта. Нет цифр —0; суффикс не проверяется. Так, для обычного ASCII "12.75" даёт12, "-4junk" даёт-4, "nan" даёт0, "1e3" даёт1. 10169fb8 подтверждает signed overflow границы: positive>7fffffff либо negative magnitude>80000000, а также accumulator overflow; результат насыщается соответственно7fffffff/80000000 и errno=22h. Reader errno не читает. Это поведение данного CRT пути, не обещание стандартного C atoi на любых платформах. Ни max-health/stamina/clip/ammo clamp, ни проверка знака здесь не добавляются.

## HP, stamina и девять DWORD статистики

После atoi health и stamina проходят MOVD/CVTDQ2PS (signed int32→float32, с действующим MXCSR rounding) и прямо записываются соответственно P.pev.health+164 (100c5710) и P.m_fStamina+21f0 (100c57dc). Дробная часть текстового float writer теряется уже в atoi; полученный float конечен даже для текста nan/inf, который не начинается цифрой. Нет healthbar/HP-message, максимума, проверки смерти, TakeHealth или stamina API. Девять stats значений — прямые DWORD: shotsfired P+63c, shotshit+640, syringesused+644, monsterskilledmelee+670, monsterskilledshooting+674, seconds+664, minutes+668, hours+66c, damagetaken+658. Native PLAYER descriptor описывает общий playerstats как80байт с638, локальные int-width доказаны store-инструкциями. Отсутствующие поля сохраняются, повторные строки перезаписывают значения; начала общей zero/reset транзакции нет.

## Quick-select: направление native копии

Для quicksel1/2/3 сначала удаляется label и строка копируется в scratch как для чисел. Но затем native LEA ECX,[P+204c/20cc/214c] (100c588e/595e/5a2e), LEA EDX,[EBP-110h], SUB EDX,ECX; цикл MOV AL,[ECX],INC ECX,MOV [EDX+ECX-1],AL копирует СУЩЕСТВУЮЩУЮ player quick-select строку В scratch. Это не присваивание в player: loaded value выбрасывается, player поля не изменяются. Native descriptors задают три128-байтовых поля m_sQuickSel1/2/3, но цикл не ограничен128 или256 и не проверяет termination. Изменённая S остаётся исходным загруженным value после удаления label, поэтому последующие checks могут сработать на нём; перезапись scratch на S не влияет.

## Границы stack buffer проверяются поздно

В ветках14 labels, weapon_ и каждой из двух оружейных числовых строк NUL-copy в256-байтовый scratch выполняется ПЕРЕД unsigned сравнением S.length>=256. Guard ведёт к100c655d→1013dd48 range-check failure; это не безопасное усечение до255. При допустимой длине дополнительно ставится scratch[S.length]=NUL. Длина std::string и длина до первого embedded NUL могут отличаться; substring/atoi используют NUL termination. Следующая quicksel player→scratch копия вообще не имеет собственного length guard. Stack cookie и fatal helper не превращают уже выполненные записи в безопасный parse error; primary не возвращает специальный error result и не восстанавливает изменённые поля.

## weapon_: создание и фильтр цепей

Если текущая S содержит "weapon_" в любой позиции, label НЕ удаляется. После scratch copy/позднего guard вызывается100e0a80 с ECX=P и stack(S.c_str(),0,0) (100c619e); передаётся вся текущая S, не scratch и не указатель на найденную подстроку. Возврат игнорируется. Existing GiveNamedItem имеет собственные ограничения/создание/Spawn/Touch; reader не доказывает успешное получение нового оружия и не очищает прежний inventory. Затем обходятся шесть текущих heads P.m_rgpPlayerItems+2514..2528. NULL пропускается. Если classname HEAD точно равен "weapon_action", пропускается вся цепочка; для последующих nodes этот фильтр заново не выполняется.

## weapon_: условное потребление clip/ammo

В каждой непропущенной цепи node.next читается из+164, id из+168. Сначала требуется ненулевой ItemInfo primary-ammo-name pointer по10231890+id*2ch. Затем classname текущего node точно, с учётом регистра сравнивается с ТЕКУЩЕЙ S. Только при совпадении потребляются две дополнительные строки. Первый getline(stream,&S) при state&6==0 даёт atoi→node.m_iClip+1e4 (100c62d8). Второй getline выполняется независимо от результата первого; при своём state&6==0 даёт atoi→P.m_rgAmmo+2540+4*node.m_iPrimaryAmmoType(+1dc) (100c6361). PLAYER descriptor содержит32 ammo DWORD, но в этой ветке bounds id/index не проверяются. Нет GiveAmmo, clip capacity или ammo-limit правила: это прямые stores.

## weapon_: обход после чтения и неполные записи

После совпадения нет break. Node.next и следующие heads продолжают обход, сравнивая classname уже со строкой clip/ammo, которую последнее getline оставило в общей S, а не с сохранённым weapon name. При отказавшем getline S может быть прежней согласно sentry-пути. Поэтому нельзя моделировать это как независимый трёхстрочный record с неизменным ключом. Нет matching owned node либо primary-ammo-name==NULL — следующие две строки вообще не потребляются этой веткой: их увидит наружный parser. При EOF после clip первая запись может состояться, ammo остаётся прежним; при parse без цифр значение0, а не отказ всей записи. Общая ammo storage может перезаписываться последующими оружейными записями. После шести heads наружный getline получает новую S и повторяет все15 checks.

## Удаление раньше закрытия и продолжение enumeration

Когда внешний getline больше не проходит state&6==0, DeleteFileA(IAT101a1000) вызывается100c63c4 с СОХРАНЁННЫМ enumerated fullpath, даже если открытие/чтение не дали ни одной успешной строки. Его BOOL не проверяется. Затем освобождается S, только потом вызывается filebuf destructor10030290(stream+10h) в100c642d, и ios-base cleanup10122ff5. Captured filebuf destructor при owned-file byte+48 и file pointer+4c вызывает подготовку10037080 и fclose1016fd61. Следовательно запрос удаления предшествует обычному закрытию открытого файла; успешное удаление не гарантировано из-за внешних OS/share условий. Нет записи подтверждения, отката, обязательного complete-read gate или break после совпадения файла.

## Find handle, шесть сообщений и финальная очистка

После каждого entry освобождается fullpath string и FindNextFileA(IAT101a1008) вызывается с исходным handle. Продолжение — native signed JG по EAX>0 (100c64ab), не абстрактная проверка любого nonzero. В полном primary нет вызова FindClose; IAT101a1174 присутствует в PE, но handle здесь не закрывается и не передаётся наружу. После завершения успешно начатой enumeration вызывается100e4360(this=P,slot=1..6,value=DWORD[P+2200+4*(slot-1)],0), даже если не найден matching cfg или open не удался. Значения читаются по очереди перед каждым вызовом, не snapshot. При INVALID_HANDLE эта серия пропускается. В конце уничтожаются три heap/inline string объекта и выполняется cookie/SEH эпилог; meaningful success return отсутствует.

## Точный смысл Inventory refresh и границы callback

Existing helper100e4360 (RET0ch, третий stack аргумент не используется) отправляет MSG_ONE/Inventory: BYTE slot, BYTE0, STRING stringPool+переданное значение, BYTE captured P+1e9c bool, BYTE P+1ef8 bool, BYTE результата100e24a0; MessageEnd, затем очищает P+1ef8 при ненулевом значении. Поэтому первая из шести refresh может изменить флаг для остальных. Поля+2200 в reader только читаются. API table base10222f48 и initializer100b4aa0, размер144DWORD, SDK slots сохранены как evidence. Полные условия GiveNamedItem, query100e24a0, derived item callbacks и transport engine описываются собственными контрактами; этот reader не заменяет их реализацию.

## Связь с writer1004a6e0 и недоказанные связи

Совпадают directory/name convention,14 текстовых labels и перечисление шести item chains с head-only weapon_action filter. Но round trip не тождественен: writer пишет HP/stamina через floating stream facet, reader принимает decimal int32; quick-select writer сохраняет, reader не присваивает player поля; writer пишет clip/ammo после каждого node, reader требует matching owned node и primary-ammo-name pointer, прежде чем потребить две строки. Reader не сбрасывает inventory/stats, вызывает creation side effects и пытается удалить cfg до закрытия. Literal labels не доказывают точное locale/float spelling, CRLF translation, encoding или успешность open/delete. Поиск FUN_100c5300 во всём сохранённом server C на момент пакета дал только собственное определение; gameplay caller, альтернативные symbol/indirect refs и включённость этого пути в конкретный режим остаются неустановленными. Точный дальнейший lead — native refs100c5300 и backend10172c49, а не предположительный вызов из Spawn.

## Таблица14 labels в порядке native checks

Offsets hexadecimal; K decimal. В quicksel owner offset — источник копии, не destination.

| Label (включает последний пробел) | K | Owner offset / действие | Native erase instruction |
|---|---:|---|---|
| `health ` | 7 | `0x164` — pev float32 from signed atoi | `0x100c5686` |
| `stamina ` | 8 | `0x21f0` — player float32 from signed atoi | `0x100c574e` |
| `quicksel1 ` | 10 | `0x204c` — player existing string TO scratch; no player write | `0x100c581a` |
| `quicksel2 ` | 10 | `0x20cc` — player existing string TO scratch; no player write | `0x100c58ed` |
| `quicksel3 ` | 10 | `0x214c` — player existing string TO scratch; no player write | `0x100c59bd` |
| `playerstats_shotsfired ` | 23 | `0x63c` — player DWORD | `0x100c5a8d` |
| `playerstats_shotshit ` | 21 | `0x640` — player DWORD | `0x100c5b51` |
| `playerstats_syringesused ` | 25 | `0x644` — player DWORD | `0x100c5c11` |
| `playerstats_monsterskilledmelee ` | 32 | `0x670` — player DWORD | `0x100c5cd1` |
| `playerstats_monsterskilledshooting ` | 35 | `0x674` — player DWORD | `0x100c5d91` |
| `playerstats_seconds ` | 20 | `0x664` — player DWORD | `0x100c5e51` |
| `playerstats_minutes ` | 20 | `0x668` — player DWORD | `0x100c5f11` |
| `playerstats_hours ` | 18 | `0x66c` — player DWORD | `0x100c5fd1` |
| `playerstats_damagetaken ` | 24 | `0x658` — player DWORD | `0x100c6091` |

## Как проверять и что ещё неизвестно

`python analysis/server-state-reader/capture.py` читает оригинальный PE и создаёт только локальные evidence/ASM; `write_notes.py` генерирует этот документ и одну карточку; `verify.py` сверяет SHA, byte ranges, literals, imports, native descriptor fields, grammar erase constants и критичные ABI/copy/call instructions. Это не испытание файловой системы, не execution replay и не доказательство безопасности malformed cfg.

Весь application body100c5300 разобран, но транзитивная полнота не заявляется. Остаются: вызывающий игровой путь; содержимое10172c49 за zero-result probe; полное filebuf open/share/locale состояние и exception unwind; поведение внешних engine/derived item callbacks. Не предполагается наличие EOF/size/rollback гарантий, которых нет в primary. Наследуемые массивы/строки считаются валидными только там, где это явно принято как условие чтения памяти; само тело не валидирует их размеры.

## Продолжение разбора: pass16

Соседний100c6570 теперь полностью описан в [map equipment parser](../server-map-equipment-parser/contract.md): maps/<map>.cfg, пять удаляемых labels плюс weapon_, без stats labels/удаления файла; latch10226488 и Inventory6 имеют отдельный порядок. Memory producer/consumer — server-state-capture/server-state-restore, lifecycle — server-state-lifecycle. Общие CRT helpers не делают эти форматы одной системой.

## Продолжение разбора: pass17

Оставшийся caller вопрос уточнён в [state reachability](../server-state-reachability/contract.md): полный bounded static поиск E8/E9 entry-target, exact VA/RVA и экспортов не нашёл прямых ссылок на100c5300/1004a6e0. Не повторять такой же scan без новых входных данных. Indirect/computed/interior entry paths и фактическая runtime reachability остаются открыты; это0 дополнительных REVIEW, не вывод о мёртвом коде.
