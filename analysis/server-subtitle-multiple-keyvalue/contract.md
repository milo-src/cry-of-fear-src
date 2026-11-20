# CSubtitleMultiple: полный KeyValue и пересечение slot32

Только статический разбор оригинального server hl.dll SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Новый REVIEW ровно один:10103130. Полный сохранённый C и все инструкции10103130..10103de4 сопоставлены с оригинальными байтами. Supporting C и четыре bounded native converter ranges не считаются новыми REVIEW. Цель не исполнялась. Адреса и object offsets шестнадцатеричные; индексы1..32, количества64/33 и32-bit width указаны в десятичной системе.

## 10103130 — SubtitleMultiple_KeyValueNumbersAndTimes

Native binding подтверждён factory10102fe0: vptr101df634, slot34→10103130. Экспорт subtitle_multiple10103f60 перенаправляет в эту factory; экспорт ChangeSubtitle10103040 подтверждает имя класса CSubtitleMultiple. Это concrete таблица именно здесь, а не гипотеза по SDK. Конкретные map entity instances и engine dispatch KeyValue в runtime не наблюдались; предыдущий lifecycle контракт остаётся источником связности Spawn/Use/Save/Restore.

ABI: thiscall, ECX=this, один stack указатель K, все65 путей возврата заканчиваются RET4. EBX сохраняет this, ESI=K, EDI=DWORD[K+4] (key pointer). DWORD[K+8] — value pointer, DWORD[K+0c] — handled. K+0 не читается. Проверок K/key наNULL и проверок длины нет. Primary не копирует/не освобождает key/value и не вызывает AllocString для64 собственных ключей. Значение handled не проверяется при входе: повторный вызов с тем же ключом вновь конвертирует и перезаписывает поле.

Порядок сравнения: сначала все32 `subtitlenumber1`..`subtitlenumber32`, затем все32 `subtitletime1`..`subtitletime32`. Это64 точные NUL-terminated строки из PE, а не общий prefix+numeric-index parser. Первые три number-сравнения встроены (двухбайтовый цикл с проверкой NUL после каждого байта); остальные61 вызывают1000aba0 с key и literal. Этот helper возвращает полный EAX1 только для побайтового равенства, иначе0. Все сравнения case-sensitive и требуют совпадения завершающего NUL. `subtitlenumber01`, `subtitlenumber0`, `subtitlenumber33`, иной регистр, пробел или суффикс не становятся numbered keys и доходят до fallback. Валидация числовой части самого имени не выполняется отдельно.

На совпадении numberN читается актуальный K.value, cdecl1016b55e(value) возвращает32-bit EAX; primary делает MOV DWORD[this+dc+4*N],EAX, затем K.handled=1 и возвращается. На совпадении timeN cdecl1016f5ec(value) возвращает floating результат в ST0; primary делает FSTP DWORD[this+15c+4*N], затем K.handled=1 и возвращается. FSTP сужает результат до binary32 и снимает его с x87 stack, с действующим x87 rounding/exception control. Нет промежуточного SSE conversion или int conversion для времени. Имя поля/offset у последнего элемента не исправляется по ожидаемой структуре.

Во всех64 ветвях store выполняется до handled=1. Нет проверки знака, range clamp, проверки конечности/NaN, errno, trailing characters или успешности converter. Numeric0 также сохраняется и считается обработанным ключом. Primary не увеличивает current index, не запускает Use/ChangeSubtitle, не назначает callback и не вызывает scheduler; исключение по памяти — time32 физически совпадает с полем current index, как описано ниже. На integer-ветви EAX incidental остаётся числом converter, а не boolean1; на float-ветви ST0 уже снят. Внешний логический результат — K.handled, не единый bool в EAX.

Точное соответствие всех ключей и native stores (N — decimal). JSON evidence дополнительно содержит каждый literal address, начало/конец ветви, converter CALL и storage opcode. Все32 number-конвертера ведут1016b55e; все32 time-конвертера ведут1016f5ec.

