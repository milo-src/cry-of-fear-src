# Связи и сохранение состояния базового spread-оружия

Статический разбор оригинального server DLL, без запуска игры. Девять новых сохранённых C entry: шесть wrappers persistence и три реальных RNG helper. Имена функций аналитические; строки блоков и descriptor names взяты из оригинального PE. Адреса/offsets/masks записаны в hex, counts — decimal. Доказательства, команды и hashes находятся в `evidence.json`; `capture.py` и `verify.py` не исполняют DLL.

## Доказанная цепочка, не обещание достижимости

Restore: `Toggle100d19f0 → Spread100d19b0 → PlayerWeapon1011e7a0 → PlayerItem1011e760 → Animating1000ea60`. Save: `Toggle100d1a90 → Spread100d1a30 → PlayerWeapon1011ede0 → PlayerItem1011ed80 → Animating1000eaa0`. Parent first, собственный block только после ненулевого результата. Полный формат и ограничения generic serializer описаны в [serializer](../server-serializer/contract.md). Данный пакет не переопределяет его result как надёжный transaction status.

Native descriptors связывают поля из [pass10](../server-spread-application/contract.md) с исходными именами: `1fc=m_flSpreadTime`, `200=m_flLastShotTime`, `204=m_flLastSpreadPower`, `208=m_iWeaponMode`. `1f8` не входит в эти descriptors и не получает fixup в wrappers. Возможные отдельные constructors/rebinding остаются самостоятельным вопросом. В parent27 также доказаны `1cc=m_flNextPrimaryAttack`, `1d0=m_flNextSecondaryAttack`, `1d8=m_flTimeWeaponIdle`: это уточняет прежние аналитические названия, не меняя уже разобранный порядок операций.

Raw prefix vtable101a7804 получает factory10018440 (CBasePlayerWeapon в Ghidra); prefix101a990c — factory10020010 (CAction), на который JMP-thunk100205f0. Оба содержат Save1011ede0 в slot38 и Restore1011e7a0 в slot3c. Capture подтверждает реальные vptr writes и байты prefix, не весь extent таблиц. Другие exact pointer hits не автоматически превращены в имена классов.

## Caller scan и отсутствующая C-функция

Полный статический `objdump -d` проверен на прямые E8/E9 к entry данного пакета, десяти entry pass10 и100d1930. Каждая сохранённая edge сверена с исходными5байтами PE и rel32 target. Это не поиск непрямых calls, вычисленных адресов, вызовов внутренних labels или runtime rewrites. Отсутствие edge не означает dead code.

К pass10 найдено: три вызова100cff10 из cone builders, три вызова100d0390 из тех же builders и **100d1938→100d0410**. Других прямых E8/E9 к десяти entry в данном listing не найдено. Exact LE32 scan raw PE также не нашёл адресов этих десяти entry, четырёх Spread/Toggle persistence wrappers и100d1930. PlayerWeapon Save/Restore, напротив, имеют по17 occurrences и по21 direct callsite; эти counts относятся только к зафиксированной DLL и методу поиска.

**ASM-only100d1930..100d193f** находится после14INT3(100d1922..192f), непосредственно перед100d1940. `PUSH ECX; MOV [ESP],3f333333; CALL100d0410; FSTP ST0; RET`: ECX=this сохраняется до helper, единственный float argument равен float32 0.7. Callee RET4 снимает argument, caller отбрасывает прежний residual изST0. Это конкретная фиксированная добавка, а не чтение table.expand3c/74. При crouched flag вызываемый100d0410 дополнительно умножит её на double0.7 с последующим float rounding. Сохранённого C entry100d1930 нет, карточка REVIEW не создана; прямой caller и точный LE32 pointer к самому100d1930 в ограниченных scans не найдены.

Следовательно, реальная связка параметров expand и конкретного выстрела пока не доказана. Новые serializers показывают структуру семейства, но не заменяют отсутствующий derived vtable/constructor/shot route для Spread/Toggle. Ни настройка игровых ресурсов, ни новый порт в этот пакет не входят.

