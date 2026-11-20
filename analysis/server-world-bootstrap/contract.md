# World bootstrap, bodyque factories and resource registries

Static original server RE; 12 primary entries. No target execution, game/resource changes or source reconstruction. Addresses and offsets are hexadecimal; counts explicitly decimal. Source hashes, native bytes, RTTI, descriptor tables, API slots and resource literals: evidence.json.

## 0x101203a0 — CCorpse_GetOrCreatePrivateData

Возвращает связанный private object либо выделяет dch bytes и устанавливает CCorpse vtable/pev.

cdecl(entvars*), plain RET, EAX=private pointer при normal success. NULL pev вызывает CreateEntity slot21; ненулевой edict даёт pev=edict+80. Далее читается pev+20c; при edict!=NULL и *(edict+7c)!=NULL возвращается существующий object без type guard и переинициализации.

Иначе PvAllocEntPrivateData slot63(edict, dch); success пишет vtable101e6ca0 и object+4=pev. Native RTTI подтверждает CCorpse. Остальные поля/zero-fill не записываются в factory. NULL CreateEntity ведёт к чтению NULL+20c; NULL allocation — реальная запись [NULL+4], не безопасный return0. Engine lifetime/достижимость failure остаются вне локального тела.

Фабрика не вызывает Spawn. CCorpse virtual2c=пустой 1000e220; world virtual2c=101217c0, virtual30=10120eb0, virtual34=ранее описанный 101208e0. Ring initializer101207e0 вызывает engine CreateNamedEntity(bodyque), не явный CCorpse::Spawn.

## 0x10120460 — CWorld_GetOrCreatePrivateData

Возвращает связанный private object либо выделяет 500h bytes и устанавливает CWorld vtable/pev.

cdecl(entvars*), plain RET, EAX=private pointer при normal success. NULL pev вызывает CreateEntity slot21; ненулевой edict даёт pev=edict+80. Далее читается pev+20c; при edict!=NULL и *(edict+7c)!=NULL возвращается существующий object без type guard и переинициализации.

Иначе PvAllocEntPrivateData slot63(edict,500h); success пишет vtable101e6a48 и object+4=pev. Native RTTI подтверждает CWorld. Остальные поля/zero-fill не записываются в factory. NULL CreateEntity ведёт к чтению NULL+20c; NULL allocation — реальная запись [NULL+4], не безопасный return0. Engine lifetime/достижимость failure остаются вне локального тела.

Фабрика не вызывает Spawn. CCorpse virtual2c=пустой 1000e220; world virtual2c=101217c0, virtual30=10120eb0, virtual34=ранее описанный 101208e0. Ring initializer101207e0 вызывает engine CreateNamedEntity(bodyque), не явный CCorpse::Spawn.

## 0x10121f90 — Export_bodyque_FactoryThunk

Экспорт bodyque — единственный native tail JMP в 101203a0.

Ровно 5 bytes E9 rel32, без stack frame/собственной инициализации. Сохраняет caller arguments и результат EAX factory. Сохранённый Ghidra C разворачивает target и потому не является буквальным телом thunk; native byte range подтверждает только JMP. Класс/размер/null paths раскрыты отдельной карточкой factory; export сам Spawn не вызывает.

## 0x10121fb0 — Export_worldspawn_FactoryThunk

Экспорт worldspawn — единственный native tail JMP в 10120460.

Ровно 5 bytes E9 rel32, без stack frame/собственной инициализации. Сохраняет caller arguments и результат EAX factory. Сохранённый Ghidra C разворачивает target и потому не является буквальным телом thunk; native byte range подтверждает только JMP. Класс/размер/null paths раскрыты отдельной карточкой factory; export сам Spawn не вызывает.

## 0x10120ea0 — CCorpse_ObjectCaps_NoSave

Возвращает фиксированную маску 80000000h из CCorpse virtual40.

MOV EAX,80000000h; RET, без чтения this/stack или записи памяти. Native CCorpse vtable101e6ca0+40 связывает этот вход. Совместимая SDK семантика FCAP_DONT_SAVE помогает назвать назначение; поведение engine save при этой маске здесь не доказано. Не объявляется CWorld method.

## 0x101217c0 — CWorld_Spawn

Запускает virtual Precache мира, сохраняет sv_cheats и добавляет map-specific entity в c_start.

