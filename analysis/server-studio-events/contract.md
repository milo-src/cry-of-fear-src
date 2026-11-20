# Server studio events, transitions and sequence timing

Static audit of 12 original server functions. Binary: `D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll`; SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. The DLL was not executed. `capture.py` reproduces bounded disassembly and raw PE records, checks every instruction byte against the original, and hashes the input before and after capture. Saved decompiler files are unchanged.

Addresses, field offsets and bit masks are hexadecimal. Sequence counts, event IDs, frame values and formula constants are decimal unless prefixed with `0x`. Analytical names below describe native instructions, not recovered original source names. CPU exceptional paths, invalid model buffers and external engine callbacks are not runtime-tested.

## Shared layout and call chains

The native ENTVARS descriptors establish `sequence+12c`, `frame+134`, `animtime+138`, `framerate+13c`, `body+114`, `view_ofs+178`. Native CBaseAnimating descriptors establish `m_flFrameRate+ec`, `m_flGroundSpeed+f0`, `m_flLastEventCheck+f4`, `m_fSequenceFinished+f8`, `m_fSequenceLoops+fc`; the latter two are DWORD fields in the inspected instructions.

Model field names are comparisons with the saved `engine/studio.h`, not PDB evidence. Independently confirmed numeric layout: header bone count `+8c`, controller count/base `+94/+98`, sequence count/base `+a4/+a8`, bodypart count/base `+cc/+d0`, transition dimension/base `+ec/+f0`. Sequence stride `b0`: fps `+20`, flags `+24`, event count/base `+30/+34`, frame count `+38`, bounds `+60..74`, entry node `+a0`, exit node `+a4`, reverse permission field `+a8`. Event stride `4c`: signed frame `+0`, ID `+4`, unused type `+8`, options string `+c`. Offsets inside the model are added to the original model pointer, except sequence-local field offsets as explicitly shown.

Engine initializer `100b4aa0` copies 144 DWORDs to `10222f48`. Native callback locations plus saved `eiface.h` establish compatible slots: 1=`PrecacheSound` at `10222f4c`, 61=`AlertMessage` at `1022303c`, 67=`AllocString` at `10223054`, 74=`GetModelPtr` at `10223070`. Names are an ABI comparison; calls and argument order are native evidence. Model buffers and pooled strings are owned externally; these helpers do not free them.

Already reviewed wrappers remain authoritative in [animation-state](../server-animation-state/contract.md) and [studio-controls](../server-studio-controls/contract.md). This packet adds the lower bodies: `e730→eec0`, `e760→ef20`, `e5f0→f020`, `e800→f150`, `e880→f1d0`. In particular, dispatcher `1000e5f0` ignores its stack interval and uses fixed 0.1, independently of the interval returned by `1000eda0`. `100a0a70` calls `1000eda0(0)`, discards ST0, then schedules virtual `+8` with 0.1. No claim that every entity uses one update policy.

## 0x1000eda0 — Animating_AdvanceFrameWithElapsedFallback

Продвигает кадр анимации, обновляет animtime и возвращает фактически выбранный интервал через ST0.

ECX=this, stack(float interval), RET4. Если interval ordered-equal нулю, включая -0, вычисляет `dt=float(now-animtime)`. Сравнение раннего выхода выполняется в double: `double(dt)<=raw double 0.001` по адресу `101a1de0`. Тогда только записывает прежнее прочитанное now в animtime и возвращает FLDZ; frame и finished не меняет. NaN dt при masked invalid не выбирает этот ранний выход. Ненулевой явный interval, включая отрицательный, не проходит этот порог.

На основном пути ordered-zero animtime принудительно делает dt=+0, даже если задан ненулевой interval. Затем `frame=float(float(float(FrameRate*dt)*framerate)+frame)` в указанном порядке SSE float. После записи frame перечитывает pev и глобальное now, записывает animtime, затем перечитывает frame. Возвращает dt через FLD из float stack slot, а не новый frame и не bool.

Если ordered frame<0 либо frame>=256, устанавливает finished=1. При loops==0 результат frame равен 0 для отрицательного значения, иначе 255. При loops!=0 использует `frame=float(double(frame)-double(CVTTSD2SI(double(frame)*(1/256)))*256)`: обе константы double подтверждены PE. Это truncation к нулю, не положительное modulo: например -1 остаётся -1, -257 становится -1, 256 становится 0. NaN frame не входит в корректирующую ветку; поведение бесконечности/выхода за int32 зависит от FP exception mask и CVTTSD2SI indefinite. Внутри диапазона finished не сбрасывается. LastEventCheck, sequence и loops здесь не меняются; NULL this/pev guards отсутствуют.

