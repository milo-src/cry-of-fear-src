# Fogfield: native lifecycle and mist sprite generation

Static original server hl.dll SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Eleven new primary entries; supporting functions are not counted again. No target execution or game/resource modifications.
Full saved C was compared with native body ranges; PE exports, RTTI/vtable prefix, literals, branch tables and ENTVARS descriptors are in evidence.json.

Route: `func_fogfield -> factory -> concrete Spawn -> Enable -> SpawnThink -> TrySpawn -> proximity -> sprite/fade`.
The visibility gate is a classname sphere search, not a renderer result. The inherited ShouldToggle state and the fog activity field are distinct.

## 0x1000fb60 CFuncFogField_Factory

Получает существующий private object либо выделяет180h байт и связывает fogfield с entvars.

cdecl(entvars*), plain RET, EAX возвращает private pointer. При NULL входе вызывает engine CreateEntity10222f9c и при ненулевом edict берёт edict+80h. Далее читает pev+20ch=edict; при ненулевых edict и edict+7ch возвращает существующий объект без смены vtable или pev. Ghidra iRam00000004 на этой ветви — артефакт: native1000fb90 перескакивает прямо к epilogue.

Иначе вызывает PvAllocEntPrivateData10223044(edict,180h); при успехе пишет vtable101a4434 и object+4=pev. RTTI этой таблицы подтверждает CFuncFogField; native slots2c/30/34=Spawn11340/Precache10ad0/KeyValue10500. Общего zeroing, обычного base constructor или Spawn здесь нет; инициализация остальных полей зависит от engine allocation.

NULL результат CreateEntity не проверяется повторно перед чтением [esi+20c]. При NULL allocation native1000fbb4 обнуляет EAX и затем пишет [EAX+4]=pev. Это настоящий незащищённый путь, а не безопасный NULL return. Не утверждается, что такие ошибки происходят в штатной игре.

## 0x100124f0 func_fogfield_ExportTailFactory

Экспорт func_fogfield передаёт управление фабрике fogfield.

PE export func_fogfield указывает100124f0; реальное тело ровно5 bytes E9 6b d6 ff ff, tail JMP1000fb60. Наследует cdecl entvars и возвращаемый EAX фабрики без дополнительного стека/инициализации. Saved C разворачивает фабрику целиком: это не второе исполняемое тело и не ещё одна allocation.

## 0x10010ad0 CFuncFogField_PrecacheFiveMistSprites

Последовательно запрашивает предзагрузку пяти mist-спрайтов.

Конкретный virtual30 в101a4434. Native пять CALL10116990 с literal sprites/mist1.spr .. sprites/mist5.spr; ADD ESP,14h и plain RET. Индексы/результаты не сохраняются и успех каждого запроса не проверяется.

Helper10116990 для этих непустых не-* имён вызывает LoadFileForMe(path,NULL); только при ненулевом buffer делает FreeFile и PrecacheModel(path). Поэтому пять вызовов не доказывают пять успешно загруженных моделей; missing-file путь возвращает0. Full filesystem/model-loader semantics и фактическое наличие ресурсов не измерялись.

## 0x10010500 CFuncFogField_KeyValueAxis

Читает ключ axis в pev.iuser1 либо передаёт ключ базовому toggle-парсеру.

ECX=this, один KeyValueData*, RET4. Побайтовое case-sensitive сравнение kv+4 с literal101a4554="axis". При совпадении вызывает1016b55e (saved CRT atoi) на kv+8, пишет EAX в pev+248h=iuser1 и kv+ch=1. Нет диапазона, float parsing или проверки результата; полный CRT conversion отдельно.

При несовпадении вызывает10102480(this,kv); свой handled flag не устанавливает. Тело SpawnThink и sprite producer ниже axis не читают: это локальное наблюдение, не доказательство отсутствия всех consumers iuser1. Inherited master/movement keys и Save/Restore остаются за границей этого пакета.

## 0x10011340 CFuncFogField_Spawn

Настраивает невидимую brush-сущность и включает либо выключает генерацию тумана.

