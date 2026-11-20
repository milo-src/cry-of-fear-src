# Оригинальный server: полный локальный путь повреждения монстра

Статический разбор оригинального `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. DLL/игра не запускались. Saved C — результат Ghidra, не исходники; ABI, floating comparisons, jump tables и field widths сверены с bounded native ASM и исходными PE bytes.

Пакет содержит **6 новых карточек** в `notes.json` и **1 расширение существующей** `1008bc50` в `notes-updated.json`. Старую REVIEW сохраняет `prior-review-1008bc50.txt`; прежние доказательства player-пути не заменены предположениями. `capture.py` воспроизводит C/ASM/raw provenance, `verify.py` проверяет файлы/байты/карточки без target execution. `write_notes.py` генерирует этот контракт и обе группы карточек.

| Точка входа | Роль | Главная связь |
|---|---|---|
|1008c390|Базовый TraceAttack|AddMultiDamage → blood → TraceBleed|
|1008c4d0|Monster TraceAttack|TraceBleed → hitgroup scaling → gore/blood → AddMultiDamage|
|10089f30|Gore flags|Два точных classname; raw pev+210|
|1008bc50|TakeDamage|dead delegate / freeze / impulse / HP / Killed / AI|
|10087da0|DamageForce|size volume → ST0 force|
|10087e10|DeadTakeDamage|mask261h → reduced health либо Killed(attacker,2)|
|1008a2e0|Разрешение private object|entvars→edict→private, NULL-edict fallback|

Связи с предыдущими пакетами: [radius/accumulator](../server-radius-damage/contract.md), [grenade lifecycle](../server-grenade-lifecycle/contract.md), [effect wire](../server-event-effects/contract.md), [player health](../movement/health-stamina.md), [AI scheduler](../server-monster-scheduler/contract.md). Эти ссылки задают переходы по справочнику; не означают, что все derived callbacks уже разобраны.

Native RTTI и vtables: Generic `101ce36c`, Grenade `101ce8e0`, Player prefix `101a4da8`. В captured Generic/Grenade `+60=1008c4d0`, `+64=1008bc50`; Player имеет собственные TraceAttack/TakeDamage. `+6c` различается у всех трёх. `+fc` у этих классов — midpoint helper `1000d4a0`, output Vector* на stack, EAX возвращает output pointer. Generic `+70=10012910` читает `object+31c` blood color. Helpers в evidence не получают автоматическую REVIEW.

Native field provenance: ENTVARS table `1021aae0`, MONSTER `10216e08`, BASE `10211760`. Object и pev offsets — разные адресные пространства. Ключевые object offsets: `+9 frozen BYTE`, `+a boss BYTE`, `+78 Think`, `+180 conditions`, `+184 enemy EHANDLE`, `+1fc waiting-to-die BYTE`, `+21c last hitgroup`, `+224 monster state`, `+2ec memory`, `+2f4 enemy LKP`, `+30c damage bits`, `+34c cine`, `+354 player reaction`. Здесь ширина BYTE доказана инструкциями; serializer type12 отдельно пишет DWORD. Native ENTVARS `+268` — `vuser1.x`, не fuser; raw gore `pev+210` таблицей не назван.

Границы полноты: локальные тела семи функций разобраны целиком, включая native ветви NaN и скрытые/потерянные Ghidra arguments. Не объявляются завершёнными все derived Killed/TraceAttack/TraceBleed, setters hitgroup multipliers `10226884..94`, consumers gore bits `pev+210`, camera unfreeze lifecycle, libm exceptional path и поведение engine callbacks. Floating-point сравнения описаны для обычного режима masked exceptions; окружение MXCSR/x87 и signaling-NaN exception policy здесь не устанавливаются.


## 0x1008bc50 — CBaseMonster_TakeDamage

Общий обработчик урона: camera freeze, HP, импульс, смерть и реакция AI; сохраняет отдельные player guards.

Расширение существующей REVIEW, не новая функция. Прежние факты player-пути сохранены: player TakeDamage100f6030 вызывает этот обработчик после брони с float(int(hpDamage)); само округление относится к caller (analysis/movement/health-stamina.md). Этот core не делает armour reduction, integer truncation или clamp HP к нулю. Native thiscall: ECX=this, stack(inflictor entvars*, attacker entvars*, damage float32, bits DWORD), RET10h; результаты полный EAX0/1 либо результат DeadTakeDamage. CGenericMonster vtable101ce36c+64 и CGrenade101ce8e0+64 указывают сюда; у CBasePlayer101a4da8+64 собственный100f6030.

Первым проверяется pev.takedamage(+170): только ordered equal ±0 возвращает0; NaN проходит. Затем virtual+bc IsAlive: при EAX0 делегирует10087e10 с теми же четырьмя аргументами и возвращает его EAX. Иначе при deadflag(+174)==0 и BYTE m_bWaitingToDie(object+1fc)==0 вызывается virtual+238 без аргументов. Для captured Generic/Grenade это no-op10014050, но произвольный override не заменяется no-op. После callback pev перечитывается.

Ветка bits&01000000: требуется flags low byte&20, повторный IsAlive!=0, m_pCine(+34c)==NULL, health ordered > damage, BYTE m_bIsBoss(+a)==0 и deadflag==0. Порядок native: flags→IsAlive→cine→bit→health→boss→deadflag. Затем virtual+16c(), ClearRoute100c1a70(), virtual+18c(6) и ChangeSchedule1000aa50(returned schedule). Это не возврат: далее возможны freeze, обычный урон и смерть. Generic slots16c/18c дают100155d0/1008ca70; полные другие overrides вне этого пакета.

Ветка bits&10000000 всегда завершает функцию EAX0, не снимая HP. Успех требует BYTE frozen(+9)==0, flags&20, takedamage ordered==2, IsAlive!=0, cine==NULL, health ordered>damage, BYTE boss==0 и deadflag==0. Тогда BYTE frozen=1, pev.animtime(+138)=0, pev.framerate(+13c)=0, object.Think(+78)=NULL. Если любой guard не прошёл, этих writes нет. NaN takedamage/health/damage не удовлетворяет сравнениям. При обоих специальных bits первая ветка уже могла поменять schedule. BASE save type12 имеет ширину DWORD, но здесь native доступ к +9/+a именно BYTE; не переносить serializer width на инструкции.

Для обычной ветки object.m_bitsDamageType(+30c)|=bits; object+200=bits. Локальный вектор импульса обнуляется, общий attack direction10222f28/2c/30 не сбрасывается. Если inflictor!=NULL, EntOffsetOfPEntity(inflictor.edict+20c)!=0 и1008a2e0(inflictor) дал private: его virtual+d0 проверяет IsPlayer. При ненулевом ответе100125e0(inflictorPrivate.pev) возвращает player object; EHANDLEAssign10017740 с ECX=player+1f0c и аргументом victim=this записывает повреждённого в поле ИСТОЧНИКА. Результат100125e0 в этой ветке не проверяется на NULL.

Затем source=inflictorPrivate.virtual+fc(hidden output Vector*), victim=this.virtual+fc(hidden output). delta=(source.x-0-victim.x, source.y-0-victim.y, source.z-10-victim.z), все SUBSS float32 в этом порядке. Дважды последовательно10017e70 normalize; второй результат записывается и в общий attack direction, и в локальный вектор импульса. Captured generic/player +fc=1000d4a0 возвращает midpoint(absmin+absmax)*0.5, но другие overrides могут отличаться. Normalize использует float32 squares/sum→double sqrt→float32 length; ordered zero даёт(0,0,1), NaN проходит reciprocal. Не заменять двойную нормализацию одной при побитовом восстановлении.

Player-specific ветка по this.virtual+d0!=0: при nonNULL inflictor записывает pev.dmg_inflictor(+190)=inflictor.edict; всегда pev.dmg_take(+1dc)=float32(damage+old). После этого flags&40 возвращает0. Иначе100125e0(this.pev), и только при nonNULL результате BYTE player+21e9!=0 также возвращает0. Эти иммунитеты следуют ПОСЛЕ damage masks, tracking источника и direction/HUD bookkeeping, но ДО импульса и HP. Значение/producer +21e9 здесь не переименовано без отдельного доказательства.

Импульс разрешён при nonNULL inflictor, его ненулевом engine edict offset, victim.movetype(+108)==3, а также attacker==NULL либо attacker.solid(+10c)!=1. DamageForce10087da0(this,damage) возвращает ST0; FSTP float32, XOR sign bit и velocity(+20/+24/+28)+=localDirection*(-force), MULSS/ADDSS. Не проверяется private повторно: если ранний resolver не дал private, локальный direction остаётся нулём. Owner/команда/дружественность и sign/finite damage здесь не фильтруются.

HP=float32(oldHealth-damage). Если m_MonsterState(+224)==6, conditions(+180)|=100h и немедленный EAX0, ДО100177b0 и ДО проверки смерти. Поэтому этот путь может оставить health<=0 без Killed. В остальных состояниях100177b0 обновляет связанные health bars (support), затем health перечитывается. COMISS(+0,health)/JB ведёт в surviving branch при positive health ИЛИ unordered NaN; lethal branch только ordered health<=0.

Lethal branch: global102266fc=inflictor; если BYTE frozen!=0, очищает его, Think=10001160 (thunk JMP virtual+134) и virtual+8(0.0) планирует think. Затем virtual+6c Killed(attacker,gibPolicy): bits&2000→2, иначе bits&1004→1, иначе0. Policy2 имеет приоритет. После callback global102266fc=0 (прежнее значение не восстанавливается), EAX0. Классоспецифические Killed/gib/spawn/removal остаются внешними: Generic slot6c=1008a330, Grenade=100b1b60, Player=100e59f0. Нельзя считать эту доставку доказательством одной общей смерти для всех классов.

Surviving AI branch требует victim.flags&20, attacker!=NULL и EntOffsetOfPEntity(attacker.edict)!=0. Если attacker.flags&8: m_iPlayerReact(+354)==2 ставит memory(+2ec)|=1. При режиме3 и НЕвалидном m_hEnemy(+184): если memory&4==0 и10118f30(attacker,&victim.origin)==0, ставит memory|=4, иначе memory|=1. При валидном enemy в режиме3 memory не меняет. Другие режимы не меняют memory этой веткой. Helper10118f30 — проверка ориентации по направлению, а не LOS trace; полный контракт helper не объявляется новым REVIEW здесь.

Далее attacker.flags&28h обязателен для LKP/yaw/damage conditions. При inflictor!=NULL LKP(+2f4)=inflictor.origin, если enemy handle невалиден, либо enemy.private.pev==inflictor, либо conditions&10h==0; иначе LKP сохраняется. При inflictor==NULL LKP=victim.origin+globalAttackDirection*64, вектор может остаться от прежнего события. MakeIdealYaw100c00f0 получает LKP Vector ПО ЗНАЧЕНИЮ12 байт. Затем damage ordered>0 ставит conditions100h; damage ordered>=20 ставит200h. NaN не ставит эти bits. Нет отдельного положительного damage gate перед HP и остальными эффектами.

Финальная surviving ветка не зависит от attacker AI gates: bits low byte&8 и victim.flags&20. При signed renderfx(+160)<=0 либо30<=renderfx<=40: сначала значения<30 заменяются30, затем renderfx++. Поэтому<=0→31,30..40→31..41. В этой же ветке pev.vuser1.x(+268), только если ordered>40, заменяется40; NaN остаётся. Это именно vuser1.x по native ENTVARS table, не fuser. Остальные renderfx не меняются. Финальный EAX1 не означает положительный снятый урон.

Все pointers/виртуальные callbacks используют живые объекты без локального lifetime snapshot/reentrancy lock. Conditions, masks, enemy, health и прочие поля не восстанавливаются после callbacks. Точная реализация произвольных derived overrides и libm negative-sqrt fallback1016be90 не покрыта этим локальным контрактом. Исходная частичная REVIEW сохранена целиком в prior-review-1008bc50.txt с SHA.

## 0x10087da0 — CBaseMonster_DamageForce

Вычисляет силу импульса по damage и объёму pev.size с верхним ограничением1000.

Native thiscall ECX=this, stack(damage float32), RET4, результат ST0 через FLD float32. Читает this+4→pev; никаких NULL/volume/sign/finite guards.

volume=float32(float32(size.y*size.x)*size.z), offsets+f8/+f4/+fc. После CVTPS2PD: force32=float32((73728.0/double(volume))*double(damage)*5.0); деление и оба умножения — double, константы101a61c0/101a61b8. Затем force32 снова расширяется до double и сравнивается с1000.0 (101a1ec0). Только ordered>1000 заменяется float32 1000. NaN, отрицательное и -infinity не исправляются; +infinity ограничивается. Деление на нулевой volume не предотвращается.

TakeDamage1008bc50 превращает ST0 обратно в float32, меняет знак и умножает на собственный direction. Функция не добавляет velocity сама, не выбирает объект/атакующего и не вычисляет radius. Порядок size.y*size.x*size.z и промежуточные float/double округления сохранены.

## 0x10087e10 — CBaseMonster_DeadTakeDamage

Обновляет общий вектор атаки и обрабатывает повреждение уже неживой цели по маске261h.

Native thiscall ECX=this, stack(inflictor entvars*,attacker entvars*,damage float32,bits), RET10h; полный EAX. Вызывается1008bc50 после takedamage guard и IsAlive()==0. В собственном теле повторных takedamage/alive/boss/freeze/player immunity guards нет.

Перед проверкой damage bits: если inflictor nonNULL, EntOffsetOfPEntity(inflictor.edict)!=0 и private nonNULL, получает inflictor.virtual+fc и this.virtual+fc с hidden Vector output. При NULL edict есть fallback PEntityOfEntOffset(0); при NULL результата либо private эту часть пропускает. delta=(source.x-0-victim.x,source.y-0-victim.y,source.z-10-victim.z). ASM доказывает верные оси; видимые Ghidra stack-local aliasing не означают uninitialized coordinates.

Две inline нормализации: float32 squares, суммирование (dy²+dx²)+dz²; double sqrt затем float32 length, reciprocal float32 и component products. Ordered zero length даёт(0,0,1); NaN нормализуется через NaN reciprocal, не zero fallback. Последний результат пишет global10222f28/2c/30; при пропуске inflictor branch общий вектор не сбрасывается. Player tracking10017740, impulse и damage HUD bookkeeping в этом helper отсутствуют.

Если bits&261h==0, EAX1 без изменения HP/Killed (direction уже мог измениться). Иначе COMISS(damage,health)/JB: при ordered damage>=health health=-50.0 и this.virtual+6c(attacker,2), затем EAX0. Unordered NaN идёт в другую ветку: health=float32(double(health)-double(damage)*0.1), где0.1 — native double101a1df8. Тот же путь при ordered damage<health; EAX1. Никакой проверки конечности/положительности, clamp0 и общего global102266fc context вокруг Killed здесь нет.

Конкретная реализация virtual+6c остаётся dispatch boundary. В отличие от живого пути gibPolicy всегда2 и не выбирается из bits2000/1004; маска261h лишь разрешает dead health logic.

## 0x1008c390 — CBaseEntity_TraceAttack

Базовый TraceAttack накапливает damage, затем отправляет кровь и вызывает bleed при разрешённом blood color.

Native thiscall ECX=this; stack(first entvars*,damage float32,Vector direction по значению12 байт,TraceResult*,bits), RET1ch. Псевдокод теряет аргументы AddMultiDamage; ASM1008c407..41e показывает(first,this,damage,bits), cdecl cleanup10h. Возвращаемое EAX не формирует стабильный результат.

До takedamage guard читает trace.endPos(+14/+18/+1c) и вычисляет position=end-direction*4.0, float32 MULSS/SUBSS. Поэтому NULL trace небезопасен даже при отключённом damage. Затем только pev.takedamage ordered equal zero завершает; NaN проходит.

Сначала AddMultiDamage1011b640, затем this.virtual+70 BloodColor. Только если color!=-1: blood helper1011f900(position Vector по значению,color,исходный damage,pev.velocity Vector по значению), всего32 байта cdecl arguments; затем virtual+74 TraceBleed(damage, direction Vector по значению, trace*, bits), всего24 байта. Color==-1 пропускает И кровь, И bleed, но уже накопленный damage остаётся.

1011f900 конвертирует float amount в signed int через CVTTSS2SI и передаёт10117770 позицию, указатель общего attack direction10222f28, color, integer amount и velocity Vector. Переданный ray direction не заменяет глобальный effect direction. Полный packet/factory эффект см. server-event-effects; local helper не гарантирует видимую кровь при любом color/amount. TraceBleed override и глобальный accumulator рассматриваются отдельно; этот core не делает hitgroup scaling, health subtraction или armor.

## 0x1008c4d0 — CBaseMonster_TraceAttack

TraceAttack монстра: player-exclusion, bleed, hitgroup scaling, gore и AddMultiDamage.

Native thiscall ECX=this; stack(first entvars*,damage float32,direction Vector12bytes,TraceResult*,bits), RET1ch. В vtables CGenericMonster101ce36c+60 и CGrenade101ce8e0+60 подтверждён этот entry; Player имеет собственный100f6950. Нет универсального whole-engine hitbox вывода из этих двух классов. Only ordered takedamage==0 завершает; NaN проходит.

Если victim.spawnflags(+1a4) low byte&40h: first.entvars+20c→edict (приNULL fallback PEntityOfEntOffset(0)), далее private+7c.virtual+d0. Ненулевой IsPlayer исключает весь hit. Затем, если first.owner(+19c)!=NULL, его private.virtual+d0 также исключает при ненулевом результате. NULL first/private в этих путях не защищён; owner проверяется лишь на NULL edict. Проверка относится к источнику/его owner, не к victim.

Пишет object.m_LastHitGroup(+21c)=trace.hitgroup(+34), затем virtual+74 TraceBleed(ИСХОДНЫЙ damage,direction,trace,bits). После callback повторно читает trace.hitgroup для switch, то есть m_LastHitGroup не обязательно совпадёт с дальнейшей веткой, если callback меняет trace. Полная таблица19 индексов1008c7c0 и7 targets1008c7a4 сохранена из original PE.

Hitgroup1: end2=trace.endPos+direction*172.0 (native float101bef54); TraceLine1011a800(start=endPos,end=end2,flag1,ignore=this.pev.edict,outTrace), затем10117fe0(outTrace,"brains",0). После этого1011f900(original endPos,virtual BloodColor,original damage*4.0,velocity). Нет проверки fraction/success в этом caller. Только затем multiplier=global float10226884; bits&02000000 удваивает multiplier (MULSS2), damage=multiplier*originalDamage. Дополнительные decal/blood эффекты предшествуют scaling.

Остальные hitgroups:2 damage*=global10226888;3 *=1022688c;4/5/10/11/12/13/18/19 *=10226894;6/7/14/15/16/17 *=10226890;8 damage=+0;9 damage=global10226884 БЕЗ умножения на исходный damage. За диапазоном1..19 исходный damage сохраняется. Глобальные значения — runtime inputs, их setters/defaults не доказываются чтением этих тел. Арифметика MULSS float32; finite/positive guards нет.

После switch10089f30(this,текущий hitgroup,изменённый damage). Его RET8 доказывает второй аргумент, отсутствующий в Ghidra declaration; сам gore helper damage не читает. Далее blood helper1011f900(trace.endPos,virtual+70(),float32(damage+damage),pev.velocity), даже при color==-1/zero damage на уровне caller. Только ПОСЛЕ этих эффектов AddMultiDamage1011b640(first,this,damage,bits), cdecl4args. В отличие от базового1008c390 accumulation идёт последним, а bleed первым и без color gate.

Непосредственно HP не снимается: accumulator может flush прежнюю цель при смене target, наследует OR masks до Clear и доставляется через Apply→virtual64 (server-radius-damage). Directions/trace остаются caller-owned; локальных lifecycle/reentrancy guards после callbacks нет. Дальнейшие renderer/bodygroup consumers gore mask, setters hit multipliers, full TraceBleed1008c7e0 и derived TraceAttack/Killed — точные внешние границы этого пакета.

## 0x10089f30 — CBaseMonster_SetHitgroupGoreFlags

Для monster_slower и monster_zombie устанавливает составные gore bits по hitgroup и пишет диагностическое сообщение.

Native thiscall ECX=this, stack(hitgroup int, ignored damage DWORD), RET8. Второй stack argument никогда не читается: нет damage/health threshold в этом теле. Класс берётся из this.pev.edict+80 classname string index и globals10223188+98 string pool. Два case-sensitive сравнения с literal monster_slower и monster_zombie. Любой другой classname возвращает без effect. NULL this/pev/edict/string pool не защищены.

Изменяется raw DWORD pev+210; native save table не именует этот offset, поэтому не приписывается поле по чужому SDK. Diagnostics подтверждают назначение gore bits. Native jump tables1008a264 (19bytes для hitgroup1..19) и1008a234 (12targets) сохранены; вне диапазона и hitgroups2..9 — no-op.

Пары guard→последовательные OR bits: group1: !(mask&1)→1;10: !(mask&8)→2,8;11: !(mask&10h)→2,8,10h;12: !(mask&0ch)→4,20h;13: !(mask&40h)→4,20h,40h;14: signed low byte>=0 (bit80 absent)→80h;15: !(mask&100h)→100h,80h;16: !(mask&200h)→200h;17: !(mask&400h)→400h,200h;18: !(mask&2)→2;19: !(mask&4)→4. Никакие bits не очищаются. Group12 проверяет0ch, а НЕ20h: присутствующий left-lower-arm bit8 также подавляет эту ветку; сохранять native поведение, не исправлять по ожиданиям.

Каждая принятая ветка делает один engine AlertMessage(slot61,address1022303c) с аргументом1 и native строкой Setting ...; уже установленный guard не печатает. Compound ветви перечитывают this.pev между OR writes. Строки для1/18/19 называют lost head/left hand/right hand; остальные lower/upper limb. Строка group12 буквально HITGROUP_LOWER_RIGHTARM, а16/17 HITGROUP_LOWER_RIGHTLEG/HITGROUP_UPPER_RIGHTLEG; имена не унифицированы задним числом.

Не вызывает model/sequence/bodygroup setter, не создаёт gib, не отправляет user message и не снимает HP. Значение EAX после сравнения/AlertMessage не является определённым boolean результата; semantic return отсутствует. Реальное отображение изменённой маски исследуется в downstream consumers, не доказано этим setter.

## 0x1008a2e0 — EntityPrivateFromEntvars_WithZeroOffsetFallback

Разрешает entvars в private object через edict, с engine fallback для NULL edict.

Cdecl stack(entvars*), RET без очистки4bytes, полный EAX pointer. Сначала без NULL guard читает entvars+20c (edict*). При nonNULL возвращает edict+7c private pointer как есть. При NULL вызывает engine PEntityOfEntOffset(0), slot69 at1022305c; если engine также вернулNULL, EAX0, иначе возвращает его private+7c.

Это не проверка валидности handle/serial/alive и не allocation: NULL private возвращается, stale/чужой указатель не фильтруется. Отдельная проверка EntOffsetOfPEntity!=0 в TakeDamage выполняется вызывающим, не этим helper. Нельзя заменить fallback на unconditionalNULL без изменения native контракта. ECX не используется как this.

## Продолжение разбора: pass13

Generic Killed1008a330, TraceBleed1008c7e0, BecomeDead100876d0, explicit blood trace1008a510, decal selector/wire10117700/101180b0, gib clamp/spawn/touch/producer1008a440/1008ac80/100877a0/1008bac0/1008ad80 разобраны в [monster death](../server-monster-death/contract.md). Generic ShouldGib возвращает0, GibMonster пуст: это не доказательство готового generic gib pipeline. Derived Killed/TraceBleed, particle consumer, rendering gore mask и runtime effect registration остаются границами. Новые11 REVIEW не означают полный реверс всех смертей.
