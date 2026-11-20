# Monster scheduler и task dispatch: 15 статически разобранных функций

Это пакет RE оригинального server hl.dll, не реализация игры и не отчёт о runtime.
Адреса, смещения, task/state/activity IDs и bit masks ниже hex.
Количества, дистанции и времена десятичные, если не помечены0x.
Исходный SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
[evidence.json](evidence.json) хранит диапазоны и хэши C/ASM/raw; [capture.py](capture.py)
воспроизводит bounded PE чтение и objdump без загрузки DLL в процесс игры.
Названия предложены по телам и native descriptors; это не восстановленные PDB.

## Навигация и owner

Экспорт `monster_generic` из сохранённого [hl.csv](../exports/hl.csv) ведёт
100b0f30→100b05e0. Factory выделяет0x378 bytes и пишет vtable101ce36c,
которая в Ghidra именуется CGenericMonster. Её Save100b09e0→100c1ec0
пишет блок с буквальным именем `CBaseMonster`, table10216e08,count49;
затем собственный CGenericMonster block. Это основание для общего monster owner,
а не сходство с SDK. Generic vtable прямо связывает:

| Slot | Native target | Роль в данном пакете |
|---|---|---|
|184|1000bc60|StartTask|
|188|1000b2f0|RunTask|
|18c|1008ca70|selector numeric schedule type|
|190|1000abf0|GetSchedule|
|194|10014b20|пустой callback в этом concrete классе|
|1ac|100c27c0|state callback, полный алгоритм вне пакета|
|1b0|100c1f50|activity callback, полный алгоритм вне пакета|
|130|100bcdc0|turn callback: stack INT, ST0 результат|
|1c4 /1c8|100bc940 /100be5e0|path/cover callbacks|
|1d0|100132b0|ST0=784.0 в generic классе|
|1ec /1f0|100c1400 /100c1310|best sound/scent providers|

Derived classes могут переопределять эти slots. Часть helpers данного пакета
вообще не методы monster: 1000aaf0 принимает entvars*, 1000b260 нормализует XY,
1000b020 вызывается с ECX=script entity.

Новые карточки: aa50 ChangeSchedule; aad0 ClearSchedule; aaf0 ClassnameEquals;
ab50 ScheduleDone; ab70 IsScheduleValid; abf0 GetSchedule; afe0 GetTask;
b000 InterruptConditions; b020 ScriptedAction predicate; b070 MaintainSchedule;
b230 TaskAdvance; b260 NormalizeXY; b2f0 RunTask; bbf0 SetTurnActivity;
bc60 StartTask. Все имеют префикс1000.

## Структуры, ownership и ABI

Native table49 в evidence декодирована с16-byte stride, включая type/count/flags.
Связанные поля:

| Offset | Native имя / доказанный смысл |
|---|---|
|180|m_afConditions|
|184 /18c|m_hEnemy /m_hTargetEnt, EHANDLE пары|
|208|m_flFieldOfView|
|20c /210|m_flWaitFinished /m_flMoveWaitFinished|
|214 /218|m_Activity /m_IdealActivity|
|224 /228|m_MonsterState /m_IdealMonsterState|
|22c /234|m_iTaskStatus /m_iScheduleIndex|
|230|transient schedule pointer, отсутствует в этой save table|
|2c4 /2d0|m_vecMoveGoal /m_movementActivity|
|2dc /2e8 /2ec|m_vecLastPosition /m_iHintNode /m_afMemory|
|2f4 /320|m_vecEnemyLKP /m_failSchedule|
|348 /34c|m_scriptState /m_pCine|
|358 /35c /360|m_hRushEntity (type1 stringID), m_iRushMovetype, m_flRushDistance|
|364|rush retry time; имя/сериализация не установлены, в49 descriptors отсутствует|
|1fc|m_bWaitingToDie; здесь BYTE accesses, descriptor type12 не доказывает C++ bool width|

