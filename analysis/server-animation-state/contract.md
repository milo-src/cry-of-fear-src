# Server animation state and studio wrappers: 14 functions

Только статический разбор исходного `hl.dll` SHA256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Все 14 адресов проверены как pending перед началом прохода. Ни игра, ни DLL не
запускались. `capture.py` воспроизводит ограниченные диапазоны objdump, raw PE
таблицы/строки и проверяет каждую сохранённую строку машинных байтов.
`evidence.json` содержит source/ASM hashes, original bytes и точные границы.
Названия методов аналитические, не восстановленные PDB names.

Offsets/адреса/маски ниже hex; количества аргументов, размеры RET и float-константы
указаны decimal. Subsystem `monsters` выбран потому, что generator не содержит
ключа `animation`. Support не получает дополнительных REVIEW в этом пакете.

## Общая связь объекта с моделью

Все object wrappers принимают this в ECX и читают `pev=DWORD[this+4]`.
Callback10223070 получает **один** cdecl аргумент DWORD[pev+20c] (edict pointer),
возвращает model-data pointer в EAX. GiveFnptrs100b4aa0 копирует 144 DWORD в
10222f48; callback находится в slot74 decimal. Сопоставление с сохранённым
`external/hlsdk-portable/engine/eiface.h` даёт `pfnGetModelPtr`; это сверка ABI,
не native имя символа. Инициализация callback/native stack shape подтверждены ASM.

Ни wrapper, ни нижние f250/f290 не проверяют magic/version/length model blob.
Object/pev/edict callback валидность предполагается. Model pointer borrowed:
эти функции его не выделяют и не освобождают. Модель может быть NULL; эффекты ниже
различаются по helper. Wrapper не превращает NULL автоматически в -1/error.

Owner `CBaseAnimating` подтверждён native save block/table10211178 и inherited
calls из CBaseToggle10102890/10102b20. Generic factory100b05e0 устанавливает
vtable101ce36c; сохранённая numeric table даёт конкретный пример наследования,
но не доказывает все derived classes или PDB-сигнатуры.

## Карта ABI и точный порядок аргументов

Все object функции — thiscall; RETN снимает только их собственные stack args.
Дочерние studio helpers — cdecl. Ghidra `void` у многих wrappers неверен.

| Адрес | Предложенная роль | Stack args / результат |
|---|---|---|
|1000e8b0|CBaseAnimating_GetSequenceFlags|нет / полный EAX flags; RET|
|1000e8d0|CBaseAnimating_InitBoneControllers|нет / void; RET|
|1000e950|CBaseAnimating_LookupActivity|int activity / полный EAX sequence; RET4|
|1000e980|CBaseAnimating_LookupActivityHeaviest|int activity / полный EAX sequence; RET4|
|1000e9b0|CBaseAnimating_LookupSequence|const char* label / полный EAX sequence; RET4|
|1000e9e0|CBaseAnimating_ResetSequenceInfo|нет / void; RET|
|1000ea60|CBaseAnimating_Restore|reader* / полный EAX reader-result; RET4|
|1000eaa0|CBaseAnimating_Save|writer* / полный EAX writer-result; RET4|
|1000eb00|CBaseAnimating_SetBlending|int index,float value / ST0 float-valued result; RET8|
|1000eb40|CBaseAnimating_SetBodygroup|int group,int value / void; RET8|
|1000eb70|CBaseAnimating_SetBoneController|int index,float value / ST0 float-valued result; RET8|
|1000ebb0|CBaseAnimating_SetBones|Vector* values,int count / void; RET8|
|1000f250|Studio_GetSequenceFlags|cdecl(model,pev) / полный EAX flags; RET|
|1000f290|Studio_GetSequenceInfo|cdecl(model,pev,float* rate,float* speed) / void; RET|

e8b0 вызывает f250(model,pev). e950/e980 вызывают f450/f4d0(model,pev,activity).
e9b0 вызывает f530(model,label), **без pev**. eb00/eb70 вызывают соответственно
f670/f880(model,pev,index,value). У последних нет FSTP после call, ST0 остаётся
возвращаемым значением; EAX не является обещанным числовым результатом.

eb40 и ebb0 сначала кладут часть аргументов нижнего helper на stack, затем вызывают
GetModelPtr, снимают лишь его edict-аргумент и PUSH EAX добавляет model:

- eb40 → f7c0(model,pev,group,value), stack cleanup16;
- ebb0 → f820(model,values,count), stack cleanup12.

Декомпилятор ошибочно прикрепил заранее приготовленные аргументы к callback.
Это не расширенный engine API с четырьмя аргументами и не однопараметрический f7c0.

## Нативные поля и граница SDK-именования

