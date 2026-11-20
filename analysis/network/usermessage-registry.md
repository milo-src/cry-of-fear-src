# Индекс регистрации user messages

Навигация по оригинальной серверной `LinkUserMessages100e5fc0` и сохранённому C-корпусу. Это статический RE; игра, REA-процесс и порт не запускались/не изменялись.

Регистраций **155**: фиксированных **78** (включая 9 нулевых), variable `-1` **77**. В 8000 server C найдены обращения к 132 ID-слотам, явные аргументы MessageBegin — для 130 сообщений. В 497 client capture C найдены named hook calls для 69 имён.

Источник: `decompiled/server/partial-pass/functions/0x100e5fc0.c`; SHA и строки регистрации — в [JSON](usermessage-registry.json). Вся функция защищена `DAT_1022649c == 0`; каждый ID-слот получает runtime-результат `RegUserMsg` через `10223074`. Адрес слота не является числовым ID сообщения.

Пять имён, оставленных декомпилятором как `&DAT_*`, прочитаны из оригинального `hl.dll` SHA-256 751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641. JSON содержит их VA, file offset, NUL-terminated bytes и SHA. Остальные имена взяты из C literals. Воспроизведение: `python analysis/network/build-usermessage-registry.py`.

## Как выбирать следующий протокол

1. Найти имя/ID в таблице, затем запись `messages` в JSON. `server_references` дают адрес функции, файл, строку и точный excerpt.
   Если адрес входа не извлечён из объявления именованной функции, `function_address:null` сохранён. `saved_selector_address` берётся из имени partial-pass файла; селектор не объявляется адресом входа.
2. `direct_MessageBegin_argument_in_C` — видимый аргумент вызова; `other_lexical_global_reference` — только обращение к глобалу. Условия и payload нужно читать в теле.
3. `client_references` отличает named hook call от простого literal; поле `handler_wrapper` даёт следующий адрес. Повторные captures одной функции не являются разными handlers.
   Неразрешённые client `&DAT_*` hook names сохранены отдельно в `unresolved_client_hook_labels`; они не подставляются по догадке. Hook literals вне этого server registration block лежат в `client_hook_names_not_in_this_registration`.
4. Перед новым захватом проверить REVIEW адресов в `decompiled/FUNCTION_CATALOG.txt` и существующие analysis-контракты. Этот индекс не присваивает им статус полноты.

**Ограничение:** 8000 partial-pass C — не все функции DLL. Ghidra теряет аргументы/alias-связи; ноль найденных отправителей или hooks не доказывает отсутствие протокола. Fixed size не раскрывает поля и не гарантирует согласие всех senders/readers; `-1` означает variable registration, не безлимитную сеть. Полный граф, runtime IDs, маршрутизация, типы полей и проверки лимитов не выводятся автоматически.

Нулевой H также не означает, что протокол неизвестен существующим ручным REVIEW: индекс намеренно не подменяет semantic-каталог и не угадывает имя raw client label.

## Таблица

R = число уникальных server C-файлов с ID-обращениями; S = из них с видимым MessageBegin; H = разные client hook wrapper адреса. Отдельные JSON counters `*_unique_functions` считают только извлечённые ненулевые адреса; `*_unresolved_entry_source_files` сохраняют число источников без распознанного адреса входа. Номера строк и все совпадения находятся в JSON. Первый sender — точка входа для чтения, не единственный отправитель.

