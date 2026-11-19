# Оружие CoF: реализация и рабочая карта

Срез 2026-11-19. Это собственный перенос восстановленных контрактов на HLSDK, а не исходный C++ Cry of Fear и не заявление о полном совпадении с оригиналом. Все классы арсенала подключены к игре; ограничения перечислены ниже. Оригинальные DLL не загружаются, установленные игровые ресурсы не изменены.

## Быстрый поиск

| Что менять | Файл |
| --- | --- |
| Подбор, шесть слотов, выбрасывание, сохранение, общие таймеры и попадания | `src/cof/server/cof_weapons.cpp`, `.h` |
| Огнестрельное оружие, разброс, отдача, прицел, очереди, затвор, перезарядка | `src/cof/server/cof_ranged.cpp` |
| Холодное оружие, шприц, свет, фальшфейер, камера, книга, обе руки, аксессуары | `src/cof/server/cof_special.cpp` |
| Коробки патронов и пределы запасов | `src/cof/server/cof_ammo.cpp` |
| AmmoX/CurWeapon, Scope, IronSights, ViewKnock, WeaponBody, обе модели рук | `src/cof/client/cof_weapons_client.cpp` |
| Инвентарь, combine/dual, назначения quickslots | `src/cof/client/inventory_client.cpp`, `src/cof/server/inventory.cpp` |
| RTX: native studio callback для обеих рук и отдельные RTGL object IDs | `tools/prepare_rtx_weapons.py`, `src/cof/shared/weapon_studio_interface.h` |
| Интеграция с SDK, только в build/ | `tools/prepare_weapons.py`, `prepare_weapons_client.py` |
| Проверки в загруженной DLL | `tests/cof/server/weapon_runtime_tests.inc`; семейные проверки рядом с реализацией |
| Миграция известных прототипных bindings | `tools/stage_weapons.py` |

Статические адреса и доказательства: `ranged.json`/`ranged.md`, `special.json`/`special.md`, `client.md`. Оригинальные последовательности, события и длительности 51 модели: `client-model-events.json`. Дескрипторы: `client-item-contracts.json`. Обнаруженные classname в 181 BSP: `map-weapon-ammo-roster.json`. В общий `decompiled/FUNCTION_CATALOG.txt` добавлены 24 адресные карточки Primary/Reload и маршрут из WORKBOARD; JSON импорта: `catalog-notes.json`.

## Подключённый арсенал

Огнестрельное: Glock, P345, Revolver, Rifle, G43, Shotgun, M16, MP5, FAMAS, TMP, VP70, Browning wheelchair. Алиасы фабрик: Beretta→Glock, P228→P345, MP5K→M16, Uzi→TMP. Значения clip/reserve/damage, очереди, циклы и адреса — в `ranged.md`.

Ближний бой: switchblade/knife, nightstick/hammer, branch, axe, sledgehammer. Удар выполняется отложенной трассировкой; hull уточняет попадание в BSP; звуки различают тело/стену. Сохранены специальные типы damage, но их дальнейшая обработка монстрами зависит от ещё не перенесённого AI.

Предметы в руках: mobile, flashlight, lantern, flare, syringe, radio, camera, booklaser, action и dualweapon. Шприц использует очередь лечения из восстановленной системы HP. Горящий фальшфейер создаёт отдельную сущность. Книга наносит урон шестью лучами. Камера активирует camera_spot_trigger; её brush скрыт. Flashlight battery и десять видов боеприпасов имеют собственные фабрики. Glock tactical light и phone battery подбираются, выбрасываются и объединяются с соответствующим оружием; состояния установки сохраняются.

`customv`, `customw`, `customscript` поддерживают варианты оружия, заданные картами, с сохранением и проверкой относительных путей. У ammo поддержан `customw`. Отсутствующий в установленной игре native `models/ammo/ammo_mp5.mdl` заменён существующим `models/ammo/ammo_tmp.mdl`; отсутствующая native flashlight battery использует `models/items/phone_battery.mdl`. Это явные модельные adapters, не изменение оригинальных ресурсов.

## Управление

