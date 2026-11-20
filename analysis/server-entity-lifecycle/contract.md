# Keypad и анимационная камера: native lifecycle и управление видом

26 новых actual C entry оригинального server DLL. [Карточки](notes.json), [доказательства](evidence.json), [сборщик](collect.py), [PE tables/imports и верификатор](enrich.py). SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Статически прочитаны все26 тел, ключевые ABI сверены с ASM; 41 C/ASM с supporting helpers,2442 строки машинных байтов сверены с PE. Ни DLL, ни игра не запускались; GetAsyncKeyState здесь только исследованный импорт, не выполненный вызов.

Справочник связей: [parent/scheduler](../server-parent-tree/contract.md), [callback dispatch](../server-alias-state/contract.md), [serializer](../server-serializer/contract.md), [target lookup](../server-targets/contract.md), [message registry](../network/usermessage-registry.md). Названия proposed_name служат навигации. Экспортированные KeypadThink/KeypadUse/CameraUse/ModelCameraUse/StartNextAnimation также имеют имена в исходном бинарном экспорте, сохранённые в C evidence.

## Индекс функций

| Семья | Адрес | Назначение |
|---|---|---|
| Keypad | 1001f1a0 | Factory, private object208h, vtable101a9748 |
| Keypad | 1001f200 | AppendDigit, numeric match, sounds/FireTargets |
| Keypad | 1001f340 | Animation event1004 sound |
| Keypad | 1001f390 | KeyValue number/movewith/skill/style |
| Keypad | 1001f4f0 | Think: frame/events, keyboard, exit/cooldown |
| Keypad | 1001fb40 | Use: player handle, AttachCam enter |
| Keypad | 1001fd20 | Caps (parent&2)|8, без parent10 |
| Keypad | 1001fd40 | Precache model/noise/noise2/noise3 |
| Keypad | 1001fdd0 /1001fe10 | Restore /Save m_pPlayer |
| Keypad | 1001fe70 | Sequence selection/reset |
| Keypad | 1001fef0 | Spawn/default1111/delete if no model |
| Camera | 10020600 | Factory368h, vtable101a9b9c |
| Camera model | 10020660 | Factory3f4h, vtable101a9e04 |
| Camera | 100206c0 | CameraUse: set player view, then lookup/use model |
| Camera/model | 100207a0 /100207b0 | Отдельные virtual50 return0 |
| Camera model | 100207c0 | KeyValue animation1..16 |
| Camera model | 10020cb0 | ModelCameraUse schedules StartNextAnimation |
| Camera/model | 10020ce0 /10020cf0 | Precache null model /selected model |
| Camera model | 10020d20 /10020d60 | Restore /Save playlist |
| Camera/model | 10020dc0 /10020e60 | Spawn camera /model |
| Camera model | 10020f20 | StartNextAnimation, duration, increment |

JMP export thunks10020000/10020fd0/10020fe0 не считаются новыми реализациями: target1001f1a0/10020600/10020660 соответственно. Соседний1001f380=CItem::ItemUse исключён: принадлежность одному диапазону не делает его методом keypad.

## Владение и dispatch

Factory принимает entvars, возвращает существующий private edict+7c или выделяет private object через engine allocator10223044. При успехе пишет vtable и object+4=pev, без явного полного конструктора. CreateEntity failure и allocator failure не имеют безопасного NULL return: соответствующие ветви читают через entvars0 либо пишут[EAX+4] приEAX0. Полный engine allocation zero-fill/lifetime не доказан этими wrappers.

Raw vtables связывают Spawn+2c,Precache+30,KeyValue+34,Save+38,Restore+3c,Caps+40; keypad animation event+11c=1001f340. У всех трёх generic Use+e8=1000e2e0, а конкретный callback записывается в object+80 при Spawn. Think+e0=1000e2a0 вызывает object+78. Эти adapters разобраны в alias-state. CameraModel и Camera virtual50 возвращают0 отдельными entries; более конкретное назначение slot здесь не утверждается.

| Поле | Keypad | CameraModel |
|---|---|---|
| object+100 | NUL-terminated набранный код | не этот layout |
| object+200 | native m_pPlayer, private pointer | не этот layout |
| object+204 | последний захваченный VK | не этот layout |
| pev+248 | integer code | не используется этим путём |
| pev+24c | pending exit | не используется этим путём |
| pev+250 | требуемая decimal length | не используется этим путём |
| pev+258/+25c | input/exit deadlines | не используются этим путём |
| object+368 | не этот layout | native m_cAnimation[33] stringIDs |
| object+3ec | не этот layout | native m_iNumAnimations |
| object+3f0 | не этот layout | native m_iCurrentAnimation |