Thiscall без stack args, RET. Сначала global10222f04=0, затем this.virtual30; concrete CWorld slot30=10120eb0. После возврата CVarGetFloat(sv_cheats) ST0 округляется/store float32 в 10231f64. Mapname=gpGlobals+0c string_t + stringBase98; guard mapname0 отсутствует в этом входе.

Вызов 1013f5f0(mapname, aom_) сравнивается с NULL и задаёт DWORD 10222f0c=0/1. Присваивание выполняется ПОСЛЕ virtual30 и вызванного им sentence loader100fdf70: loader читает предыдущее значение mode. Это локальный predicate над string-search helper, не проверка только префикса; полный CRT dispatcher остаётся support. Точный case-sensitive mapname c_start вызывает 10118460(NULL, dave_benson_phillips), wrapper find-by-classname. Если результат NULL — Create10017950(name,&global10222f34,&тот же global, ownerNULL).

При success Create вызывает 10119fe0(object,{613.0,-3156.0,-702.0}). Helper ведёт к engine SetOrigin и может писать player cache по virtuald0; не прямой записью в pev. Existing entity не перемещается, failed Create ничего не исправляет. Shared vector10222f34 не доказан runtime нулевым; этот вход сам не устанавливает model/solid/world bounds.

## 0x10120eb0 — CWorld_PrecacheAndBootstrap

Инициализирует globals/rules/resources/bodyqueue/lightstyles/decals/graph и world flags в точном native порядке.

Thiscall world, RET; native CWorld virtual30. В начале bool результата 1013f5f0(mapname, doc_)→10222f10,10222f14=0, global world10223190=this, this+3c=0, this+fc=0,10222f20=0,10226714=0. CVarSetString:sv_gravity=800, sv_stepsize=18, room_type=0. Старый rules10222ee4 при nonnull передаётся 1013dba5(pointer, dc); локальный helper использует только pointer, не вызывает virtual destructor. До присваивания нового rules старый global не очищается.

Для ненулевого mapname, точно равного c_doc_city, CVarSetFloat(difficulty,2). Затем 100af710→rules10222ee4. Ненулевой rules получает byte+a8=0,+d4=0, dword+d0=0,+cc=0, снова byte+d4=0, dword+d8=0. При rules&&virtual20()!=0: если world.pev.iuser1(+248)!=0, rules+a8=1, существующий global10222e10+4 очищается на 10f38h bytes; CVarGetFloat(mp_footsteps) float32 COMISS/JBE с 1: <=1 или unordered→d8=0, иначе второй независимый GetFloat плюс global time через x87 округляется в float32 и хранится в rules+d8. Ghidra int неверен: native MOVSS сохраняет float bits. Также bytes rules+aa..c9 очищаются 32iterations.

В ветви rules.virtual20!=0, если 10222e10==NULL: alloc10f3ch, NULL сохраняется 0, иначе constructor10029070(this=allocation)→global. Независимо от iuser1. В другой ветви ненулевой 10222e10 передаётся 1013dba5(pointer,10f3c), но global после этого НЕ обнуляется. Это локальная stale-pointer возможность; полный allocator/constructor/destructor и runtime transition не разобраны. Native SEH frame/state0 охраняет constructor; общая exception/unwind гарантия не заявлена.

Затем factory101004f0(NULL)→sound singleton10230d70 и немедленный virtual2c через EAX ДО проверки singletonNULL. Поздний Alert не является безопасным allocation guard. После этого:body ring101207e0;100fdf70;100fef60;resource registry1011fd90;1001cf70; common null/bodydrop1..4 sounds;10222eec=0;hgibs/agibs models;npc_step1..4 и ric1..5 sounds;null/muzzleflash sprites;101218a0(1). На c_start precache dave_benson_phillips;при rules&&virtual20!=0 — monster_booksimon. Имена/порядок всех literal calls сохранены C/ASM/evidence; bodies перечисленных support не закрыты этим REVIEW.

LightStyle slots0..13 получают 100b6a00(index)+stringBase, затем 63,62,61 получают a. DecalIndex вызывается 44 раза по{name*, index} таблице 1021b940 stride8; результаты EAX в+4 каждого record без проверки. Graph102238b0:Clear100cdf20;Freshness100cbbf0(mapname);zero→AllocateInitial100ca780, иначе Load100cc810;failedLoad Alert и AllocateInitial, success Alert. Это не полный inline build: node/hull deferred chain описана отдельно. Bodyqueue создана раньше graph callbacks.

