# Ранние PM helpers: геометрия, математика и состояние движения

Пакет содержит 33 ранее pending функции из `100017e0..10003fff`. Исходный `hl.dll`: SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Это статический разбор сохранённых C и ограниченного машинного кода. DLL и игра не исполнялись; код порта и ресурсы не менялись.

Карточки — [notes.json](notes.json), машинные диапазоны и хеши — [evidence.json](evidence.json). [capture.py](capture.py) повторяет чтение PE и objdump с проверкой каждой строки байтов против DLL. Четыре CRT math функции включены только как support, три их fallback-фрагмента — только как ASM evidence, без вымышленных C-карточек. Старые REVIEW не заменяются.

## Связи и владение

```text
100017e0 DrawBounds ──────────────┐
100018f0 DrawPhysentBounds ───────┼→10002420 DrawQuad→100024c0 ParticleLine→pm.Particle
                └→10002ca0      │                            └→100033d0 Normalize

10008a00 PM dispatcher [support]→10002ae0 AngleVectors
10004170 CheckParameters [support]→10003bb0 CalcRoll→10002ae0
100037d0 AddGravity→10004880 CheckVelocity [support]
10003c70 CategorizePosition→10004990 CheckWater [support]
                          →pm.PlayerTrace→10003840 AddTouch
10003de0 CategorizeTexture→pm.TraceTexture→100056f0 material lookup [support]
```

`10220c50` — заимствованный указатель на текущий `playermove`: его назначает уже разобранный `10006f30`, затем dispatcher работает с этим объектом. Новые helpers не выделяют память, не владеют сущностями или моделями. Математические функции получают pointers на caller-owned массивы. ParticleLine передаёт callback указатель на локальный vec3; сами эти helpers не сохраняют его после вызова.

Отладочные bounds не являются новой collision geometry. Рисуются частицы, а не studio mesh или линии OpenGL. Нет доказанного вызова DrawBounds/DrawPhysentBounds/AngleBetween из других сохранённых C в текущем поиске; это ограничение данной выборки, а не доказательство отсутствия indirect calls или неиспользуемости во всей программе.

## Native ABI и layout

Все 33 новые функции завершаются plain `RET`; у функций с аргументами они передаются через стек, callee их не очищает. Это cdecl-подобный ABI, не thiscall. `ECX` не следует объявлять объектом только по его наличию в дизассемблере.

| Группа | Точные адреса | Результат |
|---|---|---|
| Debug bounds / physent / quad / line | 100017e0,100018f0,10002420,100024c0 | side effects через PM callbacks |
| Inverse matrix / matrix / basis / transposed basis | 100027a0,10002940,10002ae0,10002ca0 | caller-owned output floats |
| Cross / interpolate / normalize angles / vector angles | 10002e30,10002ef0,10003040,10003100 | outputs; interpolation также меняет inputs |
| Angle-like / distance / length / normalize / dot / anglemod / roll | 100026e0,10002e90,10002fd0,100033d0,10003570,10003630,10003bb0 | float в x87 ST0 |
| Integer log / compare / add touch | 100030e0,10003250,10003840 | EAX integer |
| Negate / MA / matrix basis / scale / transform / add / copy / subtract | 10003290,100032d0,10003320,10003490,100034d0,10003590,100035d0,100035f0 | output or in-place |
| Full gravity / ground / texture | 100037d0,10003c70,10003de0 | мутации текущего PM state |

Ghidra потерял ST0 return у Distance и CalcRoll, а также EAX return у AddTouch. Обычный путь cookie checker `1013dbb3` не затрагивает ST0/EAX: это не основание объявлять функцию void.

Наблюдаемые native offsets согласованы с уже разобранным [movement/physics.md](../movement/physics.md). SDK `pm_defs.h` и `pmtrace.h` используются для именования полей и callback contracts, но не как доказательство полного совпадения SDK usercmd:

