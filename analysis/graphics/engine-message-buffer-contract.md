# Движок: staging buffer и цикл MessageBegin/MessageEnd

Статический разбор оригинального `hw.dll`, SHA256
`9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`.
Игра не запускалась; исходные ресурсы не менялись. Доказательства: четыре
сохранённых C-тела `graphics-engine-wire/{004,005,009,010}-pseudocode.c`,
соседние string helpers и bounded ASM в `engine-message-buffer-assembly/`.
Карточки находятся в `engine-message-buffer-notes.json`; asm-only helpers
не превращены в вымышленные C-функции.

## Владельцы и размеры

| Адрес | Значение |
|---|---|
|0242f300|dword active: Begin пишет1, End пишет0 до всех дальнейших проверок|
|0242f2fc|тип сообщения, сохранённый Begin|
|0242f2f8|destination, сохранённый Begin|
|0242f2f4|target entity pointer, сохранённый Begin|
|0242eb24..2c|три dword origin; Begin копирует только для destination4/5 и nonnull origin|
|01ec1a98|общий sizebuf staging descriptor|
|0242f0f4|начальный data pointer staging buffer|

Структура по обращениям reserve/append и raw PE:

| Смещение sizebuf | Размер | Значение |
|---|---|---|
|+0|4|name pointer; в исходном staging descriptor01ec1ab0|
|+4|2|flags: bit1 разрешает обработку переполнения, bit2 отмечает overflow|
|+8|4|data pointer|
|+c|4|maxsize; исходное значение staging0x200, то есть512 байт|
|+10|4|cursize; исходное значение0|

Здесь bit1/bit2 обозначают маски `0x1`/`0x2`, не номера битов. Begin
не переустанавливает data/maxsize: он пишет cursize0 и flagsWORD1, снимая
старый overflow. Значение512 доказано исходным PE descriptor; отсутствие
других возможных runtime writers maxsize этим проходом не установлено.

## Reserve01d483e8 и append01d48557

Reserve сравнивает signed `cursize+requested` с maxsize. Если места хватает,
возвращает `data+old_cursize` и увеличивает cursize на requested. Это не
allocator и не увеличение ёмкости. Отрицательная длина и integer wrap не
проверяются отдельными guards в этом теле.

При превышении ёмкости:

1. Без flags&1 вызывает01df2656 с диагностикой неинициализированного буфера
   (maxsize0) либо overflow without FSB_ALLOWOVERFLOW.
2. Если сам requested>maxsize, вызывает01df2656 без flags&1 или01d4abd8
   с текстом «ignoring» при flags&1.
3. В видимом последующем коде вызывает01d4aa99 с overflow diagnostic,
   затем01d483c6: cursize=0,flags&=~2. После этого выставляет flags|2.
4. Возвращает data+текущий cursize и всё равно прибавляет requested.

Дополнительный разбор установил:01df2656 не возвращается штатно (exit либо
recursive longjmp), а01d4abd8/01d4aa99 — возвращающиеся print helpers.
Следовательно, без allowoverflow reset не достигается; при allowed overflow
предыдущее содержимое логически сброшено, overflow остаётся выставленным.

Append сначала вызывает reserve, затем проверяет flags&2. При установленном
overflow не вызывает copyhelper01d46517. Следовательно, requested может
увеличить cursize даже когда payload не скопирован. Пока overflow не сброшен,
последующие append также пропускают копирование. Нельзя переносить это
правило на все primitive writers: byte helper01d4705f после reserve напрямую
пишет младший байт аргумента и не повторяет проверку flags&2.

## Begin01da63bd

Аргументы: destination,type,origin,target. Проверки вызывают01df2656:
destination1/8 требует target; остальные destination запрещают nonnull target;
active!=0 означает вложенный Begin; type0 недопустим. Тело не содержит
универсальной проверки диапазона type/destination.

После проверок записывает active1, type,target,destination. Для4/5 копирует
nonnull origin, затем вызывает01d7f691. ASM показывает, что при ненулевом
результате helper обнуляется **локальный stack argument destination**;
уже сохранённый global0242f2f8 повторно не записывается. Это не доказательство
переключения маршрута в broadcast. Null origin не очищает прежние три dword.
Завершение Begin сбрасывает staging cursize и ставит flags1.

## End01da64aa: закрытие, размер и перенос

При active0 вызывает01df2656, после чего видимый код пишет active0.
Этот reset расположен **до** recipient filters, проверки overflow, поиска
регистрации и проверки длины. Нормальное раннее прекращение End не оставляет
сообщение активным. Содержимое staging и метаданные не зануляются в конце:
следующий Begin начинает новый буфер.

