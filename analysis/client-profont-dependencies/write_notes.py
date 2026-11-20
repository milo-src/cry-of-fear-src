"""Generate only this packet's review notes; never touch shared catalogues."""
from pathlib import Path
import json
OUT=Path(__file__).resolve().parent
CAP='decompiled/client/captures/profont-dependencies-pass04/'
COMMON=['analysis/client-profont-dependencies/contract.md','analysis/client-profont-dependencies/evidence.json','analysis/client-profont-dependencies/layout-evidence.json']
rows=[]
def add(a,name,sub,summary,details,c,extra=(),confidence='high'):
 rows.append(dict(module='client',address='0x'+a,proposed_name=name,subsystem=sub,summary_ru=summary,confidence=confidence,details_ru=details,evidence_paths=COMMON+[CAP+c,'analysis/client-profont-dependencies/'+a+'-0.asm']+list(extra)))
add('1006cb10','HUD_LookupQuotedKeyInConfig','hud',
 'Читает config.cfg, находит строку bind с заданной командой и возвращает имя клавиши в верхнем регистре.',[
 'Один stack аргумент команды, RET4; входной ECX не используется. GetGameDirectory через engine slot71/101b2724 вызывается без аргументов; Ghidra ошибочно приписывает ему cookie. Каждый вызов строит <game_dir>/config.cfg и заново проходит stream-like чтение 10026090/10020990.',
 'Кандидат должен содержать case-sensitive substring bind и substring команды. Нет проверки начала строки, токенов, комментариев или точного равенства команды. Неподходящие строки пропускаются; разбор кавычек начинается с индекса1.',
 'После первой кавычки байты проходят MOVSX→toupper100fb47b до следующей кавычки; результат и NUL записываются в shared10542a88. Успех EAX=10542a88, ошибка/исчерпание EAX=0 после очистки stream/string. Пустой quoted key может вернуть nonNULL пустую строку. При найденном, но незавершённом quoted кандидате позднейшие строки не ищутся.',
 'Native return доказан ASM вопреки void в C. Общий буфер перезаписывается; это чтение сохранённого config, не запрос активной engine binding table. ProFont при первом nonNULL вызывает lookup второй раз и не проверяет второй результат.',
 'Копирование directory и извлечённой строки идёт до NUL; проверка line size>=256 выполняется после копирования. Конечный output-index проверяется перед NUL. Полную безопасность malformed input, locale toupper и полную реализацию stream helpers этот разбор не доказывает.'
 ],'s01-000-pseudocode.c',['analysis/client-profont-dependencies/provider-01.json','analysis/client-profont-dependencies/provider-02.json','analysis/graphics/music-client-contract.md'])
add('1000c900','CRT_SprintfCommonOptionsWrapper','abi',
 'Форматирует вариативные аргументы через общий printf backend без ограничения размером destination.',[
 'cdecl(dest,format,...); va_list адрес EBP+10. Native stack для100efb51: optionsLow|1,optionsHigh,dest,0xffffffff,format,locale0,va_list; caller cleanup28bytes. Пять предварительно pushed аргументов не принадлежат accessor10006e40, вопреки распределению Ghidra.',
 'Backend идентифицирован как __stdio_common_vsprintf. Его неотрицательный EAX возвращается как есть, любой отрицательный заменяется на -1. Размер SIZE_MAX не задаёт предел local128 ProFont, и capacity вызывающего буфера не проверяется.',
 'Полные locale/format-error internals100efb51 не разобраны; карточка описывает доказанный wrapper ABI и отсутствие bounded size, а не все свойства CRT.'
 ],'s01-002-pseudocode.c',['analysis/client-profont-dependencies/provider-01.json','analysis/client-profont-dependencies/provider-02.json'])
