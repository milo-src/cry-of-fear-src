# Монстры: маршрут, завершение движения, двери и реплики

Десять новых локальных статических контрактов оригинального server hl.dll. Бинарник не исполнялся; игра, ресурсы и RTX не изменены. SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Адреса/offsets/маски hexadecimal; counts и значения, явно помеченные decimal, десятичные. Имена функций аналитические.

## Навигация

- Route setters → [monster-navigation](../server-monster-navigation/contract.md) → [pathfinding](../server-monster-pathfinding/contract.md). Здесь дополнены goal2/goal20, вставка waypoint и completion.
- Task/state → [scheduler](../server-monster-scheduler/contract.md); hint/cover/enemy → [decisions](../server-monster-decisions/contract.md).
- IgnoreConditions → [cinematic lifecycle](../server-cinematic-lifecycle/contract.md); поле object+58 → [parent scheduler](../server-queue-b/contract-parent.md).
- Door group lookup → [targets](../server-targets/contract.md); sentence output → [sentence groups](../server-sentence-groups/contract.md).

GenericMonster vtable101ce36c и RTTI, native ENTVARS1021aae0/102 MONSTER10216e08/49 descriptors,10 primary C и9 support C, полные ограниченные ASM и switch table сохранены в evidence.json. Vtable связывает +120→100bf860,+1dc→100bf880,+1a0→100c1550,+1a4→100c1510,+bc→10013550. Эти bindings относятся к конкретной таблице, не ко всем monster subclasses.

Route данные238..2b7:8 records по16bytes, index2bc, goalKind2b8,wait2c0. Не все эти поля перечислены в native save table: их локальная роль опирается на readers/writers и предыдущий contract. Не смешивать object+204 latch и entvars+204 pain_finished.

## Что остаётся открытым

Actual renderfx135 consumer/reset/callers; все derived overrides условий/реплик; consumers wait2c0 и engine movement/door callbacks; настройка x87/SSE exceptions; lifetime entities при Use/lookup; полный sound backend и duration/exclusive semantics caller шестипараметрического wrapper. Local success/return не доказывает проходимость маршрута или слышимый звук. Все support bodies не становятся REVIEW автоматически.

`python analysis/server-monster-controls/verify.py` проверяет исходные hashes, непрерывные машинные диапазоны по независимому PE mapper, raw RTTI/таблицы/экспорты/API, dispatch4 и ABI RET18h. Оригинальная DLL не загружается для исполнения.

## 0x100bdf60 — Monster_HungerDeadlineReachedOrUnordered

Проверяет срок голода; native unordered comparison также возвращает true.

Thiscall ECX=monster, plain RET, полный EAX0/1: XOR EAX,EAX; COMISS(this+324,globals.time); SETBE AL. Возвращает1 при ordered deadline<=now И при unordered/NaN, 0 при ordered deadline>now. C с двумя сравнениями < или == теряет NaN-ветку. FP exceptions предполагаются masked; их handler не восстановлен.

Native MONSTER descriptor называет +324 m_flHungryTime. Ничего не пишет, не продлевает срок и не проверяет health/state. Global time читается после самого deadline. В100bf880 результат влияет на маску игнорируемых условий; это не прибавление еды или stamina.

## 0x100bf860 — Monster_EnableRenderFx135Once

Однократно включает renderfx135 через собственный byte latch.

Thiscall, RET без stack arguments. Если BYTE this+204 уже ненулевой, немедленный выход. Иначе сначала загружает pev=this+4, затем пишет BYTE this+204=1 и DWORD pev+160=87h (135 decimal). Native ENTVARS называет +160 renderfx, не impulse и не health. Это присваивание, не OR.

Поле this+204 не названо в49 MONSTER descriptors; не смешивать его с одноимённым смещением entvars. GenericMonster vtable101ce36c+120 указывает сюда. Семантика renderer effect135, все callers и reset latch остаются открытыми. Нет timer, sound, resource change или обещанного EAX результата. При повторном вызове не восстанавливает renderfx, изменённый извне.

## 0x100bf880 — Monster_IgnoreConditionsMask

Собирает маску игнорирования условий из hunger deadline и cinematic callback.

Thiscall, RET, DWORD EAX. Сначала100bdf60: при ненулевом результате baseMask0, при0 baseMask40h. NEG/SBB/AND/ADD используют весь EAX. Поэтому NaN deadline/time при продолжающемся COMISS даёт baseMask0, а не40h.

