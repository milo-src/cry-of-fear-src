# Оригинальные animation events и завершение scripted monster

Пакет связывает общий обработчик animation events с владельцами объектов и ветвями завершения cinematic. Это статический разбор оригинального server `hl.dll`, а не реализация порта или результат запуска игры. Девять primary-функций перечислены ниже; ещё 24 сохранённых C-тела используются только как support. Полнота этого локального switch не означает полноту всех обработчиков всех производных монстров.

Исходный SHA-256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. [evidence.json](evidence.json) содержит хеши C, 33 ограниченных ASM-диапазона с проверенными исходными байтами, 207 raw-записей, RTTI, native save descriptors и привязку engine API. [capture.py](capture.py) воспроизводит извлечение без исполнения DLL; [verify.py](verify.py) проверяет доказательства. Никакой новый импорт Ghidra для этого пакета не выполнялся. Адреса — native VA, смещения полей и маски ниже шестнадцатеричные, event ID и обычные скалярные значения десятичные.

## Навигация и владельцы

| Entry | Владелец / ABI | Локальный контракт |
|---|---|---|
| `100b0670` | CGenericMonster, ECX=this, event pointer на стеке | Tail jump в `100bf310`, сохраняет ABI |
| `100bf310` | общий monster event handler, RET4 | Switch по event+0; options pointer в event+4 |
| `100c2010` | monster, ECX=this | Копирование незаполненного scratch-вектора в view_ofs |
| `100fa450` | cinematic, ECX=this, DWORD argument, RET4 | Запись permission+3bc при отсутствии lock flag20 |
| `100fa1a0` | cdecl(entvars*), EAX pointer | Возврат private data либо выделение CCineMonster |
| `100fa4b0` | cinematic, ECX=this | Отмена self или группы по targetname |
| `100fa530` | monster, ECX=this, EAX0/1 | Отвязка cinematic, death/reposition/final-state ветви |
| `100fba10` | cdecl(edict*) | Фильтр scripted classname → cleanup монстра → сброс schedule |
| `100fbb20` | cinematic, ECX=this, monster argument, RET4 | Sequence done → cleanup → finish callback → targets |

Raw vtable CGenericMonster `101ce36c+11c` содержит `100b0670`; CCineMonster `101ddb68+11c` — непосредственно `100bf310`. RTTI и factory `100b05e0`/`100fa1a0` подтверждают владельцев. `100b0670` заканчивается JMP, а не вызовом функции, которая не возвращается. Конкретный CCineMonster slot+24c содержит `100fafb0`; это не доказательство такого же callback у всех derived classes.

Dispatcher event8 уже описан в [server-studio-events](../server-studio-events/contract.md), модельные helpers — в [server-studio-controls](../server-studio-controls/contract.md), schedule reset — в [server-monster-scheduler](../server-monster-scheduler/contract.md). Новый пакет не заменяет их существующие карточки.

## Полный локальный switch `100bf310`

Вход event+0 — signed ID, event+4 — заимствованный указатель строки. Проверок NULL, длины, диапазона `atoi` и attachment/bodygroup index здесь нет. Jump table `100bf794` содержит 22 DWORD для ID1000..1021; ID2001/2002/2010 обслуживаются отдельными ветвями. Необработанный ID вызывает Alert severity2: `Unhandled animation event %d for %s`.

| ID | Guard и действие |
|---|---|
| 1000 | Только monster.state+224==6: deadflag=1, health=0 |
| 1010 | Тот же guard: deadflag=0, health=max_health |
| 1001 / 1002 | Если pCine+34c!=NULL, `100fa450(0/1)` с ECX=pCine |
| 1003 | `FireTargets(options,this,this,3,0.0)` |
| 1004 / 1008 | Пропуск только при spawnflags&2 и state==1; иначе `100fc9f0(edict,4/2,options,1,2,0,100)` |
| 1005 | Sentence-group `100fe450(edict,options,1,2,0,100,-1)` |
| 1009 | То же, только если `RandomLong(0,2)!=0` |
| 1016 | GetAttachment с первым `atoi(options)`; `1011f900(position by value,247,60.0,velocity by value)`; второй `atoi(options)` записывается в body |
| 1018 | `faster/faster_step.wav`, channel4, volume1, attenuation0.8, flags0, pitch=`RandomLong(0,10)+95` |
| 1019 | GetAttachment0 и тот же effect helper с 247/45.0; body не меняется |
| 1020 | При точном classname `monster_sewmo`: body=atoi(options); иначе SetBodygroup(this,1,atoi(options)) |
| 1021 | skin=atoi(options) |
| 2001 / 2002 | Только flags&200: RandomLong(0,1) выбирает `common/bodydrop3.wav` при0, `common/bodydrop4.wav` иначе; channel4, volume1, attenuation0.8, flags0, pitch100/90 |
| 2010 | `zombie/claw_miss2.wav`, channel4, volume1, attenuation0.8, flags0, pitch100 |

