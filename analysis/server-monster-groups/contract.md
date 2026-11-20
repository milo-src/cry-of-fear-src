# Выбор участников и уведомления в цепи CTalkMonster

Только статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Четыре primary: `10103f70`, `10104040`, `10104670`, `10105180`; остальные сохранённые тела — support, без новых REVIEW. Полные primary C сопоставлены со всеми native инструкциями. Смещения и адреса ниже шестнадцатеричные; количества, индексы таблицы и float-константы подписаны десятичными значениями. Цель не исполнялась.

## Общая связность и границы

Нативный PE export `?FollowerUse@CTalkMonster@@QAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z`, ordinal 135, указывает на `101048c0`. Его прямой CALL `10104958` вызывает `10105180(this, secondEntityArgument, 1)`. Это доказывает принадлежность цепи поведения CTalkMonster; исходные имена четырёх неэкспортированных helpers не восстановлены. Таблица конкретного созданного класса и реализации virtual `+240` / `+250` не установлены. В raw секциях PE не найдено точного RTTI-имени `.?AVCTalkMonster@@\0`; точный LE32 scan `.rdata/.data` не нашёл адресов четырёх helpers, `101048c0` и `101050b0`. Это ограниченный статический поиск, не доказательство отсутствия класса или вызовов во время игры.

Таблица `10219cc8` содержит шесть подтверждённых указателей: index 0 → `monster_human_alpha`, 1 → `monster_alpha_pistol`, 2 → `monster_human_military`, 3 → `monster_barney`, 4 → `monster_scientist`, 5 → `monster_sitting_scientist`. Строки прочитаны из native PE. Selector проходит через `this.virtual250(selector)`, и только его полный EAX индексирует таблицу. Не доказано, что selector равен полученному индексу. Ни selector, ни возвращённый индекс не проверяются на допустимый диапазон. Следующие DWORD в PE уже не являются подтверждёнными classname-элементами; таблицу не расширяем по соседним данным.

Нативная таблица MONSTER `10216e08` именует object `+18c` как `m_hTargetEnt` (FIELD_EHANDLE, count 1), `+184` как `m_hEnemy`, `+224` как `m_MonsterState`, `+2ec` как `m_afMemory`. Это смещения объекта, не entvars: совпадающее entvars `+18c` называется `chain`. В предыдущем derived-death описании ошибочное `candidate.enemy+18c` исправлено на `candidate.m_hTargetEnt+18c`; точный прежний блок, пути доказательств и замены сохранены в `correction.json`.

Support `10118460(previous, classname)` — cdecl wrapper `10118480(previous, "classname", classname)`, передающий EAX результата. Начальный edict берётся из `previous->pev+20c`, либо NULL. Engine FindEntityByString вызывается повторно; NULL edict или нулевой результат EntOffsetOfPEntity завершают поиск с EAX=0; edict с NULL private data пропускается. Первый nonNULL private data возвращается без проверки конкретного класса и без передачи владения. Строку wrapper не копирует и не проверяет на NULL.

Support `1011a800(start, end, mode, skipEdict, traceOut)` переписывает mode в точное `(mode == 1)` и tail-JMP вызывает engine TraceLine (слот 31 таблицы `10222f48`). Все рассматриваемые calls передают mode=1. Здесь доказаны аргументы и проверка trace fraction; реализация движка и столкновения не воспроизводились. Обе функции поиска читают только fraction по смещению `+10` результата, не allsolid/startsolid/hit entity.

## 10104040 — NextMappedAliveEntity

ABI: ECX=this, три DWORD stack arguments `(previous, selector, requireTrace)`; `RET 0xc`; полный EAX — указатель найденного entity private data либо NULL. this не проверяется на NULL; NULL previous поддерживается wrapper, а ненулевой previous не проверяется на serial/lifetime. Предыдущий entity — курсор поиска, не включённый в результат участник.

Сначала ровно один раз вызывается `this.virtual250(selector)`. EAX без bounds-check используется как индекс в `10219cc8`; выбранный указатель classname сохраняется и остаётся одним для всего вызова. В отличие от `10104670`, NULL classname здесь не отсеивается до engine wrapper. Engine search запускается после previous. Каждая найденная запись, равная this, пропускается; затем вызывается её virtual `+bc`, и нулевой полный EAX также означает пропуск.

При `requireTrace == 0` первый такой кандидат немедленно возвращается. При любом ненулевом requireTrace локальная конечная точка строится из candidate `pev.origin.x/y`, но z заменяется на candidate `pev.absmax.z` (`+d8`). Начало — указатель на текущее `this.pev.origin` (`+8`), включая обычный origin.z. Skip-аргумент — текущее `this.pev+20c`. Таким образом, этот helper трассирует от origin источника к верху bounding box кандидата, а не между двумя верхними точками.

Принимается только ordered `fraction == 1.0f`: `UCOMISS; LAHF; TEST AH,44h; JNP` различает equality и unordered. NaN, любые дроби ниже/выше единицы отклоняются. После отказа поиск продолжается с текущим найденным entity; при исчерпании EAX=0. Дистанционного лимита, FOV, команды/отношения к this, проверки m_hTargetEnt или состояния `+224` здесь нет. Конкретные virtual `+250` и `+bc` зависят от фактического класса; caller обязан предоставлять совместимые объекты.