## 0x1000eec0 — Studio_CopySequenceBounds

Копирует две тройки координат bounds выбранной последовательности и возвращает EAX0/1.

cdecl(model,int sequence,Vector* mins,Vector* maxs), plain RET. NULL model даёт EAX0 и не обращается к outputs. Иначе record=model+DWORD(model+a8)+sequence*b0; последовательно копирует raw DWORD record+60/+64/+68 в mins и record+6c/+70/+74 в maxs, затем EAX1. Это модельные bounds без world transform.

Нет проверки sequence относительно count, отрицательного индекса, model span или output pointers. Записи и чтения чередуются, поэтому alias outputs с record может изменить последующие читаемые значения; это не гарантированно snapshot двух Vector. Wrapper1000e730 сохраняет EAX и предоставляет borrowed model от engine; ownership не передаётся.

## 0x1000ef20 — Studio_SelectTransitionSequence

Выбирает непосредственную или промежуточную sequence по byte-матрице переходов, при успехе задавая направление воспроизведения.

cdecl(model,int from,int to,int* direction), plain RET, полный EAX sequence index. NULL model возвращает to без записи direction. Читает entry node текущей from sequence; если он 0, сразу to. Затем entry node to; если 0, также to. Только после этих gates читает *direction: при signed *direction>0 текущим node становится from.exit, иначе остаётся from.entry. Если выбранный текущий node равен to.entry, пишет direction=1 и возвращает to.

Иначе nextNode=unsigned BYTE(model+transitionindex+(currentNode-1)*numtransitions+to.entry-1). Нулевой byte означает возврат to без изменения direction. Для ненулевого nextNode ищет по всем sequences, signed i<count: сначала entry==currentNode и exit==nextNode → direction=1/EAX=i; иначе nodeflags!=0, exit==currentNode и entry==nextNode → direction=-1/EAX=i. Reverse разрешает любое ненулевое поле nodeflags, не конкретный бит. Первая подходящая sequence выигрывает; прямое соответствие проверяется раньше обратного внутри одной записи.

Если nextNode ненулевой, но запись не найдена, вызывает AlertMessage(1,"error in transition graph") и возвращает to, не меняя direction. Ни from/to, ни node IDs, размер матрицы и direction pointer не валидируются. Особенно: from.entry проверен до подмены на from.exit; нулевой exit после подмены не проверяется, что допускает строку currentNode-1. Это выбор одного перехода, не рекурсивный обход графа. Wrapper1000e760 с NULL direction подставляет локальный 0 и пропускает результат только при итоговом direction==1; поэтому его возврат -1 не равнозначен отсутствию to sequence.

## 0x1000f020 — Studio_NextServerAnimationEvent

Возвращает следующую запись серверного animation event из заданного окна кадров и продолжительный cursor.

cdecl(model,pev,Event8* out,float start,float end,int cursor), plain RET, EAX0 либо index+1. Gates в порядке: model!=NULL; signed pev.sequence<model.numseq; out!=NULL; eventCount!=0; signed cursor<=eventCount. Перед обращением к pev нет отдельного NULL guard. Sequence и cursor не имеют нижней границы. Cursor==count всё равно вычисляет преобразованное окно, затем возвращает0 без чтения event. Отрицательный count сам по себе не запрещён, поэтому при ещё меньшем отрицательном cursor возможны обращения перед массивом.

При signed numframes<=1 окно принудительно start=0/end=1 независимо от входов. Иначе scale=double(numframes-1)*raw double(1/256); start=float(double(inputStart)*scale), end=float(double(inputEnd)*scale). Это double multiply с финальным округлением в float, не float scale из упрощённого C. Для каждой записи начиная cursor нужен signed eventID<5000; отрицательные ID не исключены. Event.frame преобразуется из signed int в float.

Запись подходит при ordered start<=eventFrame<end. Дополнительный loop-критерий: low byte seq.flags&1!=0, ordered end>=float(numframes-1) и ordered `eventFrame<float(float(end-float(numframes))+1)`. Это только один хвост перехода через конец, без нормализации начала и без повторной выдачи одной записи за несколько полных циклов. Unordered сравнения не дают успеха соответствующего условия; если start NaN, loop-критерий всё ещё может сработать, поскольку start там не используется.