sv_zmax:pev.speed1fc>0 ordered→это float, иначе включая NaN→4096 (COMISS/JBE). Если pev.netname1d4!=0, Alert и Create env_message с обоими vector pointers10222f34. Success ставит message.Think78=100014b0, message.pev.message1d8=world.netname, world.netname=0; virtual8(0.3f);ПОСЛЕ call message.spawnflags=1. Failure оставляет world.netname. Shared vectorruntimevalue не подразумевается.

Последние действия: CVarSetFloat(v_dark, spawnflagsbit0?1:0);10222f00=(spawnflags>>1)&1;CVarSetFloat(mp_defaultteam, bit2?1:0);memset(this+100,0,400h). Spawnflags перечитываются между callbacks. Нет local rollback/cleanup ранее созданных ресурсов при ранних failures; CVAR flags/derived callbacks/exception behavior остаются внешними. Это контракт orchestration, не восстановление всех callees.

## 0x10119790 — UTIL_PrecacheOther_TemporaryEntity

Создаёт временную named entity, вызывает private virtual30 и удаляет исходный edict.

cdecl(const char*name), RET; CreateNamedEntity(name-stringBase), без AllocString/NULLname guard. Если edictNULL либо EntOffsetOfPEntity(edict)==0:Alert1 NULL Ent in UTIL_PrecacheOther и return. При nonnull edict с offset0 RemoveEntity не вызывается — не гарантирована общая cleanup при failure.

Иначе берёт edict+28c (pev.pContainingEntity20c). Если NULL — engine PEntityOfEntOffset(0); полученный nonnull edict.private7c даёт this для virtual30. Вызов Spawn отсутствует. После normal callback/skip вызывает RemoveEntity на исходном created edict, даже если private был получен через fallbackworld. Не имеет try/finally, resultignored, pointer stability после virtualcall engine-owned.

## 0x1011fb60 — UTIL_PrecacheOtherWeapon_RegisterItemInfo

Precache временного оружия копирует 44-byte ItemInfo в индексный registry и регистрирует два ammo name.

cdecl(name), RET. CreateNamedEntity(name-stringBase), EntOffset guard и private resolution/fallbackPEntityOfEntOffset(0) аналогичны 10119790;earlyfailureAlert без удаления nonnulloffset0. Nativevirtual30 private затем memset stack2c=0, virtual13c(&stack). Если EAX0 — skipregistration, но RemoveEntitycreatededict всёравнов normalpath.

При virtual13c success берётся signedDWORD scratch+20 как id;destination=10231888+wrap32(id*2c), затем копируются все 2ch bytes (MOVUPS16+16, MOVQ8, DWORD4). Нет проверки id>=0/id<32 и buffer bounds, нет deep-copy строк. Начальная registryclear580h соответствует 32 таким record, этоне guard. Scratch+8 и+10 проверяютсяна NULL/первый NUL; непустые передаются 1011b4d0 втакомпорядке.

Resource ownership borrowed: строки сохранены как pointers, temporaryedict затем RemoveEntity. Правильный lifetime строк зависит от реализации weaponvirtual13c; stack пустойинициализаторнеобеспечиваетсрокжизни. Callback mutation/исключения engine неустранены. EAX не определённый publicsuccess API.

## 0x1011b4d0 — AmmoRegistry_RegisterBorrowedName

Ищет ammo name в 32slots и при отсутствии циклически перезаписывает следующий slot.

cdecl(const char*name), RET. Всегда сканирует 32entries10231e08 stride8, читает nameptr+0;nonnull сравниваетсяс input через 1017bcbb. Return0comparison→немедленный return безизменения counter/id, дажееслираньшевстреченпустой slot. NativeCRTcomparison остаётсяотдельнойграницей (неприписываем case/locale безегоанализа). NULLinput незащищёнперед comparator.

Еслисовпадениянет: next=wrap32(global10231f58+1); signed next>=32→0, иначе next;global=next, slot[next].name=inputpointer, slot[next].id=next. Изначальный counter0 означаетпервуюзапись slot1,32-яноваязапись slot0,33-я slot1. Этоциклическаязамена, непоискпервогопустогоместа и не reject-full. Повреждённый negativecounter не clamped. Не выполняет copy/allocate/free;имя borrowed.EAX необъявленрезультатом API.