Schedule: pointer tasks+0, signed count+4, interruptMask+8,soundMask+c,namePointer+10.
Task: DWORD id + float data, stride8. Все pointers borrowed, Change/ClearSchedule
ничего не выделяют/не освобождают. Raw39 schedules и соответствующие task arrays
с native names (`Fail`, `Error`, `Rush Target`, `WalkToScript` и др.) сохранены,
как и отдельные jump tables. Названия task enum не импортированы из SDK.

thiscall методы используют ECX и RET4 при одном stack аргументе. Predicates
ab50/ab70/b020 возвращают полный EAX0/1; b000 возвращает маску. GetTask/GetSchedule
возвращают pointer вEAX. aaf0 — cdecl(entvars*,string). b260 — thiscall(inputXY,
outputXY*) с RET4 и EAX=output, пишет8 bytes. Нормализация использует SSE float
сумму, double sqrt, float-rounded length; exact zero→(0,0), иначе reciprocal.
NaN/Inf не исключены. bbf0 использует float-rounded ST0 yawDelta: <=-45 выбирает
activity10, >45 activityf, только при успешном LookupActivity. Другие значения
сохраняют прежний idealActivity; асимметрия -45/+45 реальная.

## Scheduler state machine

ChangeSchedule записывает pointer, index0,status0,conditions0,failSchedule0,
затем только диагностирует несовпадение interrupt bit20000 и soundMask!=0.
NULL schedule не проверяется. ClearSchedule обнуляет лишь pointer/index/status.
ScheduleDone — **index==count**, не `>=`. TaskAdvance увеличивает индекс, status0,
при точном конце OR conditions80000000. GetTask даёт tasks+8*index только для
signed0<=index<count; nonnegative index разыменовывает schedule без NULL guard.
IsScheduleValid требует pointer и `(conditions&(interruptMask|c0000000))==0`;
InterruptConditions без этих дополнительных двух битов возвращает mask&conditions.

MaintainSchedule делает максимум **10** итераций одного вызова:

1. Завершённая task(status4) с ненулевым schedule →TaskAdvance.
2. Невалидное расписание или currentState!=idealState →virtual194. Затем virtual1ac
   только при ideal!=8, `(ideal!=6 || current==6)` и одном из условий:
   signed conditions>0 (signbit уже0, очистки бита нет); schedule.interruptMask signed<0;
   currentState2 и invalid enemy EHANDLE184.
3. Taskfail40000000 при неизменившемся state →selector(failSchedule либо29),
   diagnostic с index. Иначе SetState(ideal) и selector: прямой abf0 для states6/8,
   virtual190 для остальных. ChangeSchedule применяет результат без NULL guard.
4. Status0 →GetTask, status1, virtual184(task). Activity mismatch→virtual1b0.
   Повтор только если status0/4 и лимит не достигнут.
5. После цикла TaskRunning100c26f0 разрешает virtual188(task), если status не4/2;
   затем ещё одна проверка activity mismatch.

Лимит предотвращает бесконечную цепь мгновенных tasks в одном вызове, но не
гарантирует корректность массива/указателей и не гарантирует одну task за tick.

GetSchedule в abf0 выбирает numeric type, сам pointer не устанавливает:

| State | Приоритеты |
|---|---|
|1|rush retry; conditions20000→5; иначе RouteClear?1:2|
|3|rush retry;100000 и доступный activity41→e; без300→(20000?5:8); иначе abs(yawDelta)<(1-FOV)*60 ?14:6|
|2|100000: очистить enemy,virtual208; true очищает бит и virtual190, false SetState3 и virtual190. Затем10000→3;100 безmemory40→11; отсутствие10→(20?c:a);400→18;1000→19;800→16;2000→17; остаточный c00/turn predicate путь либоa/c либо diagnostic|
|5 /8|26 /21|
|6|pCine!=NULL→28; иначе diagnostic,100fa530(this),1|
|0 /other|diagnostic→статический Error schedule10213310|

