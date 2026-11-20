# CPhoneCall: полный KeyValue10060140

Оригинальный server hl.dll; статический разбор полного C и native диапазона10060140..10060e28. Новая карточка только одна. Поддержка не считается новым REVIEW; float conversion wrapper1016f5ec сохранён только как ASM, без выдуманного C. Игру/DLL не исполняли, ресурсы/порт не меняли.

Предлагаемое имя: CPhoneCall_KeyValueSubtitleNumbersTimesAndAudio. Адреса и смещения hexadecimal, количества и type IDs — decimal. evidence.json содержит SHA исходного PE, C/ASM, literals, таблицы и все65 пары branch→store; verify.py повторяет независимый PE mapping и проверяет каждую ветвь.

## Локальный контракт

Native CPhoneCall::KeyValue entry10060140..10060e28: ECX=this, один stack pointer K, RET4. K.key находится+4, K.value+8, DWORD handled+0c. EBX сохраняет this, ESI — K, EDI — начальный key pointer. Ни this/K/key, ни value на локальном уровне не проверяются на NULL. Возврат EAX не является status: integer/audio ветви оставляют результат converter/AllocString, float ветви не определяют meaningful integer result; handled — отдельная запись после field store.

Проверяются ровно65 literal keys в порядке subtitlenumber1..32, subtitletime1..32, audiofile. Первые три сравнения встроены: exact byte-by-byte до NUL, по два байта за проход. Остальные62 используют cdecl1000aba0 с тем же exact case-sensitive правилом и full EAX0/1. Это не распознавание числового suffix: ведущий ноль, знак, дополнительный пробел, другой регистр или номер33 не принимаются данным слоем. Одна успешная ветвь немедленно возвращает; совпадение префикса без совпадения terminating NUL не подходит.

subtitlenumberN, где N от1 до32, вызывает cdecl1016b55e(K.value) и записывает полный EAX как DWORD в this+e8+4*N. Получаются ec..168. Helper передаёт в1016a01f locale=NULL, источник байтов с end pointer=NULL, base10, signed mode1. Shared native parser пропускает locale whitespace, допускает один знак, читает цифры до неподходящего байта; отсутствие цифр даёт0. Signed overflow насыщается до INT_MAX/INT_MIN, errno22h, что подтверждает10169fb8 и основной parser. Primary не читает errno/end pointer, не ограничивает subtitle ID, не валидирует его наличие и не делает float conversion. ASCII12.75→12, -4junk→-4; повторный ключ перезаписывает поле.

subtitletimeN, где N от1 до32, вызывает cdecl1016f5ec(K.value), затем FSTP DWORD в this+16c+4*N, то есть170..1ec. Wrapper1016f5ec является отдельным native entry: передаёт (value,NULL) в1016da44, очищает8 stack bytes и возвращает ST0 без собственной обработки. Primary округляет x87 результат до float32 согласно FP control word. Нет проверки знака, конечности, сортировки времён, прибавления globals.time или проверки результата. Если converter вернул NaN/infinity/negative, primary не фильтрует их; это условное утверждение о store, не доказательство конкретного синтаксиса таких литералов. Полный grammar/locale/errno/overflow backend1016da44 здесь не разобран. Ghidra FID_conflict__atof и wchar_t* не доказывают wide-string ABI; native call получает неизменный K.value pointer.

audiofile вызывает engine AllocString через10223054 (slot67 таблицы10222f48, initializer100b4aa0), передав K.value без изменения. Полученный DWORD string_t сохраняется в this+1f0; даже нулевой результат не проверяется, handled становится1. Ключ не открывает файл, не добавляет путь или extension, не запускает звук и не выполняет precache. Владение строкой передаётся engine string pool; native descriptor m_sAudioFile имеет type17 (sound string), а не raw char buffer.

Во всех65 успешных ветвях порядок одинаков: conversion/callback → store соответствующего поля → DWORD K.handled=1 → возврат. Входной handled не проверяется, прежнее поле не очищается до converter, остальные slots не изменяются. Нет транзакции, общего reset, allocation локального массива, увеличения current subtitle или запуска think. Ошибка либо невозврат внутри callback не откатывает уже совершённые им изменения и не гарантирует запись handled.

Если все65 сравнений не совпали, вызывает1000dba0 с исходными this и K, затем RET4; сам до fallback handled не меняет. Этот конкретный base helper принимает movewith→engine AllocString→this+18, skill→signed atoi→this+60, style→signed atoi→this+64, выставляя handled1; любой иной key ставит handled0. Следовательно неизвестный phone key может быть принят базовым слоем. Прямого рекурсивного phone parsing, generic entvars parsing или logging в этом локальном fallback нет.

