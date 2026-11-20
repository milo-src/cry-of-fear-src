# Sentence lifecycle, suit emitters и radio_sentence — статический контракт

Оригинал `hl.dll`, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Ни DLL, ни игра не запускались. Девять новых карточек ниже имеют сохранённый C и проверенный по PE машинный диапазон; comparator рассмотрен только как ASM support, без выдуманной C-карточки. `capture.py` повторяет извлечение, `verify.py` независимо проверяет evidence. Все смещения и маски шестнадцатеричные; обычные количества, pitch и громкость десятичные.

## Владение и границы

Таблицы names/groups и расход случайного pool разобраны в [sentence-groups](../server-sentence-groups/contract.md). Здесь закрываются их внешние sound callers, класс `CRadio`, фактический comparator и граница lifecycle. Сетевой `PlaySFX` — отдельный механизм: эти wrappers используют engine EmitSound и HudText/RadioIcon, а не подменяют их PlaySFX.

`radio_sentence` export `101004c0` → JMP `100fc7d0` → allocation 0xdc → vtable `101dec68`, RTTI `.?AVCRadio@@`. Таблица связывает `+2c=100fe990` Spawn, `+30=100fd7f0` Precache, `+e8=101002c0` Use. Фабрика не вызывает Spawn. Словарь полей взят из native ENTVARS `1021aae0`, а названия engine API — из доказанной копии 144 DWORD в `10222f48` функцией `100b4aa0` и соответствующих позиций `enginefuncs_t`; это не перенос смещений SDK entvars на оригинал.

## Ready и выбор файла: что доказано

Прямой operand scan полного статического `.text` listing на `1022c8c4`, `10222f0c`, `10226489` сохранён в `evidence.json:direct_operand_scan`. Сами строки содержат raw bytes, а известные owners имеют полные или явно ограниченные ASM captures. Это поиск буквальных адресов, не доказательство отсутствия косвенного writer, bulk memset/copy или внешней записи.

Для ready `1022c8c4` найден один прямой writer: `100fe2a9` устанавливает DWORD 1 в `100fdf70` после FreeFile. Прямого store 0 среди выбранных буквальных ссылок нет. Все остальные прямые ссылки — проверки готовности в loader, group lookup, shuffle/select/play/stop. Loader при ready!=0 сразу заканчивает; при LoadFileForMe==NULL оставляет ready=0, разрешая следующий вызов; успешный пустой файл тоже доводит ready до1. Обнуление массивов выполняется до загрузки, но не является сбросом ready. Межкартовый reset по этим данным не доказан.

Mode `10222f0c` непосредственно читает loader `100fdf70` при выборе sentence-файла; второй обнаруженный прямой reader — условие по `100b7762` в другой функции, не разобранной здесь. Writer `1012180d` находится в `CWorld::Spawn 101217c0`: он записывает результат поиска `aom_` в mapname **после** virtual Precache → `10120eb0` → `100fdf70`. Поэтому загрузчик видит предшествующее значение mode, а не свежий результат для текущей карты. Если ready уже1, новый mode сам по себе не вызывает перезагрузку. Полный world порядок — [world-bootstrap](../server-world-bootstrap/contract.md). Не утверждается, что flags никогда не меняются по другой косвенной цепочке.

Ready, mode, volume flag и comparator-mode лежат за raw-backed частью `.data`, в её virtual tail (`evidence.json:global_sections`). На диске нет отдельных инициализирующих DWORD этих адресов; это не наблюдение состояния после CRT/engine initialization. Для аудита runtime lifecycle нужны фактические косвенные writers/reset owners, а не добавление предположенного C++ reset.

## Comparator 1017bcbb: доказанный ASM вместо одного library label

Три смежных ограниченных диапазона: `1017bc82..1017bcbb`, `1017bcbb..1017bd04`, `1017bd04..1017bd92`, конец везде исключён. C для них в данном saved corpus нет, поэтому новых REVIEW entries нет.

