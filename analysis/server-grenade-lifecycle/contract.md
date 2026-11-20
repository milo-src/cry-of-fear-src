# Оригинальная CGrenade: создание, контакт, взрыв и удаление

Статический разбор оригинального server `hl.dll`, SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Только сохранённые C, ограниченные ASM, PE bytes/exports/RTTI/native descriptors. Бинарник не исполнялся; порт и RTX не изменялись. 15 новых primary entries, support не получает автоматический REVIEW. Смещения hexadecimal; обычные значения времени/counts decimal, если нет `h`/`0x`. Float/NaN свойства предполагают продолжающееся исполнение с masked exceptions; процессорные exception handlers не исследованы.

## Маршруты

```text
factory 100b0f50 ← grenade export100b2390 (JMP)
  ├ contact100b1bb0 → Spawn100b20f0 → DangerSoundThink100b1360
  │                                → ExplodeTouch100b1950 → Explode100b1540
  └ remote100b1c80 → SlideTouch100b1f30 / Use100b1520
                    owner dispatch100b22e0 → Use → schedule Detonate100b1490
Killed slot6c100b1b60 → Detonate → trace → Explode
TumbleThink100b21a0 / PreDetonate100b1b70 → schedule Detonate
Explode → messages + radiusDamage wrapper + debris → schedule Smoke100b1fb0
Smoke → smoke/bubbles → lifecycle mark10119900 → engine removal later
```

[Bounce/danger sound и pool](../server-monster-senses/contract.md), [scheduler](../server-queue-b/contract-parent.md), [effects/removal](../server-event-effects/contract.md). Это локальный жизненный цикл CGrenade. Core `1008a690`, оба radius wrappers и AddMultiDamage продолжены в [radius damage](../server-radius-damage/contract.md); engine collision/physics, конкретные damage callbacks и все weapon callers ещё не закрыты. BounceTouch действует при назначении callback внешним producer: прочитанные contact/remote constructors назначают другие Touch. Полный timed-grenade producer и все производные классы не следует считать восстановленными из одного BounceTouch.

## Native layout и ABI

`this+4` — entvars pointer; `+78/+7c/+80` — Think/Touch/Use pointers. Vtable `101ce8e0`: `+2c=100b20f0` Spawn, `+6c=100b1b60` Killed, `+e0=1000e2a0` Think bridge, `+e4=1000e2b0` Touch bridge, `+e8=1000e2e0` Use bridge, `+244=100b0fc0` BounceSound. Native MONSTER save table называет `+308 m_flNextAttack`; `+368` — доказанный одноразовый sound latch без восстановленного исходного имени. Не смешивать эти offsets с entvars.

ENTVARS descriptors: `+8 origin`, `+20 velocity`, `+50 angles`, `+5c avelocity`, `+b8 model`, `+108 movetype`, `+10c solid`, `+118 effects`, `+11c gravity`, `+120 friction`, `+12c sequence`, `+13c framerate`, `+170 takedamage`, `+194 enemy`, `+19c owner`, `+1a4 spawnflags`, `+1a8 flags`, `+1e4 dmg`, `+20c edict`. Factory size `36ch`; engine allocation zeroing остаётся внешним контрактом.

TraceResult — 56 байт: int flags0/4/8/c, fraction+10, endPos+14, planeDist+20, normal+24, hitEdict+30, hitgroup+34. Native global trace helper10118b00 преобразует global float flags в int и возвращает output pointer в EAX. Для TraceAttack `Vector globals.v_forward` передаётся **по значению**12bytes; для tracing — указатели; constructors принимают origin/velocity **по значению**. Эти формы нельзя выводить только из неполных Ghidra declarations.

Engine API base10222f48 и copy144DWORD подтверждены100b4aa0; header parser учитывает whitespace перед закрывающей скобкой. Native export ordinals/targets, RTTI hierarchy и все таблицы/константы сохранены в evidence.json. Support **1011fd90** связывает runtime model-index globals10231f10/18/14 со sprites/zerogxplode.spr, WXplo1.spr и steam1.spr;10231f1c — bubbles. Их runtime числовые значения зависят от engine precache, чтение WORD в messages доказано отдельно.

