from pathlib import Path
import json
P=Path('analysis/server-unlock-settings');E=json.loads((P/'evidence.json').read_text(encoding='utf8'))
common_reader=[
'Загружает scriptsettings.dat через engine LoadFileForMe (slot 95, global 102230c4), передавая указатель на локальный размер. Размер далее не используется: разбор ограничен NUL, а не количеством байтов. Псевдокод ошибочно показывает лишний cookie-аргумент: native call имеет два аргумента.',
'Токенизация 101743ff(buffer, "\\n"), затем 101743ff(NULL, "\\n"). ASM-only core 101893e6 строит bitmap разделителей, пропускает повторные LF, заменяет найденный разделитель NUL и сохраняет продолжение. Поэтому ordinal начинается с 1 и считает непустые LF-токены, а не физические строки; CR, пробелы и регистр не нормализуются. Одинокий CR между LF остаётся непустым токеном.',
'Ровно 32 значения mask: отдельные степени двойки, включая signed INT_MIN; совмещённые биты не обрабатываются как набор. Native selector trees всех четырёх функций независимо воспроизведены из ASM в evidence.selection_paths (128 путей); полная таблица ordinal и строк находится в evidence.tokens и contract.md.',
'На выбранном ordinal вызывает case-sensitive substring helper 1013f5f0 сначала для false_token, затем для true_token. Совпадение false имеет приоритет, даже если строка содержит оба токена. Не требуется равенство всей строки: префикс/суффикс допустимы. Если ни одна строка не распознана, продолжает сканирование, затем возвращает false.',
'Любой обычный выход после успешного LoadFileForMe освобождает исходный указатель через FreeFile (slot 96, global 102230c8); возвращаемый указатель tokenizer не передаётся FreeFile. На load failure FreeFile не вызывается. Ни player-полей, ни постоянного кэша состояния эти тела не читают/не пишут.',
'Результат определяется только AL (0/1), старшие 24 бита EAX не обнуляются; cookie helper 1013dbb3 на обычной ветви сохраняет EAX. Полного DWORD bool ABI по этим телам нет. Исключения/SEH unwind вне обычных возвратов отдельно не восстановлены.'
]
common_writer=[
'GetGameDir (engine slot 99/global 102230d4) вызывается дважды; в каждом вызове единственный argument — output pointer, но адреса буферов разные ([ebp-210h] и [ebp-310h]). Два stack buffer по 256 байт получают суффиксы /scriptsettings.dat (20 скопированных байт с NUL и padding) и /alt.dat (9 байт). Поиск NUL и дописывание не имеют локальной проверки оставшейся ёмкости.',
'Создаёт input stream через 1002f8d0(path,1,40h,1) и output через 10049b60(altPath,2,40h,1), затем проверяет оба iostate: byte [stream + virtual_base_offset + 0ch] & 6. Ошибка открытия ведёт к деструкторам без remove/rename. Проверка mask идёт уже после открытия обоих stream; отсутствие побочных эффектов у alt.dat на invalid mask не гарантируется.',
'Читает 1002f550(input,stdstring), возвращающий stream pointer в EAX; delimiter получается как widen(10) через locale. Native core 1002f350 и общий эпилог 1002f49f (JMP в том же кадре, не обычный отдельный вызов) сохраняют пустые строки. Успешно извлечённый delimiter считается извлечением даже при пустой строке. EOF после данных даёт bit1 без bit2: последняя строка без LF обрабатывается; EOF без данных даёт также bit2 и останавливает цикл.',
'Ordinal начинается с 1 и увеличивается после каждой обработанной getline-строки. Цикл проверяет только input iostate & 6; output state после каждой записи отдельно не проверяется. EOF и иная input failure проходят один и тот же путь закрытия/замены, если helper нормально вернулся. Длина файла и отсутствие требуемого ordinal не диагностируются, новые недостающие строки не добавляются.',
'Перед выдачей любой строки копирует её NUL-байты в stack buffer 256 байт; лишь после копирования проверяет unsigned stdstring.length >= 256 и вызывает 1013dd48 при нарушении. Это запоздалый guard, в том числе для заменяемой строки. Затем ставит buffer[length]=0. Для прочих строк C-string writer 100493b0 печатает buffer и отдельный LF: embedded NUL обрезает вывод, newline всегда добавляется. Физическое text-mode CRLF преобразование CRT здесь не объявлено полностью восстановленным.',
'На выбранном ordinal исходное содержимое не проверяется. Только младший байт writeFalseToken: ненулевой выбирает false_token + LF, нулевой выбирает true_token + LF. Это обратная полярность к bool результату reader. Все 32 пары writer буквальны и побайтно равны соответствующим reader токенам с добавленным LF.',
'Обычное окончание: 100f9d20(input close), 100f9db0(output close), 10174706(sourcePath), и только при EAX==0 — 10174843(altPath,sourcePath). Native backend подтверждает file operations: 10174706 после path-conversion вызывает10189514→import DeleteFileW; 10174843 вызывает10189547→import MoveFileExW(old,new,2). Обе backend функции дают0 при Win32 success и-1 при failure, вызывая GetLastError/10175f73 на ошибке. Конвертер пути101724fe и полная errno-логика отдельно не раскрыты. Результат rename игнорируется, rollback/повторного открытия/явного error result нет. После успешного удаления и неудачного переименования локальный код не восстанавливает исходный файл.',
'После нормального цикла вызывает output destructor 1004a510, освобождает string heap при capacity>=16 через 1002f290(pointer,capacity+1), затем input destructor 100308f0. Close helpers могут устанавливать failbit/бросать ios failure по exception mask; здесь описаны обычные возвраты, SEH cleanup и долговечность записи не доказаны. Возвращаемый success bool не формируется; входной ECX не используется для состояния player.'
]
rows=[]
def add(addr,name,summary,details,support):
 paths=[f'decompiled/server/partial-pass/functions/0x{addr}.c',f'analysis/server-unlock-settings/{addr}-0.asm','analysis/server-unlock-settings/evidence.json','analysis/server-unlock-settings/contract.md']
 for a in support:
  paths += [f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-unlock-settings/{a}-0.asm']
 if addr in ['100e1690','100f2ed0']:paths += [f'analysis/server-unlock-settings/{a}-native.asm' for a in ['10174706','10174843','10189514','10189547']]
 if addr in ['100dd000','100e0db0']:paths += ['analysis/server-unlock-settings/101743ff-native.asm','analysis/server-unlock-settings/101893e6-native.asm']
 rows.append(dict(module='server',address='0x'+addr,proposed_name=name,subsystem='saving',summary_ru=summary,confidence='high',evidence_paths=paths,details_ru=details))
add('100dd000','CheckEndingOrUnlockable','Читает одно состояние разблокировки или специальные ordinal 47/48 из scriptsettings.dat; возвращает AL.',[
'ABI: stack(mask:int32, flag47:BYTE-in-DWORD, flag48:BYTE-in-DWORD), RET 0ch. Incoming ECX не используется. Название опирается на diagnostic CheckingEndingOrUnlockables; принадлежность player определяется callers, а не обращениями к this в этом теле.',
*common_reader,
'Load failure: AlertMessage(type1, "CheckingEndingOrUnlockables:: File failed, type was %i!\\n",mask), затем XOR AL,AL (100dd324). EOF/false идут через FreeFile 100dd31a, true через 100dd953 и MOV AL,1.',
'Если flag47 или flag48 ненулевой, default ordinal=666 decimal (29ah); распознанный mask заменяет его своим ordinal. Неизвестный mask без flags немедленно освобождает файл и возвращает false; с flags продолжает сканирование.',
'Внутри каждого ordinal порядок проверок: flag47 && ordinal==47, затем flag48 && ordinal==48, затем обычный mask ordinal. Каждая распознанная false/true строка сразу завершает функцию: это не AND/OR агрегирование состояний. Нераспознанный специальный token допускает дальнейшую проверку следующего состояния; при двух flags 47 обычно встречается раньше 48.',
'Подтверждённый consumer 100e0a80 требует AL!=0 для weapon_famas(mask40h, ordinal39 decimal) и weapon_axe(mask80000h, ordinal70 decimal). Остальным masks и двум special flags здесь не присваиваются названия оружия/концовок без caller evidence.'
],['100b4aa0','1013dbb3','1013f5f0','100e0a80'])
add('100e0db0','GlobalCheckEndingOrUnlockable','Глобальная версия читает одну точную mask без дополнительных ordinal 47/48.',[
'ABI: cdecl stack(mask:int32), RET без pop arguments; AL0/AL1. Incoming ECX не используется. Diagnostic GlobalCheckingEndingOrUnlockables отличает эту копию от 100dd000.',
*common_reader,
'Дополнительных flag47/48 нет. Неизвестный mask возвращает false после FreeFile; обе таблицы (mask→ordinal и false/true literals) совпадают с обычной ветвью 100dd000.',
'Load failure вызывает AlertMessage(type1, diagnostic,mask) и прыгает именно в100e1657 (XOR AL,AL), не в100e1659. False/EOF сначала FreeFile100e164d, true FreeFile100e1675 затемMOV AL,1. Поэтому неопределённый результат diagnostic не просачивается в AL.'
],['100b4aa0','1013dbb3','1013f5f0'])
add('100e1690','GlobalWriteEndingOrUnlockable','Перезаписывает один ordinal настройки через alt.dat; bool успеха не возвращает.',[
'ABI: cdecl stack(mask:int32, writeFalseToken:BYTE-in-DWORD), RET без pop arguments. Заданный mask должен быть ровно одним из32 значений, не объединением битов.',
*common_writer,
'Неизвестный mask после открытия stream идёт в100e205d/100e2068: output destructor, input destructor. Нет попытки исправить/инициализировать неизвестный mask или дополнить файл.',
'Native branch addresses: selection100e17e7→100e1a38; read loop100e1a70, target token dispatch100e1ac6; ordinary copy100e1f6e; close100e1ff6; remove100e2013; conditional rename100e202d. Getline count и reader strtok count расходятся при пустых LF-строках.'
],['100b4aa0','1013dbb3','1002f550','1002f350','1002f49f','1002f8d0','10049b60','100493b0','100f9d20','100f9db0','1004a510','100308f0'])
add('100f2ed0','WriteEndingOrUnlockable','Перезаписывает mask и, при flags, специальные строки 47/48; сохранение не транзакционное.',[
'ABI: stack(mask:int32, writeFalseToken:BYTE-in-DWORD, flag47:BYTE-in-DWORD, flag48:BYTE-in-DWORD), RET10h. Incoming ECX не используется; byte mode читается один раз после первого успешного getline.',
*common_writer,
'Flag47/48 ненулевой задаёт default ordinal666 decimal, затем известный mask заменяет ordinal своим значением. Неизвестный mask без flags идёт к деструкторам100f3285/100f3290. Со special flag может писать без известного mask.',
'На каждой строке precedence: сначала обычный mask ordinal, затем flag47/ordinal47, затем flag48/ordinal48, затем копия исходной строки. В отличие от reader, запись не останавливается после первого выбранного ordinal: известный mask и обе flags могут заменить до трёх строк за один проход. Полярность writeFalseToken общая для всех.',
'При неизвестном mask с flags target остаётся666. Если файл достигает строки666, попадает в обычный dispatch, не находит mask и переходит100f393a без вывода этой строки. Это конкретная локальная ветвь, не гипотеза о содержимом установленного файла. При коротком файле missing47/48 не дописываются.',
'Native адреса: selection100f303b→100f32c5, loop100f3300, special47 dispatch100f3807 и special48 100f3871; ordinary copy100f38d4; close100f3966; remove100f3983; rename100f399d. Обычный return100f32b6 очищает16 байт стека.'
],['100b4aa0','1013dbb3','1002f550','1002f350','1002f49f','1002f8d0','10049b60','100493b0','100f9d20','100f9db0','1004a510','100308f0'])
(P/'notes.json').write_text(json.dumps({'functions':rows},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
intro='''# Native scriptsettings: unlock readers и перезапись

Статический разбор оригинального server hl.dll. SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. DLL и игровые файлы не запускались/не изменялись; содержимое установленного scriptsettings.dat не читалось. Четыре новые REVIEW — полные локальные тела, 14 сохранённых C и шесть ASM-only CRT body служат поддержкой, не новыми карточками. Evidence и reproduction: [capture.py](capture.py), [verify.py](verify.py), [evidence.json](evidence.json), [notes.json](notes.json).

Входной «mask» — exact selector одной степени двойки, не комбинация unlock bits. Все 32 selector paths каждой функции проверены ограниченным symbolic replay CMP/JG/JE/JNE/MOV/LEA из byte-verified ASM; это не исполнение target. Значения ordinal в таблице десятичные, адреса/маски шестнадцатеричные. False/true относятся строго к AL reader; writeFalseToken имеет обратную полярность (0 пишет true, ненулевой BYTE пишет false).

Чтение и сохранение не являются взаимно обратными для произвольного файла: reader пропускает пустые LF-токены, writer сохраняет пустые getline-строки. Reader проверяет подстроки, writer заменяет строку целиком. Только локальные тела исследованы полностью; весь unlock gameplay, криптографическая защита, надёжность записи и Steam/cloud синхронизация не заявляются.

## Словарь токенов

Каждая запись `evidence.tokens` содержит также writer addresses и raw strings. Reader literals NUL-terminated; writer literals равны им плюс LF. В Markdown таблице backticks сохраняют `%`, `&`, `!`, `*` буквально.

| Mask / специальный flag | Ordinal decimal | False token | True token | Reader false / true VA |
|---|---:|---|---|---|
'''
for t in E['tokens']:
 intro+=f"| `{t.get('mask', 'flag'+str(t.get('special_flag_ordinal_decimal')))}` | {t['ordinal_decimal']} | `{t['false_token']}` | `{t['true_token']}` | `{t['false_address']}` / `{t['true_address']}` |\n"
intro+='\n## Локальные контракты\n'
for n in rows:
 intro+=f"\n### {n['address']} — {n['proposed_name']}\n\n{n['summary_ru']}\n\n"+'\n\n'.join(n['details_ru'])+'\n'
intro+='''
## Оставшиеся границы

- В этих четырёх телах нет идентификатора игрока/Steam, player-field storage, сообщений клиенту или файловой блокировки. Четыре Use для одежды, coop stats, титров и итоговой статистики, включая special47/48, разобраны в [unlock callers](../server-unlock-callers/contract.md). Остаются16 других владельцев прямых ссылок, косвенные callers и полные producers playerstats. Подтверждённые Famas/Axe gates: [equipment contract](../server-player-equipment/contract.md).
- Engine LoadFileForMe использует относительное имя; writer строит путь GetGameDir. Совпадение физического файла во всех engine search-path конфигурациях здесь не доказано.
- CRT constructors, close и output helpers сохранены как support; полный codecvt/text-mode/sharing, errno, path-conversion/errno helper и SEH unwind — отдельные зависимости. По native writer code можно доказать порядок вызовов и отсутствие проверки, но не гарантию успешного/атомарного сохранения.
- `1002f49f` — сохранённая Ghidra identity общего эпилога getline; native1002f350 переходит туда JMP с тем же EBP. Не воспроизводить её как обычную самостоятельную C-функцию с нулём аргументов. Аналогично tokenizer101743ff использует contextgetter1017e87d+1ch; конкретная модель хранения context отдельно не раскрыта.
- Ни один код исправления, тест записи или восстановление игрового файла не выполнялись. Проверка пакета касается исходных байтов/контрактов, а не runtime или визуального результата.
'''
(P/'contract.md').write_text(intro,encoding='utf8')