`1017bcbb(s1,s2)` проверяет DWORD `10232e78`. Если он0, NULL любого аргумента вызывает `10175fa9`, записывает22 по возвращённому адресу, вызывает `1016fa52`, затем возвращает EAX=INT_MAX, **если** helper возвращается. Ни recovery, ни noreturn helper здесь не доказаны. Два nonNULL аргумента проходят tail JMP в `1017bc82`, сохраняя исходный cdecl stack.

`1017bc82` читает оба байта unsigned. Только диапазон ASCII `A..Z` преобразует прибавлением32; остальные байты, включая >=128, оставляет без изменения. Возвращает EAX=(преобразованный левый byte)-(преобразованный правый byte) при первом различии, либо0 при NUL. Таким образом ASCII case-insensitive сравнение на этой ветке доказано непосредственно; это не Unicode compare и не нормализованный -1/0/+1 результат. Внутренний worker сам NULL не проверяет.

При mode!=0 dispatcher вызывает `1017bd04(s1,s2,0)`. Этот worker отдельно проверяет оба NULL тем же error path. Затем `10150960(&localContext, thirdArg)` подготавливает контекст; table pointer читается из `*(localContext+4)+94`. Оба unsigned input bytes заменяются `table[byte]`; возвращается signed difference mapped bytes, остановка при различии или mapped-left==0. Если local flag по `EBP-4` ненулевой, в конце сбрасывается маска0x2 (бит1) у `*(localContext+0)+350`. Подробности producer `10150960`, locale/global-mode writers и содержимое runtime table не разобраны; нельзя распространить ASCII-only правило на эту ветку. Сохранённое Ghidra-имя `__stricmp` согласуется с default branch, но не подменяет этот двухветочный контракт.

## Supporting EmitSound 100fc9f0: полный локальный путь

Функция уже REVIEW до этого пакета и не дублируется в notes. ABI cdecl `(edict, channel, sample, float volume, float attenuation, flags, pitch)`, normal RET. При byte `10226489!=0` и **указателе** sample, не равном `101a8e8c`, volume сначала преобразуется float→double, умножается на точный double0.25, затем округляется до float. По `101a8e8c` лежит `player/morphine_dream.wav`; сравнение адресов, не строк. NULL sample также может пройти attenuation arithmetic и затем уйти напрямую в engine.

Если sample!=NULL и первый byte `'!'`, `100fe300(sample,scratch[32])` разрешает sentence name в engine `!decimalIndex`. Успех EAX>=0 отправляет преобразованное имя в engine EmitSound с остальными аргументами; miss вызывает AlertMessage типа2 `Unable to find %s in sentences.txt\n`. **После обеих веток** вызывается `1011a220(originalSample, edict+88)`. Значит HudText может отправляться даже при отсутствующем sentence; origin pointer получен из edict+80 entvars и origin+8. Для остальных sample, включая NULL, вызывается только engine EmitSound с исходным указателем. Cookie check не превращает остаточный EAX в надёжный bool результата.

Один прямой owner volume flag доказан ограниченным фрагментом `100ef7c1..100ef7da` в `100ef2d0`: сравнивает byte `[ESI+2278]` с global и при отличии копирует его в `10226489`. Здесь не заявлены полная логика player Think, эксклюзивность writer или человеческое название состояния только по исключённому filename.

## 0x100fc8f0 — Suit_PlayRandomGroupIndex [high]

Вызывает проигрывание случайной sentence из группы по индексу, применяя suitvolume и случайную вариацию pitch.

ABI cdecl `(edict*, int groupIndex)`, plain RET; явный стабильный return-status не формируется. CVarGetFloat `suitvolume` возвращает ST0, который немедленно сохраняется как float. До проверки громкости выполняет RandomLong(0,1); нулевой результат оставляет pitch100, ненулевой вызывает RandomLong(0,6)+98. Смысл включительности API range отделён от буквальных аргументов. Float volume расширяется в double и COMISD сравнивается с double0.05; JBE подавляет вызов при <= и unordered/NaN при обычном продолжении после FP compare. При разрешении вызывает `100fe3c0(edict,groupIndex,volume,float0.8,0,pitch)`. Никакого clamp volume или локальной проверки ready/index нет. RNG расходуется даже для выключенной/NaN громкости. Важная граница caller: нижний `100fe3c0` подавляет выбранный index0, но эта функция не исправляет его семантику.

