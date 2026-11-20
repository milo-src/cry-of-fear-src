# Серверная музыка: очередь игрока и PlayMP3

Статический разбор сохранённых C и ABI evidence, 2026-11-20. Оригинальный
`hl.dll` SHA256:
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Игра, REA-сессия и сборка не запускались; общий каталог не изменён.
Адреса и offsets относятся к оригинальной DLL, не к SDK-порту.

## Быстрый маршрут

```text
ambient_fmodstream / trigger_mp3 / trigger_mp3audio
  -> CTriggerMP3 factory family
  -> Use101148b0
     -> player QueueMusic100ea5c0(path,loop,fade)
        -> player mutable state +2310..2320, pending+2314
        -> PostThink100ead70 (два участка отправки)
           -> PlayMP3 BYTE loop, BYTE play, COORD fade, STRING path

QueueStop100ea600(fade) -> те же pending/path, но stop fade+2318
Commentary1002c4b0 / game-over -> непосредственный PlayMP3, минуя очередь
```

`CAmbientFmodStream_Use` — прежнее предложенное имя каталога, не доказанный
исходный C++ class. Factories101084f0 и exports10115c80/10115f20/10115f30
назначают `CTriggerMP3::vftable` и выделяют0xdc байт. У экспортных thunks
machine ranges всего5 байт; развёрнутое C не следует считать их машинным телом.
Числовое vtable-slot доказательство связи с Use здесь не добавлялось; прежний
Use контракт проверен по самому101148b0.

## Владение состоянием

| Player private offset | Writer / значение | Consumer |
|---|---|---|
| +2310 | QueueMusic: переданный32-bit path offset; QueueStop:0 | Отправитель выбирает play при ненуле, stop при0; для play складывает с global string base |
| +2314 | QueueMusic/QueueStop:1; commentary exit:1 | Pending; после отправки0 |
| +2318 | QueueStop: параметр fade | Stop COORD; после stop сбрасывается0 |
| +231c | QueueMusic: bool(param2!=0); QueueStop:BYTE0 | Play loop BYTE |
| +2320 | QueueMusic: параметр fade | Play COORD; после отправки сохраняется |

Это одна перезаписываемая запись, **не FIFO**. Helper не отправляет сообщение,
не загружает файл, не проверяет существование/длину пути и не добавляет `mp3/`.
Повтор одинакового QueueMusic тоже выставляет pending: сравнения с прошлым
треком нет. Более поздний запрос до обработки заменяет поля раннего.

Path — `string_t`-подобное относительное значение. Некоторые callers передают
entity message; другие вычисляют `literalPointer - gpGlobals.stringBase` либо
`cvarStringPointer - stringBase`. Поэтому доказана операция сложения, но нельзя
объявлять все такие значения индексами только AllocString-allocated строк.
Global pointer10223188 устанавливается GiveFnptrsToDll; string base+98.

100f4090 обнуляет path, оба fade, loop и выставляет pending1: это запрашивает
stop при дальнейшей обработке. Отдельный100f0520 пишет5.0 в оба fade; полный
порядок этих lifecycle writers нельзя выводить из одного значения.
Restore100f14c0 при path!=0 вызывает QueueMusic(path,1,1.0): loop и fade
назначаются заново, а не воспроизводятся буквально из сохранённых полей.

## Доказанный wire contract

Регистрация100e5fc0: `REG_USER_MSG("PlayMP3",-1)` сохраняет ID в10226544.
Переменный размер не означает произвольный порядок полей.

| Порядок | Play, path!=0 | Stop, path==0 |
|---|---|---|
| 1 | WRITE_BYTE(loop!=0) | WRITE_BYTE(0) |
| 2 | WRITE_BYTE(1) | WRITE_BYTE(0) |
| 3 | WRITE_COORD(player+2320) | WRITE_COORD(player+2318) |
| 4 | WRITE_STRING(stringBase+path) | WRITE_STRING("nothing") |
| завершение | MESSAGE_END; pending=0 | MESSAGE_END; stopFade=0; pending=0 |

