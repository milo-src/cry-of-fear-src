# Оружие: клиентские контракты оригинала и адаптер SDK

Источник: установленный `cryoffear/cl_dlls/client.dll`, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Декомпил статический, оригинальный DLL не запускался и не изменялся.
Это данные установленной версии, включая её дополнительные модели/карты;
наличие файла не означает принадлежность оригинальной кампании.

## Сообщения

Регистрация `1001a2f0`, переходники `1001c070..1001c1c7` сохранены в
`client-static/`. Новые полные Ghidra captures находятся в
`decompiled/client/captures/weapons-client-core/` с capture.json.

| Сообщение | Обработчик | Формат и наблюдаемые действия |
|---|---|---|
| AmmoX | 1001b110 | BYTE индекс, SHORT количество; сохраняет abs(count). Размер3; SDK штатно ждёт2! |
| CurWeapon | 1001b150 | BYTE state, CHAR id, CHAR clip. id<1 очищает current; clip<-1 превращается в abs; state!=0 выбирает оружие. Engine crosshair очищается, оригинальный VGUI рисует свой. |
| WeaponList | 1001b3b0 | STRING name; CHAR primaryAmmo, BYTE max1, CHAR secondaryAmmo, BYTE max2, CHAR slot, CHAR slotPos, CHAR id, BYTE flags. Max255 превращается в -1. Сохранение записи и загрузка sprites. Совместим с SDK wire. |
| DualAmmo | 1001b240 | Два signed LONG, поля HUD+48/+4c. Sender100358c0 передаёт player+5dc/+5e0: clip выбранных dual+204, затем dual+200; для предмета без магазина -1. |
| AmmoPickup | 1001b040 | BYTE index (не используется), BYTE count, STRING displayName; Hand Grenade заменяется на handgrenade, строится уведомление. Не путать с AmmoX. |
| WeapPickup | 1001b330 | BYTE id, lookup weaponName, уведомление. Отдельный путь от Inventory notification. |
| IronSights | 100709a0 | COORD*3 сохраняются в HUD+291c/+2920/+2924; BYTE zoom читается/игнорируется; BYTE transition ставит HUD+2934, при0 обнуляются vector/flag. |
| Scope | 10032bf0 | BYTE mode, видимость scope panel; источник gfx/vgui/telescope_scope.tga. |
| ViewKnock | 1006ecb0→10071b20 | BYTE amount; GetViewAngles, pitch-=amount, SetViewAngles при отсутствии native camera guard. Это изменение реального направления, отдельно от пружины vuser3. |
| WeaponBody | 1006ed10→10071c50 | BYTE body; GetViewModel, запись curstate.body без перезапуска sequence. |
| TakePhoto | 1006eb10→100719f0 | Пустой пакет; pending flag104ce4a1=1 для последующего копирования framebuffer в текстуру экрана камеры. Не fullscreen flash. |

SHORT reader10080a10 подтверждён ранее; LONG100809b0 подтверждён assembly
`client-static/read-long.asm`. Native server registry100e5fc0 также задаёт
CurWeapon3 и AmmoX3; DualAmmo объявляет variable size.

Критическая разница текущего порта: `prepare_game.py` намеренно исключает
`m_Ammo` из Draw. Поэтому одни серверные сообщения ранее не давали видимого
боезапаса. Новый `CofWeaponsClientDraw` показывает bounded числовой clip/reserve,
используя проверенные данные. Это адаптированная компоновка, а не заявление о
восстановлении точного VGUI HUD. Оригинальный crosshair32x32 доказан ранее в
`analysis/ui/hud.md`; полный набор условий его показа ещё не восстановлен.

## Кнопки, прицеливание и ABI

- Исходный config: MOUSE1 +attack, MOUSE2 +attack2, MOUSE3 +attack3.
- `+attack2`10078920: KeyDown(105434a4), state105434ac.
- `+attack3`10078a40: KeyDown(10543510), state10543518 при global101b2f10==0;
  перед этим есть специальные UI ветви. `-attack3`10078ad0 всегда KeyUp.
