# Параметры оружия: разброс, режим, скорость и прыжок

Статический разбор девяти оригинальных server entry. DLL не запускалась. Адреса и offsets ниже hexadecimal; размеры и величины decimal, если не оговорено иначе. Evidence содержит исходные C, полные bounded ASM, оригинальные bytes, dispatch table и непосредственные stores. Имена функций аналитические; это контракт поведения бинарника, а не восстановленные авторские исходники.

## Быстрый маршрут

`100d08f0 LoadTable → 100d0490 Cone → 100d1c10 Bind → 100d0830 Reset → 100cff60 Recovery`.
Выбор primary `100d0860`; переключение `100d1af0`; dispatch атаки `100d1ce0`; вспомогательный forward copy `100dfea0`.

Предыдущие связи: [world bootstrap](../server-world-bootstrap/contract.md), [resource precache](../server-resource-precache/contract.md), [movement/HP/stamina](../movement/health-stamina.md).

## Структуры и точные границы

Array base `10225a30`, stride `a4` (164 bytes), signed count `10225980`. Fallback `10225988` расположен отдельно, на `a8` ниже array base; считать его элементом -1 со stride `a4` нельзя. Вместимость array этим кодом не доказана; проверок вместимости нет. Name до первого numeric field занимает 32 bytes, но copy не ограничена этим размером.

| Offset | Обычная запись после начальных stores | Fallback после конца loader |
|---|---|---|
| 00..1f | name, unbounded copy | formatter с `default\n` |
| 20 | primary Cone(minAngle) после parse | Cone(6) |
| 2c | primary Cone(maxAngle-minAngle) | Cone(6) |
| 38 | equalize 0 | 0 |
| 3c | expand 0.25 | 0.25 |
| 40 | minpunch (-0.5,-0.5,0) | не записано |
| 4c | maxpunch (1.5,0.5,0) | не записано |
| 58 | secondary Cone(minAngle) после parse | Cone(2) |
| 64 | secondary Cone(maxAngle-minAngle) | Cone(4) |
| 70 | equalize 0 | 0 |
| 74 | expand 0.2 | 0.2 |
| 78 | minpunch (-0.3,-0.3,0) | не записано |
| 84 | maxpunch (1,0.3,0) | не записано |
| 90/94 | primary/secondary speed 0/0 | 0/0 |
| 98/9c | primary/secondary jump -1/-1 | не записано |
| a0 | returntime 1.5 | 1.5 |

Weapon: `160` owner; `1d8` deadline; `1f8` table pointer; `1fc` return multiplier; `200` anchor; `204` amplitude; `208` mode. Локальный accumulator100d0410, equalization, cone output и punch описаны в [spread-application](../server-spread-application/contract.md). Все writers и связь expand с конкретным выстрелом этим ещё не исчерпаны. Player `pev+214` maxspeed и physics key `jh` связаны с отдельным movement контрактом. Classname `pev+0` подтверждён native save descriptor.

## Табличные cone constants

Вектор содержит одинаковый DWORD в x/y/z. Значения не вычисляются через sin во время вызова.

| Angle | float32 bits |
|---|---|
| 0 | `0x00000000` |
| 1 | `0x3c0f0846` |
| 2 | `0x3c8ef34d` |
| 3 | `0x3cd67770` |
| 4 | `0x3d0ef34d` |
| 5 | `0x3d32aae3` |
| 6 | `0x3d566278` |
| 7 | `0x3d7a0f91` |
| 8 | `0x3d8ede55` |
| 9 | `0x3da0afa3` |
| 10 | `0x3db280f1` |
| 15 | `0x3e05a9a8` |
| 20 | `0x3e31d14e` |

11..14, 16..19, отрицательные и >20: diagnostic и zero vector. Angle 0: zero без diagnostic.

## Границы дальнейшего разбора

- Конкретные derived callbacks `1e8/1ec/1f0/1f4`: стрельба, recoil, ammo и cooldown. Dispatch сам не доказывает их реализацию.
- Все producers recovery anchor/amplitude; применение equalize/expand и vectors к выстрелу.
- Полные numeric conversion callees `1016b55e/1016f5ec`, formatter `1001f160`, locale/overflow/error behavior.
- Реальные файлы настроек и размер native array; отсутствие bounds check не устанавливает выделенную вместимость.
- Реальная скорость PM, источник global forward vector, порядок engine callbacks и ambient FP controls. Статический анализ не является runtime проверкой.

## Контракты entry

### 0x100d08f0 — WeaponSpread_LoadTable