## Wire граница

| Ветка | Destination/type | Payload после Begin |
|---|---|---|
| Explosion | MSG_PAS5 / SVC_TEMPENTITY23 | BYTE3, COORDxyz, SHORT sprite, BYTEscale, BYTE15, BYTE0 |
| Additional light | MSG_PAS5 / registered mydlight | COORDxyz, BYTE35, BYTE15, BYTE30 |
| Smoke | MSG_PVS4 / SVC_TEMPENTITY23 | BYTE5, COORDxyz, SHORTsprite, BYTEscale, BYTE12 |
| Underwater bubbles support | MSG_PAS5 / SVC_TEMPENTITY23 | BYTE113, COORDminsXYZ,maxsXYZ,height, SHORTsprite, BYTE100, COORD8 |

Message id global1022655c зарегистрирован как `mydlight` size−1, не фиксированный numeric ID. Никаких изменений ресурсов или новых эффектов аудит не создаёт. Byte truncation/coordinate packing относятся к [original engine writer](../graphics/engine-wire-contract.md); клиентское отображение, значения mydlight и фильтрация recipients остаются отдельными контрактами.

## Точные оставшиеся вопросы

Radius core и AddMultiDamage разобраны в server-radius-damage. Остаются все virtual60/64 target overrides; geometry/trace callbacks engine; caller/signature игнорируемых24bytes100b18e0; producer, назначающий BounceTouch/timed grenade; полный набор100b1bb0/100b1c80/100b22e0 weapon callers; precache scheduling до Spawn; derived BounceSound overrides и save/restore специфичного latch+368. Сохранённые helper C/ASM позволяют проверить call/argument границы, но не означают автоматически закрытые подсистемы. В частности factory failure не является нормальным NULL return, `DetonateUse` лишь планирует, Smoke лишь маркирует удаление.


## 0x100b0f50 — CGrenade_GetOrAllocatePrivateObject

Возвращает существующий private object edict либо создаёт объект CGrenade размером 0x36c.

Cdecl(entvars*), RET, результат EAX pointer. При NULL entvars вызывает engine CreateEntity(slot21), при успехе берёт edict+80h. Затем читает entvars+20c (edict); существующий edict.private+7c!=NULL возвращает напрямую, без RTTI/type проверки и без замены vptr/pev. Ghidra ошибочно сводит эту ветку к записи iRam00000004.

Если private отсутствует, вызывает PvAllocEntPrivateData(edict,36ch). Только при nonNULL записывает vptr101ce8e0 и this+4=entvars. Полный RTTI CGrenade и таблица сохранены. В этом теле нет C++ parent constructor, memset, Spawn, precache, callback initialization или timer setup; начальное содержимое прочих полей зависит от engine allocator.

Нет безопасного failure return: CreateEntity NULL оставляет entvars NULL перед чтением+20c; allocator NULL ведёт к MOV [EAX+4],ESI при EAX0. Export grenade100b2390 — ровно JMP100b0f50; actual export binding сохранён отдельно. Ни thunk, ни похожее тело C не означают второй конструктор.

## 0x100b0fc0 — CGrenade_BounceSound_NoOp

Пустой виртуальный обработчик звука отскока базовой гранаты.

Полное тело RET0 (3 байта), не читает this/stack, не вызывает sound API, не нормализует EAX. CGrenade vtable101ce8e0+244 указывает сюда; BounceTouch и SlideTouch вызывают этот slot только в негрунтовой ветке. Поэтому для именно этой таблицы такой вызов не проигрывает звук; возможные derived overrides этим утверждением не покрыты.

## 0x100b0fd0 — CGrenade_BounceTouch

Обрабатывает контакт гранаты: слабый удар владельцем, одиночный danger sound, торможение и скорость анимации.