## Точные таблицы persistence

Все записи имеют stride16. Count и flags взяты из signed16/WORD полей; ниже они все1/0. Операции native type IDs0=float,1=string,3=class pointer,7=vector,10=integer,12=rawDWORD,15=time,17=sound name разобраны в generic serializer; это описания операций, не обещание исходных enum symbols. Type12 у полей m_b занимает4bytes, включая перекрывающиеся ranges+1a4/+1a5. Дубли native descriptors не исправляются по SDK.

### CBaseSpreadWeapon — 0x10217abc, 3 records

| Offset | Native name | Type | Count | Flags |
|---|---|---:|---:|---:|
| 0x1fc | m_flSpreadTime | 0 | 1 | 0 |
| 0x200 | m_flLastShotTime | 15 | 1 | 0 |
| 0x204 | m_flLastSpreadPower | 0 | 1 | 0 |

### CBaseToggleWeapon — 0x10217aec, 1 records

| Offset | Native name | Type | Count | Flags |
|---|---|---:|---:|---:|
| 0x208 | m_iWeaponMode | 10 | 1 | 0 |

### CBasePlayerWeapon — 0x1021b328, 27 records

| Offset | Native name | Type | Count | Flags |
|---|---|---:|---:|---:|
| 0x1cc | m_flNextPrimaryAttack | 15 | 1 | 0 |
| 0x1d0 | m_flNextSecondaryAttack | 15 | 1 | 0 |
| 0x1d4 | m_flNextTertiaryAttack | 15 | 1 | 0 |
| 0x1d8 | m_flTimeWeaponIdle | 15 | 1 | 0 |
| 0x1c0 | m_flAccuracyTime | 15 | 1 | 0 |
| 0x1dc | m_iPrimaryAmmoType | 10 | 1 | 0 |
| 0x1e0 | m_iSecondaryAmmoType | 10 | 1 | 0 |
| 0x1e4 | m_iClip | 10 | 1 | 0 |
| 0x1f4 | m_iDefaultAmmo | 10 | 1 | 0 |
| 0x1bc | m_bCheckedIfShouldBeDeleted | 12 | 1 | 0 |
| 0x16c | custom_v_model | 1 | 1 | 0 |
| 0x170 | custom_w_model | 1 | 1 | 0 |
| 0x174 | custom_script | 1 | 1 | 0 |
| 0x1a8 | shoot_loop_sound | 17 | 1 | 0 |
| 0x1ac | shoot_loop_sound_end | 17 | 1 | 0 |
| 0x1a5 | m_bShotLooping | 12 | 1 | 0 |
| 0x1b0 | m_fEmptyClickTime | 15 | 1 | 0 |
| 0x178 | m_bIronSights | 12 | 1 | 0 |
| 0x17c | m_fIronSightsForward | 0 | 1 | 0 |
| 0x180 | m_fIronSightsRight | 0 | 1 | 0 |
| 0x184 | m_fIronSightsUp | 0 | 1 | 0 |
| 0x188 | m_iIronSightsZoom | 10 | 1 | 0 |
| 0x198 | m_flKickPerShot | 0 | 1 | 0 |
| 0x19c | m_flCurrentKick | 0 | 1 | 0 |
| 0x1a0 | m_flNextKickReductionTime | 15 | 1 | 0 |
| 0x18c | m_AccuracyVector | 7 | 1 | 0 |
| 0x1a4 | m_bWaitingToReloadIronsights | 12 | 1 | 0 |

### CBasePlayerItem_support — 0x1021b188, 26 records