Fade передаётся через **WRITE_COORD**, не32-bit wire float. Клиентский decoder теперь раскрыт: signed16 little-endian *0.125;
см. [music-message-contract.md](music-message-contract.md). Точные rounding/overflow
правила оригинального engine writer остаются отдельно не исследованы. Нет серверного clamp fade или
проверки длины пути в рассмотренных helpers/senders.

Play ветви явно вызывают MessageBegin(1,10226544,0,player.pev.pContainingEntity):
адресат — один игрок. В обеих stop ветвях Ghidra показывает MessageBegin()
без аргументов. Байты payload видны, но **точный recipient/type вызова stop
не подтверждён этим C**; нельзя молча копировать аргументы соседней ветви.

Имена engine callbacks подтверждаются ABI, не только похожими вызовами:
`analysis/abi/GiveFnptrsToDll.asm` копирует0x90 DWORD в10222f48.
Соответствующие позиции `external/hlsdk-portable/engine/eiface.h`:
MessageBegin slot46=10223000, End47=10223004, Byte48=10223008,
Coord53=1022301c, String54=10223020, RegUserMsg75=10223074.

В100ead70 два участка: C lines339–357 и2232–2250. Первый находится после
gate `DAT10222f04!=0 || virtual+bc()==0`, который перескакивает к финальному
`LAB_100ef068`. Финальный sender доступен и по этому обходному пути. На обычном
пути первый sender очищает pending, поэтому второй не дублирует тот же запрос
сам по себе; промежуточный callback может выставить новый pending. Это не
доказательство фиксированного количества сообщений за кадр или частоты кадров.

## Use101148b0 и multiplayer

1. Activator принимается при ненулевом virtual+d0 result; иначе берётся index1
   через engine, с сохранённым fallback engine(0). Берётся private data+7c.
2. При `pev.message(+1d8)==0` немедленный return, **без remove-on-use**.
3. При найденном игроке обычная ветвь ставит QueueMusic(message,spawnflags&2,
   pev.frags). Значение fade — **frags+168, не health**.
4. При rules object!=NULL и virtual+20()!=0: записывается `sv_coop_music`,
   global10222f18 получает loop,10222f1c fade. Цикл1..maxClients вызывает
   player lookup10119680; очередь ставится найденным игрокам только если
   global10222f20==0. Cvar/globals обновляются и при блокировке отправки.
5. После обработки flag1 вызывает remove helper10119900. Это происходит также
   при не найденном игроке, если message ненулевой. UseType/значение не выбирают
   toggle/start/stop внутри тела.

**Исправление старой записи:** `analysis/menu/switching.md` и прежний REVIEW
называли+168 `health`. Native serialized field table из
`analysis/doors/capture.json` (`entvars_field_table_excerpt`, record1021add0)
доказывает float `frags` offset168; health record1021adc0 имеет164. Новый notes
заменяет неверное имя, сохраняя остальные прежние доказательства. Ресурсы и
код порта в этом проходе не исправлялись.

Stop-use100a7220 находит первую entity `player`, проверяет lookup; в обычной
ветви вызывает QueueStop(pev.frags). В multiplayer присваивает sv_coop_music
literal101a2496, пишет globals fade и loop0 и ставит QueueStop каждому найденному
игроку. В отличие от play-use, этот цикл **не проверяет10222f20**. Текст literal
101a2496 не разрешён этим проходом; не доказывать пустую строку лишь по имени DAT.

10119680 проверяет index>0 && index<=maxClients, engine edict!=NULL и edict.free==0,
затем возвращает private data+7c. Это lookup, не проверка IsPlayer каждого результата.

## Другие входы и временное замещение

Сохранённые прямые текстовые callers QueueMusic:10022980,10048070,1004ad10,
1004c100,10070050,10070660,100c9210,100f14c0,101148b0. Это список в текущем C
корпусе; косвенные вызовы и невыгруженный код не исключены.

