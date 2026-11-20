# CCineMonster: создание сценарного состояния, поиск и передача управления

Статический разбор 15 ранее не описанных входов оригинального server `hl.dll`.
Исходный SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
DLL не исполнялась; игра, ресурсы и порт не менялись. `capture.py` сохраняет
ограниченные ASM, native RTTI/vtables, константы, ENTVARS/MONSTER/BASE/DELAY
descriptors и сверяет машинные байты с исходным PE. `verify.py` повторяет
проверку доказательств. C — сохранённая декомпиляция, не исходный код игры.
Адреса, смещения и битовые маски шестнадцатеричные; номера состояний и обычные
скалярные значения десятичные, если нет префикса `0x`.

## Владельцы, поля и цепочка вызовов

Factory100fa1a0 устанавливает vtable101ddb68; RTTI называет CCineMonster.
Exports `aiscripted_sequence`100fc0a0, `scripted_action`100fc0c0 и
`scripted_sequence`100fc0e0 — пятибайтовые JMP к этой общей фабрике.
Их имена не означают разные vtables. Эти четыре тела здесь только support,
не новые карточки; полное описание factory failure уже имеется в
[monster-events](../server-monster-events/contract.md).

| Native virtual offset | Target | Роль |
|---|---|---|
| +2c | 100fbb90 | Spawn |
| +30 | 1000df90 | inherited Precache, не исследуемый Activate |
| +34 | 100fb120 | KeyValue |
| +44 | 100fa340 | Activate, подготавливающий sequence resources |
| +5c | 100fb010 | возврат cinematic state+368 |
| +e8 | 100fbff0 | Use с четырьмя stack arguments |
| +1dc | 100fb030 | маска игнорируемых условий |
| +244 | 100fb6b0 | PossessMonster |
| +248 | 100fbf30 | StartSequence |
| +24c | 100fafb0 | FinishSchedule |

ServerActivate1001e9e0 вызывает virtual+44, подтверждая назначение
100fa340. Это не простое Precache на стадии Spawn. Shared virtual+8
попадает в1000e1f0→10017110 и планирует think; delay не равен немедленному
вызову callback. Непосредственно Use, напротив, вызывает CineThink синхронно.

Native MONSTER descriptor подтверждает +18c `m_hTargetEnt`, +224 current
state, +228 ideal state, +348 `m_scriptState`, +34c `m_pCine`.
DELAY descriptor10219a68 подтверждает +e4 `m_hActivator`.
У cinematic и выбранного monster есть собственные поля +18c: первое
содержит actor, второе — turn target. Их нельзя смешивать.

| Cinematic offset | Источник/смысл, установленный телами |
|---|---|
| +368 | state: Spawn0; possession2 либо1; release delay2; SequenceDone0 |
| +36c/+370/+374 | string_t idle/play/entity |
| +378/+37c/+380 | string_t attack-turn target / move target / fire-on-begin |
| +384/+388/+38c/+390 | move mode / turn type / action / finish schedule |
| +394 | float search radius |
| +398/+39c | repeat setting / текущая копия |
| +3a0/+3a4 | float repeat frame / priority bits |
| +3a8/+3ac | signed waiting counter / float start deadline |
| +3b0/+3b4/+3b8 | сохранённые monster movetype/solid/effects |
| +3bc | разрешение прерывания |

Названия ключей устанавливает100fb120; поля без native descriptor названы
по наблюдаемой роли, не выданы за восстановленные C++ symbol names.
Все ссылки на entity заимствованы, локального malloc/free нет.
EHANDLE helpers10017740/780/790/7a0 и10017ba0 проверяют edict/serial.
Assignment возвращает переданный object EAX, не bool валидности handle;
nonnull object с NULL containing-edict всё равно даёт ненулевой EAX.
Булева проверка10017780 проверяет валидный edict, не private-data pointer.
Resolve10017790/7a0 дополнительно читает edict+7c, но не очищает stale handle.

## 100fb120 — KeyValue

Thiscall `(KeyValueData*)`, RET4. Key+4/value+8 не защищены NULL/length
проверками. Первые три сравнения inline, остальные через1000aba0; все
case-sensitive и требуют полного совпадения. Все совпавшие ключи после
записи ставят handled+0c=1 и возвращаются.