| Offset | Native name | Type | Count | Flags |
|---|---|---:|---:|---:|
| 0x160 | m_pPlayer | 3 | 1 | 0 |
| 0x164 | m_pNext | 3 | 1 | 0 |
| 0x168 | m_iId | 10 | 1 | 0 |
| 0x108 | m_iCurrCaps | 10 | 1 | 0 |
| 0x10c | strwmodel | 1 | 1 | 0 |
| 0x110 | script | 1 | 1 | 0 |
| 0x128 | m_iSprintState | 10 | 1 | 0 |
| 0x12c | m_iNextSprintAnim | 15 | 1 | 0 |
| 0x13c | m_bCanSuicide | 12 | 1 | 0 |
| 0x140 | m_iSuicideState | 10 | 1 | 0 |
| 0x144 | m_iSuicideButtonsNeeded | 10 | 1 | 0 |
| 0x148 | m_iSuicideButtonsPressed | 10 | 1 | 0 |
| 0x14c | m_iRageNeeded | 10 | 1 | 0 |
| 0x150 | m_iRageLevel | 10 | 1 | 0 |
| 0x154 | m_fNextRageDecrease | 15 | 1 | 0 |
| 0x158 | m_iSprintIdleAnim1 | 10 | 1 | 0 |
| 0x158 | m_iSprintIdleAnim1 | 15 | 1 | 0 |
| 0x138 | m_fReloadSpeed | 0 | 1 | 0 |
| 0x104 | m_bRifleReload | 12 | 1 | 0 |
| 0x105 | m_bWantToEndReload | 12 | 1 | 0 |
| 0x106 | m_bRaised | 12 | 1 | 0 |
| 0x130 | m_iReloadState | 10 | 1 | 0 |
| 0x134 | m_iNextReloadAnim | 15 | 1 | 0 |
| 0x114 | slotnumber | 10 | 1 | 0 |
| 0x118 | m_Accuracy | 0 | 1 | 0 |
| 0x107 | m_bCanDualWield | 12 | 1 | 0 |

`CBasePlayerItem_support` содержит две записи с одинаковым native name `m_iSprintIdleAnim1` и offset158, но types10 и15. Это сохранено буквально, не исправлено как предполагаемая опечатка. Вопрос duplicate-name matching и смысла этого descriptor относится к отдельному анализу Item lifecycle; новый REVIEW здесь его не заявляет.

## Локальные контракты

### 0x100d19b0 — SpreadWeapon_RestoreStateBlock

После PlayerWeapon Restore читает три поля состояния восстановления разброса.

Thiscall ECX=weapon, один stack DWORD context, RET4. Сохраняет this в ESI, передаёт тот же context родителю. EAX==0 немедленно возвращается без чтения собственного блока. При успехе ECX=context, а object=this передаётся отдельным stack argument в ReadFields10117010. Возвращает полный EAX последнего вызова, несмотря на void в Ghidra. Собственных NULL/bounds guards, rollback, reset или post-restore fixup нет.

Родитель1011e7a0; собственный block CBaseSpreadWeapon, table10217abc, count3. Native descriptors: +1fc m_flSpreadTime type0, +200 m_flLastShotTime type15, +204 m_flLastSpreadPower type0, каждый count1/flags0. Pointer параметров +1f8 в этом блоке отсутствует; после чтения нет Bind100d1c10 или Reset100d0830. Таким образом восстановление этих трёх полей само по себе не доказывает восстановленный table pointer.

ReadFields возвращает0 при несовпадении block token, иначе1; это не гарантия целостности payload. При совпадении сначала обнуляются перечисленные поля (flags всех этих descriptors равны0), затем применяются найденные поля. Пропущенные поля остаются0; частичные изменения родителей не откатываются при последующей ошибке. Type15 обрабатывается как relative time с прибавлением save-data time, type0 — float, type10 — integer; точный wire и ошибки разбираются в serializer contract.

### 0x100d19f0 — ToggleWeapon_RestoreModeBlock

После SpreadWeapon Restore читает integer режима оружия.

Thiscall ECX=weapon, один stack DWORD context, RET4. Сохраняет this в ESI, передаёт тот же context родителю. EAX==0 немедленно возвращается без чтения собственного блока. При успехе ECX=context, а object=this передаётся отдельным stack argument в ReadFields10117010. Возвращает полный EAX последнего вызова, несмотря на void в Ghidra. Собственных NULL/bounds guards, rollback, reset или post-restore fixup нет.

