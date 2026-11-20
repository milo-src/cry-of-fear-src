# Сервер: загрузка и выбор sentence groups

Статический разбор оригинального `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Все 11 primary были pending перед разбором. Игра, DLL и ресурсы не запускались и не изменялись. `capture.py` сохраняет C hashes, непрерывные диапазоны ASM, проверяет каждую строку машинных байтов по PE и фиксирует литералы в `evidence.json`. Имена ниже — предложенные описательные имена, не восстановленные символы оригинального исходника.

## Владение данными и связи

| Адрес | Подтверждённое назначение |
|---|---|
| `102268c0` | Массив имён отдельных sentences: очищаются `0x6000` байт, шаг `0x10`, то есть место для 1536 записей по 16 байт |
| `1022c8c0` | DWORD количества записанных имён, непосредственно после массива |
| `1022c8c4` | DWORD готовности, проверяется загрузчиком и большинством group helpers |
| `1022c8c8` | Массив групп: очищаются `0x28a0` байт, 200 записей с шагом `0x34` |
| group `+0` | Имя-префикс, номинальное место 16 байт |
| group `+0x10` | DWORD числа строк в группе; lookup/initializer читают DWORD, pick helpers только младший BYTE |
| group `+0x14` | 32 байта переставленных индексов; выбранный слот становится `0xff` |

Все primary — свободные функции со стековыми аргументами и обычным `RET`, не методы с владельцем в ECX. Часть C ошибочно объявлена `void`: возвращаемые индексы восстановлены по EAX. Cookie helper `1013dbb3` на успешном пути делает только сравнение ECX и RET, сохраняя EAX; ветка повреждения cookie здесь не исследуется.

`10120eb0` вызывает initializer после `101207e0` и до `100fef60`. Это зафиксированный callsite; полный разбор orchestration — [server-world-bootstrap](../server-world-bootstrap/contract.md). В `101217c0` (CWorld Spawn) сначала вызывается virtual30, для CWorld это `10120eb0`, и лишь после его возврата присваивается `10222f0c = (stringSearch(mapname,"aom_") != NULL)`. Поэтому загрузчик в этой цепочке читает предшествующее значение mode flag, а не только что рассчитанное текущим Spawn. Это один доказанный writer и порядок вызовов, не доказательство отсутствия остальных writers/reset. Monster event dispatcher `100bf310`: событие 1005 вызывает `100fe450(edict, options, 1.0, 2.0, 0, 100, -1)`; 1009 делает это при `RandomLong(0,2)!=0`. Контракт событий — [server-monster-events](../server-monster-events/contract.md).

Цепочка имени: `groupName` → case-sensitive group lookup → `!groupName` + десятичный выбранный индекс → `100fc9f0` → lookup полного sentence name через comparator `1017bcbb` → `!` + десятичный индекс в общем массиве → engine EmitSound. Ghidra обозначает comparator как `__stricmp`; default ASCII и mapped-byte ветви позднее подтверждены ASM в [sentence-lifecycle](../server-sentence-lifecycle/contract.md), но locale table producer остаётся открытым. Число в имени файла не сохраняется как отдельное поле: имена `AB2`, `AB7` увеличивают count до 2, но выбор формирует `!AB0`/`!AB1`. Готовность и расход pool не гарантируют успешного EmitSound.

Engine binding подтверждён native initializer `100b4aa0`: копирует 144 DWORD в `10222f48`. Совпадающие ABI slots в локальном `eiface.h`: 29 EmitSound (`10222fbc`), 61 AlertMessage (`1022303c`), 90 RandomLong (`102230b0`), 95 LoadFileForMe (`102230c4`), 96 FreeFile (`102230c8`). Алгоритм RNG внутри движка не разобран; доказаны аргументы вызовов и последующее использование результата.

## 0x100fdf70 — SentenceGroups_LoadOnce [high]

Загружает имена sentences и последовательные группы префиксов из текстового файла, выставляет общий флаг готовности и перемешивает очереди выбора.

ABI `void LoadOnce(void)`. Если ready != 0 — сразу выходит. Иначе очищает оба глобальных массива и count, локальные line[512] и previousPrefix[64]; cursor=0, groupIndex=-1, pointerCount=первый count минус `0x34`. При global `10222f0c==0` выбирает точный путь `sound/sentences.txt`, иначе `sound/aom_sentences.txt`. Доказанный writer `101217c0` обновляет этот mode flag уже после CWorld Precache → LoadOnce; весь lifecycle flag/reset здесь не закрыт. LoadFileForMe возвращает buffer и пишет length. NULL оставляет ready=0, поэтому следующий вызов снова пробует загрузку. Ненулевой buffer, даже пустой или без пригодных строк, проходит FreeFile и затем ready=1.

Вызывает `10100410(buffer,length,&cursor,line,0x1ff)`: максимум 510 скопированных байт за шаг, затем NUL. В начале пропускает только ASCII space `0x20`, не tab. Пустую строку, первый `/` или первый символ с false `_isalpha((signed char)c)` игнорирует. Ищет конец первого токена только по space/NUL: tab и CR не являются разделителями. Если space не найден до NUL, строка не добавляется. Остальная часть строки после первого space не разбирается. Строка с LF в конце и без space также не принимается.

Сравнение count с `0x600` использует **JG**, поэтому старое count==1536 ещё допускает запись. Сначала count увеличивается, затем имя вместе с NUL без ограничения копируется в `base + oldCount*16`. При длине >=16 выдаёт Alert(3, `Sentence %s longer than %d letters\n`, name, 15), но продолжает копирование. Это предупреждение, не усечение. Запись 1537-го имени попадает в `1022c8c0` и следующие globals; дальнейшее значение count уже зависит от записанных байтов. Нельзя описывать этот guard как безопасный предел 1536.

Для группы нужно, чтобы последний символ токена был digit. Идёт назад по digits, но останавливается, когда cursor достигает первого символа, **не проверяя его**: однобуквенный префикс `A0` не образует группу, хотя полное имя уже записано; `AB0` образует. У первого найденного nondigit ставит NUL после него. Префикс сравнивает с previousPrefix case-sensitive. Совпадение увеличивает текущий DWORD count. Несовпадение продвигает count pointer на `0x34`, проверяет signed pointer >= `1022f178`, копирует имя без ограничения в group+0 и previousPrefix[64], устанавливает count=1. Имена без цифрового суффикса и пропущенные строки previousPrefix не меняют. Поэтому группы — серии пригодных префиксов, а повторный префикс после другой группы создаёт отдельную запись; поиска/слияния/сортировки нет.

При превышении sentence/group лимита вызывается Alert(4) с точным текстом из evidence, затем по локальному control flow идут FreeFile, ready=1 и инициализация уже собранных pools. Не приписывается невыходящий характер engine Alert. После ready=1 перебирает DWORD counts: останавливается на нуле или count pointer >= `1022f178`, вызывает `10100000(countPtr+4,*countPtr)`. После последней допустимой группы сначала читает следующий count для условия цикла; это чтение за очищенным массивом. Нулевой sentinel вне 200 записей не гарантирован данной функцией. Bounds-check переходы на `1013dd48` ограничивают индексы записи NUL в line, но не strcpy в name/group/previousPrefix. Глобальный reset ready при смене карты здесь не доказан; поиск именных C references не исключает косвенные записи.

## 0x100fdef0 — SentenceGroups_FindExactName [high]

Ищет первую группу с точно совпадающим регистрозависимым префиксом и возвращает её индекс, либо -1.

ABI `int FindExactName(const char *name)`. Ready==0, NULL name или первый DWORD count==0 возвращают EAX=-1. Далее inline strcmp до NUL, шаг записей `0x34`; первая равная строка возвращает EAX=index. Несовпадение увеличивает индекс и читает следующий DWORD count: ноль завершает поиск. Нет ограничения 200, проверки длины входа, проверки отрицательных counts или восстановления отсутствующего sentinel. Различие регистра здесь существенно и подтверждено inline byte comparisons. Полный sentence lookup `100fe300` использует отдельный comparator с ещё не проверенными case/locale semantics. Пустой вход не отвергается отдельно, но штатный initializer не создаёт пустую группу.

## 0x10100000 — SentenceGroups_ShuffleIndexPool [high]

Заполняет до 32 байтов последовательными индексами и выполняет четыре случайных обмена на каждый элемент, используя engine RandomLong.

ABI `void ShuffleIndexPool(byte *pool,int count)`. При ready==0 не пишет. Signed CMOVLE выбирает n=min(count,32), не unsigned clamp. Для n>0 пишет pool[i]=(byte)i при 0<=i<n. Затем при signed `4*n>0` выполняет ровно 4*n итераций: два вызова RandomLong(0,n-1), обмен байтов по возвращённым индексам. Для корректного 1..32 это 8*n RNG-вызовов и перестановка 0..n-1, **не** Fisher–Yates и не доказанно равномерная выборка перестановок. Не очищает остаток pool, не ставит sentinels, не обновляет group.count. n==0 ничего не делает; обычный небольшой отрицательный count тоже не пишет, но умножение `4*n` — 32-битное LEA с wrap, поэтому произвольный большой отрицательный count нельзя объявлять безопасным no-op. Результаты RNG не ограничиваются повторно, NULL pool не проверяется. Значение EAX не является оформленным status return.

## 0x10100080 — SentenceGroups_PickUnusedIndex [high]

Выбирает первый ещё не израсходованный байт из pool группы, помечает его 0xff и формирует строку `!<group><decimal-index>`.

ABI `int PickUnusedIndex(int group,char *out)`. Ready==0 или group<0 возвращает -1, out остаётся неизменённым. Успех возвращает выбранный byte, zero-extended в EAX, а не позицию в pool. Нет upper-bound group или NULL/capacity проверки out. Count читается **один раз как unsigned BYTE** из group+0x10; scan index — AL, unsigned сравнение с этим count. При первом pool[i]!=0xff сначала пишет sentinel, затем записывает WORD `0x0021` в out, добавляет имя группы и `sprintf("%d",chosen)` из 8-байтного scratch. Копирование NUL включено, размеры назначения не передаются.

Если все scan slots израсходованы, вызывает `10100000(pool,countByte)` и повторяет без лимита попыток. CountByte==0 даёт бесконечный локальный цикл с no-op shuffle. При countByte>32 сканирование выходит за pool; shuffle при этом ограничен 32, поэтому это не поддержка больших групп. Например, group.count==256 даёт countByte0. Для нормального 1..32 очередная перестановка расходуется без повторов внутри цикла, но между концом одной перестановки и началом следующей повтор не запрещён. На aliasing out с pool/глобалами гарантий нет. Статическая сборка имени не подтверждает наличие соответствующего sentence name в общем массиве.

## 0x101001b0 — SentenceGroups_FormatSequentialIndex [high]

Формирует имя с запрошенным последовательным индексом, ограничивает только его верхнюю границу и возвращает следующий индекс.

ABI **четыре** аргумента: `int FormatSequentialIndex(int group,char *out,int current,int reset)`, несмотря на три в C. Ready==0, group<0 или lowbyte count==0 возвращают -1 без изменения out. Для count b=1..255: если signed current>=b, меняет стековый current на b-1; отрицательное current не ограничивается. Формат `!` + groupName + `sprintf("%d",current)`, scratch[8], без size/null/upper-group guards. Отрицательный большой int может не поместиться в scratch, следовательно общий signed input не безопасен.

После форматирования сравнивает current с сохранённым b. Если current<b — EAX=current+1. Иначе читает четвёртый аргумент `[ebp+0x14]`: возвращает reset!=0 ? 0 : b. Эта последняя ветка есть в ASM, но при обычных неперекрывающихся аргументах недостижима из-за предыдущего clamp. Поэтому нельзя утверждать, что reset обеспечивает циклический переход: current==b превращается в b-1, воспроизводит последнюю реплику снова и возвращает b. Для current=-1 формируется суффикс `-1`, возвращается 0. Pool не читается и не расходуется.

## 0x100fe300 — Sentences_ResolveNameToEngineIndex [high]

Находит полное имя sentence без первого символа входной строки и при необходимости формирует числовую engine-строку `!<index>`.

ABI `int ResolveNameToEngineIndex(const char *prefixed,char *optionalOut)`. Начинает с index0; если signed global count<=0, возвращает -1. Передаёт каждую 16-байтную запись и **prefixed+1** в comparator `1017bcbb`; EAX==0 принимает за совпадение, иначе продолжает до count. В сохранённом C callee обозначен Ghidra как `__stricmp`. Последующий [sentence-lifecycle](../server-sentence-lifecycle/contract.md) доказывает непосредственно по ASM default ASCII A..Z fold, отдельную mapped-byte ветвь и NULL error path. Содержимое runtime locale table и эффекты error helpers остаются открыты; один library label не заменяет эти границы. Не проверяет ready, NULL input или что первый символ именно `!`; это обязанность caller `100fc9f0`, который проверяет `sample && sample[0]=='!'`. Успех возвращает EAX=index; optionalOut==NULL разрешён. Иначе пишет WORD `0x21`, форматирует index через точный `%d` в scratch[8] и добавляет его без capacity. При miss возвращает -1, out не очищается. Не парсит уже числовое `!12`: передаёт строку `12` comparator вместе с сохранёнными names. Не исправляет повреждение name pool/count.

## 0x100fe3c0 — SentenceGroups_PlayRandomByIndex [high]

Выбирает случайную реплику по числовому индексу группы, но вызывает звук только при строго положительном выбранном индексе.

ABI `int PlayRandomByIndex(edict*,int group,float volume,float attenuation,int flags,int pitch)`. Ready==0 возвращает -1. Иначе обнуляет первый байт stack name[64], вызывает `10100080`, сохраняет EAX в ESI. Только **selected>0** вызывает `100fc9f0(edict,2,name,volume,attenuation,flags,pitch)`. Возвращает selected независимо от вызова звука. Выбранный 0 уже израсходован в pool, но не воспроизводится этим wrapper; это доказанное JLE, не исправленный по SDK предполагаемый >=0. Отдельной проверки name[0] нет. Stack cookie не делает строковые операции bounded.

## 0x100fe450 — SentenceGroups_PlayRandomByName [high]

Находит группу по имени, выбирает очередную реплику из её перестановки и передаёт звук в заданный канал либо канал 2 по умолчанию.

ABI `int PlayRandomByName(edict*,const char *group,float volume,float attenuation,int flags,int pitch,int channel)`. Ready==0 возвращает -1. Lookup `100fdef0` при miss вызывает Alert(1, `No such sentence group %s\n`, group), затем -1. При успехе вызывает `10100080` в name[64]. Если selected>=0 и name[0]!=0, передаёт `100fc9f0` все числовые параметры, заменяя ровно channel==-1 на 2; иные значения не ограничиваются. Возвращает выбранный индекс, включая 0, независимо от того, смог ли downstream resolver найти/проиграть sentence. No rollback pool. NULL group корректно отклоняет lookup, но передача NULL в diagnostic `%s` зависит от engine formatter.

## 0x100fe510 — SentenceGroups_PlaySequentialByName [high]

Находит группу по имени, формирует последовательную реплику и возвращает курсор, рассчитанный formatter, после возможного звукового вызова.

ABI `int PlaySequentialByName(edict*,const char *group,float volume,float attenuation,int flags,int pitch,int current,int reset)`. Ready==0 или lookup<0 возвращает -1 без diagnostic. Name[64] начинается с NUL. Передаёт в `101001b0` все четыре аргумента, включая current/reset. Если результат>=0 и name непустое, вызывает `100fc9f0(edict,2,name,volume,attenuation,flags,pitch)`; возвращает результат formatter, а не реальный успех звука. Отрицательный current=-1 возвращает next0 и поэтому может передать downstream строку с `-1`; current<-1 обычно даёт отрицательный next и звук подавляется. Поведение reset и повтор последней реплики определяются предыдущим разделом, не SDK-аналогом.

## 0x100fe5c0 — SentenceGroups_StopIndexedSentence [high]

Собирает конкретное имя `!<group><index>` и передаёт звуковому wrapper параметры остановки для канала 2.

ABI `void StopIndexedSentence(edict*,int group,int index)`. Требует ready!=0, group>=0 и index>=0; иначе без действия. Не проверяет group upper-bound, count или index<count. Формирует имя в stack[64] и `%d` в scratch[8], без ограничений копирования; произвольный большой положительный index может переполнить scratch. Вызывает ровно `100fc9f0(edict,2,name,0.0f,0.0f,0x20,100)`. Имя всё равно проходит full-name resolution; при отсутствующем sentence EmitSound не вызывается. `0x20` соответствует локальному SDK SND_STOP, channel2 — CHAN_VOICE; реальное native числовое значение и маршрут доказаны отдельно от этих поясняющих имён. Pool не возвращает потраченный индекс, flags готовности не меняет. EAX не определён как status.

## 0x10100410 — Buffer_ReadLineChunk [high]

Копирует из загруженного буфера очередной фрагмент до LF включительно либо до лимита, продвигает внешний cursor и возвращает output pointer.

ABI `char *ReadLineChunk(const byte *buffer,int length,int *cursor,char *out,int capacity)`. NULL buffer/out сразу возвращают 0. Затем читает *cursor без NULL guard; signed cursor>=length тоже возвращает 0. End сначала length, а если signed remaining>capacity-1 — end=cursor+capacity-1. Сканирует пока pos<end, включает первый LF (`0x0a`), CR/NUL внутри источника не останавливают scan. Непустой фрагмент вызывает `10140130(out,buffer+oldCursor,n)`, пишет out[n]=0 только если signed n<capacity, устанавливает *cursor=pos, EAX=out. На всех пустых/ранних выходах cursor/out остаются прежними. Copy helper ограничен здесь границей вызова, не заново разобран полный CRT.

Для обычных cursor>=0, length>=cursor и capacity>1 это максимум capacity-1 байт, но нет явных guards отрицательного cursor, capacity, signed overflow вычитания/сложения. Не называть общий API безопасным fgets. Caller sentence loader даёт capacity511 при реальном line512, поэтому длинная строка разделяется на самостоятельные 510-байтные chunks: продолжение может быть ошибочно интерпретировано как отдельная sentence line. Нулевой байт внутри chunk копируется и cursor продвигается за него, но последующий token parser видит строку только до первого NUL.

## Границы завершённого разбора

Доказаны локальные ветви, ABI, memory ownership глобальных таблиц, decimal-format, guards и native quirks 11 primary. Для API callbacks установлены позиции таблицы и аргументы, не внутреннее исполнение движка. `100fc9f0` приведён как supporting маршрут: после sentence lookup success вызывает engine EmitSound; при miss Alert(2); затем в обоих случаях вызывает `1011a220(originalName,edict+0x88)`. У него также есть условный множитель volume по `10226489` и pointer-identity exclusion; Suit/radio callers, pointer-identity исключение, native volume-owner fragment и повторные MSG_PAS sends разобраны в [sentence-lifecycle](../server-sentence-lifecycle/contract.md); полное назначение состояния и runtime эффекты остаются вне доказанного.

Остаются отдельными вопросами: косвенный writer/reset ready при новой сессии/карте (полный literal operand scan в sentence-lifecycle не доказывает отсутствие aliases/bulk writes), весь lifecycle `10222f0c` помимо доказанного writer `101217c0`, содержимое конкретных установленных sentence files и соответствие их индексов engine database, locale/CRT error behavior, алгоритм/границы engine RNG, полные последствия diagnostic/error callbacks и фактическая слышимость. Малформированные строки/индексы не подавались оригиналу. Никаких заявлений о runtime parity, прослушивании или исправлении найденных особенностей нет.

## Продолжение разбора: pass11

[Monster controls](../server-monster-controls/contract.md) дополняет локальные route setters goal2/goal20, вставку waypoint, завершение движения, Use связанной группы дверей и расчёт deadline, IgnoreConditions и два sentence wrappers. Он фиксирует native ABI/порядок callbacks; derived overrides, engine movement и sound backend остаются открытыми. Закрытые10 entry перечислены в новом контракте и REVIEW каталога.