- Сохранённый `movement-client-pass3/001` (10078670) выводит attack2 в bit0x800,
  attack3 в bit0x40. Это НЕ SDK IN_ATTACK3: bit0x40 в SDK обозначает IN_LEFT.
- Сервер `1011d560` ItemPostFrame: приоритет attack2/0x800 → virtual+1a8;
  затем attack3/0x40 → virtual+1ac; attack1/1 → virtual+1a4; reload/0x2000 →
  virtual+1c0. Есть cooldown и player-state guards; названия virtual действий
  дополнительно устанавливаются аудитом конкретных классов.

Порт явно переносит третью кнопку на bit0x4000; серверная пара должна понимать
тот же бит. Это сохраняет клавиатурный поворот SDK и не меняет ABI usercmd.
Ввод блокируется inventory/menu/ladder/death; сервер остаётся источником
разрешения действий/cooldown. Специальные native UI globals не копируются.

Дескрипторы содержат `ironsight_forward/right/up/zoom`; пример Glock:
0.05,-20,13.75,50. Их наличие не доказывает прямое использование этих чисел
как viewmodel XYZ. FOV должен идти через восстановленную пару CameraZoom(rate)
и SetFOV(target), а не напрямую в ref_params.fov_x. См. movement/client.md.
Полные IronSights/Scope captures сохранены в `weapons-client-aim/`.
На installed client прямых читателей трёх float descriptor offsets не найдено
при проверке x86 обращений к HUD+291c..2924 и соответствующих globals:
конструктор/сброс и message handler пишут их, но доказанного трансформирования
viewmodel этими значениями нет. Flag+2934 читают weapon bob100ad9d0 и lazy
sway100adec0. Модели содержат authored iron_to/iron_idle/iron_from sequences.
Поэтому порт подавляет SDK weapon bob при aim и оставляет выравнивание этим
анимациям, не добавляя предположительный сдвиг -20 единиц второй раз.
Сохранение offsets в клиентском state не означает реализованного consumer.

Оригинальный Scope constructor100327e0 (`vgui-menu-panels/021`) создаёт
центральную картинку и четыре чёрные панели вокруг. Порт использует тот же
512x512 telescope_scope.tga, скрывает viewmodel и crosshair; уменьшает картинку
только при высоте экрана меньше512 (явная адаптация для небольших экранов).
IronSights порт читает zoom byte, чтобы отличать выход zeros+0+1 от aim.
Scope и IronSights проверяют полный размер пакета перед изменением состояния.

Исходные бинды также задают Z=`weapontoggle`, 1/2/3=`quicksel 1/2/3`.
Server ClientCommand10018d60 dispatch weapontoggle вызывает activeweapon
virtual+1b0, отдельный от +attack3/ironsight; новая +attack4 не вводится.

## События студийных моделей

Исходный `HUD_StudioEvent`1004c6c0 сохранён в
`decompiled/client/captures/ladder-sound-client/000-pseudocode.c`.
Новые helpers1004bc30/1007fb10 сохранены в weapons-client-core,
1004bb80/10080410 — weapons-client-effects. Не переносить расширенные
оригинальные entity offsets: attachment0 оригинала+0xb60 соответствует SDK
`entity->attachment[0]`, а не SDK byte-offset0xb60.

| Event | Восстановленное поведение |
|---|---|
| 5001,5011,5021,5031 | Muzzle helper attachment0,1,2,3, param3=0, multiplier1. |
| 5004 | options sound. Обычный путь PlaySoundByNameAtLocation(options,1,attachment0); models/cs/ добавляет cs/. |
| 5050 | RandomLong(0,1):1→flare_strike1,0→flare_strike2; EV_PlaySound(entity,attachment0,CHAN_WEAPON1,vol1,attenuation0.8,flags0,pitch100), затем Aurora flare sparks. |
| 5051 | server command throwflare INT(attachment1.x) INT(y) INT(z). Выпуск по событию анимации. |
| 5080 | server command zoominmdl atoi(options). |
| 5015 | Водяной splash по attachment2 и проверке water/brush. Не звук оружия. |
| 5060 | swim sound/command/bubbles. Отдельное движение, не выстрел. |

