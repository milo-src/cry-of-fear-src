# Save/restore serializer: wire format, types and error boundaries

Этот проход добавляет30 ранее pending actual C-функций из server partial-pass. Уже существующие REVIEW10117010 (ReadFields) и1011adc0 (WriteFields) используются как support; новый пакет их не заменяет. Это статическое исследование исходного `hl.dll`, без исполнения DLL, игры, сборки, REA-процесса, изменения ресурсов или коммитов.

[notes.json](notes.json) содержит карточки; [evidence.json](evidence.json) —40 C hashes (30 primary,10 support),35 ограниченных ASM-диапазонов,5 raw tables и102 исходных строковых имени ENTVARS. [capture.py](capture.py) воспроизводит чтение и objdump при точном SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. ASM ranges start-inclusive/end-exclusive; все сохранённые C ranges inclusive перечислены отдельно, в том числе non-contiguous support memcpy. Таблицы переходов сняты отдельно, а не объявлены исполняемой частью соседних функций.

## Карта функций и ABI

Во всех описанных methods ECX=this. Stack аргументы перечислены слева направо как в предложенном прототипе; `RET N` подтверждает очистку аргументов. Это native x86 ABI, не C-декларации из SDK.

| Адрес | Предложенное действие | Аргументы / результат |
|---|---|---|
| 10116020 | BindData | data → this; RET4 |
| 10116140 | BufferData | source,n; RET8; без boolean status |
| 101161a0 | BufferField | name,n,source; RET0c |
| 101161d0 | BufferHeader | name,n; RET8 |
| 10116220 | CurrentPayloadPointer | → pointer/NULL |
| 10116230 | BufferReadBytes | destination,n; RET8 |
| 101162a0 | BufferReadHeader | output{u16 size,u16 token,pointer}; RET4 |
| 101162e0 | BufferRewind | n; RET4 |
| 10116310 | BufferSkipBytes | n; RET4 |
| 10116420 | IsAllZero | data,n →0/1; RET8 |
| 10116490 | EntityFromSavedId | id →edict/NULL; RET4 |
| 101164d0 | EntityOrdinalFromEngineOffset | offset →ordinal/-1; RET4 |
| 101164f0 | EntityOrdinalFromEdict | edict →ordinal/-1; RET4 |
| 10116530 | EntityOrdinalFromEntvars | entvars →ordinal/-1; RET4 |
| 10116550 | EntityOrdinalFromPrivateObject | object →ordinal/-1; RET4 |
| 10116910 | NameHash | name →DWORD hash; RET4 |
| 10117220 | TokenHashIntern | name →token вAX; RET4 |
| 10117100 | ReadInt32 | →DWORD (default0) |
| 10117160 | ReadUInt16 | →WORD в AX; старшие 16 бит EAX не определяются; default0 только для AX |
| 10116c30 | ReadEntvars | blockName,entvars →ReadFields result; RET8 |
| 1011ad70 | WriteEntvars | blockName,entvars →WriteFields result; RET8 |
| 10116c50 | DecodeNamedField | base,table,count,start,bytes,name,payload →index/-1; RET1c |
| 1011ad60 | WriteRawField | name,n,source; tail-thunk BufferField |
| 1011b110 | WriteFloatArrayRaw | name,source,count; RET0c |
| 1011b190 | WriteInt32ArrayRaw | name,source,count; RET0c |
| 1011b130 | WriteFunctionName | ownerLabel,name,source,count; RET10; count не читается |
| 1011b220 | WritePositionVectorArray | name,source,count; RET0c |
| 1011b320 | WriteStringIdArray | name,source,count; RET0c |
| 1011b3c0 | WriteTimeArrayRelative | name,source,integer count; RET0c |
| 1011b440 | WriteVectorArrayRaw | name,source,count; RET0c |