Родитель100d19b0; block CBaseToggleWeapon, table10217aec, count1: +208 m_iWeaponMode, type10/count1/flags0. Не ограничивает значение0/1 и не вызывает callbacks переключения режима, скорости или jump-height. При совпавшем пустом блоке reader предварительно обнулит mode; при block mismatch до этого шага не дойдёт. Родительские изменения остаются даже при own-result0.

ReadFields возвращает0 при несовпадении block token, иначе1; это не гарантия целостности payload. При совпадении сначала обнуляются перечисленные поля (flags всех этих descriptors равны0), затем применяются найденные поля. Пропущенные поля остаются0; частичные изменения родителей не откатываются при последующей ошибке. Type15 обрабатывается как relative time с прибавлением save-data time, type0 — float, type10 — integer; точный wire и ошибки разбираются в serializer contract.

### 0x100d1a30 — SpreadWeapon_SaveStateBlock

После PlayerWeapon Save записывает duration, last-shot time и amplitude разброса.

Thiscall ECX=weapon, stack context, RET4, полный EAX родителя при его нуле либо WriteFields1011adc0 при продолжении. После успешного родителя заново читает weapon.pev+1d0; ненулевой string offset используется для diagnostic owner label, иначе берётся pev+0. Pointer строится как global10223188->stringbase98 + offset. Это не имя блока: имя блока — отдельный следующий argument. ECX=context; далее stack ownerLabel,blockName,this,descriptors,count. NULL/overflow/string bounds не проверяются; локальных изменений this и cleanup нет.

Родитель1011ede0; block CBaseSpreadWeapon, table10217abc, count3: m_flSpreadTime +1fc type0, m_flLastShotTime +200 type15, m_flLastSpreadPower +204 type0. Это точные native имена, уточняющие аналитические названия pass10. Параметры table+1f8, RNG global и Expand values не входят в собственный список; wrapper не вычисляет текущий residual и не меняет anchor/amplitude перед записью.

WriteFields на обычном возврате даёт EAX1 даже после своих void low-level ошибок, поэтому проверки wrapper не обеспечивают транзакционный успех сохранения. Type15 сохраняется относительно save-data time, type0 — как float, type10 — integer. All-zero поля могут отсутствовать в payload; wrapper не делает semantic normalization, проверку finite или clamp. Ошибка/изменение уже обработанного родительского блока не откатывается.

### 0x100d1a90 — ToggleWeapon_SaveModeBlock

После SpreadWeapon Save записывает текущее значение weapon mode.

Thiscall ECX=weapon, stack context, RET4, полный EAX родителя при его нуле либо WriteFields1011adc0 при продолжении. После успешного родителя заново читает weapon.pev+1d0; ненулевой string offset используется для diagnostic owner label, иначе берётся pev+0. Pointer строится как global10223188->stringbase98 + offset. Это не имя блока: имя блока — отдельный следующий argument. ECX=context; далее stack ownerLabel,blockName,this,descriptors,count. NULL/overflow/string bounds не проверяются; локальных изменений this и cleanup нет.

Родитель100d1a30; block CBaseToggleWeapon, table10217aec, count1, integer m_iWeaponMode +208. Сохраняет текущее значение без фильтра0/1, без вызова action callbacks и без копирования атакующих таймеров. Owner diagnostic label вычисляется повторно после родителя, а не передаётся из его frame.

WriteFields на обычном возврате даёт EAX1 даже после своих void low-level ошибок, поэтому проверки wrapper не обеспечивают транзакционный успех сохранения. Type15 сохраняется относительно save-data time, type0 — как float, type10 — integer. All-zero поля могут отсутствовать в payload; wrapper не делает semantic normalization, проверку finite или clamp. Ошибка/изменение уже обработанного родительского блока не откатывается.

### 0x1011e7a0 — PlayerWeapon_RestoreFields

После PlayerItem Restore восстанавливает27 descriptors общего оружия.

Thiscall ECX=weapon, один stack DWORD context, RET4. Сохраняет this в ESI, передаёт тот же context родителю. EAX==0 немедленно возвращается без чтения собственного блока. При успехе ECX=context, а object=this передаётся отдельным stack argument в ReadFields10117010. Возвращает полный EAX последнего вызова, несмотря на void в Ghidra. Собственных NULL/bounds guards, rollback, reset или post-restore fixup нет.