Native table10211178 содержит ровно5 descriptors (type/name/offset/count/flags):

| offset | native name | type | count/flags |
|---|---|---|---|
|ec|m_flFrameRate|0|1/0|
|f0|m_flGroundSpeed|0|1/0|
|f4|m_flLastEventCheck|15|1/0|
|f8|m_fSequenceFinished|12|1/0|
|fc|m_fSequenceLoops|12|1/0|

Native ENTVARS1021aae0 подтверждает sequence+12c, frame+134, animtime+138,
framerate+13c, controller+140, blending+144, body+114, targetname+1d0 и classname+0.
Записи finished/loops здесь DWORD; тип12 не даёт основания сужать storage до C++ bool1.

Модельные offsets доказаны операндами native кода; названия ниже соответствуют
совместимому `engine/studio.h`, чей hash сохранён, но не взяты из native RTTI:

| Структура/offset | Совместимое имя и использование |
|---|---|
|header+8c/+90|numbones / boneindex|
|header+94/+98|numbonecontrollers / bonecontrollerindex|
|header+a4/+a8|numseq / seqindex|
|header+cc/+d0|numbodyparts / bodypartindex|
|sequence record stride b0|model+seqindex+sequence*b0|
|record+20/+24|fps / flags|
|record+28/+2c|activity / actweight|
|record+38|numframes|
|record+4c/+50/+54|linearmovement xyz|
|record+80/+88/+90|blendtype[2]/blendstart[2]/blendend[2]|

Header fields не являются bounds-validation. Численные размеры и операции являются
native фактом; годность произвольного файла этим не установлена.

## f250 / e8b0: flags и signed верхняя граница

Если model==NULL, f250 возвращает0 **до** разыменования pev.
Иначе sequence=DWORD[pev+12c]; signed sequence>=DWORD[model+a4] → EAX0.
При sequence<count возвращает DWORD[model+DWORD(model+a8)+sequence*b0+24].
Отрицательный sequence не отвергается; нижней границы и проверки blob length нет.
Нет mutations или диагностик. e8b0 просто возвращает тот же полный EAX после
GetModelPtr; bits не сокращаются до boolean. Только ResetSequenceInfo делает flags&1.

## f290: rate и ground speed

NULL model → return **без записи обоих outputs**, без чтения pev.
Ненулевой model, signed sequence>=numseq → сначала *rate=0, затем *speed=0.
Иначе берёт record той же формулой; negative sequence проходит верхнюю проверку.

При signed numframes<=1 (включая0/negative) пишет rate=256.0f, speed=0.0f.
При numframes>1 native порядок для нормальных раздельных outputs:

```
rate = float(float(fps * 256.0f) / float(numframes - 1));
s = float(float(x*x + y*y) + z*z);
d = float(sqrt(double(s)));
*speed = d;
*speed = float(float(d * fps) / float(numframes - 1));
```

Все x/y/z squares, additions, multiplication/division — scalar float SSE;
sqrt — double SSE2, затем округление обратно к float. При double(s)<0 native код
вызывает1016be90 вместо SQRTSD; детали math-runtime исключений не раскрываются.
Raw101a1384=256.0f сохранён. Rate пишется до чтения linearmovement; speed реально
пишется дважды. FPS и numframes перечитываются после первой speed-записи.
Нет output-pointer validation или запрета alias; при alias с model эти промежуточные
записи могут менять последующие чтения, поэтому формула не является обещанием для
произвольного перекрытия памяти. Function не возвращает rate/speed через ST0.

## e9e0: reset sequence info

Первый GetModelPtr → f290(model,pev,&this.ec,&this.f0).
Затем e8b0(this) получает model **повторным callback**, читает flags и пишет
loops+fc=flags&1. Остальные записи по порядку: pev.animtime=globalTime,
pev.framerate=1.0f, finished+f8=0, lastEventCheck+f4=globalTime, причём time читается
повторно для последнего поля. No frame/sequence reset, activity/route не меняются.

Если оба callback вернулиNULL, rate/groundSpeed остаются прежними, loops становится0,
прочие reset writes выполняются. Нет проверки, что два callback вернули один и тот
же buffer; lifetime и стабильность engine model lookup остаются внешней обязанностью.

## e950/e980/e9b0: lookup wrappers

e950 передаёт activity в weighted selector f450: NULL model→0; ненулевой model без
совпадения→-1. Выбор использует activity+28, signed weights+2c и callback RNG.
Это не setter pev.sequence и не проверка доступности animation data.

e980 передаёт activity в f4d0: NULL model→0; ненулевой model начинает bestWeight=0,
bestIndex=-1 и выбирает строго больший signed weight. Равные веса не заменяют
первый максимум; только zero/negative matches оставляют-1. Wrapper возвращает EAX.

