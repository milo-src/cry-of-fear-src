# Server target / master / alias contract

Статический пакет: 25 actual C entries, 31 bounded objdump ranges, 37 source C hashes. Исходный `hl.dll` SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. DLL не исполнялась; REA, игра, сборка и изменение ресурсов не использовались. [Карточки](notes.json), [хэши/диапазоны/таблицы](evidence.json). Названия предложены для навигации, не восстановлены из исходников.

## Карта вызовов

```text
FireTargets10101ff0 → 10118500(start,name,activator)
  exact *locus → activator with start-offset guard
  else 10118590 → 10118980 special resolver
    first dot → 10118800 group member path → 1000d890
    exact *player → first classname player
    *alias → 10118780 → alias virtual+11c(start)
    no special result → 10118480(start,"targetname",originalName)
FireTargets final successful enumeration → 10118700 FlushAliases
Master10119060 → 10118590 → entity virtual+58(context) == 2
InfoAlias setter1000d550 / Use1000e310 → 101172e0 pending queue
FlushAliases → virtual+128 → InfoAlias1000d660 pending→active
```

Важное отличие ABI: callback `10223060` — **EntOffsetOfPEntity**, не IndexOfEdict. `GiveFnptrsToDll100b4aa0` копирует144 dword в `10222f48`; SDK enginefuncs slot70 даёт10223060, slot71 IndexOfEdict даёт10223064. Все минимумы и start guards ниже сравнивают возвращённые **edict offsets**. Порядок обычно соответствует edict storage, но фактическую формулу engine callback этот пакет не исследовал. FindEntityByString=slot14/10222f80, FindEntityInSphere=slot16/10222f88, AllocString=slot67/10223054.

## Имена, порядок и контекст

`10118480` переводит объект DLL через `object+4→pev+20c` в edict и возвращает private data `edict+7c`. Обходит пустые private-data совпадения. Нулевой edict или нулевой EntOffsetOfPEntity прекращает цикл. `10118460` выбирает classname; `101184e0` выбирает **target**. Sphere wrapper101186b0 запрашивает только один следующий edict и пустое private data не пропускает.

`10118500` распознаёт только точное case-sensitive `*locus`; null имя до сравнения не проверяется. Контекст не хранится и не копируется. При ненулевом start он возвращается лишь если его edict offset строго больше start offset. Остальные имена переходят в10118590.

Special resolver10118980 сначала ищет **первую точку в любом месте**, включая имена с начальным `*`. Только без точки разбирает `*player` и `*alias`. `*player` всегда получает первого player от start0, после чего проверяет offset; это не перечисление всех игроков. `*alias` — имя alias-объекта, не glob pattern. Отказ любого special branch возвращает0; внешний10118590 затем пробует исходное имя как targetname. Engine wildcard/case правила самого FindEntityByString здесь остаются неизвестны; не приписывать им синтаксис `*alias`.

`10118780` перечисляет одноимённые alias, допускает virtual+24!=0 и вызывает virtual+11c(start). Сохраняет ненулевую цель с минимальным edict offset; равенство не заменяет предыдущую. `10118800` аналогично выбирает минимальную цель среди объектов с точным classname `info_group`, разрешая member через1000d890 и рекурсивно обходя остаток после точки. Между этими функциями возможна рекурсия через alias; cycle/depth guard не найден в прочитанных телах.

Name-first nearest101185c0 возвращает найденный named объект **без проверки радиуса**. Только при отсутствии имени перечисляет classname и сравнивает origin distance с radius². Порог строгий, равенство исключается; sqrt→float→square сохранён как оригинальный вычислительный путь.

## Master: не boolean callback

В10119060 ASM восстанавливает потерянный Ghidra return: обычное имя даёт `state == 2`, префикс `~` даёт `state != 2`, где state — возврат virtual+58(activator). Это не `state != 0`. Нулевой master string_t и отсутствующий master разрешают действие (return1). Незакрытая скобка диагностируется и возвращает0.

Сначала ищется всё имя, с удалением только ведущего `~`. Лишь при отсутствии совпадения первый `(...)` задаёт alternate context: его содержимое ищется через10118590 без locus-aware wrapper и может вернутьnull. Prefix становится именем master; суффикс после первой `)` не читается. Отсутствующий prefix master возвращает1; это отличается от синтаксической ошибки закрывающей скобки.

## Данные alias и группы

| Объект | Данные | Владение / действие |
|---|---|---|
| CInfoAlias | pev+1d8 active message, pev+1ec pending noise3 | string_t, без собственной копии строки |
| CBaseAlias queue | world10223190+fc head; object+dc next; object+60 bit1000 | intrusive links; allocator/free отсутствует |
| CInfoGroup | +dc count, +e0 names[16], +120 values[16], +160 defaultmember | AllocString для KV; member lookup возвращает string_t |
| CMultiAlias | +e0 count,+e4 names[16],+124 total,+128 weights[16],+168 mode | AllocString names; atoi weights без clamp |
| Group fallback | shared10222d70 | временный prefix+member; synthetic string_t=address-poolbase |