Только при state+224==6 и nonNULL m_pCine+34c вызывает cinematic.virtual1dc с ECX=cinematic и возвращает callbackResult OR baseMask. Иначе возвращает только baseMask. Маска вычислена до callback и не пересчитывается после его побочных действий. GenericMonster virtual1dc связан с этим телом; cinematic100fb030 имеет отдельный контракт (0 либо300h), но произвольный override здесь не подменяется им.

Нет локальных записей conditions/state и нет проверки lifetime m_pCine после загрузки. Это маска, не boolean. Имя каждого condition bit и полная политика конкретных monster overrides не выводятся только из арифметики.

## 0x100bf8c0 — Monster_InsertRouteWaypointAtCurrentIndex

Сдвигает весь восьмиточечный route и записывает точку по текущему индексу.

Thiscall(Vector point BY VALUE12bytes,uint flags), RET10h; C incorrectly displays undefined8+DWORD instead of the vector. Route base238h, stride10h,8 records; current index2bc. Исходные flags текущего record загружает до первой записи сдвига. После store record6→7 очищает в сохранённых flags bits180h; OR с входным flags выполняет после следующего load record5. Итог (oldFlags & ~180h) | inputFlags; входные flags не маскирует.

Семь MOVUPS копируют record6→7,5→6,...,0→1, всегда весь фиксированный массив, а не только хвост начиная с current index. Затем пишет12bytes point в route[currentIndex], сохраняя исходный index для координат. Перед окончательной записью merged flags заново читает this+2bc. Старый record7 теряется; record0 при index!=0 отдельно не очищается.

Не increment/reset index, не меняет movementGoal и не вызывает route/path/trace проверок. Отсутствуют bounds guards для индекса; арифметика x86 масштабирования32-bit. Поэтому нельзя заменять произвольным checked insertion с другим сдвигом. При некорректном индексе координатная запись может повредить в том числе index, который затем перечитывается; runtime достижимость этого не установлена.

## 0x100c1050 — Monster_MoveToEnemyLastKnownPosition

Устанавливает параметры движения к последней известной позиции врага и перестраивает маршрут.

Thiscall(int activity,float wait), RET8. Последовательно пишет this+2d0=activity (native m_movementActivity), float bits+2c0=wait, goalKind+2b8=2, затем100bddb0 RefreshRoute на том же this. Полный EAX результата helper проходит наружу без изменения, несмотря void C.

RefreshRoute имеет отдельный REVIEW: сбрасывает начало route, для exact goal2 использует enemyLKP+2f4 и разрешённый EHANDLEenemy+184, затем BuildRoute. Wrapper не проверяет наличие врага, finite/positive wait или activity; не заменяет LKP текущим origin врага. Failure не откатывает записанные поля; запись цели не означает немедленное перемещение.

## 0x100c10d0 — Monster_MoveToNodeGoal

Устанавливает цель узлового маршрута, activity и wait, затем вызывает RefreshRoute.

Thiscall(int activity,float wait,const Vector* point), RET0ch. Записи: +2d0=activity,+2c0=wait,+2b8=20h; затем point.x/y читаются одним MOVQ и пишутся в+2c4/+2c8, после этого отдельно читается point.z и пишется+2cc. Поэтому частично перекрывающиеся source/destination не snapshot всей тройки.

Завершается CALL100bddb0 и возвращает его EAX без проверки. Exact goal20 передаёт moveGoal BY VALUE в100bdc10 BuildNodeRoute; это отличается от goal40 BuildRoute прямой точки. Нет NULL/finite/clamp guards, engine movement/trace здесь не выполняет wrapper. Failure оставляет новую цель/activity/wait и изменения helper; rollback отсутствует.

## 0x100c1150 — Monster_MovementCompleteTaskTransition

Переводит task status по четырём состояниям и всегда очищает movement goal.

Thiscall, RET. Native unsigned status<=3 dispatch через4DWORD table100c11bc: status0/1→+22c=3; status2→+22c=4 только если conditions+180&40000000h==0; при установленном бите status2 сохраняется. Native MONSTER называет +22c m_iTaskStatus.

Status3 вызывает engine AlertMessage(type4,"Movement completed twice!\n"), без изменения самого status. Любые иные DWORD, включая signed negative, проходят unsigned out-of-range branch без status write. Во всех вернувшихся ветках this+2b8=0; в diagnostic branch эта запись выполняется после callback.

