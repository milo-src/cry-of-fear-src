# CPhoneCall: ChangeSubtitle и EndCall

Pass19, два новых REVIEW: `1005fc20` и `1005ff90`, исходный `hl.dll` SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Полные saved C и native ASM прочитаны; target не исполнялся. Остальные тела — supporting evidence, не новые карточки. Начальный snapshot1876 reviewed/6779 pending.

`E` — CPhoneCall private pointer в ECX, `P` — полученный player private pointer, `W` — mobile private pointer. Смещения, адреса, маски и номера animation ниже hexadecimal; counts и float values decimal. Оба primary имеют native plain RET без stack parameters, соответствуя экспортам `?ChangeSubtitle@CPhoneCall@@QAEXXZ` ordinal52 и `?EndCall@CPhoneCall@@QAEXXZ` ordinal102. Возврат не является bool status; остаточный EAX не нормализуется.

## Владельцы и binding

Factory1005fb60 устанавливает CPhoneCall vptr101b5a20 при новой allocation204h; существующий private object возвращает без RTTI/type check. Microsoft COL/type descriptor и export names закреплены raw PE. Native BASE descriptor по+78 — think callback. Здесь запись1005fc20/1005ff90 выполняется в поле callback, а не в vtable slot. Factory CMobile10052e30 устанавливает vptr101b26c8 при новой allocation208h; CSubtitle1005fbc0 —101b5900/e0h; player100125e0 —101a4da8/281ch. Все эти helpers сохраняют уже существующий private pointer без проверки класса; при провале allocation существует native запись по адресу4, а не безопасный NULL return. NULL после caller check нельзя считать общей защитой от таких failure paths.

Для доказанного CPhoneCall vtable +08→1000e1f0, далее +04→10017110(delay,0). Обычная ветвь scheduler без parent/children и с очищенным pev.flags20 пишет nextthink+104 и mirrors+58/+5c как float32(base+delay); base=pev.ltime для movetype7, иначе global time. Иная ветвь пишет+58 и вызывает parent/scheduler helpers. Поэтому ниже «schedule(delay)» означает этот вызов, а не гарантию wall-clock срабатывания. Negative/NaN delay здесь не исправляется.

Для CMobile +198→1011f5d0: три stack arguments `(sequence,1,0)`, RET0c, хотя C показывает один. Реальный helper использует первый: через W.owner+160 пишет owner+418 и owner.pev.weaponanim+21c, шлёт destination1/message0x23 с BYTE sequence и BYTE W.pev.body+114. Два остальных stack DWORD игнорирует. Recipient этого сообщения — W.owner, а не обязательно локально сохранённый P. В Phone callbacks нет проверки согласованности этих указателей.

Player vtable101a4da8: +d0→100135b0 возвращает1; +d4→100135a0 возвращает1; +bc→10013560 требует deadflag+174==0 и ordered health+164>0. Иные реальные vptr могут задавать иные predicates; caller не делает dynamic_cast.

## 0x1005fc20 — CPhoneCall_ChangeSubtitle

ECX=E, без stack arguments, plain RET. Вначале100177a0(&E+1f8) разрешает m_hPhoneUser; возвращённый private pointer немедленно разыменовывается ради virtual+d0(), без NULL guard. При нуле callback ранний выход. Затем handle разрешается ещё раз, returned.pev передаётся100125e0; только полученный P проверяется на NULL. Изменение handle внутри callback не защищено повторным bool/lifetime gate.

Требуется P.activeItem+252c!=NULL и exact case-sensitive classname "weapon_mobile". Имя читается из edict activeItem.pev.pContainingEntity+20c через embedded entvars edict+80 и global string pool; при NULL edict computed pointer0 всё равно разыменовывается. Полный EAX P.virtual+bc() проверяется после имени. При нулевом alive gate: получить private через10017790(E+1f8), вызвать10119810(recipient," ",2,0), затем заново разрешить handle и EmitSound100fc9f0 на его edict с channel0,"common/null.wav",volume1.0,attenuation float32 0.8,flags0,pitch100, после чего RET. Ни EndCall, ни очистка think/phone flags на этой ветке не выполняются.

Dead-path10119810 — native ProFont, не TextMsg: при nonNULL recipient и ненулевом recipient.virtual+d4 отправляет destination8, BYTE2, STRING из literal101b5fb0. Literal содержит один ASCII пробел и NUL, не пустую строку; payload3bytes. Три аргумента text/style/broadcast были PUSH до10017790, поэтому они ошибочно попали к getter в псевдокоде. Getter аргументов не потребляет; весь ClientPrint call — cdecl4args.

При ненулевом alive gate activeItem читается заново, его pev подаётся10052e30; W==NULL ведёт к выходу. Считываются BYTE E+200 m_bAnswered и DWORD index=E+1f4; index сохраняется в local oldIndex. Если answered==0, сначала BYTE становится1, затем schedule(E.delay[index] по+16c), после callback устанавливается E.think+78=1005fc20. Нижней/верхней границы index перед этой адресацией нет.

