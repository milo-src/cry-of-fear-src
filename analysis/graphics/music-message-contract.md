# PlayMP3: сообщение, клиентский контекст и обновление

Статический разбор оригинального client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Игра не запускалась; игровой код, сборки и ресурсы не менялись.
Этот документ связывает [серверный протокол](music-server-protocol.md),
[клиентские методы](music-client-contract.md) и
[владение звуковыми объектами](sound-lifecycle-contract.md).

## Маршрут для следующего прохода

```text
server QueueMusic / QueueStop / непосредственные отправители
  -> PlayMP3: BYTE loop, BYTE play, COORD duration, STRING track
client init1006cf00: HookUserMsg("PlayMP3",1006e8f0)
  -> hook1006e8f0: (HUD object1018a0c0, name, size, buffer)
  -> handler10070ee0
     play: timing1007fb50 -> loop1007fbb0 -> flag1007fbf0 -> play1007faf0
     stop: flag1007fbf0 -> stop1007fc10
  -> local context105440a4 -> music handle105440b0 / engine105440a8
HUD_Frame1001d440 -> updater1007fa90 -> activation1007f940/update1007f740
```

Это прямые связи в сохранённых телах. Периодичность engine callback,
полное множество косвенных входов и фактическое воспроизведение не измерялись.

## Приём сообщения10070ee0

Hook передаёт три исходных параметра и отдельный HUD pointer на стеке.
Handler начинает чтение через10080850(buffer,size), затем читает два byte,
COORD и строку именно в серверном порядке. Он не использует HUD pointer
как звуковой контекст: последний загружают отдельные wrappers из105440a4.
Порядок аргументов подтверждён `music-client-assembly/playmp3-hook.asm`.

Reader100808b0 возвращает unsigned byte;10080a10 читает signed16 little-endian,
а10080910 умножает его на0.125. Таким образом принимаемый duration имеет шаг
0.125 и диапазон -4096..4095.875. При нехватке байтов short reader возвращает-1,
не продвигает cursor и устанавливает bad-read; COORD wrapper превращает это
в-0.125 без отдельной проверки. Byte reader аналогично возвращает0xffffffff.
Handler не проверяет этот flag перед bool/ветвлением. Globals message reader
105440b4/b8/bc/c0 отдельны от полей audio context, несмотря на похожие числа.

Строка копируется `strncpy(local256, source,256)`. Дополнительной записи NUL
после копирования в этом теле нет. При `cl_downwiththesickness == 1.0`
буфер заменяется на `downwiththesickness.mp3`; это происходит и перед stop-веткой,
хотя та строку не использует. Handler явно не проверяет общий bad-read flag.
Это наблюдение о проверках, а не результат испытания повреждённых пакетов.

Если второй byte равен нулю, handler сначала пишет context+dd=1 через1007fbf0,
затем передаёт duration в stop1007fc10→10080780. При duration0 внутренний
stop сбрасывает+dd обратно в0; при раннем отказе его guards внешняя запись
уже могла произойти. Поэтому flag нельзя описывать как гарантированное
состояние реально играющего потока.

Если второй byte ненулевой:

1. При duration!=0 устанавливаются timing-поля вызовом
   `1007fb50(-1.0,-1.0,GetClientTime(),duration)`.
2. Первый byte преобразуется в bool и записывается в context+dc (loop).
3. Context+dd сбрасывается в0.
4. Имя из локального буфера передаётся1007faf0→1007fd50.

**Пропущенный аргумент декомпила:** C показывает только три аргумента1007fb50
и приписывает duration функции GetClientTime. ASM10070f8f..10070fb6 показывает
сохранённый duration на стеке, затем три остальных аргумента и cleanup16.
Таким образом четвёртый аргумент сохранён; это не случайное значение стека.
Слоты callback table подтверждены SDK-layout и прежним renderer audit.

## Timing не равен доказанному fade-in

