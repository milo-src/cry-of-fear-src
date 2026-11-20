# Monster attack dispatch: capability, distance и startup

Pass22, только статический оригинальный `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Шесть полных новых тел:100bcef0,100bd7b0,100bd810,100bd850,100bd890,100c2450. Поддерживающие bodies не добавляют REVIEW. Baseline публичного pass21 —1927 reviewed/6728 pending; исходные pending blocks закреплены в evidence. Ни игра, ни DLL не запускались; ресурсы не изменены.

Исходная задача concrete follower bindings ограничена прежними результатами: все сохранённые follower bodies10103f70..101064f0 уже REVIEW, точных binding для1a0/240/244/248/24c/250/254 прежние packets не доказали. Это не доказательство отсутствия runtime объектов. Здесь вместо повторного большого absence-аудита разобран связный pending monster attack пакет. Названия похожих SDK методов не заменяют numeric binding.

## Native владельцы и таблица

M — private monster object, V=[M+4] — entvars, E — entity argument диспетчера. Native factory100b05e0 при успешном выделении0x378 байт устанавливает vptr101ce36c; COL/type descriptor называют CGenericMonster, hierarchy включает CBaseMonster. Таблица этой concrete разновидности содержит +170→100bd850, +174→100bd890, +178→100bd7b0, +17c→100bd810. Это доказанный пример concrete dispatch, не утверждение, что все monster subclasses используют те же overrides. Порядок первых двух range checks и последних двух melee checks установлен адресами, а не по соседству функций.

MONSTER10216e08 именует M180=m_afConditions, M184=m_hEnemy, M304=m_afCapability; BASE10211760 — M58=m_fNextThink, M78=m_pfnThink; ENTVARS1021aae0 — V50=angles, V110=skin, V108=movetype, V1a4=spawnflags, V1a8=flags, V1cc=target, V1d0=targetname. Числа offset/mask/activity ID далее hex, дистанции и десятичные FP-константы обозначены явно. Все четыре предиката имеют два stack float32 аргумента (dot,distance), RET8 и полный EAX0/1. Первые три чистых числовых проверки не нуждаются в ECX;100bd7b0 использует ECX=M.

## 100bcef0 — Monster_UpdateAttackConditions

ABI ECX=M, stack(E,float distance), RET8; нет единого success-result. Сначала exact case-sensitive byte comparison V.classname+stringPool с `monster_sewerboss`. Только при совпадении и DWORD V.skin==1 сразу возвращается, сохраняя прежние attack-condition bits. Ни input E, ни M/V не проверяются на NULL. В остальных случаях10119320 передаёт указатель V.angles в engine MakeVectors; далее перечитываются V/E.V и вычисляются float32 dx=E.origin.x-M.origin.x, dy=E.origin.y-M.origin.y. Z полностью игнорируется для направления.

Формула длины: float32(dx*dx), float32(dy*dy), float32(first+second), расширение в double, SQRTSD, округление в float32. Только ordered отрицательная сумма направляется в native math fallback1016be90; NaN идёт через SQRTSD. Если длина ordered равна0, nx=ny=0. Иначе, включая unordered NaN, сначала float32 reciprocal=1.0/length, затем по отдельности nx=dx*reciprocal, ny=dy*reciprocal. Проверка UCOMISS/LAHF/TEST44/JP различает ordered zero и unequal/unordered; нельзя трактовать её как общий finite guard.

После нормализации читает текущие global forward.y/+2c и forward.x/+28 и вычисляет float32(float32(forward.y*ny)+float32(forward.x*nx)). Сохраняет dot в локальный float32. Перед callback chain очищает M180 маскойffffc3ff (только bits0400/0800/1000/2000), затем по текущим capability bits последовательно вызывает: cap0800→virtual170(dot,distance)→condition0400; cap1000→virtual174→condition1000; cap2000→virtual178→condition0800; cap4000→virtual17c→condition2000. Любой nonzero полный EAX даёт OR соответствующего condition bit.

Каждый capability mask и vptr заново читается перед своей ветвью; callback может изменить следующие gates/conditions. Начальный dot сохраняется и переиспользуется, distance каждый раз берётся из исходного stack argument: сам dispatcher его не вычисляет, не нормализует и не сверяет с E. После callback170 dot явно восстанавливается из local; для178/17c также используется local. Никакого повторного clear после callback нет. Уже существующий caller100bd100 на100bd4ca передаёт resolved own enemy из EHANDLE M184 и вычисленную им distance; его полный общий enemy-assessment контракт здесь новым REVIEW не считается.

## 100bd850 — Monster_RangeGate784

Возвращает полный EAX1 только при ordered distance>64.0f, ordered distance<=784.0f и ordered dot>=0.5f. Все сравнения float32 COMISS, отказ JBE для нижней границы и JB для верхней/dot. Значение64 исключено,784 включено, dot0.5 включён. Любой NaN аргумент отвергается при замаскированном FP exception; +infinity distance отвергается верхним пределом, -infinity нижним. Dot+infinity допускается, отдельного upper clamp нет. Нет чтения entity/handle/полей или записи состояния. CGenericMonster slot170 указывает сюда.

## 100bd890 — Monster_RangeGate512

Те же ABI и ordered guards, что у100bd850, но верхняя distance —512.0f вместо784.0f: принимает (64,512] и dot>=0.5f. Проверяет аргументы, не производит trace/visibility/LOS и не проверяет врага. NaN отвергается; результат всегда полный EAX0/1. CGenericMonster slot174 указывает сюда.

## 100bd810 — Monster_CloseGateDoubleDot

Возвращает1 при ordered distance<=64.0f и при double(float32 dot)>=native double0.7. Distance lower bound отсутствует: отрицательные конечные величины и -infinity допускаются этим числовым gate. Dot сначала CVTPS2PD, затем COMISD/JB с восьмибайтовой константой101a1e58. Поэтому ближайшее float32 представление0.7 (0.699999988079071) НЕ проходит; следующий float32 выше0.7 проходит. Это не эквивалентно сравнению dot>=0.7f. NaN каждого аргумента отвергается; +infinity dot допускается. В теле нет чтений M/target и side effects; RET8, полный EAX0/1. CGenericMonster slot17c указывает сюда.

## 100bd7b0 — Monster_CloseEnemyGroundGate

Сначала те же ordered distance<=64.0f и double-expanded dot>=double0.7, что у100bd810. После прохода вызывает10017780(&M184), требуя валидный EHANDLE edict/serial; при false возвращает0. Затем отдельно вызывает100177a0(&M184) и без NULL private guard разыменовывает результат+4. При установленной маске0200 в enemy.V.flags возвращает1, иначе0. Это собственный m_hEnemy, а не E аргумент изdispatcher, хотя обычный показанный caller передаёт собственного врага.

10017780 проверяет лишь ненулевой результат10017ba0: edict существует и serial совпадает.100177a0 заново выполняет ту же проверку и берёт edict+7c private pointer, который может бытьNULL; boolean первого getter не гарантирует private validity. Между двумя getters нет pin/lock и нет последующей защиты от изменения lifetime. Тело не проверяет alive/team/visibility/дистанцию повторно; собственных записей нет. CGenericMonster slot178 указывает сюда. Return полный EAX0/1 и RET8, не AL-only.

## 100c2450 — Monster_StartWithActivityCapabilities

ECX=M, без stack arguments, обычный RET, без стабильного success-result. Последовательно вызывает1000e950(M,activity1c/1d/1e/1f); каждый результат, отличный от-1, OR-ит в M304 соответственно0800/1000/2000/4000. Затем lookup activity18 при результате!=-1 и classname НЕ exact `monster_leech` OR-ит10000. Уже установленные bits при missing activity не снимает; изначального clear capability нет. Внешние model callbacks и RNG в lookup не заменены cached snapshot.

Существенная support-граница:1000e950 получает model header через engine GetModelPtr и передаёт header,V,activity в1000f450 (RET4 оболочки). Lower lookup для NULL header возвращает0, а не-1; Поэтому starter принимает NULL-model lookup как успех для первых четырёх flags и для пятой при не-leech имени. Для nonNULL header выполняет weighted activity scan; совпадения могут расходовать RandomLong. Вызовы здесь предназначены лишь для проверки result!=-1, не для установки конкретной sequence. Полный existing animation-state contract и сохранённый support остаются источниками lookup semantics.

Если V.movetype==5 либо signed V.spawnflags<0, очищает V.flags маскойfffffdff, пропуская origin/drop/walk ветку. Иначе увеличивает origin.z на float1.0, вызывает engine DropToFloor(edict), игнорирует его результат, затем WalkMove(edict,0.0f,0.0f,0). Только при EAX==0 и отсутствии маски80 в BYTE spawnflags выводит AlertMessage severity1 с literal `%s "%s" stuck in wall--level design error`, classname и targetname. Ошибка не останавливает startup, изменения origin/engine state не откатываются. DropToFloor и WalkMove могут изменить состояние; после них поля перечитываются.

При текущем ненулевом V.target вызывает10118590(NULL,stringPool+target) и всегда передаёт результат100c2650(M,result). Support10118590 сначала пытается10118980, приNULL —10118480 с literal search field; detailed alias/search policy находится в прежнем targets-пакете.100c2650 сначала пишет M0c=result; NULL вызывает diagnostic severity4 и return. NonNULL назначает goal2b8=10, movementActivity2d0=5 дляmovetype5, иначе3, вызывает route-refresh100bddb0; его false даёт diagnostic, но затем всё равно SetState100c2a70(1), virtual18c(2), ChangeSchedule1000aa50(returnedSchedule). Starter игнорирует return helper и продолжает.

Далее сохраняет текущий vptr, пишет M78=10001160 (экспорт CBaseMonster::CallMonsterThink), вызывает RandomFloat(float bits3dcccccd,3ecccccd), то есть приблизительно0.1..0.4. ST0 прибавляет CURRENT M58 через x87 FADD, затем FSTPfloat32 передаёт один аргумент в сохранённый virtual10. Это сумма с m_fNextThink, не автоматически global now+random. CGenericMonster slot10→1000d3b0 вызывает virtual0c(sum,0), RET4; дальнейшее scheduling зависит от конкретного receiver.10001160 — tail JMP own virtual134, не непосредственное исполнение всего monster think в этом теле.

После scheduling заново читает V.targetname; если ненулевой, выполняет100c2a70(M,1), заново virtual1b0(1), заново virtual18c(22), затем1000aa50(M,schedule). У concrete CGenericMonster1b0→100c1f50,18c→1008ca70; effects и выбор schedules описаны прежними state/scheduler контрактами. Эта финальная named-ветка может сменить schedule, уже выбранный target helper. Direct caller10101910 на10101913 вызывает весь starter до собственных squad gates; дальнейший squad lifecycle не включён в новые шесть REVIEW.

## Доказательства и оставшиеся границы

`capture.py` воспроизводит полный bounded ASM для primary и выбранных supports, сравнивает bytes с PE, сохраняет native save descriptors, concrete CGenericMonster table/COL/hierarchy, raw FP/string operands, export records и ограниченные exact LE32 references. `verify.py` использует независимый PE mapper, перепроверяет hashes/bytes/table fields и ключевые branch/ABI anchors. Старые generic/follower REVIEW не изменены и не засчитаны повторно.

Открыты concrete overrides остальных subclasses, runtime model headers/weight data, engine trace/drop/walk effects, полнота всех callers, возможность внешних lifetime mutations и FP exception configuration. Не утверждается конкретный игровой баланс или runtime достижимость всех четырёх атак. Follower-specific bindings остаются прежней отдельной границей; отсутствие прямых preferred-base VA pointers не доказывает отсутствия вычисляемых или внешних связей.