При успехе пишет DWORD out[0]=ID и out[1]=borrowed char* options (model+eventindex+index*4c+c), затем EAX=index+1. При неуспехе out остаётся нетронутым. Не копирует строку, не читает event.type+8 и не сортирует по времени: порядок соответствует порядку records. Нет string/span guards. Вызывающий1000e5f0 начинает с cursor0, вызывает virtual+11c(&Event8) и передаёт возвращённый cursor для следующего события; lifetime stack Event8 и model options остаётся ограничен внешним владельцем.

## 0x1000f150 — Studio_DecodeBodygroup

Извлекает номер submodel из packed pev.body для указанной bodygroup.

cdecl(model,pev,int group), plain RET/EAX. NULL model либо signed group>model.numbodyparts →0. Иначе bodypart=model+bodypartindex+group*4c; если signed bodypart.nummodels<=1, тоже0. При count>1 возвращает signed remainder `(pev.body / bodypart.base) % nummodels`, два IDIV с усечением к нулю.

Group==count и отрицательный group допускаются; нет проверки pev, base0 или INT_MIN/-1 overflow. Отрицательный body может дать отрицательный remainder. Guard nummodels>1 защищает второй divisor от0, но не первый base. Никаких записей в entity/model. Wrapper1000e800 сохраняет полный EAX.

## 0x1000f1a0 — Studio_ReadBoneCount

Читает raw DWORD числа костей из заголовка модели.

cdecl(model), plain RET/EAX. При model!=NULL возвращает DWORD(model+8c) без clamp, signed проверки или обхода bones. NULL вызывает AlertMessage(4,"Bad header in SetBones!\n"), затем явно XOR EAX,EAX и возвращает0. Диагностическое имя SetBones не означает, что эта функция записывает кости: записей в model нет. В выбранных caller captures связь с wrapper не установлена; отсутствие лексического caller в частичном корпусе не доказывает недостижимость.

## 0x1000f1d0 — Studio_ControllerEndMagnitude

Возвращает модуль end-предела первой записи controller с заданным индексом через ST0.

cdecl(model,unusedPev,int index), plain RET/ST0. Первый аргумент является pointer, хотя Ghidra объявил float: native TEST EDX,EDX и pointer arithmetic. NULL model, signed controllerCount<=0 или отсутствие index дают FLDZ. Иначе читает records=model+controllerindex со stride18, сравнивает DWORD record+14 с index; первая совпавшая запись выигрывает.

Значение end=FLOAT(record+c) при ordered end<0 умножает на raw float -1, иначе оставляет как есть, затем FLD округлённого float. Это не end-start, не текущее controller value и не bitwise fabs: -0 остаётся -0, NaN при masked invalid не инвертируется. Индекс не ограничен0..3, pev не читается, model не меняется. Wrapper1000e880 передаёт ST0 без FSTP.

## 0x1000f230 — Studio_EyePositionDiagnosticOnly

Проверяет только NULL model и при ошибке вызывает diagnostic; координаты глаза не записывает.

cdecl(model,secondStackSlot), plain RET либо tail JMP engine callback. При ненулевом model тело после CMP/JNE делает только POP EBP; RET. Оно не читает model.eyeposition, не разыменовывает второй аргумент и не записывает никаких выходных координат. При NULL заменяет собственные stack arguments на severity1 и строку "GetEyePosition() Can't get pstudiohdr ptr!\n", восстанавливает EBP и tail-jumps AlertMessage. Defined EAX/ST0 result отсутствует; разница с C прототипом void(model) состоит в реально используемом втором stack slot для tail-call.

Support caller100c2010 выделяет 12 байт незаполненного stack Vector, передаёт его адрес как второй аргумент, затем независимо от model копирует эти 12 байт в pev.view_ofs+178..180. Native helper ни в одной ветке не заполняет Vector. Позже caller лишь сравнивает полученную тройку с общим вектором10222f34..3c и может печатать diagnostic; это не fallback заполнение. Нельзя приписывать исходному helper чтение model eye position по похожему SDK имени. Содержимое stack и фактическое runtime проявление неизвестны; детерминированный нулевой результат не доказан. Caller здесь support, не дополнительная REVIEW.

## 0x1000f390 — Studio_SequenceDurationByIndex

Вычисляет длительность последовательности по числу кадров и её fps, возвращая float через ST0.

cdecl(model,int sequence), plain RET/ST0. NULL model либо signed sequence>=numseq →FLDZ. Отрицательный sequence проходит. Для record=model+seqindex+sequence*b0 читает signed numframes; при <=1 возвращает0, иначе делает int decrement, CVTDQ2PS и DIVSS: `duration=float(float(numframes-1)/fps)`, затем store float и FLD. Не умножает на entity framerate и не читает animtime, frame или loops.

