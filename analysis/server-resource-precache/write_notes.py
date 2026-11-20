"""Authoring source for the three static resource/parser contracts."""
from pathlib import Path
import json

OUT = Path(__file__).resolve().parent
functions = []


def add(address, name, summary, *details):
    functions.append(dict(module='server', address='0x'+address, proposed_name=name,
        subsystem='world', confidence='high', summary_ru=summary, details_ru=list(details),
        evidence_paths=['decompiled/server/partial-pass/functions/0x'+address+'.c',
            'analysis/server-resource-precache/'+address+'.asm',
            'analysis/server-resource-precache/evidence.json',
            'analysis/server-resource-precache/contract.md']))


add('100c6de0', 'COM_Parse_SharedToken',
    'Читает следующий токен в общий буфер102231a8 и возвращает позицию продолжения в исходной строке.',
    'cdecl(const char *cursor), plain RET; EAX — borrowed cursor либоNULL. Всегда сначала token[0]=0. NULL input и достигнутый NUL после whitespace/comments даютNULL. Native MOVSX/JG трактует байты как signed char: пропускает ненулевые значения<=32, включая80..ff. Исходный buffer не меняется; глобальный output общий, не reentrant и без отдельного owner/lifetime.',
    'На границе токена // пропускает всё до LF либоNUL и снова ищет начало. Одиночный / — обычный символ. В середине unquoted токена // и двойная кавычка не завершают token и не начинают comment/quote. Одиночные { } ( ) апостроф и запятая возвращаются как отдельный однобайтный token с NUL и cursor+1. Двоеточие и точка с запятой специальными delimiters не являются.',
    'Начальная двойная кавычка включает quoted режим: она и закрывающая кавычка не копируются, cursor возвращается после закрывающей. Whitespace, punctuation, // и high bytes внутри копируются буквально; escape-последовательности не разбираются. Пустые кавычки дают пустой token, но ненулевой cursor. Незакрытая кавычка доNUL также возвращает pointer ПОСЛЕ этогоNUL: native заранее читает следующий char и инкрементируетEAX. Следующий parse может читать уже за логической строкой; нет отдельного error status.',
    'Unquoted режим копирует до следующего delimiter либо signed char<=32, оставляет cursor на нём. В обоих циклах data bytes пишутся БЕЗ предварительной проверки размера. Только перед завершающим NUL проверяет unsigned length<5dch (1500), иначе CALL1013dd48. При1500 байтах выходной массив уже полностью заполнен безNUL; при большей длине уже есть out-of-bounds writes. Это поздний rangecheck, не bounded tokenizer; полный CRT failure callback вне контракта. Нормальная вместимость сNUL1499bytes. Остальной буфер не очищается.')