Rush retry в1/3: name!=0, deadline<time,deadline!=-1. FindTargetname failure
пишет deadline=-1; успех вызывает1010b540 на найденном rush entity, сохраняет
возврат вtarget EHANDLE и выбирает2a. **1010b540 не void:** ASM возвращает
найденный по pev.message target; если message0/lookup failure — возвращает this
(и диагностирует последний случай). Именно это потребляет вызывающий код.

## RunTask1000b2f0

Unsigned id1..5c проходит 92-byte remap и16-target table; unsupported default
ничего не делает. Completion устанавливает status4 только без taskfail40000000.

| Task ID | Поведение |
|---|---|
|1,2,55|ожидание time>=waitFinished;2 сначала ideal yaw кenemyLKP и turn|
|3|engine callback10222f8c(self.edict); если ненулевой, callback10223060(result), completion при ненулевом результате|
|7|преследование target handle, точные дистанции ниже|
|8|rush, cached goal и threshold rushDistance|
|1e,1f,21,22,23,58,59|turn, completion при abs(yawDelta)<=0.006|
|20|предварительно idealYaw(enemyLKP), затем тот же turn|
|24..28,2e,2f|предварительно idealYaw(enemyLKP)+turn, далее как29..2d|
|29..2d|ожидает DWORD this+f8!=0; activity0 иcomplete|
|1a,1d,3f|ожидает this+f8!=0|
|40,41|при наличии entity поворачивается кenemy184 /target18c соответственно, затем ожидаетf8 независимо от entity|
|4e|обработка завершённой смерти, ниже|
|4f|ожидает script.count+3a8<=0 и time>=script.deadline+3ac|
|50|если f8 и repeatcount+39c>0: --count,pev.frame=script+3a0,ResetSequenceInfo; иначе f8→complete|
|5c|ждёт movementGoal+2b8==0, затемcomplete и100c1a70|

Turn virtual130 получает **INT CVTTSS2SI(pev.yaw_speed)**; ST0 discarded.
MakeIdealYaw helper100c00f0 получает Vector **по значению**, не pointer.

Task7 вычисляет XY distance до cachedMoveGoal. Если distance<data, либо 3D
drift cachedGoal→currentTarget больше data/2, обновляет goal текущим target.origin
и вызывает100bddb0. Затем distance<data→complete+100c1a70; иначе distance<190
переключает movementActivity3, distance>=270 переключает4. Между190 и270 сохраняет
прошлое значение. Invalid target→fail. Это разные XY и3D сравнения, не одна сфера.

Task8 аналогичен сrushDistance. Перед refresh может снова найти rush entity и
переназначить target через1010b540. По достижении очищает name+358 иtarget handle,
вызывает1010f330 наrush entity сarg monster либо пишет error. Нет выбора3/4 по
190/270 в этой ветке. 1010f330 передаёт target/activator вFireTargets; полный target
dispatch описан другим пакетом. У refresh helper-result нет проверки route success.

Task4e требует f8 и pev.frame>=255: deadflag2,think10017aa0,schedule(float20.0),framerate0.
100bc3f0 выбирает плоский существующий hull (maxZ=minZ+1) либо
(-4,-4,0)..(4,4,1). Virtual12c true→1008ac50 fade, иначе
10100820(type8,origin,decimal384=0x180,float30.0). Полный смысл и ownership последнего
helper здесь не раскрывается. Ветка не идёт через обычный completion epilogue.

## StartTask1000bc60

Task ID1..5c dispatch через92 DWORD targets. ID0/out-of-range и неподдержанные
case попадают в diagnostic без автоматического fail/complete. Здесь `complete`
означает status4 только если conditions40000000 отсутствует. `running` означает
ранний return без этого completion, а не отдельную записьstatus1. Float task.data
преобразуется в integer черезCVTTSS2SI для activity/state/bitmask.