Разбирает файл параметров оружия, primary/secondary записи и частично инициализирует fallback.

cdecl(filename), plain RET без оформленного статуса. Count10225980=0 до LoadFileForMe(filename,&length). NULL buffer или length==0: три Alert(type1), ранний return без FreeFile и без fallback initialization; ненулевой zero-length buffer остаётся неосвобождённым. Отрицательная length не отвергается, дальше length не ограничивает tokenizer100c6de0/shared token102231a8.

Каждый непустой внешний token копируется до NUL в10225a30+count*a4 без bound; поле до первого числового смещения+20 занимает32 bytes, но это не ограничение копирования. Количество записей не проверяется, вся таблица не обнуляется. После имени пишутся defaults (таблица контракта), затем требуется только token[0]=='{'. Ошибка внешнего '{' останавливает loader parse, не увеличив count частичной записи; writes остаются. Внутри блока exact case-sensitive primary/secondary требуют '{', returntime читаетfloat-like значение. Ключи minspread/maxspread/jump вызывают1016b55e (Ghidra atoi); expand/speed и по3 компоненты minpunch/maxpunch вызывают1016f5ec (Ghidra FID_conflict_atof). Реально byte token pointer, ST0 округляется FSTP доfloat; wchar_t из псевдокода не доказан. Полные locale/overflow semantics callees открыты. Equalize exact E_LINEAR/E_QUAD/E_CUBE/E_SQRT→0/1/2/3. Unknown variable/equalize/section: diagnostic и следующий token, без rollback/skip nested block. Нет EOF-progress guard внутри циклов до'}': Parse(NULL) даёт пустой token и при возвращающемся Alert возможен бесконечный diagnostic loop.

Четыре angle locals=0 на новую запись, но не на повторный section; повторные sections/keys заменяют заданные значения, сохраняя остальные. Ошибка '{' после section выходит из section-loop, но проходит warnings/conversion/count++ и продолжает внешнее чтение. Signed max<min только предупреждает: реальная format string содержит '%\n' без s. Записывает Cone(priMin), Cone(priMax-priMin), Cone(secMin), Cone(secMax-secMin), НЕ разность двух cone vectors. SUB32 может wrap. Count перечитывается после callbacks; не immutable snapshot. Затем count++ и следующий weapon token; пустой quoted token завершает внешний цикл.

Нормальный конец/пустой parse/ошибка внешнего '{': print count, FreeFile(originalBuffer),1001f160(fallback10225988,"default\n"), затем subset fallback stores. Primary min/delta обе Cone6; secondary Cone2/Cone4; equalize0, expand0.25/0.2, speed0/0, returntime1.5. Punch vectors и jump98/9c fallback этим телом НЕ записаны; прежнее состояние сохраняется. Обычные records имеют jump=-1/-1 и собственные punch defaults. Fallback отдельно от array, count его не включает. Нет dedup, transaction, pointer invalidation или parse-success flag.

### 0x100d0490 — WeaponSpread_GetConeVectorForAngle

Записывает табличный vector для целого угла и возвращает caller output pointer.

cdecl(outVector*,int angle), EAX=out, plain RET; Ghidra void неверно скрывает используемый caller результат. Unsigned angle<=20 выбирает21-entry jump table100d0624. Supported0,1..10,15,20; точные IEEE754 constants в evidence/таблице, не runtime sin.0 пишет три нуля без warning.11..14,16..19 и unsigned>20 (включая negative) печатают три Alert(type1), затем нули. Supported nonzero writes x,y,z; zero/failure z,y,x. Нет NULL guard, clamp, allocation или ST0 результата. Effects error callback остаются границей.

### 0x100d1c10 — WeaponSpread_BindClassnameRecord

Привязывает первую совпавшую classname запись или fallback, сохраняя старый pointer при miss.

Thiscall ECX=weapon,RET. Classname=gpGlobals.stringbase+98 + *(weapon.pev+0). Signed loop0..count-1 stridea4, собственное exact byte comparison без case folding; первый match пишетweapon+1f8. Не очищает+1f8 доscan: при miss/count<=0 старый ненулевой pointer остаётся без warning. Только конечный+1f8==NULL вызывает три Alert и устанавливаетfallback10225988. Нет guard count capacity, string termination, fallback readiness, lifetime/NULL receiver; record не копируется. Duplicate names: first wins. EAX не оформлен какstatus.

### 0x100d0830 — WeaponSpread_ResetRecovery

Сохраняет returntime и сбрасывает amplitude и time anchor.

