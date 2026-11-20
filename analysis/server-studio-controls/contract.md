# Studio event dispatch and controls (original server)

Static original-server audit of14 saved entries. SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. No target execution, game port or resource modification. `capture.py` reproduces21 bounded ASM ranges, raw constants, one native RTTI/vtable chain and ENTVARS/CBaseAnimating field descriptors. `notes.json` provides search cards; immutable evidence is in `evidence.json`.

Адреса, смещения и битовые маски ниже записаны в hex; числа в формулах и размеры RET — decimal.

## Data layout and ownership

ENTVARS names and CBaseAnimating offsets are from original native save descriptors, not guessed SDK offsets. Model layout names are descriptive matches to the saved `external/hlsdk-portable/engine/studio.h`: header numbones+8c/boneindex+90, controllers count+94/base+98, sequences count+a4/base+a8, bodyparts count+cc/base+d0; sequence strideb0, controller stride18, bone stride70, bodypart stride4c. Original instructions independently confirm these numeric offsets/strides. This does not prove every model resource valid or all SDK extensions identical to the original engine. The helpers mostly trust the supplied pointers and indexes.

Engine binding: initializer100b4aa0 copies144 entries into10222f48. Verified slot74 GetModelPtr,61 AlertMessage,85 GetAttachment,77 GetBonePosition,90 RandomLong. Borrowed model memory is owned externally. CGenericMonster factory100b05e0/RTTI proves one concrete owner table with callback+11c=100b0670; different entities can override event handling.

## Function contracts

### 0x1000e5f0 Animating_DispatchEvents_FixedTenth

Вычисляет окно анимационных событий с фиксированным шагом0.1 и вызывает virtual11c.

ECX=this; RET4, но stack аргумент вообще не читается. Model=engine GetModelPtr(pev.pContainingEntity+20c). NULL model→AlertMessage(2,Gibbed monster is thinking!), выход без локальных state writes.

При model!=NULL: start=frame+(lastEventCheck-animtime)*FrameRate*framerate; end=frame+FrameRate*float32(0.1)*framerate, всё в указанной последовательности SSE float32. sequenceFinished=0, затем lastEventCheck=animtime+float32(0.1), затем sequenceFinished=1 если ordered end>=256 или end<=0. NaN end при masked invalid оставляет0. Поле pev.frame не меняется.

Повторяет1000f020(model,current pev,&stackEvent8,start,end,cursor), начиная cursor0; при nonzero вызывает this.virtual11c(&event), затем повторяет с возвращённым cursor. model/start/end фиксированы на проход, pev перечитывается после callback. event состоит из DWORD eventID и borrowed char*options внутри model; указатель stackEvent нельзя удерживать после callback.

Concrete CGenericMonster vtable101ce36c+11c=100b0670. Derived virtual handlers, изменение model/sequence из callback и lifetime borrowed pointers отдельно. По normal nonNULL выходу последний helper далEAX0; это не публичный bool success. Обработчик принимает неиспользуемый4-byte аргумент, Ghidra void(void) теряет ABI.

### 0x1000e730 Animating_ExtractSequenceBounds

Возвращает bounds последовательности через два Vector-указателя.

ECX=this, stack(sequence,outMins,outMaxs), RET12. GetModelPtr получает только pContainingEntity; заранее уложенные3 аргумента относятся к последующему1000eec0(model,sequence,outMins,outMaxs), а не engine callback. EAX результата сохраняется, Cvoid неверен.

Helper при NULL model возвращает0 без записей; иначе копирует seq+60/+64/+68→mins и+6c/+70/+74→maxs и возвращает1. seq=model+seqindex+sequence*b0. Bounds и output pointers не валидируются; это локальные model bounds, не world-space transform.

### 0x1000e760 Animating_FindTransition_OptionalDirection

Ищет переход между последовательностями с необязательным direction out-pointer.

ECX=this, stack(from,to,int*direction), RET12. После GetModelPtr nonNULL direction передаётся в1000ef20 как есть, EAX возвращается. При NULL direction использует собственный stack slot, изначально0, и возвращает result только если helper записал1; иначе EAX=-1.

Helper при NULL model или отсутствующих transition nodes возвращаетto, не обязательно пишетdirection. Поэтому wrapper с direction=NULL в этих случаях возвращает-1. Обратный transition direction=-1 также подавляетсяNULL-wrapper. Full transition matrix search остаётся в support1000ef20, входные sequence indexes и pointer lifetime не проверяютсяwrapper.

### 0x1000e7c0 Animating_GetAttachment_EngineBridge

Передаёт запрос pfnGetAttachment в engine с текущим edict.

ECX=this; stack(index,outOrigin,outAngles), RET12. Единственный engine call slot85: pfnGetAttachment(pev.pContainingEntity,index,outOrigin,outAngles), затем caller-cleanup16. Аргументы передаются без арифметики; собственных bounds/NULL guards и записейнет.

