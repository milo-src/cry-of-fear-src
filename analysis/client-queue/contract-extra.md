# Client queue: weapon messages and muzzle effects

Восемь новых карточек в `notes-extra.json` основаны на полном чтении сохранённых C. `evidence-extra.json` хранит source C SHA256, literal bytes и byte-verified bounded ASM: регистрации, callback wrappers и DWORD reader. Только статический RE; код/ресурсы/игра не менялись и не запускались.

## Message ownership

Registration `1001a2f0` связывает engine HookUserMsg с шестью wrapper. Wrapper передаёт исходные name/size/buffer, устанавливая **ECX=1018d4ec**, то есть HUD weapon object, а не глобальный HUD1018a0c0. Поэтому CurWeapon field this+8c оказывается глобальным current weapon pointer `1018d578`, используемым другими graphics/effect функциями.

| Message | Wrapper → body | Wire и запись |
|---|---|---|
| AmmoX | 1001c0b0 → 1001b110 | BYTE index, signed SHORT count → reserve101b2420[index]=abs(count) |
| CurWeapon | 1001c0d0 → 1001b150 | BYTE state, CHAR id, CHAR clip → record clip/current pointer |
| DualAmmo | 1001c0f0 → 1001b240 | LONG×2 → object+48/+4c |
| WeaponList | 1001c170 → 1001b3b0 | STRING и8byte fields → weapon record, затем1001ab20 |
| AmmoPickup | 1001c090 → 1001b040 | BYTE ignored, BYTE count, STRING displayName → timed notification |
| WeapPickup | 1001c150 → 1001b330 | BYTE weaponID → descriptor name notification |

Названия доказаны PE literals и регистрацией, не только предыдущими документами. DWORD reader100809b0 собирает little-endian32; при недостатке bytes ставит bad flag и возвращает-1 без advance. Новая C карточка этому ASM-only reader не создаётся.

Weapon record stride `0x15c`: name[128], ammo1+80,ammo2+84,max1+88,max2+8c,slot+90,slotpos+94,flags+98,id+9c,clip+a0. WeaponList переводит max255 в-1, задаёт clip0 и копирует0x57DWORD. Сам по себе вызов1001ab20 не доказывает всю sprite загрузку или tail initialization.

CurWeapon сохраняет clip-1; меньшие отрицательные clip преобразует в abs. ID<1 отключает current pointer и engine crosshair, возвращая0. State0 обновляет clip, сохраняя прежний current; ненулевой state выбирает record, устанавливает fade float200 и HUD flag bit1. Это отдельная семантика от reserve AmmoX и pickup notification.

Оба pickup reader используют format **`!%s`**, доказанный literal1013f4d0. AmmoPickup заменяет точное `Hand Grenade` на `handgrenade`, устанавливает temporary101b24d0=count вокруг1007dea0 и сбрасывает после возврата. WeapPickup берёт имя из record и temporary count не задаёт. Ни один не увеличивает ammo reserve сам.

## Muzzle model → smoke → две light systems

`1004bc30` принимает source entity, attachment index, alternate-type byte и scale multiplier. При отсутствии local player возвращает. Выбор ресурса и базовой шкалы:

| Условие | Model | Base scale |
|---|---|---:|
| default | flash1.mdl | 4 |
| ID4/21 | flash1.mdl | 6 |
| ID9/26 | flash2.mdl | 6 |
| ID11/23 | flash2.mdl | 9 |
| ID27 | flash2.mdl | 2 |
| ID14 | flash1.mdl | 4 |
| alternate type | flash3.mdl | предыдущая шкала |
| source model содержит models/cs/ | предыдущая модель | 2 |

ID11 сначала получает10, затем поздняя ветвь перезаписывает9. Формула scale=`(base+RandomFloat(-1,1))*multiplier`. Weapon ID читается из локального current descriptor `1018d578`, а не из source entity.

Helper копирует local player entity в глобальную scratch entity, заменяет model/index, origin выбранным attachment, angles source entity и случайный roll1..359; alternate добавляет90 к yaw. Ставит render mode5, amount100, custom renderfx161, frame0 и текущий animtime, затем CreateVisibleEntity. Формат расширенной оригинальной entity привязан к наблюдаемым offsets; перенос этих offsets в SDK не предполагается.

При `cl_cheapweaponsmoke!=0` создаётся `gunsmoke.spr` через TempSprite **у attachment0**, даже если flash использует другой attachment. Velocity=(0,0,10),scale.05,mode5,fx6,alpha255,life1,flags0x300100.

Normal type вызывает1004bb80 на выбранном attachment: engine dlight RGB225/170/105 и custom float RGB.7/.43/.14. Alternate создаёт обе системы у local player origin, RGB225/96/0 и1/.37/0. Везде radius128,die=clienttime+.06. Engine allocator определяется SDK effects table+100 (`CL_AllocDlight`); custom allocator1005c0f0 — отдельный формат, не alias engine dlight. Проверок NULL результата allocation здесь нет.

## Границы

Readers не проверяют bad flag. Ammo/weapon index computed-pointer!=NULL не равен bounds check. WeaponList копирует NUL-terminated name в128byte stack field без локальной длины; наличие ReadString cap2047 не гарантирует этот меньший размер. Фактическая достижимость ошибочных пакетов требует server/engine contract, и здесь не заявляется эксплуатация.

Открытые точные callees:1001ab20 для descriptor resource initialization,1007dea0 для notification queue/rendering,1005c0f0 для custom light allocation/lifetime. Их функции не переименованы по предположению и не получили фиктивные C карточки. Запуск effects, доставка message и визуальная идентичность не проверялись. Старый `analysis/weapons/client.md` содержит также порт/тесты; эти сведения не использованы как доказательство оригинального поведения.