## 0x100fc970 — Suit_PlayRandomGroupName [high]

Вызывает проигрывание случайной sentence по имени группы с suitvolume, вариацией pitch и нижним channel selector -1.

ABI cdecl `(edict*,const char *groupName)`, plain RET без собственного bool. Тот же порядок ST0→float, RandomLong(0,1), условный RandomLong(0,6)+98, затем float→double COMISD/JBE с0.05. В разрешённой ветке вызывает `100fe450(edict,groupName,volume,float0.8,0,pitch,-1)`. Именно нижний helper преобразует channel -1 в2 и выполняет group lookup; здесь имя не копируется, не проверяется на NULL и не преобразуется. Отличие от index wrapper сохраняется: нижний named player допускает выбранный index0. Никакой гарантии успешного звука из остаточного EAX нет.

## 0x100fcaf0 — Suit_PlaySample [high]

Передаёт raw sample или sentence name в общий EmitSound wrapper на канале6 с suitvolume и вариацией pitch.

ABI cdecl `(edict*,const char *sample)`. Сохраняет CVarGetFloat в float и расходует RNG до double0.05 проверки, ровно как два соседних wrappers. Разрешённая ветка: `100fc9f0(edict,6,sample,volume,float0.8,0,pitch)`. Канал6 соответствует CHAN_STATIC в pinned const.h. Здесь нет признака, что sample обязательно sentence, нет локального precache, проверки player, clamp volume или копирования string. `!` resolution, глобальное уменьшение громкости и HudText принадлежат callee. Plain RET не обещает результат проигрывания.

## 0x100fc7d0 — CRadio_GetOrCreatePrivateData [high]

Возвращает существующий private object либо выделяет минимальный CRadio объект для переданных entvars.

ABI cdecl `(entvars *pev)`, реальный результат EAX=private pointer несмотря на Ghidra void. Если pev==NULL, вызывает engine CreateEntity и при ненулевом edict использует edict+80. Затем читает pev+20c; если edict!=NULL и `[edict+7c]!=NULL`, возвращает старый pointer без class/vtable проверки. Иначе engine PvAllocEntPrivateData(edict,0xdc); ненулевой результат получает vtable101dec68 и object+4=pev. Других own stores/конструктора/Spawn здесь нет; начальное содержимое остальной allocation зависит от allocator. Failure CreateEntity оставляет pevNULL и следующий read[20c] не защищён; failure allocation делает write[4]=pev, а не безопасный возвратNULL. Не следует имитировать этот дефект как желаемый API-контракт.

## 0x101004c0 — radio_sentence_ExportThunk [high]

Экспорт radio_sentence без изменения stack передаёт управление фабрике CRadio.

Пять машинных bytes `E9 0B C3 FF FF` — tail JMP100fc7d0. Реального второго inline allocation body, который показывает Ghidra, нет. ABI/результат/failure semantics наследуются от фабрики; exportCSV и native thunk связывают имя radio_sentence с vtable-backed owner. Никакого собственного Spawn либо precache thunk не выполняет.

## 0x100fe990 — CRadio_Spawn [high]

Инициализирует radio entity как невидимый неподвижный несолидный источник после виртуального Precache.

ABI thiscall ECX=CRadio, аргументов нет, plain RET. Сначала вызывает virtual+30; по captured CRadio vtable это100fd7f0. Потом последовательно заново читает this+4 и пишет pev.solid+10c=0, pev.movetype+108=0, OR pev.effects+118 с80. Остальные flags сохраняются. Не устанавливает use callback, не выбирает получателя и не запускает звук. Последний EAX — промежуточный pev, а не оформленный статус spawn.

## 0x100fd7f0 — CRadio_Precache [high]

