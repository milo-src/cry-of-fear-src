# CMobile: factory, Spawn, Precache, ItemInfo и Deploy

Только статический разбор оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Семь новых карточек соответствуют семи полностью прочитанным сохранённым C и native телам. Поддерживающие функции не считаются новыми REVIEW. `capture.py` сохраняет диапазоны, команды, исходные байты, хэши, native таблицы и исходный pending-срез; `verify.py` независимо отображает PE-секции и проверяет их. Игра и DLL не исполнялись. Публичный baseline: `analysis/full-reverse-pass20-verification.json`, 1910 reviewed.

Смещения и адреса ниже шестнадцатеричные; обычные количества и номера последовательностей явно десятичные. W — private object, V = [W+4] — entvars, P = [W+160] — player, S = [globalvars+98] — string pool. Native ITEM `1021b188`, BASE `10211760` и ENTVARS `1021aae0` закрепляют используемые имена полей. SDK здесь служит сверкой структуры API/ItemInfo, а не доказательством поведения оригинала.

Native factory устанавливает vptr `101b26c8`; COL/type descriptor дают имя `.?AVCMobile@@`. Таблица сохранена до последнего слота +1d4 включительно: далее начинаются данные строк. Привязки: +8→1011f680, +2c→10053bc0, +30→10053880, +13c→10053150, +144→10052e90, +19c→1011f640, +1cc→10053bb0. Native ITEM называет +160 m_pPlayer, +168 m_iId, +108 m_iCurrCaps, +10c strwmodel, +110 script, +128 m_iSprintState. Два descriptor действительно повторяют имя m_iSprintIdleAnim1 и смещение +158 с разными type_id 10/15; исправлять это в предполагаемый +15c нельзя. Имя +15c здесь не установлено. Поля +16c/+170/+174 получают лишь локальные роли override view/world/script; их внешние producers в этот пакет не входят.

## 0x10052e30 — Mobile_GetOrCreatePrivate

ABI: cdecl, один stack argument V, полный указатель в EAX, обычный RET. При V==NULL вызывается engine CreateEntity (slot21); ненулевой edict преобразуется в V=edict+80. При NULL результате следующий доступ [V+20c] остаётся незащищённым. При ненулевом V читается D=[V+20c]; если D!=NULL и [D+7c]!=NULL, возвращается существующий private object без проверки его класса и без дополнительной инициализации.

Иначе PvAllocEntPrivateData (slot63) получает D и размер 0x208. При успехе factory пишет только [object]=101b26c8 и [object+4]=V и возвращает object; Spawn здесь не вызывается. При NULL аллокатора код делает XOR EAX,EAX, затем MOV [EAX+4],ESI: это не безопасный return NULL, а запись по адресу 4. Ghidra void/iRam4 не заменяет доказанный native pointer ABI. Ни нулевое заполнение выделения, ни lifetime/free/private ownership движка этими инструкциями не доказаны.

## 0x10053e50 — weapon_mobile_ExportThunk

PE экспорт weapon_mobile, ordinal826, name_index825, указывает на 10053e50. Полное native тело — пять байтов E9 DB EF FF FF, tail JMP 10052e30. Оно сохраняет исходный stack argument V и результат factory в EAX; отдельного конструктора, Spawn, проверки результата либо дополнительных аргументов нет. Это доказанная экспортная точка создания CMobile, но не свидетельство того, что конкретная карта её вызывает.

## 0x10053150 — Mobile_GetItemInfo

ABI: ECX=W, stack argument O — выходная структура, RET4; обычный результат полный EAX=1. NULL W/V/O не проверяются. Читается текущий V.classname (string_t), к нему прибавляется S; в O+18 сохраняется заимствованный указатель без копирования/выделения. Поэтому значение имени не обязано быть literal weapon_mobile, если classname изменён вне тела.

