# Глобальные состояния: список, сохранение и переход карты

Статический разбор 18 сохранённых server C-функций. Основа — тела из `decompiled/server/partial-pass/functions`, ограниченная дизассемблировка исходного `hl.dll` и сырые таблицы. Ни игра, ни DLL не исполнялись; ресурсные файлы не менялись. Это семантический контракт изученных путей, не заявление о восстановлении всей системы save/load.

Воспроизводимость: [capture-global.py](capture-global.py), [evidence-global.json](evidence-global.json), [notes-global.json](notes-global.json). Manifest содержит SHA256 исходного DLL `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`, 18 target C, 16 support C, 20 bounded ASM ranges, исходные байты/offset/hash каждого диапазона, таблицы сериализации и первые 15 указателей EntityAPI. Адреса диапазонов ASM заданы start-inclusive/end-exclusive; исходные диапазоны C сохранены inclusive. Чужие SDK-типы не подменяют native доказательства.

## Навигация

| Адрес | Предложенное имя | Назначение |
|---|---|---|
| 101204c0 | CGlobalState constructor | Init, возвращает this |
| 10121520 | Init | head=0, count=0 |
| 101204d0 | ClearStates | освобождение узлов, затем Init |
| 10120670 | EntityAdd | новый узел в голове |
| 10120770 | Find | первая запись с точным именем |
| 101206e0 | EntityFromTable | tail-jump Find |
| 101206f0 | EntityGetState | state или Off при отсутствии |
| 10120710 | EntitySetState | обновить существующий state |
| 10120730 | EntityUpdateLevel | обновить существующий levelName |
| 10120620 | DumpGlobals | диагностика имени/карты/state |
| 10121680 | Save | GLOBAL header, GENT records |
| 10121550 | Restore | очистка и пересоздание списка |
| 101216f0 | SaveGlobalState callback | EntityAPI slot12 |
| 10121610 | RestoreGlobalState callback | EntityAPI slot13 |
| 10016c80 | DispatchRestore | EntityAPI slot8, global overlay |
| 10017b00 | FindGlobalEntity | globalname с проверкой classname |
| 10017e20 | MakeDormant | отключение столкновений/видимости, relink |
| 10102c50 | UpdateOnRemove | отцепление списков, state=Dead |

Соседние map-control producers описаны в [contract-extra.md](contract-extra.md): EnvGlobal Spawn10015080/Use10015fe0 и MultiSource gate100167d0. Они используют именно этот список. Отсутствующая запись у GetState означает0, поэтому не равна отдельному значению «неизвестно».

## Память и владение

Singleton `10232278` доказан immediate ECX в save/restore callbacks, DispatchRestore и UpdateOnRemove. Его `+0` — head, `+4` — count. Это адрес объекта в исходном образе, не снимок текущей runtime-памяти.

Узел имеет размер `0x68`: `name[64]` по0, `levelName[32]` по40, `state DWORD` по60, `next` по64. Add вызывает allocator10171536(0x68,1), встраивает новый узел в голову, копирует две NUL-строки из stringBase+ID, задаёт state и увеличивает count. Проверок дубликатов, размеров строк, результата allocation или диапазона state в этом теле нет. Не следует превращать это наблюдение в утверждение о достижимой уязвимости без upstream-анализа.

Find возвращает заимствованный указатель; ClearStates/Restore его инвалидируют. Поиск точный, с учётом регистра, без hash и без защиты от циклического списка. NameID0 всегда возвращаетNULL. Повторное имя допустимо на уровне Add: первый найденный узел — самый недавно добавленный. SetState и UpdateLevel не вставляют отсутствующие имена. Init только обнуляет два поля, в отличие от ClearStates, который кэширует next, вызывает release101714d1(node) и лишь затем Init.

Raw table1021bad0 содержит три строки `Off`, `On`, `Dead`: это непосредственная связь чисел0/1/2 с названиями. DumpGlobals индексирует эту таблицу значением state без локального bounds check. Add/Set не ограничивают значение этими тремя числами.

## Save/Restore: формат и ошибки