Связь с прошлым проходом: [global-state contract](../server-queue-a/contract-global.md). GlobalState Save/Restore используют этот общий serializer. Их проверки возвратов не добавляют проверок, отсутствующих в core.

## Состояние buffer и token table

Объект reader/writer хранит внешний data pointer по+0. BindData только записывает этот pointer и возвращает this; владение и allocation не создаёт. По фактическим обращениям в data:

| Offset | Использование в этом пакете |
|---|---|
| +0 | base буфера |
| +4 | текущий cursor |
| +8 | использованная/пройденная длина |
| +c | capacity |
| +14 | количество token slots |
| +18 | массив char* token names |
| +20 | число entity table entries |
| +28 | entity table, stride0x18 |
| +52c | разрешение landmark поправки |
| +544,+548,+54c | landmark vector |
| +550 | базовое время save/restore |

Reader+4 разрешает сохранение существующих полей с descriptor.flags&1 при global overlay; reader+8 разрешает precache восстановленных model/sound strings. Их значения выставляют callers, BindData не инициализирует эти два поля.

NameHash10116910 делает `h=ROR32(h,4) XOR signExtend(int8(c))` для каждого byte доNUL. MOVSX важен для bytes>=128. Пустая строка даёт0; NULL не обработан.

TokenHash10117220 считает unsigned `hash % tokenCount`, сужает старт до16бит, затем linear probing с одним wrap, максимумcount попыток. Сравнение имён case-sensitive. В пустой slot **или в slot равного имени** пишет исходный pointer name; не делает копию и может заменить pointer на равную строку другого владельца. Требуемый lifetime token strings обеспечивается вне этого метода. Возвращается AX; успешный `MOV AX,BX` не очищает верх EAX. Caller должен использовать16битный результат, что Header и ReadFields действительно делают.

При полной таблице diagnostic и token0; это не отдельный failure sentinel, поскольку0 допустим как slot. DIV находится до проверки signed count>0: count0 не является штатной обработанной пустой таблицей. NULL data/table/name и maxcount<=65536 локально не проверяются.

## Wire layout и порядок

Каждый именованный record:

```text
LE16 payloadByteCount
LE16 tokenIndex
payload[payloadByteCount]
```

BufferHeader пишет две отдельные2байтные части. Header size — младшие16бит исходной32битной длины; предупреждение лишь при signed `n>65536`, не при `n==65536`, после предупреждения запись продолжается. Реальный payload writer может записывать исходный n, а reader пропускает zero-extended16битную длину header. Это описание точных границ, не рекомендация генерировать некорректные сохранения.

WriteFields1011adc0 записывает сначала record с именем блока, payload которого — одинDWORD числа непустых полей. Затем идут records отдельных непустых полей. ИмяownerLabel (первый аргумент), blockName (второй) и descriptor fieldName — разные значения. OwnerLabel используется только для diagnostic invalid function pointer в1011b130.

Descriptor stride16: type DWORD+0, name pointer+4, object offset DWORD+8, signed16 elementCount+0c, flags WORD+0e. All-zero проверяется по `genericSize[type] * signedCount`; это raw bytes, а не semantic numeric zero. Поля с count<=0 IsAllZero считает пустыми. Float -0 не равен all-zero; такое поле может сохраниться. Writer flags&1 не фильтрует: эта маска имеет значение у reader overlay.

ReadFields10117010 читает дваWORD header, игнорирует первый size, сравнивает token с TokenHash(blockName). Mismatch→Rewind4 и result0. TokenHash при этом мог изменить token table: rewind относится только к cursor/used. Match→ReadInt32 recordCount, очищает все допустимые destination fields, затем читаетrecordCount records. При каждом BufferReadHeader сохраняет payload pointer **до** skip, но передаёт decoder pointer уже после продвижения общего cursor.

Field token используется как индекс data.tokens[token] без проверки count. Decoder ищет имя case-insensitive через __stricmp, начиная `(previousMatch+1)%descriptorCount`; unknown field→-1, следующий start снова0. Это позволяет перестановку полей и пропуск незнакомого имени, но не доказывает устойчивость к повреждённому header.