| Ключ | Запись |
|---|---|
| m_iszIdle, m_iszPlay, m_iszEntity | AllocString(value) → +36c/+370/+374 |
| m_iszAttack, m_iszMoveTarget, m_iszFireOnBegin | AllocString → +378/+37c/+380 |
| m_fMoveTo, m_fTurnType, m_fAction | atoi1016b55e EAX → +384/+388/+38c |
| m_flRadius | parser1016f5ec ST0 → FSTP float32 +394 |
| m_iRepeats | atoi EAX → обе +398/+39c |
| m_fRepeatFrame | parser ST0 → FSTP float32 +3a0 |
| m_iFinishSchedule, m_iPriority | atoi EAX → +390/+3a4 |

Неизвестный ключ передаётся inherited100bf970 с тем же this/keyvalue;
локальный handled перед этим не обнуляется. Не проверяются отрицательные
repeat/radius, перечисления, валидность sequence, пустая строка или
переполнение. Float conversion и отсутствие clamp доказаны ASM; полная
CRT/locale семантика парсеров остаётся внешней. Ghidra `wchar_t*` у atof
не является доказательством wide input: сюда передаётся тот же value pointer.

## 100fbb90 — Spawn

Thiscall, без stack args, RET. Сначала pev.solid+10c=0 и cine+368=0.
При idle string_t+36c!=0 назначает think+78=100fb050 InitIdleThink,
независимо от наличия targetname. Иначе при pev.targetname+1d0==0
назначает100fa8c0 CineThink. Только эти два пути вызывают virtual+8(1.0).
Если idle==0 и targetname!=0, старый think/deadline не очищается этим телом.

После scheduling +3bc=`~(spawnflags>>5)&1` (разрешение при отсутствии
маски20). При точном classname `aiscripted_sequence` либо spawnflags&40
в priority+3a4 добавляется2. Другие priority bits сохраняются. Spawn не
сбрасывает +3a8/+3ac, не выбирает actor, не вызывает Activate или Possess
и не задаёт repeat/radius defaults; их нулевые значения нельзя выводить
из этого метода без allocator/keyvalue evidence.

## 100fa340 — ActivatePrecacheSequences

Thiscall, без stack args. Сначала перебор10118590(NULL,entityName):
этот resolver включает custom alias перед engine targetname fallback.
Только candidate с pev.flags&20 вызывает virtual+78 для получения monster.
Первый ненулевой monster сохраняется, но **следующий resolver вызывается
ещё один раз до выхода из цикла**. При исчерпании named candidates —
перебор10118460 по classname; здесь flag20 уже не проверяется, требуется
лишь ненулевой virtual+78. И здесь query следующего candidate предшествует
проверке сохранённого результата. Radius, priority, живость и CanPlaySequence
не проверяются: выбор для resource preparation отличается от actor acquisition.

Если actor найден, engine GetModelPtr10223070(actor.pev.edict) даёт model
pointer. При NULL пропускаются оба helper calls. Иначе1000f590(model,idleName),
затем1000f590(model,playName), даже если string_t равен0. Helper уже разобран
в [studio-events](../server-studio-events/contract.md): sequence event sounds,
не загрузка новой monster модели. Actor handle сюда не записывается.

Все нормальные пути заканчиваются восстановлением registers и **tail JMP
10017250 с ECX=cinematic**. Native100fa43f — E9, не CALL. Saved range до
100fa443 полный; Ghidra terminal-call limitation не доказывает noreturn.
Base activation проверяет m_iLFlags&a0 для AddAssist и &1000 для AddAlias;
при +74==0 сначала пишет1, вызывает Attach10017bc0, затем virtual+48.
Эта база выполняется и при отсутствии actor/model. Для CCineMonster +48
указывает на inherited1000df80. Повторные Activate всё равно повторяют
локальный поиск/sequence preparation; собственный once flag здесь отсутствует.

## 100fabc0 — FindEligibleMonster

Thiscall `(namePointer, activatorObject)`, RET8, EAX=выбранный monster либо0.
Нет NULL name guard. Первая фаза10118500(start,name,activator) поддерживает
специальное `*locus` и обычный alias/targetname resolver, описанные в
[targets](../server-targets/contract.md). Candidates без flags20 пропускаются.
Для остальных virtual+78 обязан вернуть ненулевой monster; затем его
virtual+198(priority|1) должен вернуть nonzero. В этом случае возвращается
именно monster result, не обязательно исходный candidate. При отказе на
этих двух gates печатает Alert1 `Found ..., but can't play!`, продолжает.