| Имя | Размер | ID-слот | R / S / H | Первый sender / hook |
|---|---:|---|---:|---|
| SelAmmo | 4 | `0x1022649c` | 0 / 0 / 0 | — / — |
| CurWeapon | 3 | `0x102264cc` | 8 / 8 / 0 | 0x100de170 / — |
| Geiger | 1 | `0x10226528` | 1 / 1 / 0 | 0x100dce60 / — |
| Flashlight | 2 | `0x102264a0` | 2 / 2 / 0 | 0x100dfab0 / — |
| FlashBat | 1 | `0x102264a4` | 0 / 0 / 0 | — / — |
| Health | 3 | `0x102264d0` | 5 / 5 / 0 | 0x100c8b70 / — |
| Damage | 13 | `0x102264d4` | 1 / 1 / 0 | 0x100f6ca0 / — |
| Battery | 2 | `0x102264d8` | 1 / 1 / 0 | 0x100f6ca0 / — |
| Train | 1 | `0x102264dc` | 1 / 1 / 0 | 0x100f6ca0 / — |
| HudText | -1 | `0x1022648c` | 2 / 2 / 0 | 0x1011a180 / — |
| SayText | -1 | `0x10226518` | 7 / 7 / 1 | 0x1001cc90 / 0x1008aa60 |
| TextMsg | -1 | `0x1022651c` | 2 / 2 / 0 | 0x101163a0 / — |
| WeaponList | -1 | `0x102264e4` | 1 / 1 / 0 | 0x100f6ca0 / — |
| ResetHUD | 1 | `0x102264a8` | 1 / 1 / 1 | 0x100f6ca0 / 0x1006e9a0 |
| InitHUD | 0 | `0x102264ac` | 1 / 1 / 1 | 0x100f6ca0 / 0x1006e740 |
| SetFog | 9 | `0x102264b0` | 1 / 1 / 1 | 0x1009b650 / 0x1006ea60 |
| KeyedDLight | -1 | `0x102264b4` | 1 / 1 / 1 | 0x10098540 / 0x1006e7a0 |
| SetSky | 7 | `0x102264b8` | 1 / 1 / 1 | 0x100a1320 / 0x1006ea80 |
| HUDColor | 4 | `0x102264bc` | 1 / 1 / 1 | 0x10018d60 / 0x1006e720 |
| AddShine | -1 | `0x102264c0` | 1 / 1 / 1 | 0x10011f70 (selector) / 0x1006e460 |
| Particle | -1 | `0x10226490` | 31 / 21 / 0 | 0x10024160 / — |
| DelPart | -1 | `0x102264c4` | 0 / 0 / 0 | — / — |
| GameTitle | 1 | `0x102264c8` | 1 / 1 / 0 | 0x100f6ca0 / — |
| DeathMsg | -1 | `0x102264ec` | 2 / 2 / 0 | 0x100c7df0 / — |
| ScoreInfo | 9 | `0x102264f0` | 4 / 4 / 1 | 0x10018d60 / 0x1006e9e0 |
| TeamInfo | -1 | `0x102264f4` | 3 / 3 / 1 | 0x10106730 / 0x1006eb30 |
| TeamScore | -1 | `0x102264f8` | 0 / 0 / 1 | — / 0x1006eb90 |
| GameMode | 1 | `0x102264fc` | 2 / 2 / 1 | 0x100ca4b0 / 0x1006e6c0 |
| MOTD | -1 | `0x10226500` | 1 / 1 / 0 | 0x100c9970 / — |
| ServerName | -1 | `0x10226504` | 1 / 1 / 1 | 0x100c9970 / 0x1006ea10 |
| AmmoPickup | -1 | `0x10226508` | 1 / 1 / 0 | 0x100e04d0 / — |
| WeapPickup | 1 | `0x10226700` | 0 / 0 / 0 | — / — |
| ItemPickup | -1 | `0x1022650c` | 3 / 3 / 0 | 0x100b52c0 / — |
| HideWeapon | 1 | `0x10226510` | 1 / 1 / 0 | 0x100f6ca0 / — |
| SetFOV | 1 | `0x10226520` | 3 / 3 / 1 | 0x100e59f0 / 0x1006ea40 |
| ShowMenu | -1 | `0x10226524` | 0 / 0 / 0 | — / — |
| ScreenShake | 6 | `0x1022671c` | 1 / 1 / 0 | 0x10119de0 / — |
| ScreenFade | 10 | `0x10226720` | 1 / 1 / 0 | 0x10119d40 / — |
| AmmoX | 3 | `0x102264e8` | 5 / 5 / 0 | 0x10029090 / — |
| TeamNames | -1 | `0x1022652c` | 1 / 1 / 1 | 0x10106de0 / 0x1006eb60 |
| StatusIcon | -1 | `0x10226530` | 1 / 1 / 0 | 0x100f8cf0 / — |
| StatusText | -1 | `0x10226534` | 0 / 0 / 0 | — / — |
| StatusValue | 3 | `0x10226538` | 0 / 0 / 0 | — / — |
| SpecTank | -1 | `0x1022653c` | 0 / 0 / 1 | — / 0x1006eac0 |
| TextWindow | -1 | `0x10226540` | 1 / 1 / 1 | 0x10115a60 / 0x1006ebc0 |
| PlayMP3 | -1 | `0x10226544` | 5 / 5 / 1 | 0x100a2320 / 0x1006e8f0 |
| RainData | 16 | `0x10226548` | 1 / 1 / 1 | 0x100f6ca0 / 0x1006e950 |
| GrassInfo | -1 | `0x1022654c` | 1 / 1 / 0 | 0x1009bb10 / — |
| RadioIcon | -1 | `0x10226550` | 1 / 1 / 0 | 0x101002c0 / — |
| TabPanel | -1 | `0x10226554` | 1 / 1 / 0 | 0x100f6ca0 / — |
| customdecal | -1 | `0x10226558` | 3 / 3 / 0 | 0x10098980 / — |
| mydlight | -1 | `0x1022655c` | 5 / 5 / 1 | 0x10027280 / 0x1005f2b0 |
| skymark_sky | -1 | `0x10226560` | 1 / 1 / 0 | 0x1009b9c0 / — |
| skymark_w | -1 | `0x10226564` | 1 / 1 / 0 | 0x1009ba80 / — |
| ProFont | -1 | `0x10226568` | 1 / 1 / 1 | 0x10119810 / 0x1006e930 |
| Inventory | -1 | `0x102265e4` | 1 / 1 / 1 | 0x100e4360 / 0x1006e760 |
| Maglite | 1 | `0x1022656c` | 1 / 1 / 1 | 0x100ead70 / 0x1006e830 |
| BlackBars | -1 | `0x10226570` | 1 / 1 / 0 | 0x100ead70 / — |
| Blur | 1 | `0x10226574` | 2 / 2 / 0 | 0x100ead70 / — |
| UnreadSMS | 2 | `0x10226578` | 3 / 3 / 1 | 0x10032e70 / 0x1006ec10 |
| Stamina | 3 | `0x1022657c` | 2 / 2 / 1 | 0x100f4090 / 0x1003a360 |
| VGUIMenu | 2 | `0x10226580` | 3 / 3 / 1 | 0x100f4050 / 0x1006ec30 |
| board | -1 | `0x10226584` | 2 / 2 / 0 | 0x10075d70 / — |
| NoteDoc | -1 | `0x10226588` | 2 / 2 / 0 | 0x100a3b90 / — |
| Keypad | 3 | `0x1022658c` | 5 / 5 / 0 | 0x100a6fe0 / — |
| Phone | 1 | `0x10226590` | 1 / 1 / 0 | 0x10053d80 / — |
| Puzzlebar | 1 | `0x10226594` | 6 / 6 / 0 | 0x10063590 / — |
| CoFLogo | 1 | `0x10226598` | 1 / 1 / 1 | 0x100a7370 / 0x10039560 |
| Save | 1 | `0x1022659c` | 0 / 0 / 0 | — / — |
| CoFWeapon | -1 | `0x102265a0` | 0 / 0 / 1 | — / 0x1006e580 |
| ViewKnock | 1 | `0x102265a4` | 1 / 1 / 1 | 0x100f9100 / 0x1006ecb0 |
| ViewEntity | -1 | `0x102265a8` | 1 / 1 / 1 | 0x100ead70 / 0x1006ec90 |
| ViewLock | -1 | `0x102265ac` | 1 / 1 / 1 | 0x100f9140 / 0x1006ecd0 |
| CanUse | -1 | `0x102265e0` | 0 / 0 / 0 | — / — |
| Concuss | 2 | `0x102265e8` | 3 / 3 / 1 | 0x100e8d70 / 0x1006e5a0 |
| Ladder | -1 | `0x102265b0` | 1 / 1 / 1 | 0x100ead70 / 0x1006e7c0 |
| FallOver | -1 | `0x102265b4` | 3 / 3 / 1 | 0x100e59f0 / 0x1006e650 |
| WpnInfo | 4 | `0x102265b8` | 7 / 5 / 0 | 0x10018d60 / — |
| ShowHint | -1 | `0x102265bc` | 0 / 0 / 1 | — / 0x1003a180 |
| Accuracy | -1 | `0x102265c0` | 0 / 0 / 0 | — / — |
| YesNo | -1 | `0x102265c4` | 1 / 0 / 0 | — / — |
| Statue | -1 | `0x102265c8` | 2 / 2 / 0 | 0x10075a20 / — |
| Computer | -1 | `0x102265ec` | 2 / 2 / 0 | 0x100934a0 / — |
| UserDoc | 2 | `0x102265f0` | 1 / 1 / 0 | 0x10083120 (selector) / — |
| HeadShield | -1 | `0x102265f4` | 7 / 7 / 0 | 0x100a5070 / — |
| CameraZoom | -1 | `0x102265cc` | 39 / 39 / 1 | 0x100125e0 / 0x100393d0 |
| Padlock | 1 | `0x102265d0` | 3 / 3 / 0 | 0x100b5ea0 / — |
| SaveLoad | -1 | `0x102265d4` | 3 / 3 / 0 | 0x10018d60 / — |
| GameMenu | 0 | `0x102265d8` | 1 / 1 / 0 | 0x100f1f30 / — |
| BlackWhite | 1 | `0x102265dc` | 2 / 2 / 1 | 0x100a5af0 / 0x1006e4f0 |
| WeaponBody | 1 | `0x102265f8` | 1 / 1 / 1 | 0x1011f640 / 0x1006ed10 |
| Scope | 1 | `0x102265fc` | 1 / 1 / 0 | 0x1007d430 / — |
| Bomb | 1 | `0x10226600` | 0 / 0 / 0 | — / — |
| PhoneOff | 1 | `0x10226604` | 1 / 1 / 1 | 0x100f6ca0 / 0x1006e8d0 |
| Muzzleflash | -1 | `0x10226608` | 1 / 1 / 1 | 0x1006f070 / 0x1006e870 |
| DualWield | -1 | `0x1022660c` | 3 / 3 / 0 | 0x10032e70 / — |
| DualAnim | 1 | `0x10226610` | 1 / 1 / 0 | 0x100deec0 / — |
| DualFlash | 1 | `0x10226614` | 4 / 0 / 0 | — / — |
| ModelAttach | -1 | `0x10226618` | 2 / 2 / 0 | 0x10113b60 / — |
| BossBar | -1 | `0x10226620` | 7 / 7 / 0 | 0x100177b0 / — |
| HealthCap | 1 | `0x1022661c` | 4 / 4 / 1 | 0x100a73e0 / 0x10039a70 |
| DualAmmo | -1 | `0x10226624` | 2 / 2 / 0 | 0x100358c0 / — |
| ThirdPerson | -1 | `0x10226628` | 3 / 3 / 0 | 0x100f2d40 / — |
| Telephone | -1 | `0x1022662c` | 5 / 5 / 0 | 0x1007cdf0 / — |
| Telescope | -1 | `0x10226630` | 1 / 1 / 0 | 0x1007d430 / — |
| QSlotClear | 2 | `0x10226634` | 8 / 8 / 0 | 0x100a60c0 / — |
| FlashFlags | -1 | `0x10226638` | 1 / 1 / 1 | 0x100ead70 / 0x1006e6a0 |
| Documents | -1 | `0x1022663c` | 0 / 0 / 0 | — / — |
| Boat | -1 | `0x10226640` | 4 / 4 / 0 | 0x100ead70 / — |
| Ripple | -1 | `0x10226644` | 3 / 3 / 1 | 0x100ead70 / 0x1006e9c0 |
| AddNote | -1 | `0x10226648` | 5 / 5 / 1 | 0x10018d60 / 0x1006e440 |
| AttachCam | -1 | `0x1022664c` | 11 / 11 / 1 | 0x1004fb50 / 0x1006e4b0 |
| BigPrick | 1 | `0x10226650` | 2 / 2 / 1 | 0x100c7290 / 0x1006e4d0 |
| NewFade | -1 | `0x10226654` | 0 / 0 / 1 | — / 0x1006e890 |
| Chapter | -1 | `0x10226658` | 5 / 5 / 1 | 0x100a2320 / 0x10039430 |
| SkipScene | 0 | `0x1022665c` | 1 / 1 / 1 | 0x1010af30 (selector) / 0x1006eaa0 |
| KillWpnPart | 1 | `0x10226660` | 12 / 10 / 0 | 0x10023670 / — |
| WpnDeploy | 0 | `0x10226664` | 2 / 2 / 0 | 0x10020070 / — |
| IronSights | -1 | `0x10226668` | 24 / 24 / 1 | 0x1003ae60 / 0x1006e780 |
| Ignite | -1 | `0x1022666c` | 0 / 0 / 0 | — / — |
| Wheelchair | -1 | `0x10226670` | 3 / 3 / 1 | 0x10086eb0 / 0x1006ed30 |
| ControlHint | -1 | `0x10226674` | 1 / 1 / 1 | 0x100f3d90 / 0x10039800 |
| LensFlare | 6 | `0x10226678` | 1 / 1 / 0 | 0x1009b950 / — |
| GreyFade | 2 | `0x1022667c` | 6 / 6 / 1 | 0x1006eec0 / 0x1006e700 |
| AmmoInv | 3 | `0x10226680` | 0 / 0 / 0 | — / — |
| ReadyRoom | 1 | `0x10226684` | 0 / 0 / 0 | — / — |
| RevolverCyl | 1 | `0x10226688` | 0 / 0 / 0 | — / — |
| Credits | -1 | `0x1022668c` | 2 / 2 / 0 | 0x100a2710 / — |
| QSlotUpdate | 2 | `0x10226690` | 3 / 3 / 0 | 0x10029090 / — |
| TakePhoto | 0 | `0x10226694` | 1 / 1 / 1 | 0x10027280 / 0x1006eb10 |
| Clothes | 7 | `0x10226698` | 2 / 2 / 0 | 0x100a2050 / — |
| Objectives | -1 | `0x1022669c` | 1 / 1 / 1 | 0x100ead70 / 0x1006e8b0 |
| Unlocks | -1 | `0x102266a0` | 1 / 1 / 1 | 0x100f1f30 / 0x1006ebf0 |
| Timer | 6 | `0x102266a4` | 4 / 4 / 1 | 0x100a58f0 / 0x1003a3e0 |
| TimerPlus | 3 | `0x102266a8` | 4 / 4 / 1 | 0x100befc0 / 0x1003a580 |
| AdLib | 4 | `0x102266ac` | 1 / 1 / 0 | 0x10018d60 / — |
| Lobby | 3 | `0x102266b0` | 4 / 4 / 1 | 0x10018d60 / 0x10039f40 |
| InventChck | 0 | `0x102266b4` | 1 / 1 / 0 | 0x100f6ca0 / — |
| CoopStats | -1 | `0x102266b8` | 1 / 1 / 0 | 0x100a24b0 / — |
| MPModel | 0 | `0x102266bc` | 1 / 1 / 0 | 0x100c79e0 / — |
| BeatCoop | 0 | `0x102266c0` | 1 / 1 / 0 | 0x100a24b0 / — |
| HoldBreath | 1 | `0x102266c4` | 5 / 5 / 1 | 0x100662e0 / 0x10039c60 |
| DevDonator | 2 | `0x102266c8` | 3 / 3 / 1 | 0x100c8b70 / 0x10039a20 |
| CoopCamAnim | 1 | `0x102266cc` | 0 / 0 / 0 | — / — |
| Introdn | 3 | `0x102266d0` | 1 / 1 / 1 | 0x100a4240 / 0x10039c90 |
| LookingAt | 1 | `0x102266d4` | 1 / 1 / 1 | 0x100ead70 / 0x1003a140 |
| SimonMode | 1 | `0x102266d8` | 3 / 3 / 1 | 0x1006eec0 / 0x1003a330 |
| Syringe | 2 | `0x102266dc` | 5 / 5 / 0 | 0x10029090 / — |
| CustomDoc | -1 | `0x102266e0` | 1 / 1 / 0 | 0x100ea310 (selector) / — |
| Materials | 0 | `0x102266e4` | 1 / 1 / 1 | 0x100ead70 / 0x1006e850 |
| CustomSlv | -1 | `0x102266e8` | 3 / 3 / 1 | 0x100a38e0 / 0x1006e600 |
| CustomFng | -1 | `0x102266ec` | 3 / 3 / 1 | 0x100a38e0 / 0x1006e5c0 |
| CustomGlv | -1 | `0x102266f0` | 3 / 3 / 1 | 0x100a38e0 / 0x1006e5e0 |
| PlaySFX | -1 | `0x102266f4` | 1 / 1 / 1 | 0x10116a40 / 0x1006e910 |
| SaveHack | 1 | `0x102266f8` | 0 / 0 / 0 | — / — |

Неизвлечённый адрес входа: 66 server occurrences в 36 разных C-файлах. Эти источники доступны по selector/path; null не считается отдельной native function.

## Где индекс пока не даёт прямого sender

`SelAmmo`, `FlashBat`, `DelPart`, `TeamScore`, `WeapPickup`, `ShowMenu`, `StatusText`, `StatusValue`, `SpecTank`, `Save`, `CoFWeapon`, `CanUse`, `ShowHint`, `Accuracy`, `YesNo`, `Bomb`, `DualFlash`, `Documents`, `NewFade`, `Ignite`, `AmmoInv`, `ReadyRoom`, `RevolverCyl`, `CoopCamAnim`, `SaveHack`.

Это список для проверки сохранённого C/alias/неполного захвата, а не список неиспользуемых сообщений. Для уже исследованных movement, music, custom textures и UI используйте существующие контракты; данный проход не переаннотирует их payload.