| Поле / callback | Offset |
|---|---:|
| frametime, origin, velocity, basevelocity | 10,38,5c,74 |
| gravity, waterjumptime, onground, waterlevel | c0,cc,e0,e4 |
| texture name[256], material char | f0,1f0 |
| numphysent; physents[600] | 24c;250, stride e0 |
| nummoveent; moveents[64] | 20f50;20f54 |
| numvisent; visents[600] | 24754;24758 |
| native usercmd; numtouch; touchindex[600] | 45458 (size38);45490;45494 (stride44) |
| physinfo[256]; movevars pointer | 4f3f4;4f4f4 |
| player_mins[4]; player_maxs[4] | 4f4f8;4f528 |
| PM_Particle; Con_DPrintf; Con_Printf | 4f55c;4f568;4f56c |
| PM_PlayerTrace; PM_GetModelBounds; PM_TraceTexture | 4f584;4f598;4f5bc |

Последовательность размеров даёт точные наблюдаемые границы: `250+600*e0=20f50`, затем массив64 physents и массив600 visents заканчиваются на45458; native cmd38 приводит к45490. Таким образом offsets callbacks нельзя механически получить подстановкой другой версии SDK usercmd.

Native `pmtrace_t` — 0x44 bytes: allsolid+0, startsolid+4, inopen+8, inwater+c, fraction+10, endpos+14, plane.normal+20, plane.dist+2c, ent+30, deltavelocity+34, hitgroup+40. `PM_PlayerTrace` получает скрытый первый указатель возврата; caller затем читает 0x44 bytes через EAX. `10003840` принимает весь trace **by value**, затем pointer velocity, а не 18 независимых смысловых параметров.

## Отладочные коробки и частицы

`100017e0(mins,maxs,origin,color,life)` строит восемь углов. Бит оси1 выбирает mins, бит0 — maxs, после чего добавляется origin. Raw таблица10211028 содержит24 индекса; для каждой группы используются позиции `[1],[0],[2],[3]` как tl,bl,tr,br. Шесть quad дают24 вызова ParticleLine; одинаковые рёбра соседних граней не удаляются.

`100018f0(index,color,life)` допускает только `0<index<numphysent`. Для model!=NULL callback GetModelBounds получает mins/maxs; при ненулевых angles уголки вращаются строками `10002ca0`, затем прибавляется physent.origin. При model==NULL используются physent.mins/maxs и origin, без вращения. World index0 исключён. Не следует переносить модельную ветку на bbox-ветку без доказательства.

`10002420(tl,bl,tr,br,color,life)` вызывает линии tl→bl→br→tr→tl с vert0. `100024c0(start,end,color,life,vert)` нормирует delta, сохраняя его прежнюю длину, и вызывает Particle(origin,color,life,zpos0,zvel). Zvel — `CVTTSS2SI(vert)`, то есть integer truncation. Расстояния идут0,2,...<=length; конец не добавляется отдельно. Нулевой отрезок выдаёт одну частицу. Лимита длины или числа частиц нет; локальная позиция переиспользуется между callback calls.

## Углы, базисы и точная математика

Имена sin/cos/acos/atan2 не выведены только по привычной формуле. `1016bcc0`/`1016bb00` используют вход и выход double в XMM0; их fallback101829ff/1018290f содержит FSIN/FCOS и передаёт ссылки на строки `sin`/`cos`. `1016b5e0` fallback101827ff содержит `sqrt((1+x)*(1-x))` и FPATAN, а строка101ef4f0 — `acos`. Thunk1016b5d0 передаёт dispatcher descriptor101ef400, начинающийся length5 и `atan2`. Полная корректность CRT на NaN, больших углах и изменённых FP режимах этим пакетом не заявляется.

Для обычных конечных углов обозначим p,y,r = pitch,yaw,roll в радианах; sp/cp,sy/cy,sr/cr — их sin/cos. Native conversion: double(degrees)*double(pi/180), затем округлениеfloat, затем расширениеdouble перед CRT; значения sin/cos округляютсяfloat.