Оба loop ReadFields используют младшие16бит растущего счётчика при сравнении с32битными bounds. Верхняя граница recordCount/descriptorCount в этом теле не enforce-ится; не следует считать reader безопасным для произвольных размеров. Число <=0 пропускает соответствующий loop.

## Семантика native type IDs

Raw genericSize1021b140 для0..17: `[4,4,4,4,4,4,4,12,12,4,4,4,4,2,1,4,4,4]`. Это размер lookup, используемый generic кодом; он **не равен полному native размеру каждого объекта** (особенно handle type4). Названия ниже описывают операции, не заявляют восстановление исходных enum symbols.

| Type | Запись | Восстановление |
|---:|---|---|
| 0 | count*4 raw, helper1011b110 | rawDWORD |
| 1 | string_t→NUL strings | empty→0, иначеAllocString |
| 2 | engine entity offset→edict→save ordinal | savedID→edict→engine entity offset; missing0 |
| 3 | private object→entvars→edict→ordinal | savedID→edict.private+7c; missing0, diagnostic кромеID-1 |
| 4 | handle с шагом8→валидный private object→ordinal | savedID→handle setter(edict+serial), destination шаг8 |
| 5 | entvars→edict→ordinal | savedID→edict+80 либоNULL |
| 6 | edict→ordinal | savedID→edict либоNULL |
| 7 | count*12 raw vec3 | три rawDWORD |
| 8 | vec3 минус landmark приdata+52c | vec3 плюс landmark приdata+52c |
| 9 | count*4 raw | rawDWORD |
| 10 | count*4 raw | rawDWORD и копия последнего элемента в1023105c |
| 11 | первый function pointer→NUL engine name | empty→NULL, иначеFunctionFromName |
| 12 | count*4 raw | rawDWORD и копия последнего элемента в1023105c |
| 13 | count*2 raw | WORD |
| 14 | count raw bytes | BYTE |
| 15 | floatTime-data.time550 | floatTime+data.time550 |
| 16 | какstring type1 | AllocString, затем model precache еслиreader+8 |
| 17 | какstring type1 | AllocString, затем sound precache еслиreader+8 |

Время/векторы меняются локально, исходная память writer не изменяется. Нулевое поле может быть полностью пропущено ещё до relative преобразования; специальная обработка sentinel timers внутри1011b3c0 отсутствует. Ghidra `float` для integer count и pointer/result casts в decoder — артефакты: ASM показывает integer MOV/LEA, а не численное преобразование адресов вfloat.

String arrays записываются двумя проходами: сумма strlen+1, header, затем все NUL-строки. Decoder для каждого i сканирует от начала payload через i terminators, поэтому это packed strings, а не arrayDWORD wire. Нет local length/end guard. Empty string получает string_t0 без AllocString. Model helper10116990 и sound helper10116a30 уже имеют собственные REVIEW; эти calls не равны доказанному успешному precache.

Function-name writer получает count, но читает **только первый** pointer. NameForFunction failure выдаёт diagnostic и не пишет record, хотя верхний writer уже включил поле вrecordCount. Decoder type11 использует generic source stride4, а не аналог packed-string enumeration. Поддержку function-pointer arrays нельзя считать корректно реализованной только по общему count аргументу. Точное разрешение engine symbol names остаётся внешней границей.

Для entity types2..6 writer использует локальныйDWORD[64]. При count>64 пишет warning, но не ограничивает loop. Save lookup возвращает ordinal позиции втаблице, Restore lookup сравнивает сохранённый ID сrecord+0, затем возвращаетedict record+4. Эти методы взаимно согласованы только при подходящей инициализации table IDs; producer таблицы ещё не исследован.

