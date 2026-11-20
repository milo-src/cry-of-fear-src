# HUD shutdown: input и allocation boundary

Статическое продолжение [renderer teardown](renderer-teardown-contract.md).
Исследуется исходный client.dll; target не запускался, input устройства,
desktop, ресурсы и runtime файлы не изменялись.

Известная цепочка engine export:

```text
HUD_Shutdown1007ad10
  →1007a870
      →IN_DeactivateMouse1007c1d0
      →1007a750: list10543540 →next atnode+0 →100f7be4(node) →head0
  →1007fa40
      →reference-counted virtual release через105440a8
      →100b42a4(105440a4,0xe0) →thunk100f7be4(pointer), sizeнеиспользуется
      →105440a4=0
```

Это отдельная цепочка от CRT atexit→10139320→GL manager10053b40. Общий
caller не делает каждый вложенный helper renderer destructor.

## Состояние и точные owners

1007a870 полностью состоит из IN_DeactivateMouse и1007a750. Первый символ
есть в export table по адресу1007c1d0. Новое тело1007a750 берёт head10543540,
читает next из первого dword текущего node **до** вызова100f7be4(node),
переходит к сохранённому next, затем обнуляет head. При исходном head0
release helper не вызывается, head остаётся0. Здесь нет отдельного
освобождения payload pointers или memset key-state globals.

| Global / структура | Владелец действия | Доказанный эффект |
|---|---|---|
|10543540|1007a750|Обходит singly linked nodes по+0, вызывает release для каждого, head=0|
|105440a4|1007fa40|Передаёт pointer100b42a4 и затем обнуляетglobal|
|node parameter|100b42a4|Передаёт только pointer вthunk100f7be4; не хранитowner и не читаетsize|

Новые native producers/lookup замыкают layout, независимо от SDK:

| Node offset | Размер | Значение |
|---|---|---|
|+0|4байта|next pointer|
|+4|4байта|payload pointer, принадлежащий внешнему key state|
|+8|32байта|inline NUL-terminated name внутри allocation0x28|

1007a540(name,payload) вызывает KB_Find(name). Только при возвращённом0
выделяет0x28байт через100f7bff, зануляет все40байт, копирует name включаяNUL
вnode+8, записывает payload+4 и вставляет node в голову10543540. Цикл name
не имеет видимого length bound. В самом теле не проверяется allocationNULL. Новый wrapper100f7bff
вызывает `__malloc_base`; Ghidra вывела для него void(void), тогда как
caller явно передаёт0x28 и использует результат как pointer. Поэтому эта
восстановленная декларация не считается доказательством настоящего ABI.
Bounded assembly100f7bff..100f7c0a закрывает forwarding: MOV EDI,EDI;
PUSH EBP;MOV EBP,ESP;POP EBP;JMP10111a79. Перед tail jump стек и аргументы
восстановлены без изменений, результат callee возвращается прямо caller.
Адрес10111a79 связан с `__malloc_base` сохранённым C; void(void) не отражает ABI.
KB_Find проверяет существование через **payload result**, поэтому запись с
payload0 не препятствует ещё одной вставке того же имени.

1007a710 сначала присваиваетhead0, затем регистрирует:

| Имя | Payload global |
|---|---|
|in_graph|10543504|
|in_mlook|105433fc|
|in_jlook|10543414|

Поскольку вставка в голову, результирующий порядок при этих трёх успешных
allocations: in_jlook→in_mlook→in_graph. Init не освобождает прежний head
перед присваиванием0; корректный порядок повторных init/shutdown требует
caller lifecycle, а не предположения об идемпотентности initializer.

Export KB_Find1007ad20 обходит head, сравнивает request сname+8 через
__stricmp и возвращаетpayload+4 первого совпадения, либо0. Следовательно
shutdown освобождает **узлы registry**, а не указанные button-state globals.
Он не вызывает destructor payload и не сбрасывает значения этих globals.
SDK KB_Shutdown — согласованный reference, но эта схема уже доказана native
телами. Она не является схемой ownership GL textures или audio buffers.

100b42a4 используется не только audio cleanup: сохранённый VGUI message
reader100a3560 вызывает его для прежнего object+0xcc с size0x30 перед
очисткой pointer и созданием нового содержимого. Поэтому название
audio-specific free было бы необоснованно. Новое тело100b42a4 содержит
единственное действие `thunk_FUN_100f7be4(pointer)`. Псевдокод видит один
аргумент; caller-provided0xe0/0x30 в этом wrapper не используется. Поэтому
нельзя интерпретировать0xe0 как объём очистки памяти или доказанный вызов
деструктора размером0xe0. Общий helper100f7be4 теперь раскрыт: единственный вызов
`FID_conflict__free(pointer)`, затемreturn. Library-label conflict не раскрывает
внутренности CRT heap, но wrapper не вызывает C++ object destructor сам.