add('100fe800','CRT_Strncpy_CopyAndZeroPad','abi',
 'Копирует до count байтов строки и дополняет остаток нулями; при усечении не добавляет лишний NUL.',[
 'cdecl(dest,source,count); count0 сразу возвращает исходный dest. При NUL до count остаток destination заполняется нулями; без NUL в первых count байтах записывается ровно count и дополнительного терминатора нет.',
 'Проверены scalar/alignment и DWORD zero-detection ветви, EAX=исходный dest на обычных возвратах. Ошибочно широкие scalar dereference в Ghidra сверены с byte-load ASM. Aligned word-load пути могут читать DWORD, поэтому совпадение результирующих байтов не означает побайтный footprint доступа.',
 'ProFont strncpy256 не гарантирует termination для длинной строки. Invalid/overlapping memory и произвольная доступность source не гарантируются; функция не знает реальный размер destination.'
 ],'s01-004-pseudocode.c',['analysis/client-profont-dependencies/provider-01.json','analysis/client-profont-dependencies/provider-02.json'])
add('10006e40','CRT_GetCommonPrintfOptionsAddress','abi',
 'Возвращает адрес общих опций printf.',[
 'Точное тело MOV EAX,10193b70; RET, шесть байтов. Не принимает и не очищает stack аргументы; не форматирует строку.',
 '1000c900 читает два DWORD по этому адресу и OR1 в младшем. PE initial bytes сохранены, runtime writers этих опций не исследованы.'
 ],'s02-009-pseudocode.c',['analysis/client-profont-dependencies/provider-02.json'])
add('10098930','VGui_SetupOrResetGlobalViewport','hud',
 'Настраивает корневую VGUI панель и создаёт либо сбрасывает глобальный viewport.',[
 'Получает parent100988e0, задаёт цвет и BorderLayout. Если global101b2600 nonNULL, tail JMP100a91b0 с ECX=viewport; новый объект не создаётся.',
 'Иначе allocator100a4dc0(14a8), parent virtual+1c/+18 supplies height/width, ECX=allocation и stack(0,0,width,height) в100a4010; EAX сохраняется вglobal101b2600, virtual+40 получает parent. При allocationNULL код сохраняетNULL и всё равно dereference/call: это не graceful success.',
 'Actual entry10098930/body169 подтверждён info и ASM; первоначальный selector10098980 является interior branch. Полный parent/provider lifetime и allocator failure semantics вне границы.'
 ],'s02-007-pseudocode.c',['analysis/client-profont-dependencies/provider-02.json','analysis/client-profont-dependencies/provider-03.json'])
add('100a4010','TeamFortressViewport_ConstructOwnedHudPanels','hud',
 'Создаёт viewport, его меню и CHUDControl, связывая HUD child142c с владельцем.',[
 'Native thiscall(this,x,y,width,height), RET16, EAX=this. После base Panel constructor устанавливает TeamFortressViewport vtable, scheme manager, global101b2600=this; обнуляет поля панелей, инициализирует input handler и command/spectator menus.',
 'Точная ветвь HUD: child142c сначала0, allocation104c→ECX в100362b0 CHUDControl, EAX вthis+142c, затем child virtual+40(this viewport). Native ABI восстанавливает потерянный в C parent аргумент. NULL ветвь не защищена перед virtual dereference.',
 'CHUDControl constructor создаёт Label+3a8 и font+f54, заканчивается10038df0; raw vtable101452cc связывает solve1003bf20, paint1003bc10 и background1003bf00. Paint вызывает новый1003b0c0, где реально читается ProFont+d4.',
 'Функция также строит другие menu widgets; их индивидуальные gameplay роли, полная схема деструктора и финальное внешнее VGUI rendering этим обзором не объявляются восстановленными.'
 ],'s02-005-pseudocode.c',['analysis/client-profont-dependencies/provider-02.json','decompiled/client/captures/hud-geometry/000-pseudocode.c','analysis/client-profont-dependencies/100362b0-0.asm'])