После исчерпания первой фазы101186b0 перебирает engine FindEntityInSphere
вокруг cinematic.pev.origin с radius+394. Полное classname equality,
flags20, nonNULL virtual+78 и virtual+198(priority) обязательны. Здесь
**не добавляется bit1**, activator больше не участвует, сообщений об
отказе нет. Первый подходящий object возвращается без nearest sorting.
Sphere helper переводит start object→edict, отдаёт engine origin/radius и
возвращает private data только для ненулевого edict с ненулевым
EntOffsetOfPEntity. Геометрическое определение radius принадлежит engine.
На исчерпании EAX0. Функция не записывает handles/pCine и не отменяет старый
script; эти мутации выполняет possession после отбора.

## 100bcd00 — MonsterCanPlaySequence

Thiscall monster `(priorityBits)`, RET4, EAX точно0/1. Native CGenericMonster
и CCineMonster vtable+198 указывают сюда; остальные derived overrides не
исключены. При уже ненулевом monster.pCine+34c bit4 разрешает сразу, без
проверок состояния/жизни. Без bit4 печатаются classname/targetname прежнего
cinematic и возвращается0. Наличие pCine не проверяется через EHANDLE.

При pCine==NULL требуется nonzero virtual+bc и currentState+224!=5;
иначе Alert1 `Dead/Barnacled!`, return0. Нельзя заменить этот virtual call
проверкой health>0: у указанных native vtables +bc=10013550, который делает
**deadflag!=2**, включая допустимый deadflag1. Далее достаточно любого:
priority&2; currentState0 или1; idealState+228==1; currentState3 вместе с
priority&1. Иначе Alert1 `non-interruptable state`, return0.

Таким образом bit1 расширяет допуск currentState3 только в named phase;
bit2 не обходит initial virtual+bc/state5, а bit4 при существующем pCine
обходит их целиком. Семантика всех derived virtual+bc/+198 остаётся
динамической. Метод не изменяет monster state или pCine и не выполняет
possess; успешная проверка не гарантирует последующую пригодность объекта
после внешних callback side effects.

## 100fa8c0 — CineThink

Thiscall, RET. Resolve cine.m_hActivator+e4 → второй аргумент
FindEligibleMonster(entityName,activator). Результат присваивается
cine.m_hTargetEnt+18c через10017740; условие успеха — EAX assignment,
не дополнительная проверка serial/private data. На nonzero вызывает
cine.virtual+244 без stack arguments, затем Alert2 `using monster` и return.
Возврат Possess не проверяется; даже его ранний выход не отменяет success log.
Собственный think/deadline после успеха не сбрасывается.

На нуле assignment очищает target handle; вызывается CancelScript100fa4b0,
затем Alert2 `can't find monster` и virtual+8(1.0). Это retry plan без
локального лимита попыток. Отмена может затронуть одноимённую группу,
не только current cinematic. После callbacks pointers перечитываются,
но destruction/reentrancy safety локально не обеспечена.

## 100fb050 — InitIdleThink

Thiscall, RET. Та же assignment/virtual+244 цепь, но Find получает
activator=NULL, даже если m_hActivator ранее заполнен. После успешного
virtual+244 записывает +3ac=`float32(double(globalTime)+1000000.0)`, затем
такой же Alert2. Именно mixed single→double add→single, не float-only add.
Deadline записывается и если Possess вернулся без результата. На failure
очищенный target handle, CancelScript, диагностика и virtual+8(1.0), как
в CineThink. В отличие от Spawn, сам callback не переназначает think+78.

## 100fb6b0 — PossessMonster

Thiscall, без stack args, RET; смысловой success EAX не формируется.
Resolve cine.target+18c и его virtual+78: при любом NULL ранний выход без
мутаций. При monster.pCine!=NULL вызывает CancelScript100fa4b0 с ECX=oldCine,
даже если oldCine==this; затем без повторного выбора пишет monster.pCine=this.
У cancellation возможны групповые побочные эффекты, captured monster pointer
после неё не проверяется. Запись нового pCine предшествует всем target searches.

