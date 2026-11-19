# Специальное оружие и ближний бой CoF

Статический разбор оригинального hl.dll SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Исходные ресурсы и DLL не изменялись. Это контракт для реконструкции; наличие экспорта не означает полное совпадение поведения.

Машиночитаемый полный реестр: `special.json` — 15 классов, PE RTTI/vtables, адреса и SHA псевдокода, модели, последовательности и события. Длительность модели `(numframes-1)/fps` подтверждена `1000f390`. Native vtable: Spawn +2c, Precache +30, GetItemInfo +13c, Deploy +144, Holster +14c, PostFrame +158, Primary +1a4, Secondary +1a8, Reload +1c0, Idle +1c4.

| Класс | ID | Алиасы | Spawn |
|---|---:|---|---|
| CAction | 17 | weapon_action | 0x10020280 |
| CAxe | 24 | weapon_axe | 0x10021790 |
| CBookLaser | 25 | weapon_booklaser | 0x10024510 |
| CBranch | 16 | weapon_branch | 0x10025d80 |
| CCamera | 5 | weapon_camera | 0x100277d0 |
| CDualWeapon | 15 | weapon_dualweapon | 0x10035d60 |
| CFlare | 13 | weapon_flare | 0x1003ee20 |
| CFlashlight | 1 | weapon_flashlight | 0x1003ff10 |
| CLantern | 10 | weapon_lantern | 0x10050950 |
| CMobile | 2 | weapon_mobile | 0x10053bc0 |
| CNightstick | 12 | weapon_hammer, weapon_nightstick | 0x1005d330 |
| CRadioWeapon | 22 | weapon_radio | 0x10063930 |
| CSledgeHammer | 18 | weapon_sledgehammer | 0x100717b0 |
| CSwitchblade | 6 | weapon_knife, weapon_switchblade | 0x1007a360 |
| CSyringe | 8 | weapon_syringe | 0x1007b600 |

## action

- Internal ID17 from GetItemInfo (not assigned in Spawn), null world; normal/doctor v_actions viewmodel. pev.health selector drives swim/sprint/fall and punch display sequences in idle100202e0. Primary empty; do not invent a firearm. Доказательства: 0x10020180, 0x10020280, 0x10020070, 0x100202e0.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Internal movement-selected automatic action switching not yet connected; class export alone does not implement all action displays.

## axe

- Primary seq2; hit Think +0.26s; primary/idle deadline = now+(numframes-1)/fps текущей seq; skill sk_cof_axe (55 во всех четырёх уровнях). Доказательства: 0x10021620, 0x100e6bc0, 0x100af810, 0x1000f390.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Trace range, hull refinement and body/wall sounds now confirmed by bounded assembly; special enemy reactions/decals remain incomplete.

## booklaser

- Primary starts continuous mode, seq1, next pulse+0.1s, loops burn sound2s and light bit0x10/Aurora. Held attack PostFrame issues six rays each0.1s via10088ca0, range400, spread0.04362, bullet type50, explicit damage5; releases/sprint stop sound/light. Important: first integer6 is ray count, NOT bullet enum. Доказательства: 0x10024160, 0x10023900, 0x10088ca0.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.

## branch

- Primary random seq3/4, hit Think +0.37s, cooldown по длительности seq. Secondary shove seq8 +0.3s WeaponMelee, lock1s. sk_cof_branch=10. Доказательства: 0x10025b80, 0x10025cc0, 0x100e6e90, 0x100af810.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Trace range, hull refinement and body/wall sounds now confirmed by bounded assembly; special enemy reactions/decals remain incomplete.

## camera

- Primary seq3, cooldown model duration1.3s, photo+flash_charge sounds, light/camera messages. Normal branch trace512, searches radius64 at hitpoint: camera_spot_trigger fires target; monsters receive zero damage with special type0x10000000. spawnflag1 scans1024 with visibility/cone predicates. This is not a bullet weapon. Доказательства: 0x10027280, 0x1000f390.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Existing SDK monster AI does not implement native 0x10000000 stun response; sending native flag is not proof that monster is frozen. camera_spot_trigger factory now ported from actual CCameraSpot vtable.

## dualweapon