ASM корректирует потерянные Ghidra сигнатуры: Save10121680 и Restore10121550 получают this в ECX, один stack pointer на writer/reader, заканчиваются `RET4` и возвращают EAX0/1. Constructor101204c0 также возвращает this, хотя C объявлен void. EntityFromTable101206e0 заканчивается tail-jump Find с сохранением результата. У завершающего cookie-check1013dbb3 нормальный путь CMP/JNE/RET сохраняет EAX; отдельный bounded ASM включён в manifest. Поведение аварийной cookie-failure ветки не объявляется обычным возвратом.

Таблицы из оригинального PE:

| Таблица/блок | Поле | Native type ID | Offset | Count | Flags |
|---|---|---:|---:|---:|---:|
| 1021b930 / GLOBAL | m_listCount | 10 | 4 | 1 | 0 |
| 1021baa0 / GENT | name | 14 | 0 | 64 | 0 |
| 1021baa0 / GENT | levelName | 14 | 40 | 32 | 0 |
| 1021baa0 / GENT | state | 10 | 60 | 1 | 0 |

Hex offsets; count десятичный. Здесь не присваивается SDK-имя числовому type ID без разбора serializer. Head/next не сериализуются.

Save сначала вызывает WriteFields1011adc0(`cGLOBAL`,`GLOBAL`,this,table,1), затем `cGENT`/`GENT` для последовательных узлов. Любая ошибка writer даёт0. Обход ограничен count и NULL: если список кончился раньше count, функция всё равно возвращает1 и не исправляет записанный header. Узлы сверх count пропускаются. При count<=0 записывается только header.

Уточнение core после отдельного разбора: WriteFields1011adc0 всегда возвращает1 на обычном пути, включая диагностические overflow/Bad type. Проверки0 в GlobalSave существуют, но не обнаруживают эти ошибки. ReadFields0 означает block-token mismatch, а не любую ошибку чтения. Подробности в [serializer contract](../server-serializer/contract.md).

Restore сначала уничтожает старый список. Затем читает GLOBAL через10117010, сохраняет count локально и сбрасывает текущий count. Каждый GENT читается во временные массивы и копируется через Add. Аргументы Add здесь равны адресам временных строк минус stringBase; сохранения stack pointers в списке нет. Ошибка header оставляет старый список удалённым; ошибка GENT возвращает0 с уже добавленной частью. Rollback отсутствует. count<=0 даёт успех с пустым списком; верхний лимит count в этом слое не виден.

Поскольку Save обходит от головы, а Restore вставляет каждый прочитанный узел в голову, успешная загрузка **разворачивает порядок**. Для дубликатов это может изменить первую запись, выбранную Find. Это вывод из последовательности операций, не runtime-тест.

Raw EntityAPI102119f8 доказывает slot12=101216f0 и slot13=10121610. Эти wrappers создают локальный writer/reader из переданного save-data, работают с singleton10232278 и вызывают cleanup10116080. Boolean Save/Restore не проверяется. Reader получает дополнительные DWORD+4=0,+8=1; Новый serializer-разбор уточняет: reader+4 управляет сохранением flags1 полей при global overlay, +8 разрешает model/sound precache. Настройки самого wrapper подтверждены прежним ASM.

Slot14=10121530 подтверждён отдельно коротким [global-reset-callback.asm](global-reset-callback.asm): ClearStates(singleton), затем global10217fe4=1. Для этого адреса нет сохранённой C-карточки, поэтому он **support-only**, не девятнадцатая REVIEW. Назначение флага10217fe4 за пределами этого тела не установлено.

## Entity restore и global overlay

DispatchRestore10016c80 — EntityAPI slot8. ASM показывает cdecl(edict,data,globalFlag), обычный результат0 и специальный результат-1 при state Dead в обычной ветке; потерянный C return не следует повторять. NULL edict/private-data/save-data немедленно дают0.

Общая часть вызывает ObjectCaps virtual+40, Restore virtual+3c(reader), затем Spawn+2c при caps&4 либо Precache+30 иначе. Результат Restore не проверяется. После этих вызовов private data перечитывается из edict, поскольку callback мог изменить сущность.

