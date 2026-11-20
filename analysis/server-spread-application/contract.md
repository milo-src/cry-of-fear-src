# Применение параметров разброса и импульса отдачи

Десять сохранённых server entry, только статический разбор оригинального `hl.dll`. DLL не запускалась. Имена ниже аналитические. Адреса, offsets и маски — hexadecimal; числа формул — decimal. Исходная загрузка и поля таблицы доказаны в [spread settings](../server-spread-settings/contract.md). Здесь разобраны локальные тела, а не подтверждена их достижимость в конкретном оружии.

## Цепочка данных

`100d0410` читает остаток `100cff60`, добавляет аргумент, сохраняет время в weapon+200 и новую amplitude в +204. При crouched-флаге аргумент предварительно умножается на double 0.7. Return ST0 — прежний остаток, не новая amplitude.

`100d06a0 / 100d0760` берут primary equalize+38 и cone vectors+20/+2c; `100d0700` — secondary+70 и +58/+64. После equalize и vector multiply-add **выход z перезаписывается коэффициентом equalize**. Выход представляет `(cone.x, cone.y, factor)`, а не обычный симметричный cone vector. `100d07c0` выбирает virtual+1fc только при mode208==1; все остальные значения вызывают virtual+1f8. Связь этих slots с конкретными реализациями требует таблицы конкретного класса и здесь не подставляется по сходству.

`100d0230 / 100d02e0` читают primary/secondary punch ranges и вызывают генератор `1011a050` в порядке z,y,x. Каждая ось использует заново прочитанный owner+2288, без добавления номера оси. Затем `100f91b0` получает x,y,z через стек и ECX=owner.

Ни одна из десяти primary функций не читает expand fields table+3c/+74. `100d0410` принимает добавку как аргумент: считать, что это непременно expand, без caller нельзя. Диагностический ASM-only entry `100cfff0..100d022c` печатает оба expand, но не применяет их. Он не получил C-карточку. Exact LE32 pointer scan по raw PE для всех десяти primary дал ноль совпадений. Это ограниченное наблюдение, исключающее из проверки relative calls, вычисленные pointers и runtime initialization; оно **не доказывает dead code или отсутствие всех callers**.

## Поддерживающий RNG и передача импульса

`1011a050` native ABI: cdecl(seed DWORD, float low, float high), ST0, plain RET. Ghidra ошибочно показывает integer high и дополнительные аргументы в вызывающих функциях. Seed вычисляется ADD32 из seed + **bits(low) + bits(high)**, а `1011abe0` использует лишь младший byte суммы как индекс таблицы1021a6e0 из256DWORD. Глобальное состояние10231060 устанавливается элементом таблицы. Два вызова1011abb0 происходят всегда, ещё один только при ненулевой converted width.

Генератор1011abb0: `t = state * 0x10dcd mod 2^32; state = t + table[t & 255] + 1 mod 2^32; return state & 0x0fffffff`. Width получается SUBSS(high,low), затем helper1013e5c0 переводит float в unsigned DWORD. Поэтому это **не прямое uniform float interpolation на всей дробной длине**: для обычной положительной длины меньше1 width=0 и возвращается low после двух RNG advances. При ненулевой width берётся low16bits третьего результата, умножается через double на 1/65536, округляется float; unsigned width восстанавливается из signed CVTSI2SD плюс таблица double{0,4294967296}, округляется float; затем MULSS и ADDSS(low), float store и FLD. Seed и ширина меняют корреляцию осей; последовательные вызовы с одинаковыми seed/bounds повторяют результат. Thread safety/reentrancy и writers owner seed не установлены.

Поддерживающий1013e5c0 выбирает VCVTTSS2USI при signed global102328ec>=6; иначе проверяет float bits и использует CVTTSS2SI/битовую ветвь для диапазона[2^31,2^32), отдельные invalid paths. Поэтому крайние отрицательные/NaN/overflow inputs не заменены обещанием безопасного clamp; ambient FP exceptions и выбор ISA остаются внешними условиями. Этот support не добавлен отдельным REVIEW.

`100f91b0` уже разбирался в movement: при ненулевом rules и virtual20!=0 вызывает engine PlaybackEvent (API slot123,base10222f48→10223134), flags0x10, edict=owner.pev+20c, event index из WORD10231f44, delay0, одинаковый адрес stack-vector для origin/angles, остальные параметры0. Если callback возвращается, RET0c. Иначе обновляет owner.pev+280 -= x*20, +284 += y*20, +288 += z*20, операциями float32. Это отдельные native поля; переносить их по offsets в другой ABI нельзя. В рамках этого пакета receiver rules callback не переименован в MP только по slot.

## Контракты entry

### 0x100cff10 — SpreadVector_MultiplyAddSequential