Имена engine slots подтверждены initializer100b4aa0 и сохранённым eiface.h. Сам engine implementation и world/local координаты его outputs не доказываются wrapper. Возвращаемое значение void поcallbackABI; случайный EAX не объявляется bool.

### 0x1000e850 Animating_GetBonePosition_EngineBridge

Передаёт запрос pfnGetBonePosition в engine с текущим edict.

ECX=this; stack(index,outOrigin,outAngles), RET12. Единственный engine call slot77: pfnGetBonePosition(pev.pContainingEntity,index,outOrigin,outAngles), затем caller-cleanup16. Аргументы передаются без арифметики; собственных bounds/NULL guards и записейнет.

Имена engine slots подтверждены initializer100b4aa0 и сохранённым eiface.h. Сам engine implementation и world/local координаты его outputs не доказываются wrapper. Возвращаемое значение void поcallbackABI; случайный EAX не объявляется bool.

### 0x1000e800 Animating_GetBodygroup

Возвращает выбранный submodel для bodygroup через native integer helper.

ECX=this, stack(group), RET4. Model=GetModelPtr(pev.pContainingEntity);1000f150(model,pev,group), EAX сохраняется. Дополнительные аргументы, показанные Ghidra наGetModelPtr, на деле заранее приготовлены helper.

Helper возвращает0 приNULL model, group>signed numbodyparts или nummodels<=1; иначе signed(body/base)%nummodels. group==count иnegative group не отсекаются, zero base и IDIV overflow не обработаны. Это вычислениеbodygroup, не функцияс always-defined range.

### 0x1000e880 Animating_GetControllerEndMagnitude

Возвращает модуль end-предела первого controller с данным index.

ECX=this, stack(index), RET4. GetModelPtr→1000f1d0(model,pev,index); helper ST0 сохраняется до caller. Ghidra void неверен, а param1 float уhelper — ошибочнаятипизация pointer: native TEST EDX,EDX.

Helper ищет первую запись controller.index==index сstride18 иsigned count. Если найдена: float end=record+c; при ordered end<0 умножаетна-1, затемFLD; иначеFLDкакесть. Этоabs(end), не abs(end-start) и не текущее значениеcontroller. NULL model/нетсовпадения→FLDZ. -0 сохраняется, NaNприmaskedinvalid неинвертируется; pev helperнечитает.

### 0x1000f450 Studio_LookupActivity_WeightedReservoir

Выбирает sequence поactivity и накопленному actweight.

cdecl(model,unusedPev,activity), RET; NULL model→EAX0. Иначе selected=-1,totalWeight=0; длякаждогоsigned i<numseq приseq.activity==activity: totalWeight+=actweight (32-bit ADD). ПриtotalWeight==0 выбратьi безRNG; иначе RandomLong(0,totalWeight-1)<signed actweight выбираетi. Неуспехоставляетпрежнийselected. Возвращаетselected, включая-1.

Seq strideb0, activity+28, actweight+2c, numseq model+a4, seqindex+a8. При всехнулевыхвесах выбираетсяпоследнийmatch; negative weights/overflow не отвергаются и могутдатьнеобычныеRNGbounds. Это weighted-reservoir только при обычныхnonnegative данных; RNGimplementation/order вengine отдельныйконтракт.

### 0x1000f4d0 Studio_LookupActivityHeaviest

Выбирает первое совпадение activity с наибольшим строго положительным весом.

cdecl(model,unusedPev,activity), RET/EAX. NULLmodel→0; иначе bestWeight=0,selected=-1, signedloop i<numseq. Приactivitymatch иsigned weight>bestWeight обновляетоба. Равныевеса сохраняютраннийsequence; нулевые/отрицательные никогда не выбираются. Ненулевойmodelбезpositive match→-1. Память/RNG не меняет.

### 0x1000f530 Studio_LookupSequenceLabel

Ищет первый sequence label через CRT _stricmp.

cdecl(model,label), RET/EAX. NULLmodel→0. Приnonnull signedloop i<numseq, label=model+seqindex+i*b0; CALL1017bcbb (Ghidra identified _stricmp) с(label,labelArg). Нулевойрезультат→i, иначеnext; исчерпание→-1.

Полная строкаlabel передаётсябез32-byte limit/NULLguard. Case-insensitive смысл следует из сохранённой CRT-идентификации; locale/invalid-parameter/нестандартныебайты ивсеветви CRT1017bcbb этимпакетомнеразобраны. No allocated strings, no state writes.

### 0x1000f7c0 Studio_SetBodygroup

Меняет packed pev.body для выбранной группы моделей.