```text
F = (cp*cy, cp*sy, -sp)
R = (-sr*sp*cy + cr*sy, -sr*sp*sy - cr*cy, -sr*cp)
U = (cr*sp*cy + sr*sy, cr*sp*sy - sr*cy, cr*cp)
```

- `10002ae0` выдаёт F,R,U, любой output может бытьNULL. Все trig calls выполняются независимо от output guards.
- `10002940` строит3x4 матрицу со столбцами F,-R,U и нулевой трансляцией.
- `100027a0` транспонирует её вращательную часть; строки F,-R,U, translation также0.
- `10002ca0` выдаёт три строки матрицы10002940 отдельными nullable vec3.
- `10003100` вычисляет yaw=atan2(y,x), pitch=atan2(z,horizontalLength), вградусах с добавлением360 отрицательным значениям. Roll0. Приx=y=0: yaw0 иpitch90 дляz>0, иначе270, втомчисле длянулевогоvector. Знакpitch отличается от F.z=-sin(p), поэтому нельзя безоговорочно назвать эти две функции взаимно обратными.

`10003040` делает только одну поправку±360 для каждой компоненты; ±180 остаются. Например720→360. `10002ef0` вызывает её на **обоих исходных** векторах, интерполирует delta по короткой дуге одним±360, затем поправляетoutput. T не ограничен[0,1].

`10003630` — отдельная квантизованная операция: `float((uint16_t)trunc(double(angle)*(65536/360))*(360/65536))`, где оба коэффициента raw double. Это неfmod. Для обычных входов результат[0,360), шаг360/65536. Conversion overflow/NaN и FP exceptions не подавляются локально.

### Нестандартный AngleBetween

В `100026e0` CALL acos стоит по10002749, а деление на произведение длин — по1000275d. Значит обычная семантика:

```text
если la==0 или lb==0: 0
иначе q = acos(float(dot(a,b))) / float(la*lb)
return float(double(float(float(q)*180f))/pi)
```

Это **не** SDK `acos(dot/(la*lb))`. Нормализация доacos и clamp[-1,1] отсутствуют. Для ненормированных vectors возможны domain error или другой угол; достижимость из игрового поведения не проверена. Название карточки подчёркивает native order, вместо «исправления» исследуемого алгоритма.

### Остальная векторная математика

Length10002fd0 и Normalize100033d0 суммируют квадраты вfloat, берутdouble sqrt, затем округляютlengthfloat. Normalize изменяет input только приlength!=0; нулевойvector остаётся прежним. Distance10002e90 возвращает Length(b-a). Dot10003570 использует x87 FMUL/FADDP и возвращаетST0 без промежуточного SSEfloat округления.

Cross10002e30, Transform100034d0, Add10003590, Subtract100035f0, Scale10003490, MA100032d0 и Copy100035d0 записывают компоненты последовательно. У простых покомпонентных Add/Subtract/Scale/MA точное alias output==input допустимо; у Cross и матричногоTransform такое совпадение может испортить повторно читаемые другие компоненты. Произвольное частичное перекрытие не гарантируется ни для одного из них; Copy не являетсяmemmove.

Compare10003250 — точное float equality, неmemcmp: +0==-0, NaN даётfalse. Negate10003290 меняет лишь sign bit XOR80000000, сохраняя остальные биты. IntegerLog100030e0 использует SAR: положительнымn даётfloor(log2(n)), нулю0, отрицательные значения не доходят до нуля и зацикливаются на-1.

VectorMatrix10003320 обычно строит right=normalize(forward×Z), up=normalize(right×forward). Но приforward.x=y=0 native выдаёт right=(1,0,0),up=(-forward.z,0,0). Эти outputs параллельны приz!=0. Не объявлять результат гарантированным ортонормальным базисом и не подменять ветку математически более удобной.