add('101218a0', 'World_LoadCustomPrecacheFile',
    'Разбирает глобальный либо map-specific precache-файл в три таблицы string_t и затем вызывает загрузчики ресурсов.',
    'cdecl(arg), plain RET; проверяется только low BYTE первого stack argument. При ненулевом — maps/global_precache.txt. При нулевом — maps/+gpGlobals.mapname/stringBase+_precache.txt. У native world caller10120eb0 аргумент1, поэтому этот callsite выбирает GLOBAL файл; текущий поиск saved C не доказывает вызов map-варианта в другой точке. Path buffer [ebp-108] до cookie[ebp-4] имеет260bytes; mapname копируется и suffix14bytes добавляется без capacity/NULL guard. Литералы и raw bytes закреплены в evidence.',
    'До чтения файла сбрасывает DWORD blockCount10231f68,modelCount10231f6c,soundCount10232270,spriteCount10232274. REP STOS очищает по64DWORD: models10231f70,sounds10232070,sprites10232170. Старые string_t теряются без индивидуального освобождения; storage strings принадлежит engine AllocString. LoadFileForMe(path,&length) возвращает buffer. NULL или length==0 сразу выходит; в случае nonNULL/zero length FreeFile НЕ вызывается. Length далее не ограничивает tokenizer, отрицательный length отдельно не отвергается.',
    'Общий tokenizer100c6de0 выдаёт token102231a8. Внешний цикл идёт пока token непустой. Требует точное case-sensitive precache; неизвестный root token вызывает4Alert(1),FreeFile и немедленный return БЕЗ precache ранее накопленных записей. После precache проверяет только token[0]=={; при отсутствии3Alert и переход кFreeFile+обходу уже собранных таблиц. Поэтому две ошибки имеют разные частичные результаты. Пустой quoted token на внешнем уровне выглядит как конец разбора.',
    'Внутри блока читает до token[0]==}. Точные имена model/sound/sprite потребляют следующий token как значение. Соответствующий count сначала increment, затем AllocString(token), после callback count перечитывается и EAX пишется в base[count]. Нет upper bound, проверки отсутствующего/пустого имени, extension или allocation failure. Unknown section вызывает3Alert и переходит к следующему token; значение специально не пропускается. Нет вложенности, проверки EOF/NULL cursor или progress guard внутри блока: при исчерпанном cursor token остаётся пустым, повторяются diagnostic/Parse(NULL), пока callbacks не меняют control state. Непарную кавычку нельзя сводить к этому случаю: tokenizer может вернуть pointer послеNUL.',
    'Индексирование начинается с1, slot0 обычно не используется. Номинально три массива по64элемента, поэтому64-я model-запись попадает в sounds[0],64-я sound в sprites[0],64-я sprite в soundCount10232270. Count сам может быть испорчен; переполнение/дальнейшие эффекты не подменяются безопасным ограничением64. Для каждой закрывающей } увеличивает blockCount, затем читает следующий внешний token. Несколько блоков накапливают общие counts.',
    'После обычного EOF или отсутствия { вызывает FreeFile ДО Precache. Обходит model indices1..modelCount и sound indices1..soundCount, signed bounds; нулевые string_t пропускает, ненулевые разрешает через текущий stringBase и вызывает10116990 либо10116a30. Последний sprite loop использует modelCount, а НЕ spriteCount: native10121ca1..10121cd9. При modelCount0 спрайты не загружаются; при меньшем числе моделей часть sprite записей остаётся не обработана. В пределах очищенных массивов лишние нули пропускаются, но upper bound отсутствует. Counts перечитываются после ненулевого callback, не после skip0; snapshot/reentrancy гарантий нет.',
    'Не возвращает оформленный status, не проверяет результат precache, не делает dedup, rollback или очищение частично заполненного state после parse failure. Callback/engine lifetime, реальные файлы конкретной карты и допустимость их содержимого не проверялись. Это статический контракт original parser, не исправленный/перенесённый парсер.')