Не чистит route points/index, не обнуляет velocity/wait, не завершает schedule и не ставит новый task. Нет осмысленного return value. Named task enums и condition bit не подставлены из другого SDK вместо literal native transitions.

## 0x100c11d0 — Monster_UseLinkedDoorEntitiesAndComputeDeadline

Активирует объект и связанные одноимённые сущности, возвращая срок ожидания через x87.

Thiscall(entvars* target), RET4, ST0 return. Сразу читает target+20c без NULL target guard. Если edictNULL, вызывает PEntityOfEntOffset(0); если и это NULL или edict.private+7cNULL, local delay остаётся0. При найденном private вызывает targetObject.virtuale8 с четырьмя stack(this,this,USE_TYPE1,float0), ECX=targetObject; это не вызов без аргументов из Ghidra.

После первого Use сохраняет float32 SUBSS(targetObject+58,targetEntvars.ltime+100) как local delay. Поле object+58 — desired think deadline по parent scheduler contract, не выдуманное время конкретной анимации двери. Отрицательное/NaN значение не clamp. Если targetObject.pev.targetname+1d0 ненулевой, начинает lookup10118590(NULL,stringbase+targetname). Helper сначала special-name resolver, затем literal targetname fallback; нельзя описывать его только как простой engine iterator.

Для каждой найденной entity пропускает совпадение её pev с текущим targetObject.pev; иначе сравнивает содержимое classname побайтно и case-sensitive. Ровно при равенстве вызывает найденную virtuale8 с (monster,monster,1,0.0). Имена/targetname targetObject перечитываются между итерациями; next не сохранён заранее, callback lifetime/циклы не защищены. При NULL private callback результаты не проверяет, всех сущностей не ограничивает типом двери/solid/lock state.

В конце заново читает global.time и выполняет FLD localDelay; FADD global.time, оставляя ST0 x87 без завершающего float32 store. Следовательно local subtraction округленаfloat32, сумма зависит от текущего x87 control; это не заранее взятый now и не принудительно float32 return. Не пишет собственный wait timer, не вызывает физическое движение двери напрямую и не проверяет успех Use.

## 0x100c1510 — Monster_ForwardScriptedSentenceIgnoringTrailingWords

Передаёт первые четыре аргумента virtual sentence-handler, очищая шесть входных DWORD.

Thiscall native RET18h: шесть stack DWORD. Читает только первые четыре (+8,+c,+10,+14 относительно EBP) и передаёт их virtual1a0 с тем же ECX. Первый DWORD копирует PUSH, следующие три переносит MOVSS без арифметики; последние два DWORD не читаются. Saved C показывает лишь четыре параметра и скрывает cleanup24bytes.

GenericMonster vtable+1a4 указывает сюда, +1a0→100c1550. Wrapper сам не проверяет NULL/alive, не меняет память, не устанавливает talk timer или exclusive/listener state. Типы/назначение двух неиспользованных аргументов не восстановлены. Не следует сокращать исходный ABI до четырёх stack аргументов либо объявлять восстановленными policies всех overrides.

## 0x100c1550 — Monster_PlaySentenceWhenAlive

Выбирает прямую sentence либо случайную группу после виртуальной проверки alive.

Thiscall(const char* name,float unusedDuration,float volume,float attenuation), RET10h; второй stack DWORD не читается. NULL name сразу завершает. Иначе вызывает this.virtualbc; при EAX0 также выход. Concrete GenericMonster target10013550 проверяет только pev.deadflag(+174)!=2, без health>0; другие receivers могут иметь override. Общий alive predicate CBaseEntity не подставляется сюда.

Если name[0]==!, вызывает100fc9f0(selfEdict,channel2,name,volume,attenuation,flags0,pitch100). Иначе вызывает100fe450(selfEdict,name,volume,attenuation,flags0,pitch100,channel-1). Пустая строка попадает во вторую ветку; результат выбора/проигрывания не проверяется. Volume/attenuation передаются как исходныеfloatbits без clamp.

Sentence helpers имеют отдельные контракты: direct wrapper разрешает !sentence и может менять volume по global policy; group wrapper выбирает реплику и заменяет channel-1 на2. Здесь нет duration/talk-deadline записи, RNG собственного, target broadcast выбора или гарантии слышимого звука. Lifetime name/edict и engine sound backend остаются внешними границами.