Thiscall(this,other), RET4; NULL guards отсутствуют. Если other.pev.edict==grenade.pev.owner(+19c), сразу возвращается, не меняя damage timer, звук, velocity или framerate. Иначе при ordered now>this.m_flNextAttack(+308) и ordered speed>100 выполняет ударную ветку. Speed: float32 squares and (x²+y²)+z², double sqrt, float32 result. Equality/NaN в обоих guards не проходят.

Берёт owner edict, преобразует в owner?owner+80h:NULL. При nonNULL получает TraceResult56bytes из текущих global trace fields через10118b00; это НЕ новый trace. Helper возвращает EAX=out несмотря на void C, int flags получаются CVTTSS2SI из global floats. Затем ClearMultiDamage1011c070; other.virtual60(ownerEntvars,damage1.0,Vector globals.v_forward BY VALUE12bytes,trace*,damageBits80h); ApplyMultiDamage1011b8f0(grenade.pev,ownerEntvars). Позиция и trace относятся к globals, направление не берётся из velocity. Полные damage override callbacks остаются отдельными зависимостями.

Если timer/speed прошли, даже при NULL owner ставит this+308=float32(double(now)+1.0), после damage callbacks перечитывает now. Затем локально взвешивает только vz: float32(double(vz)*0.45); реальную velocity здесь ещё не меняет. Если DWORD this+368==0 и ordered norm(vx,vy,weightedVz)<=60, InsertSound(20h,origin,CVTTSD2SI(double(dmg)/0.4),float0.3), затем +368=1 независимо от успеха pool allocator. Это одноразовая попытка до внешнего reset; NaN weighted speed не проходит COMISS/JB.

При pev.flags&200h: все три velocity компонента *=float32(0.8), RandomLong(1,1) результат записывает в sequence+12c. Иначе вызывает virtual244; concrete target100b0fc0 пустой. После этого заново считает текущую speed и framerate=float32(double(float32(speed))/200.0). Ordered framerate>1 clamp1; ordered framerate<0.5 clamp0; значения ровно0.5 и1 сохраняются, NaN остаётся NaN. Больше действий с angular velocity, отражением velocity от normal, Think или lifetime нет.

## 0x100b1490 — CGrenade_DetonateTraceAndExplode

Трассирует вниз от origin+8 и немедленно передаёт результат в общий взрыв.

Thiscall без stack args, RET. На stack TraceResult56bytes; start=(origin.x+0,origin.y+0,origin.z+8), end=(start.x+0,start.y+0,start.z-40), все операции float32. Поэтому обычные координаты дают конечный z=origin.z-32, но ABI/rounding следует двум операциям, а не произвольному упрощению.

TraceLine wrapper1011a800(start,end,1,selfEdict,out) нормализует третий аргумент через equality1 и tail-jumps engine TraceLine. Затем при том же ECX=this вызывает100b1540(&trace,40h), не проверяя fraction/startsolid/hit до передачи. Нет проверки owner, damage timer, already-exploded flag; это прямое исполнение, не scheduling. Export Detonate подтверждён PE.

## 0x100b1520 — CGrenade_DetonateUseSchedule

Use любой формы назначает Detonate на ближайшее разрешённое планировщиком выполнение.

Thiscall Use(this,activator,caller,useType,value), RET10h; все четыре входных stack arguments игнорируются. Сначала this.Think+78=100b1490, затем virtual08(float0). Concrete08=1000e1f0 вызывает virtual04(delay0,force0), то есть общий native scheduler; не вызывает Detonate синхронно. Политику нулевого delay нужно брать из parent scheduler contract. Нет проверки USE_ON/OFF, cooldown, owner или уже назначенного callback; повторный Use перезаписывает Think и дедлайн.

## 0x100b1540 — CGrenade_ExplodeTraceDamageAndEffects

Выполняет взрыв по TraceResult, отправляет эффекты, вызывает radius damage и назначает Smoke.