Turn target: если cine+378==0, monster.m_hTargetEnt получает сам cinematic.
Иначе10118500(NULL,attackName,resolve(cine.activator)) присваивается в этот
handle. Если булева edict/serial проверка10017780 ложна, начинается sphere
enumeration вокруг cinematic origin/radius; текущее resolve(handle) является
start, каждое найденное private object сразу присваивается handle. Первый
точно совпавший classname останавливает поиск. **Ни flags20, ни virtual+78,
ни CanPlaySequence здесь нет.** При окончательно невалидном handle Alert1
`missing turn target`, fallback cinematic. Nonzero edict с NULL private data
может пройти bool, хотя последующий resolve равенNULL; это различие helpers,
не доказанный runtime сценарий.

Move target: при cine+37c!=0 только10118500 с activator, без sphere fallback.
Result записывается raw monster+c, не EHANDLE. NULL вызывает Alert1
`missing move target` и fallback this. При пустом ключе сразу monster+c=this.
Turn/move targets независимы; старые значения handles/raw pointers не
сохраняются отдельно для восстановления.

Далее последовательно сохраняет monster.pev.movetype/solid/effects в
cine+3b0/+3b4/+3b8, затем OR cine.pev.effects в monster.effects. Cine+368=2.
Raw dispatch для move mode+384 (unsigned guard>6 включает отрицательные):

| Mode | Действие |
|---|---|
| 1,2 | DelayStart(1) на cine; cine+368=1; затем monster.scriptState+348=1 |
| 0,4,5,6 | только monster.scriptState=1 |
| 3 и остальные значения | scriptState сохраняется |

Во всех прошедших начальные guards случаях monster.idealState+228=6;
currentState+224 не пишется. Здесь нет teleport/SetOrigin/переустановки
solid или movetype. Cleanup100fa530 восстанавливает из этих backup fields
только movetype; нельзя обещать симметричное восстановление solid/effects.
Switch proven byte map100fb964 `[0,1,1,2,0,0,0]` и targets100fb958.

## 100fa990 — DelayStartGroup

Thiscall `(incrementFlag)`, RET4. Перебирает10118590 по **собственному
pev.targetname**; даже нулевой string_t передаёт poolbase, отдельного self
fallback нет. Только точные `scripted_sequence` и `scripted_action`
допускаются; `aiscripted_sequence` не включён. Для совпавшего entity
factory100fa1a0(pev) даёт cine pointer, без local NULL/type guard.

Любой nonzero argument делает matched.cine+3a8++ (32-битное wrap).
При0 counter уменьшается; если новый signed counter<=0, matched.+368=2,
затем FireTargets(**исходный this.+380**,this,this,3,0.0), затем
matched.+3ac=`float32(double(globalTime)+0.05)`. Строка, activator и caller
берутся от исходного this, не текущего matched cinematic. Время считывается
после FireTargets, который может менять состояние. Каждый совпавший объект
с counter<=0 получает отдельное событие; clamp0 и once latch отсутствуют.
Pointer matched после FireTargets не перепроверяется. На >0 только counter.

Task0x51 в ранее разобранном StartTask1000bc60 вызывает этот helper с0;
possession modes1/2 — с1. Task0x4f читает counter и deadline при ожидании.
Не добавляется предположение о числе участников или завершении группы при
ошибке поиска/удалении; это локальная counted protocol, не транзакция.

## 100fbff0 — Use

Thiscall `(activator,caller,useType,value)`, **RET16**, хотя сохранённый C
показывает один аргумент. Только activator читается со стека. Остальные
три, включая OFF/ON/TOGGLE и value, игнорируются локально.

Если resolve(cine.target) и его virtual+78 дают monster: при scriptState==0
немедленный return без записей; иначе cine+3ac становится
`float32(double(globalTime)+0.05)` и return. Не изменяет activator, counter,
think callback, ownership или permission в этих ветвях.
Если target/monster отсутствует, присваивает activator в cine.+e4,
think+78=100fa8c0 и **сразу** вызывает CineThink(this), не schedule delay0.
Именно эта ветвь предоставляет activator для `*locus` поиска actor/targets.

## 100fbf30 — StartSequence

