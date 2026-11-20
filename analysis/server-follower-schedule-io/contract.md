# CTalkMonster: persistence, named schedules и адресат ответа

Статический пакет pass18: пять ранее pending saved-C entry `101053d0`, `101057f0`, `10105850`, `10105880`, `10105890`. Оригинальный server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Полные native диапазоны каждой primary и supporting C/ASM, исходные таблицы и строки записаны в `evidence.json`. Ни DLL, ни игра не запускались. Новых REVIEW для supporting helpers нет.

Все адреса, смещения, task IDs и маски ниже hexadecimal; количества и float-параметры — decimal. `E` означает native private entity pointer в ECX, `pev=*(E+4)`, а не edict. Предлагаемые имена обозначают прочитанное поведение; конкретная derived vtable для этих пяти entry не установлена. Строка блока `CTalkMonster` и native export `?FollowerUse@CTalkMonster@@...` связывают семейство с классом, но не доказывают номер виртуального слота каждой функции.

## Карта вызовов и владение

Restore `101053d0(E,R)` → monster Restore `100c19a0(E,R)` → при ненулевом результате Reader `10117010(R,"CTalkMonster",E,10219c18,11)`.

Save `101057f0(E,W)` → monster Save `100c1ec0(E,W)` → при ненулевом результате Writer `1011adc0(W,ownerLabel,"CTalkMonster",E,10219c18,11)`.

Lookup `10105850(E,name)` → поиск `1008cd80` в 11 указателях `10219ce0` → только при NULL результата generic wrapper `1008cd60` с 40 указателями `10213130`.

Activity wrapper `10105880` → tail JMP `100c1f50` с неизменными ECX и stack argument. Response `10105890` → условный ChangeSchedule `1000aa50(E,10219d44)` → безусловный EHANDLE setter `10017740(E+3e0,target)`.

Поля принадлежат entity instance; descriptors, имена и расписания — статическим данным DLL. Reader/writer объекты заимствованы вызывающей стороной. Primary ничего не alloc/free, не копируют расписания и не проверяют срок жизни входного entity.

## 0x101053d0 — TalkMonster_RestoreOwnFields

ABI: ECX=E, один stack argument Reader R, RET 4; полный EAX сохраняется от последнего вызываемого reader. Ghidra void не описывает реальный возврат. Сначала вызывается 100c19a0(E,R); при EAX==0 собственный блок не читается и возвращается этот ноль.

При ненулевом нижнем результате 10117010 вызывается с ECX=R и четырьмя аргументами: "CTalkMonster", E, table10219c18, count11. Свой слой не содержит cleanup после чтения и не делает rollback при нулевом результате.

Нижний 100c19a0 сначала вызывает 10102890. После собственного ReadFields CBaseMonster он сохраняет результат и независимо от него очищает route через100c1a70, schedule+230, taskstatus+22c, activity+214; если enemy EHANDLE+184 невалиден, очищает conditions+180. Поэтому возврат0 верхнего Restore не означает отсутствие уже совершённых изменений.

Таблица CTalkMonster содержит DWORD-поля, string_t, три относительных времени и EHANDLE адресата речи+3e0. Generic ReadFields10117010 возвращает0 при несовпадении block token, иначе1 даже при некоторых проигнорированных полях/ошибках нижних void readers; результат нельзя считать полной проверкой сохранения. Подробная wire-семантика закреплена в server-serializer.

## 0x101057f0 — TalkMonster_SaveOwnFields

ABI: ECX=E, один stack argument Writer W, RET 4, полный EAX нижнего Save либо generic writer. Сначала 100c1ec0(E,W); если EAX==0, сразу возврат без собственного блока. После нижнего вызова заново читаются pev и global string pool.

Owner label выбирается как pool+pev.targetname(+1d0), если string_t ненулевой, иначе pool+pev.classname(+0). Writer1011adc0 получает ECX=W и пять аргументов: ownerLabel, literal"CTalkMonster", E, descriptors10219c18, count11. Owner label предназначен для диагностик и не заменяет имя блока; входные строки здесь не валидируются.

Свой слой сохраняет native таблицу в исходном порядке, включая последний descriptor m_deathNoticed по+3d4 после m_hTalkTarget+3e0. В generic writer обычный return устанавливает EAX1 даже после части low-level ошибок; этот результат не является надёжной гарантией полной записи. Наследуемые блоки пишутся раньше и не откатываются.

В собственной таблице отсутствуют DWORD+370 и speech payload slots+374..3b0. Это ограничение именно данного descriptor layer; оно не доказывает отсутствие других writers или восстановления этих полей в иных этапах. Относительные времена type15 и EHANDLE type4 нельзя переносить как простую копию native памяти.

## 0x10105850 — TalkMonster_FindNamedSchedule

ABI: ECX=E, один stack argument name, RET 4, EAX — заимствованный schedule pointer либо0. Первым вызывается 1008cd80(name,10219ce0,11). Только если результат0, вызывается1008cd60 с тем же E и name; тот ищет через1008cd80 в10213130 с count40. Совпадение в follower list имеет приоритет над generic list.

