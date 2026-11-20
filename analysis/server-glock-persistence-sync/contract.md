# Glock: создание, поля карты, сохранение и синхронизация HUD

Статический pass29 оригинального server `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Десять новых actual C-функций; baseline 2072 REVIEW / 6583 pending. Игра и DLL не исполнялись. Все первичные тела прочитаны целиком в C и native ASM; `capture.py` закрепляет исходные файлы, PE bytes, RTTI, таблицы и отсутствие прежнего REVIEW. `verify.py` независимо отображает PE и сверяет доказательства. Это локальные контракты, не утверждение о завершении всего оружия.

W — private object оружия, V=[W+4] — entvars, P=[W+160] — владелец, G=[10223188]. Смещения hex. В UpdateClientData параметр P передаётся явно и не сверяется с W160. Native RTTI связывает factory с CGlock vtable101b0524. Существенные slots:34=1011dd70,38=1011f260,3c=1011eaa0,140=1011c020,168=1011e510,170=1011fc80,190=1011e4a0,194=1011e590,1a0=1011d520. Engine table10222f48 копируется initializer100b4aa0; имена API сопоставлены с закреплённым eiface.h.

Native descriptors различают W и P: ITEM W160=m_pPlayer,W164=m_pNext,W168=m_iId; WEAPON W16c/170/174=custom_v_model/custom_w_model/custom_script,W1dc=m_iPrimaryAmmoType,W1e4=m_iClip; BASE W18=m_MoveWith,W60=m_iLFlags,W64=m_iStyle. PLAYER P252c=m_pActiveItem,P2508=m_iFOV. Роли остальных HUD/cache полей ниже выводятся из операций, не объявляются исходными C++ именами.

## 0x10045580 — CGlock_PrivateDataFactory

ABI cdecl, один stack DWORD entvars; plain RET. ECX не является this. Если аргумент NULL, вызвать pfnCreateEntity (slot21) без аргументов; при ненулевом edict выбрать V=edict+80. Если engine вернул NULL, V остаётся NULL, затем читается V+20c без защитного возврата. Это не безопасная фабрика с обычным failure=NULL.

Прочитать edict=[V+20c]. Если edict ненулевой и [edict+7c] ненулевой, вернуть этот существующий private pointer в полном EAX; vptr/pev не перезаписываются, класс не проверяется. Иначе pfnPvAllocEntPrivateData(edict,204h). Ненулевому результату записать vptr101b0524 и +4=V, затем вернуть его EAX. Отдельного конструктора и обнуления остальных полей в этом теле нет; zero initialization engine здесь не доказано.

Если allocator возвращает NULL, native100455d4 обнуляет EAX и пишет V по [EAX+4], то есть адресу4, прежде RET. Нормальный null-return из этой ветви не гарантирован. edict==0 также передаётся allocator без исправления. Allocation size204 покрывает последний собственный DWORD+200. Связь именно CGlock доказана прямой записью vptr и RTTI; PE export с entry ровно10045580 не найден, поэтому export/classname binding не выдумывается.

## 0x1011dd70 — Weapon_KeyValueCustomModelsAndFlags

ABI ECX=W, stack K; RET4, без нормализованного status EAX. K+4 — указатель key, K+8 — value, K+c — DWORD handled. Шесть последовательных case-sensitive сравнений полных NUL-terminated byte strings, с проверкой по два символа за итерацию: customv,customw,customscript,movewith,skill,style. Это не prefix match и не folding регистра. Нет NULL/length guards; key/value считаются доступными C-строками.

customv/customw/customscript/movewith вызывают pfnAllocString(value), затем записывают полный EAX string offset в W16c/W170/W174/W18 соответственно и handled=1. Результат0 также записывается и считается обработанным. Здесь нет копирования в локальный фиксированный буфер, проверки расширения/существования файла, нормализации пути, ограничения каталога или загрузки ресурсов. Основание имени customv — буквальные байты101e6698. Не подменять ключ именем поля custom_v_model.

skill и style вызывают native wrapper1016b55e(value), сохраняют полный DWORD EAX в W60 и W64, затем handled=1. Wrapper передаёт base10 и флаг1 в CRT parser1016a01f, возвращает его EAX без проверки; обработчик не проверяет успешность, диапазон, остаток строки или знак. Политика CRT при malformed/overflow не переобъявляется этим локальным контрактом. Ключ skill здесь пишет m_iLFlags, а не global skill level.

Каждая совпавшая ветвь немедленно возвращает; неизвестный key только пишет handled=0. Вызова базового KeyValue или дальнейшего fallback здесь нет. W сохраняется в EBX через AllocString/CRT, handled записывается после callback. Полученные custom поля читаются downstream Spawn/Deploy/parser из предыдущих пакетов; этот setter сам не проверяет применимость к конкретной модели или оружию.

## 0x1011f260 — CGlock_SaveOwnFields

ABI ECX=W, stack saveContext S; RET4, полный EAX сохраняется через epilogue, несмотря void в C. Сначала1011ede0(W,S), общий weapon Save; при EAX0 вернуть0, собственную таблицу не писать. Никакого отката уже записанных базовых блоков нет.

При успехе заново прочитать V=[W+4] и string base=[G+98]. OwnerLabel=(V.targetname1d0!=0 ? targetname : V.classname0)+base. Вызвать1011adc0 с ECX=S и пятью аргументами(ownerLabel,"CGlock",W,1021b570,2). Label нужен serializer diagnostics; block name всегда CGlock, не classname/targetname. Возвращается полный EAX WriteFields. На обычном native возврате WriteFields устанавливает1 даже после собственных warning/error путей; cookie helper не меняет EAX. Это не подтверждение сохранения всех байтов при overflow.

Таблица1021b570 имеет ровно два descriptor: type12,count1,flags0,m_bTaclight offset200; затем type12,count1,flags0,m_bWaitingToFix offset1f8. Native size table1021b140 даёт type12 размер4, поэтому сериализуются четыре байта200..203 и1f8..1fb; нельзя сокращать их до BYTE по префиксу m_b или operational access. Второй диапазон захватывает соседние байты после latch1f8. Все остальные поля относятся к предыдущим BASE/ITEM/WEAPON блокам либо остаются вне этой таблицы.

## 0x1011eaa0 — CGlock_RestoreOwnFields

ABI ECX=W, stack restoreContext R; RET4, полный EAX. Сначала1011e7a0(W,R), общий weapon Restore. При0 сразу вернуть0 без собственного чтения. Успешные либо частичные изменения уже прочитанных базовых блоков не отменяются.

После успеха вызвать10117010 с ECX=R и четырьмя аргументами("CGlock",W,1021b570,2), вернуть его EAX без нормализации/дополнительных действий. ReadFields при block-token mismatch rewind4 и возвращает0; при совпадении очищает допустимые поля и декодирует records, а на обычном завершении возвращает1. Здесь нет transactional rollback, post-load body refresh, повторного Deploy или client-message resync.

Та же таблица читает DWORD windows W200..203 иW1f8..1fb, не два изолированных bool bytes. BASE→ITEM→WEAPON restore precedes CGlock; этот wrapper не меняет общую политику serializer. Полный decoder и ошибки record stream описаны в analysis/server-serializer/contract.md; они не становятся гарантией safety из-за возвращённой1.

## 0x1011fc80 — Weapon_UpdateClientDataAndNext

ABI ECX=W, stack явный P; RET4. На обычном возврате полный EAX=1. Вычислить state из снимка active=[P252c]:0 если W!=active; если W==active,1 при DWORD[P264c]==0, иначе40h. Поле264c здесь только test на ненулевой DWORD, конкретная игровая роль не устанавливается. state сохраняется в EBX через engine callbacks.

force=(DWORD[P24d8]==0). Если W совпадает с active либо [P2530], и active!=[P2530], force=1. Сравнения указателей, без проверки валидности этих объектов. Послать сообщение, если W1e4!=W1e8, state!=W1ec, DWORD[P2508]!=DWORD[P250c] либо force!=0. P2508 descriptor m_iFOV, сравнение именно raw DWORD, не float и не numeric conversion.

MessageBegin(dest1,idglobal102264cc,originNULL,P.V.edict), затем WriteByte(state), WriteByte(текущий W168), WriteByte(текущий W1e4), MessageEnd. Registry подтверждает CurWeapon фиксированной длины3. Native stack передаёт полные DWORD, wire BYTE ограничивает их младшим байтом; отрицательный clip/sentinel не нормализуется. state вычислен до Begin, id и clip считываются отдельно непосредственно перед своими callbacks, поэтому нет атомарного снимка трёх полей.

Только после MessageEnd вновь прочитать W1e4 и записать в W1e8; W1ec=сохранённый state; P24d8=1. Callback может изменить clip между wire и cache-read: cache не обязан совпасть с отправленным byte. P250c и P2530 здесь не обновляются, поэтому FOV/active mismatch может вызвать повторные сообщения до внешнего обновления. Если условия false, ни сообщения, ни этих cache записей нет.

Независимо от отправки заново прочитать next=[W164]; при ненулевом вызвать его fresh vptr.virtual170 с тем же P. Это linked m_pNext chain, не автоматически второй активный ствол. Возвращаемое значение child игнорируется, parent устанавливает EAX1; без next EDX1, подготовленный до веток либо после End, переносится в EAX. Нет cycle/length limit, visited set или проверки child owner/class: цикл в списке приводит к рекурсивному обходу без локальной остановки. Callback может изменить next до его чтения. Произвольный override170 — внешняя граница.

## 0x1011d520 — Weapon_IsUseableByClipReserveOrUnlimited

ABI ECX=W, без stack args, plain RET, полный нормализованный EAX0/1. Если signed DWORD clipW1e4>0, вернуть1 немедленно. Иначе вызвать fresh vptr.virtual168 без аргументов, сохранить возвращённый индекс как byte-address offset4*index+2540, затем заново прочитать P=[W160] и signed reserve[P+offset]. Если reserve>0, вернуть1.

Если оба значения<=0, прямой101202f0(W); вернуть1 только при его полном EAX==-1, иначе0. Этот helper — native max-primary-ammo policy, не проверка ammo index; подтверждённая common implementation читает ItemInfo table с multiplayer syringe/clip*3 ветвью. Callback168 вправе изменить owner; после него используется свежий W160, но clip не перечитывается.

CGlock slot168 указывает1011e510, возвращающий W1dc. Здесь нет защиты NULL P, индекса-1/out-of-range, умножения/переполнения адреса, active state, reload/deadline или здоровья. Даже ammo-less sentinel проверяется только после обращения к reserve. Отрицательные clip/reserve проходят путь<=0, положительный clip позволяет не обращаться к P. Это допуск использования по локальной ammunition policy, не гарантия выстрела/Deploy.

## 0x1011e510 — Weapon_GetPrimaryAmmoType

ABI ECX=W, без stack args; MOV EAX,[ECX+1dc],RET. Возвращает полный DWORD m_iPrimaryAmmoType из native WEAPON descriptor, без преобразования к bool, диапазонной проверки или обращения к ItemInfo. CGlock vslot168 связывает его с IsUseable; отрицательное значение не корректируется и затем может использоваться как индекс reserve.

## 0x1011c020 — Weapon_CanDeployUnlessOwnerMoveTypeFive

ABI ECX=W, без stack args, plain RET, полный EAX0/1. Прочитать P=[W160]. NULL P приводит к1. При ненулевом P вызвать100e4ed0 с ECX=P; этот support возвращает полный0/1 для DWORD[P.V+108]==5 (movetype). Ненулевой результат→0, иначе1. Больше условий нет: ammo/health/ownership/animation не проверяются.

Это конкретный CGlock slot140, а не обещание всех derived policies. Общий Deploy1011c1a0 вызывает его, затем самостоятельно проверяет P; поэтому CanDeploy(NULL)=1 не означает успешный Deploy без владельца. В данном native helper нет FP comparisons или правила для NaN: movetype сравнивается как DWORD с5.

## 0x1011e4a0 — Weapon_PlayEmptySoundAndClearLatch

ABI ECX=W, без stack args, plain RET. Если DWORD W1b4!=0, выбрать буквальную weapons/weapon_fire_empty.wav; при0 — weapons/weapon_fire_empty_noclick.wav. Вторая ветвь всё равно вызывает emitter, это не подавление вызова/гарантированная тишина. Snapshot owner=[W160], затем его V.edict, без NULL guards.

Вызвать100fc9f0(P.edict,channel0,sample,raw3f4ccccd,raw3f4ccccd,flags0,pitch100): два float32 аргумента приблизительно0.8. После возврата независимо от emitter outcome записать DWORD W1b4=0. Native XOR EAX,EAX выполняется после call, так что обычный возврат также оставляет полный EAX0, хотя C описывает void; это не статус успешности звука. EmitSound sentence/global attenuation policy остаётся контрактом support.

## 0x1011e590 — Weapon_ResetEmptySoundLatch

ABI ECX=W, без stack args, plain RET. Единственная запись — полный DWORD W1b4=1. EAX не устанавливается и не гарантирует bool/status. Нет sound emission, ammo check, проверки текущего значения или timer. Native CGlock slot194 возвращает возможность следующего выбора click-сэмпла slot190; это latch выбора файла, поскольку даже сброшенный latch вызывает noclick sample.

## Границы и маршрут продолжения

Создание private data не является Spawn: Spawn/Precache, атаки, frame, Deploy и actions имеют отдельные законченные локальные контракты в server-glock-attacks/frame/deploy/actions. Здесь закрыты конкретные slots и state/cache/persistence. Не доказана полнота всех inherited vtable slots, engine allocator ownership/error semantics, arbitrary callback overrides, порядок внешнего обновления P2530/P250c или отсутствие циклов m_pNext. Две существующие короткие карточки taclight stages и сценарный SuicideShot не заменялись новым полным разбором этого пакета. Factory exact entry не экспортирован; возможный export thunk не присваивается без доказательства. Все новые карточки относятся только к десяти primary, support автоматически REVIEW не получает.