Thiscall(this,TraceResult*,damageBits), RET8. Сначала pev.model+ b8=0, solid+10c=0,takedamage+170=0. Если trace.fraction+10 НЕ ordered-equal1 (включая NaN), напрямую меняет origin=endPos+normal*(dmg-24)*float32(0.6), с отдельными SUBSS/MULSS/MULSS/ADDSS. Это не SetOrigin/relink; при fraction==1 origin сохраняется. No NULL/reentrancy/one-shot guards.

PointContents(origin) результат сохраняется на весь вызов. MessageBegin(MSG_PAS5,SVC_TEMPENTITY23,origin,NULL): BYTE TE_EXPLOSION3, COORD x,y,z, SHORT signextended runtimeWORD10231f18 если contents==-3, иначе10231f10, BYTE CVTTSD2SI(double(float32(dmg-50))*0.6), BYTE15,BYTE0,End. Затем MessageBegin(5,global1022655c,origin,NULL): COORD x,y,z,BYTE35,BYTE15,BYTE30,End. Registration100e5fc0 называет второй message mydlight с size-1; клиентские значения этих трёх байтов здесь не выдуманы. Scale не clamp, точное усечение до wireBYTE принадлежит engine writer.

InsertSound(1,origin,1024,3.0f). Сохраняет owner edict и ОБНУЛЯЕТ pev.owner до damage call. Вызывает1008a9e0 с ECX=this и stack(grenade.pev,owner?owner+80h:NULL,dmg,classIgnore0,inputDamageBits). Wrapper передаёт current origin by value и radius=float32(double(dmg)*2.5) в1008a690. Это доказанный call contract; выбор целей, occlusion, falloff, защиты и конкретный TakeDamage в core этим пакетом не восстановлены.

RandomFloat(0,1) ST0 округляется float32. Decal selector=11+SETBE(0.5,result), то есть12 для ordered result>=0.5 И для unordered/NaN, иначе11;101180b0(trace,selector). Затем ЕЩЁ RandomFloat(0,1) с FSTP discard: этот вызов нельзя удалить при воспроизведении последовательности RNG. RandomLong(0,2) выбирает debris1/2/3.wav, иначе sound пропускается. Native100fc9f0(selfEdict,channel2,path,volume0.55f,atten0.8f,flags0,pitch100). Все эти шаги выполняются также underwater; sound helper и decal внутренняя логика имеют свои границы.

После этого pev.effects|=80h, Think+78=100b1fb0 Smoke, velocity копирует shared vector10222f34..3c, virtual08(float0.3). Это не гарантированное немедленное удаление и не доказательство runtime-zero shared vector. Не очищает Touch/Use, angular velocity или damage field. Если сохранённый contents!=-3, RandomLong(0,3) положительный результат задаёт число Create("spark_shower",currentOrigin,&trace.normal,NULL). Возврат Create не проверяется; angle argument фактически normal-vector. Smoke позднее заново проверяет contents.

## 0x100b18e0 — CGrenade_ExplodeDownwardIgnoringSixStackWords

Вариант взрыва трассирует от текущего origin на32 вниз, игнорируя24 байта входных stack arguments.

Native thiscall, RET18h, шесть входных DWORD не читаются. C incorrectly displays no arguments. Trace start — указатель на pev.origin; end=(x+0,y+0,z-32), TraceLine(start,end,1,selfEdict,out), затем100b1540(out,40h). Отличается от Detonate началом трассы: здесь нет +8. ECX=this сохраняется через ESI. Смысл/типы игнорируемых24bytes и полный набор callers не доказаны, поэтому не выдаётся за функцию без параметров либо точную исходную C++ overload-сигнатуру.

## 0x100b1950 — CGrenade_ExplodeTouch

Записывает edict соприкоснувшегося объекта и взрывается по трассе вдоль направления скорости.

Thiscall(this,other), RET4. Сразу pev.enemy+194=other.pev.edict без owner exclusion/NULL guards. Нормализует current velocity дважды: norm использует float32 squares/sum, double sqrt, float32. При ordered norm==0 направление(0,0,1); при NaN берёт reciprocal branch и передаёт NaNs далее. Точных fallback для Inf нет.