FPS0, отрицательный fps, NaN и infinity не проверяются; при обычных masked FP exceptions возможны infinity, отрицательная длительность и NaN. Outputs в model/entity не пишет, переписывает только собственный stack argument slot. Возврат0 объединяет NULL/недопустимый верхний индекс/короткую sequence и возможный арифметический ноль.

## 0x1000f3e0 — Studio_SequenceDurationByLabel

Ищет последовательность по label и вычисляет ту же длительность через ST0.

cdecl(model,const char* label), plain RET/ST0. NULL model сразу FLDZ, без вызова lookup. Иначе1000f530(model,label); signed result<=-1 даёт0. При неотрицательном результате напрямую читает sequence record без повторной проверки result<numseq; затем при numframes>1 вычисляет float(numframes-1)/fps ровно как1000f390, иначе0. Все fps и model span границы остаются открытыми.

Lookup1000f530 возвращает первый label, для которого comparator1017bcbb дал0. Сохранённая Ghidra идентификация связывает comparator с CRT _stricmp; полное поведение CRT/locale/некорректных строк отдельно не восстановлено, поэтому не вводится новая гарантия строковой нормализации. Caller1002c100 кладёт label на stack до GetModelPtr, удаляет лишь edict argument и добавляет возвращённый model для этой функции: «дополнительный аргумент GetModelPtr» в C принадлежит следующему вызову. Caller округляет ST0 в float и передаёт результат virtual+8; его scheduler policy вне этой карточки.

## 0x1000f430 — Studio_IsSoundPrecacheEvent

Распознаёт ровно два event ID, которым producer предварительно загружает sound resource.

cdecl(int eventID), plain RET/EAX. Возвращает1 только для 1004 (0x3ec) или1008 (0x3f0); для всех остальных, включая отрицательные,0. Никаких памяти, callback или строк не читает. Назначение установлено caller1000f590, который передаёт options этих events в sound precache. Это не общий predicate всех звуковых событий и не handler фактического воспроизведения.

## 0x1000f590 — Studio_PrecacheSequenceSoundEvents

Находит sequence по label и предварительно загружает options-строки events1004/1008 как звуки.

cdecl(model,const char* sequenceLabel), plain RET, defined success result отсутствует. Сначала вызывает1000f530(model,label), затем требует result>=0, model!=NULL и signed result<model.numseq. NULL model безопасно отсекается после lookup (его native NULL-ветка возвращает0). Sequence record=model+seqindex+result*b0; при signed eventCount<=0 ничего не загружает. В цикле stride4c сначала signed ID<5000, затем1000f430(ID)!=0; фактически остаются только1004/1008. Никакого frame window или loop flag здесь нет: обходит все выбранные records.

Options=model+eventindex+i*4c+c. Сканирует строку до NUL без ограничения длиной64 или model bounds. Если пустая, вызывает AlertMessage(4,format,ID,model+8,sequenceLabel,options), но **продолжает** обработку этого же пустого имени. Далее engine AllocString(options) → string offset; читает globals.stringBase+98, складывает offset и base, вызывает10116a30(pointer), который tail-jumps engine PrecacheSound. Возвращаемый sound index игнорируется. Это precache, не PlaySFX и не запуск звука.

В теле нет собственного кэша, dedup, нормализации пути, префикса sound/ или weapons/, проверки существования файла, освобождения строки или отмены при диагностике. Повторные/дублирующиеся events повторяют callbacks; фактическое dedup и lifetime pool принадлежат engine. Callback side effects могут менять данные, и eventCount перечитывается в конце каждой итерации; локальный sequence pointer сохраняется. Подтверждён caller100fa340: после выбора actor/model вызывает helper дважды с string_t из this+36c и+370, разрешёнными через global string base; все остальные действия этого caller не заявляются раскрытыми здесь.

## Closed scope and remaining work

Twelve primary entries have local branch and ABI contracts, including double/float arithmetic, native guard asymmetries, borrowed event options, and the no-output eye helper. Supporting wrappers and callers are retained for connections, not counted as new reviewed functions. This is not proof of complete model correctness or entity animation behavior.

Remaining dependencies: model loader/cache lifetime and validation; comparator1017bcbb native CRT body; actual virtual+11c handlers and which models emit each ID; engine AllocString/PrecacheSound allocation, dedup and failure policies; generation of sequence transition matrices; runtime provenance of the untouched eye-output stack. Missing checks in these readers do not establish that ordinary authored model inputs violate their preconditions. Existing pass04 wrappers need no semantic change; their previously open lower-body dependencies are now linked to this packet.
