from pathlib import Path
import json
O=Path(__file__).resolve().parent
D={
'100fc430':('CHalfLifeRules_VisibilityModePredicateFalse','Постоянно запрещает ветку сетевой политики в FVisible для конкретной таблицы одиночных правил.',[
'Полное native тело: XOR EAX,EAX; RET (3 bytes). Stack аргументы и ECX не читаются, память и flags не записываются кроме арифметических flags от XOR. Возвращает полный EAX=0, не только AL. Условия cvar, deathmatch, состояние игрока или глобальные переменные внутри отсутствуют.',
'Raw vtable CHalfLifeRules101de3b0 содержит100fc430 в offset20. Constructor100fc0f0 устанавливает эту таблицу, RTTI COL указывает на CHalfLifeRules. Это доказывает конкретный dispatch; не переносим сюда ожидаемый SDK номер IsMultiplayer/IsCoOp, поскольку native набор слотов отличается.',
'FVisible100882c0 вызывает rules.virtual20 только при global10222ee4!=NULL. Возврат0 пропускает целиком target.virtuald0 и проверку target.pev.fuser3==3. Следующие water/TraceLine проверки остаются. Поэтому результат данного predicate не равен финальному результату видимости и не отключает проверку препятствий. Другие возможные rules таблицы и подмена global требуют отдельного подтверждения.']),
'100c90b0':('CHalfLifeMultiplay_VisibilityModePredicateTrue','Постоянно включает проверку целевого predicate и fuser3 в FVisible для конкретной сетевой таблицы.',[
'Полное native тело: MOV EAX,1; RET (6 bytes). ECX и stack не читаются, памяти и arithmetic flags не меняет. Full EAX=1 независимо от объекта и globals. Нет локальной проверки кооперативного режима, количества клиентов или живости цели.',
'CHalfLifeMultiplay vtable101d608c offset20=100c90b0, constructor100c5180 устанавливает эту таблицу; класс подтверждён RTTI. Existing factory100af710 выбирает одну из двух конкретных rules реализаций; сохранение результата в10222ee4 принадлежит world initializer10120eb0. Старый контракт rules-bootstrap сохраняет точную factory ветку, включая NaN deathmatch; имя класса само по себе не доказывает активный runtime режим.',
'При таком rules dispatch FVisible дополнительно вызывает target.virtuald0 и, если возвращён full EAX!=0, отказывает при ordered float32 fuser3==3.0. Equality+parity проверка пропускает NaN. Debug byte управляет diagnostic этой ветки, но не отказом. Сам100c90b0 не читает fuser3, не задаёт timers и не вызывает trace.']),
'100135b0':('CBasePlayer_VisibilityTargetPredicateTrue','Возвращает единицу в target predicate конкретной таблицы игрока, используемом FVisible.',[
'Полное native тело: MOV EAX,1; RET (6 bytes). ECX, stack и память не используются; полный EAX нормализован в1. Никаких alive/deadflag/fuser3/lifetime проверок. Метод можно вызвать через vtable, но тело не разыменовывает this.',
'CBasePlayer factory100125e0 устанавливает vptr101a4da8; raw slot+d0 равен100135b0, RTTI подтверждает CBasePlayer. Поэтому для такого native player и CHalfLifeMultiplay slot20 обе проверки dispatch истинны: локальное исключение FVisible срабатывает ровно при ordered pev.fuser3==3. Это не утверждение о любом derived player или других классах с override; по этому телу нельзя выводить политику для монстров.']),
'100f1860':('Player_StartRevivedAnimation','Запускает revived/crouch_revived, выставляет fuser3=3 и два срока завершения анимации.',[
'Полное тело100f1860..100f193c, ECX=P, stack аргументов нет. Обычная ветвь plain RET, ветвь смены sequence заканчивается E9 tail JMP1000e9e0, а не terminal CALL из метаданных Ghidra. Определённого status EAX нет. Сначала BYTE P+50c:=0 и DWORD P+2654:=0, затем ResetSequenceInfo1000e9e0(P). Native PLAYER descriptor именует50c m_bWaitingToFall, type12, но конкретная запись здесь ровно BYTE; ширина descriptor не меняет ширину инструкции. Имя2654 не установлено.',
'После первого ResetSequenceInfo заново читает P.pev.flags+1a8. Mask4000 выбирает literal crouch_revived101db1d8, иначе revived101db1e8. LookupSequence1000e9b0(P,name) возвращает EAX; только точное -1 заменяется0. Прочие отрицательные и любые положительные значения локально не ограничиваются. Отсутствуют NULL/alive/health/rules guards: caller обязан передать пригодный player.',
'Если pev.sequence+12c отличается от выбранного либо DWORD P+fc==0, пишет pev.frame+134=0 и перечитывает pev. Затем всегда пишет DWORD pev+130=0. Поле130 в этом пакете не получает предполагаемого имени по SDK. P+fc здесь результат уже выполненного ResetSequenceInfo: helper вычисляет sequence flags &1 и записывает его после engine/model helper, а также обновляет animtime/framerate и private sequence bookkeeping; это не snapshot значения до первого callback.',
'Native PUSH EDI сохраняет выбранный index на stack, затем PUSH pev.edict и engine10223070 GetModelPtr (API slot74) получает один аргумент. ADD ESP,4 снимает только edict, index остаётся. PUSH EAX и CALL1000f390 фактически передают (modelHeader,index); Ghidra теряет второй аргумент. Helper cdecl возвращает duration в ST0; после ADD ESP,8 primary читает свежий globals.time, делает x87 FADD float32 time и FSTP float32 P+4f4. Нельзя заменить скрытый index аргументом engine GetModelPtr.',
'Supporting duration1000f390 возвращает ST0=0 при NULL header, signed index>=numseq(header+a4) либо signed numframes<=1. Отрицательный index отдельно не отвергается. Иначе адрес sequence=header+seqindex(header+a8)+index*b0; duration=float32(float32(numframes-1)/fps(sequence+20)), затем FLD. Нет fps zero/finite guard. Primary не проверяет возвращённую длительность: deadlines могут быть отрицательными, бесконечными или NaN при обычных masked FP exceptions.',
'После сохранения deadline пишет raw40400000 (float3.0) в актуальный P.pev.fuser3+260. Затем копирует DWORD P+4f4 в P+4fc, без повторного чтения времени. Если актуальный pev.sequence всё ещё отличается, записывает выбранный index, перечитывает pev, обнуляет frame и tail-передаёт P в ResetSequenceInfo. Если sequence уже равен, второго reset нет. Тем самым fuser3/timers устанавливаются даже при missing sequence fallback0; никакого rollback при downstream failure нет.',
'Эта процедура не восстанавливает health, не очищает deadflag и не доказывает полное оживление. Подтверждённые callsites:1007a5c9..1007a5cf загружает ECX из syringe+1f8;100f0109..100f010b в PreThink передаёт разрешённого второго player. Полные политики лечения/CPR в этих callers здесь не получают новых REVIEW. Для конкретных MP rules и target player установленный fuser3=3 блокирует FVisible даже при debug0. Срок действия этого состояния не определяется одним100f1860: другие тела пишут fuser3; автоматический reset ровно по deadline здесь отсутствует.'])
}
intro='''# Политика видимости: concrete rules, player predicate и revived state

Pass22, статический разбор оригинального hl.dll. Три новых REVIEW и одно полное уточнение existing100f1860; его прежняя карточка сохранена в prior-review.txt. Support тела не переучтены. Адреса/смещения/masks hexadecimal, обычные значения формул decimal. Игра не запускалась.

Цепь: FVisible100882c0 → global10222ee4.virtual20 → target.virtuald0 → ordered target.pev.fuser3==3. Конкретные bindings ниже закрыты raw vtables и native телами; это не renderer и не RTX.
'''
tail='''
## Отладочный byte10222e4e: точная граница отрицательного поиска

Скан всех2413568 байтов исходного PE по little-endian VA10222e4e даёт четыре совпадения: operands100882c5,10088338,1008835f,10088421. Их owning instructions в полном native100882c0 — MOV byte вDL либо CMP byte, то есть чтения. По RVA00222e4e совпадений0. Это exact byte-pattern поиск, а не полный анализ всех способов вычисления адреса.

Разобран PE relocation directory размером185640 bytes:90492 записей HIGHLOW. Значения в окрестности10222e47..10222e4f дают11 operands: указатели на10222e48 (2),10222e4c (3),10222e4d (2),10222e4e (4). Это список литералов адресов, не доказательство размера доступа либо отсутствия overlapped stores. Другие значения/вычисленные базы/indirect pointers не исключены.

Сам byte лежит в virtual zero-filled хвосте .data: RVA222e4e, raw конец220c00, virtual конец233914. Файлового byte по этому RVA нет; исходное loader значение0 следует из нулевого хвоста секции, а не из прочитанного runtime memory. Поздние indirect/bulk writes, другие модули или сохранения этим не проверены. Поэтому корректный вывод: явный непосредственный producer не найден выбранными scans, а не «флаг всегда0» или «debug недостижим».

Текстовый scan всех8000 C в partial-pass/functions на10222e4e находит только100882c0; поиск конкретной записи `+0x260)=0x40400000`/`3.0` находит100f1860. Это частичный экспорт server, не все discovered функции и не все формы выражений Ghidra. Полный сохранённый список матчей, hashes и точные размеры лежат в evidence.json; динамические/alias writers не исключаются.

При debug0 target.flags&80 не даёт отказа в100882c0: native условие объединяет flags и debug. При debug!=0 эта ветка печатает diagnostic и возвращает0. Для fuser3/water/LOS отказов debug влияет только на diagnostic. Не исправляем оригинальную асимметрию под ожидаемое поведение SDK.

## Навигация и оставшиеся границы

См. [базовые FVisible](../server-entity-damage-visibility/contract.md), [создание rules](../server-rules-bootstrap/contract.md). Native duration/animation helpers выступают support. Остались производитель/изменения debug через косвенные обращения, полная система смены всех fuser3 состояний, derived dispatch и engine TraceLine/модельные данные. Native callback ordering, widths и арифметика не означают проверку выполнения в игре.

Повторение: python analysis/server-visibility-policy/capture.py; python analysis/server-visibility-policy/write_notes.py; python analysis/server-visibility-policy/verify.py. Все операции читают PE и сохранённые C; targets не исполняются.
'''
notes=[];ct=intro
for a,(name,purpose,details) in D.items():
 ct+='\n## 0x'+a+' — '+name+'\n\n'+purpose+'\n\n'+'\n\n'.join(details)+'\n'
 notes.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='healing' if a=='100f1860'else 'world',summary_ru=purpose,confidence='high',details_ru=details,evidence_paths=['decompiled/server/partial-pass/functions/0x'+a+'.c','analysis/server-visibility-policy/'+a+'-0.asm','analysis/server-visibility-policy/evidence.json','analysis/server-visibility-policy/contract.md']+(['analysis/server-visibility-policy/prior-review.txt']if a=='100f1860'else [])))
(O/'contract.md').write_text(ct+tail,encoding='utf8');(O/'notes.json').write_text(json.dumps({'functions':notes},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