У5004 для current weapon IDs `{20,23,26,3,9,27,7,21,11,4,14,19}` и options
с `weapons/` путь меняется на `weapons_new/` + всё после первого slash.
Оригинал зовёт1007fb10 →10080410 и отдельную аудиобиблиотеку. Она читает volume,
ограничивает0..1, задаёт playback-rate `1+RandomFloat(-0.1,0.1)` и запускает
звук. Порт использует тот же ресурс через Xash local sound с pitch90..110;
глобальная volume применяется движком. Это замена audio backend, а не fallback
на посторонний звук. Server IDs должны совпадать с native IDs для этой таблицы.

Muzzle helper: flash1/default scale4; IDs4/21 scale6; IDs9/26 flash2 scale6;
IDs11/23 flash2 scale9 (ветвь11 первоначально10 затем перезаписывает9);
ID27 flash2 scale2; models/cs/ scale2. Добавляет RandomFloat(-1,1), roll1..359.
Оригинал рендерит отдельную видимую entity additive5/amount100, animationframe0,
custom renderfx161; породил также smoke при cvar и две системы освещения.
Обычный dlight1004bb80: radius128,color225/170/105,life0.06.
Порт рисует authored flash model и этот SDK dlight; custom renderfx161,
вторая собственная система dynamic light и smoke не переносились вслепую.
Aurora sparks5050 также пока отдельный незавершённый эффект.

Новый hook вызывается до `CofMovementStudioEvent`, сохраняя ladder events.
5051/5080 в порту допускаются только от собственного viewmodel, чтобы чужая
отрисованная entity не отправляла игровые команды от локального игрока.

## Инвентарь и ресурсы

Полные доказательства GUI-команд: `analysis/ui/inventory.md`, captures
inventory-ui-first/message/input/keys. Equip: `inventoryequip SLOT`, drop:
`inventorydrop SLOT`, dual: `inventorydualwield FIRST SECOND`, combine:
`inventorycombine FIRST SECOND RESULT`, quickslots: `quickselset1..3 SLOT`.
Обработчик Inventory: BYTE slot,BYTE reset,STRING descriptor,BYTE threeSlot,
BYTE suppressPickup,BYTE glockTac. Последний меняет Glock descriptors/icons
во всех слотах и quickslots; текущая презентация пока его не применяет.

Исходный порт разрешал equip только item_key и отвергал все weapon действия.
Теперь native weapon descriptor classnames допускают equip/drop с исходными
командами; меню использует inventory_weapons.tga. Combine/dual/quickslot
выбор теперь доступен через исходное пятистрочное weapon-меню: строка4
выбирает второй предмет, строка5 содержит три quickslot кнопки по42px.
Следующий клик выбирает второй слот; MOUSE2 отменяет выбор. Equip/drop,
combine/dual и quickslot отправляют native команды; сервер проверяет
совместимость и владение. Для unpair добавлена подписанная кнопка — адаптация
интерфейса порта. Иконки quickslots пока сохраняются локально при назначении;
авторитетная загрузка идёт через адаптер CofQuickSlots: ровно3 BYTE индекса0..6,
0 очищает слот. Сервер посылает после Inventory sync; последующие Inventory
обновления также обновляют привязанные иконки. Некорректный пакет не меняет state.

DualAmmo порт отображает как L/R clips, -1 как --. Сообщение -2/-2 очищает
dual HUD при holster/unpair: это согласованный sentinel адаптера, а не
найденная исходная семантика. Числа передаются LONG без byte truncation.

## Две модели от первого лица: явный адаптер

Исходный сервер dualweapon использует независимые предметы/таймеры и сообщения
DualWield/DualAnim/DualFlash; полностью исходный client render ABI ещё не
восстановлен. Вместо подмены расширенных native структур порт вводит CofHands:
BYTE hand (0=сброс,1=левая,2=правая), затем для1/2 STRING modelpath, BYTE weaponID,
SHORT sequence, SHORT body, LONG serial, LONG serverTimeMilliseconds.
Serial меняется при каждом новом запуске, включая повтор того же sequence.
Сброс имеет строго1byte; остальные пакеты проверяются целиком до обновления.
Body может обновляться при том же serial; это не меняет время/sequence и не
повторяет уже обработанные события. Так включается/выключается Glock taclight.