У 2001/2002 после bodydrop при waterlevel!=0 добавляются `player/water_splash.wav` с channel0/pitch100 (остальные параметры1/0.8/0) и `1011a2f0(this,0)`. ID1006/1007/1011..1015/1017 уходят в default diagnostic.

Список параметров звука взят из ASM: псевдокод теряет attenuation/flags/pitch, а также часть параметров sentence helper. Engine RandomLong привязан через native initializer `100b4aa0`, таблицу `10222f48` и SDK slot90 (`102230b0`); это не RandomFloat. `1011f900` передаёт нижнему `10117770` origin pointer, global10222f28,247,`CVTTSS2SI(size)` и velocity by value. Конечный wire/effect контракт `10117770` и splash helper `1011a2f0` здесь не объявляются полностью восстановленными. Sentence group support `100fe450` проверяет global1022c8c4, находит группу и выбирает строку через отдельные helpers; их полная семантика не выведена из имени.

Native ENTVARS descriptors подтверждают body+114, skin+110, framerate+13c, health+164, deadflag+174, enemy+194, flags+1a8, max_health+1b4, waterlevel+1c4. В `100bf310` указатели не сохраняются для владения и строки не копируются.

## Eye helper: существующий машинный дефект

`100c2010` получает model через engine GetModelPtr slot74 и вызывает `1000f230(model,&stackVector12)`. Проверенный support `1000f230` при nonNULL model просто возвращается; при NULL делает tail jump в Alert. Ни одна ветвь не записывает output vector. Caller не инициализирует локальные 12 байт и затем безусловно копирует их в pev.view_ofs+178..180.

Три ordered float equality сравнивают полученный вектор с global10222f34/38/3c. Только полное совпадение вызывает Alert2 `%s has no view_ofs!`; NaN не считается совпадением. Нет fallback, чтения координат глаза из studio header или гарантированного результата. Это установлено сопоставлением caller и callee ASM, а не предположением о назначении GetEyePosition. Фактическое содержимое stack и видимый результат в игре этим статическим пакетом не определены.

## Cinematic: permission, private data и отмена

`100fa450` при cine.pev.spawnflags&20 оставляет +3bc неизменным; иначе пишет весь входной DWORD без bool normalization. Spawn support `100fbb90` задаёт +3bc=!(spawnflags&20). Consumer `100fa480` требует ненулевой +3bc, разрешённый target EHANDLE+18c и target.deadflag==0. Это локальное permission-условие, а не вся политика interruption.

`100fa1a0` при NULL entvars пытается CreateEntity и при успехе использует edict+80. Далее получает edict через entvars+20c и возвращает edict+7c private data, если оно существует, без проверки класса или замены vtable. Иначе вызывает PvAllocEntPrivateData(edict,3c0), записывает vtable101ddb68 и object+4=entvars. Собственного zero-fill или полного конструктора нет. При CreateEntity failure остаётся dereference NULL+20c; при private allocation failure ASM явно делает `XOR EAX,EAX; MOV [EAX+4],ESI`. Эти пути нельзя заменять в описании безопасным `return NULL`.

`100fa4b0` использует pev.targetname+1d0: нулевое поле → отмена собственного edict; ненулевое → итерация `10118590(previous,stringbase+targetname)` с передачей каждого найденного edict в `100fba10`. Для следующей итерации имя перечитывается после callback. Пустой результат не вызывает fallback self. Это не поиск по pev.target и не локальная гарантия устойчивости указателей после callback.

`100fba10` сначала проверяет точный classname `scripted_sequence` или `scripted_action`. NULL edict не защищён до чтения classname. Два вызова factory дают соответственно запись cine+368=0 и target EHANDLE+18c. При ненулевом resolved private object вызывается virtual+78; только ненулевой возвращённый monster с state+224==6 получает scriptState+348=2 и cleanup `100fa530`. Затем tail jump `1000aad0` сбрасывает taskStatus+22c/schedulePointer+230/scheduleIndex+234, независимо от cleanup return. Generic virtual+78 — identity `10013ef0`, но общий вызов остаётся динамическим. Проверки обратной связи monster.pCine с этой же cinematic здесь нет.

## Точный cleanup `100fa530`