ECX=this, no args/plain RET; concrete virtual2c. Сначала virtual30 Precache, затем копирует12 bytes global10222f34..3f в pev.angles+50h (не считать immutable zero по одному имени). movetype+108h=0, solid+10ch=0; SetModel(pev.pContainingEntity, globals.stringbase+pev.model), затем10119fe0(this,&pev.origin). Фиксация origin вызывает engine SetOrigin; она не меняет координату на центр bounds.

Далее pev.effects+118h |=80h (EF_NODRAW). Spawnflags byte+1a4h &2 выбирает10012240 Enable, иначе100121e0 Disable; после любого callback object+80h=100101a0 FogUse. Ни targetname, ни axis здесь не определяют начальный режим. Re-read pev между callbacks сохранён.

Concrete vtable+8=1000e1f0 передаёт delay,0 в vtable+4=10017110. Для обычного неприкреплённого movetype0 scheduler пишет globaltime+delay в pev.nextthink и object58/5c; parent/child/flag20 используют AssistList path из существующего server-queue-b/contract-parent.md. Disable(delay0) не равен прямой записи nextthink=0.

## 0x100121e0 CFuncFogField_Disable

Сбрасывает активность и Think callback, затем планирует delay0.

ECX=this, no args/plain RET. Порядок: pev+24ch=iuser2=0; object+78h=0; virtual8(0.0). Callback очищается ДО scheduler, нет удаления уже созданных mist-спрайтов, очистки activator handle или изменения inherited toggle-state object100. Virtual call не tail JMP.

## 0x10012240 CFuncFogField_Enable

Ставит активность и планирует SpawnThink с интервалом0.1.

ECX=this, no args/plain RET. Сначала pev.iuser2=1, затем virtual8(float32 0x3dcccccd), и только после его возврата object+78h=10011a30. Не создаёт sprite немедленно, не проверяет уже включённое состояние и не меняет inherited object100. Reentrant scheduler видит прежний Think callback до последней записи.

## 0x100101a0 CFuncFogField_FogUse

После inherited ShouldToggle сохраняет activator и переключает iuser2.

Экспортированный thiscall(activator,caller,useType,value), RET10h. Вызывает10018350(this,useType), при EAX0 немедленно выходит. Иначе10017740(this+e4h,activator) записывает serial-checked EHANDLE, затем читает текущее pev.iuser2: nonzero→Disable121e0, zero→Enable12240. caller/value не читаются; это toggle после gate, а не установка iuser2 непосредственно из useType.

Важное различие: ShouldToggle вызывает inherited virtual5c=101022c0, читающий object100, а НЕ pev.iuser2. Object100=0→state2,2→state1,3→state3,прочие→state0. ShouldToggle всегда разрешает types2/3; для states0/3 запрещает type0, для states1/2 запрещает type1, остальные type значения разрешает. Enable/Disable этого пакета object100 не синхронизируют; нельзя подменять gate проверкой iuser2 или предполагать все map inputs эквивалентными.

NULL activator очищает обе части EHANDLE. Для nonnull activator с NULL edict helper очищает pointer, оставляя прежний serial; это контракт общего setter, не отдельная проверка игрока. Master/health/player-distance gate внутри FogUse отсутствуют; inherited state producers и runtime map activation отдельно.

## 0x10011a30 CFuncFogField_SpawnThink

Вычисляет число попыток создания спрайтов по размеру brush и повторно планирует Think.

ECX=this, no args/plain RET. Загружает size.y=pev+f8h и size.x=pev+f4h; COMISS y,x; JA оставляет y, иначе выбирает x. Делит выбранный float32 на170.0 (101a471c), CVTTSS2SI→signed count. Только count>0 вызывает1000ff30 count раз; число фиксируется до первого вызова, не перечитывается после callbacks. Ширина меньше170 даёт0 попыток, нет минимального одного sprite или верхнего budget cap.

При masked FP exceptions unordered COMISS выбирает x: NaN y с конечным x может дать обычный count; NaN x остаётся NaN. Invalid/out-of-int-range CVTTSS2SI даёт INT_MIN и пропуск loop. Нет finite guard или абсолютного значения размеров. FP exception mode runtime не измерялся.