Storage подтверждено native save table10212a80 с7 descriptors: m_iSubtitleNumber type10, basee8,count33; m_fSubtitleNumberNext type0, base16c,count33; m_sAudioFile type17,+1f0; m_iCurrentSubtitle type10,+1f4; m_hPhoneUser type4,+1f8; m_bAnswered type12,+200; m_pPlayer type4,+e0. Здесь type IDs записаны десятично. Primary пишет только indices1..32 обоих33-элементных массивов; index0 поe8/16c, current1f4, handles и answered не меняет. Эти поля принадлежат CPhoneCall, не одноимённым offsets player/monster. В type12 нельзя подменять native generic DWORD width догадкой BYTE по префиксу m_b.

Связь класса не выводится из одного имени: factory1005fb60 записывает vptr101b5a20 в allocation204h, raw vtable+34 содержит10060140, locator101fb414/type descriptor1021d790 несёт .?AVCPhoneCall@@. Restore10060e90 и Save10060ed0 ссылаются на literal CPhoneCall и эту же таблицу7. Эти тела сохранены как supporting evidence, без дополнительных REVIEW. Последующая интерпретация времени/ID, выбор пользователя, Play/End и network payload находятся в отдельных lifecycle/runtime пакетах.

## Все ключи и машинные точки записи

Таблица получена из всех native literal branches, не из предположения о цикле. В машинном теле цепочка развёрнута. Следующая ветвь — цель mismatch; каждая строка имеет собственные conversion, handled store и RET4. Все соответствующие callsite bytes/targets сохранены в evidence.key_branches.

