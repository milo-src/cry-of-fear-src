# CPhoneCall: lifecycle и ожидание звонка

Статический реверс оригинального hl.dll, без исполнения. Десять primary, включая sibling CSubtitle slot40. Смещения и маски hexadecimal, counts/seconds decimal. Все class bindings и имена таблиц из native PE; proposed helper names не являются восстановленным исходным текстом.

Цепь: cof_phonecall→factory→Spawn/Precache/Use→WaitForCall→ChangeSubtitle→EndCall. Конкретные callbacks: [phone callbacks](../server-phone-call-callbacks/contract.md), parser: [phone KeyValue](../server-phone-call-keyvalue/contract.md). Открыты показ текста/локализация subtitle_main, downstream player/mobile fields, полная engine/resource lifetime и runtime parity; этот пакет сам по себе не восстанавливает всю телефонную систему.

## 0x1005fb60 — PhoneCall_PrivateDataFactory

Получает или создаёт private data телефонного события с native vtable CPhoneCall.

Cdecl(entvars*), plain RET, полный EAX pointer. При NULL entvars вызывает engine CreateEntity(slot21) и при nonNULL edict берёт edict+80. Отсутствует early return при failure: далее разыменовывает entvars+20c. Если pContainingEntity!=NULL и edict.private+7c!=NULL, возвращает существующий private pointer, без проверки его класса/размера и без переприсваивания полей.

Иначе PvAllocEntPrivateData(slot63,edict,204h=516bytes). NonNULL allocation получает vptr101b5a20 и pev+4=entvars; остальные поля собственное тело не обнуляет. При NULL allocation XOR EAX,EAX и MOV[EAX+4],ESI записывает по адресу4: это исходная failure-ветка, не безопасный возврат. Export cof_phonecall10061220 — прямой JMP сюда.

Factory vtable101b5a20 связывает +2c→10060f30 Spawn,+30→10060e50 Precache,+34→10060140 KeyValue,+38→10060ed0 Save,+3c→10060e90 Restore,+40→10060e30,+e8→10060fa0 Use. Scheduler+8→1000e1f0 вызывает +4(delay,0), а +4→10017110. Это конкретные native связи, не предполагаемый порядок SDK.

## 0x10060e30 — CPhoneCall_DelegateLinkedCallback40ReturnZero

Вызывает slot40 связанного объекта, затем безусловно возвращает ноль.

Thiscall без stack args, plain RET. Concrete CPhoneCall factory vtable101b5a20, slot40→10060e30. ECX=this+14 pointer; еслиNULL, вызов пропускается, иначе ECX=linkedObject и indirectCALL linked.vtable+40 без stack args. После любого обычного callback возврата XOR EAX,EAX даёт полный0. Исходное имя операции, тип object+14 и concrete callback связанного объекта не установлены; нельзя по этому телу объявлять удаление или reset. Два соседних тела одинаковы по действиям, но имеют отдельные адреса и class bindings.

## 0x10060e40 — CSubtitle_DelegateLinkedCallback40ReturnZero

Вызывает slot40 связанного объекта, затем безусловно возвращает ноль.

Thiscall без stack args, plain RET. Concrete CSubtitle factory vtable101b5900, slot40→10060e40. ECX=this+14 pointer; еслиNULL, вызов пропускается, иначе ECX=linkedObject и indirectCALL linked.vtable+40 без stack args. После любого обычного callback возврата XOR EAX,EAX даёт полный0. Исходное имя операции, тип object+14 и concrete callback связанного объекта не установлены; нельзя по этому телу объявлять удаление или reset. Два соседних тела одинаковы по действиям, но имеют отдельные адреса и class bindings.

## 0x10060e50 — PhoneCall_PrecacheConfiguredAudioAndRinging

Кэширует выбранный audiofile и условно звонок телефона.

Thiscall без stack args, plain RET; vtable+30. При DWORD this.m_sAudioFile+1f0!=0 передаёт globals.pStringBase+offset в10116a30. Тот native tailJMP engine PrecacheSound(slot1,10222f4c), сохраняет cdecl char*argument. String_t0 пропускает вызов; ненулевой offset на пустую строку не фильтруется, return resource index не сохраняется.

После первого возможного callback заново читает pev и проверяет DWORD pev.iuser1+248!=0: при любом nonzero передаёт phone/phone_ringing.wav в тот же helper. Это не snapshot флага до первого callback. phone/phone_ringtone.wav собственное тело не precache-ит; наличие precache у других owners этим не исключается. Нет проверки ресурса, повторов/rollback или общего status return.

## 0x10060e90 — PhoneCall_RestoreSevenFields

Восстанавливает семь полей телефонного события после базового entity restore.

Thiscall(this,Reader*), RET4; base10017f30(this,Reader) fullEAX0→немедленно return0. Иначе10117010(ECX=Reader,"CPhoneCall",this,10212a80,count7), результат fullEAX передаётся без bool-normalization. Concrete vtable+3c. Это ReadFields, несмотря на void псевдокод; lower entity side effects возможны и при отказе.