Type4 заслуживает отдельного различения: generic size lookup равен4, wire имеет4байтовыйID, но writer читает handle с шагом8, а reader destination вычисляет `base+offset+i*8` (ASM10116e9b..eaa). Setter10017740 хранитedict и его serial. Общая zero-check/clear стадия по-прежнему использует4*count, не8*count: нельзя описывать её как гарантированное полное обнуление native handle array. Последствия для конкретных descriptor arrays и default constructors требуют отдельной проверки.

## ENTVARS и имена полей

ReadEntvars10116c30/WriteEntvars1011ad70 передают table1021aae0,count102. Все102 records с именами/типами/offsets сохранены в evidence. WriteEntvars выбираетownerLabel из targetname+1d0, иначеclassname+0; название блока поступает отдельным аргументом.

Непосредственные имена из native table уточняют старые offset labels:

- `message` +1d8: type1; `noise` +1ec: type17; `noise3` +1f8: type17.
- `vuser1/2/3/4`: +268/+274/+280/+28c.
- `globalname`, `model`, `mins`, `maxs`, `size`, `target`, `targetname` имеют flags1 и сохраняют старые destination значения в global overlay.

Например pending alias target вpev+1ec занимает поле с native descriptor name `noise`, не `noise3`. Если оно проходит ENTVARS Restore сreader+8!=0 и ненулевой строкой, применяется type17 sound precache path. Это статическая связь поля сdecoder, не наблюдение звука/ошибки вruntime.

Таблица не содержит descriptor для каждого байта entvars и не устанавливает полный ABI всех consumers; numeric field facts из raw table надёжнее перенесённых по памяти SDK labels.

## Ошибки, границы и уточнение прежних контрактов

BufferData: data==NULL→no-op. Signed `used+n>capacity`→diagnostic, used=capacity, cursor прежний, payload не записан. BufferReadBytes дополнительно требует signed(cursor-base)<capacity; overflow аналогично меняет used, но не cursor/destination. При destinationNULL успешный read просто продвигает позицию. Rewind вычитает signed min(n,used); отрицательные n не запрещены. Эти функции не возвращают надёжный boolean; ReadInt32/ReadUInt16 используют zero-initialized local и поэтому отказ чтения неотличим от корректного0.

**WriteFields всегда устанавливает EAX=1 на обычном возврате** (ASM1011b097), в том числе после warning/overflow/Bad field type/invalid function pointer. Это уточняет предыдущий global-state контракт: CGlobalState_Save действительно проверяет0, но данный writer не сообщает такие ошибки нулём. Нельзя считать эти проверки доказательством целостного успешного save.

ReadFields возвращает0 при block-token mismatch, иначе1 после своего loop; unknown fields и void low-level read failures не превращаются в0. Decoder принимает payloadBytes, но не читает этот аргумент и не сверяет payload сdescriptor count. Type lookup индексируется до switch bounds guard. Это описание отсутствующих локальных проверок, а не доказательство runtime exploit или поведения на конкретном повреждённом файле.

Engine API binding: GiveFnptrsToDll100b4aa0 копирует144 DWORD в10222f48. Slots69/70 — PEntityOfEntOffset/EntOffsetOfPEntity,78/79 — FunctionFromName/NameForFunction; это не IndexOfEdict. Native call addresses и hash-pinned `external/hlsdk-portable/engine/eiface.h` сохранены в manifest. Саму внутреннюю реализацию engine callbacks этот пакет не раскрывает.

Остались открыты producer/lifetime save-data иtoken dictionary, engine container/header framing, entity table ID assignment, формат сериализации самой token table, engine function symbol lookup и ограничения upstream descriptor producers. Общий алгоритм byte-copy10140130 включён какsupport C, но не объявлен полностью исследованным по всемCPU/overlap ветвям. Достижимость edge cases и последствия ошибок на реальных saves не проверялись. Новые REVIEW отражают локально доказанное поведение30функций, не процент готовности всей игры.
