# Engine messages: ошибки, адресат и регистрация

Актуальный статический контракт оригинального `hw.dll` (SHA256
`9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`).
Семь полных C/REA captures: `decompiled/engine/captures/engine-message-followup/`.
ASM, PE jump table и import descriptors: `engine-message-followup-assembly/`.
Игра не запускалась. Названия ниже — аналитические, не восстановленные debug symbols.

## Что закрыто относительно предыдущего этапа

| Вопрос | Результат |
|---|---|
| Ошибка01df2656 возвращается? | Нет штатного возврата: fatal path → CRT `_exit(-1)` → ExitProcess; повторный вход → longjmp(buffer,2) |
| Ошибка01d7d873 возвращается? | Нет: Host_Error → longjmp(buffer,1), в двух случаях → fatal helper |
| Diagnostic01d4abd8 | Условный debug print, с обычным return |
| Diagnostic01d4aa99 | Форматирование/console redirect, с обычным return; не общий fatal dispatcher |
| Destination selector | Разрешает0..5,8,9;6/7 → Host_Error до поздних routing branches End |
| Fixed user-message size | RegUserMsg принимает signed size<=192; нижнего guard нет, только-1 имеет variable meaning в End |
| Copy01d46517 | Прямой forward copy, DWORD при общей выровненности, иначе BYTE; не memmove |

## Error control flow

`01df2656` форматирует сообщение в1024-byte stack buffer. При уже установленном
`02499f94` пишет диагностику и вызывает `01e731bc(027fc1a0,2)`. Иначе ставит
guard1, условно вызывает callback0250d944 при0251f320!=0, логирует fatal error.
Dedicated gate0250de38 выбирает MessageBoxA + `_exit(-1)`. В другой ветке
выводит сообщение, вызывает GetForegroundWindow/DestroyWindow, MessageBoxA,
cleanup01df7711 и тот же `_exit(-1)`. Это описание бинарника, эти функции
при анализе **не вызывались**.

`01e712a6` передаёт(status,1,0) в CRT01e712d5. Последний параметр0 ведёт к
IAT01e8b24c=KERNEL32!ExitProcess; reentrant termination branch использует
GetCurrentProcess/TerminateProcess. PE import records сохранены. Видимый RET
после call ExitProcess не делает этот путь возвращающимся при нормальном API.
`01e731bc` восстанавливает ESP и регистры из jump buffer и делает косвенный JMP
на сохранённый PC. Он не возвращается к вызывающему CALL; точный setjmp owner
и дальнейший recovery loop остаются открытыми.

`01d7d873`: guard023c9dec!=0 → fatal recursive Host_Error; иначе guard1,
cleanup01d724ac, формат1024, условные helpers01d38050/01d7e77b и console print.
При state02dcf280==0 → fatal; иначе cleanup01d31007,02dd31ec=-1,guard0,
longjmp(027fc1a0,1). Имена этих cleanup/state полей не установлены по одному
смещению. Превышение192-byte variable payload поэтому прерывает обработку
хоста, а не только молча отбрасывает пакет.

`01d4abd8` печатает только при float01ebc9ac!=0 и
(float027fc7f4==0 либо state02dcf280!=5), через OutputDebugStringA и01d0fa2b.
`01d4aa99` форматирует4096 bytes, вызывает01df27b5, затем либо направляет
в redirect buffer026fd680 (порог0x577, flush01ddb985), либо console helpers.
Для developer notify копирует256 bytes в02079bd8 и явно ставит последний NUL
в02079cd7. Скрытые внешние отказы downstream helpers не исследованы, но в этих
двух телах нет явной ветки exit/longjmp. Ghidra теряет varargs из-за stack probe;
ASM сохраняется отдельно, неверную сигнатуру `void(void)` не считать API.

### Следствия для staging