Независимо от нулевого count/неуспешных попыток после loop virtual8(0.1f), затем object78=SpawnThink. Здесь нет повторного gate iuser2 или проверки удалённости игроков; proximity проверяется внутри КАЖДОЙ попытки. Callback, выключивший поле во время исполнения, может быть перезаписан финальным rearm; управление engine/lifetime отдельно.

## 0x10010430 FogField_HasPlayerNearCandidate

Проверяет наличие classname player в engine sphere вокруг выбранной точки.

Native получает Vector BY VALUE на stack EBP+8,+c,+10 и RET0ch; ECX не используется как this. Ghidra void params скрывают12-byte argument, caller1000ffe5 это подтверждает. CVarGetFloat("sv_fogradius") ST0→float32→CVTTSS2SI signed int→float32; радиус дробной части лишается перед поиском. Нет положительного clamp, NaN/overflow validation; masked invalid→INT_MIN затем float.

101186b0(NULL,&stackVector,radius), затем цикл по возвращаемым private objects. Сравнивает case-sensitive полную classname globals.stringbase+pev.classname с literal"player"; совпадение→EAX1, исчерпание→0. На следующей итерации передаёт текущий object как cursor; радиус из исходного integer, cvar повторно не читает в рамках одной проверки. Нет health, spectator, LOS, PVS, team или IsPlayer virtual gate.

Helper101186b0 переводит cursor в edict, вызывает engine FindEntityInSphere, требует ненулевого edict и ненулевого EntOffsetOfPEntity, затем возвращает edict+7c. NULL private/invalid-edict ответ завершает внешний поиск, а не автоматически пропускается к следующей сущности. Точный engine spatial критерий и порядок не выведены из wrapper.

## 0x1000ff30 CFuncFogField_TrySpawnMistSprite

Выбирает точку в XY brush, проверяет игрока рядом и создаёт движущийся mist-спрайт.

ECX=this,no args/plain RET. Снимок origin.xyz до callbacks; halfX=trunc(float32(size.x*0.5)),halfY аналогично. RandomLong(-halfX,halfX) и RandomLong(-halfY,halfY); signed integer результаты преобразуются в float32 и прибавляются к snapshot originXY, Z неизменен. Нет вращения по angles/axis, случайного Z, trace или geometry clipping. Отрицательные/invalid размеры передаются RNG без сортировки границ; INT_MIN neg сохраняет тот же bit pattern.

Кандидат передаётся10010430 by-value. При0 выход до выбора sprite/model allocation. При1 RandomLong(0,4) через jump table1001013c выбирает mist1..5. Адрес literal преобразуется в string_t вычитанием globals.stringbase, затем перед вызовом1009f400 снова складывается. Для возвращённого RNG значения вне unsigned0..4 native fallback использует BITS snapshot origin.z как string offset; безопасного default model нет. Штатный RNG contract предполагает диапазон, но не доказывается этим caller.

1009f400(modelName,&candidate,1) возвращает sprite; caller NULL не проверяет. Пишет rendermode5 (kRenderTransAdd), rendercolor RGB255, renderamt32, renderfx0; velocity.x/y=RandomFloat(3,7),velocity.z=RandomFloat(2,5), ST0 сохраняется float32; scale1. Это всегда положительные интервалы локальных аргументов, не симметричный ветер.

Затем sprite.virtual8(1.0), затем1008ac10 SUB_StartFadeInAndOut(sprite). Последний НЕМЕДЛЕННО заменяет renderamt32 на2, solid=0, делает virtual8(0.1) и устанавливает Think1008aaa0; начальные32 и1second не являются окончательным состоянием. Полный последующий fade/cleanup, engine movement, resource lifetime и реальная видимость отдельно. Каждая попытка заново вызывает proximity/cvar; нет общего per-field cache.

## Remaining boundaries

Inherited Save/Restore now has full local contracts in analysis/server-toggle-persistence/contract.md; fade progression in analysis/server-entity-fade/contract.md. Still open: complete toggle-state producers, fog fields outside inherited tables, engine RNG/spatial enumeration/allocation, actual map usage, indirect callers and external scheduling. No full-game completion or runtime parity claim.
