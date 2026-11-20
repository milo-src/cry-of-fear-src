# Оригинальный engine: WRITE_COORD, WRITE_STRING и связь с сервером

Статический разбор `hw.dll`, SHA256
`9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`.
Адреса относятся к preferred image base `01d00000`. Игра не запускалась.
Сохранённые C: `decompiled/engine/captures/graphics-engine-wire/`;
машинные байты, параметры objdump и контрольные суммы:
[engine-wire-assembly/capture.json](engine-wire-assembly/capture.json).

## Маршрут от оригинального сервера

Loader `01df3929` получает `GiveFnptrsToDll` через GetProcAddress. По
`01df39a3` передаёт таблицу `01eced18` и globals `0251f3c0`.
Серверная `GiveFnptrsToDll100b4aa0` копирует 144 DWORD в `10222f48`;
её прежнее доказательство — `analysis/abi/GiveFnptrsToDll.asm`.
В новом raw evidence сохранён префикс таблицы из 76 DWORD.

| Slot | Назначение по enginefuncs_t | Engine target | Server copied slot |
|---|---|---|---|
|46|MessageBegin|01da63bd|10223000|
|47|MessageEnd|01da64aa|10223004|
|48|WriteByte|01da67d1|10223008|
|53|WriteCoord|01da68ad|1022301c|
|54|WriteString|01da68e4|10223020|
|75|RegUserMsg|01de0e44|10223074|

Таким образом найден именно callback оригинального engine, вызываемый
сохранённым серверным sender, а не похожая функция другого SDK. Это доказанный
статический bootstrap; возможная последующая подмена таблицы не исследована.
Loader ограничивает список загруженных DLL значением 50; при неудаче поиска
export или превышении лимита проходит к освобождению полученного модуля.
Полная политика загрузки и поиск DLL находятся за пределами этого прохода.

## WRITE_COORD: потерянная в C арифметика

`01da68ad` проверяет active-message global `0242f300`; при нуле вызывает
diagnostic `01df2656`. Fatal/recursive longjmp этого helper установлен в
[engine-message-followup-contract.md](../network/engine-message-followup-contract.md);
штатного возврата нет.
На обычном пути инструкции:

```text
FLD float[EBP+8]
FMUL float[01e8cc48]       ; raw 00 00 00 41 = 8.0f
CALL 01e7163c              ; x87 -> signed 64-bit integer
PUSH EAX
PUSH 01ec1a98              ; staging sizebuf
CALL 01d47080              ; two bytes, low then high
```

Декомпил `000-pseudocode.c` потерял float-аргумент и умножение перед `__ftol`.
Псевдокод `006-pseudocode.c` отображает `ROUND(in_ST0)`, но asm helper
сохраняет x87 control word, выставляет RC=11 через `OR AH,0x0c`, выполняет
`FISTP QWORD`, затем восстанавливает control word. Здесь дробная часть
отбрасывается **к нулю**, а не округляется к ближайшему целому.

Для конечного float32 x при `abs(8*x) < 2^63`, обычном успешном резервировании
буфера и отсутствии floating-point exception:

```text
q = trunc_toward_zero(8*x)
wire = [q & 255, (q >> 8) & 255]
client_value = signed16(wire) / 8
```

Helper возвращает EDX:EAX; caller передаёт EAX, а writer сохраняет только
младшие 16 бит. Clamp к диапазону signed16 отсутствует. Например:

| Float32 argument | Wire hex | Клиентский результат |
|---|---|---|
|1.0|08 00|1.0|
|1.2|09 00|1.125|
|-1.2|f7 ff|-1.125|
|-0.01|00 00|0|
|4095.875|ff 7f|4095.875|
|4096|00 80|-4096|
|8192|00 00|0|

Это вычисленные примеры по восстановленному контракту, не запуск оригинальной
DLL. NaN/Inf, выход за int64, маски x87 exceptions и аварийные ветви не
объявляются проверенными. Клиентский `10080910` использует signed-short
reader и множитель 0.125: [music-message-contract.md](music-message-contract.md).
Следовательно, duration PlayMP3 имеет этот wire-контракт; наличие названия
FadeIn в server field не доказывает реализацию fade-in у клиента.

## WRITE_STRING: длина до NUL, затем запись в буфер

`01da68e4` проверяет тот же active flag и вызывает `01d47171(sizebuf, text)`.
Для nonnull text helper `01d466c2` считает байты до первого NUL без заданного
предела; `01d47171` передаёт длину+1 в `01d48557`. Writer сам не обрезает
строку под клиентский destination. Проверка вместимости происходит ниже.

Для NULL указателя используется **один байт по адресу 02079bcc**, затем тот
же append helper. Этот адрес лежит в zero-fill части PE, не имеет raw file
offset. Поэтому доказано первоначальное обнуление загрузчиком, но не
неизменность байта во всё время игры. Нельзя приписывать ему вычитанный из
файла NUL или молча объявлять весь путь безопасным при произвольных данных.

Staging capacity, overflow flags, MessageBegin/End и лимит переменного usermsg
описаны в [engine-message-buffer-contract.md](engine-message-buffer-contract.md).
Клиентские границы и формирование путей:
[engine-wire-client-boundaries.md](engine-wire-client-boundaries.md).

## Точная граница дальнейшей работы

- Установлены callbacks, float conversion, endian/truncation, string append
  и связанные ограниченные buffer/message contracts. Это не полный разбор
  engine network transport или всех значений message destination.
- Nonreturn error callees и destination selector закрыты в followup-контракте.
  Owner setjmp и spatial routing описаны в engine-dispatch-lifecycle.md.
  Открыты полный frame/recovery, последующие изменения callback table и BSS
  byte, сетевой приём повреждённых пакетов и полный downstream transport.
- Runtime/визуальных/звуковых проверок и изменений игры в этом этапе нет.