Setter1007fb50 независимо обновляет +cc,+d0,+d4,+d8 только для значений>=0.
Отрицательные аргументы оставляют соответствующее поле прежним. В play-ветке
сообщение пишет время/длительность в+d4/+d8. Но последующий1007fd50 при
фактической замене трека зануляет **все четыре поля** перед созданием потока.
Сохранённый updater1007f740 читает только+cc/+d0 для fade-out.

Поэтому ненулевой play duration на проводе не доказывает действующий плавный
fade-in или crossfade. Ранние return producer (например совпавшее имя) могут
оставить timing, но потребитель+d4/+d8 этим проходом не установлен. Не следует
«исправлять» этот порядок при будущем переносе без отдельного решения.

Stop10080780 при duration!=0 пишет текущее client time в+cc и сам duration
в+d0. Отрицательный ненулевой duration здесь не отсекается. Мгновенный stop
останавливает handle и очищает+b8,+cc,+d0,+dd; глобальный105440b0 не обнуляется.
Reset1006d9e0 и init1006cf00 отдельно вызывают setter(0,0,0,0).

## Пауза и консольная остановка

1007fbd0 загружает ECX=105440a4 и вызывает10080710. При enabled byte0 и
ненулевом backend метод пишет dword+bc=bool(argument) и вызывает
**backend** virtual+18 с0/1. Это другой объект, чем music handle virtual+18
без аргументов в stop. Совпадение числовых offsets не делает операции одинаковыми.
1007fad0 возвращает результат проверки context && context.bc!=0 в AL;
остальные биты EAX не определяют boolean-контракт.

Прямой caller паузы теперь установлен: V_CalcRefdef100b3340 читает DWORD
по смещению0x48 в ref_params, то есть `paused` по проверенному SDK-layout.
Он сравнивает это состояние с AL1007fad0 и вызывает1007fbd0 только при
несовпадении. Затем продолжает расчёт вида. Это синхронизация паузы из engine
ref_params, а не предположение, что любой открытый UI обязательно ставит паузу.

Зарегистрированная консольная команда `stopmp3` указывает на1006e350.
Ghidra не признала этот label процедурой: отказ сохранён в capture, C не
синтезировался. Независимый bounded ASM1006e350..1006e35f доказывает
вызов1007fc10(0.0) и return. Это закрывает команду через машинные инструкции.

## Что остаётся открытым

- Ненулевые writers context+c0/+c4 и полный lifetime сырого pending pointer+c8.
  Producer может сохранить указатель на аргумент, а handler передаёт локальный
  буфер; достижимость этого пути требует writer+c4, не предположения.
- Потребители+d4/+d8; существование параметра сообщения не доказывает fade-in.
- Внешние backend virtual targets, release/drop всех retained handles и
  корректность повторного engine shutdown. Из одного client caller это не следует.
- Точный серверный engine WRITE_COORD и пределы пакета; клиентский decoder
  определяет приём, но не все случаи формирования на сервере.

## Доказательства

- `decompiled/client/captures/graphics-music-routing/`: refs105440b0 и caller updater.
- `decompiled/client/captures/graphics-music-client/`: HUD_Frame, hook, wrappers,
  оба производителя потока, stop и сохранённый отказ procedure lookup.
- `decompiled/client/captures/graphics-music-message/`: handler, pause и direct refs.
- `decompiled/client/captures/graphics-music-wire/`: byte/short/COORD readers и V_CalcRefdef.
- `analysis/graphics/music-client-assembly/`: bounded ASM с хешами диапазонов;
  особенно `playmp3-handler.asm`, `playmp3-hook.asm`, `stopmp3-command.asm`.
- `decompiled/client/captures/graphics-client-first/005-pseudocode.c`: регистрация.
- `decompiled/client/captures/graphics-studio-flow-routing/004-pseudocode.c`: reset.
- `analysis/graphics/studio-existing-audit.md`, `external/hlsdk-portable/engine/cdll_int.h`:
  client engine API layout; `analysis/exports/client.csv`: HUD_Frame entry.
