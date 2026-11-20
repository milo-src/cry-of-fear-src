# CSubtitle / subtitle_main: создание, ключи и сохранение состояния

Статический разбор оригинального server hl.dll, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Шесть новых REVIEW; playback10077530 — отдельный пакет. Полные saved C и native инструкции первичных функций сопоставлены с исходными байтами. Игра не исполнялась. Адреса, offsets и маски ниже hexadecimal; число descriptors и размеры в явно обозначенных counts — decimal.

Native factory устанавливает vptr101b5900; COL/type descriptor содержит `.?AVCSubtitle@@`. Его slots: +2c Spawn100774e0, +34 KeyValue100772e0, +38 Save10077480, +3c Restore10077440, +e8 playback10077530. Это binding конкретной новой allocation; factory не проверяет тип уже существующего private object. Экспорт `subtitle_main`, ordinal752, ведёт10077910. Не предполагается, что сохранённые pointers доказывают фактическую активацию entity на карте.

Native descriptor10212e28 имеет ровно одну запись: `CurrentLine`, type0, offsetdc, count1, flags0. Он задаёт float-поле private object, а не entvars. В собственном объекте размеромe0h это последний DWORD. BASE10211760 count22 и ENTVARS1021aae0 count102 сохранены отдельно; имена `origin`+8, `v_angle`+74, `solid`+10c, `effects`+118, `targetname`+1d0 подтверждены этими native данными. Entvars+20c используется как edict pointer по коду; имя этого поля не выводится из отсутствующего save descriptor.

## 0x1005fbc0 — Subtitle_GetOrCreatePrivate

Native cdecl принимает один stack argument — entvars pointer V; meaningful pointer возвращается полным EAX, plain RET. Ghidra void и его выражение iRam00000004 не описывают реальный successful-return ABI. Если V==NULL, engine slot21 CreateEntity вызывается без аргументов; при nonNULL edict V становится edict+80. При NULL результате V остаётся NULL, и следующий MOV[V+20c] разыменовывает его: нет безопасного раннего NULL return.

Из V+20c берётся edict D. Если D!=NULL и DWORD[D+7c] private-data!=NULL, этот pointer сразу возвращается без class/vtable/lifetime проверки, без записи pev и без повторной инициализации. Нулевой D либо private-data ведёт к engine slot63 PvAllocEntPrivateData(D,e0h). D может быть NULL: локального отказа до engine call нет.

При ненулевой allocation A пишет DWORD[A]=101b5900 и DWORD[A+4]=V, возвращает A. Других полей, в частности CurrentLine+dc, не инициализирует; нулевое содержимое engine allocation нельзя считать фактом этого тела. При allocationNULL явно XOR EAX,EAX, затем MOV[EAX+4],ESI: запись по адресу4 предшествует plain RET. Это native failure path, а не безопасное возвращение NULL. Владение allocation/освобождение принадлежит внешнему engine API; local destructor, free и вызов Spawn отсутствуют. Входной аргумент перезаписывается в stack slot, что не меняет caller variable, переданную по значению.

## 0x10077910 — subtitle_main_ExportThunk

Пять байтов E9ab82feff на10077910 — прямой tail JMP1005fbc0. Нет своего stack frame, параметров сверх inherited stack V, normalisation EAX, Spawn или cleanup. Сохранённый C разворачивает factory целиком, но собственный native диапазон10077910..10077914 содержит только jump. Экспорт ordinal752/name_index751 независимо закреплён PE export table; это регистрационный вход classname `subtitle_main`, а не отдельная реализация playback. Все guard/failure/ownership особенности factory сохраняются через tail transfer.

## 0x100772e0 — Subtitle_KeyValue

Thiscall ECX=this, stack K; все пять путей заканчиваются RET4. K+4 — NUL-terminated key, K+8 — value pointer, K+0c — handled DWORD; K+0 не читается. Нет NULL/длины проверки K/key; value читается только при совпадении. Четыре точных case-sensitive inline byte comparisons идут в порядке `linenumber` (literal101bb29c), `movewith` (101a247c), `skill` (101a2488), `style` (101a2490). Двухбайтовый цикл проверяет NUL после каждого байта. Не выполняется prefix parsing, trimming или приведение регистра.

`linenumber` вызывает cdecl1016f5ec(value), затем FSTP DWORD[this+dc] и handled=1. Это ST0→binary32 с действующим x87 rounding/exception control, не atoi и не float→integer. Дробные, отрицательные или иные результаты converter не ограничиваются диапазоном строк; caller не проверяет errno, trailing input или finite/NaN. FSTP снимает ST0. Logical result — handled, не унифицированный bool в EAX; float result уже не остаётся в ST0 после store.

Narrow-byte converter ABI повторно закреплён полными native wrappers1016f5ec/1016da44/1016db80 и bounded prologue1016dc68: BYTE reads и cursor increment1 опровергают Ghidra wchar_t*. Это не доказательство полной float grammar. Wrapper с valueNULL задаёт errno16h, вызывает invalid-parameter handler и, только если тот возвращает управление, FLDZ. KeyValue не валидирует value и не гарантирует переживание этого handler. Полные locale/NaN/Inf spelling, overflow/underflow и scanner/backend10160644 остаются отдельной границей.

`movewith` вызывает engine slot67 AllocString(value), пишет EAX в object+18, handled=1; не копирует строку собственным allocator и не освобождает прежний string_t. `skill` и `style` вызывают1016b55e(value), записывают полный EAX соответственно+60/+64 и handled=1. Конкретный integer wrapper ведёт signed decimal parser1016a01f(NULL,text,NULL,10,1): leading locale whitespace, один знак, digit prefix; отсутствие цифр даёт0, signed overflow насыщает INT_MIN/INT_MAX с errno22h. Эти значения KeyValue не проверяет и не превращает в отказ. Integer EAX остаётся incidental числом, а не handled1.