cdecl(model,pev,group,value), RET, definedreturnнет. NULLmodel илиsigned group>numbodyparts→noop. Иначе groupRecord=model+bodypartindex+group*4c; nummodels=+40,base=+44. Если signed value>=nummodels→noop; иначе body += (value - ((body / base) % nummodels))*base сдвумяsigned IDIV и32-bit IMUL/ADD.

Нижнихпроверок group/value нет; group==count допускается. Не проверяетpev/base/nummodels перед обращением/делением, zero/overflow IDIV не обработаны. Не подменятьбезопаснымclamp: это изменит native guards.

### 0x1000f820 Studio_SetBoneBasePositions

Копирует набор Vector3 в базовые value[0..2] костей model buffer.

cdecl(model,Vector3*positions,int count), RET/void. NULLmodel→engine AlertMessage(4,Bad header in SetBones!),return. Иначе limit=min_signed(count,model.numbones); приlimit<=0неткопирования.

Дляi<limit записывает 3 raw DWORD изpositions+i*12 вmodel+boneindex+i*70+40/+44/+48. Это записьвmodel bone.value[0..2], не вpev и не вготовыематрицы. Остальныеvalue[3..5],scale иposeнеизменяет. Отдельнойпроверкиsource bounds, model span, magic/version нет; совместноеиспользованиеmodel/lifetime engineостаётсявнеhelper.

### 0x1000f670 Studio_SetSequenceBlending

Кодирует значение sequence blend в byte pev.blending и возвращает квантованное значение.

cdecl(model,pev,blendIndex,float value), RET/ST0. NULLmodel→исходныйvalue,безwrites. Иначе seq=model+seqindex+pev.sequence*b0; type=seq+80+index*4. type==0→исходныйvalue. Нетграниц sequence/index; start/end=seq+88/+90+index*4.

Приtype&38: еслиordered start>end инвертируетзнакvalue XOR. Еслиdouble(start)+359 >= end (ordered), mid=double(float32(start+end))*0.5; ordered value>mid+180→float32(value-360), затем ordered value<mid-180→float32(value+360). Выполняетсянеболееодногокаждогосдвига. Широкийдиапазонend>start+359 иunordered сравнениепропускаютmidкоррекцию; полноценногомодуло здесьнет.

q=CVTTSS2SI(float32(float32(value-start)*255.0f)/float32(end-start)); затем signed clamp q в0..255 и записьодногоbyte. NaN/overflow приmasked invalid дают INT_MIN, затем0; немаскированныеFPexceptions отдельно. Возврат ST0 получаетсяFLD после float32 округления double(float32(end-start))*(double(q)*native_double(1/255))+double(start). Порядок SSE float/double нельзя бездоказательства заменить единымfloat выражением. Destination=pev+144+blendIndex. Нетзащитыend==start; границы/range/header остаютсяпредусловиями.

### 0x1000f880 Studio_SetBoneController

Кодирует значение первого совпавшего bone controller в pev.controller.

cdecl(model,pev,controllerIndex,float value), RET/ST0. NULLmodel илинетrecord сindex+14==controllerIndex→исходныйvalue безwrites. Recordstride18, count=model+94,base=model+98; поиск signed. Приtype&38 иordered start>end XORинверсиязнака.

Приordered double(start)+359>=end используетсятажеоднопроходнаяmidкоррекция что1000f670. Приend>start+359 ИЛИ unordered идётwideветка: ordered value>360→float32(double(value)-double(trunc_i32(double(value)/360))*360); иначеordered value<0→float32(double(trunc_i32(1-double(value)/360))*360+double(value)). Прочиеvalue оставляются. Поэтому360 остаётся360, -360 становится360,450→90,-450→270 приобычныхfinite данных; это неуниверсальный fmod.

q=CVTTSS2SI(float32(float32(value-start)*255.0f)/float32(end-start)); затем signed clamp q в0..255 и записьодногоbyte. NaN/overflow приmasked invalid дают INT_MIN, затем0; немаскированныеFPexceptions отдельно. Возврат ST0 получаетсяFLD после float32 округления double(float32(end-start))*(double(q)*native_double(1/255))+double(start). Порядок SSE float/double нельзя бездоказательства заменить единымfloat выражением. Destination=pev+140+controllerIndex; записьиспользуетисходныйcontrollerIndex, а непорядковыйномер найденнойrecord. Индекснеограничен0..3/4 инулевойrangeнеотсекается; native type-bit8000 отдельнонепроверяется.

## Remaining dependencies and boundaries

The lower helpers retained here as support now have independent REVIEW in [studio-events](../server-studio-events/contract.md): frame advance, event enumeration, transition matrix, bounds/body queries and sound precache. Next work: custom virtual11c handlers, external engine attachment/bone/model lifetime and RNG, CRT comparison locale/error paths. Runtime model validity and exceptional CPU states remain untested. Higher-level activity/reset wrappers are covered separately in server-animation-state and server-monster-state.