| N | `subtitlenumberN`: object offset / store | `subtitletimeN`: object offset / store |
|---:|---|---|
| 1 | 0xe0 / 0x10103179 | 0x160 / 0x101037d5 |
| 2 | 0xe4 / 0x101031c8 | 0x164 / 0x10103806 |
| 3 | 0xe8 / 0x10103217 | 0x168 / 0x10103837 |
| 4 | 0xec / 0x10103248 | 0x16c / 0x10103868 |
| 5 | 0xf0 / 0x10103279 | 0x170 / 0x10103899 |
| 6 | 0xf4 / 0x101032aa | 0x174 / 0x101038ca |
| 7 | 0xf8 / 0x101032db | 0x178 / 0x101038fb |
| 8 | 0xfc / 0x1010330c | 0x17c / 0x1010392c |
| 9 | 0x100 / 0x1010333d | 0x180 / 0x1010395d |
| 10 | 0x104 / 0x1010336e | 0x184 / 0x1010398e |
| 11 | 0x108 / 0x1010339f | 0x188 / 0x101039bf |
| 12 | 0x10c / 0x101033d0 | 0x18c / 0x101039f0 |
| 13 | 0x110 / 0x10103401 | 0x190 / 0x10103a21 |
| 14 | 0x114 / 0x10103432 | 0x194 / 0x10103a52 |
| 15 | 0x118 / 0x10103463 | 0x198 / 0x10103a83 |
| 16 | 0x11c / 0x10103494 | 0x19c / 0x10103ab4 |
| 17 | 0x120 / 0x101034c5 | 0x1a0 / 0x10103ae5 |
| 18 | 0x124 / 0x101034f6 | 0x1a4 / 0x10103b16 |
| 19 | 0x128 / 0x10103527 | 0x1a8 / 0x10103b47 |
| 20 | 0x12c / 0x10103558 | 0x1ac / 0x10103b78 |
| 21 | 0x130 / 0x10103589 | 0x1b0 / 0x10103ba9 |
| 22 | 0x134 / 0x101035ba | 0x1b4 / 0x10103bda |
| 23 | 0x138 / 0x101035eb | 0x1b8 / 0x10103c0b |
| 24 | 0x13c / 0x1010361c | 0x1bc / 0x10103c3c |
| 25 | 0x140 / 0x1010364d | 0x1c0 / 0x10103c6d |
| 26 | 0x144 / 0x1010367e | 0x1c4 / 0x10103c9e |
| 27 | 0x148 / 0x101036af | 0x1c8 / 0x10103ccf |
| 28 | 0x14c / 0x101036e0 | 0x1cc / 0x10103d00 |
| 29 | 0x150 / 0x10103711 | 0x1d0 / 0x10103d31 |
| 30 | 0x154 / 0x10103742 | 0x1d4 / 0x10103d62 |
| 31 | 0x158 / 0x10103773 | 0x1d8 / 0x10103d93 |
| 32 | 0x15c / 0x101037a4 | 0x1dc / 0x10103dc4 |

Числовой integer путь подтверждён полными supporting C/ASM1016b55e,1016a01f,10169fb8 и ранее проверенным server-map-equipment-parser контрактом. Wrapper1016b55e вызывает1016a01f(NULL,text,NULL,10,1): signed decimal32, locale whitespace, необязательный один знак, цифры до первого неподходящего байта. Нет цифр→0; suffix не проверяется. Примеры для обычного ASCII из этого пути: `12.75`→12, `-4junk`→-4, `1e3`→1. Overflow detector10169fb8 устанавливает AL для magnitude overflow/accumulator overflow; parser насыщает signed результат до7fffffff либо80000000 и задаёт errno22h. KeyValue не читает errno и не превращает saturation в отказ. Это пределы конкретного native CRT integer converter, не дополнительный clamp по диапазону субтитров.

Float converter ABI уточнён из native bytes, а не из ложной Ghidra подписи `FID_conflict__atof(wchar_t*)`.1016f5ec передаёт(value,0) в1016da44. При nonNULL value wrapper создаёт locale context, обнуляет локальный double, вызывает1016db80(localeInfo,{text,endPointerNULL},&double) и возвращает загруженный QWORD в ST0.1016db80 вызывает scanner1016dc68 и преобразователь10160644; статус последнего не проверяется1016da44. У scanner в сохранённом bounded prologue1016dc8d/1016dc96 читается BYTE, курсор увеличивается на1, whitespace пропускается через helper с mask8. Это узкая строка, не UTF-16/wchar_t. Поддержаны только эти доказанные wrapper/ABI факты: полная грамматика float, locale decimal separator, специальные NaN/Inf spelling, точные float overflow/underflow/error branches1016dc68/10160644 этим пакетом не закрыты.

При valueNULL ветка1016da44 записывает errno16h, вызывает1016fa52 и, если обработчик возвращает управление, делает FLDZ; caller тогда может записать0 и handled1. Сам KeyValue не делает NULL check. Нельзя обещать успешное продолжение после invalid-parameter handler или интерпретировать это как безопасную обработку всех невалидных указателей. Безопасность указателя и доступность NUL-строк — внешнее предусловие. Для nonNULL input suffix/end pointer не анализируется caller: преобразование и запись происходят независимо от того, сколько символов потребил backend.