Helper1008cd80 обходит signed positive count по порядку. У каждой записи без проверки NULL descriptor читает name по+10. NULL имени записи выдаёт alert1 "Unnamed schedule!" и продолжает; ненулевое сравнивает через1017bcbb. При равенстве заново читает list[index] и возвращает его. Ни копирования, ни владения найденным объектом не возникает.

NULL входного name вызывает alert1 с classname и возвращает0 на каждом поиске: верхний fallback приводит к двум таким вызовам, если alert возвращается. Пустая строка не равна NULL и проходит обычные сравнения. Нет собственной проверки пригодности entity, таблицы или строк.

Comparator1017bcbb доказан отдельно native ASM: при mode10232e78==0 ASCII A..Z складываются с32, остальные байты не меняются; при mode!=0 используется runtime mapping table. Поэтому нельзя приписывать этому поиску Unicode case-fold или распространять ASCII-only правило на неизвестную runtime ветку. Exact eleven-pointer order, masks, names и все59 task records сохранены в таблице ниже и evidence.json.

Ни один из пяти primary entry не найден как exact preferred-base LE32 value в raw .rdata/.data; это ограниченный скан, не доказательство отсутствия вызывающих функций или динамической vtable. Concrete derived class/slot данного lookup остаются неустановленными.

## 0x10105880 — TalkMonster_ForwardSetActivity

Native тело — PUSH EBP; MOV EBP,ESP; POP EBP; JMP100c1f50. Сохраняются ECX entity и исходный stack argument activity; эффективный RET 4 выполняет нижний helper. Saved C void(void) скрывает аргумент. Собственного результата, проверок или мутаций wrapper не добавляет.

Нижний100c1f50 вызывает LookupActivity1000e950. При signed result>=0 обновляет sequence; frame сбрасывает, когда sequence изменился либо loop flag+fc==0, кроме переходов между activities3/4. Затем ResetSequenceInfo1000e9e0, virtual+1c0(), и записи idealActivity+218/activity+214 из исходного аргумента.

При отрицательном lookup выдаётся alert1 с classname/activity, sequence обнуляется, +218/+214 всё равно обновляются; ResetSequenceInfo и virtual+1c0 на этом пути не вызываются. EAX нижнего пути не нормализуется в bool; wrapper не обещает status/success. Конкретный target virtual+1c0 зависит от реального объекта и не установлен этой обёрткой.

## 0x10105890 — TalkMonster_SetResponseScheduleAndRecipient

ABI: ECX=E, stack argument target private entity pointer, RET 4. Если cine pointer+34c равен0, сначала ChangeSchedule1000aa50(E,10219d44); если ненулевой — пропускается только смена schedule. После обеих ветвей всегда вызывается10017740 с ECX=E+3e0 и исходным target.

ChangeSchedule записывает schedule+230, очищает taskindex+234, taskstatus+22c, conditions+180 и DWORD+320. Descriptor10219d44 — Idle Response с7 tasks, interrupt mask10300 и sound mask0. В нём нет interrupt bit20000, поэтому generic warning о sound-mask0 здесь не возникает. Расписание меняется до записи handle, rollback отсутствует.

Setter10017740 возвращает EAX=входной target, и wrapper сохраняет его до возврата: NULL результат не свидетельствует об отказе сменить расписание. NULL target обнуляет обе части EHANDLE; ненулевой target даёт edict через pev+20c, сохраняет pointer и при ненулевом edict обновляет serial. При ненулевом target с NULL edict старый serial остаётся. Проверки alive/player/serial входного private pointer здесь нет.

Именно native descriptor именует+3e0 m_hTalkTarget. Это не follow target+18c и не enemy+184. Wrapper не пишет stop-talk timer+3dc. В speech helper101041f0 существует compatible callback candidate.virtual+24c(this) с последующим копированием timer; прямой binding этого slot на10105890 данным пакетом не доказан.

## Native descriptor table10219c18

Все11 записей имеют count1, flags0. Имена прочитаны из исходной PE, а не подобраны по SDK. Типы10 — DWORD integer;1 — string_t с wire string и восстановлением через engine string allocation;15 — относительное время с base save time;4 — entity-handle remap. Последний имеет native пару pointer/serial, но wire entity index, поэтому descriptor type-size4 не означает native EHANDLE size4. Zero-field omission до преобразования времени и ошибки нижнего serializer описаны в [serializer](../server-serializer/contract.md).

| № | Offset | Native name | Type |
|---|---|---|---|
| 0 | 0x368 | m_bitsSaid | 10 |
| 1 | 0x36c | m_nSpeak | 10 |
| 2 | 0x3c0 | m_useTime | 15 |
| 3 | 0x3c4 | m_iszUse | 1 |
| 4 | 0x3c8 | m_iszUnUse | 1 |
| 5 | 0x3cc | m_iszDecline | 1 |
| 6 | 0x3d0 | m_iszSpeakAs | 1 |
| 7 | 0x3d8 | m_flLastSaidSmelled | 15 |
| 8 | 0x3dc | m_flStopTalkTime | 15 |
| 9 | 0x3e0 | m_hTalkTarget | 4 |
| 10 | 0x3d4 | m_deathNoticed | 10 |