Остальные DWORD записи: O+00=1, +04=0, +08=0, +0c=-1, +10=0, +14=-1, +1c=-1, +20=2, +28=1. В порядке native сначала записывается +18, затем +08/+0c/+10/+14/+1c/+00/+04/+20/+28. По сопоставлению 44-байтового SDK ItemInfo это slot1/position0, две NULL ammo-name с max-ammo -1, max-clip -1, id2 и weight1. Это числовые значения, без предположения об интерфейсном размещении.

O+24, соответствующий SDK iFlags, вообще не записывается. Тело не обнуляет всю структуру; следовательно flags==0 нельзя вывести без конкретного caller/предыдущего состояния O. Ни чтение flags, ни их runtime значение этим пакетом не закрыты. Поле id2 согласуется с непосредственным W.m_iId=2 в Spawn.

## 0x10053880 — Mobile_Precache

ABI: ECX=W, без stack arguments, обычный RET; осмысленный boolean/код успеха не формируется. Сначала последовательно вызывается 10116990 для models/weapons/mobile/v_mobile.mdl, models/weapons/mobile/w_mobile.mdl и models/null.mdl. Затем 10116a30 получает weapons/mobile/mobile_switch.wav, weapons/mobile/mobile_sms.wav, weapons/mobile/punch_smack.wav и weapons/mobile/punch_swing.wav. Все строки взяты из native raw PE, не из списка установленных ресурсов.

Далее ненулевой W+16c передаётся 10116940 как string_t для дополнительной precache-модели; W+170 читается после этого вызова и при ненулевом значении обрабатывается так же. Static defaults не пропускаются из-за overrides. 10116940 прибавляет S к своему аргументу и tail-переходит в 10116990. Открытая внешняя мутация полей между callback вызовами не подменяется начальным snapshot.

После optional models безусловно идут 15 звуков, в таком порядке: phone/phone_ringing.wav; phone/phone_ringtone.wav; phone/tone_one.wav; phone/tone_two.wav; phone/tone_three.wav; phone/tone_four.wav; phone/tone_five.wav; phone/tone_six.wav; phone/tone_seven.wav; phone/tone_eight.wav; phone/tone_nine.wav; phone/tone_send.wav; weapons/rifle/rifle_insert.wav; phone/phone_vibrate.wav; weapons/mobile/low_battery_warn.wav. Итого три fixed models, 19 fixed sounds и до двух optional models. Прямой записи состояния W, отдельного cache-флага, dedup или проверки результатов в этом теле нет.

Поддерживающий 10116990 возвращает 0 для NULL/пустого имени после diagnostic, для первого символа '*', либо при NULL LoadFileForMe. Успешный LoadFileForMe(path,NULL) сразу сопровождается FreeFile, затем PrecacheModel(path) возвращает engine EAX. Это локальная проверка доступности model через движок, а не доказательство существования ресурсов в нашем сеансе. 10116a30 сохраняет исходный аргумент и tail JMP в engine PrecacheSound; Mobile_Precache результат игнорирует. Поведение внутреннего engine cache, missing-sound ошибок и исполнения callbacks остаётся за границей.

## 0x10053bc0 — Mobile_Spawn

ABI: ECX=W, без stack arguments, обычный RET, без сформированного boolean. Сначала V.classname получает 32-битную разность literal weapon_mobile (101ade50) и S; AllocString не вызывается. Затем virtual+30 вызывает concrete Precache. После возврата перечитывается W+170, W.m_iId=2; SetModel получает pool+W+170 при ненулевом override либо models/weapons/mobile/w_mobile.mdl при нуле. Проверки пустого override или результата SetModel нет.

Далее W+1e4=-1 и вызов 1011d150. Назначение +1e4 как clip corroborated native diagnostic 1011e520: аргумент [W+1e4] печатается literal "m_iclip:  %i\n" (101e6774). Это не означает наличие магазина у телефона: GetItemInfo отдельно сообщает max-clip -1. Поле m_pPlayer, battery и переключатели фонарика сам Spawn не инициализирует; нулевое значение из поведения allocator не предполагается.