Перекрытия доказаны одновременно stores и native descriptors10219bd8, а не inferred C layout. Descriptor `m_iSubtitleNumber` type10 offsetdc,count33 покрывает dc..15c; `m_fSubtitleNumberNext` type0 offset15c,count33 покрывает15c..1dc; `m_iCurrentSubtitle` type10 offset1dc,count1; `m_flStartTime` type15 offset1e0,count1. Number32 пишет15c, то есть первый DWORD timing descriptor (его index0), но ключа subtitletime0 в обработчике нет. Time32 пишет1dc, тот же DWORD что current index. Initial number index0 вdc не заполняется ни одним собственным ключом.

В частности native10103dc4 выполняет FSTP DWORD[this+1dc]. Это битовая перезапись integer current index binary32 значением, НЕ преобразование float→int. Если ST0 даёт1.0, в этой ячейке окажутся биты3f800000, и integer reader увидит1065353216; если сохранён -0.0, integer reader увидит80000000. Эти примеры — условные bit-level следствия записи, а не утверждение о полном разборе текстовых форм backend. Spawn10103ea0 заменяет current index на1 только когда raw DWORD==0; ненулевой float pattern не исправляет. Use10103f00 всегда пишет integer1 в1dc, тем самым уничтожая ранее записанное timing32.

Далее ChangeSubtitle10103040 выбирает subtitle по current index и планирует next через offset160+4*старыйIndex. При нормальном currentIndex31 и неизменённых callbacks эта next-delay ячейка равна1dc: читается float reinterpretation самого integer31, а не первоначально сконфигурированное time32; увеличение текущего integer index до32 выполняется только если следующий number32 ненулевой и native delay guard101030f0..101030f7 пропускает значение (ordered zero отклоняется). Если number32==0, возврат происходит ещё до чтения next-delay. При currentIndex32 проверка signed index<32 не проходит. Отрицательный/очень большой index, вызов ChangeSubtitle до нормального Use и изменения callback могут давать другие обращения, поскольку прямое чтение subtitle по current index не имеет bounds guard. Это статическое следствие совпадения addresses и уже разобранных lifecycle условий; реальные карты и runtime-сценарии не запускались.

Неизвестный собственный ключ идёт в прямой call1000dba0(this,K) на10103ddb; возвращается через обычный epilogue RET4. Fallback полностью сохранён как support: точный ключ `movewith` → engine AllocString(value) в object+18 и handled1; `skill` →1016b55e(value) в object+60 и handled1; `style` →1016b55e(value) в object+64 и handled1; иначе handled0. Нет further superclass call после этих трёх вариантов. Primary не очищает handled перед делегированием, но fallback явно выставляет1/0. Ошибочное номерное имя не создаёт произвольный array write: оно просто не совпадает с64 literals и с тремя inherited keys.

Ни один собственный numbered key не пишет entvars и не выделяет строки: это поля private object CSubtitleMultiple, не одноимённые offsets pev. Более ранние values других slots сохраняются. При повторном ключе побеждает последняя завершённая запись, без accumulation или normalisation. Согласование времён друг с другом, monotonic ordering и наличие соответствующего number не проверяются. Факт обработанного ключа не доказывает корректность будущего client subtitle display.

## Границы и воспроизведение

Закрыты все локальные ветви10103130,64 literal mappings, fullEAX/ST0 storage ABI, parent fallback, concrete factory slot34 и два граничных пересечения полей. Не закрыты полный CRT float parser/conversion backend, engine map dispatch/lifetime, поведение subtitle_main и локализация/показ клиентом. Native-only ranges явно помечены в evidence:1016f5ec/1016da44/1016db80 полные wrappers,1016dc68..1016dcfc лишь scanner prologue; для них новых REVIEW нет. capture.py и verify.py не требуют ignored локальных snapshots; initial pending blocks встроены, baseline pin указывает на tracked pass18 verification1876reviewed.

## Продолжение разбора: pass20

Продолжение pass20: [subtitle_main lifecycle](../server-subtitle-main-lifecycle/contract.md) закрывает factory/export, четыре KeyValue branches, Spawn и Save/Restore CurrentLine. [Playback10077530](../server-subtitle-playback/contract.md) закрывает локальный выбор языка/чтение строк/маркер/ProFont fanout; эти primary больше не pending. [Weapon animation](../server-weapon-animation/contract.md) раскрывает sender ABI и ограниченную группу mobile callbacks; общий frame handler и downstream producers остаются отдельно. Сохранены конкретные residual boundaries в новых контрактах, engine/CRT/runtime не объявлены автоматически закрытыми.