e9b0 передаёт label в f530: NULL model→0; иначе последовательно сравнивает label
sequence record со строкой через comparator, помеченный Ghidra как __stricmp; первый нулевой результат
даётindex, no matches/numseq<=0 дают-1. Полное case-folding/locale поведение comparator отдельно не доказано; имя CRT из метки не заменяет его тело. Wrapper не проверяет label NULL/длину.
Точные algorithms этих трёх lower helpers — соседний `server-studio-controls` пакет.

## e8d0 / eb70: контроллеры

InitBoneControllers берёт model один раз и вызывает f880(model,текущий pev,index,0.0f)
для индексов0,1,2,3. pev перечитывается перед каждым вызовом; все четыре результата
явно снимаются FSTP ST(0). Это четыре отдельных quantized setter, не memset controller
bytes и не запись descriptor.rest. Missing descriptor/NULL model не очищает bytes;
если диапазон включает нулевую координату с ненулевым byte encoding, результатом
может быть ненулевой byte.

SetBoneController eb70 получает model один раз и возвращает ST0 f880. Нижний helper
ищет первый controller descriptor с index==входному, нормализует/квантует value,
пишет BYTE[pev+140+index] и возвращает декодированное значение. Нет wrapper index
guard; missing descriptor/NULL model возвращает входной value без записи.
Диапазоны и полный rounding/angular contract f880 разобраны соседним пакетом;
не приписываем wrapper дополнительный clamp индекса0..3 или обработку mouth.

## eb00 / eb40 / ebb0: blending, body и shared bone values

SetBlending eb00 возвращает ST0 f670. Lower helper использует текущий sequence и
blend index; при NULL model или blendtype0 — входное value без записи, иначе
пишет quantized BYTE[pev+144+index]. Wrapper не ограничивает index/sequence.
Полная угловая арифметика и invalid ranges — контракт f670, не новая проверка здесь.

SetBodygroup eb40 передаёт f7c0(model,pev,group,value), void.
NULL model→no-op. Lower helper допускает signed group<=numbodyparts (включая равенство,
negative), и value<nummodels без нижней границы; при этих условиях меняет body+114
через signed division/modulo на descriptor.base/nummodels. Wrapper не исправляет
off-by-one/zero divisor guards; это не безопасный wrapper валидации ресурсов.

SetBones ebb0 вызывает f820(model,Vector* values,count), void. NULL model→Alert4
`Bad header in SetBones!\n`. Count уменьшается до signed header.numbones, когда
count>numbones; count<=0→без копирования. Положительный count копирует три DWORD
каждого входного Vector в bone record+40/+44/+48, stride70. Это первые три default
bone values **в borrowed model-data buffer**, не this/pev и не output pose buffer.
Другие bone fields и rotation values не меняются. Объём/NULL input/alias не проверены.
Shared lifetime модели определяет, какие другие сущности смогут увидеть эту запись;
из локального wrapper нельзя утверждать ни уникальное владение, ни глобальность кеша.

## ea60/eaa0: save/restore пяти полей

Restore сначала10102850(this,reader), inherited CBaseDelay. Result0→немедленно0.
Иначе ECX=reader, ReadFields10117010("CBaseAnimating",this,table10211178,5),
возвращает полный EAX без postprocessing. Нет ResetSequenceInfo/обнуления timers/
пересчёта frame после чтения. Partial reader writes/error следуют общему serializer;
rollback отсутствует. Finished/loops/lastEventCheck не проверяются по новым моделям.

Save сначала10102ac0(this,writer), inherited CBaseDelay; guard result0 такой же.
Затем ECX=writer, WriteFields1011adc0(diagnosticOwner,"CBaseAnimating",this,table,5).
Owner=targetname при string_t!=0, иначеclassname. Это diagnostic string, не шестое поле.
EAX writer сохраняется доRET4. Сам core writer на обычном возврате всегда1 даже после
warning/overflow, поэтому этот результат не доказывает целостную запись.
Native table содержит5 полей; pev/frame/sequence проходят другие слои сериализации,
их отсутствие здесь не означает отсутствие во всём save-файле.

## Открытые границы

Локальные branches, stack shape, ST0/EAX и собственные outputs всех14 раскрыты.
Engine GetModelPtr cache/lifetime, external model validation и math/CRT exceptional
behavior не установлены этим пакетом. Нижние selector/controller/body/bone helpers
переданы соседнему пакету; support чтение не считается отдельным REVIEW.
Ни animation event dispatch, ни вся модельная система, ни runtime parity здесь
не объявляются завершёнными.