Если target!=null и его dword+228 имеет mask0x2000, End выходит без отправки.
Если staging flags&2, вызывает01df2656 и выходит. Для type>0x3a (58) ищет
регистрацию в linked list024988ac: id+0,size+4,name+8,next+18. При отсутствии
и destination3 дополнительно ищет024988a8. Неизвестный id вызывает diagnostic
01d4abd8 и явный return.

- Registered size==-1: сообщение переменной длины, staging cursize обязан
  быть <=0xc0, то есть192. При большем размере01d7d873 и явный return.
- Иной registered size: требуется точное равенство cursize. Несовпадение
  вызывает01df2656 и явный return. Отдельного cap192 в этой ветке не видно.
- Для type<=58 эти проверки регистрации/192 не выполняются.

Затем01da62cf(destination) возвращает destination sizebuf. Для destination0
дополнительно требуется `dest.cursize+payload_size<=dest.maxsize`; для всех
destination требуется nonnull dest.data. Проверка0 учитывает только payload,
**не заголовок**, который ниже добавляется отдельными вызовами reserve.
При type>58 и destination1/8 проверяются индекс клиента через01da8405,
границы1..0251f328 и несколько полей записи клиента с шагом0x5018. Нарушение
индекса вызывает01d7d873: Host_Error завершает этот путь через longjmp
либо fatal helper и не возвращается штатно.
Точные имена client flags не назначены только по смещениям.

Запись на нормальной ветке:

1.01d4705f(dest,type): reserve1 и младший байт type.
2. Для variable user message такой же byte helper пишет payload_size.
3.01d471b1(dest,size,staging.data) при nonnull source передаёт
   (dest,source,size) в append01d48557.

Итого fixed/builtin header1 байт, variable header2 байта плюс payload.
Размер192 относится к payload, а не к сумме с заголовком. На этом этапе нет
доказательства доставки клиенту: запись destination buffer и вызов routing
не равны фактической сетевой доставке.

Для destination4 вызывается01dd6a43(target,origin,2,0); для5 —(4,0);
для6/7 видна ветвь(4,1), но дополнительный разбор selector01da62cf доказал:
6/7 сначала вызывают nonreturn Host_Error, поэтому эта поздняя ветвь
недостижима при обычном коде. Внутренний выбор адресатов helper ещё открыт.

## Строка: отдельные уровни ограничения

Сохранённый WriteString01da68e4 проверяет active и передаёт staging в
01d47171. Для nonnull source этот helper вызывает01d466c2, затем append
с `strlen+1`. 01d466c2 читает до NUL без локального cap. Для null source
передаётся адрес02079bcc и длина1. В исходном PE это zero-fill BSS byte0;
его возможные runtime writers не изучены. Условие source==null не приводит
к чтению source и не означает строку «(null)».

Ограничения не взаимозаменяемы: strlen выполняется до reserve;512 — исходная
ёмкость staging;192 — payload variable message на End; завершающий NUL
включён в обе длины. Поэтому одиночная непустая строка variable message
помещается при n<=191, а с k байтами других полей — при n+k+1<=192.
Fixed messages зависят от своего зарегистрированного size. Сверхлимитная
variable строка не обрезается до191: End вызывает Host_Error, прерывая
текущую обработку. Это сильнее обычного пропуска пакета.

## Error control flow и оставшиеся границы

Тела error callees, termination paths, destination selector, copy helper и
RegUserMsg теперь разобраны в
[engine-message-followup-contract.md](../network/engine-message-followup-contract.md).
01df2656 — fatal/recursive longjmp;01d7d873 — Host_Error/longjmp;
01d4abd8/01d4aa99 — возвращающаяся печать. UnknownID делает обычный return;
invalid sequence/fixed size mismatch/overflow — fatal, variable oversize и
invalid recipient — Host_Error. RegUserMsg ограничивает signedsize<=192;
нижнего guard нет, только-1 трактуется как variable. Для допустимого fixed
диапазона0..192 дополнительный cap в End не нужен.

Copy01d46517 — forward DWORD/BYTE, не memmove. Destination selector и
недостижимость6/7 описаны в новом контракте. Остаются routing01dd6a43,
network flush/receiver, registration-list promotion, setjmp owner/recovery,
возможные writers data/maxsize/02079bcc и exceptional x87 inputs.
Настоящие C entries этого раннего capture:01d483e8,01d48557,01da63bd,01da64aa.
Добавочные01d483c6/01d4705f/01d471b1 описаны по ASM без отдельных C-карточек.