Первый answered-pass останавливает звук channel0: E.pev.iuser1+248==0 выбирает "phone/phone_ringtone.wav", nonzero — "phone/phone_ringing.wav". Stop helper1001e990 фактически вызывает100fc9f0(edict,0,path,volume0,attenuation0,flags20h,pitch100). После него отдельно играет "phone/tone_send.wav" с1.0/0.8/flags0/pitch100. Если string_t E.audio+1f0 ненулевой, заново разрешает phoneUser и играет pool+audio с теми же параметрами. Путь не нормализуется и не копируется; все три действия идут именно в таком порядке.

Затем W+1d8 получает float32(double(global.time)+double1.1 из101b5ff0), а не integer, как выглядит C cast. По P+1e98==0 выбирается animation0c, иначе0d; обе ветви вызывают W.virtual+198(sequence,1,0). После вызова BYTE P+1ee8=1 и возврат. В этом первом pass субтитр не выбирается, index не увеличивается, прочие player phone fields не сбрасываются.

Если answered уже ненулевой, выполняется FindByClass10118460(NULL,"subtitle_main"), затем при успехе FindByClass(NULL,"player"). Это первый подходящий player из поиска, не обязательно phoneUser. Helper ищет classname через engine и возвращает найденный private; отсутствие одной из целей пропускает только subtitle delivery. После обоих поисков заново читается текущий E.index; signed DWORD E.numbers[index] по+e8 равный0 выдаёт AlertMessage1 "SUBTITLE CHANGE: Could not change number!\n". Ненулевой переводится CVTDQ2PS в float32, пишется по+dc результата1005fbc0(main.pev) без NULL guard; затем main.virtual+e8(foundPlayer,foundPlayer,3,float0). Native CSubtitle vtable101b5900 связывает этот slot с10077530; его language/file/parser/delivery — отдельная граница, а не прямой message body данной функции.

После subtitle callback, поиска или warning используется сохранённый oldIndex, не reread currentIndex: signed oldIndex>=32 сразу выходит; отрицательные значения допускаются. Если numbers[oldIndex+1]!=0 и ordered delay[oldIndex+1]>0, увеличивает ТЕКУЩИЙ E.index, перечитывает его и schedule(delay[currentIndex]). Таким образом reentrant callback мог изменить currentIndex независимо от oldIndex; increment не ограничивается диапазоном33.

Далее независимо от предыдущей ветви заново читает delay[oldIndex+1], расширяет float32 в double и проверяет ordered value<double0.1 (literal101a1df8). При выполнении записывает think=1005ff90 и schedule(float1.0). Поэтому положительная задержка между0 и0.1 может сначала increment/schedule, затем быть заменена EndCall; NaN не проходит ни >0, ни <0.1 при маскированных FP exceptions. При отсутствии следующего номера с delay>=0.1 нет fallback EndCall. При oldIndex32 не проверяется окончание даже при нулевом следующем элементе; вне диапазона нет общей защиты.

Звуковые параметры1.0/0.8 — вход в wrapper, не обещание backend gain:100fc9f0 при global byte10226489!=0 и path-pointer!=101a8e8c умножает volume на double0.25 с округлением доfloat32. Literal phone/null paths идут напрямую engine EmitSound, optional audio, начинающееся с!, может пройти sentence lookup/subtitle dispatch. Полный supporting wrapper описан в server-sentence-lifecycle. Ошибки engine/звук/показ субтитров runtime не проверялись.

## 0x1005ff90 — CPhoneCall_EndCall

ECX=E, без stack arguments, plain RET; результатvoid, не success bool. Как ChangeSubtitle, сначала resolves E.m_hPhoneUser+1f8 и без NULL guard вызывает private.virtual+d0; нулевой результат даёт выход. Затем повторный getter→pev→100125e0 и только тогда NULL guard для P. Здесь вообще нет проверки P.virtual+bc/alive.

При nonNULL P native сначала загружает activeItem+252c, затем безусловно пишет DWORD P+1ea0=0 и только после этого проверяет ранее загруженный item. При отсутствии active item, несовпадении точного classname"weapon_mobile" или последующем failure эта запись уже остаётся. Сравнение имени повторяет edict+80/pool путь ChangeSubtitle с тем же незащищённым NULL edict.

Для mobile classname вызывает10052e30(item.pev), сохраняет returned W, затем проверяет E.pev.target+1cc. Если string_t!=0, вызывает FireTargets10101ff0(pool+target,E,E,3,float0). Этот вызов расположен ДО проверки W!=NULL; активация внешних целей может изменить/удалить E,P,W. Native продолжает работу с сохранёнными pointers без повторного разрешения handle или alive check. FireTargets может интерпретировать +/− prefix и выражения цели; данная функция передаёт numeric3/value0, не гарантирует неизменный UseType после нижнего parser.

Только при W!=NULL записывает W+1d8=float32(double(now)+1.1). Выбирает animation0f при P+1e98==0, иначе10; вызывает W.virtual+198(sequence,1,0). После callback заново читает global time и пишет P+308=float32(double(now)+1.1), затем BYTE P+1ee8=0. Два deadline могут различаться, если время изменено callback; нет единого cached now для обеих записей.