При `globalFlag==0`, если есть entity и непустой pev.globalname:

1. Найти global record. Если отсутствует — диагностировать и добавить On1 с текущим mapname.
2. Если state==Dead2 — вернуть-1.
3. Иначе сравнить levelName с текущей картой; при несовпадении MakeDormant.

Compare1000aba0 возвращает true при точном равенстве, это не strcmp с нулём при успехе. Дополнительное support C включено в manifest именно для устранения инверсии этого условия.

При `globalFlag!=0` временный reader читает ENTVARS. Cursor data+4/+8 затем возвращается к выбранному entry: таблица data+28, индекс+1c, stride18, offset записи+8. Lookup globalname используется для сравнения data+554 с node.levelName; между lookup и node+40 нет проверкиNULL. Имена полей save-data за пределами подтверждённого строкового/векторного использования здесь не назначаются автоматически по SDK.

При совпадении ищется существующая сущность через10017b00. Она выбирает **первый** globalname и проверяет classname; при неверном классе возвращаетNULL с диагностикой, не продолжая поиск. При отсутствии подходящей сущности overlay заканчивается0.

При успехе сохраняется исходный vector data+544..54c, reader+4 становится1. Vector на время Restore равен `old vector + saved ENTVARS mins - existing entity mins`. Для существующего globalname уровень обновляется на текущую карту **до** Restore. Затем выполняется общая Restore/Spawn-or-Precache часть, private data перечитывается из edict, возвращается исходный vector и при наличии entity вызываются SetOrigin10119fe0 и virtual+a0. Последний callback не объявляется полностью разобранным; автоматического rollback levelName при ошибках этой функции нет.

MakeDormant10017e20 ставит flags|80000000, solid=0, movetype=0, effects|80 и делает SetOrigin для текущего origin. Сущность не удаляет и state списка не меняет. Вызванный scheduler10017ad0 всегда очищает object+58, однако pev.nextthink+104 и object+5c очищает лишь при parent+14==0 и children+1c==0. Поэтому фраза «безусловно отменяет все callbacks» была бы неверной.

## Removal и связи parent/assist

UpdateOnRemove10102c50 при отсутствующем AssistList10223190 печатает диагностическое сообщение и сразу выходит: даже Dead setter не выполняется. В обычном пути исключает this из цепи+3c, затем из parent.children через+14/+1c/+20. Для детей сохраняет next, вызывает100c4db0/100c4c90 с shared vector10222f34..3c и аргументом100, затем обнуляет их parent/sibling. Формулы helpers раскрыты в [parent/scheduler contract](../server-queue-b/contract-parent.md): учитывается прежняя скорость parent. Значение shared vector и его runtime writers отдельно не установлены; безусловное обнуление world скорости не утверждается.

При pev.flags&10000 обнуляются совпадающие own pev ссылки record+8 в массиве102238c0 (count102238cc, stride18). Значение остальных полей и назначение массива не выводятся из одного consumer.

Наконец, непустой globalname передаётся SetState(name,Dead2). Это только изменение **существующей** записи, без вставки. Функция сама не освобождает entity/private data.

## Границы и следующая очередь

Закрыты локальные list/state операции, numeric storage tables, порядок сериализации, wrapper ABI, основные restore/overlay/removal ветви и условия MakeDormant. Общий binary serializer10117010/1011adc0 разобран в [serializer contract](../server-serializer/contract.md): wire/type mapping, remapping и status boundaries. Не закрыты engine save-container, allocator implementation, происхождение всех globalname/map strings, безопасность всех upstream длин, значение10217fe4, полный virtual+a0 и вызовы всех engine callbacks во время реальной смены карты. Лексические callers сохранённого partial-pass не равны полному графу DLL.

Для будущего targeted C capture полезен10121530 (ResetGlobalState); его короткая машинная логика уже сохранена как support. Новая REA-сессия для этого прохода не требовалась. Следующий разбор должен следовать reader/writer или map-transition callers, а не повторно маркировать уже раскрытые операции списка как неизвестные.