Названия player+388=m_pAttachedCamera и player+2348=m_hCurrentCamera подтверждены native descriptors в [music-server-state-evidence](../graphics/music-server-state-evidence.json). Player+5c0/+5c4 здесь обрабатывается как вторая EHANDLE-пара; имя не выдумывается. Player+1ea0 — записываемый integer state1/0, его полный consumer контракт вне пакета.

## Keypad lifecycle

**Spawn1001fef0.** Вызывает virtual Precache. При modelID0 устанавливает SUB_Remove callback и schedule0.1. При наличии модели: SetModel, buffer[0]=0, code0 заменяется1111; requiredLength равна strlen(ltoa(code,10)); inputDeadline=time. Вызов10119fe0(this,&pev.origin) восстановлен по ASM, затем solid0 и Use callback. Нет диапазонной проверки кода и явной инициализации всех private fields.

**Use1001fb40.** Activator требуется только ненулевой; выбран первый FindClassname(0,"player"), затем проверены virtual+d0/+bc. Это не гарантия, что найденный player равен activator. После private lookup m_pPlayer сохраняется в+200; inputDeadline=time, pendingExit0; schedule0.1 и Think callback. Effects становится1. EHANDLE::Set с ECX=player+388 сохраняет keypad; полученная пара копируется в+5c0/+5c4; player+1ea0=1. Буфер и VK latch повторный Use не очищает.

**Входной AttachCam:** MessageBegin(destination1,ID-global1022664c,NULL,player.edict), затем SHORT index(resolve(player+388)), BYTE0,BYTE0 и три LONG. Значения LONG получаются отдельными вызовами player virtual+228(outVector) для X/Y/Z и CVTTSS2SI: это truncation float в integer, не WRITE_COORD. Payload16bytes. После MessageEnd выбирается start_keypad и exitDeadline=time+1. Registry доказывает имя AttachCam и variable-size registration; ID-global не является фиксированным numeric wire ID.

**Think1001f4f0, точный порядок:**

1. FrameAdvance1000eda0(0), затем animation events1000e5f0 с возвращённым float. Даже заблокированный keyboard path обновляет анимацию.
2. Если VK latch!=0 и GetAsyncKeyState(latch) high bit установлен, переход сразу к schedule0. Когда клавиша отпущена, latch обнуляется. Проверка раньше exit deadline: удержание последней цифры может задержать завершение.
3. Pending exit!=0 и time>=exitDeadline: очистить EHANDLE player+5c0 и+388 через10017740, effects0, player+1ea0=0. Послать AttachCam SHORT0,BYTE0 (3bytes), возврат без requeue. Callback+78 при этом не обнуляется.
4. Если time<inputDeadline, только schedule0.
5. Enter/Escape high bit: выбрать end_keypad,pending1,exitDeadline=time+1. Вызов продолжает проверять цифры, а не выходит сразу.
6. Независимые проверки1..9 по порядку: numpad61h..69h либо верхний ряд31h..39h. Выбрать pressN, inputDeadline=float(double(time)+0.2), exitDeadline=float(double(time)+0.33), latch=активныйVK, AppendDigit(N). Несколько одновременно удержанных цифр проходят в одном вызове: latch/cooldown внутри цикла повторно не проверяются. Цифры0 и backspace отсутствуют.
7. Обычный конец schedule virtual+8(0). Это не обещание точного frame cadence.

Импорт101a119c доказан как USER32.dll!GetAsyncKeyState по original PE descriptors/lookup/IAT. Нельзя заменять его предположением о usercmd button bits.

**AppendDigit1001f200.** Decimal conversion в4-byte stack buffer; append вместе сNUL в private+100 без bounds check. Call sites Think передают1..9, что отдельно ограничивает обычный путь; общая функция произвольный integer не валидирует. Проверка длины выполняется после копирования. Когда strlen>=requiredLength, atoi сравнивается с code. Успех проигрывает noise3 и при target/player вызывает FireTargets(target,player,player,3,0); ошибка проигрывает noise2. Оба исхода очищают буфер и ставят inputDeadline=time+1. Совпадение не закрывает keypad автоматически. Невводимые обычными клавишами значения (например code с0/минусом) и leading-zero semantics нельзя «исправлять» в описании оригинала.