1. Сохраняется oldCine=monster+34c. При наличии oldCine очищается его target EHANDLE+18c и из oldCine+3b0 восстанавливается **только movetype**. Flag100 cinematic принудительно ставит monster.deadflag=1. Support producer `100fb6b0` сохраняет также solid+3b4/effects+3b8, но cleanup их не читает. Без oldCine устанавливаются movetype4 и solid3.
2. Всегда обнуляются pCine+34c, собственный target EHANDLE+18c и собственный pointer+c.
3. При deadflag==1: health0, framerate0, solid0; `100c2a70(8)` пишет state/idealState=8; deadflag2. SetSize сохраняет mins и maxs.x/y, задаёт maxs.z=mins.z+2. Если oldCine существует и flag8 установлен, очищаются callbacks Use+80/Think+78/Touch+7c; иначе вызывается SUB_StartFadeOut. Затем framerate0, movetype0, effects|20, return0.
4. В оставшейся ветви reposition выполняется только при oldCine и oldCine+370!=0 (`m_iszPlay`, подтверждён KeyValue support `100fb120`) и без flag80. GetBonePosition0 получает bone position и angles. Если ordered XY distance<8, выбранная позиция заменяется прежним origin целиком. Сумма квадратов вычисляется float, затем sqrt double и conversion float; NaN не удовлетворяет `<8`.
5. Записываются выбранные x/y, но z=**прежний z+1**, затем flags|200 и DropToFloor. При результате<0 восстанавливается прежний xyz, без локального снятия200. При0 выбирается scratch.z выбранной позиции (bone z либо прежний origin.z после ветки distance<8) и flags&~200. При>0 остаётся engine результат. Вызывается `10119fe0(monster,&pev.origin)` и ставится effects|20. Support helper может дополнительно писать monster+618 по virtual+d0 и вызывает engine SetOrigin; это не просто безусловный прямой engine wrapper.
6. Внутри oldCine+370!=0 activity+214 обнуляется даже при flag80. Затем в общей ветви enemy+194=0. При ordered health>0 idealState+228=1. Иначе `COMISS/JBE` (включая unordered NaN, если исполнение продолжается) ставит conditions+180|100, idealState8, deadflag1; вызывает AI-trigger checker `100bda70`; затем deadflag0. Оба выхода возвращают1. Current state+224 в этой общей ветви напрямую не меняется.

Таким образом return1 не доказывает здоровье/жизнь монстра, а сохранённые solid/effects не означают, что cleanup их восстанавливает. Временный deadflag вокруг AI-trigger checker нельзя описывать как вызов death routine. Полный lifecycle fade, callback side effects и геометрия engine DropToFloor находятся за пределами локального доказательства.

## Sequence done `100fbb20`

В cinematic +39c копируется +398 (`m_iRepeats` из KeyValue), +368=0. Если flag4 отсутствует, Think+78 становится SUB_Remove101028e0 и вызывается virtual+8(0.1f). Затем native `MOV ECX,[EBP+8]` направляет cleanup на **monster argument**, а не cinematic this. Независимо от cleanup return вызывается cine.virtual+24c(monster), после него `10102930(cine,NULL,3,0.0)`.

Concrete callback `100fafb0` сначала при idealState!=8 ставит1, затем выбирает по cine+390 (`m_iFinishSchedule`):0 → clear schedule;1 → monster.virtual+18c(0x20) и установка результата через1000aa50; иной случай → Alert и clear. Это support локального finish path, без утверждения о всех derived overrides. SequenceDone не проверяет monsterNULL и не пропускает finish/targets при cleanup0. Владение указателями не передаётся. Реальная очередность будущего scheduled removal относительно внешнего engine frame не устанавливается этим методом.

## Оставшиеся точные границы

- Полное множество monster-specific virtual+11c обработчиков требует отдельного обхода остальных vtables. Две указанные таблицы не дают глобальной полноты event dispatch.
- `10117770` и `1011a2f0`, blood/particle/ripple/splash и их wire payload теперь разобраны в [event-effects](../server-event-effects/contract.md). Receiver и фактический визуальный результат остаются отдельными границами.
- `100fdef0`/`10100080` и11 локальных sentence parser/selection/play/stop контрактов теперь описаны в [sentence-groups](../server-sentence-groups/contract.md). Lifecycle reset, весь CRT comparator и фактическая слышимость ещё не установлены.
- SUB_StartFadeOut `1008ac50` разобран в [event-effects](../server-event-effects/contract.md): планирует SUB_Remove через0.2, не меняет alpha. Позднее engine удаление и DropToFloor остаются внешними. Полный локальный cinematic Activate/Spawn/Use/find/possess/finish маршрут — [cinematic-lifecycle](../server-cinematic-lifecycle/contract.md).
- Canonical source names для cine+368 и monster+c не доказаны; отмечены наблюдаемые записи, без выдуманных полей.
- Factory failure и eye scratch являются установленными native путями, но их достижимость и проявление в конкретной игровой сессии не проверялись.