- Coordinator ID15 null world; Spawn takes pair IDs from pev iuser1/iuser2 (+248/+24c) into private+204/+200. GetModel10031f00 supports firearm/melee IDs3,6,7,12,16,19,21 for either hand; left-only1,2,10,13. Existing weapon viewmodel override wins. Доказательства: 0x10035d60, 0x10031f00.
- Independent left/right reload completion10034b50/10034de0, primary10034480, secondary10035800, model/flare/phone state and secondary entity CDualWeaponRight. Right helper exported hit Thinks are separate callbacks. Requires both viewmodels and preserved partner ammo, not a new synthetic gun. Доказательства: 0x10034b50, 0x10034de0, 0x10034480, 0x10035800, 0x10038de0, 0x10038e50.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Full second-viewmodel message/render ABI and every asymmetric pair special-case are not implemented by stock SDK adapter.

## flare

- Ammo flares max5. Primary unlit: seq3 Ignite+0.86s; lit: seq7 ThrowRemove+0.9s; lock1.5s. Ignite state1, burn expiry now+sk_flare_burn_time120/90/60/30; loop sound every6.9s. FlareThink .1s; expiration state2 stop sound/animation. Secondary WeaponMelee+0.3s, unlit seq17/18; lit22/23, lock1s. Доказательства: 0x1003dc00, 0x1003e9f0, 0x1003dd10, 0x1003da40, 0x1003ebf0.
- Native view/world particle packets attach signal.aur, blacksmoke.aur, flare_sparks.aur, flare_glow.aur; held light bit0x10; throw/removal and ownership affect remaining ammo and active mobile. Доказательства: 0x1003dd10, 0x1003e780, 0x1003f110.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- SDK throwable velocity and TE light/particle presentation are explicit adapter approximations, not proven original values. Exhausted flare currently removed/consumed rather than retained state2 pickup.

## flashlight

- Primary toggle seq3 lock0.5s, private on/off player+1ea8 и light mask player+5d0 bit8; TurnOn/Off идемпотентны. Secondary WeaponMelee+0.3s, hit/miss seq10/11, lock1s. Ammo flashlight max200; pickup battery даёт100; Spawn default100 либо map health. Доказательства: 0x1003fce0, 0x10040110, 0x10040190, 0x1003fd30, 0x1003f600, 0x1003ff10.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- SDK EF_DIMLIGHT adapter does not yet reproduce native flashlight ammo drain/light mask transport.

## lantern

- Primary vtable+1a4→1001e910 (пустой общий метод); secondary10050700 WeaponMelee+0.3s, trace32/hull chooses seq3 hit или7 miss; lock1s. Визуальный свет управляется клиентскими light bits, физика светового источника требует отдельной сверки. Доказательства: 0x10050700, 0x100500b0.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.

## mobile

- Primary seq4 при выключенном свете с FlashToggle+0.23s, seq8 при включённом +0.66s; lock1s. FlashToggle player+1e98, light mask bits1/2; secondary seq10/11, PunchThink+0.133s lock1s. Доказательства: 0x10053990, 0x100530b0, 0x10053a70.
- SMS/calling и battery repair отдельные подсистемы:100534d0 читает локализованный phone_messages.txt;10052f20 FixBattery;10053800 MidBatteryFix;10053d80 UI click. Не сводить телефон только к свету. Доказательства: 0x100534d0, 0x10052f20, 0x10053800, 0x10053d80.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- SMS/calling/battery-fault UI contract not yet wired in reconstruction.

## nightstick

- weapon_hammer и weapon_nightstick фабрики одного CNightstick; Spawn канонизирует nightstick. Primary random seq3/4/5; NightStick2 Think +0.31s; cooldown1s; sk_cof_nightstick=11. Доказательства: 0x1005d490, 0x1005d4a0, 0x1005d330, 0x1005d210, 0x100e7140.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Trace range, hull refinement and body/wall sounds now confirmed by bounded assembly; special enemy reactions/decals remain incomplete.

## radio

- CRadioWeapon (не CRadio). Primary пустой; secondary seq3, PunchThink+0.133s, lock1s, player animation radio_melee. Native literals police/models/weapons/radio/... отсутствуют на этой установке; соответствующие реальные файлы models/weapons/radio/... доступны. Доказательства: 0x10063a70, 0x10063730, 0x10063840.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.

## sledgehammer

- Primary разрешён при stamina>=8, seq1, impact+1s, primary/idle2.66s. HitThink вычитает8 stamina до проверки hit, включая промах. sk_cof_sledgehammer=45. Доказательства: 0x100716e0, 0x100e7da0, 0x100af810.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Trace range, hull refinement and body/wall sounds now confirmed by bounded assembly; special enemy reactions/decals remain incomplete.

## switchblade