| ID | Инициализация/ветвление |
|---|---|
|1,2|waitFinished=time+data;running|
|3,56|no-op running|
|4|idealState=trunc(data),complete|
|5,6|moveTarget+0c иdistance3D>=1 и LookupActivity3/4 доступны→100c1080(activity,2,target.origin); неуспех fail+diagnostic+100c1a70; прочие случаиcomplete|
|7|target handle dereference безvalid guard;distance3D<1→complete; иначеcopyMoveGoal,100c1120(3,.5),true→running,false→fail|
|8|XYdistance<rushDistance→complete+clear name/target+callback/error. Иначе выбрать activity3 еслиrushMovetype!=0,4если0; еслиlookup неуспех, diagnostic ипротивоположная activity;100c1120(activity,.5)true→running,false→fail иdeadline=time+3|
|9|enemy required;100bcbc0(enemy.origin,2,enemy); fallbackvirtual1c4(enemy.origin,enemy.viewOffset,0,distance3D);false→fail|
|a|100bcbc0(enemyLKP,40,NULL); fallbackvirtual1c4(LKP,self.viewOffset,0,distance3D);false→fail|
|b|MakeVectors(self.angles),goal=LKP-forward*64;100bcbc0(goal,40,NULL),false→fail|
|d|FindClassname0,player;100bcbc0(moveGoal,40,player);false→fail|
|e|100c1a70;valid target и100c1120(movementActivity,1) должныуспеть; иначеfail|
|f|100c1a70;pCine и100c1080(movementActivity,1,pCine.origin) должныуспеть; иначеfail|
|10|100c1080(movementActivity,2,nodeBase+hint*58);false→fail|
|11|moveGoal=lastPosition;100c1080(movementActivity,2,&moveGoal);false→fail|
|12,13|virtual1ec/1f0 resultnonnull и100c1080(movementActivity,2,result); иначеfail|
|14|movementActivity=LookupActivity4!=-1 ?4:3;complete|
|15|еслиpev.movetype5,пишет5; затем **безусловно перезаписывает** movementActivity=LookupActivity3!=-1 ?3:4;complete|
|16|MakeVectors; normalizedXY(route[0].pos-origin) dot normalizedXY(global right)>0 ?12:11;complete|
|17|moveWaitFinished=time;complete|
|18,19|lastPosition=origin /sharedVector10222f34;complete|
|1a|idealActivity=signextended node[hint].short+52;running|
|1b,1c|hint=100be8e0 (если-1 fail)/hint=-1;complete|
|1d|boss-specific flinch branch ниже|
|1e|SetTurnActivity;running|
|1f|routeclear→fail; иначеMakeIdealYaw(route[routeIndex].position),SetTurnActivity,running|
|20,21,22,23|idealYaw отLKP/nodeYaw/valid target/lastPosition;SetTurnActivity,running;22invalid→fail|
|24/29,25/2a,26/2b,27/2c,28/2d,2e,2f|idealActivity соответственно1c,1d,1e,1f,20,3c,3d;running|
|39|complete|
|3a,45|byte waitingToDie=1;virtual22c;complete|
|3b|idealActivity=trunc(data);complete|
|3c|selector18c(trunc(data));nonnull→ChangeSchedule иreturn;NULL→fail|
|3d,3e|failSchedule=trunc(data)/0;complete|
|3f,40,41|idealActivity=trunc(data);running|
|42,43|virtual234/230;complete|
|44|waitingToDie byte!=0→return;иначеvirtual238;complete|
|46,47,49..4c|cover/helper branches ниже|
|4d|100bd9f0(data);complete|
|4e|byte object+9=0;100c1a70;idealActivity=virtual20c();pev.deadflag1;running|
|4f,50|script idle/play, ниже|
|51,54|100fa990 наpCine сarg0 /100fbb20 наpCine сargmonster;complete|
|52,53|script placement/alignment, ниже|
|55|waitFinished=time+RandomFloat(.1,data);running|
|57|еслиidealActivity==movementActivity,idealActivity=virtual168();100c1a70;complete|
|58,59|idealYaw=AngleMod(AngleMod(angles.yaw)±data);SetTurnActivity;running|
|5a,5b|memory ORtrunc(data)/AND~trunc(data);complete|
|5c|100bdf30 true→complete,false→running|