Start=origin-normalize(velocity)*32; end=start+normalize(velocity)*64. Вычисления float32, повторная нормализация реальна, endpoint не заменять безусловно origin+dir*32 при bit-exact реконструкции. TraceLine(start,end,1,selfEdict,out) и немедленно100b1540(out,40h). Не использует global trace collision result BounceTouch и не проверяет takedamage, owner, hit fraction или свой Think. Export ExplodeTouch подтверждён PE.

## 0x100b1b60 — CGrenade_KilledDetonateIgnoringArguments

Виртуальная обработка гибели гранаты немедленно вызывает Detonate.

Concrete CGrenade slot6c, полное тело CALL100b1490;RET8. ECX=this проходит неизменённым, два stack DWORD не читаются (контекст Killed: attacker/gibPolicy). Это НЕ thunk RET0 из C и не обычный monster death lifecycle. Нет отдельного clear damage/owner, score/animation/removal: дальнейшие действия полностью делегированы Detonate→Explode.

## 0x100b1bb0 — CGrenade_CreateContactProjectile

Создаёт контактную гранату с danger sound Think и ExplodeTouch.

Cdecl(ownerEntvars,Vector origin BY VALUE12bytes,Vector velocity BY VALUE12bytes), RET, EAX=newObject. Native stack offsets EBP+8 owner,+c..14 origin,+18..20 velocity; C показывает лишь первый argument. Factory100b0f50(NULL), без failure guard; virtual2c resolves Spawn100b20f0. gravity+11c=0.5f;10119fe0(object,&origin) relinks через SetOrigin; velocity копируется by value.

1011a8d0(out,&velocity) вызывает engine VecToAngles и возвращает EAX=out, затем copies12bytes в pev.angles. Не обратный знак pitch и не atan собственный. Owner=ownerEntvars.edict без NULL guard. Think+78=100b1360 DangerSoundThink, virtual08(0), затем RandomFloat(-100,-500) именно в таком порядке границ; ST0→float32 pev.avelocity.x(+5c). Engine поведение inverted bounds здесь не доказано.

Touch+7c=100b1950 ExplodeTouch; pev.dmg=100.0. Не устанавливает dmgtime, не назначает TumbleThink/BounceTouch, не записывает Use. DangerSoundThink самостоятельно каждые0.2s ставит sound, а столкновение выполняет взрыв; конечные engine physics/caller release conditions вне этого тела.

## 0x100b1c80 — CGrenade_CreateRemoteSatchel

Создаёт удалённо подрываемую grenade с SlideTouch и DetonateUse, минуя Spawn.

Cdecl(ownerEntvars,Vector origin BY VALUE12bytes,Vector velocity BY VALUE12bytes), RET EAX=object; factoryNULL, без failure guard. НЕ вызывает virtual Spawn. Явно ставит movetype10, classname string_t(literal"grenade"-stringbase), solid2; engine SetModel(edict,"models/grenade.mdl");SetSize через1011a030(entvars,zeroMins,zeroMaxs). Ни PrecacheModel, ни damageable flag здесь не ставятся.

pev.dmg=200;10119fe0 SetOrigin;velocity=input;angles=shared vector10222f34..3c;owner=ownerEntvars.edict. Think+78=101028d0 SUB_DoNothing (толькоRET0),Use+80=100b1520,Touch+7c=100b1f30. spawnflags+1a4 присваивает1, не OR;friction+120=0.9f. Нет собственного nextthink schedule, timer, gravity overwrite или explicit reset this+368. Нельзя подменить вызовом Spawn: тот меняет dmg и sound latch, которых здесь иной lifecycle.

## 0x100b1f30 — CGrenade_SlideTouch

Игнорирует владельца и тормозит гранату на земле; в воздухе вызывает пустой базовый BounceSound.

Thiscall(this,other),RET4. Сравнивает other.pev.edict с owner; при равенстве без действий. При flags&200h все velocity компонента умножает MULSS на float32(0.95), затем return. В противоположной ветке virtual244=100b0fc0 no-op для CGrenade. Нет damage, danger sound, animation speed, owner clear, collision reflection или scheduling. Null other/pev не проверяются.

