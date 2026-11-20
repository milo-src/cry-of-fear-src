# Двери оригинального server: CBaseDoor, CRotDoor, CMomentaryDoor

Статический разбор 34 ранее не рассмотренных тел `1008ce10..1008f3b0`.
Это карта владения данными, вызовов и условий для дальнейшего восстановления;
код игры не менялся и игра не запускалась. Проверен оригинальный `hl.dll`,
SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Все адреса ниже — VA этого server PE, а не client DLL.

Начать поиск можно с [карточек 34 функций](notes.json), затем открыть соответствующий
`decompiled/server/partial-pass/functions/0xADDRESS.c` и [bounded ASM](asm).
[evidence.json](evidence.json) фиксирует хеши C/ASM/исходных байтов, три vtable,
33 native save descriptors, 15 разрешённых строк и три экспортных JMP.
[collect_evidence.py](collect_evidence.py) воспроизводит чтение PE и проверяет отсутствие
предыдущего REVIEW; после включения карточек в общий каталог эта проверка намеренно
перестанет проходить. SDK используется лишь для сопоставления привычных имён.

## Владельцы и точки входа

| Владелец | Фабрика | Размер private data | vtable | Экспортный переход |
|---|---|---:|---|---|
| CBaseDoor | 1008ce10 | 0x1b8 | 101bf290 | func_door 1008f580 и func_water 1008f5a0 → фабрика |
| CRotDoor | 1008ced0 | 0x1b8 | 101bf59c | func_door_rotating 1008f590 → фабрика |
| CMomentaryDoor | 1008ce70 | 0x18c | 101bf6c0 | экспорт этой фабрики здесь отдельно не исследован |

Фабрика при существующем `edict+7c` возвращает этот private pointer в EAX.
Иначе вызывает allocator через `10223044`, пишет vtable и `object+4=entvars`.
При нулевом entvars вызывается `10222f9c`, после успеха используется `edict+80`.
В C прототипы ошибочно `void`; EAX доказан ASM. Более того, ветка нулевого результата
allocator действительно выполняет запись `[EAX+4]` после `xor eax,eax`;
это не доказательство безопасной обработки нехватки памяти. Фабрики сами не обнуляют
все поля и не доказывают контракт внешнего allocator.

| Смещение vtable | CBaseDoor | CRotDoor | CMomentaryDoor |
|---:|---|---|---|
| +20 | унаследованное | унаследованное | 1008d250: float m_fLastPos |
| +2c | 1008ed80 Spawn | 1008f0e0 Spawn | 1008ee60 Spawn |
| +30 | 1008e4d0 Precache | 1008e4d0 | 1008e9f0 Precache |
| +34 | 1008db00 KeyValue | 1008def0 KeyValue | 1008de10 KeyValue |
| +38 | 1008eb90 Save | 1008eb90 | 1008ebf0 Save |
| +3c | 1008eb10 Restore | 1008eb10 | 1008eb50 Restore |
| +40 | 1008dfb0 ObjectCaps | 1008dfb0 | 1008e000 ObjectCaps |
| +48 | 1008e240 подготовка endpoints | 1008e4c0 пустой hook | унаследованное |
| +5c | унаследованное | унаследованное | 1008daf0: m_iState |
| +a8 | 1008ec50 SetToggleState | 1008ed30 SetToggleState | унаследованное |
| +e8 | 1008f2f0 Use | 1008f2f0 | 1008f3b0 Use |
| +ec | 1008cf30 Blocked | 1008cf30 | унаследованное |

Таблица получена из native pointer assignments и PE, не из соседства функций.
Роли Save/Restore дополнительно проверены телами `1011adc0` (запись полей) и
`10117010` (чтение/обнуление полей). Называть их наоборот по порядку адресов нельзя.

## Данные объекта

`object+4` — entvars; `object+14` — связанный объект, origin которого участвует в
parent-relative позициях. Полное владение/удаление этого связанного объекта здесь
не исследовано. `object+e4` — activator handle: это смещение ECX перед `10017740`
в ASM `1008f2f0`, а не сам door object. Handle читает edict/serial и private data
через `10017780/90/a0`; см. supporting_sources в evidence.

Native descriptors `10219a98` подтверждают общие имена:

| Смещение | Имя / назначение |
|---:|---|
| +100 | m_toggle_state: 0 top, 1 bottom, 2 moving up, 3 moving down |
| +104 / +108 / +10c / +110 | m_flActivateFinished / m_flMoveDistance / m_flWait / m_flLip |
| +11c / +128 | m_vecPosition1 / m_vecPosition2 |
| +134 / +140 | m_vecAngle1 / m_vecAngle2 |
| +154 | m_pfnCallWhenMoveDone |
| +158 / +164 | m_vecFinalDest / m_flLinearMoveSpeed |
| +168 / +16c | m_flAngularMoveSpeed / m_vecFinalAngle |
| +17c | m_sMaster |