| Ключ | Literal VA | Branch | Mismatch → | This offset | Conversion | Field store | Handled store | RET4 |
|---|---|---|---|---|---|---|---|---|
| `subtitlenumber1` | `0x101b5b48` | `0x1006014b` | `0x1006019d` | `0xec` | `signed32 atoi` | `0x10060189` | `0x1006018f` | `0x1006019a` |
| `subtitlenumber2` | `0x101b5b58` | `0x1006019d` | `0x100601ec` | `0xf0` | `signed32 atoi` | `0x100601d8` | `0x100601de` | `0x100601e9` |
| `subtitlenumber3` | `0x101b5b68` | `0x100601ec` | `0x1006023b` | `0xf4` | `signed32 atoi` | `0x10060227` | `0x1006022d` | `0x10060238` |
| `subtitlenumber4` | `0x101b5b78` | `0x1006023b` | `0x1006026c` | `0xf8` | `signed32 atoi` | `0x10060258` | `0x1006025e` | `0x10060269` |
| `subtitlenumber5` | `0x101b5b88` | `0x1006026c` | `0x1006029d` | `0xfc` | `signed32 atoi` | `0x10060289` | `0x1006028f` | `0x1006029a` |
| `subtitlenumber6` | `0x101b5b98` | `0x1006029d` | `0x100602ce` | `0x100` | `signed32 atoi` | `0x100602ba` | `0x100602c0` | `0x100602cb` |
| `subtitlenumber7` | `0x101b5ba8` | `0x100602ce` | `0x100602ff` | `0x104` | `signed32 atoi` | `0x100602eb` | `0x100602f1` | `0x100602fc` |
| `subtitlenumber8` | `0x101b5bb8` | `0x100602ff` | `0x10060330` | `0x108` | `signed32 atoi` | `0x1006031c` | `0x10060322` | `0x1006032d` |
| `subtitlenumber9` | `0x101b5bc8` | `0x10060330` | `0x10060361` | `0x10c` | `signed32 atoi` | `0x1006034d` | `0x10060353` | `0x1006035e` |
| `subtitlenumber10` | `0x101b5bd8` | `0x10060361` | `0x10060392` | `0x110` | `signed32 atoi` | `0x1006037e` | `0x10060384` | `0x1006038f` |
| `subtitlenumber11` | `0x101b5bec` | `0x10060392` | `0x100603c3` | `0x114` | `signed32 atoi` | `0x100603af` | `0x100603b5` | `0x100603c0` |
| `subtitlenumber12` | `0x101b5c00` | `0x100603c3` | `0x100603f4` | `0x118` | `signed32 atoi` | `0x100603e0` | `0x100603e6` | `0x100603f1` |
| `subtitlenumber13` | `0x101b5c14` | `0x100603f4` | `0x10060425` | `0x11c` | `signed32 atoi` | `0x10060411` | `0x10060417` | `0x10060422` |
| `subtitlenumber14` | `0x101b5c28` | `0x10060425` | `0x10060456` | `0x120` | `signed32 atoi` | `0x10060442` | `0x10060448` | `0x10060453` |
| `subtitlenumber15` | `0x101b5c3c` | `0x10060456` | `0x10060487` | `0x124` | `signed32 atoi` | `0x10060473` | `0x10060479` | `0x10060484` |
| `subtitlenumber16` | `0x101b5c50` | `0x10060487` | `0x100604b8` | `0x128` | `signed32 atoi` | `0x100604a4` | `0x100604aa` | `0x100604b5` |
| `subtitlenumber17` | `0x101b5c64` | `0x100604b8` | `0x100604e9` | `0x12c` | `signed32 atoi` | `0x100604d5` | `0x100604db` | `0x100604e6` |
| `subtitlenumber18` | `0x101b5c78` | `0x100604e9` | `0x1006051a` | `0x130` | `signed32 atoi` | `0x10060506` | `0x1006050c` | `0x10060517` |
| `subtitlenumber19` | `0x101b5c8c` | `0x1006051a` | `0x1006054b` | `0x134` | `signed32 atoi` | `0x10060537` | `0x1006053d` | `0x10060548` |
| `subtitlenumber20` | `0x101b5ca0` | `0x1006054b` | `0x1006057c` | `0x138` | `signed32 atoi` | `0x10060568` | `0x1006056e` | `0x10060579` |
| `subtitlenumber21` | `0x101b5cb4` | `0x1006057c` | `0x100605ad` | `0x13c` | `signed32 atoi` | `0x10060599` | `0x1006059f` | `0x100605aa` |
| `subtitlenumber22` | `0x101b5cc8` | `0x100605ad` | `0x100605de` | `0x140` | `signed32 atoi` | `0x100605ca` | `0x100605d0` | `0x100605db` |
| `subtitlenumber23` | `0x101b5cdc` | `0x100605de` | `0x1006060f` | `0x144` | `signed32 atoi` | `0x100605fb` | `0x10060601` | `0x1006060c` |
| `subtitlenumber24` | `0x101b5cf0` | `0x1006060f` | `0x10060640` | `0x148` | `signed32 atoi` | `0x1006062c` | `0x10060632` | `0x1006063d` |
| `subtitlenumber25` | `0x101b5d04` | `0x10060640` | `0x10060671` | `0x14c` | `signed32 atoi` | `0x1006065d` | `0x10060663` | `0x1006066e` |
| `subtitlenumber26` | `0x101b5d18` | `0x10060671` | `0x100606a2` | `0x150` | `signed32 atoi` | `0x1006068e` | `0x10060694` | `0x1006069f` |
| `subtitlenumber27` | `0x101b5d2c` | `0x100606a2` | `0x100606d3` | `0x154` | `signed32 atoi` | `0x100606bf` | `0x100606c5` | `0x100606d0` |
| `subtitlenumber28` | `0x101b5d40` | `0x100606d3` | `0x10060704` | `0x158` | `signed32 atoi` | `0x100606f0` | `0x100606f6` | `0x10060701` |
| `subtitlenumber29` | `0x101b5d54` | `0x10060704` | `0x10060735` | `0x15c` | `signed32 atoi` | `0x10060721` | `0x10060727` | `0x10060732` |
| `subtitlenumber30` | `0x101b5d68` | `0x10060735` | `0x10060766` | `0x160` | `signed32 atoi` | `0x10060752` | `0x10060758` | `0x10060763` |
| `subtitlenumber31` | `0x101b5d7c` | `0x10060766` | `0x10060797` | `0x164` | `signed32 atoi` | `0x10060783` | `0x10060789` | `0x10060794` |
| `subtitlenumber32` | `0x101b5d90` | `0x10060797` | `0x100607c8` | `0x168` | `signed32 atoi` | `0x100607b4` | `0x100607ba` | `0x100607c5` |
| `subtitletime1` | `0x101b5da4` | `0x100607c8` | `0x100607f9` | `0x170` | `x87 ST0 to float32` | `0x100607e5` | `0x100607eb` | `0x100607f6` |
| `subtitletime2` | `0x101b5db4` | `0x100607f9` | `0x1006082a` | `0x174` | `x87 ST0 to float32` | `0x10060816` | `0x1006081c` | `0x10060827` |
| `subtitletime3` | `0x101b5dc4` | `0x1006082a` | `0x1006085b` | `0x178` | `x87 ST0 to float32` | `0x10060847` | `0x1006084d` | `0x10060858` |
| `subtitletime4` | `0x101b5dd4` | `0x1006085b` | `0x1006088c` | `0x17c` | `x87 ST0 to float32` | `0x10060878` | `0x1006087e` | `0x10060889` |
| `subtitletime5` | `0x101b5de4` | `0x1006088c` | `0x100608bd` | `0x180` | `x87 ST0 to float32` | `0x100608a9` | `0x100608af` | `0x100608ba` |
| `subtitletime6` | `0x101b5df4` | `0x100608bd` | `0x100608ee` | `0x184` | `x87 ST0 to float32` | `0x100608da` | `0x100608e0` | `0x100608eb` |
| `subtitletime7` | `0x101b5e04` | `0x100608ee` | `0x1006091f` | `0x188` | `x87 ST0 to float32` | `0x1006090b` | `0x10060911` | `0x1006091c` |
| `subtitletime8` | `0x101b5e14` | `0x1006091f` | `0x10060950` | `0x18c` | `x87 ST0 to float32` | `0x1006093c` | `0x10060942` | `0x1006094d` |
| `subtitletime9` | `0x101b5e24` | `0x10060950` | `0x10060981` | `0x190` | `x87 ST0 to float32` | `0x1006096d` | `0x10060973` | `0x1006097e` |
| `subtitletime10` | `0x101b5e34` | `0x10060981` | `0x100609b2` | `0x194` | `x87 ST0 to float32` | `0x1006099e` | `0x100609a4` | `0x100609af` |
| `subtitletime11` | `0x101b5e44` | `0x100609b2` | `0x100609e3` | `0x198` | `x87 ST0 to float32` | `0x100609cf` | `0x100609d5` | `0x100609e0` |
| `subtitletime12` | `0x101b5e54` | `0x100609e3` | `0x10060a14` | `0x19c` | `x87 ST0 to float32` | `0x10060a00` | `0x10060a06` | `0x10060a11` |
| `subtitletime13` | `0x101b5e64` | `0x10060a14` | `0x10060a45` | `0x1a0` | `x87 ST0 to float32` | `0x10060a31` | `0x10060a37` | `0x10060a42` |
| `subtitletime14` | `0x101b5e74` | `0x10060a45` | `0x10060a76` | `0x1a4` | `x87 ST0 to float32` | `0x10060a62` | `0x10060a68` | `0x10060a73` |
| `subtitletime15` | `0x101b5e84` | `0x10060a76` | `0x10060aa7` | `0x1a8` | `x87 ST0 to float32` | `0x10060a93` | `0x10060a99` | `0x10060aa4` |
| `subtitletime16` | `0x101b5e94` | `0x10060aa7` | `0x10060ad8` | `0x1ac` | `x87 ST0 to float32` | `0x10060ac4` | `0x10060aca` | `0x10060ad5` |
| `subtitletime17` | `0x101b5ea4` | `0x10060ad8` | `0x10060b09` | `0x1b0` | `x87 ST0 to float32` | `0x10060af5` | `0x10060afb` | `0x10060b06` |
| `subtitletime18` | `0x101b5eb4` | `0x10060b09` | `0x10060b3a` | `0x1b4` | `x87 ST0 to float32` | `0x10060b26` | `0x10060b2c` | `0x10060b37` |
| `subtitletime19` | `0x101b5ec4` | `0x10060b3a` | `0x10060b6b` | `0x1b8` | `x87 ST0 to float32` | `0x10060b57` | `0x10060b5d` | `0x10060b68` |
| `subtitletime20` | `0x101b5ed4` | `0x10060b6b` | `0x10060b9c` | `0x1bc` | `x87 ST0 to float32` | `0x10060b88` | `0x10060b8e` | `0x10060b99` |
| `subtitletime21` | `0x101b5ee4` | `0x10060b9c` | `0x10060bcd` | `0x1c0` | `x87 ST0 to float32` | `0x10060bb9` | `0x10060bbf` | `0x10060bca` |
| `subtitletime22` | `0x101b5ef4` | `0x10060bcd` | `0x10060bfe` | `0x1c4` | `x87 ST0 to float32` | `0x10060bea` | `0x10060bf0` | `0x10060bfb` |
| `subtitletime23` | `0x101b5f04` | `0x10060bfe` | `0x10060c2f` | `0x1c8` | `x87 ST0 to float32` | `0x10060c1b` | `0x10060c21` | `0x10060c2c` |
| `subtitletime24` | `0x101b5f14` | `0x10060c2f` | `0x10060c60` | `0x1cc` | `x87 ST0 to float32` | `0x10060c4c` | `0x10060c52` | `0x10060c5d` |
| `subtitletime25` | `0x101b5f24` | `0x10060c60` | `0x10060c91` | `0x1d0` | `x87 ST0 to float32` | `0x10060c7d` | `0x10060c83` | `0x10060c8e` |
| `subtitletime26` | `0x101b5f34` | `0x10060c91` | `0x10060cc2` | `0x1d4` | `x87 ST0 to float32` | `0x10060cae` | `0x10060cb4` | `0x10060cbf` |
| `subtitletime27` | `0x101b5f44` | `0x10060cc2` | `0x10060cf3` | `0x1d8` | `x87 ST0 to float32` | `0x10060cdf` | `0x10060ce5` | `0x10060cf0` |
| `subtitletime28` | `0x101b5f54` | `0x10060cf3` | `0x10060d24` | `0x1dc` | `x87 ST0 to float32` | `0x10060d10` | `0x10060d16` | `0x10060d21` |
| `subtitletime29` | `0x101b5f64` | `0x10060d24` | `0x10060d55` | `0x1e0` | `x87 ST0 to float32` | `0x10060d41` | `0x10060d47` | `0x10060d52` |
| `subtitletime30` | `0x101b5f74` | `0x10060d55` | `0x10060d86` | `0x1e4` | `x87 ST0 to float32` | `0x10060d72` | `0x10060d78` | `0x10060d83` |
| `subtitletime31` | `0x101b5f84` | `0x10060d86` | `0x10060db7` | `0x1e8` | `x87 ST0 to float32` | `0x10060da3` | `0x10060da9` | `0x10060db4` |
| `subtitletime32` | `0x101b5f94` | `0x10060db7` | `0x10060de8` | `0x1ec` | `x87 ST0 to float32` | `0x10060dd4` | `0x10060dda` | `0x10060de5` |
| `audiofile` | `0x101b5fa4` | `0x10060de8` | `0x10060e1a` | `0x1f0` | `engine AllocString string_t` | `0x10060e06` | `0x10060e0c` | `0x10060e17` |