- knife/switchblade один CSwitchblade. Primary normal seq3/16 (выбор0 против1/2), impact+0.16s, cooldown0.5s; alternate seq8/18 impact+0.16s cooldown0.9s. Idle/secondary deadline1.0/1.2s. Secondary переключает stance seq4/9 и lock1.5s. Отдельный execute-like метод1007a110 использует Switchblade3 Think; не приравнивать его обычному secondary. Доказательства: 0x1007a4c0, 0x1007a4d0, 0x10079f50, 0x1007a2d0, 0x1007a110.
- Нормальный hit имеет дистанцию32, line затем hull/FindHullIntersection; skill sk_cof_switchblade6; alternate sk_cof_2switchblade9. Есть специальный счётчик попаданий по классификации0xf7, максимум10. Доказательства: 0x100e87d0, 0x100e80b0, 0x100e8440, 0x100af810.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.

## syringe

- Ammo syringe max10, default1 либо map health>0. Primary seq3, Inject +2s, обе атаки lock5s. Inject ставит очередь лечения sk_syringe_heal (100/80/60/50), обновляет morphine timer, уменьшает ammo если нет private unlimited flag, clamps0; остаток→Redeploy, ноль→DestroyItem после1.5s. Доказательства: 0x1007aa00, 0x1007b600, 0x1007b040, 0x1007aab0, 0x1007b0d0.
- Secondary только multiplayer: trace48 и поиск heal/revive цели; успешная seq4 блокирует8s, idle2.8s, BladeRetract+1.5s для живого игрока либо+2.16s для revive-like ветки; промах seq5 lock1s idle1.5s. Private corpse semantics полностью не восстановлена. Доказательства: 0x1007b110, 0x1007a540.

Границы:

- Static contract, not gameplay validation. Private native offsets are not SDK offsets. Some Ghidra calls omit arguments; no invented ABI based only on pseudocode.
- Morphine overdose/trip and cooperative corpse revival are not fully ported by queued-heal adapter.

## Skill defaults

Значения взяты из установленного `skill.cfg`; связь с globals — `100af810`. Они могут быть переопределены конфигурацией.

| Cvar без суффикса | 1 | 2 | 3 | 4 |
|---|---:|---:|---:|---:|
| sk_cof_axe | 55.0 | 55.0 | 55.0 | 55.0 |
| sk_cof_branch | 10.0 | 10.0 | 10.0 | 10.0 |
| sk_cof_nightstick | 11.0 | 11.0 | 11.0 | 11.0 |
| sk_cof_switchblade | 6.0 | 6.0 | 6.0 | 6.0 |
| sk_cof_2switchblade | 9.0 | 9.0 | 9.0 | 9.0 |
| sk_cof_sledgehammer | 45.0 | 45.0 | 45.0 | 45.0 |
| sk_cof_punch | 5.0 | 5.0 | 5.0 | 5.0 |
| sk_cof_weapon_melee | 5.0 | 5.0 | 5.0 | 5.0 |
| sk_syringe_heal | 100.0 | 80.0 | 60.0 | 50.0 |
| sk_flare_burn_time | 120.0 | 90.0 | 60.0 | 30.0 |

## Состояние реализации

`src/cof/server/cof_special.cpp` содержит классы, алиасы, задержанные melee/syringe, фонари, брошенный flare, sustained book cone, camera packets и dual coordinator. Общая база — `CCofWeapon`. `CofSpecialTests` прошёл в изолированном smoke-тесте normal x86 и RTX x64 с нулём ошибок; итоговые свидетельства — `runtime-verification.json`. Визуальная и звуковая оценка не выполнялась.

Особенно важно: камера передаёт native special damage type, но текущий SDK monster AI не гарантирует stun. Dual dispatch сохраняет партнёров, отдельные attack/reload timers и ammo. Добавлен новый серверный CofHands протокол для двух моделей; клиентский scope реализует рендер, визуальное соответствие ещё не проверено. Эти пункты нельзя описывать пользователю как полностью восстановленные.

В документе перечислены оставшиеся gaps в SMS/battery/morphine/corpse revive/action automation. Flare presentation/throw trajectory, flame particles и utility lights имеют явно выделенную SDK адаптацию.

## Дополнительная проверка и исправления

