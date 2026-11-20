# CMobile: батарея, фонарь, удар и меню

Статический пакет pass21: пять полных сохранённых тел `10052f20`, `10053060`, `10053800`, `10053a70`, `10053d80`. Исходный `hl.dll` SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`; игра и DLL не запускались. `capture.py` воспроизводит bounded objdump, native descriptors, RTTI/vtable, строки, экспорты и ограниченный поиск точных LE32 ссылок. `verify.py` независимо отображает PE-секции и проверяет каждый сохранённый байт. Исходный публичный baseline pass20: 1910 REVIEW / 6745 pending; в evidence сохранены пять ещё не размеченных блоков каталога. Это статические контракты, не проверка видимого результата или игрового тайминга.

## Владельцы и доказанная связь

`W` — CMobile в ECX, `P=*(W+160)` — владелец. Все пять входов не принимают стековых аргументов, завершаются обычным RET и не формируют единый bool-результат; случайный EAX не следует трактовать как успех. В проверяемых действиях нет общей защиты от NULL W/P. Native factory `10052e30` выделяет `0x208` байт и ставит vptr `101b26c8`; RTTI называет CMobile. Экспорты связывают `10052f20` с FixBattery, `10053060` с FlashOff, `10053800` с MidBatteryFix. Слоты этой таблицы: `+08→1011f680`, `+198→1011f5d0`, `+19c→1011f640`, `+1a8→10053a70`, `+1b0→10053d80`. Само наличие таблицы не доказывает неизменность vptr у произвольного объекта.

Native ITEM/WEAPON/PLAYER/MONSTER/BASE/ENTVARS descriptors связывают `W160=m_pPlayer`, `W128=m_iSprintState`, `W1cc/1d0/1d4=m_flNextPrimary/Secondary/TertiaryAttack`, `W1d8=m_flTimeWeaponIdle`, `P308=m_flNextAttack`, `P1ee4=m_fPhoneCallTime`, `P1ee8=m_bInPhoneCall`, `P1e98=m_iMobileFlashMode`, `P5d0=m_iFlashlightFlags`, `P5cc=m_iPhoneMessage`, `P1f14=m_iPhoneDisabled`, `P1f1c=m_bPhoneLow`, `P1f20=m_fNextPhoneWarnTime`, `W78=m_pfnThink`, `W58=m_fNextThink`, `pev114=body`. Тип12 в таблицах не превращает наблюдаемые BYTE-записи в DWORD-записи. `pev+20c` используется как engine edict argument; имя этого поля не выводится из ENTVARS save table. Байты W1f8/W1f9 здесь оставлены с адресными именами.

## 10053060 — FlashOff

При нулевом бите маски `0x1` в BYTE P5d0 тело сразу возвращается без изменений. Иначе пишет DWORD P1e98=0, перечитывает владельца, и лишь если маска0x2 уже установлена в DWORD P5d0, повторно OR-ит эту же маску и сохраняет. После этого перечитывает flags и, лишь если маска0x1 уже установлена, OR-ит0x1 и сохраняет. Это не очистка flags: для стабильного объекта обе OR-записи сохраняют прежние биты. Нельзя заменять их на AND с инверсной маской, несмотря на экспортное имя FlashOff.

FlashOff не отправляет сообщений, не проигрывает звук/анимацию, не меняет think или сроки атак, не очищает W1f8/W1f9. Проверка относится к младшему байту, последующие условные операции — к DWORD. Владелец не проверяется на NULL; EAX не контракт успеха.

## 10053800 — MidBatteryFix

Без локальных guards вызывает `100fc9f0(W.pev+20c, 2, "weapons/rifle/rifle_insert.wav", 1.0f, 0.8f, 0, 100)`. Порядок аргументов — edict, channel, path, volume, attenuation, flags, pitch. Это звук на edict оружия; фактическая громкость может быть преобразована общим sound wrapper. Затем вызывает W.v08(1.0f) и записывает W78=10052f20. В доказанной CMobile-таблице слот ведёт в weapon scheduler1011f680, а не в базовый1000e1f0.

Scheduler1011f680 получает global time через ST0 getter1011ab20, выполняет x87 FADD с аргументом, один раз округляет FSTP в float32 и копирует полученное значение в W58 и W.pev104. После его возврата MidBatteryFix заново читает global time, делает ADDSS с float5.0 и сохраняет одно значение последовательно в P308, W1d4, W1d0, W1cc. Задержка callback составляет1.0 в этом scheduler, а блокировка атак задаётся отдельно на5.0. Тело не отменяет callback и не сбрасывает battery-latches.

## 10052f20 — FixBattery

Сначала вызывает sound wrapper на weapon edict, channel2, `weapons/sleeve_generic3.wav`, volume1.0f, attenuation0.8f, flags0, pitch100. Затем выбирает sequence2 при P1e98==0, иначе7, и вызывает W.v198(sequence,1,0). Выбор сделан до внешнего animation callback. Доказанный1011f5d0 принимает три аргумента (RET0c); его native поведение и packet23 описаны в phone-call-callbacks. После возврата повторно читает владельца и время, вычисляет float32(double(now)+0.5), пишет P308.

Затем пишет BYTE W1f9=0 и DWORD P1f14=0, вызывает1000eb40(W,1,0), потом1000eb40(W,2,0). Bodygroup wrapper имеет RET8, получает model header через engine GetModelPtr и передаёт четыре аргумента в1000f7c0. Последний при header!=NULL и signed group<=header.cc выбирает bodypart stride0x4c; если signed submodel<nummodels, изменяет pev.body по формуле `body += (submodel - (body/base)%nummodels)*base` с native signed IDIV. Отдельных lower bounds, проверки group<count вместо <= и защиты делителей от0 нет. Не утверждается, что конкретный runtime model обязательно удовлетворяет этим предпосылкам.

После обеих bodygroup операций читает W.pev.body и записывает DWORD P5cc. Затем отдельно перечитывает body и P и вызывает W.v19c(P,body). Доказанный1011f640 имеет RET8: при P!=NULL отправляет MSG_ONE / WeaponBody / BYTE(body) этому edict; NULL здесь подавляет только этот helper, не защищает окружающий FixBattery. Следом пишет BYTE P1f1c=0, raw float global time в P1f20 и BYTE W1f8=0. Наконец заново вычисляет float32(double(now)+0.5) и копирует результат в P308, W1d4, W1d0, W1cc.

FixBattery не очищает W78 и не делает отдельной записи числового количества батареек. Внешние вызовы разделяют чтения владельца/body/time: это не атомарный снимок состояния. В соседнем frame10053210 W1f8 участвует в запуске цепочки frame→MidBatteryFix→FixBattery; в SMS reader100534d0 W1f9 подавляет общий ProFont fanout после чтения файла. Эти два consumer-контракта принадлежат отдельному пакету server-mobile-frame; данного reset недостаточно для полного определения всех producers этих байтов.

## 10053a70 — отложенный удар телефоном

Сначала отвергает BYTE P1ee8!=0. Затем один раз читает now и по порядку сравнивает P1ee4, W1cc, W1d0, W1d4 с ним. Каждая пара инструкций COMISS/JA отвергает ordered deadline>now; равенство проходит, unordered NaN также не берёт JA при замаскированном FP exception. После четырёх проверок требует DWORD W128==0. Это точнее псевдокодного конъюнкта `deadline<=now`; здесь нет локальных guards stamina/water/alive.

По P1e98 выбирает sequence10 при0, иначе11. Обе ветки сначала вызывают100f91b0(P,1.0f,1.0f,3.0f), затем W.v198(sequence,1,0). В sound/camera helper rules!=NULL и rules.v20()!=0 направляют в engine PlaybackEvent с flags0x10, event WORD10231f44, edictP, delay0, обеими vector-pointer параметрами на (1,1,3), остальными scalar параметрами0. На альтернативном пути helper изменяет P.pev280/284/288 соответственно на (-pitch,+yaw,+roll)*20.0f. Это не произвольное SDK punchangle; consumer/prediction находятся за границей данного действия.

После animation снова берёт P, вызывает P.v08(float bits0x3e083127 = 0.13300000131130219), затем повторно получает P и ставит P78=100e7af0. В native CBasePlayer-таблице слот08 ведёт в1000e1f0; экспорт100e7af0 — MeleeHitThinkPunch. Здесь планируется callback, а не исполняется trace/damage. Потом свежий now+float1.0 через ADDSS записывается в W1d8, W1d0, W1cc; W1d4 и P308 этим хвостом не меняются. Завершает sound wrapper на player edict, channel0, `weapons/mobile/punch_swing.wav`, volume1.0f, attenuation0.8f, flags0, pitch100.

## 10053d80 — открыть меню телефона

Проверяет BYTE P1ee8 и те же четыре COMISS/JA deadline guards в том же порядке с одним снимком now. В отличие от удара, W128 не проверяет. После прохода вызывает100f4050(P,200): helper RET4 отправляет MSG_ONE, runtime ID10226580, originNULL, player edict, два BYTE(200,0). Native registration связывает этот ID с VGUIMenu size2. Затем заново получает P и отправляет MSG_ONE, ID10226590=Phone size1, BYTE1; после MessageEnd снова получает P.

Последним идёт sound wrapper на player edict, channel3, `inventory/inventory_click.wav`, volume1.0f, attenuation0.8f, flags0, pitch100. В этом теле нет записи сроков атак, флага открытого меню или think callback. Повторный вызов при тех же допустимых guards повторяет обе отправки и звук; внешний input/frame код может ограничивать частоту, но само тело этого не делает. Не доказаны визуальный вид меню и реакция клиента только из server packets.

## Общие границы и навигация

Существующий [sound wrapper contract](../server-sentence-lifecycle/contract.md) описывает100fc9f0: запрошенная громкость1 может дополнительно уменьшаться общей настройкой; здесь сохранены именно аргументы каждого caller. [Phone callbacks](../server-phone-call-callbacks/contract.md) документируют animation/helper ABI; [item lifecycle](../server-item-lifecycle/contract.md) — наследуемый owner/scheduler/save контекст. В `evidence.json` raw native descriptors являются доказательством имён полей; одних совпадающих SDK offsets недостаточно.

Доказаны только перечисленные concrete vtable slots и bounded data references. Не заявлены полный virtual call graph, отсутствие других writers W1f8/W1f9, сроки всех invocation paths, полноценный эффект MeleeHitThinkPunch или client rendering/messages. Frame/SMS/camera guards и lifecycle находятся в отдельных параллельных пакетах pass21. Callback/pointer NULL guards не добавлялись по смыслу имён; исходный DLL и ресурсы не изменены.

## Продолжение разбора: pass22

Pass22: [skill refresh](../server-skill-refresh/contract.md) закрывает native111 чтений/101 float slots, источник punch damage10226844 и ST0/format ABI. [Mobile player state](../server-mobile-player-state/contract.md) продолжает map-trigger/SMS/player chain; [monster attacks](../server-monster-attack-dispatch/contract.md) закрывает attack-condition dispatch и gates; [visibility policy](../server-visibility-policy/contract.md) уточняет concrete rules/player callbacks. Список residual boundaries см. в новых контрактах; установленный skill.cfg не объявляется runtime состоянием.