PE factory/vtable evidence: CInfoAlias factory1000d230→101a296c; CInfoGroup1000d290→101a2710; CMultiAlias1000d2f0→101a2830; CTriggerChangeAlias1000d350→101a2c70. Только ограниченные прочитанные slots атрибутированы этим классам; bytes после конца короткой таблицы не считаются её методами.

Для CInfoAlias и CMultiAlias virtual+24=1000dab0(return1). Follow+11c соответственно1000d6c0/1000d6f0. Entity setter+120 общий1000d530 берёт `entity.pev.targetname`, затем virtual+124: у InfoAlias1000d550 staging, у MultiAlias1000d500 diagnostic cannot change value. Commit+128: InfoAlias1000d660, MultiAlias1000d650 no-op. Для info_group и trigger_changealias virtual+24=1000dac0(return0).

Queue101172e0 ставит dirty bit и ищет pointer identity в списке; повторное добавление не создаёт дубликат. Новая запись идёт в хвост и next=0. Flush10118700 вызывает commit и после callback **повторно читает world.head**, очищает его flag, продвигает голову. Не освобождает entity, не делает snapshot. Pending target не активен до первого flush. Вложенный FireTargets или callback может вызвать flush до завершения внешнего перечисления. Отдельный group Use1000e3c0 передаёт **себя** в alias entity setter: `PUSH EDI` в1000e43a устраняет потерянный аргумент в C.

InfoAlias initialization1000e230: bit0 выбирает netname вместо target в active message. Use1000e310 безусловно toggles bit0, записывает соответствующее имя вpending и queue; четыре стандартных Use аргумента не читаются (RET16). Spawnflags bit2 включает DEBUG вывод, не влияет на выбор.

## MultiAlias и ограничения входа

Mode0 перебирает все names и выбирает минимальный offset. Mode1 вычисляет random%total+1 и последовательно вычитает веса, затем разрешает один выбранный slot. Нулевой total не защищён перед IDIV. Любой ненулевой mode reseed-ит helper1016d94c(int(time*100)), отбрасывает один random draw1016d92b. Полный алгоритм и ownership PRNG остаются за пределами пакета.

Для mode!=1 первичный фильтр использует `random%100 <= weight`. Только mode2 фильтрует последующие элементы, причём **строго `< weight`** (ASM JGE против JG в обратном сравнении). Mode вне0/1/2 после первичного фильтра перечисляет все оставшиеся элементы. Не нормализовать это в ожидаемый процентный алгоритм.

KV group/defaultmember и multi/m_iMode сравниваются case-sensitive. Другие keys обрезаются helper1011a760 до первого `#`, затем AllocString; это позволяет несколько distinct map keys с общим logical name. Group lookup берёт первое совпадение. Лимит16 проверяется, но временный128-byte key buffer передаётся helper без capacity. Weight/mode atoi не clamp-ится. В dot/master parser bounds checks стоят **после** strncpy; в outer10118980 длинаprefix<=80, nested10118800/master<=79. Shared group fallback копирует без видимого limit; размер scratch не установлен. Это свойства native кода, не инструкции по эксплуатации и не доказанный crash на реальных картах.

## Особая открытая граница trigger_changealias

1000e490: alias выбирается context-aware10118500 по target. Для netname=`*locus` сохраняется activator. Иначе bit0 вызывает **только**10118980; без bit0 остаётся pointer на исходную строку. Ненулевой итог отправляется в virtual+120, нулевой — original string_t вvirtual+124. ASM подтверждает эту схему. Для известного InfoAlias+120 ожидает entity pointer; поэтому raw-string ветка выглядит несогласованно. Достижимость через реальные map inputs и runtime последствия не проверялись. В карточке confidence medium относится к назначению branch, не к сомнению в байтах. Не исправлять оригинал молчаливым swap условий.

## Остаточные вопросы

- Engine FindEntityByString: точная matching/wildcard/case семантика и формула EntOffsetOfPEntity не исследованы здесь.
- PRNG1016d94c/1016d92b: global/thread ownership и алгоритм; для текущей карты вызовов достаточно зафиксированных вызовов/IDIV/сравнений.
- Реальная достижимость raw-pointer trigger_changealias branch, циклических alias и malformed длинных map keys требует отдельной проверки; runtime разрешения в этой задаче нет.
- Save/restore этих четырёх классов, loader field offsets и все inherited virtual callbacks не объявлены полностью разобранными. PE table prefix не равен полному C++ ABI класса.