## Mouse export1007c1d0: условные OS параметры

Полное тело IN_DeactivateMouse имеет точные guards:

```text
if (10543588 != 0) {
    if (10543640 != 0)
        SystemParametersInfoA(4, 0, &10543644, 0);
    10543650 = 0;
}
```

Если10543588==0, global10543650 тоже не меняется. Если outer gate открыт,
10543650 обнуляется независимо от наличия inner call или его результата.
Return SystemParametersInfoA не проверяется. В этом теле нет SetCursorPos,
SetCapture, окна/focus API либо GL calls. Здесь только описана исходная
функция: исследование её не выполняло и настройки мыши пользователя не меняло.

SDK input_goldsource.cpp использует аналогичную SPI_SETMOUSE схему для
originalmouseparms. Это контекст для понимания, но происхождение именно
native buffer10543644 и producers двух gate flags требуют отдельных writers;
нельзя переносить все SDK input fields/действия в этот original body.

Полное поведение reference-counted virtual release105440a8 ведётся
отдельным исследованием audio-object producer/destructor; этот документ
не подменяет неизвестный target виртуального вызова ближайшим именем.

## Границы покрытия для следующего чтения

- Data ownership registry замкнут:1007a710 init→1007a540 add→KB_Find1007ad20
  lookup→1007a750 free. Полный список callers init/shutdown ещё нужен для
  утверждений о повторной инициализации или отсутствии утечек.
- Точные writers mouse gates10543588/10543640 и buffer10543644: необходимы
  для native meanings/сохранения OS parameters, не для уже прочитанной ветки
  deactivation. Исследование не исполняло SystemParametersInfoA.
-100f7bff→__malloc_base и100f7be4→FID_conflict__free подтверждены как узкие
  wrappers. Stack/return forwarding100f7bff закрыт bounded assembly;
  внутренности CRT heap и policy allocation failure остаются за этой границей.
- Audio producer, local constructor и activation/update уже разобраны в
  [sound-lifecycle-contract.md](sound-lifecycle-contract.md). Не раскрыт внешний
  virtual destructor backend; input registry payloads с audio objects не смешиваются.

## Источники

- `decompiled/client/captures/graphics-gl-lifecycle-followup/003-pseudocode.c` —HUD_Shutdown.
- `decompiled/client/captures/graphics-gl-cleanup-boundary/001-pseudocode.c` —1007a870.
- `decompiled/client/captures/graphics-gl-cleanup-boundary/002-pseudocode.c` —1007fa40.
- `decompiled/client/captures/vgui-menu-protocol/003-pseudocode.c` —другой consumer100b42a4, со size0x30.
- `analysis/exports/client.csv` —точный exported IN_DeactivateMouse1007c1d0.
- `external/hlsdk-portable/cl_dll/input.cpp` —только SDK comparison, не основание native function identity.

- `decompiled/client/captures/graphics-hud-lifetime/000-pseudocode.c` —точный list loop1007a750.
- `decompiled/client/captures/graphics-hud-lifetime/001-pseudocode.c` —forwarder100b42a4.

- `decompiled/client/captures/graphics-hud-lifetime-producers/001-pseudocode.c` —100f7be4→FID_conflict__free.
- `decompiled/client/captures/graphics-hud-lifetime-producers/002-pseudocode.c` —IN_DeactivateMouse1007c1d0.
- `decompiled/client/captures/graphics-hud-lifetime-producers/005-inspect_native_instruction.json` —direct head10543540 references.
- `external/hlsdk-portable/cl_dll/input_goldsource.cpp` —ограниченный SDK comparison mouse restore, не native state provenance.

- `decompiled/client/captures/graphics-hud-lifetime-owners/002-pseudocode.c` —1007a540 allocation/link/name copy.
- `decompiled/client/captures/graphics-hud-lifetime-owners/003-pseudocode.c` —1007a710 registered static payloads.
- `decompiled/client/captures/graphics-hud-lifetime-owners/004-pseudocode.c` —KB_Find1007ad20 case-insensitive lookup.

- `decompiled/client/captures/graphics-audio-activation/002-pseudocode.c` —100f7bff linkage к __malloc_base; Ghidra signature неполна.
- `analysis/graphics/hud-lifetime-assembly/100f7bff.asm` и `capture.json` —точный tail jump с неизменённым стеком, SHA256 исходного DLL и диапазона.