ЛКМ — основное действие; ПКМ — ближний удар/вторичное действие; средняя кнопка — прицеливание; R — перезарядка; Z — дополнительное действие (например режим M16/фонарь). В паре ЛКМ действует правой, ПКМ левой рукой. Объединение и пара доступны в инвентаре. Быстрые слоты 1–3 назначаются через инвентарь. Установщик сохраняет пользовательские bindings, заменяет только известные старые `cof_inv1..3` и добавляет отсутствующие клавиши.

Клиентские команды: `inventoryequip N`, `inventorydrop N`, `inventorydualwield LEFT RIGHT`, `inventoryunpair`, `inventorycombine FIRST SECOND RESULT`, `quickselset1..3 SLOT`, `quicksel 1..3`, `weapontoggle`. Сервер проверяет слоты/состояние; произвольная строка RESULT не создаёт предметы.

## Проверка и сборка

`python waf build install` — normal x86. RTX x64 собирается Waf через существующий `tools/build_rtx.py`/`run_waf`; обновляются собственные игровые DLL и RTX renderer с адаптером двух рук в `out/runtime-rtx`. Собственные источники копируются в disposable SDK; external/ не изменяется. Коммиты не создаются.

`python tools/smoke_rtx.py --renderer normal --weapons --timeout 100`

`python tools/smoke_rtx.py --renderer rtx --weapons --timeout 100`

Отдельно повторяется `--movement` в обоих режимах. Все запуски только на изолированном desktop с `-nosound`, без ввода в рабочий стол пользователя. Проверяются реальные factory/use/drop, попадания и урон, расход патронов, очереди, поштучная перезарядка, aim/дыхание, аксессуары, HUD протоколы. Два настоящих save/load сохраняют магазин, pending deadline, слоты и активную пару. Маркеры обеих рук возникают внутри STUDIO_RENDER; RTX дополнительно подтверждает два отдельных mesh batches. Версионированное расширение studio API передаёт native RTX draw callback клиентскому координатору рук; геометрия и события продолжают проходить native RTX renderer. Это не оценка изображения. Пустая мишень теста работает только при COF_WEAPONTEST; отложенно удалённые fixture entities исключаются из трассировки.

Итог 2026-11-19: normal x86 и RTX x64 прошли по 194 уникальные проверки оружия и по 131 проверке movement; аудит загруженных модулей также пройден. Результаты последнего запуска, хэши DLL и логов: `runtime-verification.json`. Smoke не является визуальной/звуковой проверкой и не сравнивает кадры или траектории с оригинальной игрой.

## Точные границы, которые нельзя скрывать

- Камера: native TakePhoto копирует GPU framebuffer в texture экрана модели (`diffusegay`). Обработчик пакета есть, копирование ещё не реализовано для normal+RTX. Вспышка света, звуки и camera_spot_trigger работают; native stun-response требует AI монстров.
- Телефон: свет и анимации, рукопашное действие и замена батареи подключены; SMS/сюжетная логика, точный разряд и связанные поля игрока не восстановлены.
- Dual: два реальных inventory item, отдельные таймеры/патроны/анимации и восстановление после load работают. Композиция рук использует SDK adapter с отражением левой модели, её визуальное равенство оригиналу не проверено. Переключение тактического фонаря Glock внутри пары пока не восстановлено; переключать отдельно перед объединением.
- Радио: предмет/анимации присутствуют; native сюжетные receive/assist callbacks остаются в очереди. Action — служебный предмет; сюжетные сценарии не считаются восстановленными автоматически.
- First draw хранится на экземпляре вместо native player unlock bits. Special revolver damage35 и альтернативное начало выстрела scripted Browning не перенесены. Multiplayer лимиты/режимы не заявляются: сборка ориентирована на single-player.
- Пламя книги и свет используют SDK/RTX adapters, оригинальный Aurora particle renderer не восстановлен. Сохранение таймеров не доказывает совпадение визуального кадра анимации после загрузки.

Следующий разбор должен закрывать конкретный пункт с адресом/доказательством, а не менять damage/cooldown на глаз. Не объявлять весь оригинал восстановленным по одному наличию фабрик.