Без allowoverflow reserve01d483e8 не достигает reset/copy после fatal call.
При allowoverflow и requested>maxsize debug print возвращается, далее обычный
print/reset и flags|2; append01d48557 пропускает copy. Primitive byte/short
writers такого post-reserve guard не имеют. Begin/Write* с нарушенной active
последовательностью не продолжают штатную запись после fatal helper.
Unknown user-message ID в End — условная диагностика и обычный ранний return;
fixed size mismatch/staging overflow — fatal; invalid recipient index — Host_Error.

## Destination01da62cf

| dest | Возвращаемый sizebuf |
|---:|---|
|0|02572510|
|1|clientBase0251f324+(index-1)*0x5018+0x7c|
|2|025734c4|
|3|02574ca0|
|4,5|02574478|
|8|clientBase0251f324+(index-1)*0x5018+0x25c0|
|9|0257488c|
|6,7,отрицательные,>9|Host_Error("bad destination")|

Для1/8 index=01da8405(global target0242f2f4), обязательный диапазон1..0251f328.
Назначение sizebuf установлено, network flush/delivery ещё нет. Таблица из10
DWORD по01da6395 подтверждает именно default для6/7. Поздние ветви6/7 в End
видны, но недостижимы через этот selector при обычном immutable code path.
Не копировать их в порт как доказанную поддерживаемую маршрутизацию.
Начальная глобальная state/переустановка таблиц и patching не изучались.

## RegUserMsg01de0e44

Параметры `(name,size)`, returnID либо0. В порядке проверок:

1. Signed nextID01ec9dd0<=255. Начальные PE bytes равны64; runtime ID sequence
   зависит от порядка регистраций. Даже lookup старого имени не выполняется,
   если счётчик уже вышел за255.
2. name!=NULL; strlen01d466c2(name)<=11; пустое имя отдельно не запрещено.
3. **Signed** size<=192 (JLE); нижней проверки нет. Это допускает-1 и другие
   отрицательные значения на уровне регистрации. В End только-1 variable,
   остальные сравниваются как fixed с cursize; это не обещание корректной отправки.
4. Ищет совпадение helper01d4676f(name,node+8) только в списке024988ac,next+18;
   при совпадении возвращает старыйID, не обновляет size и не сравнивает его.
5. Иначе выделяет0x20 через01d8cf91, записываетID+0, увеличивает nextID,
   затем пишет size+4 и копирует name+8, добавляет к **другому** списку024988a8 через next+18.

Точное сравнение имён внутри01d4676f, allocator failure policy и переход между
списками ещё не восстановлены. Формальная NULL-проверка нового node стоит
после разыменования: не считать её защитой от NULL allocator result. Счётчик
64..255 даёт192 возможных первоначальных ID при последовательных новых
регистрациях и неизменённом начальном состоянии; это не155 runtimeID реестра.
Доказанный cap fixed0..192 дополняет cap variable192 в End.

## Copy01d46517

ABI cdecl `(dst,src,signedLength)`, caller очищает12 bytes. При
`(dst|src|length)&3==0` length арифметически сдвигается на2 и копирование идёт
вперёд DWORD за DWORD; иначе вперёд по байту. Signed length<=0 не выполняет
итераций. Нет bounds/null guard, обратного прохода или overlap handling.
Перекрытие с dst>src может испортить ещё не прочитанные данные; название
`Q_memcpy_ForwardAligned` передаёт наблюдаемое поведение, а не гарантию memmove.

## Следующие конкретные задачи

- setjmp owner027fc1a0 и recovery/cleanup после Host_Error;
- перенос pending registrations024988a8 в active024988ac, сравнение имён/allocator;
- spatial helper01dd6a43, network flush, получатель и handshake регистрации;
- runtime writers sizebuf/callback tables/BSS02079bcc; x87 exceptional operands.

Карточки: `engine-message-followup-notes.json`. Связанный цикл Begin/End:
`../graphics/engine-message-buffer-contract.md`. Прикладной следующий слой:
`playsfx-server-contract.md`, `playsfx-client-contract.md`.
