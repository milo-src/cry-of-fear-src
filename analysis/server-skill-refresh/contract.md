# Skill refresh / cvar lookup / variadic formatting

Static original hl.dll analysis only; no game execution or implementation. Full primary bodies compared with native bytes. Two prior shallow cards refined, one new wrapper reviewed. Prior cards archived in prior-review.txt.

## 0x100af810 RefreshSkillData_Ordered111ReadsAnd101FloatSlots

Выбирает сложность1..4 и последовательно обновляет101 skill-поле через111 cvar чтений.

Полное native100af810..100aff63, no-arg plain RET; определённого status нет. Engine CVarGetFloat(slot57) читает literal "difficulty"; FSTP сужает ST0 в float32, CVTTSS2SI даёт truncation к signed int. Неограниченный integer сохраняется в10222efc. Signed значение<1 заменяется1, >4 заменяется4; результат пишется10226728. При masked invalid conversion NaN/бесконечность/out-of-range дают INT_MIN и итоговый index1, а не верхний clamp. Engine AlertMessage(slot61) получает(1,literal101cd9fc,index); исходный cvar difficulty назад не записывается.

После AlertMessage идут111 вызовов100fc6c0 с literal base-cvar; каждый результат ST0 сразу FSTP в отдельный float32 global. Полный ordered список push/call/store адресов и строк сохранён в skill-writes.tsv и evidence.skill_writes. Заполняются все101 DWORD от1022672c до102268bc с шагом4, но порядок не монотонный. Десять hitgroup множителей monster/player повторно читаются и записываются:84/88/8c/90/94 и98/9c/a0/a4/a8 относительно10226800. Повторные callbacks не заменять одной cached выборкой.

Это последовательное частичное обновление без транзакции, zeroing/reset таблицы, проверки sign/finite/диапазона float или fallback. При ошибке/невозврате callback предыдущие записи остаются. Helper100fc6c0 заново читает global skill index при каждом вызове, поэтому при reentrant изменении10226728 серия может смешать разные индексы; значения globals не являются константами ресурсов. Refresh не реализует регистрацию cvars или выполнение skill.cfg.

Связь удара: вызов100afca9 с literal101cdffc="sk_cof_punch" сохраняет float по10226844 в100afcae; player punch100e7af0 читает тот же float перед victim.virtual+60. Установленный skill.cfg, прочитанный без запуска игры и закреплённый SHA256 в evidence, содержит sk_cof_punch1..4="5"; это file-default для четырёх уровней, НЕ доказанное runtime damage. Остальные read-only file-defaults прежней карточки сохранены: primary75,secondary45,sprint125,stair50 для всех4; syringe100/80/60/50.

Необычный lookup97: native pointer101ce1c4 начинается bytes736b5f706c725fe4f0eee1eee2e8eae0 и без промежуточного NUL продолжается literal "sk_primary_speed" с101ce1d4; завершение NUL только101ce1e4. Полная raw строка закреплена, результат сохраняется102268ac. Это не исправленная догадка "sk_plr_shotgun": требуется воспроизводить точный byte lookup либо отдельно решать исправление при будущем восстановлении. Lookup108 отдельно начинает с101ce1d4 и правильно читает "sk_primary_speed". Кодировка не используется для вывода смысла испорченного префикса.

Основные таблицы: syringe1022672c, flashlight-charge10226880, melee/punch10226834..4c, firearm10226850..6c, movement102268b0/b4/b8/bc. Полное соответствие остальных health/attack/equipment/hitgroup строк не выводится из соседства адресов, а доказано каждым native PUSH→CALL→FSTP в приложенной таблице. Полнота локального тела не означает закрытые engine cvar producers, порядок исполнения конфигов, все readers или runtime значения.

## 0x100fc6c0 GetSkillCvar_FormatCurrentIndexAndReturnFloatST0

Строит имя base+decimal skill index и возвращает engine float в ST0.

cdecl(baseName*) с plain RET; ECX не this. Выделяет64-byte char buffer поEBP-44h перед cookie поEBP-4. PUSH currentDWORD10226728,baseName,format101de4a8="%s%d",buffer →1001f160. Формат не содержит разделителя: например sk_cof_punch +1 даёт sk_cof_punch1. Index читается один раз для этого lookup и не clamp-ится здесь; signed decimal определяется format backend.

Результат formatter EAX игнорируется. Затем engine CVarGetFloat1022302c(slot57) получает buffer; routine возвращает исходный ST0 после cookie check1013dbb3. Обычный cookie path только сравнивает ECX с1021baf4 и возвращает, не трогая ST0. Ghidra void signature скрывает реальный float-return ABI; Refresh вызывает FSTP после каждого lookup. Cookie failure передаёт управление1013dc4f, его exceptional backend здесь не закрывается.

Нет NULL/base length guard, локального bound64, проверки success форматирования, существования cvar или finite результата. Wrapper1001f160 получает размерffffffff, а не64; cookie не делает formatter ограниченным. Для штатных закреплённых коротких base literals буфер вмещает обычный index1..4, но это не general safety guarantee. GetSkillCvar не меняет10226728, не регистрирует cvar, не устанавливает default и не читает skill.cfg самостоятельно.

## 0x1001f160 Sprintf_VariadicUnlimitedSizeWrapper

Форматирует variadic строку через CRT с размеромffffffff и нормализует отрицательный return в−1.

cdecl(buffer*,format*,...) plain RET. Native LEA EAX,[EBP+10h] формирует pointer на первый variadic DWORD. Подготавливает будущие backend аргументы va_list,localeNULL,format,sizeffffffff,buffer, затем CALL10001790 без логических аргументов. Этот helper лишь MOV EAX,10220aa8; RET. Уже лежащие на стеке слова принадлежат следующему вызову, не являются параметрами GetPrintfOptionsStorage, вопреки saved C.

Читает DWORD optionsLow=[10220aa8] и optionsHigh=[10220aac], ставит low|1 лишь в регистре и PUSH high,low. Вызывает1015cf61 с7 DWORD: (options64,buffer,sizeffffffff,format,localeNULL,va_list). Поддерживающий1015cf61 передаёт те же7 DWORD в1014c9a9 и возвращает EAX; полный format/parser/locale backend остаётся отдельной границей. Сама1001f160 shared options storage не изменяет.

После backend ADD ESP,1ch, TEST EAX,EAX, CMOVS EAX,-1: любой negative int return становится−1, zero/positive сохраняются. Ни запись output NUL, ни проверка destination/format/locale, ни выделение памяти не выполняются в wrapper. Нельзя описывать его как snprintf с размером64; реальный размерffffffff подтверждён PUSH immediate, stack cleanup28 и call ABI. Обработка format errors/невалидных pointers определяется CRT downstream, не безопасным fallback этой оболочки.

## Ordered reconstruction map

[skill-writes.tsv](skill-writes.tsv) lists all111 operations in native order,101 distinct float slots. The exact embedded bytes, config SHA and selected line numbers are in [evidence.json](evidence.json); capture.py reproduces them without target execution. Input index conversion and repeated writes are part of the behavior, not deduplicated pseudocode.

## Remaining boundaries

[Punch resolver](../server-punch-resolution/contract.md) consumer link is proven; file default5 does not settle runtime damage. Registration/cvar storage, script execution order, alternate indirect/bulk writers and callers, full CRT1014c9a9 and cookie failure are separate work. This packet does not declare the full game or movement restored.