## 10103f70 — MarkVisibleMappedMembersMemoryBit1

ABI: ECX=this, stack arguments отсутствуют, `RET`; на обычном выходе полный EAX явно восстановлен в исходный this. Это не количество изменённых объектов и не boolean успеха. Функция обходит selectors в десятичном порядке 0,1,2,3,4,5. Для каждого запускает `10104040(NULL, selector, 1)` и продолжает с предыдущим найденным указателем, пока не получит NULL; после исчерпания курсор действительно NULL перед следующим selector.

На каждом результате вызывается candidate.virtual `+78`. Результат без NULL guard используется как ECX для virtual `+bc`; если полный EAX nonzero, функция OR-ит DWORD result `+2ec` с 1. Значит, IsAlive-подобный тест выполняется дважды: сначала на исходном entity внутри finder, затем на объекте, возвращённом `+78`. При NULL результате `+78` код разыменовывает NULL — не считать этот случай безопасным пропуском.

Прямая запись только `m_afMemory |= 1`: функция не меняет target/enemy handle, не наносит урон, не пишет расписание и не отправляет сообщения. Видимость обеспечена finder, но расстояние не ограничено. При повторяющемся mapping selectors один объект может посещаться повторно; дедупликации и ограничителя числа entity нет. Повторный OR идемпотентен, остальные callback-вызовы могут иметь собственные эффекты.

Подтверждённый caller `101050b0` вызывает этот helper в ветке nonNULL attacker и attacker flags low-byte mask 0x8 (бит 3), до `10105180(attackerPrivate, 0)`. В exported FollowerUse есть дальнейший consumer memory bit 1: после своего вызова `10105180(...,1)` он проверяет this `+2ec & 1` и при наличии выводит literal `I'm not following you, you evil person!` и возвращается. Это доказывает связь флага с отказом в этой конкретной ветке; более широкое имя бита и происхождение всех его записей не установлены.

## 10104670 — FindNearestVisibleMappedEntityOrPlayer

ABI: ECX=this, один DWORD `playerMode`, `RET 4`, полный EAX — заимствованный entity pointer или NULL. Начальное best=NULL, bestDistance=float32 10000000.0 из `101dfa38`. Локальный start snapshot фиксируется до перечисления: this `pev.origin.x`, `origin.y`, `absmax.z`. При нулевом playerMode selectors идут 5,4,3,2,1,0; для каждого вызывается virtual `+250` и индексируется classname table. NULL classname пропускается. При любом ненулевом playerMode выполняется единственный проход по literal `player`, без вызова `+250` и без таблицы.

Курсор engine search начинается NULL, после обычного исчерпания каждого класса снова NULL. Отбор: candidate != this; candidate.virtual `+bc` возвращает nonzero; candidate.virtual `+78` возвращает nonNULL M; DWORD M `+224` не равен ни 6, ни 5. Другие значения, включая отрицательные, здесь не исключаются. Return сохраняет исходный candidate, а не M. Кандидат не проверяется через virtual IsPlayer даже в playerMode: там ограничение задано classname search.

Конечный локальный snapshot — candidate `origin.x/y, absmax.z`. Каждая компонента разности и квадрат вычисляются SSE float32; сумма имеет порядок `dy² + dx²`, затем `+ dz²`, каждый шаг округляется float32. Полученная сумма расширяется в double. При ordered отрицательной сумме вызывается `1016be90` (арифметический libm fallback, внутренности вне пакета); иначе выполняется SQRTSD, включая unordered NaN. Результат double округляется обратно в float32 distance. `COMISS best,distance; JBE skip` пропускает equality, больший distance и NaN: нужна строгая ordered distance < best.

Только после улучшения делается TraceLine между двумя локальными верхними точками, mode=1, skip=this.pev+20c. Это отличается от origin-start в `10104040`. Требуется ordered fraction==1.0f; startsolid/allsolid отдельно не читаются. После trace расстояние заново вычисляется из локальных координат тем же порядком float-операций и double square-root; второй float32 результат расширяется в double и сравнивается с double 500.0 из `101dfa30`. Принимается строго ordered distance < 500.0; ровно 500 и NaN отклоняются. Тогда best=candidate и bestDistance=второй float32 distance.

Равные расстояния не заменяют прежний результат, поэтому при стабильных callback-результатах победитель определяется порядком selectors 5→0 и engine enumeration. Проверки team, relationship, FOV или target handle нет. Снимок start не пересчитывается при движении this во время внешних callbacks; entity и pev pointers используются без lifetime pin. Нет изменения entity fields, allocation или передачи владения в собственном теле.

Подтверждённые прямые callers: `10104110` передаёт 1 (CALL 10104135); `101041f0` использует 0 (10104424) и 1 (101044c2); `10104540` передаёт 1 (10104594), затем присваивает результат через EHANDLE setter в this+3e0; `101050b0` передаёт 0 (см. derived-death); `10105eb0` передаёт 0 (10105ee1). Это native callsite-навигация по сохранённым телам, не полный граф достижимости. Полные условия соседних поведения/речи не считаются раскрытыми карточкой finder.