| Вход | Наблюдаемая музыкальная ветвь |
|---|---|
|10022980|Одноразовый guard entity+250; QueueMusic("boat.mp3",1,1.0) |
|10048070|При ненулевом door+18c ставит его path, loop из spawnflags&2, fade0; отдельный end-demo путь QueueStop(1.0) |
|1004ad10|Передаёт door+110, вычисленный loop и fade; отдельный end-demo stop1.0. Полный door state machine здесь не раскрывается |
|1004c100|При валидном activator/master/target/message и music+180 передаёт path, loop из pev+248, fade из pev+258 |
|10070660|Пишет global10222f20=1; найденным игрокам ставит "fucked.mp3",loop1,fade1.0 |
|10070050 CBookSimon::RealKilled|Для игроков читает sv_coop_music; strlen>1 → очередь path с globals loop/fade |
|100c9210|При10222f20==0 читает sv_coop_music и strlen>1; иначе "fucked.mp3",1,1.0. Имеет отдельный непосредственный game-over sender |

Door переходы10048cb0 и1004bb90 могут вызвать QueueStop, затем напрямую
переписать player+2310 новым path. Поэтому pending не содержит отдельного
неизменяемого opcode stop: sender решает заново по path на момент отправки.

DevUse1002c4b0 проверяет activator/player/helper и ненулевой `pev.noise(+1ec)`,
посылает владельцу непосредственный PlayMP3(0,1,COORD0,noise). Queue fields
не меняются. После этого сохраняет volume и уменьшает его до25%, устанавливает
commentary/player state. DevThink1002c2a0 при завершении (Enter либо deadline)
выставляет player.pending+2314=1 и восстанавливает volume; прежняя queued path
может быть повторно доставлена. Это объясняет сохранение path после отправки.
Здесь не заявляется весь контракт commentary/UI/input.

Прямые game-over senders100a2320,100c9210,100e9230 посылают
PlayMP3(1,1,COORD0,"game_over.mp3"). Они не используют QueueMusic и в показанных
ветвях не обнуляют pending. Нельзя объявлять100ead70 единственным отправителем
или переносить queue dedup/ordering на все сообщения.

## Закрыто и осталось

Закрыты: private queue ownership/offsets, отсутствие FIFO, play/stop payload
order, регистрация ID, два sender участка, spawnflag значения, multiplayer
suppression, frags correction, restore/commentary повторная доставка и
существование immediate senders.

Открыто: точные MessageBegin аргументы двух stop ветвей; engine writer COORD,
фактическая длина engine packet/string, полный engine dispatcher→player virtual
route и его cadence; числовая factory-vtable→Use связь; полная save-field таблица
music fields. Наличие reviewed большого метода не закрывает все его ветви.

Минимальное дальнейшее native evidence при необходимости: bounded assembly
внутри100ead70 вокруг первого music sender и диапазона100ef068..100ef1a3;
factory101084f0 assembly плюс vtable+e8; serialized PLAYER table10217fe8
для полей2310..2320. Это запросы доказательств, не текущие вызовы REA.

Клиентская зацепка уже сохранена:1006cf00 в
`decompiled/client/captures/graphics-client-first/005-pseudocode.c` регистрирует
PlayMP3→1006e8f0, stopmp3→1006e350 и вызывает1007fb50(0,0,0,0).
Receiver, decoder и fade/playback теперь связаны в
[music-message-contract.md](music-message-contract.md) и
[music-client-contract.md](music-client-contract.md).

## Основные исходники

Все server C выше находятся в
`decompiled/server/partial-pass/functions/0x<address>.c`; provenance/hash —
`decompiled/server/partial-pass/index.json`. Дополнительный Use capture:
`decompiled/server/captures/menu-switch-music/000-pseudocode.c`.
ABI и entvars: `analysis/abi/GiveFnptrsToDll.asm`, `analysis/doors/capture.json`,
`analysis/doors/review.md`, `external/hlsdk-portable/engine/eiface.h`.