Родитель1011e760 сначала обрабатывает CBasePlayerItem после1000ea60; затем данный wrapper читает CBasePlayerWeapon, table1021b328/count27. Table доказывает next-primary +1cc, next-secondary +1d0, next-tertiary +1d4, idle +1d8 (type15), ammo types +1dc/+1e0, clip+1e4/defaultammo+1f4, accuracy-vector+18c, ironsight state/offsets/zoom, kick state и loop-sound state. Полная таблица сохранена в evidence/contract. Wrapper не отправляет HUD, не обновляет viewmodel и не запускает/останавливает звук; generic decoder может precache type17 sounds по своему режиму.

Raw prefixes vtable101a7804 и101a990c содержат этот entry в slot+3c; factory10018440 и10020010 записывают соответствующий vptr. Это положительное доказательство table linkage для PlayerWeapon/CAction, но не для Spread/Toggle overrides. Полный extent этих vtables и полный runtime callgraph не заявлены.

ReadFields возвращает0 при несовпадении block token, иначе1; это не гарантия целостности payload. При совпадении сначала обнуляются перечисленные поля (flags всех этих descriptors равны0), затем применяются найденные поля. Пропущенные поля остаются0; частичные изменения родителей не откатываются при последующей ошибке. Type15 обрабатывается как relative time с прибавлением save-data time, type0 — float, type10 — integer; точный wire и ошибки разбираются в serializer contract.

### 0x1011ede0 — PlayerWeapon_SaveFields

После PlayerItem Save записывает27 descriptors общего оружия.

Thiscall ECX=weapon, stack context, RET4, полный EAX родителя при его нуле либо WriteFields1011adc0 при продолжении. После успешного родителя заново читает weapon.pev+1d0; ненулевой string offset используется для diagnostic owner label, иначе берётся pev+0. Pointer строится как global10223188->stringbase98 + offset. Это не имя блока: имя блока — отдельный следующий argument. ECX=context; далее stack ownerLabel,blockName,this,descriptors,count. NULL/overflow/string bounds не проверяются; локальных изменений this и cleanup нет.

Родитель1011ed80 обрабатывает CBasePlayerItem после1000eaa0. Собственный block CBasePlayerWeapon, table1021b328/count27; сохранены три attack timers и idle, ammo/clip, custom model/script string handles, shoot-loop sound handles/latch, ironsights, kick и accuracy-vector. Поля с именем m_b имеют native type12/count1: generic size4, writer читает4bytes и decoder пишет rawDWORD. Нельзя сокращать эту операцию до byte по имени поля; в частности ranges от +1a4 и +1a5 перекрываются. Table не включает table pointer Spread+1f8 и не устанавливает его lifetime.

Save slot+38 в raw vtable101a7804 и101a990c указывает на1011ede0; соседний Restore+3c на1011e7a0. Native factory vptr writes подтверждены отдельно. Скан обнаружил17 точных LE32 occurrences этого entry, но не каждый hit автоматически назван vtable конкретного класса.

WriteFields на обычном возврате даёт EAX1 даже после своих void low-level ошибок, поэтому проверки wrapper не обеспечивают транзакционный успех сохранения. Type15 сохраняется относительно save-data time, type0 — как float, type10 — integer. All-zero поля могут отсутствовать в payload; wrapper не делает semantic normalization, проверку finite или clamp. Ошибка/изменение уже обработанного родительского блока не откатывается.

### 0x1011abe0 — SharedSeededRandom_ResetFromLowByte

Устанавливает global RNG из256-entry таблицы по младшему byte seed.

cdecl один stack DWORD; читает только BYTE [ebp+8], zero-extends в индекс0..255. Загружает DWORD table1021a6e0[index], сохраняет в global10231060, plain RET. Native EAX остаётся загруженным DWORD, несмотря на void в C; новый seed не численно преобразуется и не перемешивается внутри этого helper.