Native descriptors stride16/count/flags: m_iSubtitleNumber type10 offsete8 count33; m_fSubtitleNumberNext type0 offset16c count33; m_sAudioFile type17 offset1f0 count1; m_iCurrentSubtitle type10 offset1f4 count1; m_hPhoneUser type4 offset1f8 count1; m_bAnswered type12 offset200 count1; m_pPlayer type4 offsete0 count1. Все flags0. Здесь массивы33DWORD смежны и не перекрывают друг друга (e8..16b и16c..1ef), в отличие от CSubtitleMultiple table. Тип12 сохраняет DWORD, хотя Use пишет лишь BYTE+200.

Handles+e0/+1f8 — две разные пары edict/serial, а не обычные raw player pointers; wire generic reader remaps entity references. type17 — engine sound string_t с wire string. Нет собственного post-restore reset, precache или назначения Think: базовый слой/serialized fields обрабатываются отдельно. Latch BYTE+dc отсутствует в этих7 descriptors; это не доказательство отсутствия иного восстановления.

## 0x10060ed0 — PhoneCall_SaveSevenFields

Сохраняет семь полей с отдельным диагностическим ownerLabel.

Thiscall(this,Writer*), RET4; base10018000(this,Writer) fullEAX0→return0. Иначе заново читает pev и string base: ownerLabel=pStringBase+pev.targetname(+1d0) при ненулевом string_t, иначе pStringBase+pev.classname(+0). Затем1011adc0(ECX=Writer,ownerLabel,"CPhoneCall",this,10212a80,7). Полный EAX writer передаётся, отдельный успех не вычисляется. Concrete slot38; ownerLabel не заменяет blockName.

Пишет ту же таблицу7 полей в native порядке: два массива, audio string, current index, phone-user handle, answered DWORD, player handle. Generic serializer не равен memcpy: handles и sound string remap; текущий wrapper не проверяет indices, audio validity или byte-versus-DWORD answered consistency и не откатывает уже записанные lower blocks. Полная wire семантика generic serializer разобрана отдельно.

## 0x10060f30 — PhoneCall_SpawnInvisibleAndResetRingLatch

Размещает невидимую сущность звонка, очищает ring latch и задаёт начальный index только при нуле.

Thiscall без stack args, plain RET; vtable+2c. Сначала own virtual30() (factory binding10060e50), затем cdecl10119fe0(this,&pev.origin+8)→engine SetOrigin(slot28). Helper проверяет own virtuald0; factory binding1000db80 возвращает0, поэтому player-cache+618 branch для этой vtable не исполняется. pev после callbacks перечитывается.

Пишет pev.solid+10c=0 и pev.effects+118=80h прямым присваиванием, не OR. Копирует12bytes mutable global10222f34..3f в pev.v_angle+74..7c. Global расположен в virtual zero-fill tail .data и не имеет raw file bytes; начальный loader zero-fill не доказывает значение после runtime initialization.

Всегда очищает только BYTE this+dc — latch, который WaitForCall устанавливает перед первым звонком. Если DWORD currentSubtitle+1f4==0, ставит1; nonzero, включая отрицательный, сохраняет. m_bAnswered+200, оба EHANDLE, массивы, callback+78 и nextthink этим телом не очищаются. Не смешивать latch+dc с saved answered+200.

## 0x10060fa0 — PhoneCall_UseSelectPlayerAndWait

При player activator сохраняет handle и запускает ожидание использования телефона.

Thiscall Use с четырьмя stack DWORD(activator,caller,useType,value), RET10h. Использует только первый activator. NULL→выход; иначе activator.virtuald0()!=0 требуется до дальнейших действий. Затем cdecl100125e0(activator.pev) получает/создаёт CBasePlayer private data (factory policy, не dynamic_cast). До проверки возвращённого private!=NULL очищает BYTE this.m_bAnswered+200; остальные3bytes DWORD поля сохраняются.

При nonNULL player вызывает10017740(ECX=this+e0,player): setter m_pPlayer хранит edict и serial; не m_hPhoneUser+1f8. Потом own virtual8(float0.1 bits3dcccccd) и только ПОСЛЕ callback пишет this.think+78=10061000 WaitForCall. При failure guard не сбрасывает прежний think/handle. Caller/useType/value игнорируются: toggle/off здесь не различаются.

Не сбрасывает ring latch+dc или current index+1f4. Повторный Use может перезаписать m_pPlayer и scheduler, сохранив latch прежней попытки. Нет alive/weapon/connected/serial gate для входного private; следующий Wait выполняет собственные проверки. Native ignored arguments отсутствуют в C pseudo signature, но RET10h обязателен.

## 0x10061000 — CPhoneCall_WaitForCall

Ожидает телефон в инвентаре/руках игрока, запускает звонок и переводит Think к субтитрам.

Original PE export ?WaitForCall@CPhoneCall@@QAEXXZ ordinal361; thiscall без stack args, plain RET, не status bool. Сначала10017780(&this.m_pPlayer+e0) требует serial-valid edict. Затем100177a0(&e0)→private, без NULL guard вызывает virtuald0(). При nonzero повторно100177a0(&e0), без NULL guard читает pev и вызывает100125e0(pev). Getter может вернуть другой/NULL объект после callback; pin lifetime отсутствует. NULL factory-result даёт ранний выход без собственного reschedule.