Передаёт непустой raw sample из pev.message в engine PrecacheSound, пропуская sentence names с префиксом '!'.

ABI thiscall ECX=CRadio, plain RET. Сначала строит pointer gpGlobals.stringbase+pev.message(+1d8), затем проверяет сам string_t!=0. Полный NUL scan без capacity; unsigned length должен быть >1, затем первый byte!='!'. Тогда вызывает10116a30(pointer); этот native tiny helper tail-jump engine slot1 PrecacheSound, сохраняя caller stack. Не загружает sentence-группы, не проверяет расширение/префикс sound/, не копирует строку. Пропускает даже односимвольный ненулевой filename. Повреждённые string_t/unterminated strings не защищены локально.

## 0x101002c0 — CRadio_Use [high]

Использует pev.message как suit sound для игрока с индексом1 и независимо отправляет ему RadioIcon из pev.netname и render/health полей.

ABI ECX=this, RET0x10: четыре stack arguments стандартного Use очищаются, но не читаются. Native C void(void) скрывает ABI. Получатель выбирается engine PEntityOfEntIndex(1), приNULL PEntityOfEntOffset(0), затем `[edict+7c]`. Ни free flag, ни player subclass, ни NULL private pointer для активных ветвей не проверяются; supplied activator/caller/useType/value игнорируются. Если message string_t!=0 и unsigned strlen>1, вызывает100fcaf0(recipient.pev.pContainingEntity,message). Параллельно netname string_t!=0 и strlen>1 разрешают MessageBegin(1,RadioIcon,0,recipientEdict), WriteString(netname), WriteCoord(pev.health+164), четыре WriteByte после CVTTSS2SI из rendercolor.x/y/z (+154/+158/+15c) и renderamt+150, MessageEnd. Health здесь поле-носитель COORD, его UI-смысл не доказан. Собственного clamp нет; CVTTSS2SI даёт truncation toward zero для представимых значений, при masked invalid NaN/overflow — integer-indefinite0x80000000 до engine WriteByte. Конечное wire narrowing задаёт engine. Регистрация100e5fc0: global10226550=RegUserMsg("RadioIcon", -1). Вызов сообщения не зависит от того, слышен ли suit sound и была ли message-ветка вообще выполнена; pev перезагружается после неё и между write callbacks.

## 0x1011a220 — Sentence_SendHudTextForEligibleClients [high]

Перебирает client slots и для каждого подходящего объекта повторяет один и тот же HudText с destination5 и NULL recipient.

ABI cdecl `(const char *text, const float *origin)`, plain RET. signed loop index1..gpGlobals.maxClients(+90), верхняя граница перечитывается после каждой итерации.10119680(index) отвергает index<=0, index>maxClients, NULL/free edict, затем возвращает private data. Ненулевой object проходит virtual+d4; только ненулевой результат допускает MessageBegin(5,global1022648c,origin,0), WriteString(text), MessageEnd. const.h называет numeric5 MSG_PAS, не MSG_PVS и не MSG_ONE. Ни index, ни найденный edict не становятся recipient аргументом, поэтому это повторные PAS sends по числу подходящих объектов, не адресная отправка каждому. Размер/действительная клиентская доставка/PAS selection остаются engine boundary; здесь нет dedup, проверки text/origin, копирования string или retention pointer. Регистрация100e5fc0 связывает global1022648c с HudText размер-1. Predicate+d4 оставлен виртуальной границей конкретного runtime receiver; смысл не угадывается по названию SDK.

## Что осталось открыто

- Косвенные ready/mode reset и lifespan DLL между картами; буквальный static scan этого не решает.
- Comparator runtime table producer10150960, mode10232e78 writers и error-helper effects10175fa9/1016fa52; default ASCII branch уже доказана.
- Клиентское значение RadioIcon health-coordinate и фактическая доставка повторных destination5 сообщений; target execution здесь отсутствует.
- `100fef60` — отдельный loader sound/materials.txt, не sentence group helper; разбирается в [resource-precache](../server-resource-precache/contract.md), не добавлен в этот набор.
