# Загрузка общих и пользовательских ресурсов мира

Статический разбор пяти original server entries. SHA256: `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Игра не запускалась. Имена функций описательные; C является сохранённой декомпиляцией.
Связь запуска мира: [world-bootstrap](../server-world-bootstrap/contract.md).

## Карточки

## 0x100c6de0 — COM_Parse_SharedToken

Читает следующий токен в общий буфер102231a8 и возвращает позицию продолжения в исходной строке.

cdecl(const char *cursor), plain RET; EAX — borrowed cursor либоNULL. Всегда сначала token[0]=0. NULL input и достигнутый NUL после whitespace/comments даютNULL. Native MOVSX/JG трактует байты как signed char: пропускает ненулевые значения<=32, включая80..ff. Исходный buffer не меняется; глобальный output общий, не reentrant и без отдельного owner/lifetime.

На границе токена // пропускает всё до LF либоNUL и снова ищет начало. Одиночный / — обычный символ. В середине unquoted токена // и двойная кавычка не завершают token и не начинают comment/quote. Одиночные { } ( ) апостроф и запятая возвращаются как отдельный однобайтный token с NUL и cursor+1. Двоеточие и точка с запятой специальными delimiters не являются.

Начальная двойная кавычка включает quoted режим: она и закрывающая кавычка не копируются, cursor возвращается после закрывающей. Whitespace, punctuation, // и high bytes внутри копируются буквально; escape-последовательности не разбираются. Пустые кавычки дают пустой token, но ненулевой cursor. Незакрытая кавычка доNUL также возвращает pointer ПОСЛЕ этогоNUL: native заранее читает следующий char и инкрементируетEAX. Следующий parse может читать уже за логической строкой; нет отдельного error status.

Unquoted режим копирует до следующего delimiter либо signed char<=32, оставляет cursor на нём. В обоих циклах data bytes пишутся БЕЗ предварительной проверки размера. Только перед завершающим NUL проверяет unsigned length<5dch (1500), иначе CALL1013dd48. При1500 байтах выходной массив уже полностью заполнен безNUL; при большей длине уже есть out-of-bounds writes. Это поздний rangecheck, не bounded tokenizer; полный CRT failure callback вне контракта. Нормальная вместимость сNUL1499bytes. Остальной буфер не очищается.

## 0x101218a0 — World_LoadCustomPrecacheFile

Разбирает глобальный либо map-specific precache-файл в три таблицы string_t и затем вызывает загрузчики ресурсов.

cdecl(arg), plain RET; проверяется только low BYTE первого stack argument. При ненулевом — maps/global_precache.txt. При нулевом — maps/+gpGlobals.mapname/stringBase+_precache.txt. У native world caller10120eb0 аргумент1, поэтому этот callsite выбирает GLOBAL файл; текущий поиск saved C не доказывает вызов map-варианта в другой точке. Path buffer [ebp-108] до cookie[ebp-4] имеет260bytes; mapname копируется и suffix14bytes добавляется без capacity/NULL guard. Литералы и raw bytes закреплены в evidence.

До чтения файла сбрасывает DWORD blockCount10231f68,modelCount10231f6c,soundCount10232270,spriteCount10232274. REP STOS очищает по64DWORD: models10231f70,sounds10232070,sprites10232170. Старые string_t теряются без индивидуального освобождения; storage strings принадлежит engine AllocString. LoadFileForMe(path,&length) возвращает buffer. NULL или length==0 сразу выходит; в случае nonNULL/zero length FreeFile НЕ вызывается. Length далее не ограничивает tokenizer, отрицательный length отдельно не отвергается.

Общий tokenizer100c6de0 выдаёт token102231a8. Внешний цикл идёт пока token непустой. Требует точное case-sensitive precache; неизвестный root token вызывает4Alert(1),FreeFile и немедленный return БЕЗ precache ранее накопленных записей. После precache проверяет только token[0]=={; при отсутствии3Alert и переход кFreeFile+обходу уже собранных таблиц. Поэтому две ошибки имеют разные частичные результаты. Пустой quoted token на внешнем уровне выглядит как конец разбора.

Внутри блока читает до token[0]==}. Точные имена model/sound/sprite потребляют следующий token как значение. Соответствующий count сначала increment, затем AllocString(token), после callback count перечитывается и EAX пишется в base[count]. Нет upper bound, проверки отсутствующего/пустого имени, extension или allocation failure. Unknown section вызывает3Alert и переходит к следующему token; значение специально не пропускается. Нет вложенности, проверки EOF/NULL cursor или progress guard внутри блока: при исчерпанном cursor token остаётся пустым, повторяются diagnostic/Parse(NULL), пока callbacks не меняют control state. Непарную кавычку нельзя сводить к этому случаю: tokenizer может вернуть pointer послеNUL.

Индексирование начинается с1, slot0 обычно не используется. Номинально три массива по64элемента, поэтому64-я model-запись попадает в sounds[0],64-я sound в sprites[0],64-я sprite в soundCount10232270. Count сам может быть испорчен; переполнение/дальнейшие эффекты не подменяются безопасным ограничением64. Для каждой закрывающей } увеличивает blockCount, затем читает следующий внешний token. Несколько блоков накапливают общие counts.

После обычного EOF или отсутствия { вызывает FreeFile ДО Precache. Обходит model indices1..modelCount и sound indices1..soundCount, signed bounds; нулевые string_t пропускает, ненулевые разрешает через текущий stringBase и вызывает10116990 либо10116a30. Последний sprite loop использует modelCount, а НЕ spriteCount: native10121ca1..10121cd9. При modelCount0 спрайты не загружаются; при меньшем числе моделей часть sprite записей остаётся не обработана. В пределах очищенных массивов лишние нули пропускаются, но upper bound отсутствует. Counts перечитываются после ненулевого callback, не после skip0; snapshot/reentrancy гарантий нет.

Не возвращает оформленный status, не проверяет результат precache, не делает dedup, rollback или очищение частично заполненного state после parse failure. Callback/engine lifetime, реальные файлы конкретной карты и допустимость их содержимого не проверялись. Это статический контракт original parser, не исправленный/перенесённый парсер.

## 0x1001cf70 — World_PrecachePlayerAndCommonResources

Предзагружает общие модели/звуки и выбирает наборы дыхания и реплик Simon/Doctor/Police через rules и имя карты.

cdecl(void), plain RET. Сохранённое тело состоит из двух native ranges1001cf70..1001d76a и1001d770..1001d824; оба включены, второй содержит Simon vocal loops и общий epilogue. Caller10120eb0 выполняет этот helper после weapon/effect registry и до дополнительных bodydrop/NPCstep ресурсов. Никакой игры или ресурса здесь не исполняли/меняли.

Начало: временный precache monster_sawcrazy через10119790, models/error.mdl, ambience/player sounds, sprcache черезPrecacheModel, ambience/soundcache черезPrecacheSound, models/generic_gore.mdl, UI click/rollover иstranger/st_hearbeat.wav. Далее при rules10222ee4==NULL ИЛИ virtual20()!=0 — equipment_movement.wav и3votekick sounds; только nonNULL rules/virtual20==0 выбирает bag_movement.wav. Затем общий ряд шагов/воды/UI/моделей; физический порядок132 immediate resource calls сохранён таблицей вcontract/evidence. Calls сregister/table arguments перечислены отдельно,132 — не число реально выполненных вызовов.

Общий список включает crawl/concrete/dirt/grass/metal/mud/sand/snow/wood/splash/wade/glass/paper/carpet/gravel1..4 иtwig_snap1..9; buttons sparks, debris glass, common bodysplat, player/simon_gibs/blood_puff/flash1/scr_set models, inventory/NV/weapon UI иwater sounds. items/flashlight1.wav вызывается ДВАЖДЫ подряд. Не объединять дубликат и не добавлять префиксы, отсутствующие в литералах.

Следующая независимая проверка rules: NULL либо virtual20!=0 выбирает police: out_of_breath1/2, sprint_breathe1/2/3 и затем общий шестипозиционный хвост sprint_breathe4/5/6/7/8/9. Иначе string-search helper1013f5f0(mapname,"doc_") выбирает doctor либо обычныйplayer: out_of_breath, sprint_breathe1..5. Проверяется ненулевой результат search, не требование префикса карты. Helper/CRT policy остаётся внешней границей. После дыхания5inventory sounds.

Третья независимая проверка rules использует ДРУГОЙ NULL default: только nonNULL&&virtual20!=0 выбирает police tables. Они идут follow7,help5,something9,pain10,death5,swing6,morphine4,lowhealth4. ПриNULL либо virtual20==0 снова search doc_: doctor pain8/death7/swing10/lowhealth5, БЕЗ отдельного morphine table; обычныйplayer pain16/death7/swing10/morphine8/lowhealth5. Поэтому стабильныйNULL rules даёт police дыхание, но Simon/Doctor vocal tables. Нельзя заменить три условия одним сохранённым bool. На каждом этапе global rules/virtual результат перечитывается.

Table loops читают pointers поnative fixed byte limits, шаг4;18таблиц включают127записей с учётом mutually-exclusive вариантов и общего финальногоvomit. Последним всегда вызывается PrecacheSound(pointer из10211e04), исходное имяplayer/vocal/Vomit/vomit1.wav. Имена/порядок каждой таблицы закреплены rawDWORD pointers иNUL строками. На уровне этого caller результаты загрузчиков игнорируются, paths/tables не нормализуются и не кешируются. Политика расширенных wrappers10116990/10116a30 и engine dedup/lifetime отдельно уже исследуется; наличие вызова не доказывает успешную загрузку или слышимость.

## 0x100fef60 — TextureMaterials_LoadOnce

Однократно загружает соответствия texture name → material byte из custom/default файла в512 записей.

cdecl(void), plainRET. Ready1022f168!=0 сразу выходит. Иначе clear names1022f170 на1a00hbytes (512×13),types10230b70 на200hbytes,count1022f16c=0,line512=0. CVarGetString(slot58,sv_custommaterials), strlen безNULLguard: unsigned length<=2 выбирает sound/materials.txt, иначе returned string без преобразований. LoadFileForMe(path,&length) NULL оставляетready0. Ненулевой buffer в обычном завершающемся путиFreeFile, затемready1, даже если ни одной записи не принято; отдельной length==0 ветки нет.

Критический native факт: DWORDcursor по[ebp-210] перед первым ReadLineChunk10100410 НЕ инициализирован. Length[ebp-208],file[ebp-20c],line[ebp-204..-5] — отдельные поля; триmemset не затрагиваютcursor. Поэтому нельзя описывать фактический старт как0 или гарантированное чтение с начала. Reader принимает это stack value какsignedcursor, может сразу завершить, пропустить начало либо приnegative читать доbuffer. Источник runtime stack value не доказан, игру на malformed данных не запускали.

Передаёт reader capacity1ffh приline512 (обычно максимум510data). После успешного chunk проверяет signedcount<512; lower-bound guard отсутствует. Начальные bytes пропускаются по predicate1016d250, Ghidra label_isspace; пустую строку, первый/ и false1016cdc0(label_isalpha) отвергает. Всеchar аргументы MOVSX, а не unsigned. Результат1016d8fb(label_toupper) lowAL записываетсяtypes[count] ЕЩЁ ДО проверки наличия/окончанияtexture name. Точный locale/error behavior этих CRT helpers оставлен внешним, labels не считаются полным реверсом.

Послеtype byte пропускает predicate-space, берёт token до следующего такогоbyte/NUL. Еслиname пустое ИЛИ конецимени оказалсяNUL, записьнепринимается; нужен trailing delimiter. Поэтому последняястрока безwhitespace/newline послеимени отбрасывается, а type[count] можетостатьсязаписанным при неизменномcount. Еслиdelimiterесть, выбираетsignedmin(end,start+12), unsignedпроверкаиндекса<512 передNUL. Копирует не более12name bytes плюсNUL вnames[oldcount*13],count++. Имена не нормализуются,не сортируются,не dedup; хвостстроки игнорируется. Возможнаяпродолженная510-byteстрока обрабатывается какновыйchunk.

FreeFile получает retainedoriginalbuffer, не tokenpointer; ready ставитсяпослеcallback. ReadLineChunk/cursor/ctype failures не имеютlocalrollback. Ready storage непосредственно следует за sentencegrouparray, но это толькоlayout связь, не доказательство runtime corruption. World10120eb0 вызываетloaderпосле sentence initializer. Сбросreadyмеждукартами и enginebuffertermination не установлен;512-entrycapacityнеустраняет uninitializedcursor.

## 0x100fedc0 — TextureMaterials_LookupTypeByte

Линейно ищет texture name через12-byte comparator и возвращает первый material byte либоASCII C.

cdecl(const char*texture), plainRET. При signedcount1022f16c<=0 возвращаетAL=43h. Иначе index0..count-1,storedname1022f170+13*index, вызов1017bd92(texture,storedname,12); EAX==0 выбираетtypes10230b70[index]. Приmissпродвигаетnameна13 иперечитываетcount. Native гарантирует толькоAL,не fullDWORDreturn: старшиеEAX не нормализуются.

Нетreadyguard,NULLinputguard,textureprefix stripping,sort/binarysearch,clampcount512. Первое совпадение побеждает; caller не ограничивает исходнуюtextureстроку. Ghidraметка__strnicmp — толькоlibraryhint: аргумент12/адрес/zeroresult доказаны, полныйcase/locale/NULLbehaviorcallee1017bd92 отдельнонеразобран. AL43h означаетliteral C; физическаямодельматериала ивыборконкретногозвука этимlookupнезакрыты.

## Immediate resource calls в физическом порядке кода

Ветвления описаны выше; таблица не означает выполнение всех строк на одном пути.

| Call VA | Callee | Имя |
|---|---|---|
| 0x1001cf7b | 0x10119790 | `monster_sawcrazy` |
| 0x1001cf85 | 0x10116990 | `models/error.mdl` |
| 0x1001cf8f | 0x10116a30 | `ambience/van_number.wav` |
| 0x1001cf99 | 0x10116a30 | `ambience/really_muschi.wav` |
| 0x1001cfa3 | 0x10116a30 | `player/morphine_dream.wav` |
| 0x1001cfad | 0x10116a30 | `player/heartbeat1.wav` |
| 0x1001cfb7 | 0x10116a30 | `ambience/laugh1.wav` |
| 0x1001cfc1 | 0x10116a30 | `ambience/laugh2.wav` |
| 0x1001cfcb | 0x10116a30 | `ambience/laugh3.wav` |
| 0x1001cfd5 | 0x10116a30 | `player/vocal/underwaterhurt1.wav` |
| 0x1001cfdf | 0x10116a30 | `player/vocal/underwaterhurt2.wav` |
| 0x1001cfe9 | 0x10116a30 | `player/vocal/underwaterhurt3.wav` |
| 0x1001cff3 | 0x10116a30 | `player/vocal/water_surface.wav` |
| 0x1001cffd | 0x10116a30 | `player/pl_fallpain.wav` |
| 0x1001d007 | 0x10116a30 | `player/pl_swim.wav` |
| 0x1001d011 | 0x10116990 | `sprcache` |
| 0x1001d01e | 0x10116a30 | `ambience/soundcache` |
| 0x1001d028 | 0x10116990 | `models/generic_gore.mdl` |
| 0x1001d032 | 0x10116a30 | `ui/3d_click.wav` |
| 0x1001d03c | 0x10116a30 | `ui/3d_rollover.wav` |
| 0x1001d046 | 0x10116a30 | `stranger/st_hearbeat.wav` |
| 0x1001d06d | 0x10116a30 | `player/sprint/equipment_movement.wav` |
| 0x1001d077 | 0x10116a30 | `common/votekick/votekick_failed.wav` |
| 0x1001d081 | 0x10116a30 | `common/votekick/votekick_notify.wav` |
| 0x1001d09c | 0x10116a30 | `player/show_hint.wav` |
| 0x1001d0a6 | 0x10116a30 | `inventory/game_start.wav` |
| 0x1001d0b0 | 0x10116a30 | `player/vocal/water_breathe.wav` |
| 0x1001d0ba | 0x10116a30 | `player/footsteps/crawl1.wav` |
| 0x1001d0c4 | 0x10116a30 | `player/footsteps/crawl2.wav` |
| 0x1001d0ce | 0x10116a30 | `player/footsteps/crawl3.wav` |
| 0x1001d0d8 | 0x10116a30 | `player/footsteps/crawl4.wav` |
| 0x1001d0e2 | 0x10116a30 | `player/get_down.wav` |
| 0x1001d0ec | 0x10116a30 | `player/get_up.wav` |
| 0x1001d0f6 | 0x10116a30 | `player/footsteps/concrete1.wav` |
| 0x1001d100 | 0x10116a30 | `player/footsteps/concrete2.wav` |
| 0x1001d10a | 0x10116a30 | `player/footsteps/concrete3.wav` |
| 0x1001d114 | 0x10116a30 | `player/footsteps/concrete4.wav` |
| 0x1001d11e | 0x10116a30 | `player/footsteps/dirt1.wav` |
| 0x1001d128 | 0x10116a30 | `player/footsteps/dirt2.wav` |
| 0x1001d135 | 0x10116a30 | `player/footsteps/dirt3.wav` |
| 0x1001d13f | 0x10116a30 | `player/footsteps/dirt4.wav` |
| 0x1001d149 | 0x10116a30 | `player/footsteps/grass1.wav` |
| 0x1001d153 | 0x10116a30 | `player/footsteps/grass2.wav` |
| 0x1001d15d | 0x10116a30 | `player/footsteps/grass3.wav` |
| 0x1001d167 | 0x10116a30 | `player/footsteps/grass4.wav` |
| 0x1001d171 | 0x10116a30 | `player/footsteps/metal1.wav` |
| 0x1001d17b | 0x10116a30 | `player/footsteps/metal2.wav` |
| 0x1001d185 | 0x10116a30 | `player/footsteps/metal3.wav` |
| 0x1001d18f | 0x10116a30 | `player/footsteps/metal4.wav` |
| 0x1001d199 | 0x10116a30 | `player/footsteps/mud1.wav` |
| 0x1001d1a3 | 0x10116a30 | `player/footsteps/mud2.wav` |
| 0x1001d1ad | 0x10116a30 | `player/footsteps/mud3.wav` |
| 0x1001d1b7 | 0x10116a30 | `player/footsteps/mud4.wav` |
| 0x1001d1c1 | 0x10116a30 | `player/footsteps/sand1.wav` |
| 0x1001d1cb | 0x10116a30 | `player/footsteps/sand2.wav` |
| 0x1001d1d8 | 0x10116a30 | `player/footsteps/sand3.wav` |
| 0x1001d1e2 | 0x10116a30 | `player/footsteps/sand4.wav` |
| 0x1001d1ec | 0x10116a30 | `player/footsteps/snow1.wav` |
| 0x1001d1f6 | 0x10116a30 | `player/footsteps/snow2.wav` |
| 0x1001d200 | 0x10116a30 | `player/footsteps/snow3.wav` |
| 0x1001d20a | 0x10116a30 | `player/footsteps/snow4.wav` |
| 0x1001d214 | 0x10116a30 | `player/footsteps/wood1.wav` |
| 0x1001d21e | 0x10116a30 | `player/footsteps/wood2.wav` |
| 0x1001d228 | 0x10116a30 | `player/footsteps/wood3.wav` |
| 0x1001d232 | 0x10116a30 | `player/footsteps/wood4.wav` |
| 0x1001d23c | 0x10116a30 | `player/exit_water.wav` |
| 0x1001d246 | 0x10116a30 | `player/footsteps/splash1.wav` |
| 0x1001d250 | 0x10116a30 | `player/footsteps/splash2.wav` |
| 0x1001d25a | 0x10116a30 | `player/footsteps/splash3.wav` |
| 0x1001d264 | 0x10116a30 | `player/footsteps/splash4.wav` |
| 0x1001d26e | 0x10116a30 | `player/footsteps/wade1.wav` |
| 0x1001d27b | 0x10116a30 | `player/footsteps/wade2.wav` |
| 0x1001d285 | 0x10116a30 | `player/footsteps/wade3.wav` |
| 0x1001d28f | 0x10116a30 | `player/footsteps/wade4.wav` |
| 0x1001d299 | 0x10116a30 | `player/footsteps/glass1.wav` |
| 0x1001d2a3 | 0x10116a30 | `player/footsteps/glass2.wav` |
| 0x1001d2ad | 0x10116a30 | `player/footsteps/glass3.wav` |
| 0x1001d2b7 | 0x10116a30 | `player/footsteps/glass4.wav` |
| 0x1001d2c1 | 0x10116a30 | `player/footsteps/paper1.wav` |
| 0x1001d2cb | 0x10116a30 | `player/footsteps/paper2.wav` |
| 0x1001d2d5 | 0x10116a30 | `player/footsteps/paper3.wav` |
| 0x1001d2df | 0x10116a30 | `player/footsteps/paper4.wav` |
| 0x1001d2e9 | 0x10116a30 | `player/footsteps/carpet1.wav` |
| 0x1001d2f3 | 0x10116a30 | `player/footsteps/carpet2.wav` |
| 0x1001d2fd | 0x10116a30 | `player/footsteps/carpet3.wav` |
| 0x1001d307 | 0x10116a30 | `player/footsteps/carpet4.wav` |
| 0x1001d311 | 0x10116a30 | `player/footsteps/twig_snap1.wav` |
| 0x1001d31e | 0x10116a30 | `player/footsteps/twig_snap2.wav` |
| 0x1001d328 | 0x10116a30 | `player/footsteps/twig_snap3.wav` |
| 0x1001d332 | 0x10116a30 | `player/footsteps/twig_snap4.wav` |
| 0x1001d33c | 0x10116a30 | `player/footsteps/twig_snap5.wav` |
| 0x1001d346 | 0x10116a30 | `player/footsteps/twig_snap6.wav` |
| 0x1001d350 | 0x10116a30 | `player/footsteps/twig_snap7.wav` |
| 0x1001d35a | 0x10116a30 | `player/footsteps/twig_snap8.wav` |
| 0x1001d364 | 0x10116a30 | `player/footsteps/twig_snap9.wav` |
| 0x1001d36e | 0x10116a30 | `player/footsteps/gravel1.wav` |
| 0x1001d378 | 0x10116a30 | `player/footsteps/gravel2.wav` |
| 0x1001d382 | 0x10116a30 | `player/footsteps/gravel3.wav` |
| 0x1001d38c | 0x10116a30 | `player/footsteps/gravel4.wav` |
| 0x1001d396 | 0x10116a30 | `buttons/spark5.wav` |
| 0x1001d3a0 | 0x10116a30 | `buttons/spark6.wav` |
| 0x1001d3aa | 0x10116a30 | `debris/glass1.wav` |
| 0x1001d3b4 | 0x10116a30 | `debris/glass2.wav` |
| 0x1001d3c1 | 0x10116a30 | `debris/glass3.wav` |
| 0x1001d3cb | 0x10116a30 | `items/flashlight1.wav` |
| 0x1001d3d5 | 0x10116a30 | `items/flashlight1.wav` |
| 0x1001d3df | 0x10116a30 | `common/bodysplat.wav` |
| 0x1001d3e9 | 0x10116990 | `models/player.mdl` |
| 0x1001d3f3 | 0x10116990 | `models/simon_gibs.mdl` |
| 0x1001d3fd | 0x10116990 | `sprites/blood_puff.spr` |
| 0x1001d407 | 0x10116a30 | `unlockables/nv_on.wav` |
| 0x1001d411 | 0x10116a30 | `unlockables/nv_off.wav` |
| 0x1001d41b | 0x10116a30 | `common/wpn_hudoff.wav` |
| 0x1001d425 | 0x10116a30 | `common/wpn_hudon.wav` |
| 0x1001d42f | 0x10116a30 | `common/wpn_moveselect.wav` |
| 0x1001d439 | 0x10116a30 | `common/wpn_select.wav` |
| 0x1001d443 | 0x10116a30 | `common/wpn_denyselect.wav` |
| 0x1001d44d | 0x10116a30 | `player/water_jump.wav` |
| 0x1001d457 | 0x10116a30 | `player/water_small_splash.wav` |
| 0x1001d464 | 0x10116a30 | `player/water_splash.wav` |
| 0x1001d46e | 0x10116990 | `models/flash1.mdl` |
| 0x1001d478 | 0x10116990 | `sprites/scr_set.spr` |
| 0x1001d500 | 0x10116a30 | `player/police/player_out_of_breath1.wav` |
| 0x1001d50a | 0x10116a30 | `player/police/player_out_of_breath2.wav` |
| 0x1001d514 | 0x10116a30 | `player/police/sprint_breathe1.wav` |
| 0x1001d51e | 0x10116a30 | `player/police/sprint_breathe2.wav` |
| 0x1001d528 | 0x10116a30 | `player/police/sprint_breathe3.wav` |
| 0x1001d57f | 0x10116a30 | `inventory/inventory_click.wav` |
| 0x1001d589 | 0x10116a30 | `inventory/inventory_close.wav` |
| 0x1001d593 | 0x10116a30 | `inventory/inventory_no.wav` |
| 0x1001d59d | 0x10116a30 | `inventory/inventory_open.wav` |
| 0x1001d5a7 | 0x10116a30 | `inventory/inventory_toggle.wav` |

## Native sound pointer tables

### 0x10211cc8 — 16 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6920 | `player/vocal/Pain/Pain1.wav` |
| 1 | 0x101a693c | `player/vocal/Pain/Pain2.wav` |
| 2 | 0x101a6958 | `player/vocal/Pain/Pain3.wav` |
| 3 | 0x101a6974 | `player/vocal/Pain/Pain4.wav` |
| 4 | 0x101a6990 | `player/vocal/Pain/Pain5.wav` |
| 5 | 0x101a69ac | `player/vocal/Pain/Pain6.wav` |
| 6 | 0x101a69c8 | `player/vocal/Pain/Pain7.wav` |
| 7 | 0x101a69e4 | `player/vocal/Pain/Pain8.wav` |
| 8 | 0x101a6a00 | `player/vocal/Pain/Pain9.wav` |
| 9 | 0x101a6a1c | `player/vocal/Pain/Pain10.wav` |
| 10 | 0x101a6a3c | `player/vocal/Pain/Pain11.wav` |
| 11 | 0x101a6a5c | `player/vocal/Pain/Pain12.wav` |
| 12 | 0x101a6a7c | `player/vocal/Pain/Pain13.wav` |
| 13 | 0x101a6a9c | `player/vocal/Pain/Pain14.wav` |
| 14 | 0x101a6abc | `player/vocal/Pain/Pain15.wav` |
| 15 | 0x101a6adc | `player/vocal/Pain/Pain16.wav` |

### 0x10211db8 — 7 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a707c | `player/vocal/Death/Death1.wav` |
| 1 | 0x101a709c | `player/vocal/Death/Death2.wav` |
| 2 | 0x101a70bc | `player/vocal/Death/Death3.wav` |
| 3 | 0x101a70dc | `player/vocal/Death/Death4.wav` |
| 4 | 0x101a70fc | `player/vocal/Death/Death5.wav` |
| 5 | 0x101a711c | `player/vocal/Death/Death6.wav` |
| 6 | 0x101a713c | `player/vocal/Death/Death7.wav` |

### 0x10211d50 — 10 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6d3c | `player/vocal/Swing/Swing1.wav` |
| 1 | 0x101a6d5c | `player/vocal/Swing/Swing2.wav` |
| 2 | 0x101a6d7c | `player/vocal/Swing/Swing3.wav` |
| 3 | 0x101a6d9c | `player/vocal/Swing/Swing4.wav` |
| 4 | 0x101a6dbc | `player/vocal/Swing/Swing5.wav` |
| 5 | 0x101a6ddc | `player/vocal/Swing/Swing6.wav` |
| 6 | 0x101a6dfc | `player/vocal/Swing/Swing7.wav` |
| 7 | 0x101a6e1c | `player/vocal/Swing/Swing8.wav` |
| 8 | 0x101a6e3c | `player/vocal/Swing/Swing9.wav` |
| 9 | 0x101a6e5c | `player/vocal/Swing/Swing10.wav` |

### 0x10211c60 — 8 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a64c4 | `player/vocal/MorphineInjection/Morphine1.wav` |
| 1 | 0x101a64f4 | `player/vocal/MorphineInjection/Morphine2.wav` |
| 2 | 0x101a6524 | `player/vocal/MorphineInjection/Morphine3.wav` |
| 3 | 0x101a6554 | `player/vocal/MorphineInjection/Morphine4.wav` |
| 4 | 0x101a6584 | `player/vocal/MorphineInjection/Morphine5.wav` |
| 5 | 0x101a65b4 | `player/vocal/MorphineInjection/Morphine6.wav` |
| 6 | 0x101a65e4 | `player/vocal/MorphineInjection/Morphine7.wav` |
| 7 | 0x101a6614 | `player/vocal/MorphineInjection/Morphine8.wav` |

### 0x10211c90 — 5 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6704 | `player/vocal/LowHealth/lhealth1.wav` |
| 1 | 0x101a6728 | `player/vocal/LowHealth/lhealth2.wav` |
| 2 | 0x101a674c | `player/vocal/LowHealth/lhealth3.wav` |
| 3 | 0x101a6770 | `player/vocal/LowHealth/lhealth4.wav` |
| 4 | 0x101a6794 | `player/vocal/LowHealth/lhealth5.wav` |

### 0x10211d08 — 8 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6afc | `player/doctor/Pain/Pain1.wav` |
| 1 | 0x101a6b1c | `player/doctor/Pain/Pain2.wav` |
| 2 | 0x101a6b3c | `player/doctor/Pain/Pain3.wav` |
| 3 | 0x101a6b5c | `player/doctor/Pain/Pain4.wav` |
| 4 | 0x101a6b7c | `player/doctor/Pain/Pain5.wav` |
| 5 | 0x101a6b9c | `player/doctor/Pain/Pain6.wav` |
| 6 | 0x101a6bbc | `player/doctor/Pain/Pain7.wav` |
| 7 | 0x101a6bdc | `player/doctor/Pain/Pain8.wav` |

### 0x10211dd4 — 7 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a715c | `player/doctor/Death/Death1.wav` |
| 1 | 0x101a717c | `player/doctor/Death/Death2.wav` |
| 2 | 0x101a719c | `player/doctor/Death/Death3.wav` |
| 3 | 0x101a71bc | `player/doctor/Death/Death4.wav` |
| 4 | 0x101a71dc | `player/doctor/Death/Death5.wav` |
| 5 | 0x101a71fc | `player/doctor/Death/Death6.wav` |
| 6 | 0x101a721c | `player/doctor/Death/Death7.wav` |

### 0x10211d78 — 10 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6e7c | `player/doctor/Swing/Swing1.wav` |
| 1 | 0x101a6e9c | `player/doctor/Swing/Swing2.wav` |
| 2 | 0x101a6ebc | `player/doctor/Swing/Swing3.wav` |
| 3 | 0x101a6edc | `player/doctor/Swing/Swing4.wav` |
| 4 | 0x101a6efc | `player/doctor/Swing/Swing5.wav` |
| 5 | 0x101a6f1c | `player/doctor/Swing/Swing6.wav` |
| 6 | 0x101a6f3c | `player/doctor/Swing/Swing7.wav` |
| 7 | 0x101a6f5c | `player/doctor/Swing/Swing8.wav` |
| 8 | 0x101a6f7c | `player/doctor/Swing/Swing9.wav` |
| 9 | 0x101a6f9c | `player/doctor/Swing/Swing10.wav` |

### 0x10211ca4 — 5 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a67b8 | `player/doctor/LowHealth/lhealth1.wav` |
| 1 | 0x101a67e0 | `player/doctor/LowHealth/lhealth2.wav` |
| 2 | 0x101a6808 | `player/doctor/LowHealth/lhealth3.wav` |
| 3 | 0x101a6830 | `player/doctor/LowHealth/lhealth4.wav` |
| 4 | 0x101a6858 | `player/doctor/LowHealth/lhealth5.wav` |

### 0x10211c0c — 7 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a61e4 | `player/police/adlib/follow_1.wav` |
| 1 | 0x101a6208 | `player/police/adlib/follow_2.wav` |
| 2 | 0x101a622c | `player/police/adlib/follow_3.wav` |
| 3 | 0x101a6250 | `player/police/adlib/follow_4.wav` |
| 4 | 0x101a6274 | `player/police/adlib/follow_5.wav` |
| 5 | 0x101a6298 | `player/police/adlib/follow_6.wav` |
| 6 | 0x101a62bc | `player/police/adlib/follow_7.wav` |

### 0x10211c28 — 5 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a62e0 | `player/police/adlib/help_1.wav` |
| 1 | 0x101a6300 | `player/police/adlib/help_2.wav` |
| 2 | 0x101a6320 | `player/police/adlib/help_3.wav` |
| 3 | 0x101a6340 | `player/police/adlib/help_4.wav` |
| 4 | 0x101a6360 | `player/police/adlib/help_5.wav` |

### 0x10211c3c — 9 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6380 | `player/police/adlib/something_1.wav` |
| 1 | 0x101a63a4 | `player/police/adlib/something_2.wav` |
| 2 | 0x101a63c8 | `player/police/adlib/something_3.wav` |
| 3 | 0x101a63ec | `player/police/adlib/something_4.wav` |
| 4 | 0x101a6410 | `player/police/adlib/something_5.wav` |
| 5 | 0x101a6434 | `player/police/adlib/something_6.wav` |
| 6 | 0x101a6458 | `player/police/adlib/something_7.wav` |
| 7 | 0x101a647c | `player/police/adlib/something_8.wav` |
| 8 | 0x101a64a0 | `player/police/adlib/something_9.wav` |

### 0x10211d28 — 10 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6bfc | `player/police/Pain/Pain1.wav` |
| 1 | 0x101a6c1c | `player/police/Pain/Pain2.wav` |
| 2 | 0x101a6c3c | `player/police/Pain/Pain3.wav` |
| 3 | 0x101a6c5c | `player/police/Pain/Pain4.wav` |
| 4 | 0x101a6c7c | `player/police/Pain/Pain5.wav` |
| 5 | 0x101a6c9c | `player/police/Pain/Pain6.wav` |
| 6 | 0x101a6cbc | `player/police/Pain/Pain7.wav` |
| 7 | 0x101a6cdc | `player/police/Pain/Pain8.wav` |
| 8 | 0x101a6cfc | `player/police/Pain/Pain9.wav` |
| 9 | 0x101a6d1c | `player/police/Pain/Pain10.wav` |

### 0x10211df0 — 5 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a723c | `player/police/Death/Death1.wav` |
| 1 | 0x101a725c | `player/police/Death/Death2.wav` |
| 2 | 0x101a727c | `player/police/Death/Death3.wav` |
| 3 | 0x101a729c | `player/police/Death/Death4.wav` |
| 4 | 0x101a72bc | `player/police/Death/Death5.wav` |

### 0x10211da0 — 6 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6fbc | `player/police/Swing/Swing1.wav` |
| 1 | 0x101a6fdc | `player/police/Swing/Swing2.wav` |
| 2 | 0x101a6ffc | `player/police/Swing/Swing3.wav` |
| 3 | 0x101a701c | `player/police/Swing/Swing4.wav` |
| 4 | 0x101a703c | `player/police/Swing/Swing5.wav` |
| 5 | 0x101a705c | `player/police/Swing/Swing6.wav` |

### 0x10211c80 — 4 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6644 | `player/police/MorphineInjection/Morphine1.wav` |
| 1 | 0x101a6674 | `player/police/MorphineInjection/Morphine2.wav` |
| 2 | 0x101a66a4 | `player/police/MorphineInjection/Morphine3.wav` |
| 3 | 0x101a66d4 | `player/police/MorphineInjection/Morphine4.wav` |

### 0x10211cb8 — 4 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a6880 | `player/police/LowHealth/lhealth1.wav` |
| 1 | 0x101a68a8 | `player/police/LowHealth/lhealth2.wav` |
| 2 | 0x101a68d0 | `player/police/LowHealth/lhealth3.wav` |
| 3 | 0x101a68f8 | `player/police/LowHealth/lhealth4.wav` |

### 0x10211e04 — 1 записей

| Index | String VA | Имя |
|---|---|---|
| 0 | 0x101a72dc | `player/vocal/Vomit/vomit1.wav` |

## Открытые зависимости

Полный spread parser100d08f0 использует тот же tokenizer, но остаётся отдельной pending функцией. Байтовые проверки доказывают локальные ветви, не корректность всех input файлов. Не установлен полный lifecycle engine string pool/precaches и все косвенные callers map-specific варианта. Реальные ресурсы, воспроизведение звуков и malformed-input runtime здесь не проверялись.

Проверка: `python analysis/server-resource-precache/verify.py` (read-only PE).
