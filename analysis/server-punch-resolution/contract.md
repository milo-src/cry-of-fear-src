# Punch hit resolution — original server static contract

Scope: two new primary bodies and one correction of existing100e7af0; no target execution or game changes. Full saved C compared with original PE native ranges. Evidence and reproducer: evidence.json, capture.py, verify.py.

## 0x10038e20 CDualWeaponRight_DelegatePunchHitToOwner

Передаёт отложенное попадание кулаком владельцу правого dual-weapon.

Экспорт ordinal188 CDualWeaponRight::MeleeHitThinkPunch. Native тело только15 bytes10038e20..10038e2e: ECX:=[ECX+e8]; TEST ECX; JNE100e7af0; RET. При owner NULL возвращается без действий; иначе условный tail branch переиспользует исходный return address и передаёт this владельца. Stack аргументов нет, EAX не является определённым status.

Saved C ошибочно разворачивает общий player resolver внутрь этой функции. Независимого trace/damage алгоритма здесь нет: единственный настоящий владелец логики —100e7af0. Поле+e8 отличается от mobile owner+160; тип/lifetime указателя не проверяется. Корректность вызова требует действительного объекта игрока; NULL guard не защищает от dangling pointer.

## 0x100df820 FindHullIntersection_ExtendedRayAndEightCorners

Уточняет hull-попадание прямым удлинённым лучом и восемью угловыми лучами.

Native RET14h: пять stack аргументов(startVector*,inoutTrace*,mins*,maxs*,skipEdict). ECX не читается; caller задаёт его, но это не доказательство используемого this. EAX не нормализован в status. TraceResult копируется ровно56 bytes, включая flags/fraction/endPos/plane/pHit/hitgroup; предположение о копировании только координат неверно.

Для каждой координаты extendedEnd=float32(float32(trace.endPos-start)*2+start). Сначала TraceLine(start,extendedEnd,mode0,skipEdict,tempTrace) через1011a800. COMISS1,fraction/JBE100df8ec пропускает прямой результат при fraction>=1 или unordered NaN; ordered fraction<1 немедленно копирует все56 bytes и возвращается. Отрицательный fraction также проходит; отдельной проверки startsolid/allsolid нет.

При неудаче перебирает8 комбинаций mins/maxs: X внешний цикл, Y средний, Z внутренний, каждый0 затем1. Каждый end=extendedEnd+(selectedX,selectedY,selectedZ), float32. Для каждого снова TraceLine mode0; допускает только ordered fraction<1. Расстояние от start до hitEnd: float32 квадраты, сумма(dy²+dx²)+dz², расширение double, SQRTSD, сужение float32. При ordered отрицательной сумме ветвь100df9b7 вызывает1016be90 вместо SQRTSD; этот CRT path отдельно.

bestDistance начинается1000000.0 из literal101bbb68. COMISS best,distance/JBE100df9f9 отвергает distance>=best и unordered NaN. Строго меньшая дистанция заменяет весь56-byte inoutTrace и bestDistance. Равные сохраняют первый результат; после первого найденного угла поиск не прекращается. Если подходящих углов нет, исходный inoutTrace остаётся неизменным, miss первого луча в него не копируется.

Проверок NULL/alias/конечности входов нет. Массивы mins/maxs и start перечитываются между engine callbacks; snapshot всех внешних входов не создаётся. TempTrace не обнуляется локально и должен заполняться engine. Семантика engine collision world и exceptional CRT path не объявляются восстановленными этим локальным контрактом.

## 0x100e7af0 CBasePlayer_MeleeHitThinkPunchResolve

Разрешает отложенное попадание кулаком: дальность32, hull fallback, damage и эффекты.

Экспорт ordinal187 CBasePlayer::MeleeHitThinkPunch. Thiscall без stack аргументов, plain RET; определённого status нет. Вызывает MakeVectors10119320 по pev.v_angle+74, затем virtual+228 с hidden output buffer. Конкретный CBasePlayer factory100125e0 ставит vptr101a4da8, чей slot228=100e01e0 пишет float32(origin+view_ofs) в buffer и RET4. Resolver использует локальный buffer, не returned EAX. Forward читается из globals+28/2c/30 уже после virtual callback.