SDK R_StudioDrawModel вызывается движком в отдельном first-person render pass
с ограниченным depth range, а события идут отдельным STUDIO_EVENTS pass.
Адаптер рисует каждую руку в этих же проходах, временно помещая её независимую
entity в engine viewmodel slot. После прохода исходная entity/model/header
восстанавливаются. У каждой руки собственные sequence/body/animtime/latched
state; событие использует weaponID этой руки для выбора muzzle/sound resource.
Таким образом левый Animate больше не перезаписывает правый.

Используются неизменённые authored v_*.mdl. Левая модель отражается по локальной
Y матрицы StudioSetUpTransform (включая attachments); обратный culling для этого
прохода отключён. Это геометрический адаптер порта, не заявленная точная
native композиция/смещение всех пар. Новые meshes, offsets или animations не
выдуманы. Самостоятельного world entity, которое обрезается стенами, нет.
Доказательства SDK: cl_dll/GameStudioModelRenderer.cpp R_StudioDrawModel;
StudioModelRenderer.cpp StudioSetUpTransform/StudioDrawModel/StudioEstimateFrame;
движок ref/gl/gl_studio.c R_RunViewmodelEvents/R_DrawViewModel.

Source/runtime assertions проверяют независимость sequence/serial двух рук,
размер пакета и сброс. При реальном render в COF_WEAPONTEST выводится
COF_WEAPON_HAND_RENDER hand=1/2 с model и sequence. Эти маркеры подтверждают
путь вызова, не визуальное качество или полное совпадение с оригиналом.

Отсечение граней: Xash R_StudioSetupRenderer/R_StudioRestoreRenderer не меняют
face culling. Поэтому адаптер явно вызывает TriAPI CullFace(TRI_FRONT) после
каждой руки. Left-only TRI_NONE не остаётся на правой руке/следующих draws.
На normal smoke основной агент подтвердил оба реальных render marker;
проверка изображения при этом не выполнялась.

RTX audit: `xash-rt/ref/gl/gl_studio.c:R_StudioDrawModelInternal` при
XASH_RAYTRACING принудительно выбирает native renderer (`if(1)`), поэтому
обычный client StudioDrawModel вообще не вызывается. Это объясняет отсутствие
hand markers при проходящих network/server assertions. Простой переход всех
RTX моделей на SDK renderer не делается: сохраняется native mesh pipeline.
Общий `src/cof/shared/weapon_studio_interface.h` описывает опциональный ABI
`CofWeaponStudioInterface`: неизменённый prefix r_studio_interface_t, version
0x434F4601 и callbacks DrawHands(flags,nativeDraw), MirrorHand(), HandEvent().
Engine RTX может передать native draw для каждой руки; normal использует
стандартные callbacks prefix. Новых сетевых структур/смещений ABI нет.
Во время hand draw curstate.iuser4=0x434F4801/02 различает две руки, не меняя
entity index или engine viewmodel pointer. RTX выделяет разные stable mesh
identities; иначе две геометрии одного viewentity могут перезаписать друг друга.
HandEvent вызывается вокруг расчёта событий, после SetupBones; это сохраняет
frame0 muzzle при late packet, не создавая ложного sequence blending.

ViewKnock восстановлен по bounded disassembly10071b20: ptr101b2690 читает
(`analysis/weapons/viewknock-evidence/`, SHA256 и ranges в capture.json)
viewangles, READBYTE100808b0, вычитание из pitch; ptr101b2694 пишет angles,
если BYTE1018d27c==0. При DWORD10542bb8!=0 также вычитается из float105594fc.
Значение этих двух globals пока не сопоставлено с native режимами. Порт
подавляет сообщение при CofMovementCameraActive/death, но не выдумывает второй
пружинный интегратор или произвольный decay. Дополнительный native global
105594fc не перенесён без доказанного consumer. Server100f9100 передаёт
BYTE(int(amount)); сохранённые дробные magnitude округляются сервером как
в исходном wire. Тест проверяет арифметику/размер без изменения реального view.

