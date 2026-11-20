# Сущности узлов, тестовый hull и просмотрщик графа

Статический разбор 17 ранее не описанных входов оригинального server DLL.
Игра не запускалась, исходный код порта и ресурсы не менялись.
`capture.py` читает только исходный
`D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll`, проверяет
SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`
до и после извлечения и сверяет каждую строку машинных байтов ASM.
Диапазоны, C, RTTI, таблицы, строки и хэши находятся в `evidence.json`.
Адреса, смещения, размеры private data и битовые flags ниже шестнадцатеричные.
Количества, лимиты (128 и 10), номера сообщений, байтовые payload values,
RGB и float даны десятичными числами. Числа с `0x` всегда шестнадцатеричные.

## Карта владельцев и входов

| Класс, доказанный native RTTI | Фабрика | Размер private data | Vtable | Spawn +2c | KeyValue +34 |
|---|---|---:|---|---|---|
| CNodeEnt | 100ca590 | e0 | 101d6620 | 100cf550, уже описан | 100ce080 |
| CNodeViewer | 100ca5f0 | 4fc | 101d74c8 | 100cf6c0 | 1000dba0, inherited |
| CTestHull | 100ca650 | 374 | 101d6b7c | 1000e220, пустой RET | 100bf970, inherited |

Сохранены ограниченные префиксы vtable, не утверждение об их полном размере.
Перед каждой таблицей стоит pointer на RTTI complete-object locator;
его TypeDescriptor содержит соответственно `.?AVCNodeEnt@@`,
`.?AVCNodeViewer@@`, `.?AVCTestHull@@`. Это независимо подтверждает имена
Ghidra. У всех трёх virtual+8=1000e1f0, virtual+4=10017110,
virtual+d0=1000db80 (EAX=0).

| Экспорт | Entry | Единственный native переход |
|---|---|---|
| info_node | 100cfe60 | JMP 100ca590 |
| info_node_air | 100cfe70 | JMP 100ca590 |
| node_viewer | 100cfe80 | JMP 100ca5f0 |
| node_viewer_fly | 100cfe90 | JMP 100ca5f0 |
| node_viewer_human | 100cfea0 | JMP 100ca5f0 |
| node_viewer_large | 100cfeb0 | JMP 100ca5f0 |
| testhull | 100cfef0 | JMP 100ca650 |

Экспортные имена/VA также связаны с сохранённым `analysis/exports/hl.csv`.
Каждый thunk имеет собственную карточку, но не отдельную реализацию factory.
Он сохраняет caller stack и EAX целевой фабрики, сам не задаёт classname,
не вызывает Spawn и не меняет граф. Выбор поведения по classname происходит
позднее; alias не доказывает другую vtable.

## 100ca590 / 100ca5f0 / 100ca650: точный factory ABI

Все три — cdecl `(entvars* pev)`, обычный RET, **EAX=private object**
на нормальном успешном выходе, несмотря Ghidra `void`.
Входной ECX не является владельцем. Если pev==NULL, вызывается engine
CreateEntity (10222f9c); при ненулевом edict выбирается edict+80.
Затем читается pev.pContainingEntity+20c. При ненулевом edict и
edict.private+7c фабрика сразу возвращает этот pointer: vtable, pev и тип
существующего объекта не перепроверяются и не переписываются.

Иначе PvAllocEntPrivateData(10223044) вызывается с `(edict,size)`.
Ненулевой результат получает только vtable и pointer pev в object+4;
полное обнуление/конструктор полей в этих телах отсутствуют. Это владение
через engine private-data allocator, не собственный malloc/free.

Обе ошибки не превращены в корректный NULL-return: при CreateEntity==NULL
далее читается [NULL+20c]; при allocation==NULL выполняется XOR EAX,EAX,
затем MOV [EAX+4],ESI. Поэтому нельзя описывать null branch как безопасный
возврат. Фактическое возникновение allocation failure не исследовано.
Существующий object может принадлежать иному классу — local type guard нет.

## 100ce080: CNodeEnt::KeyValue и потерянный handled

Thiscall `(KeyValueData*)`, RET4; результат находится в keyvalue.handled+0c,
а не в смысловом EAX. Key pointer +4 и value pointer +8 разыменовываются
без NULL guards. Все сравнения буквальные, case-sensitive.

| Ключ | Действие |
|---|---|
| hinttype | atoi1016b55e(value), младшие 16 бит → object+dc |
| activity | тот же parser, младшие 16 бит → object+de; handled=1; return |
| movewith | engine AllocString(value) → object+18; handled=1; return |
| skill | parser EAX целиком → object+60; handled=1; return |
| style | parser EAX целиком → object+64; handled=1; return |
| прочий | handled=0; return, без вызова inherited KeyValue |

**hinttype не имеет раннего return.** После записи WORD ставится handled=1,
перечитывается key pointer и выполняется цепочка остальных сравнений.
При обычном неизменном ключе `hinttype` ни одно не совпадает и 100ce215
перезаписывает handled=0. Значение WORD остаётся сохранённым. Это доказано
ASM, а не исправленная реконструкция. Пустые значения, отрицательные числа
и переполнение не валидируются здесь; полные CRT/locale правила atoi
отдельно не раскрыты. Сужение до WORD не является saturation.

Native BASE descriptor10211760 называет +18 `m_MoveWith`, +60 `m_iLFlags`,
+64 `m_iStyle`, +78 `m_pfnThink`. Поэтому ключ `skill` здесь записывает
именно поле m_iLFlags, не глобальную сложность. Reviewed Spawn100cf550
переносит WORD+dc/+de в node+50/+52 при регистрации узла.
Последующая реакция engine dispatch на handled=0 — отдельная цепь.

## 100cf940: отдельная настройка CTestHull

ECX=hull, RET4. **Один stack argument не читается**: node Spawn передаёт
свой pev, но setup не копирует из него origin/angles. Это не virtual Spawn:
CTestHull virtual+2c указывает на пустой 1000e220.

Порядок действий: engine SetModel(hull.pev.edict, `models/player.mdl`),
SetSize через1011a030 с mins=(-12,-12,0), maxs=(12,12,72), затем
pev.solid+10c=3, movetype+108=4, effects+118=0, health+164=50.0,
yaw_speed+b0=8.0. Имена полей подтверждены native ENTVARS descriptor.
Предварительного precache модели в этом setup нет.

Если global graph102238b0+0==0: object+78=100cc7d0 DropDelay и
virtual+8(1.0). Иначе +78=101028e0 SUB_Remove и virtual+8(0.0).
Graph+4 не проверяется. **После** scheduler call записываются
rendermode+14c=2 и renderamt+150=0.0. Нет непосредственного вызова
DropDelay/SUB_Remove, движения к первому узлу, теста nodeCount или
сброса остальных полей монстра.

Virtual+8 bridge1000e1f0 вызывает virtual+4 с `(delay,0)` и RET4.
Native10017110 ставит float32 `baseTime+delay`: без parent/child и flags20
пишет pev.nextthink+104 и object+58/+5c; иначе пишет +58 и зовёт assist
helpers. BaseTime=pev.ltime при movetype7, иначе global time. Нулевой delay
не означает синхронного вызова callback и не является самостоятельным
доказательством конкретного engine frame. Подробности scheduler уже
описаны в соседнем пакете; здесь подтверждены именно vtable/ABI.

## 100cc7d0 → 100cbbd0: запуск построения

DropDelay — thiscall без stack args, обычный RET. Печатает Alert1
`Node Graph out of Date. Rebuilding...`; вызывает10119fe0(hull,
global graph.nodes+0c). Таким образом source vector — первые xyz первого
узла, не visibility position+0c. Нет проверки nodes!=NULL/nodeCount>0.
Helper вызывает virtual+d0; штатная hull vtable возвращает0, поэтому
player-specific copy+618 не выполняется. Engine SetOrigin получает
hull.edict и исходный vector pointer. Здесь нет DropToFloor.

Затем object+78=100cbbd0 CallBuildNodeGraph, virtual+8(1.0).
CallBuildNodeGraph пишет global10222df0=1, вызывает100ca860 с тем же ECX,
после нормального возврата пишет0 и RET. Старое значение не сохраняется,
вложенность и unwinding cleanup не реализованы. Это bracket flag вокруг
builder; назначение всех внешних readers не следует из короткого тела.
Builder entry и полный алгоритм — соседний пакет, а не новая карточка
здесь. Сохранённый caller показывает его последующее назначение SUB_Remove.

## 100cf6c0: сборка CNodeViewer

ECX=viewer, RET. Если graph+0 или +4 равен0: Alert1 `Graph not ready!`,
10119900(viewer), return. Это deferred removal helper: cleanup затем
pev.flags|=40000000 и targetname=0; не непосредственный engine RemoveEntity.

Case-sensitive classname задаёт настройки (RGB — float32):

| Classname | hull+4e8 | category+4ec / аргумент nearest | RGB+4f0/+4f4/+4f8 |
|---|---:|---:|---|
| node_viewer_fly | 3 | 2 | (160,100,255) |
| node_viewer_large | 2 | 5 | (100,255,160) |
| любой другой, включая node_viewer и node_viewer_human | 1 | 5 | (255,160,100) |

Затем globalgraph.FindNearest100ccea0(&pev.origin,category) → destination+dc.
Если signed result<0, только Alert1 `No nearby node` и return: нет удаления,
нового callback или очистки прежнего count/cursor. Настройки и отрицательный
destination уже записаны. Это отличается от readiness failure.

При result>=0 count+e4=0, Alert2 `basenode %d`. Если signed graph.N<128,
для i=0..N−1 декодируется next-hop(i,destination,hull,mode0) и append
добавляет уникальное неориентированное ребро. N<=0 делает ноль итераций.
При N>=128 сначала Collect100cd550(destination), затем обрабатываются
оба конца рёбер пачки [processed,oldCount); после пачки перечитывается
count, продолжение только если он изменился. Новые рёбра идут в следующую
пачку. В нормальном состоянии append ограничивает count числом128;
recovery для повреждённых counts/IDs/byte-pool нет.

В конце Alert2 `%d nodes`, хотя это число сохранённых рёбер, cursor+e0=0,
think+78=100cc5f0 DrawThink, virtual+8(0.0). Сами массивы +e8/+2e8
не обнуляются. Внешний поиск и decoder уже имеют отдельные контракты;
ни Spawn, ни decoder не доказывают, что cached pool существует при
readiness+0/+4. Viewer не перестраивает и не исправляет graph.

## 100cc5f0: порционная отправка рёбер

Thiscall без stack args, RET. Сначала virtual+8(0.0), затем до **10** рёбер
за вызов. Перед каждым ребром проверяется только `cursor==count`:
при равенстве10119900(viewer) и return. Это не `cursor>=count`; отрицательные
и превышающие count значения не отклоняются. При окончании ровно после
десятого ребра удаление произойдёт при следующем callback, а не в этом.

Каждое сообщение имеет точный порядок:

1. MessageBegin(0,23,NULL,NULL), WriteByte(0).
2. Шесть WriteCoord: A.x,A.y,A.z+8.0,B.x,B.y,B.z+8.0, где A/B берутся
   по viewer endpoint arrays из graph.nodes stride58, позиция+0/+4/+8.
3. WriteShort(signExtend(WORD10231f08)).
4. WriteByte последовательно: 0,0,250,40,0,
   trunc32(R),trunc32(G),trunc32(B),128,0; затем MessageEnd.

Установленные callback slots46/47/48/50/53 соответствуют engine
Begin/End/Byte/Short/Coord. Message ID равен десятичному23; совместимый SDK
называет первый byte0 TE_BEAMPOINTS, destination0 MSG_BROADCAST. Здесь зафиксированы
аргументы writer, а не визуальная интерпретация lifetime/width клиентом.
RGB преобразуется CVTTSS2SI без clamp; при masked invalid NaN/overflow
даёт INT_MIN перед WriteByte. Node pointers/cursor перечитываются между
callback calls, снимок всех координат заранее не делается.

Producer1011fd90 вызывает10116990 через строковый pointer1021b4e8=
`sprites/laserbeam.spr` и сохраняет AX в WORD10231f08. Helper может вернуть0
при неприемлемом/отсутствующем ресурсе; DrawThink не проверяет индекс.
Начальное и актуальное runtime значение глобала не выведены из BSS.
После MessageEnd cursor++, локальный counter++; граф и arrays не меняются.

## 100cef90: CTestHull::ShowBadNode

Thiscall без stack args, RET. Всегда pev.movetype=5, yaw=float32(yaw+4.0),
затем MakeVectors(&pev.angles) через tail bridge10119320.
Пять ParticleEffect calls через10119620 идут в порядке:
origin; origin+64*globalVector28; origin−64*globalVector28;
origin+64*globalVector40; origin−64*globalVector40.
Совместимая globalvars layout называет +28 v_forward и +40 v_right,
не v_up. Все MULSS/ADDSS/SUBSS сохраняют float32 округление; origin/global
vector перечитываются для каждого вызова, а yaw не нормализуется.

Во всех пяти случаях direction pointer=10222f34, color integer255,
count integer25. Bridge превращает unsigned integers в float32 и вызывает
engine ParticleEffect(origin,direction,255.0,25.0), slot42; shared direction
не следует автоматически объявлять текущим нулевым вектором.
В конце virtual+8(float32 0.1). Сам метод не выбирает плохой узел,
не строит path, не назначает себе think+78 и не завершает эффект по таймеру.
Установка этого callback и причины ошибки builder — внешние связи.

## Границы, оставшиеся после локального разбора

* Полный graph builder100ca860 и reorder: отдельные соседние пакеты;
  здесь только создание hull, запуск, показ и удаление.
* Engine allocation/zero-fill, resource preload, actual scheduler dispatch
  и клиентская интерпретация tempentity не исполнялись и не восстановлены
  этими локальными телами. Failure branches не равны наблюдённому сбою.
* Свойства inherited KeyValue/Save/Restore остальных классов не выводятся
  только из vtable. CNodeEnt hints, viewer edge arrays и hull state не
  объявлены полностью сериализованными на основании BASE descriptor.
* Export testhull создаёт объект, но его virtual Spawn пуст: вызов отдельного
  setup доказан для node-registration chain, не для любого map spawn.
* Полная семантика atoi, всех readers10222df0 и writers direction10222f34,
  поведения engine после handled=0 остаётся отдельной задачей.