end=start+forward*32.0 в float32;32.0 подтверждено raw literal101a9728. Первичный TraceLine(start,end,mode0,ownEdict,trace)1011a800 нормализует mode==1 в engine flag1, иначе0; здесь flags0. COMISS fraction,1/JB100e7c61 пропускает hull при fraction<1 И unordered NaN. При ordered fraction>=1 вызывается TraceHull1011a7e0 с flags0,hull3. Engine slots31/34 восстановлены через GiveFnptrsToDll100b4aa0 и eiface layout.

После hull допускает только ordered fraction<1: COMISS1,fraction/JBE100e7d94 отвергает >=1 и NaN. Разрешает trace.pHit private+7c, при NULL pHit запрашивает engine PEntityOfEntOffset(0). Если entity/private отсутствует либо virtual+c0 возвращает nonzero, вызывает100df820(start,&trace,mins(-16,-16,-18),maxs(16,16,18),ownEdict). Затем копирует trace.endPos в end. Общий финальный COMISS1,fraction/JBE снова отсекает NaN; следовательно initial NaN не даёт попадание, хотя пропускает hull.

При принятом hit снова разрешает pHit/private, включая fallback world offset0. Если private существует: ClearMultiDamage1011c070 обнуляет target/damage/mask10231f34/38/3c; victim.virtual+60 получает attackerPev, float damage[10226844], forward Vector BY VALUE12 bytes, TraceResult*,mask04001000. Это7 DWORD/28 bytes аргументов, не pointer вместо Vector и не два аргумента из saved C. Затем ApplyMultiDamage1011b8f0(ownPev,ownPev) вызывает накопленную victim.virtual+64; helper не очищает accumulator после нанесения. Числовой damage не фиксирован: значение глобального skill state читается в момент вызова.

После damage дважды вызывает victim.virtual+50: если первый результат0 либо второй1, выбирает environment effects; иначе первую тряску пропускает. Второй virtual call не заменять cached classification. Без entity/private также environment branch. Entity pointer повторно используется после callbacks без lifetime проверки. Environment branch ScreenShake10119de0(origin,2.0,0.25,0.15,2.0), затем RandomLong(-10,10); другая ветвь делает только RandomLong.

Любой принятый hit вызывает100fc9f0(ownEdict,channel1,"weapons/mobile/punch_smack.wav",volume1.0,attenuation0.8,flags0,pitch100+RandomLong(-10,10)), затем ScreenShake(origin,1.0,0.25,0.1,2.0). Аргументы ScreenShake=(origin,amplitude,frequency,duration,radius); повторно используемые stack slots сверены native. При miss ни hit sound, ни эти тряски, ни damage не вызываются.

Sound wrapper100fc9f0 передаёт обычный sample в engine EmitSound slot29; если byte10226489 nonzero и sample pointer не literal101a8e8c, умножает volume на double0.25 и сужает float. Для punch literal это означает volume0.25 при flag, иначе1.0. ScreenShake helper имеет собственные player/ground/radius/message gates, поэтому вызов не доказывает слышимый звук или видимую тряску у каждого клиента. Здесь нет установки cooldown, очистки think, stamina debit или запуска анимации: эти действия принадлежат вызывающим schedulers.

## Navigation and remaining boundaries

Callers: [mobile actions](../server-mobile-actions/contract.md) schedules the delayed hit; CDualWeaponRight uses its own owner field. See [bullet traces](../server-bullet-traces/contract.md) for shared trace/multidamage support. Damage global10226844 is dynamic; lexical saved-C writer100af810 (RefreshSkillData) is a navigation lead, not proof of an immutable numeric damage/default. Full producer/config-to-damage binding remains to extend separately. Engine collision behavior, derived victim callbacks, object lifetime after damage, CRT exceptional path and all indirect callers remain separate boundaries.

Prior100e7af0 card said range unknown. Replaced after raw32.0 proof, native vector-by-value ABI and branch analysis; prior evidence references preserved. Dual-weapon decompiler inlining is explicitly rejected by its15-byte actual range.

## Продолжение разбора: pass22

Pass22: [skill refresh](../server-skill-refresh/contract.md) закрывает native111 чтений/101 float slots, источник punch damage10226844 и ST0/format ABI. [Mobile player state](../server-mobile-player-state/contract.md) продолжает map-trigger/SMS/player chain; [monster attacks](../server-monster-attack-dispatch/contract.md) закрывает attack-condition dispatch и gates; [visibility policy](../server-visibility-policy/contract.md) уточняет concrete rules/player callbacks. Список residual boundaries см. в новых контрактах; установленный skill.cfg не объявляется runtime состоянием.