## 0x1011fd90 — WorldPrecache_WeaponAndEffectRegistry

Сбрасывает item/ammo tables и загружает фиксированные entity/model/sound/event ресурсы.

cdecl/noargs RET. memset10231888,0,580h (32ItemInfo*2c), memset10231e08,0,100h (32ammo*8), counter10231f58=0. При 10222df4!=0 дополнительно 11weapon_cs* через 1011fb60;при rulesnonnull&&virtual20()!=0 восемь ammo_* через 10119790. Затем 8commonentities и 26 обычных weapon* (порядокполностьюсохранёнв resources table контракта), weaponbox. Неинициализирует wholeglobal state;нет returnstatus/rollback на failedprecache.

Model/sprite resources через 10116990, которыйможетвернуть 0 для missing/empty/inline*resource; calls здесьрезультатневалидируют. Индексыэффектовв globals10231f08..30 сохраняются ТОЛЬКО AX (WORD), старшие 16bits четырёхбайтовыхслотовнеобнуляются. laserbeam имяберётсяиз pointer1021b4e8. Шесть PrecacheEvent(slot122,1, name) также AX→WORDglobals10231f40,44,48,4c,50,54. Полное DWORD присваивание Ghidra длячасти overlapglobals некорректно.

После grenade/explodemodels идут 13 общих weapon sounds, wsplash_x sprite,100d08f0(spread_settings.txt). Это precache/register, невыстрел/воспроизведение event. Runtimecallbacks, индексы 0, доступностьресурсов, spreadparser и derivedweaponvirtuals —отдельныеграницы.

## 0x100b6a00 — LightStyle_DefaultPatternStringOffset

Возвращает string_t однойиз 20 фиксированных lightstyle patterns.

cdecl(intstyle), RET, EAX=literalpointer−gpGlobals.stringBase98(mod32). CMPstyle,13h;unsignedJAdefault, поэтому negative и>19 тоже default m. Index0 также m,13 даёт a;20-waynativejumptable100b6b94 икаждая literal строкасохраненыв evidence.lightstyles. Не AllocString, не copy, неизменяет lightstyle.

WorldPrecache вызываетэто helper для 0..13, но 14..19 доступныдругим callers. Caller добавляетактуальный stringBase перед LightStyle;вмеж callback изменении base нетзащиты. Временнаяинтерпретациябукв renderer/engine здесьнепроверялась.

## Native lightstyle strings

| Index (decimal) | Pattern |
|---:|---|
| 0 | `m` |
| 1 | `mmnmmommommnonmmonqnmmo` |
| 2 | `abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba` |
| 3 | `mmmmmaaaaammmmmaaaaaabcdefgabcdefg` |
| 4 | `mamamamamama` |
| 5 | `jklmnopqrstuvwxyzyxwvutsrqponmlkj` |
| 6 | `nmonqnmomnmomomno` |
| 7 | `mmmaaaabcdefgmmmmaaaammmaamm` |
| 8 | `mmmaaammmaaammmabcdefaaaammmmabcdefmmmaaaa` |
| 9 | `aaaaaaaazzzzzzzz` |
| 10 | `mmamammmmammamamaaamammma` |
| 11 | `abcdefghijklmnopqrrqponmlkjihgfedcba` |
| 12 | `mmnnmmnnnmmnn` |
| 13 | `a` |
| 14 | `aabbccddeeffgghhiijjkkllmmmmmmmmmmmmmm` |
| 15 | `abcdefghijklmmmmmmmmmmmmmmmmmmmmmmmmmm` |
| 16 | `acegikmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm` |
| 17 | `llkkjjiihhggffeeddccbbaaaaaaaaaaaaaaaa` |
| 18 | `lkjihgfedcbaaaaaaaaaaaaaaaaaaaaaaaaaaa` |
| 19 | `kigecaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa` |

## Resource call order (native instruction addresses)