Для остальных ключей только K.handled=0; object fields не меняются. Нет делегирования parent KeyValue: три base-подобных ключа реализованы inline в этом теле. Все recognised stores выполняются до handled1; повторный вызов перезаписывает поле независимо от прежнего handled. Ни один вариант не запускает playback, не назначает think и не меняет entvars. Полная интерпретация сохранённого CurrentLine во время playback10077530 относится к соседнему контракту.

## 0x10077440 — Subtitle_Restore

Thiscall ECX=entity, один stack context R, RET4. Сохраняет entity в ESI и сначала вызывает10017f30(entity,R). При полном EAX==0 немедленно возвращает этот0; собственный descriptor не читается. Ненулевой результат приводит к ECX=R и ReadFields10117010("CSubtitle",entity,10212e28,1), четыре stack arguments; затем EAX core reader передаётся без изменения. Это не один общий bool успеха всех внешних действий и не void, несмотря на C prototype.

Собственный этап восстанавливает только CurrentLine+dc через type0/count1. Нет post-restore clamp, index reset, вызова Spawn/playback или собственной фиксации invalid values. Наследуемый10017f30 уже читает ENTVARS, затем BASE22 при успешном первом чтении; его model/size restoration tail может выполняться даже после reader failure, после чего он возвращает сохранённый EAX. Поэтому ранний0 не доказывает отсутствие side effects. Собственная функция не делает rollback ни parent state, ни частичной работы core reader. Точный порядок tokens/clearing/errors ReadFields раскрыт в serializer контракте; этот wrapper не добавляет транзакционности.

## 0x10077480 — Subtitle_Save

Thiscall ECX=entity, stack context W, RET4. Сначала10018000(entity,W); EAX==0 возвращается сразу. При ненулевом результате заново берёт entity.pev и global string pool. Если pev.targetname+1d0 string_t!=0, diagnosticName=pool+targetname, иначе pool+pev.classname+0. Проверяется только integer offset0, не пустота строки; ненулевой offset на пустую строку всё равно выбирает targetname branch.

Оба пути вызывают WriteFields1011adc0 с ECX=W и пятью stack arguments `(diagnosticName,"CSubtitle",entity,10212e28,1)`. `CSubtitle` — class/field block label, первый extra argument — диагностическая строка, а не замена block name и не сериализованный filename. RET14h core writer потребляет пять arguments; wrapper возвращает его полный EAX без нормализации. Нативный core writer на обычном возврате ставит1, включая пути с предупреждениями/overflow, поэтому returned1 не доказывает полную успешную запись. При parent0 own block не вызывается.

Свой block содержит только float CurrentLine+dc. Parent10018000 перед этим вызывает virtual+14, затем пишет ENTVARS и BASE22; внешние callbacks и writes могут менять поля до последующего reread pev/targetname. Wrapper не snapshot-ит entity и не откатывает уже записанные блоки. Файловые open/write/close, память buffer ownership и сериализация всего savegame этим wrapper не выполняются. Роль virtual+14 и внутренние serializer limits остаются по соответствующим supporting контрактам, без предположения, что callback пуст для любого реального объекта.

## 0x100774e0 — Subtitle_Spawn

Thiscall ECX=this, stack arguments отсутствуют, plain RET, meaningful boolean отсутствует. Сначала cdecl10119fe0(this,&this.pev.origin+8). Helper вызывает own virtual+d0; если он ненулевой, копирует12байт origin в private+618..620, затем engine slot28 SetOrigin(edict,originPointer). У новой CSubtitle таблицы slotd0→1000db80, который XOR EAX,EAX/RET; поэтому эта player-specific copy не выполняется для доказанного concrete binding. Иные vptr не проверяются wrapper. Origin передаётся pointer в текущие entvars, не отдельный snapshot vector.

После SetOrigin native заново читает pev, пишет solid+10c=0, снова читает pev и присваивает effects+118=80h. Это полная assignment, не OR: прежние effect bits теряются. Далее ещё раз загружает pev и копирует QWORD global10222f34 в pev.v_angle+74..78, DWORD10222f3c в+7c. Поле angles+50 не меняется этим кодом. Глобальные12байт находятся в zero-fill tail PE section; отсутствие raw-backed bytes означает loader initial zero, но не доказывает их значение после внешней инициализации. Поэтому native операция описана как copy shared vector, не безусловный literal zero.

Spawn не пишет CurrentLine+dc, movetype, model, размеры bbox, target или callback; не вызывает parent Spawn/Precache и не отправляет subtitle message. Он не назначает deadline и не запускает playback. Часть origin/edict effects принадлежит engine SetOrigin, который здесь не исполнялся. После внешнего callback последующие pev reads используют актуальное поле; object lifetime и validity после callback не защищены локальными checks.

## Границы и воспроизведение

Закрыты полные локальные ветви всех шести primary, native binding, owned field descriptor, ABI и порядок inherited save/restore. Сохранённые supporting bodies и converter-only ranges не повышены до новых REVIEW. Playback10077530, localization/files/parser/messages, весь float backend и engine runtime ownership рассматриваются отдельно. Базовые typed serializer ограничения сохранены в [serializer](../server-serializer/contract.md); floating ABI — в [numbered subtitle keys](../server-subtitle-multiple-keyvalue/contract.md).

`python analysis/server-subtitle-main-lifecycle/capture.py` повторяет только статические PE/objdump reads; `verify.py` независимо сверяет PE mapping, исходные hashes, native bytes, tables, export и шесть карточек. Initial pending blocks встроены; public pass19 verification1890 закреплён вместо обязательного ignored snapshot. Оригинальные DLL/ресурсы не меняются.
