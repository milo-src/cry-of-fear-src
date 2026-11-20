# MoveWith: создание дерева, переключение родителей и сохранение

Статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Здесь 15 новых actual C identities и 14 supporting bodies. Названия `proposed_name` — навигационные имена, не восстановленные debug symbols. [Доказательства](evidence.json) фиксируют исходные C, полные ограниченные ASM, таблицы и строки оригинального PE. Проверены 29 C/ASM, 1073 строки байтов дизассемблирования и полные диапазоны функций. Игра не запускалась, ресурсы и порт не менялись.

Связанные карты: [scheduler и propagation](../server-queue-b/contract-parent.md), [линейное/угловое движение](../server-queue-b/contract-extra.md), [поиск target и alias](../server-targets/contract.md), [UpdateOnRemove и global state](../server-queue-a/contract-global.md). Engine callback scheduling доказывается отдельным проходом родительского агента; этот пакет не устанавливает полный порядок engine frame.

## Быстрая навигация

| Адрес | Роль | Главные связи |
|---|---|---|
| 10101a90 | Factory info_movewith | engine allocation dch; vtable101df4f0 |
| 10102be0 | Spawn | выбирает target/netname → m_MoveWith |
| 10017250 | Activate | AddAssist; AddAlias; Attach; virtual48 |
| 10017bc0 | Первичная привязка | lookup10118590; prepend; local offsets; origin setter |
| 10102300 | GetState | spawnflag1 → state2/0 |
| 10102840 | ObjectCaps | parent virtual40; собственный результат всегда0 |
| 10102dd0 | Use | ShouldToggle; detach; выбор нового имени; prepend; velocity setter |
| 100176f0 | GetNextTarget | targetID → общий lookup |
| 10017210 | Согласование timer | внешнее nextthink → desired/cache |
| 10018000 | Save | virtual14; ENTVARS; BASE22 |
| 10017f30 | Restore | ENTVARS; BASE22; model/bounds fixup |
| 101028e0 | SUB_Remove | UpdateOnRemove; health; engine RemoveEntity |
| 100172a0 | SetAbsBox adapter | ECX.this.pev →10018140 |
| 10018140 | Absolute bounds | cube estimate либо translated mins/maxs; padding1 |
| 10017910 | CorpseFolllow | отдельный source pev+298; прямой origin copy; think |

`10102f90 info_movewith` и `10017aa0 DeadRemoveThink` — подтверждённые JMP thunks на10101a90 и101028e0. В новых карточках они не считаются отдельными реализациями.

## Владение и структура

`this` — private entity object, `this+4` — pev. Native BASE descriptors по10211760 дают имена полей, а не только эвристические offset:

| Offset | Имя native descriptor | Значение в исследованном пути |
|---|---|---|
| +14 | m_pMoveWith | прямой parent pointer |
| +18 | m_MoveWith | stringID имени parent |
| +1c | m_pChildMoveWith | head связного списка children |
| +20 | m_pSiblingMoveWith | next sibling |
| +24..2c | m_vecMoveWithOffset | разность world origins |
| +30..38 | m_vecRotWithOffset | разность Euler angles при первичной привязке |
| +40..48 | m_vecPostAssistVel | сохранённая линейная скорость assist |
| +4c..54 | m_vecPostAssistAVel | сохранённая угловая скорость assist |
| +58 | m_fNextThink | desired deadline |
| +5c | m_fPevNextThink | cached engine nextthink |
| +60 | m_iLFlags | assist/alias flags |
| +64 | m_iStyle | native saved field; здесь не интерпретируется |
| +74 | m_activated | latch первичного Activate |
| +78/+7c/+80/+84 | m_pfnThink/Touch/Use/Blocked | saved callback fields |

Нативная таблица также содержит m_pGoalEnt+0c, b_Saving+08, m_bFadeOut+88, m_bIsBoss+0a, m_bFrozenByCamera+09. Все22 записи имеют count1/flags0. Полный type_id/offset/name список в evidence. Типы3 (entity references),7 (vectors),11 (callbacks),15 (times) здесь зафиксированы как числовые native descriptors: сериализованный формат и relocation нельзя выводить только из их номеров. `AssistList next+3c` и vector+68..70 в BASE22 отсутствуют.