Animation selector1001fe70 сбрасывает frame при смене sequence либо нелупящейся текущей sequence, затем обновляет metadata1000e9e0. Отрицательный lookup пишет sequence0; диагностическая строка оригинала содержит `%f` при передаче имени одним DWORD. Это несовпадение сохранено как ограничение, а не нормализовано до%s. Event1004 отправляет переданный sample pointer в sound channel4; keypad result sounds используютchannel3.

## Анимационная камера

Camera Spawn10020dc0: null model, bounds(-16,-16,-36)..(16,16,36), solid0,movetype8, object+31c=-1,+224=0,Use=CameraUse. CameraModel Spawn10020e60: выбранная модель либо null model, такие же bounds/solid/два поля,Use=ModelCameraUse; movetype8 здесь явно не записывается. Current<1 заменяется1; верхнего ограничения и playlist reset нет.

CameraUse100206c0 принимает непустой activator с virtual+d0!=0, получает private player и записывает EHANDLE player+2348=this. Затем10117180(player.edict,camera.edict) переключает вид, и лишь ПОСЛЕ этого ищется entity по pev.message и получает Use(player,player,3,0). Если messageID0, diagnostic до переключения; если имя ненулевое, но entity не найдена, view уже изменён и rollback нет.

SetView wrapper10117180 помимо engine pfnSetView отправляет отдельное сообщение и пишет player+2038=index(view). Его engine call идентифицирован native copy base10222f48 +SDKslot92. Это отдельная схема от keypad AttachCam. Возврат player view после окончания анимаций в данном пути отсутствует; искать его следует в player camera consumers.

ModelCameraUse10020cb0 требует только activator!=NULL и ставит schedule0.05,think=StartNextAnimation. Не сбрасывает current. При повторном Use playlist продолжается с текущего index.

KeyValue100207c0 принимает animation1..16, пишет slot+368+4*N через AllocString. Для1..12 и14..16 count увеличивается при каждой записи, включая повтор ключа; для13 инкремента НЕТ (ASM10020adf..10020afc). Count не равен автоматически максимальному заполненному index и может расходиться с непрерывностью slots. Native save table сохраняет33slots, а не16. Общие movewith/skill/style обрабатываются локально; unknown handled0.

**StartNextAnimation10020f20:** сначала получает slot[current] и вызывает100c20c0(sequenceName), только потом сравнивает signed current<=count. Первая операция не защищена count guard. Sequence helper изменяет animation и вызывает model virtual+1c0 (здесь10014b30). Если index в проверенном диапазоне, durationhelper1000f3e0 получает `(GetModelPtr(edict),sequenceName)`. ASM сохраняет второй аргумент наstack через однопараметрический GetModelPtr; decompiler ошибочно включил его в engine call.

Duration для найденной sequence с numframes>1 вычисляется SSE float `(numframes-1)/fps`, переносится черезST0; иначе0. Проверки fps>0/finite нет. Nonzero duration →schedule(duration), затем current++; zero →diagnostic и current++ безrequeue. Current>count →current++ безrequeue. Unordered compare тоже попадает в schedule. Callback не очищается, index не возвращается1, view не восстанавливается. Эти свойства подтверждают форму оригинала, но не гарантируют корректный playlist при произвольных KV/save данных.

## Сохранение и точные границы

Keypad Restore/Save проходят через animation base1000ea60/1000eaa0, затем собственную table10211f4c: m_pPlayer+200,type3,count1. Input buffer+100 и VK latch+204 отсутствуют в собственном блоке; timestamps/code живут в inherited ENTVARS. CameraModel wrappers вызывают непосредственно CBaseEntity Restore/Save10017f30/10018000, затем table10211f5c: NumAnimations10,count1; Animation1,count33; CurrentAnimation10,count1. Они не вызывают animation/monster serialization chain и не валидируют восстановленные индексы. Core serializer remapping/status описан отдельно: ненулевой EAX не равнозначен полной транзакционной успешности.

Открыто адресно: полный client consumer AttachCam и player virtual+228; потребители player+1ea0/+2038 и восстановление view/current camera; поведение model virtual+1c0(10014b30) после sequence change; engine private allocation lifetime. В этом пакете установлены actual writes/calls/wire fields и порядок, но не объявляется runtime parity всего camera subsystem.