add('1001cf70', 'World_PrecachePlayerAndCommonResources',
    'Предзагружает общие модели/звуки и выбирает наборы дыхания и реплик Simon/Doctor/Police через rules и имя карты.',
    'cdecl(void), plain RET. Сохранённое тело состоит из двух native ranges1001cf70..1001d76a и1001d770..1001d824; оба включены, второй содержит Simon vocal loops и общий epilogue. Caller10120eb0 выполняет этот helper после weapon/effect registry и до дополнительных bodydrop/NPCstep ресурсов. Никакой игры или ресурса здесь не исполняли/меняли.',
    'Начало: временный precache monster_sawcrazy через10119790, models/error.mdl, ambience/player sounds, sprcache черезPrecacheModel, ambience/soundcache черезPrecacheSound, models/generic_gore.mdl, UI click/rollover иstranger/st_hearbeat.wav. Далее при rules10222ee4==NULL ИЛИ virtual20()!=0 — equipment_movement.wav и3votekick sounds; только nonNULL rules/virtual20==0 выбирает bag_movement.wav. Затем общий ряд шагов/воды/UI/моделей; физический порядок132 immediate resource calls сохранён таблицей вcontract/evidence. Calls сregister/table arguments перечислены отдельно,132 — не число реально выполненных вызовов.',
    'Общий список включает crawl/concrete/dirt/grass/metal/mud/sand/snow/wood/splash/wade/glass/paper/carpet/gravel1..4 иtwig_snap1..9; buttons sparks, debris glass, common bodysplat, player/simon_gibs/blood_puff/flash1/scr_set models, inventory/NV/weapon UI иwater sounds. items/flashlight1.wav вызывается ДВАЖДЫ подряд. Не объединять дубликат и не добавлять префиксы, отсутствующие в литералах.',
    'Следующая независимая проверка rules: NULL либо virtual20!=0 выбирает police: out_of_breath1/2, sprint_breathe1/2/3 и затем общий шестипозиционный хвост sprint_breathe4/5/6/7/8/9. Иначе string-search helper1013f5f0(mapname,"doc_") выбирает doctor либо обычныйplayer: out_of_breath, sprint_breathe1..5. Проверяется ненулевой результат search, не требование префикса карты. Helper/CRT policy остаётся внешней границей. После дыхания5inventory sounds.',
    'Третья независимая проверка rules использует ДРУГОЙ NULL default: только nonNULL&&virtual20!=0 выбирает police tables. Они идут follow7,help5,something9,pain10,death5,swing6,morphine4,lowhealth4. ПриNULL либо virtual20==0 снова search doc_: doctor pain8/death7/swing10/lowhealth5, БЕЗ отдельного morphine table; обычныйplayer pain16/death7/swing10/morphine8/lowhealth5. Поэтому стабильныйNULL rules даёт police дыхание, но Simon/Doctor vocal tables. Нельзя заменить три условия одним сохранённым bool. На каждом этапе global rules/virtual результат перечитывается.',
    'Table loops читают pointers поnative fixed byte limits, шаг4;18таблиц включают127записей с учётом mutually-exclusive вариантов и общего финальногоvomit. Последним всегда вызывается PrecacheSound(pointer из10211e04), исходное имяplayer/vocal/Vomit/vomit1.wav. Имена/порядок каждой таблицы закреплены rawDWORD pointers иNUL строками. На уровне этого caller результаты загрузчиков игнорируются, paths/tables не нормализуются и не кешируются. Политика расширенных wrappers10116990/10116a30 и engine dedup/lifetime отдельно уже исследуется; наличие вызова не доказывает успешную загрузку или слышимость.')

next(f for f in functions if f['address']=='0x1001cf70')['evidence_paths'].insert(2, 'analysis/server-resource-precache/1001cf70-1.asm')
add('100fef60', 'TextureMaterials_LoadOnce',
    'Однократно загружает соответствия texture name → material byte из custom/default файла в512 записей.',
    'cdecl(void), plainRET. Ready1022f168!=0 сразу выходит. Иначе clear names1022f170 на1a00hbytes (512×13),types10230b70 на200hbytes,count1022f16c=0,line512=0. CVarGetString(slot58,sv_custommaterials), strlen безNULLguard: unsigned length<=2 выбирает sound/materials.txt, иначе returned string без преобразований. LoadFileForMe(path,&length) NULL оставляетready0. Ненулевой buffer в обычном завершающемся путиFreeFile, затемready1, даже если ни одной записи не принято; отдельной length==0 ветки нет.',
    'Критический native факт: DWORDcursor по[ebp-210] перед первым ReadLineChunk10100410 НЕ инициализирован. Length[ebp-208],file[ebp-20c],line[ebp-204..-5] — отдельные поля; триmemset не затрагиваютcursor. Поэтому нельзя описывать фактический старт как0 или гарантированное чтение с начала. Reader принимает это stack value какsignedcursor, может сразу завершить, пропустить начало либо приnegative читать доbuffer. Источник runtime stack value не доказан, игру на malformed данных не запускали.',
    'Передаёт reader capacity1ffh приline512 (обычно максимум510data). После успешного chunk проверяет signedcount<512; lower-bound guard отсутствует. Начальные bytes пропускаются по predicate1016d250, Ghidra label_isspace; пустую строку, первый/ и false1016cdc0(label_isalpha) отвергает. Всеchar аргументы MOVSX, а не unsigned. Результат1016d8fb(label_toupper) lowAL записываетсяtypes[count] ЕЩЁ ДО проверки наличия/окончанияtexture name. Точный locale/error behavior этих CRT helpers оставлен внешним, labels не считаются полным реверсом.',
    'Послеtype byte пропускает predicate-space, берёт token до следующего такогоbyte/NUL. Еслиname пустое ИЛИ конецимени оказалсяNUL, записьнепринимается; нужен trailing delimiter. Поэтому последняястрока безwhitespace/newline послеимени отбрасывается, а type[count] можетостатьсязаписанным при неизменномcount. Еслиdelimiterесть, выбираетsignedmin(end,start+12), unsignedпроверкаиндекса<512 передNUL. Копирует не более12name bytes плюсNUL вnames[oldcount*13],count++. Имена не нормализуются,не сортируются,не dedup; хвостстроки игнорируется. Возможнаяпродолженная510-byteстрока обрабатывается какновыйchunk.',
    'FreeFile получает retainedoriginalbuffer, не tokenpointer; ready ставитсяпослеcallback. ReadLineChunk/cursor/ctype failures не имеютlocalrollback. Ready storage непосредственно следует за sentencegrouparray, но это толькоlayout связь, не доказательство runtime corruption. World10120eb0 вызываетloaderпосле sentence initializer. Сбросreadyмеждукартами и enginebuffertermination не установлен;512-entrycapacityнеустраняет uninitializedcursor.')