Для CBaseDoor/CRotDoor descriptors `10213a30`, 10 записей:
`+180 m_bHealthValue`, `+181 m_bMoveSnd`, `+182 m_bStopSnd`,
`+1a8..+1ab m_bLockedSound/m_bLockedSentence/m_bUnlockedSound/m_bUnlockedSentence`,
`+1ac m_iOnOffMode`, `+1b0 m_iImmediateMode`, `+1b4 m_iDirectUse`.
Блок lock sounds `+184..+1a5` применяется по адресам, но не входит в эти 10 записей.

У CMomentaryDoor другие значения тех же смещений: `+180 m_bMoveSnd`,
`+184 m_iState`, `+188 m_fLastPos` (3 записи `10213ad0`). Поэтому `1008d250`
не является чтением locked sentence, а `1008daf0` не является чтением locked sound.

## KeyValue и подготовка

`1008db00`: `skin` → entvars+110; `movesnd/stopsnd/healthvalue` → +181/+182/+180;
`locked_sound/locked_sentence/unlocked_sound/unlocked_sentence` → +1a8..+1ab;
`immediatemode/onoffmode/directuse` → +1b0/+1ac/+1b4 через atoi;
`WaveHeight` → entvars+148 = parsed float × 0.125. Обработанные ключи ставят
`KeyValueData+0c=1`; остальные передаются `10102480`.
Числовые конвертеры байтов/skin отдельной карточкой здесь не разбирались.

`1008def0` CRotDoor: строка native `101a4010="axes"` разбирается в
entvars+44 через `1011a6c0`; иначе основной door KeyValue.
`1008de10` CMomentaryDoor: movesnd пишет +180; stopsnd и healthvalue только
признаются обработанными и не записывают значение; остальные уходят базовому parser.

`1008ed80` обычной двери вызывает virtual+30, `10102b80(entvars)`, задаёт
movetype=7, модель через `10222f50`, speed=100 только если он равен нулю,
state=1. Если skin!=0: solid=0 и spawnflags|=80000000; иначе
solid=`(~(spawnflags>>1))&4`. Touch устанавливается, кроме `(flags&500)==100`.

Подготовка линейных endpoints вынесена в virtual+48 `1008e240`, а не находится
в Spawn. Для конечных обычных чисел:

```
P1 = origin - (parent ? parent.origin : 0)
distance = abs((size.x-2)*movedir.x)
         + abs((size.y-2)*movedir.y)
         + abs((size.z-2)*movedir.z) - m_flLip
P2 = P1 + movedir*distance
```

При flag1 дверь переносится к P2 (+parent.origin), корректируется object+68
на разницу origin и конечного положения и P1/P2 меняются местами. ASM
1008e465..1008e4ac сохраняет все три старые компоненты P2: странное чтение
старого Y после записи в C является потерей декомпилятора, а не частичным swap.
Кто именно вызывает virtual+48 и когда при загрузке/restore — следующий вопрос.

`1008ec50 SetToggleState(state)` в C почти пуст, однако ASM полностью задаёт
вектор для `100c4550(this,x,y,z)`: state==0 выбирает P2, иначе P1; к вектору
добавляется parent.origin при наличии parent. Само поле +100 здесь не пишется.

`1008f0e0` CRotDoor: helper `10101e00` готовит movedir; flag2 меняет его знак.
A1=angles, A2=angles+movedir*m_flMoveDistance; solid как выше, movetype=7,
speed по умолчанию100, state=1, тот же touch predicate. Для flag1 angles=A2,
потом A2=A1 и movedir=-movedir. **A1 остаётся прежним**: native ASM
1008f237..1008f27b загружает и записывает обратно A1, поэтому после этой ветки
A1==A2. Это наблюдаемое свойство бинарника, не основание молча заменить код
на привычный полный swap из SDK. `1008ed30` выбирает angles=A2 для state0,
иначе A1 и вызывает `10119fe0`; state+100 сам не меняет.

## Основной автомат

```
DoorTouch 1008da20 / Use 1008f2f0
 → master gate 10119060 → Activate 1008d260
 → DoorGoUp 1008d480: state2, completion=1008d870, P2/A2
 → DoorHitTop 1008d870: state0; ожидание / toggle-touch
 → DoorGoDown 1008d320: state3, completion=1008d6f0, P1/A1
 → DoorHitBottom 1008d6f0: state1; восстановление touch
```