Thiscall cine `(monster,sequenceStringId,completeOnEmpty)`, RET12, EAX0/1.
Если string_t==0 и completeOnEmpty!=0: вызывает100fbb20(this,monster), затем
EAX0. Это completion branch, не ошибка lookup. Иначе ECX переключается на
monster, LookupSequence1000e9b0(poolbase+id) → monster.pev.sequence+12c.
Только результат -1 вызывает Alert4 и fallback sequence0; другие negative
values здесь не отсекаются. Затем frame+134=0, ResetSequenceInfo1000e9e0
на monster и EAX1, в том числе после fallback. Нет NULL monster guard,
проверки total model sequences или восстановления прежней sequence.

Обычные callers StartTask1000bc60: idle `(monster,cine.idle,0)` и play
`(monster,cine.play,1)` через native virtual+248. Метод сам не ставит
start deadline и не обслуживает повторы; wait/repeat consumption находится
в scheduler. SequenceDone100fbb20 затем вызывает cleanup на monster,
cine.virtual+24c(monster) и targets; cleanup return не gate для callback.

## 100fafb0 — FinishSchedule

Thiscall cine `(monster)`, RET4, без отдельного boolean result. Сначала,
если monster.idealState+228!=8, пишет1; currentState не меняется. При
cine.finishSchedule+390==0 вызывает ClearSchedule1000aad0 с ECX=monster.
При1 вызывает monster.virtual+18c(0x20), результат без NULL guard передаёт
ChangeSchedule1000aa50 с ECX=monster. Любое другое значение Alert2
`no case!`, затем ClearSchedule. IdealState8 **не подавляет** выбор schedule.

ClearSchedule зануляет +22c taskStatus, +230 schedule pointer, +234 index.
ChangeSchedule пишет pointer+230, обнуляет taskStatus/index/conditions/fail
schedule и разыменовывает schedule без NULL guard. Отдельная семантика
derived virtual+18c динамическая; нельзя обещать определённый task list для
всех монстров. Удаление cinematic, повторы и firing targets принадлежат
caller SequenceDone, не этому методу.

## 100fa480 — CanInterruptCurrentTarget

Thiscall, RET, EAX0/1. Разрешает только если cine+3bc!=0, resolve её target
handle ненулевой и target.pev.deadflag+174==0. Не вызывает virtual+78,
не проверяет health, current state, pCine обратную связь, flags или distance.
Неэквивалентен MonsterCanPlaySequence: тот при native virtual+bc допускает
deadflag1. Все fail paths возвращают0 и ничего не очищают. Permission+3bc
задаётся Spawn и event helper100fa450; последний не пишет при spawnflags20.

## 100fb030 — IgnoreConditionsMask

Thiscall, RET, вызывает100fa480 на том же ECX. При ненулевом результате
EAX0; иначе EAX0x300. Native NEG/SBB/AND/ADD формируют ровно эти маски,
не boolean. Метод расположен в cinematic vtable+1dc; названия condition
bits не выводятся из самой арифметики. Не меняет permission или monster.

## 100fb010 — GetCinematicState

Thiscall, RET: единственная загрузка DWORD cine+368→EAX. Возвращает
raw значение без normalization/clamp или side effects. Native slot+5c.
Наблюдаемые producers: Spawn0, possession2/1, group release2, SequenceDone0.
Полный список потенциальных writers этим локальным обзором не объявляется.

## Открытые границы после этого пакета

- Dynamic derived monster virtual+78/+198/+bc/+18c могут менять допуск,
  возвращаемый объект и schedule; доказаны конкретные две native vtables,
  не всё множество subclasses.
- Activation loader/engine resource errors, FindEntityInSphere geometry,
  string pool lifetime и полные CRT input/overflow правила внешние.
- Repeat/move/task execution и полный save/restore полей cinematic здесь
  не раскрываются автоматически. Capture native MONSTER table не является
  доказательством сериализации всего хвоста +368..3bc.
- Callback reentrancy, destructive target outputs и достижимость NULL/error
  ветвей не наблюдались в runtime. Описаны точные локальные checks и отсутствие
  rollback, не заявлены игровые сбои.
- Инициализация zero/default полей вне Spawn, нестандартные flag комбинации
  и порядок engine frames требуют отдельных владельцев. Передача владения
  memory нигде в этих 15 primary не осуществляется.