- `client-model-events.json`: 51 установленная v_*.mdl, SHA256, все sequences,
  fps/frames/duration/flags и события/frame/options. В них5001×49,5004×167,
  5015×6,5050×1,5051×2,5060×2. Длительность `(numframes-1)/fps`.
- `client-item-contracts.json`:55 weapon/ammo descriptor записей с исходными
  ключами, картинками, classname и ironsight/combine параметрами.
- `map-weapon-ammo-roster.json`:181 BSP с оружием/боеприпасами;33 различных
  classname. Считался только entity lump валидных BSPv30, карты не запускались.

## Камера и дополнительные проверки

Bounded native evidence находится в `photo-body-evidence/` (SHA256/ranges в
capture.json). TakePhoto handler100719f0 лишь ставит pending flag104ce4a1.
Consumer10066bc3 в ветке texture name `diffusegay` вызывает10064ac0(width,height),
сбрасывает flag, а затем биндинг использует texture104d26f0. Helper создаёт
texture при первом запросе, выставляет linear min/mag, делает glCopyTexImage2D
RGB из центрального прямоугольника framebuffer и сохраняет captured flag.
Поэтому добавлять белый HUD fade вместо этого сообщения неправильно.

Порт принимает ровно пустой TakePhoto и хранит pending request. **Копирование
изображения на экран модели камеры пока не реализовано**: нужен общий normal/
RTX renderer adapter; GL-only код не выдаётся за готовый cross-renderer эффект.
Механика фото/звук/свет находятся на сервере. Тест называется
`takephoto_empty_packet_pending_only`, чтобы не смешивать доставку сообщения
с результатом захвата изображения.

WeaponBody применяется сразу и повторно к single-viewmodel при refdef; сброс
выбора оружия/ResetHUD очищает override. Dual получает body отдельно в CofHands.
Тест `weapon_body_byte_keeps_sequence` проверяет, что body меняется, sequence
остаётся прежним; `hand_body_update_preserves_animation` проверяет тот же serial.

Аудит `analysis/local/normal-c_sdkmap1-weapons-isolated.log`: обнаружен missing
handler WeaponBody78 (исправлен), missing stock SDK sounds/precaches и sprites
zerogxplode/WXplo1/laserdot/explode1. Ошибок новых client resource paths в этом
журнале не обнаружено; это не полная проверка слышимых звуков (smoke -nosound).
Предупреждение sequence4/1 у w_glock.mdl устранено разделением серверной
worldmodel sequence и анимации viewmodel в общей базе оружия.

## Интеграция и проверка

`tools/prepare_weapons_client.py.prepare(target)` (alias apply) вызывать после
movement hooks и копирования prototype_client.cpp. Копирует ownclient source,
ставит init/reset/draw/input/event/view hooks, меняет SDK AmmoX на SHORT,
ставит bounded validation до штатных MsgFunc. Vendor source не изменяется.
Сохранён SDK WeaponList/CurWeapon runtime для selection/prediction plumbing.

`COF_WEAPONTEST` включает checks: AmmoX300 без byte truncation, короткий packet
не меняет reserve, CurWeaponclip, out-of-range ID не меняет current;
IronSights signed COORD/exit/truncation, Scope size, DualAmmo300/-1/truncation/
clear. Marker:
`COF_WEAPON_CLIENT_COMPLETE failures=0`. Тест сохраняет/восстанавливает данные,
не посылает пользовательский ввод и не воспроизводит звук. Финальная сборка
Waf и изолированные runtime-проверки normal x86/RTX x64 пройдены;
`runtime-verification.json` фиксирует результаты и хэши. RTX дополнительно
подтверждает передачу обеих рук в native mesh submission; изображение и звук
не оценивались.