Линейный переход `101025c0` сохраняет destination/speed и назначает
CBaseToggle::LinearMoveNow; угловой `10101b50` аналогично назначает AngularMoveNow.
Это постановка дальнейшей работы, не непосредственная телепортация в конечную точку.
Полная физика/скорость интеграции этих следующих callbacks сюда не входит.

DoorTouch принимает только classname `player`. Если master не проходит,
проигрывается locked feedback, но немедленного return в этой ветке нет:
окончательный запрет повторяется в Activate. Ненулевой targetname без flag400
даёт locked feedback и return. После успешной Activate touch+7c очищается.

Activate первым проверяет master с сохранённым activator; при отказе возвращает0.
Если flag20 и state0 — вызывает GoDown. Иначе при валидном activator, virtual+d0
которого возвращает ненулевое, вызывает virtual+68 с float health byte+180 и0;
затем unlocked feedback, GoUp и return1. Конкретный класс получателя virtual+d0/+68
этой семьёй не установлен, привычные IsPlayer/TakeHealth — сопоставление SDK.

Use сохраняет activator прежде master gate. В onoffmode: type1 открывает только
state1, type0 закрывает только state0; прочие type проходят обычную toggle логику.
Без такой команды Activate вызывается из state1 либо state0 при flag20.
Промежуточные state2/3 обычный Use игнорирует. ASM ret10 доказывает четыре
stack-аргумента, хотя C `1008f2f0` показывает только три.

GoUp для rotating-class с валидным activator, без flag10 и ненулевым movedir.y
может умножить весь A2 на -1. Знак выбирается по XY cross-выражению с позицией
activator и глобальным направлением после вызовов `10119320` (сначала yaw-only,
затем полные angles). Точное выражение сохранено в C; трактовка внешнего
engine callback `10222f94` не подменяется здесь математикой SDK.

Top при отсутствии flag20 задаёт callback GoDown и scheduler virtual+8(wait).
wait==-1 дополнительно вызывает `10017ad0`, который очищает scheduler fields.
С flag20 восстанавливает touch, если `(flags&500)!=100`. Bottom также восстанавливает
touch по этому условию. Звуки движения/остановки подавлены sign bit spawnflags.

## Сигналы targets: важные различия CoF

`10102930` — связанный с targets/delay helper; ASM доказывает `(activator,type,0)`
и ECX=this. Параметры, которые C ошибочно приписывает `10017790`, фактически
лежат на стеке для последующего вызова. Не переносить этот ошибочный прототип.

| Момент | Условие | type при onoffmode=0 | type при onoffmode!=0 |
|---|---|---:|---:|
| GoUp | immediatemode!=0 | 3 | 1 |
| GoDown rotating | immediatemode!=0 | 3 | 0 |
| GoDown linear | immediatemode!=0 | 0 | 0 |
| HitTop | immediatemode==0 | 3 | 0 |
| HitBottom | immediatemode==0 | 3 | 1 |

Последние два значения действительно противоположны immediate-переходам.
Таблица передаёт native числа, не исправляет их по предполагаемой семантике ON/OFF.
Отдельно endpoint callback вызывает `10101ff0(target,activator,this,3,0)`.
При flag1=0 top берёт entvars+1d8, bottom +1d4; при flag1=1 наоборот.

## Blocked и связанные двери

`1008cf30` вызывает virtual+64 blocker с `(doorEntvars,doorEntvars,damage,1)`,
если damage entvars+1e4 ненулевой. При wait>=0 текущая дверь разворачивается:
state3→GoUp, иначе→GoDown; предварительно останавливается moving sound при
отсутствии sign bit. При immediatemode==0 и targetname!=0 идёт поиск `10118590`.

Критические точные условия, подтверждённые ASM:

- Кандидат проходит при `(candidateEntvars!=ownEntvars && classname==func_door)
  || classname==func_door_rotating`. Поэтому self rotating не исключён общим условием.
- Кандидаты с wait<0 игнорируются. При совпадении candidate.velocity с own.velocity
  **и candidate.avelocity с own.velocity** синхронизируются origin/angles и
  вызывается velocity helper. Сравнение с own.avelocity здесь было бы изменением оригинала.
- Затем кандидат разворачивается по своему state3 независимо от совпадения скоростей.
- Значения globals `10222f34..3c`, передаваемые velocity helper, здесь не объявлены
  безусловно нулевыми: их весь lifecycle не рассмотрен.