## Native persistence layout

| Native name | Offset | Type ID | Count | Flags |
|---|---|---|---|---|
| m_iSubtitleNumber | 0xe8 | 10 | 33 | 0 |
| m_fSubtitleNumberNext | 0x16c | 0 | 33 | 0 |
| m_sAudioFile | 0x1f0 | 17 | 1 | 0 |
| m_iCurrentSubtitle | 0x1f4 | 10 | 1 | 0 |
| m_hPhoneUser | 0x1f8 | 4 | 1 | 0 |
| m_bAnswered | 0x200 | 12 | 1 | 0 |
| m_pPlayer | 0xe0 | 4 | 1 | 0 |

## Границы и воспроизведение

- Numeric integer path: полные сохранённые1016b55e/1016a01f/10169fb8 и прежний [reader contract](../server-state-reader/contract.md). Полный locale classifier и error handlers не переобъявлены завершёнными.
- Float path: установлены entry1016f5ec, его CALL1016da44(value,NULL), ST0 и FSTP float32. Полная floating parser grammar и platform-specific error modes остаются точной внешней границей; нельзя обещать поддержку exponent/hex/NaN по одному библиотечному имени.
- Base unknown-key path: [alias-state](../server-alias-state/contract.md), native1000dba0 сохранён и проверен полностью. DispatchKeyValue/порядок загрузки карты не выводятся из одного callback.
- Потребители данных: [phone lifecycle](../server-phone-call-lifecycle/contract.md). Этот пакет не доказывает, что все32 введённых элемента будут проиграны, либо что nonfinite time допустим для дальнейшего scheduler.

`python analysis/server-phone-call-keyvalue/capture.py`, затем `write_notes.py` и `verify.py`. Capture вызывает только objdump и читает PE как данные. Verify проверяет native SHA, все bounded bytes, descriptors/RTTI/API, literal sequence и полную схему всех65 unrolled branches. Код игры, исходный бинарник и shared catalog не изменяются.

## Продолжение разбора: pass20

Продолжение pass20: [subtitle_main lifecycle](../server-subtitle-main-lifecycle/contract.md) закрывает factory/export, четыре KeyValue branches, Spawn и Save/Restore CurrentLine. [Playback10077530](../server-subtitle-playback/contract.md) закрывает локальный выбор языка/чтение строк/маркер/ProFont fanout; эти primary больше не pending. [Weapon animation](../server-weapon-animation/contract.md) раскрывает sender ABI и ограниченную группу mobile callbacks; общий frame handler и downstream producers остаются отдельно. Сохранены конкретные residual boundaries в новых контрактах, engine/CRT/runtime не объявлены автоматически закрытыми.