Tasks c,30..38,48 отсутствуют как специализированные ветви. Таблицы вevidence
сохраняют точное соответствие ID→VA, включая default. Не переименовываем их по SDK.

Task1d сразу возвращает для classname monster_booksimon/monster_doctorboss,
либо monster_bosschainsaw/monster_sewerboss сpev.skin(+110)==1. Иначе вызывает10089c80;
если результат!=3b, вызывает helper **повторно** и пишет второй результат как
idealActivity,return; при3b идётcomplete. Это не доказательство детерминизмаhelper.

Cover branches virtual1c8 получают `(Vector source,Vector viewOffset,float min,float max)`
с двумя vectors BY VALUE. В49/4a/4b enemy required: min0/maxvirtual1d0,
min0/maxdata, mindata/maxvirtual1d0 соответственно. Ghidra приписал часть уже
положенных stack args вызовам EHANDLE::Get; ASM показывает их дальнейшее
потребление virtual1c8. В46 bestsound required,source=его первые3float,
viewOffset=sharedVector,min=float(signed sound+10),maxvirtual1d0.
47 enemy илиself→сначала100bea60(source,&viewOffset), приfalse virtual1c8
сmin0/maxvirtual1d0.4c self origin/viewOffset итежеmin/max. Failure→taskfail,
успех46/47/4c ещё moveWaitFinished=time+data,complete. Generic cover search100be5e0
разобран в [navigation](../server-monster-navigation/contract.md); отдельный helper
100bea60 и derived virtual1c8 overrides остаются за границей этого разбора.

Script idle4f: пока script+3a8>0 либоtime<script+3ac, проверяетclassname.
Не scripted_action и idleSequence+36c!=0→virtual248(monster,idleSequence,0);
если byte-exact строки idle+36c/play+370 равны,pev.framerate0; иначеreturn.
Прочие случаи idealActivity1,return. Когда delay/count исчерпаны→complete.

Script play50: scripted_action выбирает изscript+38c mapping0..7→
1c,1d,1e,1f,3c,3d,20,7; out-of-range оставляет прежнююactivity. Затем
framerate1,movetype5,flags&~200,scriptState0,return. Обычныйscript вызывает
virtual248(monster,playSequence+370,1), приthis+f8!=0 ClearSchedule,
затемframerate1/scriptState0. Virtual248 аргументы доказаны stack ASM;
вC ошибочно показан вызов без аргументов.

Script placement52: pCine!=NULL; дляmode+384 равного4/6 angleMode+388==0
копирует target handle yaw, ==1 вычисляетyaw наtarget. ЗатемidealYaw=angles.yaw,
pev.angularVelocity иvelocity обнуляются,pev.effects|20. При любомmode!=6
копирует origin изmoveTarget+0c, безNULL-check. pCine==NULL простоcomplete.
Alignment53: pCine иmode!=0: angleMode0 используетAngleMod(pCine.yaw),
angleMode1 MakeIdealYaw(target.origin еслиvalid,иначеpCine.origin).
Затемconditionalcomplete,idealActivity1,100c1a70,return.

## Сохранение и реальные оставшиеся границы

Native49 descriptors сохраняют status/index/conditions, но не schedule pointer.
Restore100c19a0 после inherited Restore иReadFields делает100c1a70, обнуляет
schedule/status/currentActivity, приinvalid enemy ещёconditions0; возвращает
ReadFields result даже после этих post-writes. Index при этом не обнуляется.
Это объясняет необходимость нового выбора расписания после загрузки. Полный
serializer contract отдельно в [server-serializer](../server-serializer/contract.md).