Captured raw table занимает1024bytes. Младший byte ограничивает доступ самим MOVZX, отдельного bounds check нет. Seeds, различающиеся на256, выбирают одинаковую запись при неизменённой таблице. Нет per-object state, allocation, lock или restoration прежнего RNG; исходное runtime значение global и возможные сторонние writers здесь не установлены.

### 0x1011abb0 — SharedSeededRandom_Advance28Bits

Продвигает общий32битный RNG и возвращает его младшие28бит.

Без stack arguments, plain RET, EAX unsigned result. Native IMUL32 вычисляет t=state10231060*0x10dcd mod2^32. MOVZX CL выбирает table1021a6e0[t&255], затем INC и ADD дают newState=(t+table[t&255]+1) mod2^32. Полный newState записывается вglobal, после чего только return EAX маскируется0x0fffffff; сохранённое состояние не урезается до28бит.

Таблица и state разделяются всеми callers. Нет seed/init/null guard или synchronization, state не привязан к weapon this. Signedness Ghidra expressions не должна добавлять signed-overflow UB: native арифметика сохраняет младшие32бита. Period, равномерность и качество генератора этим локальным разбором не доказаны.

### 0x1011a050 — SharedSeededRandom_FloatWithIntegerWidth

Получает детерминированное float значение, квантируя ширину диапазона в unsigned integer.

cdecl(seed DWORD,float low,float high), plain RET, ST0 result. Native суммирует32битные bit patterns high+low+seed через integer ADD, а не numeric casts float→int; Reset1011abe0 берёт младшийbyte этой суммы. Затем Advance1011abb0 вызывается дважды безусловно, SUBSS(high,low) передаётся в XMM0 helper1013e5c0, EAX трактуется как unsigned width. Width0 возвращает FLD(low) после двух advances; иначе выполняет третий advance.

Третий result сужается MOVZX AX доlow16bits. CVTSI2SS→CVTPS2PD→MULSD(1/65536)→CVTPD2PS даёт fraction. Width превращается из signed CVTSI2SD в unsigned величину прибавлением double{0,4294967296}[width>>31], округляется float; затем MULSS fraction*width, ADDSS low, float store и FLD. Поэтому обычный положительный high-low<1 возвращает low, а не uniform float на исходном интервале; порядок округлений и unsigned correction принципиальны.

Каждый вызов заново seeds общий RNG и оставляет его после двух либо трёх advances; одинаковые seed/bounds при одинаковой таблице и FP state повторяют результат. Нет проверки high>=low/finite и нет clamp результата. Converter1013e5c0 использует VCVTTSS2USI при signed featureglobal>=6, иначе SSE/битовые ветви для unsigned range и invalid conversion; отрицательные/NaN/overflow inputs не следует заменять безопасным clamp, FP exceptions/ISA остаются внешними условиями.

Прямые CALL из100d0230/100d02e0 передают weapon.owner+2288 и punch ranges по осям z,y,x. Эта связь доказана C и байтами; не доказывает конкретный derived-weapon caller этих punch entry. Полный direct-edge scan дополнительно фиксирует4 callsites10088dd6/10088df7/10088e17/10088e36; их вызывающая функция не получила новый REVIEW в этом пакете.

## Оставшиеся границы

- Не найдена конкретная derived таблица, связывающая Spread/Toggle callbacks с доступным оружием. Есть bounded negative results двух scans, но нет whole-program absence claim.
- 100d1930 подтверждён ASM, но отсутствует saved C и потому не увеличивает число REVIEW. Expand table consumers остаются не закрытыми.
- Constructors и writers владельческого seed2288, lifetime table pointer1f8, внешние writers общей RNG table/state и ISA featureglobal не разобраны этим пакетом.
- Parent Item persistence wrappers1011e760/1011ed80 и factory10018440/10020010 — support, не новые карточки; дальнейший проход может дать им полные самостоятельные контракты.
- Runtime save/load, реальное распределение случайных значений, пользовательское ощущение отдачи и достижимость необычных inputs не проверялись.