После таймеров играет "phone/tone_send.wav" на P.pev.edict с channel0,volume1.0,attenuationfloat0.8,flags0,pitch100 через100fc9f0. Затем заново читает P.pev, очищает маску0x8 (бит3) в DWORD P+2500, пишет DWORD P+1eb4=0 и float-bits0 в pev.fuser3+260. Последней записью обнуляет E.think+78. Нет прямого удаления E, сброса answered+200/currentIndex+1f4/phoneUser+1f8/playerHandle+e0, очистки ProFont или явного StopSound optional voice.

При item mismatch или W==NULL хвост с animation/timers/phone flags/think-clear пропускается; W==NULL всё же не отменяет уже возможный FireTargets. Поэтому название EndCall не означает безусловное освобождение всех ресурсов. Ранние/внешние ошибки не откатывают уже выполненные записи. Семантические имена P+1ea0/+1e98/+1ee8/+1eb4 здесь не придуманы: это raw native fields, producer/lifecycle разобраны отдельно.

## Native phone fields, descriptor10212a80

Исходный порядок семи descriptors сохранён. Count33 у двух массивов означает допустимые slots0..32, но не добавляет отсутствующие runtime bounds checks. BYTE writer answered не позволяет исправлять native descriptor type12/count1 по догадке. Type17 audio — raw native descriptor tag; его consumer получает string_t из пула.

| Offset | Native name | Type | Count | Flags |
|---|---|---|---|---|
| 0xe8 | m_iSubtitleNumber | 10 | 33 | 0 |
| 0x16c | m_fSubtitleNumberNext | 0 | 33 | 0 |
| 0x1f0 | m_sAudioFile | 17 | 1 | 0 |
| 0x1f4 | m_iCurrentSubtitle | 10 | 1 | 0 |
| 0x1f8 | m_hPhoneUser | 4 | 1 | 0 |
| 0x200 | m_bAnswered | 12 | 1 | 0 |
| 0xe0 | m_pPlayer | 4 | 1 | 0 |

## Связанные контракты и открытые границы

Начальное Use/Wait и Save/Restore этого entity — [phone-call lifecycle](../server-phone-call-lifecycle/contract.md), map key producer — отдельный PhoneKeyValue10060140. Более общий subtitle controller — [subtitle-multiple lifecycle](../server-subtitle-multiple-lifecycle/contract.md). Native ProFont registration/payload — [client effects](../server-client-effects/contract.md), EmitSound/sentence branch — [sentence lifecycle](../server-sentence-lifecycle/contract.md). Числа channel0, flags20h и message0x23 сохранены, а не заменены предположениями о клиентском UI.

Read-only capture хранит оригинальные export table entries, factory vptr/RTTI, выборочные native slots, ENTVARS/BASE/MONSTER/PHONE descriptors, полный код первичных функций и critical supports, raw literals. Exact preferred-base function-address scan ограничен raw .rdata/.data и не равен полному call graph. Binding factory vtable не гарантирует, что возвращённый существующий private object имел тот же класс; это явная граница без dynamic type check.

Полный language/file parsing10077530, валидность и lifetime найденных объектов после callbacks, сторонние writers player fields и реальная доставка/проигрывание сообщений остаются отдельными задачами. Не заявляется исправление обнаруженных native quirks, отсутствие ошибок в игре или runtime parity. Два primary разобраны полностью, dependencies не повышены до новых REVIEW.

Воспроизведение: `python analysis/server-phone-call-callbacks/capture.py`, затем `python analysis/server-phone-call-callbacks/verify.py`. Только чтение PE и статический objdump; ignored полного disassembly cache не требуется. Verify использует независимый PE mapper, сверяет original SHA, source/support pins, все instruction bytes/raw tables, ABI/FP/callback-order anchors и два notes.

## Продолжение разбора: pass20

Продолжение pass20: [subtitle_main lifecycle](../server-subtitle-main-lifecycle/contract.md) закрывает factory/export, четыре KeyValue branches, Spawn и Save/Restore CurrentLine. [Playback10077530](../server-subtitle-playback/contract.md) закрывает локальный выбор языка/чтение строк/маркер/ProFont fanout; эти primary больше не pending. [Weapon animation](../server-weapon-animation/contract.md) раскрывает sender ABI и ограниченную группу mobile callbacks; общий frame handler и downstream producers остаются отдельно. Сохранены конкретные residual boundaries в новых контрактах, engine/CRT/runtime не объявлены автоматически закрытыми.

## Продолжение разбора: pass21

Pass21: [mobile lifecycle](../server-mobile-lifecycle/contract.md), [actions](../server-mobile-actions/contract.md), [frame/SMS/camera guard](../server-mobile-frame/contract.md), [punch resolution](../server-punch-resolution/contract.md). Эти concrete primary закрыты; новый разбор не переносится в игру. Числовой skill damage, прочие player state producers и engine/CRT/derived callbacks остаются отдельными границами.