- Все primary melee имеют дальность32, кроме axe/branch40 (для branch secondary32). Доказательства movss:100e6bec,100e6ebc,100e7171,100e7dd1,100e8816. Punch100e7b1c/WeaponMelee100f9834 также32. Hull3 и refinement100df820 совпадают с SDK FindHullIntersection; сохранены TraceResult/hitgroup, дополнительный выдуманный множитель урона по голове не добавлен.
- Native flags TraceAttack: обычный удар0x04001000, sledge0x0d001000; ApplyMultiDamage получает player/player. Сохранён выбор body/wall sounds и громкость1/attenuation0.8. Axe/branch/обычный knife играют swing в начале; nightstick и alternateknife при impact. У sledge swing находится в model event5004 seq1 frame29, второй ранний звук удалён.
- Nightstick camera impulse(-3,-8,0), sledge(-4,1,8), WeaponMelee(1,1,8) применяются через проверенный100f91b0 как прибавка(-pitch,+yaw,+roll)*20 к SDK vuser3. Native AI реакции на специальные damage bits ещё не перенесены полностью.
- CCameraSpot: vtable101a41ec, Spawn10011250, inherited KeyValue10102480. Отдельный Use отсутствует; камера вызывает target напрямую. EF_NODRAW — явный адаптер SDK, чтобы служебная кисть не появлялась в обычном/RTX рендере.
- Battery100402b0/10040010/1003f600 даёт100 flashlight с максимумом200. Auto-touch условие iuser4==1 подтверждено PE записью1021b070 (nativeoffset254); остальные подбираются Use. Native battery mesh отсутствует, используется установленный phone_battery.mdl. Дренаж телефонной батареи/SMS ещё не восстановлены.
- DualAmmo — 2 LONG клипа, -1 для nonmagazine (native100358c0). Adapter -2/-2 очищает HUD. CofHands — новый переменный пакет проекта: hand BYTE, model STRING, ID BYTE, sequence SHORT, body SHORT, serial LONG, start milliseconds LONG; hand0 очищает оба вида. Общий player attack gate не смешивает cooldown двух рук.
- Last syringe сохраняет native delayed destruction1.5s после инъекции, затем освобождает inventory slot/item. Flare удаляет исчерпанный held item; брошенная сущность продолжает жить до burn deadline. Dual unlink выполняется перед удалением/сбросом предмета.

`CofSpecialTests` дополняет основные проверки реальным AddPlayerItem/Attach, созданием пары, независимой стрельбой, раздельными перезарядками, drop/unpair, исчерпанием syringe и battery cap. Внутренние deadlines в этих assertions продвигаются синтетически; это не проверка реального времени анимаций и не визуальная проверка. Изолированный запуск и сборку выполняет основной агент.


## Accessory reconstruction and adapter boundaries

- `item_glocktaclight`: vtable `101d1b14`, Spawn `100b59d0`, Precache `100b5710`, model `models/weapons/glock/glock_taclight.mdl`, descriptor `inventoryitems/taclight.txt`.
- `item_phonebattery`: vtable `101d1c7c`, Spawn `100b5cd0`, Precache `100b5820`, model `models/items/phone_battery.mdl`, descriptor `inventoryitems/mobile_battery.txt`.
- Native combine `100e3020` checks matching descriptor `combined_result`, removes the accessory slot and sets the existing weapon pending byte. The port retains the weapon entity, checks both descriptor paths/results, handles full inventory, and supports dropping these accessory items. Glock installation/toggle state is owned by `cof_ranged.cpp`.
- Phone `10053210` starts insertion sequence3 (off)/9 (on), lock5, MidBatteryFix after1s; `10053800` plays rifle_insert and schedules FixBattery after another1s; `10052f20` uses sequence2 (off)/7 (on), clears pending, lock0.5. This animation/state path is implemented; native phone drain, battery-fault fields and SMS are still incomplete.
- Dual body updates preserve the existing CofHands serial, so attachment changes do not restart animations or repeat events. The combined player light is recalculated from both hands after pending callbacks. Saved active pairs resync both models, saved animation sequences and HUD without calling Deploy or clearing reload/attack deadlines. The paired extra-command tactical-toggle path remains unverified; single Glock toggle and pairing an already lit Glock are supported.
- Native empty TakePhoto is sent. Client acceptance is not actual photograph reconstruction: native framebuffer crop into the camera `diffusegay` texture still needs a renderer implementation.
- Offline validation found all79 literal model/sprite/sound/descriptor paths in the installed resources. No original asset was changed. Accessory assertions cover both factories, invalid combine preservation, consumption of only the accessory, and both phone insertion stages. Parent owns compiled isolated runtime validation.