Thiscall ECX=weapon,float on stack,RET4. MOVSS аргумент→+1fc, затем+204=0,+200=0. Не пишет table1f8/mode208 и не читает время. Нет positive/finite guard, clamp, normalizationNaN или надёжного EAX результата. Reader100cff60 использует1fc как multiplier duration,200 time anchor,204 amplitude; ненулевые producers отдельно.

### 0x100cff60 — WeaponSpread_GetRecoveryAmplitude

Вычисляет остаток восстановления разброса и возвращает ST0.

Thiscall,RET, ST0 result. ПриNULLtable1f8 вызывает Bind100d1c10 и Reset100d0830(table+a0), обнуляяamplitude204/anchor200. Затем float32 q=(global.time0-anchor200)/(returntime1fc*amplitude204), SUBSS/MULSS/DIVSS и float32 store q. COMISS(q,1)/JBE: только ordered q>1 даётFLDZ; q<=1 Иunordered идут к x87 (1-q)*savedAmplitude без обязательногоfloat32store результата. Нет lower clamp, zero-denominator guard илиfinite checks. Positive delta/zero amplitude обычно дают+Inf→0;0/0→NaN приmaskedFP. Ambient MXCSR/x87 controls здесь не устанавливаются. После вычисления поля не обновляются.

### 0x100d0860 — WeaponSpread_SelectPrimaryMovement

Выбирает primary и применяет speed/jump параметры игроку.

Thiscall,RET. Сначалаmode208=0. Bind+Reset(table+a0) только приNULLtable; существующая привязка не сбрасывает recovery. Table+90 speed заменяетсяglobal102268b0 только при ordered==0 (включая signed zero); UCOMISS/LAHF/TEST44 сохраняетNaN. Записываетplayer=weapon+160,player.pev+214. Из перечитанногоtable+98 берётsigned jump, заменяет только-1 на100, вызываетplayer100f39e0(jump): ранее доказанный writer2334 иPhysicsKeyValue("jh"). Server maxspeed/skill globals описаны вhealth-stamina; фактическая world speed зависит отPM. Нет owner/pev/table/range guards.

### 0x100d1af0 — WeaponSpread_ToggleMode

Переключает режим по virtual predicate и обновляет speed/jump выбранной ветви.

Thiscall,RET. LazyBind+Reset приNULLtable. Mode208==0→virtual1f4; nonzeroEAX→mode1 иtable+94/+9c. Mode==1→virtual1f0; nonzeroEAX→mode0 и+90/+98. Другиеmode/zero predicate дают выход без собственных последующихwrites; virtual может иметьeffects. Predicate проверяется как полныйEAX. После callback table/owner перечитываются. Speed ordered==0→global102268b4 secondary/102268b0 primary,NaN сохраняется. Player.pev+214=speed; jump-1→100;player100f39e0. Не ставит локальныйcooldown и не сбрасываетrecovery при каждомtoggle. Всеderived overrides этим не разобраны.

### 0x100d1ce0 — WeaponSpread_DispatchModeAttack

После time gate вызывает attack-slot режима и применяет speed/jump.

Thiscall,RET. LazyBind+Reset, затем100dfea0 сECX=owner иstack(outVector[12],bits3db27eb6); helper копируетglobal+28,RET8 иdelta нечитает. Stackvector далее неиспользуется.1011ab20→global.time ST0,caller округляетfloat32. COMISS(deadline+1d8,time)/JA пропускает только ordered deadline>time; unorderedNaN проходит (Ghidra<= недостаточно). Mode0→virtual1e8,mode1→virtual1ec,иныебезattack. Возвратattack не проверяется. После callback применяет поля ветви, выбранной ДО callback: primary+90/+98 илиsecondary+94/+9c, даже если callback сменилmode. Zero-speedfallback иjump-1→100 каксоседи. Не пишетdeadline/modeлокально; не гарантирует выстрел,патрон илиурон.

### 0x100dfea0 — Weapon_GetGlobalForwardVector

Копирует существующий global vector в caller output, игнорируя receiver и delta.

Native RET8 несмотря на один аргумент вGhidra C. Stack+4=outVector*,stack+8 второй аргумент не читается; ECXreceiver не используется. ЧитаетgpGlobals10223188 иDWORD+28/+2c/+30,пишетx/y/z,EAX=out. Этоcopy глобального направления (SDKv_forward),неtrace/autoaim/normalize. Нетguards/allocation; полныйproducer/MakeVectors order остаётсяотдельным.