add('100fedc0', 'TextureMaterials_LookupTypeByte',
    'Линейно ищет texture name через12-byte comparator и возвращает первый material byte либоASCII C.',
    'cdecl(const char*texture), plainRET. При signedcount1022f16c<=0 возвращаетAL=43h. Иначе index0..count-1,storedname1022f170+13*index, вызов1017bd92(texture,storedname,12); EAX==0 выбираетtypes10230b70[index]. Приmissпродвигаетnameна13 иперечитываетcount. Native гарантирует толькоAL,не fullDWORDreturn: старшиеEAX не нормализуются.',
    'Нетreadyguard,NULLinputguard,textureprefix stripping,sort/binarysearch,clampcount512. Первое совпадение побеждает; caller не ограничивает исходнуюtextureстроку. Ghidraметка__strnicmp — толькоlibraryhint: аргумент12/адрес/zeroresult доказаны, полныйcase/locale/NULLbehaviorcallee1017bd92 отдельнонеразобран. AL43h означаетliteral C; физическаямодельматериала ивыборконкретногозвука этимlookupнезакрыты.')

e = json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
lines = ['# Загрузка общих и пользовательских ресурсов мира', '',
    'Статический разбор пяти original server entries. SHA256: `'+e['sha256']+'`.',
    'Игра не запускалась. Имена функций описательные; C является сохранённой декомпиляцией.',
    'Связь запуска мира: [world-bootstrap](../server-world-bootstrap/contract.md).', '',
    '## Карточки', '']
for f in functions:
    lines += ['## '+f['address']+' — '+f['proposed_name'], '', f['summary_ru'], '']
    for paragraph in f['details_ru']:
        lines += [paragraph, '']
lines += ['## Immediate resource calls в физическом порядке кода', '',
    'Ветвления описаны выше; таблица не означает выполнение всех строк на одном пути.', '',
    '| Call VA | Callee | Имя |', '|---|---|---|']
for r in e['resource_calls']:
    lines.append('| '+r['call_va']+' | '+r['callee']+' | `'+r['name']+'` |')
lines += ['', '## Native sound pointer tables', '']
for t in e['sound_tables']:
    lines += ['### '+t['address']+' — '+str(t['count'])+' записей', '',
        '| Index | String VA | Имя |', '|---|---|---|']
    for r in t['items']:
        lines.append('| '+str(r['index'])+' | '+r['pointer']+' | `'+r['name']+'` |')
    lines.append('')
lines += ['## Открытые зависимости', '',
    'Полный spread parser100d08f0 использует тот же tokenizer, но остаётся отдельной pending функцией. '
    'Байтовые проверки доказывают локальные ветви, не корректность всех input файлов. '
    'Не установлен полный lifecycle engine string pool/precaches и все косвенные callers map-specific варианта. '
    'Реальные ресурсы, воспроизведение звуков и malformed-input runtime здесь не проверялись.', '',
    'Проверка: `python analysis/server-resource-precache/verify.py` (read-only PE).', '']
(OUT/'notes.json').write_text(json.dumps(dict(functions=functions),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
(OUT/'contract.md').write_text('\n'.join(lines),encoding='utf8')
print('wrote',len(functions),'cards')