add('1003b0c0','CHUDControl_UpdateNotificationPaintState','hud',
 'Обновляет состояния баннера, центрального сообщения и ProFont и передаёт текст и цвет HUD labels.',[
 'Вызывается из native paint1003bc10. До ProFont обрабатывает отдельные banner+848 и center buffer+e98; их timing250/125 и hold3 не совпадает с ProFont500/500 и hold4.',
 'ProFont gate: int(cl_subtitles)==0 возвращает до обновления primary+d4, без explicit очистки старого label. При nonempty primary длина<=1 также даёт early return. Current time берётся101b26e0; writer/семантика double1018d1b8 здесь не закрыты.',
 'Float A=f18, phase=f1c, hold=f1d, deadline=f20. Hold && T>deadline: WORD[f1c]=1 (phase1,hold0), A0,c0=0,f28=strlen(e98). Phase0/hold0: при A>0 вычитает double1018d1b8*500; только A<0 запускает hold, A0,deadline=float(T+4). Phase1/hold0: при A<255 прибавляет тот же множитель; только A>255 сбрасывает phase,A255,primary NUL. Строгие пороги нельзя заменять на <=/>=; exact0/255 может не переходить дальше.',
 'Style+bc задаёт RGB:0/3=(255,255,0),1=(0,128,255),2/6=(255,0,0),4=(0,255,0),5=(200,200,200); другие значения пропускают color setter. A через cvttss2si передаётся четвёртым параметром parent drawSetTextColor и Label setFgColor.',
 'Primary text идёт Label+3a8: setSize(screenWidth,64), virtual+200(label,text) с двумя stack args и caller cleanup8, setPos(0,screenHeight-3*101b2bd0), virtual+21c(4), foreground color. Parent drawSetTextPos не равен label position; прямого drawPrintText primary в этой ветви нет.',
 'При primary empty очищаются c4/c8/cc/d0 и style=5; secondary+1d5 очищается только при длине>1. Buffer capacities, полная Label ABI и external VGUI blend, все secondary producers и frame scheduling остаются отдельными зависимостями. Точные ветви/NaN comparisons сохранены в ASM, runtime parity не заявлена.'
 ],'s03-000-pseudocode.c',['analysis/client-profont-dependencies/provider-03.json','decompiled/client/captures/vgui-menu-actions/027-pseudocode.c','analysis/client-profont-dependencies/1003bc10-0.asm'],confidence='high')
add('10038df0','CHUDControl_ResetLabelsAndNotificationState','hud',
 'Сбрасывает HUD controls, player indicators, chat labels и состояние уведомлений после создания панели.',[
 'Native ECX method вызывается в конце100362b0. Управляет видимостью группы32 panels, инициализирует65 player/time entries и4парных индикатора; очищает5chat labels, другие controls и вызывает1003bbd0(0). Все связанные offsets/virtual calls сохранены, часть gameplay названий не установлена.',
 'ProFont reset: primary+d4=NUL, WORD+1d4=0 включает secondary+1d5, c0..d0=0; A+f18=0, WORD+f1c=0, deadline+f20=0,f24/f28=0. Label+3a8 получает пустую строку. Style+bc сначала5, затем0: итог0.',
 'Отдельно очищает center message+e98 и f2c/f30/f34/f38/f3c; нельзя смешивать его поля с ProFont. Это reset состояния, не доказательство освобождения или пересоздания объектов.'
 ],'s03-002-pseudocode.c',['analysis/client-profont-dependencies/provider-03.json','decompiled/client/captures/hud-geometry/000-pseudocode.c'])
(OUT/'notes.json').write_text(json.dumps(dict(functions=rows),ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
add('1003bf00','Imported_vgui_Panel_paintBackground_1003bf00','menu',
 'Подтверждённый thunk пересылает вызов в импорт vgui::Panel::paintBackground.',[
 'Уточнение существующей selector-only карточки: procedure_info подтверждает actual entry1003bf00 и body5bytes. Native JMP100b3704; там FF25[1013a958], PE import vgui.dll!?paintBackground@Panel@vgui@@MAEXXZ.',
 'CHUDControl vtable101452cc+1bc ссылается на этот thunk. ECX/stack пересылаются без локальной обработки. Ghidra показывает перенаправленный pseudo target; это не самостоятельная рекурсивная реализация. Поведение external paintBackground отдельно не восстановлено.'
 ],'s03-004-pseudocode.c',['analysis/client-profont-dependencies/provider-03.json','decompiled/client/captures/vgui-menu-actions/026-pseudocode.c'])
(OUT/'notes-support-update.json').write_text(json.dumps(dict(functions=[rows[-1]]),ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
print('Wrote 8 new reviews and 1 explicit baseline refinement')