Вычисляет три компоненты base + delta × scalar последовательно и возвращает output pointer.

cdecl(out*,base*,delta*,float scalar), plain RET; EAX=out несмотря на void в C. Scalar прочитан один раз. Для x затем y затем z выполняет отдельные MULSS и ADDSS с последующим store; это не FMA и не double. Никакого clamp/normalization/finite/null guard. Точное совпадение out с base или delta допускается этим порядком, но сдвинутое перекрытие может менять ещё не прочитанные компоненты: массивы не snapshot. Все три компоненты записываются, длина caller buffer не проверяется.

### 0x100d0230 — SpreadWeapon_ApplyPrimaryPunchRanges

Получает три значения primary punch и передаёт импульс владельцу оружия.

Thiscall ECX=weapon, без stack args, plain RET; status не оформлен. Table=weapon+1f8 фиксируется до RNG calls, lazy Bind и NULL guard отсутствуют. Для z использует low+48/high+54, y+44/+50, x+40/+4c. Перед каждым вызовом1011a050 заново читает weapon+160 и owner+2288, но table pointer не перечитывает. Каждый ST0 округляется FSTP доfloat32. Порядок RNG z→y→x; одинаковый seed, не seed+axis. Приготовленные z/y на стеке остаются будущими аргументами100f91b0, а не дополнительными аргументами RNG. После третьего вызова owner снова прочитан вECX, stack становится x,y,z, вызван100f91b0 (RET0c). Не читает mode/recovery/expand и самостоятельно не увеличивает recoil amplitude; поведение external callbacks/seed writers отдельно.

### 0x100d02e0 — SpreadWeapon_ApplySecondaryPunchRanges

Получает три значения secondary punch и передаёт импульс владельцу оружия.

Thiscall ECX=weapon, plain RET, без собственного status. Сохраняет table+1f8, без lazy initialization. Последовательность z(low+80,high+8c), y(+7c,+88), x(+78,+84); seed owner+2288 читается заново для каждой оси. Три cdecl RNG calls возвращают ST0, каждый результат округлён float32. Stack reuse оставляет z/y для конечного thiscall100f91b0(owner,x,y,z), не увеличивает число параметров1011a050. Table остаётся прежним, owner перед отправкой перечитан. Не проверяет существование owner/table, ordered bounds, mode или конечность результата. На первичную таблицу/primary-mode не переключается.

### 0x100d0390 — SpreadFactor_ApplyEqualization

Изменяет коэффициент по linear, square, cube либо square-root режиму.

cdecl(float* value,int kind), plain RET, EAX не является result pointer/status. Исходный float читается до выбора. Kind1: MULSS(q,q). Kind2: два последовательных MULSS, (q*q)*q, с float32 rounding каждого шага. Kind3: float→double, UCOMISD(0,q)/JA ведёт к1016be90 только для ordered отрицательного q; иначе SQRTSD, включая NaN и signed zero при masked exceptions. Обе ветви завершаются CVTSD2SS и store. Helper1016be90 получает/возвращает XMM0, а не ST0; его полное error/errno поведение не восстановлено. Kind0 и любой другой int сохраняют исходное значение через MOVSS store. Нет abs/clamp на[0,1], NULL guard или локальной установки FP environment.

### 0x100d0410 — SpreadWeapon_AccumulateRecoveryAmplitude

Добавляет величину к текущему остатку, обновляет anchor и ограничивает новую amplitude сверху единицей.

Thiscall ECX=weapon,float argument, RET4, ST0=предыдущий остаток100cff60, округлённый доfloat32. До recovery читает owner=weapon+160, owner.pev+1a8 mask4000 (FL_DUCKING в поддерживающем header). Если установлен, float argument расширяется double, умножается на raw double0.7, округляется float. Затем100cff60 может lazy Bind/Reset; его ST0 сохраняется в исходный slot аргумента. ADDSS(oldResidual,adjustedArgument), anchor+200=DWORDglobal.time, +204 сначала получает сумму. COMISS(sum,1)/JBE оставляет sum<=1 и unordered; только ordered sum>1 заменяется exactfloat1. Нет нижнего clamp, проверки отрицательной добавки/NaN или измененияreturntime. Возврат загружен из сохранённого oldResidual, не из +204. При немаскированном FP exception выполнение может прерваться на арифметике/сравнении; guaranteed NaN completion не заявлено. Expand поля таблицы прямо не читаются.

### 0x100d06a0 — SpreadWeapon_GetPrimaryConeAndFactor

Вычисляет primary cone x/y и возвращает equalized factor в z.