Закрыты в данном пакете: поля и их owner, core scheduler порядок/лимит,
numeric task dispatch, точные локальные guards/записи, generic vtable links,
таблицы расписаний, native save-field имена, перечисленные ABI hazards.
Продолжение по 20 адресам выполнено в соседних пакетах:
[выбор расписаний, состояние и сохранение](../server-monster-state/contract.md) и
[маршруты, yaw и поиск укрытия](../server-monster-navigation/contract.md).
Они уточняют локальные ветви перечисленных helpers. В проходе04 добавлены
[pathfinding](../server-monster-pathfinding/contract.md),
[animation-state](../server-animation-state/contract.md) и
[studio-controls](../server-studio-controls/contract.md): локальные graph search,
next-hop/hash/cost, activity/reset/persistence wrappers и верхний studio event dispatch
уже не являются неразобранной очередью. Исторические карточки и evidence этого пакета
сохранены без расширения их исходного объёма.

Graph helpers/lifecycle/precompute теперь имеют самостоятельные контракты в server-graph-helpers, server-graph-lifecycle и server-graph-precompute. Нижние studio helpers перечислены в server-studio-events, их очередь закрыта локальными REVIEW. Остаются полный graph builder100ca860/reorder100cf310, event handlers virtual11c, script virtual248, cleanup100fa530/100fa4b0, helper100bea60 и derived AI overrides. Engine model/trace/RNG lifetime и runtime
поведение этими статическими пакетами не проверялись.

## Разобранное продолжение адресной очереди

Следующие20 entries получили отдельные статические REVIEW в проходе03.
Это закрытие прежней адресной очереди, а не обещание полного поведения AI.
Первые вопросы таблицы сохранены как навигация; актуальные контракты и ограничения
находятся в двух связанных пакетах выше. Новую работу выбирать из их остаточных
зависимостей и текущего `--pending`, не повторять эти20 как неразобранные.

| Адрес | Исходный вопрос, теперь разобранный в state/navigation |
|---|---|
|1008ca70|generic virtual18c; связать все numeric schedule IDs с39 raw records, включая random/script branches|
|100c26f0|MaintainSchedule post-loop gate; статус2/4 противrunning, отдельный ABI|
|100c2a70|сменаcurrent/idealState; special state1 иenemy handle|
|1010b540|rush resolver возвращаетtarget/self; собственные consumers иmessage fallback|
|1010f330|rush completion→FireTargets; полныйactivator/caller/type/value ABI|
|100c19a0|CBaseMonster Restore; inherited path, post-writes иerror propagation|
|100c1ec0|CBaseMonster Save; inherited path,49 descriptors иwriter context|
|100bdf30|RouteClear predicate вGetSchedule/StartTask; routeIndex иgoal guards|
|100be5b0|точность yaw completion predicate0.006|
|100bed20|yaw delta черезAngleMod/AngleDiff; ST0 иугловые границы|
|100c00f0|MakeIdealYaw вызовы изtasks; Vector-by-value иorientation fields|
|100c1a70|clear movement goal/route/animation приstop/restore/tasks|
|100c1ab0|непосредственный callee100c1a70, route clear writes|
|100c1080|StartTask routes; movementActivity/wait float/goal pointer contract|
|100c1120|target route wrapper→100bddb0; lost return вGhidra|
|100bddb0|route refresh послеcached target drift; goal types иfailure|
|100bcbc0|task path construction кenemy/LKP/sound; masks2/40 иtargetpointer|
|100c27c0|generic virtual1ac изMaintainSchedule; ideal state decision|
|100c1f50|generic virtual1b0; activity mismatch, sequence reset иtiming|
|100be5e0|generic virtual1c8; cover search сдвумяVector BY VALUE,min/max|