| Call VA | Callee | Input |
|---|---|---|
| 0x1011fdcd | 0x1011fb60 | `weapon_csak47` |
| 0x1011fdd7 | 0x1011fb60 | `weapon_csaug` |
| 0x1011fde1 | 0x1011fb60 | `weapon_csawp` |
| 0x1011fdeb | 0x1011fb60 | `weapon_csbomb` |
| 0x1011fdf5 | 0x1011fb60 | `weapon_csdeagle` |
| 0x1011fdff | 0x1011fb60 | `weapon_cselites` |
| 0x1011fe09 | 0x1011fb60 | `weapon_csfamas` |
| 0x1011fe13 | 0x1011fb60 | `weapon_csfiveseven` |
| 0x1011fe1d | 0x1011fb60 | `weapon_csflashbang` |
| 0x1011fe27 | 0x1011fb60 | `weapon_csg3sg1` |
| 0x1011fe31 | 0x1011fb60 | `weapon_csm4a1` |
| 0x1011fe51 | 0x10119790 | `ammo_glock` |
| 0x1011fe5b | 0x10119790 | `ammo_p345` |
| 0x1011fe65 | 0x10119790 | `ammo_shells` |
| 0x1011fe6f | 0x10119790 | `ammo_rifle` |
| 0x1011fe79 | 0x10119790 | `ammo_revolver` |
| 0x1011fe83 | 0x10119790 | `ammo_m16` |
| 0x1011fe8d | 0x10119790 | `ammo_vp70` |
| 0x1011fe97 | 0x10119790 | `ammo_g43` |
| 0x1011fea4 | 0x10119790 | `item_battery` |
| 0x1011feae | 0x10119790 | `item_suit` |
| 0x1011feb8 | 0x10119790 | `item_antidote` |
| 0x1011fec2 | 0x10119790 | `item_security` |
| 0x1011fecc | 0x10119790 | `item_longjump` |
| 0x1011fed6 | 0x10119790 | `monster_slower3` |
| 0x1011fee0 | 0x10119790 | `item_glocktaclight` |
| 0x1011feea | 0x10119790 | `item_phonebattery` |
| 0x1011fef4 | 0x1011fb60 | `weapon_flashlight` |
| 0x1011fefe | 0x1011fb60 | `weapon_mobile` |
| 0x1011ff08 | 0x1011fb60 | `weapon_glock` |
| 0x1011ff12 | 0x1011fb60 | `weapon_browning_wheelchair` |
| 0x1011ff1c | 0x1011fb60 | `weapon_booklaser` |
| 0x1011ff26 | 0x1011fb60 | `weapon_axe` |
| 0x1011ff30 | 0x1011fb60 | `weapon_dualweapon` |
| 0x1011ff3a | 0x1011fb60 | `weapon_p345` |
| 0x1011ff47 | 0x1011fb60 | `weapon_g43` |
| 0x1011ff51 | 0x1011fb60 | `weapon_shotgun` |
| 0x1011ff5b | 0x1011fb60 | `weapon_m16` |
| 0x1011ff65 | 0x1011fb60 | `weapon_vp70` |
| 0x1011ff6f | 0x1011fb60 | `weapon_rifle` |
| 0x1011ff79 | 0x1011fb60 | `weapon_syringe` |
| 0x1011ff83 | 0x1011fb60 | `weapon_action` |
| 0x1011ff8d | 0x1011fb60 | `weapon_camera` |
| 0x1011ff97 | 0x1011fb60 | `weapon_switchblade` |
| 0x1011ffa1 | 0x1011fb60 | `weapon_lantern` |
| 0x1011ffab | 0x1011fb60 | `weapon_nightstick` |
| 0x1011ffb5 | 0x1011fb60 | `weapon_sledgehammer` |
| 0x1011ffbf | 0x1011fb60 | `weapon_branch` |
| 0x1011ffc9 | 0x1011fb60 | `weapon_flare` |
| 0x1011ffd3 | 0x1011fb60 | `weapon_tmp` |
| 0x1011ffdd | 0x1011fb60 | `weapon_mp5` |
| 0x1011ffea | 0x1011fb60 | `weapon_famas` |
| 0x1011fff4 | 0x1011fb60 | `weapon_revolver` |
| 0x1011fffe | 0x10119790 | `weaponbox` |
| 0x10120008 | 0x10116990 | `sprites/gunsmoke.spr` |
| 0x10120012 | 0x10116990 | `models/flash1.mdl` |
| 0x1012001c | 0x10116990 | `models/flash2.mdl` |
| 0x10120026 | 0x10116990 | `models/flash3.mdl` |
| 0x10120030 | 0x10116990 | `sprites/zerogxplode.spr` |
| 0x10120040 | 0x10116990 | `sprites/WXplo1.spr` |
| 0x10120050 | 0x10116990 | `sprites/steam1.spr` |
| 0x10120060 | 0x10116990 | `sprites/bubble.spr` |
| 0x10120070 | 0x10116990 | `sprites/bloodspray.spr` |
| 0x10120080 | 0x10116990 | `sprites/blood.spr` |
| 0x10120090 | 0x10116990 | `sprites/null.spr` |
| 0x101200a0 | 0x10116990 | `sprites/splash_main.spr` |
| 0x101200b0 | 0x10116990 | `sprites/waterdrop.spr` |
| 0x101200c4 | 0x10116990 | `sprites/laserbeam.spr` |
| 0x101200d4 | 0x10116990 | `sprites/laserdot.spr` |
| 0x101200e6 | DWORD PTR ds:0x10223130 | `events/smokepuff.sc` |
| 0x101200f9 | DWORD PTR ds:0x10223130 | `events/viewpunch.sc` |
| 0x1012010c | DWORD PTR ds:0x10223130 | `events/weaponshoot.sc` |
| 0x1012011f | DWORD PTR ds:0x10223130 | `events/clientsound.sc` |
| 0x10120132 | DWORD PTR ds:0x10223130 | `events/muzzleflash.sc` |
| 0x10120145 | DWORD PTR ds:0x10223130 | `events/revolvershells.sc` |
| 0x10120156 | 0x10116990 | `models/grenade.mdl` |
| 0x10120160 | 0x10116990 | `sprites/explode1.spr` |
| 0x1012016d | 0x10116a30 | `weapons/weapon_fire_empty.wav` |
| 0x10120177 | 0x10116a30 | `weapons/weapon_fire_empty_noclick.wav` |
| 0x10120181 | 0x10116a30 | `weapons/melee_swing.wav` |
| 0x1012018b | 0x10116a30 | `weapons/melee_hit.wav` |
| 0x10120195 | 0x10116a30 | `weapons/sleeve_generic1.wav` |
| 0x1012019f | 0x10116a30 | `weapons/sleeve_generic2.wav` |
| 0x101201a9 | 0x10116a30 | `weapons/sleeve_generic3.wav` |
| 0x101201b3 | 0x10116a30 | `weapons/dead_arm.wav` |
| 0x101201bd | 0x10116a30 | `weapons/debris1.wav` |
| 0x101201c7 | 0x10116a30 | `weapons/debris2.wav` |
| 0x101201d1 | 0x10116a30 | `weapons/debris3.wav` |
| 0x101201db | 0x10116a30 | `weapons/weapon_get.wav` |
| 0x101201e5 | 0x10116a30 | `weapons/item_get.wav` |
| 0x101201ef | 0x10116990 | `sprites/wsplash_x.spr` |
| 0x101201f9 | 0x100d08f0 | `spread_settings.txt` |