Thiscall ECX=weapon,outVector* на стеке, RET4, EAX=out. Сначала100cff60 с возможным lazy Bind/Reset, затем читает актуальныйtable+1f8. ST0→float32local. Equalize100d0390(local,table+38), потом100cff10(out,table+20,table+2c,local). После записи всех трёх cone components безусловно перезаписывает out+8 значением local; z не остаётся cone.z. Не нормализует и не ограничивает коэффициент. Mode и expand не читаются; вызов не наращивает amplitude, кроме возможного initial reset внутри recovery. Output alias с table может менять данные при последовательных stores; отдельной копии vectors нет.

### 0x100d0700 — SpreadWeapon_GetSecondaryConeAndFactor

Вычисляет secondary cone x/y и возвращает equalized factor в z.

Thiscall ECX=weapon,outVector*, RET4, EAX=out. Recovery100cff60 вызывается до чтенияtable. Его ST0 округляется float32; equalize code читаетсяtable+70, base vector+58, delta vector+64. Через100cff10 записываются x/y/z, затем out+8 перезаписывается equalized float. Нет автоматической проверки mode==1, увеличения amplitude или чтенияexpand+74. Нет NULL/buffer/finite guard; alias-sensitive последовательные stores наследуются от MA helper. Отличие отprimary — только соответствующие offsets; factor z здесь также не геометрическая компонента.

### 0x100d0760 — SpreadWeapon_GetPrimaryConeAndFactorDuplicate

Повторяет primary расчёт cone x/y и factor z в отдельном native entry.

Thiscall ECX=weapon,outVector*, RET4, EAX=out. Полный порядок: recovery100cff60, float32 local, table+38 equalize, MA сtable+20/+2c, overwriteout.z=local. После нормализации только относительных displacement трёх CALL это тело побайтно совпадает с100d06a0; отдельный адрес сохранён, но роль разных virtual slots/классов не выдумана. Mode/expand не читаются, коэффициент не clamp. Lazy initialization приходит только через100cff60. Все NULL/output/alias/FP ограничения primary helper сохраняются.

### 0x100d07c0 — ToggleWeapon_DispatchConeOutput

Передаёт output pointer одному из двух virtual slots по mode и возвращает тот же pointer.

Thiscall ECX=weapon,out*, RET4. Читает mode+208 и vtable, сохраняетout вESI, **в обоих путях** PUSH out: mode==1 вызываетvtable+1fc, любой другой int — vtable+1f8. Ghidra скрывает аргумент вprimary ветви, ASMего доказывает. Callee return не используется, EAX безусловно заменяется исходнымout после вызова. Caller ожидает callee cleanup одногоstackDWORD, собственногоADD ESP нет. Не проверяетготовностьtable, out или mode domain; нет своего fallback/записиvector. Фактические overrides не доказаны raw table и остаются открытыми.

### 0x100d1940 — ToggleWeapon_DispatchActionAndCopyTimer

Вызывает mode-specific virtual action и затем копирует поле1cc в1d0.

Thiscall ECX=weapon, no stack args, plain RET. Mode208==0 вызываетvtable+1d8; mode==1 вызывает+1dc; другое значение не вызываетaction. В каждом нормально возвращающемся пути затем читаетактуальный DWORDweapon+1cc и пишет+1d0, EAX остаётся скопированнымDWORD. Это не boolуспех и не обязательноfloatreturnST0. Callback может изменить поля; копия делается после него. Mode/table/recovery здесьнепереписываются. Timer-имя аналитическое изweaponконтекста; точные names/descriptors и real overridecallers не установлены этим пакетом, отсутствующие vtables не восполняются SDKдогадкой.

## Оставшиеся границы

- [Spread callers](../server-spread-callers/contract.md) доказывает прямой ASM-only100d1930→100d0410 с literal float32 0.7. Связь с expand+3c/+74 и конкретным выстрелом ещё не установлена; bounded direct/pointer scan не исключает непрямые вызовы.
- Установить concrete class/vtable consumers, не выводить runtime reachability из наличия helper в DLL.
- RNG1011a050/1011abb0/1011abe0 теперь имеют REVIEW в [spread callers](../server-spread-callers/contract.md). Numeric conversion1013e5c0 и полный sqrt error-path1016be90 остаются отдельными границами.
- Save/Restore100d19b0/100d19f0/100d1a30/100d1a90 и parent1011e7a0/1011ede0 разобраны в [spread callers](../server-spread-callers/contract.md). Native descriptors доказывают1fc=m_flSpreadTime,200=m_flLastShotTime,204=m_flLastSpreadPower,208=m_iWeaponMode; parent1cc/1d0 — m_flNextPrimaryAttack/m_flNextSecondaryAttack. Pointer1f8 отсутствует в собственных descriptors, полного rebinding этим не доказано.
- Capture и verify работают с оригинальными bytes и saved C, без target execution и без обязательного локального objdump cache. Поведение в кадре, реальные параметры файлов и оружейные derived classes не проверялись.