1011d150 задаёт V.movetype=6, V.solid=2, вызывает SetOrigin с текущим origin, SetSize с нулевыми mins/maxs и назначает Use+80=10017ac0. Если W+14==NULL, capability base=2; иначе берётся parent.virtual+40()&2. В m_iCurrCaps записывается base|8. При V.iuser4(+254)==1 назначается Touch+7c=1011c7d0; в другой ветке старый Touch не очищается. Think+78=1011d220 и virtual+8(0.1f) планируют падение. Для CMobile +8→1011f680: float32(now+0.1f) записывается одинаково в W+58 и V.nextthink+104. Выполнение FallThink/DefaultUse/Touch здесь не утверждается.

После fall-init код сравнивает W.script+110 с нулём, затем пишет W+158=0x12 (18 decimal), W+15c=0x15 (21 decimal); MOV сохраняют flags сравнения. Если прежний script ненулевой, default loop пропускается. Иначе 10053c50 каждый раз перечитывает S, вычисляет literal inventoryitems/weapons/weapon_mobile.txt (101b28c4) минус S и пишет результат в script. JE назад зависит от ZF инструкции SUB, а не от повторного чтения script. При нулевой разности возможен неограниченный loop; это не вызов парсера/файлового ввода.

После loop ненулевой W+174 безусловно заменяет script, при нуле сохраняется прежний/default. В самом конце strwmodel+10c всегда получает default world literal минус S, даже когда фактический SetModel выше использовал W+170. Эти два значения нельзя сливать в один «выбранный worldmodel». EAX на выходе случаен для void-подобного ABI и не является успехом Spawn. Ни авторские имена model sequences 18/21, ни внешняя загрузка inventory script этим телом не установлены.

## 0x10052e90 — Mobile_Deploy

ABI: ECX=W, без stack arguments, обычный RET; возвращается полный EAX из 1011c1a0 без изменения. Сразу читаются P=[W+160] и DWORD[P+5cc], без предварительных NULL guards. Если V.body+114 отличается, body обновляется; затем V/P перечитываются. В обеих ветках, в том числе при равенстве, virtual+19c получает аргументы (P,current body). Concrete slot→1011f640: при P!=NULL MessageBegin(1,[102265f8],NULL,P.V.edict), WriteByte(body), MessageEnd; при NULL лишь RET8. Проверка sender не защищает более ранний dereference в Deploy.

После sender P перечитывается, W.m_iSprintState+128=0. DWORD[P+1e98]!=0 выбирает sequence7, иначе sequence2; семантическое имя этого поля не выдумывается. В обоих случаях 1011c1a0 вызывается с ECX=W и шестью stack arguments: (models/weapons/mobile/v_mobile.mdl, models/null.mdl, sequence, "crowbar", 0, 0). Helper удаляет 24 байта аргументов. Значения 2/7 — native номера, не доказанные названия анимаций. Body/message/sprint writes уже произошли до возможного отказа общего deploy, rollback нет.

Поддерживающий 1011c1a0 сначала проверяет virtual+140, затем допускает ранний return0 при NULL player; последний не делает caller безопасным. При успехе ненулевой W+16c заменяет default viewmodel на S+override. Выполняются общие custom-texture/ammo/audio/player callbacks, рассмотренные лишь как dependencies; см. analysis/graphics/custom-texture-server.md и сохранённое полное support тело. Затем P.V.viewmodel+bc получает effective viewmodel как pointer-minus-S, P.V.weaponmodel+c0 получает models/null.mdl аналогично. Строка "crowbar" копируется с NUL в P+2678. virtual+198 получает (sequence,0,0), SetModel(W.edict,effective viewmodel), затем 10120210(sequence); ordinary success возвращает EAX=1. Вся внешняя семантика callbacks и дальнейший frame lifecycle не заявляются раскрытыми.