## Remaining dependencies

Rules constructors/virtual20 and intermission are covered by [rules-bootstrap](../server-rules-bootstrap/contract.md); sound singleton/pool by [sound-entity](../server-sound-entity/contract.md); setup101218a0, helper1001cf70 and material loader/lookup by [resource-precache](../server-resource-precache/contract.md). Sentence callers/comparator branches and bounded ready/mode evidence are in [sentence-lifecycle](../server-sentence-lifecycle/contract.md). Further local contracts: [multiplayer-flow](../server-multiplayer-flow/contract.md) covers full MP Think/PlayerSpawn and direct helpers; [mapcycle](../server-mapcycle/contract.md) covers map selection/list loading; [spread-settings](../server-spread-settings/contract.md) covers table parsing and mode/movement dispatch; [monster-senses](../server-monster-senses/contract.md) covers Listen/BestSound/BestScent and selected player/grenade/gib producers. Still open: remaining cooperative state producers and downstream persistence/equipment/boss handlers; derived weapon attack/recoil and recovery writers; remaining sound producers and derived AI reactions; indirect ready resets; engine entity creation/removal/zero-fill, resource lifetime and scheduling; locale-table production and remaining CRT allocation/unwind/parser boundaries. Full game completeness is not implied by these local contracts. Previously reviewed graph and bodyqueue contracts explain only their own scope.