После valid player P: если pev.flags+1a8 не содержит200h, сразу общий scheduler0.1. Если содержит200h, требует100e2380(P,"weapon_mobile")!=0. Helper перебирает шесть inventory lists P+2514 с next+164 и exact case-sensitive classname string из engine pool, возвращает fullEAX0/1; нет cycle/bounds guard. Отсутствие телефона приводит к раннему RET БЕЗ scheduler0.1, в отличие от отсутствия flags200. Начальные invalidhandle/virtuald0 gates также не reschedule-ят; старый callback+78 не очищают.

Если BYTE this+dc==0, сначала ставит1. При own pev.iuser1+248!=0 вызывает100fc9f0(P.edict,channel0,"phone/phone_ringing.wav",volume1.0,attenuation0.8,flags0,pitch100). После звука OR P+2500 с8, P+1eb4=1, P.pev.fuser3+260=5.0, own virtual8(3.0) и немедленный RET. Эта initial ringing ветвь не идёт в общий0.1, не проверяет active item и не назначает ChangeSubtitle. При iuser1==0 вместо неё phone/phone_ringtone.wav с теми же7args, затем P+1ea0=3 и продолжает. Sound result не проверяется, latch не откатывается.

Далее P+252c должен быть nonNULL active-item pointer. Его pev.pContainingEntity+20c преобразуется в edict+80 либоNULL и тут же разыменовывается для classname; отсутствие edict не имеет безопасного guard. Exact case-sensitive classname должен равняться weapon_mobile, затем P.virtualbc()!=0 и ordered globals.time>P+308 (COMISS/JBE) требуются для ответа. Равенство/NaN не проходят при маскированных FP exceptions. z/дистанция/facing/useType здесь не проверяются.

На принятии: OR P+2500 с8; P+1eb4=1; P.pev.fuser3=5.0; this.currentSubtitle+1f4=1; own virtual8(3.0); затем think+78=1005fc20 ChangeSubtitle, setter10017740(&this.m_hPhoneUser+1f8,P), затем свежее now и ADDSS float4.0→P+308. Это отдельный phone-user EHANDLE от исходного m_pPlayer. Callback/scheduler предшествует записи think, время перечитано после setter.

Критически: успешная answer-ветвь НЕ возвращается после scheduler3.0, а падает в общий10061200 own virtual8(0.1). Тот же общий0.1 вызывается при отсутствующем active item, другом classname, нулевом alive gate или непройденном time gate. Для factory scheduler1000e1f0→10017110 последнее0.1 переписывает назначение3.0; нельзя реконструировать это как обязательную трёхсекундную паузу перед ChangeSubtitle. Лишь initial ringing branch имеет отдельный ранний return после3.0.

Звуковой wrapper100fc9f0 получает исходные параметры, но может масштабировать volume по своему global mode перед engine EmitSound(slot29); поэтому этот контракт не утверждает реально слышимую громкость. Полные ChangeSubtitle/EndCall разобраны в server-phone-call-callbacks. Никакого собственного запроса кнопки ответа или m_bAnswered=1 в Wait нет; смысл downstream player fields2500/1eb4/1ea0 и клиентского интерфейса остаётся отдельной цепью.

## 0x10061220 — cof_phonecall_ExportFactoryThunk

Экспорт cof_phonecall перенаправляет создание сущности в native CPhoneCall factory.

PE export cof_phonecall ordinal479→10061220. Полное собственное тело5bytes JMP1005fb60, сохраняет cdecl entvars* и EAX factory result. Не добавляет guard/init/status; развёрнутый псевдокод показывает target factory, но диапазон export содержит только tail-jump.

## Native save fields10212a80

|Name|Type|Offset|Count|Flags|
|---|---:|---:|---:|---:|
|m_iSubtitleNumber|10|0xe8|33|0|
|m_fSubtitleNumberNext|0|0x16c|33|0|
|m_sAudioFile|17|0x1f0|1|0|
|m_iCurrentSubtitle|10|0x1f4|1|0|
|m_hPhoneUser|4|0x1f8|1|0|
|m_bAnswered|12|0x200|1|0|
|m_pPlayer|4|0xe0|1|0|

## Продолжение разбора: pass20

Продолжение pass20: [subtitle_main lifecycle](../server-subtitle-main-lifecycle/contract.md) закрывает factory/export, четыре KeyValue branches, Spawn и Save/Restore CurrentLine. [Playback10077530](../server-subtitle-playback/contract.md) закрывает локальный выбор языка/чтение строк/маркер/ProFont fanout; эти primary больше не pending. [Weapon animation](../server-weapon-animation/contract.md) раскрывает sender ABI и ограниченную группу mobile callbacks; общий frame handler и downstream producers остаются отдельно. Сохранены конкретные residual boundaries в новых контрактах, engine/CRT/runtime не объявлены автоматически закрытыми.