## Exact named schedules: pointer array10219ce0

Descriptor — пять DWORD: task-array pointer, task count, interrupt mask, sound mask, name pointer. Task — DWORD ID плюс исходный float argument (8 bytes). Порядок массива ниже отличается от сортировки адресов: Hello предшествует Speak Wait; MoveAwayFollow предшествует MoveAwayFail. Все59 task byte records и исходные float bits есть в evidence. Проверка не предполагает, что game runtime никогда не меняет эти данные.

| № | Descriptor | Native name | Task pointer / count | Interrupt | Sound | Task ID:float argument по порядку |
|---|---|---|---|---|---|---|
| 0 | 0x10219d44 | Idle Response | 0x10219d0c / 7 | 0x10300 | 0x0 | 3b:1, 1:0.5, 69:0, 61:0, 6a:0, 1e:0, 69:0 |
| 1 | 0x10219d88 | Idle Speak | 0x10219d58 / 6 | 0x10010300 | 0x0 | 62:0, 6a:0, 1e:0, 3b:1, 69:0, 55:0.5 |
| 2 | 0x10219e38 | Idle Hello | 0x10219dd0 / 13 | 0x10038300 | 0x1 | 3b:1, 63:0, 69:0, 1:0.5, 63:0, 69:0, 1:0.5, 63:0, 69:0, 1:0.5, 63:0, 69:0, 1:0.5 |
| 3 | 0x10219dbc | Idle Speak Wait | 0x10219d9c / 4 | 0x10010300 | 0x0 | 3b:1, 62:0, 69:0, 1:2 |
| 4 | 0x10219e54 | Idle Stop Shooting | 0x10219e4c / 1 | 0x30300 | 0x0 | 65:0 |
| 5 | 0x10219e98 | MoveAway | 0x10219e68 / 6 | 0x0 | 0x0 | 3d:47, 18:0, 5f:100, 60:100, 57:0, 6b:0.5 |
| 6 | 0x10219f00 | MoveAwayFollow | 0x10219ed0 / 6 | 0x0 | 0x0 | 3d:15, 18:0, 5f:100, 60:100, 57:0, 3c:15 |
| 7 | 0x10219ebc | MoveAwayFail | 0x10219eac / 2 | 0x0 | 0x0 | 57:0, 6b:0.5 |
| 8 | 0x10219f64 | TlkIdleWatchClient | 0x10219f14 / 3 | 0x30078300 | 0x79 | 57:0, 3b:1, 67:6 |
| 9 | 0x10219f78 | TlkIdleWatchClientStare | 0x10219f2c / 7 | 0x30078300 | 0x79 | 57:0, 3b:1, 68:6, 66:0, 6a:0, 1e:0, 69:0 |
| 10 | 0x10219fac | TlkIdleEyecontact | 0x10219f8c / 4 | 0x10010300 | 0x0 | 6a:0, 1e:0, 3b:1, 69:0 |

Task handlers61/62/63/65/66/67/68/69/6a/6b и movement tasks5f/60 разобраны в [follower-tasks](../server-follower-tasks/contract.md); не подменяем их SDK именами. В частности Start69 ничего не делает, Run69 завершает условно; Run6b сравнивает signed yaw delta с10 без ABS; Run68 может разыменовать NULL edict1. Значения3d:47 и3d:15 — float arguments tasks, а не указатели на schedule. Generic task behavior и scheduler warning находятся в [monster-scheduler](../server-monster-scheduler/contract.md).

## Границы доказанного и дальнейшая ориентация

Полные пять локальных тел и их return/stack cleanup закрыты; сохранённые generic helpers — supporting evidence, не новые cards. [Follower behavior](../server-follower-behavior/contract.md), [gates](../server-follower-gates/contract.md), [tasks](../server-follower-tasks/contract.md), [monster state](../server-monster-state/contract.md), [animation state](../server-animation-state/contract.md) содержат связанные ранее проверенные пути. Comparator runtime-mode ограничения — в [sentence lifecycle](../server-sentence-lifecycle/contract.md).

Остаются concrete derived vtables/callers для этих entry и динамическое связывание speech callback+24c; bounded exact-address/RTTI scans не заменяют полного анализа создания объектов. Также не установлены все runtime writers static schedule storage и locale table comparator. Данный пакет не доказывает универсальную корректность сериализации повреждённых save buffers, отсутствие иных способов сохранять speech payload или runtime достижимость каждого native schedule. Игра, визуальное/звуковое поведение и parity не проверялись.

Воспроизведение: `python analysis/server-follower-schedule-io/capture.py`, затем `python analysis/server-follower-schedule-io/verify.py`. Capture самостоятельно вызывает только статический objdump и не зависит от ignored полного disassembly listing. Verify независимо разбирает PE sections, проверяет SHA оригинала, все C/ASM/support pins, каждую машинную byte row, raw tables/strings, native schedule tuples, ABI guards и соответствие пяти notes.