Factory10101a90 запрашивает0xdc байт у engine allocator10223044 и ставит vtable101df4f0. Это не доказательство полного zero initialization: такого конструктора в теле нет. Если edict уже имеет private pointer, фабрика не заменяет его. Если allocation вернулNULL, ASM всё равно доходит до записи `[EAX+4]`; безопасный failure return отсутствует. Engine принимает edict на удаление через10222fa0; этот код не освобождает private allocation самостоятельно.

## Первичная привязка

1. Spawn10102be0 выбирает nameID из pev.target(+1cc), если spawnflag1 снят, иначе из netname(+1d4). Spawnflag2 устанавливает solid3/movetype5. Без него эти поля не меняются.
2. Activate10017250 на каждом вызове проверяет flags&a0h для AddAssist100c44e0, затем flags&1000h для AddAlias101172e0. Это не однократная часть.
3. Если m_activated==0, сначала ставится1, затем Attach10017bc0, затем virtual+48. Для info_movewith этот callback — пустой1000df80. Ненайденный parent не отменяет latch и не подавляет callback.
4. Attach при ненулевом имени выполняет10118590(0,name). Этот helper сначала вызывает custom10118980, затем engine targetname fallback10118480, поэтому назвать поиск только targetname неточно.
5. Parent записывается в+14 до проверкиNULL. Если найден, просматривается child/sibling цепь; если this уже присутствует, возврат. Иначе this добавляется в начало.
6. При movetype0 выбирается7 для solid4, иначе8; ненулевой movetype сохраняется. Если parent.vector68 равен sharedVector10222f34..3c, localOrigin=ownOrigin-parentOrigin. Иначе ASM вызывает100c4550(this,ownOrigin+parent.vector68), а затем own.vector68+=parent.vector68. Сохранённый C потерял аргументы этого setter.
7. В обычном конце localAngles=ownAngles-parentAngles.

Это разность координат, не поворот дочерней системы через матрицу. Никакой проверки ancestor/self cycle и предварительного detach из прежнего parent здесь нет. Вызов предполагает согласованное исходное состояние объекта, а не универсальную безопасную операцию reparent.

## Переключение info_movewith через Use

Vtable101df4f0: +2c Spawn, +38 Save, +3c Restore, +40 ObjectCaps, +44 Activate, +48 no-op, +4c SetAbsBox, +5c GetState, +e8 Use. Raw таблица сохранена полностью на64 entries.

GetState10102300 возвращает `~(spawnflags*2)&2`: младший бит снят →2, установлен →0. ShouldToggle10018350 допускает Use2/3 всегда; при state2 отклоняет запрос1 и допускает0, при state0 отклоняет0 и допускает1. Это числовые состояния, не булев флаг. ObjectCaps10102840 вызывает родительский virtual+40 при наличии parent, но всегда возвращает0; parent caps не наследуются.

Use10102dd0 имеет четыре stack arguments, `RET10h`; decompiler потерял value. После ShouldToggle:

- Старый parent: удаляет this из child/sibling цепи. Если this не найден у ожидаемого предшественника, diagnostic и возврат до смены имени/флага. Для повреждённого состояния parent!=NULL/child==NULL отдельной NULL проверки нет.
- Успешный detach обнуляет parent/sibling, затем переключает spawnflag1 и m_MoveWith: установленный бит выбирает netname, снятый target.
- Ненулевое новое имя ищется через10118590. Missing parent оставляет уже выполненные detach и смену флага/имени; rollback нет. Обычная финальная velocity операция в этой error ветке пропускается.
- Найденный parent получает this в начало children, если this ещё не встретился при обходе. Вычисляется localOrigin. При повторном присутствии функция выходит до финального velocity setter.
- В обычном конце, в том числе при новом nameID0, ASM передаёт100c4ed0(this,sharedVector10222f34..3c). Этот parent-aware setter разобран в предыдущем пакете. Значение shared vector нельзя объявлять постоянным нулём без анализа всех writers/runtime.

