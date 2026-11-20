# Client queue: surface pass ownership, cleanup and adapters

Последние17 сохранённых client entries без REVIEW разобраны в `notes-shader.json`. Это статические контракты, не установка новых graphics features. `evidence-shader.json` фиксирует исходный DLL SHA256, source C hashes и11 bounded ASM диапазонов, побайтно сверенных с PE. Общие каталог/старые документы не изменялись.

## Очереди и реальный draw pipeline

```
1005ff50 pending frame gate
  → 1005eeb0 world/brush traversal
      → 100622c0 reset queues/cache/texture heads
      → 10061cf0 per-surface dispatch
          → 10061080 bump либо10061b40 flat/base/detail
      → 100626e0 deferred diffuse/ambient
      → base/detail and specular consumers (отдельные прежние карточки)
  → 1005c180 auxiliary boundary
  → optional10060b60 basic GL state +10063780 sky
  → clear pending flags /1005e920 guard cleanup
```

`1005ff50` выполняется только при `104cdd64!=0`; обычный конец очищает этот flag и104ce078. Stack guard1005e740/1005e920 и auxiliary1005c180 не объявлены полностью раскрытыми: их точные действия требуют отдельных тел. `1005fff0` — другой короткий wrapper: CALL10056740, затем tail JMP10084040, без собственной state логики.

`100622c0` очищает четыре surface heads,64 lightmap buckets, два pending flags и software texture cache. World texture table получает нулевые chain heads. Флаг104cdf98 — **наличие живого custom light**, не hardware capability: сохранённый helper ASM1005bff0 перебирает32 records stride0x7c из pool104cc550, принимает expiration>=clienttime и radius!=0. Даже negative nonzero radius не исключается отдельным positivity guard.

Dispatcher10061cf0 пропускает surface flag0x10. Flag4 направляется в special10060d60 без увеличения общего счётчика. Остальные идут в bump при flag0x200+gl_bump или в flat10061b40; оба обычных пути увеличивают104cdf9c.

Flat helper сначала выбирает animated texture10062650. В этой функции texture+18 означает base GL texture ID; это **не** material+18 `_gloss`, хотя числовое смещение совпало. Material lookup100621d0 принимает texture только при tag-666 в+24 и возвращает pointer+2c. Наличие active lights ведёт к раздельным lighting/material passes; наличие detail map и gl_detailtex при всего2units тоже требует deferred material. Direct route накладывает base/detail с texture stage mode5, а specular queue по flag0x400 выполняется только после direct draw.

`10060de0` ставит surface в начало chain texture+1c, используя surface+28 как next. `10062280` приклеивает целый chain в конец другого и не обнуляет новый next. Эти функции ничего не выделяют и не защищают от циклов/двойной постановки.

`100626e0` при2units сначала умножает diffuse atlas с ZERO,SRC_COLOR, затем для всех поддерживаемых вариантов добавляет ambient с ONE,ONE. Он сохраняет old next **до**10060de0, потому что enqueue перезаписывает тот же surface+28. Bucket heads/flag не очищает, state в конце не восстанавливает: их владелец — enclosing pass. Математика света и прочие consumers остаются в `analysis/graphics/shader-pass-contracts.md`, здесь они не продублированы как новые выводы.

## Geometry/cache lifecycle

| Entry | Владелец и граница |
|---|---|
| 10061da0 | VertexPointer float3,stride28; CPU или VBO offset0; backend state1/2 |
| 10061e10 | DeleteBuffers и free двух CPU arrays, обнуление трёх owners |
| 10062b60 | Только software cache invalidation; ни одного GL вызова |
| 10060b60 | Частичная GL restoration: RGB scale1 на всехunits, unit0 TEXTURE_2D on, blend off, depth writes on |

Папка capture `tangent-constructor` содержит teardown10061e10; действительный builder10061eb0 — отдельная ранее прочитанная функция. Teardown не очищает backend104cdf94 и не выключает client arrays. CPU branch10061da0 сам не делает BindBuffer(0); при пустом CPU owner он вообще не делает ничего, даже если VBO owner ненулевой. Нельзя из этих тел обещать полное безопасное восстановление любого исходного GL state.

Cache reset10062b60 нулит16DWORD104cdfb0..ec, ставит четыре stage mode sentinel10 и четыре coord mode sentinel4. Cached ASM доказывает, что texture binding helper10060e10 использует первые4DWORD, а10062f10 сравнивает stage modes перед изменением GL. Coord helper10062fe0 делает аналогичное сравнение. Значения sentinel расположены за пределами обрабатываемых режимов и вызывают следующую setup, а не означают реально установленный GPU режим10/4. Назначение оставшихся12 zero DWORD не выводится по одному соседству.

## Program upload: не обычный false-return fallback

`100621f0` вызывает ProgramStringARB и проверяет error position и native limits. Query target FRAGMENT_PROGRAM фиксирован, даже если аргумент1 иной. Success требует errorPos=-1 и isNative=1. ASM сохраняет EAX/AL1; cookie check на корректной cookie не меняет EAX, после чего возвращает. `void` в Ghidra здесь не описание фактического ABI.

Failure path печатает errorPos/isNative, копирует63bytes из `source+errorPos`, затем безусловно вызывает `100b4bae` (`__report_rangecheckfailure` по library classification); после вызова стоит INT3. В этом body **нет** обычного return0. При errorPos=-1,но isNative!=1 copy source начинается на byte перед source; range/length guard перед чтением отсутствует. Этот факт не превращён в runtime crash test: оригинальный код/драйвер не исполнялись. Именование error callback и статический control flow отделены от фактического поведения ОС/driver.

## HUD adapters и vector helpers

InitHUD wrapper1006e740 и ResetHUD wrapper1006e9a0 явно передают stack HUD pointer1018a0c0,name,size,buffer. Первый ставит EAX1 после1006fe00; второй сохраняет результат100714b0, чей обычный результат1. Они не являются ECX wrappers weapon HUD из предыдущего пакета. Callees вызывают registered element callbacks; следовательно отсутствие прямой записи конкретного поля в wrapper не доказывает, что indirect callback его не сбросит. Не добавлена выдуманная очистка всех graphics globals или blur.

10094730 меняет ровно три IEEE float sign bits XOR0x80000000 — без cross product или нормализации.100947c0 вычисляет исходную длину, при её ненулевом значении нормализует in-place и возвращает исходную суженную float длину через x87. Epsilon/finite/pointer guard отсутствуют; normal finite inputs и NaN/overflow не следует смешивать в обещание unit vector.

## Остаточные точные границы

- 1005e740/1005e920 guard setup/restore и1005c180 auxiliary draw.
- 10056740 и10084040 — цели короткого frame wrapper.
- 10060d60 — special surface branch по flag4.
- Сохранённый ASM закрыл используемые helper contracts1005bff0/10062650/100621d0/10060e10/10061d50/10061d80/10062f10; отдельные C карточки им без C не созданы.
- Runtime correctness GL-state assumptions, ошибочный driver path, pixel equivalence и полная реконструкция renderer здесь не подтверждались.

У всех17 записей теперь ограниченные содержательные роли; это покрытие сохранённой очереди, а не доказательство отсутствия невыгруженных функций оригинального client.dll.