## Звуки и сохранение

Precache `1008e4d0`: movesnd1..10 → doors/doormoveN.wav; stopsnd1..8 →
doors/doorstopN.wav; прочее common/null.wav. Sound IDs становятся string-base
relative entvars+1f0/+1f4. Locked/unlocked sound selector проходит `10012df0`,
precache и строковый allocator `10223054`. Sentence sequences:
locked1..9 = NA,ND,NF,NFIRE,NCHEM,NRAD,NCON,NH,NG;
unlocked1..8 = EA,ED,EF,EFIRE,ECHEM,ERAD,ECON,EH; иные →0.
Строки DAT разрешены из оригинального PE, а не угаданы по SDK.

`1008e010(entvars,lockBlock,locked,button)` использует общие deadlines
lockBlock+18 для wav и +1c для sentence. Нужно `now>deadline`, а не >=.
Wav cooldown=3s для двери, .5s для button; sentence cooldown=6s.
Одновременный wav+sentence уменьшает wav volume до .25, только wav —1;
sentence volume=.85, attenuation=.8. Locked использует IDs +0/+4, index+10,
EOF byte+20; unlocked IDs+8/+c, index+14, EOF byte+21. Возврат sentence helper
100fe510 обновляет текущий index, сбрасывает противоположный index и ставит EOF,
если index не изменился. ASM подтверждает **float** deadlines (`addss/movss`),
несмотря на `(int)` и int-array в C. Backend/внутренности sentence helper не разобраны.

Save/Restore цепочки сначала вызывают базовую пару `10102b20/10102890`,
потом write/read block с именем CBaseDoor(10 descriptors) или CMomentaryDoor(3).
Save передаёт targetname, если он задан, иначе classname как диагностическое имя.
Отсутствие lockBlock в door descriptor не доказывает полную потерю runtime звука:
общий restore/Precache lifecycle остаётся внешним вопросом.

## Пропорциональная CMomentaryDoor

Spawn `1008ee60`: movedir через helper, solid4/movetype7, модель, damage=2 только
если он нулевой, m_iState=0. Строит P1/P2 по той же формуле; flag1 переносит
к P2 и меняет endpoints местами. После этого оба endpoint вычитают parent.origin
при наличии parent. Touch=null, затем virtual Precache. Speed100 здесь не задаётся.
Precache `1008e9f0` поддерживает movesnd1..8, прочее null.wav.

Use `1008f3b0` принимает только type2. Для обычных конечных значений `t=min(value,1)`;
нижнего clamp к0 нет. ASM `MINSS xmm0,[value]` также не доказывает фильтрацию NaN.
Запрет `10102320` проверяет master с уже сохранённым handle; этот Use **не пишет**
activator handle из входного param1. Destination=P1+(P2-P1)*t.
При speed==0 выбирается `10*length(destination-currentOrigin)`; speed!=0 запускает
move. При m_iState==0 ставится2 и один раз начинается moving sound; m_fLastPos=t;
назначаются LinearMove и MomentaryMoveDone. Сравнение distance с world origin
при parent-relative endpoints оставлено как в бинарнике, без догадки об исправлении.
Done `1008df60` ставит m_iState=0 и останавливает moving sound; отдельный stopsnd
не играет. Getters +20/+5c читают lastPos/state без пересчёта геометрии.

## Границы и точные следующие вопросы

1. Дальнейшая механика `CBaseToggle::LinearMoveNow/AngularMoveNow` и finish callbacks:
   как parent transform, frame time и collision превращаются в velocity. Здесь
   доказана постановка destination/speed, не полный физический интегратор.
2. Caller/lifecycle virtual+48 `1008e240`: когда после Spawn/Restore готовятся P1/P2.
3. Система parent object+14 и object+68: setters, lifetime и перенос transform.
4. Master helper `10119060` имеет потерянный return в C: door caller проверяет EAX,
   но полный синтаксис master expressions/ошибок следует разбирать отдельно.
5. Sentence helper `100fe510`, sound selector `10012df0`, numeric converters
   `1013df50/1013e080`: точные contracts и нестандартные входы не исследованы.
6. Полный class hierarchy/vtable bounds и все export→factory aliases не доказаны.
   Сохранены только нужные окна указателей; их нельзя считать полным классом.

Для будущего восстановления особенно важны доказанные native особенности: различная
семантика одинаковых offsets у двух классов; signed silence flag; верхний-only clamp
momentary value; onoff/immediate таблица; blocked self-rotating predicate; native
start-open A1/A2 anomaly. Они не должны исчезнуть при механическом копировании SDK.