## 10105180 — NotifyMappedTargetMatchesBeyondLimit

ABI: ECX=this, два stack DWORD `(targetPrivate, keepCount)`, `RET 8`; C-declaration void. На обычном завершении EAX содержит 6 от завершённого selector-loop; это не число совпадений и не подтверждение успеха. Counter в EBX начинается с 0 и общий для всех шести selectors 0→5. Finder вызывается как `10104040(previous, selector, 0)`, то есть без visibility trace и без distance gate. Он всё ещё исключает this и требует nonzero candidate.virtual `+bc`.

Для найденного entity вызывается virtual `+78`; NULL результат M здесь корректно пропускается. `10017790` разрешает EHANDLE по M+18c: NULL edict или serial mismatch дают NULL; valid edict возвращает его private data, которое также может быть NULL. Сравнивается полный EAX с targetPrivate, без проверки targetPrivate на NULL. Поэтому пустые/устаревшие target handles могут совпасть при targetPrivate=NULL. Это **m_hTargetEnt**, а не m_hEnemy (+184).

Каждое совпадение увеличивает 32-bit counter ровно один раз; затем signed `counter > keepCount` вызывает M.virtual `+240(1,1)` (оба DWORD pushes, ECX=M). При counter<=keepCount никакого такого вызова нет. Обход продолжается и после уведомления, counter не сбрасывается между selectors. Для limit=0 уведомляется каждое совпадение в обычном диапазоне счётчика; limit=1 пропускает первое, но не прекращает поиск. Отрицательный limit также не является ранним запретом. Native INC допускает wraparound, а сравнение остаётся signed. Дубликаты mapping считаются отдельными посещениями — количество не обязательно равно количеству разных NPC.

Собственное тело не очищает m_hTargetEnt, не записывает enemy, не модифицирует memory и не удаляет entity. Эффект virtual240 требует конкретного callback; обозначение «остановить следование» по SDK здесь не подменяет отсутствующую native реализацию. Exported CTalkMonster::FollowerUse вызывает helper с secondEntityArgument и limit=1 до memory-bit отказа и до `10105920`; `101050b0` вызывает его с attacker private/NULL и limit=0. Support `10104f10` проверяет валидность this+18c и virtual IsPlayer цели, а `10105920` записывает свой первый аргумент через EHANDLE setter именно в this+18c. Это дополнительно закрепляет направление target handle без догадки по соседству.

## Что остаётся открытым

Четыре primary разобраны по всем локальным ветвям и native ABI. Открыты конкретная реализация mapping virtual250, callbacks virtual240/254 и их concrete vtables/factory, полный набор достижимых классов, фактическое участие legacy classname-таблицы в игровых картах, эффекты engine enumeration/TraceLine и внутренности fallback sqrt. Отсутствие RTTI и статических function-pointer hits не закрывает эти вопросы. Это не восстановленный игровой NPC subsystem и не наблюдение runtime. Новые карточки только для четырёх primary; support FollowerUse и соседние speech helpers требуют своих полных разборов.

## Продолжение разбора: pass16

[Follower behavior](../server-follower-behavior/contract.md) закрывает101048c0/10105920/10104110/101041f0/10104540/10105eb0: Use, begin follow, damage notification и реплики. CTalkMonster_FollowerUse имеет export; используемый entity — второй аргумент native Use, speech virtual1a0 получает четыре stack DWORD. Точный поиск LE32 в raw data не установил concrete tables; их callbacks/достижимость остаются открыты. m_hTargetEnt18c не смешивать с m_hEnemy184.

## Продолжение разбора: pass17

Продолжение pass17:15 entries в server-follower-gates/server-follower-tasks/server-follower-speech-policy. Полные локальные speech/timing/relations/task/schedule branches теперь имеют REVIEW, десять schedule descriptors сохранены вместе с selection. Concrete owners, initialization и callback installation остаются открыты. Enum numeric IDs в task таблицах не подменяются именами SDK без native основания.

## Продолжение разбора: pass18

Актуальное продолжение pass18: [initialization](../server-follower-initialization/contract.md) закрывает10105f70/101058c0:19 payload strings, prefix, independent spawnflag checks и group dispatch. [Schedule/IO](../server-follower-schedule-io/contract.md) закрывает101053d0/101057f0/10105850/10105880/10105890,11 native schedule descriptors и11 TALK save fields. [Runtime helpers](../server-follower-runtime-helpers/contract.md) закрывает10104020/10104f50/10106430/101064f0. Эти11 primary больше не pending. Таблица10219c18 подтверждает3d4=m_deathNoticed,3d0=m_iszSpeakAs,3c0=m_useTime,3dc=m_flStopTalkTime,3e0=m_hTalkTarget. Concrete vtable bindings, runtime reachability и engine string lifetime по-прежнему открыты; см. точные границы новых контрактов.