| Действие | Attach10017bc0 | Use10102dd0 |
|---|---|---|
| Удаление прежней связи | нет | да, до поиска новой |
| Модификация movetype0 | да | нет |
| Учет parent.vector68 | да | нет |
| Пересчёт localOrigin | да | да при новой связи |
| Пересчёт localAngles | да | нет |
| Финальный linear velocity setter | нет | да в обычном конце |
| Angular velocity reset | нет | нет |
| Rollback при missing parent | нет | нет |
| Self/ancestor-cycle guard | нет | нет |

## Save, Restore и удаление

Save10018000 вызывается с ECX=this и writer в stack (`RET4`). Сначала virtual+14, для этой vtable10017210. Timer reconcile сравнивает pev.nextthink с cached+5c и при неравенстве добавляет их разность к desired+58, затем обновляет cached. Нет ограничений positive/finite/parent. Далее WriteEntvars1011ad70; при успехе WriteFields1011adc0 записывает22 поля BASE. Label выбирается из targetname, иначе classname. Порядок Save/Restore доказан направлением reader/writer, не подписью decompiler.

Restore10017f30 с reader сначала ReadEntvars10116c30; только при успехе ReadFields10117010(BASE22). Вне зависимости от результата чтения, при ненулевых modelindex и model precache/SetModel восстанавливают модель, затем1011a030 возвращает прежние mins/maxs. Возвращается сохранённый reader result. Эта функция не зовёт Attach и не добавляет assist; внешняя dispatch/activate последовательность — отдельный контракт. Сохранённые ссылки не означают, что на диске лежат голые process pointers.

SUB_Remove101028e0 вызывает уже изученный UpdateOnRemove10102c50: удаление из assist/parent цепей, освобождение children от parent и global state update описаны в связанном global контракте. Затем при health>0 обнуляет health и пишет diagnostic, после чего всегда передаёт edict engine RemoveEntity. Ранний выход cleanup при пустом sentinel не предотвращает последующее engine removal. Engine ownership/free private allocation не раскрыт этим телом.

## Границы и отдельный follower

SetAbsBox100172a0 передаёт pev в10018140. Для обычных конечных координат при solid4 и ненулевых углах `r=max(0,abs(minsXYZ),abs(maxsXYZ))`, abs bounds=origin±r. Иначе bounds=origin+mins/maxs. Всегда добавляется padding1 со всех сторон. Это кубическая оценка, не точное вращение corners и не sweep/trace. Гарантия охвата произвольного повернутого bbox отсутствует: при исходных XY bounds ±100 и yaw45 точный extent около141.4, а native оценка с padding даёт101. Floating special cases не объявляются проверенными.

CorpseFolllow10017910 использует другой механизм: source=*(pev+298). ПриNULL очищает think callback+78 и вызывает CancelThink10017ad0. Иначе копирует source+88..90 прямо в own pev.origin и вызывает virtual+8 с delay0. Тип/producer source не установлены: нельзя подменять его MoveWith parent или EHANDLE. Здесь нет SetOrigin, parent relink или local offsets; delay0 не доказывает исполнение ровно на следующем кадре.

## Точные оставшиеся границы

- Producer/полный смысл vector object+68..70 и все writers sharedVector10222f34..3c ещё не закрыты. Первичная привязка уже имеет точную consumer формулу.
- Native reader relocation type3/11 и time adjustment type15 теперь разобраны в [serializer contract](../server-serializer/contract.md). Открыты producer entity IDs, token/function-name lifetime и engine save-container. BASE type12 имеет genericSize4: b_Saving+8/b_Frozen+9/b_IsBoss+a задают перекрывающиеся DWORD-окна; имена не доказывают BYTE wire.
- Producer/lifetime source pev+298 в CorpseFolllow не установлен; не смешивать эту систему с MoveWith.
- Внешний порядок engine StartFrame/PreThink/PostThink и map activation после restore не выводится из локальной vtable. Этот пакет содержит только прямые вызовы и записи, не гарантию runtime порядка.
- Cycles и поврежденные sibling lists не защищены этими функциями. Нельзя переносить сюда лимит100 из других helpers: локальные обходы Attach/Use такого лимита не имеют.