В 10120210 sequence предварительно остаётся на стеке через GetModelPtr(W.edict); затем 1000f390(model,sequence) возвращает duration в ST0. Для ненулевого model, signed sequence<count и numframes>1 это float32(numframes-1)/fps; отрицательный sequence отдельно не проверен, fps==0/NaN также не отсечён. Иначе duration0. Полученная float32 duration прибавляется к now через x87, float32 результат идёт в P+308; поле перечитывается и копируется в W+1cc/+1d0. Для W+1d8 now читается заново. Это model-dependent deadline, не фиксированная длительность Deploy. Фактические model contents/внешнее течение времени не проверялись.

## 0x10053bb0 — Mobile_ConstantOneSlot1cc

Полное тело B8 01 00 00 00 C3 возвращает полный EAX=1, без чтений, записей и stack arguments; это не только AL. Factory CMobile привязывает его к slot+1cc. Имя нейтральное: сам constant не устанавливает смысл вроде «разрешено стрелять/бросать».

Ограниченная связь потребителя доказана в generic 1011d560: на 1011da74 вызывается virtual+1cc, EAX==0 пропускает tail; при nonzero отдельная проверка m_iId==0x11 (17 decimal) допускает virtual+1c4. CMobile id2 эту вторую проверку не проходит. Поэтому constant1 не доказывает «idle телефона вызывается всегда». Другие входы generic frame и собственные CMobile frame/actions исследуются отдельно; этот пакет не заявляет их полную runtime достижимость.

## Закрытые и открытые границы

Дополнение того же pass21: native PLAYER descriptors, независимо сохранённые и проверенные в [server-mobile-actions/evidence.json](../server-mobile-actions/evidence.json) и разобранные в [контракте действий](../server-mobile-actions/contract.md), закрывают имена двух полей Deploy: P+5cc = m_iPhoneMessage, P+1e98 = m_iMobileFlashMode; оба type_id10, count1. Адресная запись этих полей в локальном описании выше не означает, что их имена остаются неизвестными: здесь она сохранена для сопоставления инструкций, а подтверждённые имена берутся из этой native таблицы. Полный набор внешних writers/жизненный цикл полей данным дополнением не объявляется раскрытым. Новых primary функций или REVIEW это не добавляет.

Закрыты семь полных локальных тел, concrete factory/экспорт/RTTI/vtable, точные output stores, resource literal order, Deploy arguments и Spawn post-callback порядок. Полные support C/ASM закреплены для перепроверки, но новых REVIEW для них нет. Открыты model authored sequence names/длительности на конкретных ресурсах, allocator zeroing/lifetime, runtime значение ItemInfo.flags, producers overrides и player+5cc/+1e98, полная phone battery/light/actions/frame цепь и внутренние engine callbacks. Ресурсы не изменялись и не загружались игрой; статический precache call не является успешным runtime precache.

Уточнение общей границы после объединения pass21: слова о battery/light/actions/frame выше ограничивают именно этот lifecycle-пакет, а не оставляют уже разобранные соседние тела открытыми. Полные локальные контракты восстановления батареи, FlashOff, удара и меню находятся в [server-mobile-actions](../server-mobile-actions/contract.md), frame/SMS и соответствующего player callback — в [server-mobile-frame](../server-mobile-frame/contract.md). Вместе они закрывают перечисленные статические переходы; внешний engine/rendering, все остальные producers состояния, фактическая runtime достижимость и конкретные model contents по-прежнему не заявляются полностью установленными.

## Продолжение разбора: pass22

Pass22: [skill refresh](../server-skill-refresh/contract.md) закрывает native111 чтений/101 float slots, источник punch damage10226844 и ST0/format ABI. [Mobile player state](../server-mobile-player-state/contract.md) продолжает map-trigger/SMS/player chain; [monster attacks](../server-monster-attack-dispatch/contract.md) закрывает attack-condition dispatch и gates; [visibility policy](../server-visibility-policy/contract.md) уточняет concrete rules/player callbacks. Список residual boundaries см. в новых контрактах; установленный skill.cfg не объявляется runtime состоянием.