## 0x100b1fb0 — CGrenade_SmokeThenMarkForRemoval

После взрыва посылает дым либо подводные пузыри и запускает общий lifecycle удаления.

Thiscall без stack args,RET. Заново PointContents(currentOrigin), без кеша результата Explode. При contents==-3 вызывает10117cb0(Vector origin−64 BY VALUE,Vector origin+64 BY VALUE,count100). Support helper вычисляет центр bounding box, ищет water level через1011aa30(center,center.z,center.z+1024), затем шлёт MSG_PAS5/SVC_TEMPENTITY23: BYTE113,COORD minsXYZ,maxsXYZ,height=(level−mins.z),SHORT runtimeWORD10231f1c,BYTE100,COORD8.0. Это один вызов bubble effect, не создание100 entity.

Иначе MSG_PVS4/SVC_TEMPENTITY23,origin,NULL: BYTE5,COORD x,y,z,SHORT signextendedWORD10231f14,BYTE CVTTSD2SI(double(float32(dmg−50))*0.8),BYTE12,End. Фактическая smoke scale не clamp; состав зависит от сохранённого dmg. Ни solid/lava special branch, ни повторный timer отсутствуют.

Обе ветки затем10119900(this): общий UpdateOnRemove и FL_KILLME40000000h плюс clear targetname, с возможными boss side effects внутриhelper. Это marking/lifecycle, а не непосредственный free edict в Smoke. Не обнуляет Think/Touch и не уменьшает opacity; engine removal delivery отдельно.

## 0x100b20f0 — CGrenade_Spawn

Настраивает базовую grenade модель, движение, нулевой bbox, damage100 и sound latch.

Thiscall без stack args,RET, vtable+2c. pev.movetype+108=10 (MOVETYPE_BOUNCE), classname=literal"grenade"−globals.stringbase,solid+10c=2 (SOLID_BBOX), engine SetModel(selfEdict,"models/grenade.mdl"). Через1011a030 SetSize передаёт два локальных нулевых Vector по указателям. Это нулевые mins/maxs, не размер модели, не trace hull.

После callbacks pev.dmg+1e4=100.0f,this+368=0. Не вызывает precache, не ставит takedamage, Think/Touch/Use, owner, origin, velocity, dmgtime, gravity/friction или nextthink. Именно CreateContact вызывает Spawn; remote satchel producer описан отдельно и обходит этот метод. Engine SetModel/SetSize возможные внутренние effects не являются отдельными writes этого тела.

## 0x100b22e0 — CGrenade_DispatchOwnedSatchels

Перебирает grenade владельца: вызывает Use для подрыва либо очищает owner.

Cdecl(ownerEntvars,mode),RET; только ownerEntvars==NULL безопасно завершает сразу. Иначе берёт ownerEntvars.edict, еслиNULL пытается PEntityOfEntOffset(0); далее получает private+7c и читает private.pev.edict БЕЗ NULL guard. Invalid edict/private может вызвать dereference; это не защищённая lookup цепь.

Перебирает все classname"grenade" через10118460 отNULL. Фильтр: low byte spawnflags&1 и grenade.pev.owner==resolvedOwner.edict. mode==0 вызывает grenade.virtuale8 с ECX=grenade и четырьмя stack(ownerObject,ownerObject,USE_TYPE1,float0); concrete bridge1000e2e0 передаёт их this.Use+80. При Use100b1520 это только назначение Detonate+delay0, не прямой взрыв в цикле.

Любой mode!=0 (не только1) очищает owner у совпавших гранат, без detonation/removal и без отмены callbacks. Iterator продолжает поиск от текущего entity после Use; не сохраняет next заранее и не проверяет invalidation callback. Не проверяет именно CGrenade vptr, тип модели, distance/visibility или lifetime. Полный набор weapon callers/режимов остаётся следующим bounded вопросом.