## Состояние движения

### Full gravity100037d0

Берёт gravity scale+c0; ровно0 заменяется1. Выполняет `vz -= movevars.gravity*scale*dt`, затем `vz += basevelocity.z*dt`, очищаетbasevelocity.z и tail-calls CheckVelocity10004880. Здесь нет guards dead/waterjumptime и неткоэффициента0.5, присутствующего вhalfgravity10003730. CheckVelocity — отдельная зависимость: может обнулить аномальные компоненты и ограничитьspeed; эта функциясамаorigin не перемещает.

### AddTouch10003840

Ищет ent среди существующих trace records. Первый совпавший ent даётEAX0 и не обновляет ни trace, ниvelocity. Для нового ent копирует trace, заменяетdeltavelocity входнымvec3, увеличиваетnumtouch, возвращаетEAX1. Hitgroup сохраняется.

При signed numtouch<0 цикл не запускается, проверка i==count ложна и функция возвращает EAX0 без добавления. Приnumtouch>=600 callback Con_DPrintf получает warning, но после него запись продолжается. Внутреннегоclamp/rollback нет. Код не запрещаетent0 илиотрицательныеent; эти условия проверяются отдельнымиcallers. Это описание локальных границ, не утверждение о достижимости повреждения памяти при штатной игре.

### CalcRoll10003bb0

Вычисляетside=dot(velocity,right(angles)), sign=side>=0?+1:-1. Приabs(side)<rollspeed возвращаетsign*abs(side)*rollangle/rollspeed, иначеsign*rollangle. Native возвратST0 доказанFMUL передRET, cookie checker его не снимает. Функциясама не пишеткамеру; CheckParameters10004170 использует результат. Приrollspeed<=0 ordinary finite values попадают вветку полнойамплитуды безделения.

### CategorizePosition10003c70

Сначала CheckWater10004990. Еслиvz>180, ground=-1 иreturn. Иначе trace отorigin на2единицывниз сflags0/ignore-1. При `double(normal.z)<double(0.7)` ground=-1, иначеground=trace.ent. Raw порог — double101a1e58; это существенно у границы: float0.7 чутьменьше double0.7. Finite/NaN policy trace engine не восстановлена.

Еслиground!=-1, waterjumptime очищается. Приwaterlevel<2, !startsolid и!allsolid origin заменяетсяendpos. Fraction не проверяется отдельно. Наконец при **исходном** trace.ent>0 добавляетсяtouch с текущейvelocity, дажееслиgroundотвергнут из-за slope. Worldent0 можетбытьground, но здесьнепопадаетвtouchindex.

### CategorizeTexture10003de0

Сначала texture[0]=0, material='C'. TraceTexture получаетonground ивертикальныйотрезокотorigin доorigin.z-64. NULLсохраняетdefaults. Leading+/- удаляетдвасимвола; затем удаляетсяодиночный{,! ,~илиspace. ДалееNULстрокакопируетсябезпроверкиlength вbuffer256, и только **после полной копии** texture[12]=0. Это неboundedcopy12. Lookup100056f0 сравниваетпервые12символовбезучётарегистра втаблице материалов; неизвестноеимя→'C'. СамCategorizeTexture неиграетзвуки.

## Границы и дальнейшая очередь

Доказаны локальные тела33 функций, ABI, используемые поля и данные. Не проверены runtime/pixel parity, реальное использование отладочных helpers, вызывающие источники произвольных/невалидныхвекторов, полныйCRT иинтерналenginecallbacks. Support CheckWater, CheckVelocity и material lookup в этом пакете прочитаны длясвязей, но карточкина них не добавлены: соседний PM-пакет разбирает их отдельно. Все будущие уточнения должны сохранять различие native формул и SDK-сравнения, особенно AngleBetween, VectorMatrix иtrace bounds.
