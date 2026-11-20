"""Generate the bounded original CGlock contract and seven catalogue cards."""
from pathlib import Path
import json
O=Path(__file__).resolve().parent
D={}
D['10046dc0']=('weapon_glock_primary','Полный вход выстрела CGlock: нажатие, пустой магазин, эффекты, пуля, отдача и отдельные таймеры.',r'''
ECX=W, без stack-аргументов, plain RET; возвращаемый статус не установлен. P=[W+160], pev=[object+4]. Все смещения здесь шестнадцатеричные. Сначала COMISS(W+1cc, now)/JA отсекает только упорядоченный будущий срок; unordered проходит при маскированных FP-исключениях. Требуются W+128==0, W+140==0 и BYTE(P+22b0)&1: проверяется m_afButtonPressed, а не непрерывное удержание.

При pev.waterlevel(+1c4)==3 отправляется animation(sequence=14h без iron или23h с BYTE W+178,1,0). Щелчок через virtual190 выполняется только при упорядоченном now>W+1b0 (COMISS/JBE исключает NaN); после него W+1b0=float32(double(fresh now)+0.5). Затем W+1cc и W+1d0 отдельно получают fresh now+0.5. Патрон, пуля и остальные эффекты не расходуются/не выполняются.

При signed W+1e4<=0: если DWORD W+1b8==0, вызывается virtual1c0 Reload; иначе выполняются та же пустая анимация и строго ограниченный щелчок. После любой ветки W+1cc и W+1d0 снова становятся fresh now+0.5. Следовательно, эти два срока перезаписывают сроки, которые мог установить автоматический Reload; player+308 и idle этой завершающей веткой не меняются. Конкретный virtual190=1011e4a0 выбирает weapons/weapon_fire_empty[_noclick].wav по W+1b4 и затем обнуляет W+1b4; аудиобэкенд остаётся внешним контрактом.

Принятый выстрел сначала отправляет Particle (global10226490, variable registration в100e5fc0): MessageBegin(1,id,NULL,P.edict); SHORT IndexOfEdict(W.edict); STRING aurora/gunsmoke.aur; BYTE1; STRING models/weapons/glock/v_glock.mdl; SHORT0; End. Только после callbacks сообщения проверяется BYTE текущего P+21ea: если ноль, уменьшается W+1e4. Затем P+2814 (native m_iViewValue) сохраняется для flags события.

MakeVectors(P.pev.v_angle), player virtual228(hidden output) даёт origin+view_ofs. Локальный вектор eventAngles=start+global right*32. PlaybackEvent (engine slot123,10223134) получает12 DWORD: flags=(сохранённый m_iViewValue!=1), текущий P.edict, WORD10231f50, delay0, текущий origin-pointer, &eventAngles, fparam1/2=0, iparam1=W+168, iparam2=0, bparam1/2=0. 10231f50 производится PrecacheEvent(1,"events/muzzleflash.sc") в1011fd90. Поле angles названо по ABI API; назначение этого необычного вектора у получателя здесь не предполагается.

Далее100ea240(P,"pistol_shoot",0),100f2a50(P,5), P.pev.effects|=2. MakeVectors получает float32(v_angle.x+punch.x),float32(punch.y+v_angle.y),float32(punch.z+v_angle.z). Новый virtual228 даёт начало пули. 100dfea0(P,&direction,0x3e31d0d4) RET8 копирует global forward(+28/+2c/+30); cone-аргумент и ECX не читает. Это не доказательство автоматического прицеливания.

W+19c=float32(W+198+W+19c); W+1a0=float32(double(now)+0.55). Вызов10088ca0 с ECX=current P, RET44h: hidden output, count1, start Vector-by-value, direction Vector-by-value, W+18c/+190/+194 accuracy Vector-by-value, distance8192, kind3, tracer2, damage=CVTTSS2SI(float10226850=sk_cof_glock), attacker=current P.pev, seed=P+2288. Выходной вектор не используется. Для NaN/overflow CVTTSS2SI применим native результат при маскированных исключениях, не абстрактное безопасное int-преобразование. Полный seeded bullet helper разобран в server-bullet-traces; нулевой damage может включать его fallback. Запись kick не изменяет уже переданный direction. CGlock не наследует CBaseSpreadWeapon: native RTTI не позволяет приписать ему parser spread-table или поле spread time+1fc.

W+1d8=float32(now+1.0). После RandomLong(-2,2) его результат преобразуется CVTDQ2PS; вызов100f91b0(P,float(random),1,1), RET0c. В native часть аргументов заранее остаётся на стеке после ADD ESP,4 к RandomLong. Поле seed в этой RNG-операции не передаётся. Внутреннее SP/MP выполнение recoil — отдельный сохранённый контракт.

Только при ненулевых rules10222ee4 и rules.virtual20()==0 вызывается shell sender. У CGlock W+1fc — индекс models/shell.mdl. После recoil/rules callbacks заново читаются global basis и W.pev (именно оружия): velocity.x=(up.x*200+right.x*220)+forward.x*40; y=(right.y*220+up.y*200)+forward.y*40; z=(right.z*220+up.z*200)+forward.z*40. Position.x/y=((view_ofs+origin)+forward*80)+right*20; z=((origin.z+view_ofs.z)+forward.z*80)+right.z*20. Каждая MULSS/ADDSS округляет float32. 1011cf70(&position,&velocity,W.pev.angles.y,W+1fc,1). Rules SP/MP constants разобраны отдельно; здесь нет создания серверного shell-object.

ScreenShake10119de0 получает текущий P.pev.origin: при flags&4000h амплитуда2, frequency0.1,duration0.1,radius2; иначе5,0.25,0.15,2. Затем fire animation(seq,1,0): при W+1e4 именно==0 hip3/iron26h, иначе hip2/iron22h. 100f9100(P,3.0) передаёт ViewKnock с BYTE3.

PlaySFX10116a40 здесь имеет восемь DWORD: ("weapons_new/glock/glock_fire.wav",0,1,Vector-by-value,P,1), ADD ESP,20h. Вектор заполняет P.virtual104=1000d5a0: origin+view_ofs; actor и последний1 подготовлены до hidden-output вызова. Сокращённый C-прототип не отражает этот стек. Путь звука отличается от precache weapons/glock/glock_fire.wav; наличие/загрузка альтернативного ресурса не проверялись.

В завершение текущий P+2298=1, P+22a0=float32(double(now)+0.2). Сравнение signed W+1e4 с0 происходит ДО следующих записей; его EFLAGS переживают SSE/MOV: W+1cc=float32(double(fresh now)+0.1),W+1d0=float32(fresh now+1.0); если сравнение было <=0, W+1cc снова становится fresh now+1.0. Поэтому прежнее «цикл0.1с» описывало только непустую завершающую ветку. Общих NULL/finite/lifetime guards нет; callbacks могут менять перечитываемые поля.
''')
D['100475b0']=('weapon_glock_reload','Вход перезарядки CGlock: iron ожидание, сброс магазина и запуск срока по модели, а не переданным2.6/3.5.',r'''
ECX=W, без аргументов, plain RET. Signed reserve=P[2540+4*W+1dc] должен быть>0; индекс не проверяется. COMISS(W+1cc,now)/JA блокирует будущий срок, но unordered проходит. Требуются W+128!=1 и signed W+128<=2 (отрицательные значения не запрещены),W+140==0,BYTE W+1a4==0. Если BYTE W+178!=0, устанавливается BYTE W+1a4=1 и выполняется возврат: это ожидание выхода из iron, без немедленного helper.

В обычной ветке delta=wrap32(15-W+1e4). Пропуск происходит только при delta<reserve и delta==0; при уже положительном reserve это отвергает ровно полный магазин, но не отвергает отрицательную delta переполненного магазина. Старый clip сохраняется; W+138=0,W+128=2,W+1e4=0 ещё ДО helper. Старый clip!=0:1011c560(W,15,4,float2.6,0,0), затем100ea240(P,"pistol_reload",0). Старый clip==0:capacity15,sequence5,float3.5,0,0 и "pistol_reloadempty". Результат helper не проверяется; проигрывание player animation вызывается после него и при отказе.

Native helper RET14h читает только capacity/sequence. Поэтому2.6/3.5 — реальные переданные биты, но не фактическое назначение deadlines: они берутся из длительности модели через10120210. Старые патроны в clip обнуляются здесь; reserve не уменьшается и магазин не заполняется. Завершение reload и дальнейшая frame-машина — отдельная граница. При вызове из пустой ветки PrimaryAttack W+1cc/+1d0 позднее перезаписываются на now+0.5. Предыдущие карточки и сведения о переносе сохранены в prior-review.txt и ranged.json; этот проход не проверяет корректность порта.
''')
D['10046cb0']=('CGlock_Precache_native','Предварительная регистрация моделей и девяти звуков; хранение shell-index в W+1fc.',r'''
ECX=W, без аргументов, plain RET. Последовательно вызывается10116990 для models/weapons/glock/v_glock.mdl,models/weapons/glock/w_glock.mdl,models/null.mdl. Ненулевые W+16c и W+170 дополнительно передаются10116940 как offsets engine-string-base, а не как сырые pointers. Если rules10222ee4!=NULL и virtual20()!=0, регистрируется police/models/weapons/glock/p_glock.mdl. Регистрируется models/shell.mdl, его EAX сохраняется DWORD W+1fc; затем models/w_9mmclip.mdl. Между получением shell-index и записью нет другого вызова (PUSH следующего пути не меняет EAX).

10116a30 получает девять звуков по порядку: weapons/item_get.wav; weapons/glock/glock_switch.wav; glock_magin.wav; glock_magout.wav; glock_magplace.wav; glock_rackback.wav; glock_slide.wav (последние пять под weapons/glock/); weapons/rifle/rifle_insert.wav; weapons/glock/glock_fire.wav. Возвраты/ошибки не проверяются. Helper/model registration и ресурсы не исполнялись. Не подменять shell-index одноимённым offset иной weapon-derived class и не считать последний звук равным weapons_new/... из PrimaryAttack.
''')
D['10047780']=('CGlock_Spawn_native','Создание полей CGlock, модель/custom offsets, выдаваемый запас и хвостовой переход в item setup.',r'''
ECX=W, без stack-аргументов. classname в pev получает literal "weapon_glock" минус global string-base(+98), без AllocString. Вызывается virtual30 Precache; SetModel получает custom W+170+string-base при ненулевом offset, иначе models/weapons/glock/w_glock.mdl. Далее W+168=3,W+158=0ch,W+15c=0dh,W+198=float1.25.

Native pev.frags(+168), а не health: COMISS(value,0)/JBE ведёт nonpositive или unordered в default. Упорядоченное value>0 преобразуется CVTTSS2SI и пишется W+1f4; дробь между0 и1 даёт0, overflow/inf при masked exceptions — integer indefinite. Иначе W+1f4=15; только упорядоченное exact value==-2 дополнительно задаёт W+1e4=-666. В других ветках clip здесь не инициализируется.

BYTE W+107=1. Если DWORD W+110==0, native loop записывает offset "inventoryitems/weapons/weapon_glock.txt" относительно string-base и повторяется, пока результат вычитания равен0 (ZF от SUB переживает MOV). При патологическом совпадении базы с literal нормального выхода нет. Ненулевой W+174 затем заменяет W+110. Сохранённый после SetModel pev-pointer получает renderfx(+160)=99; BYTE W+13c=1; W+10c получает offset стандартного w_glock.mdl, даже если engine SetModel использовал custom. Tail E9 в1011d150 передаёт тот же W в дальнейший item/fall setup; его callbacks и полный pickup lifecycle не объявлены закрытыми этой карточкой. Accuracy-vector здесь не заполняется.
''')
D['1011cf70']=('SendShellTempEntity_native','Отправка TEMPENTITY106 с position/velocity/angle/model и двумя BYTE; без серверной shell entity.',r'''
ECX не используется; cdecl пять DWORD: position*,velocity*,angle(float bits),modelIndex,mode. MessageBegin(4,0x17,position,0); WriteByte(0x6a); WriteCoord(position.x/y/z); WriteCoord(velocity.x/y/z); WriteAngle(angle); WriteShort(modelIndex); WriteByte(mode); WriteByte(0x19). Завершение — FF25 tail jump через engine MessageEnd, а не обычный прямой call или table switch; caller убирает14h байт. Вектора читаются поэлементно после промежуточных callbacks, снимок всей структуры заранее не делается. Проверок NULL/finite/индекса/режима нет.

При обычном original engine wire (COORD16,ANGLE8,SHORT16,BYTE8) собственный payload имеет18 bytes без заголовка сообщения. Имена MSG_PVS/SVC_TEMPENTITY/TE_MODEL — сопоставление с сохранённым SDK const.h; нативно доказаны числа4/23/106. Параметр position для маршрутизации одновременно сериализуется отдельными COORD. Отрисовка/физика/звук клиентской временной модели здесь не исполняются и не реконструированы.
''')
D['1011c560']=('Weapon_StartReloadSequence_native','Общий проверяющий вход reload: два используемых из пяти аргументов, model duration и отложенный animation stack.',r'''
ECX=W; пять DWORD на стеке, RET14h. Читаются только capacity и sequence; duration и два прочих аргумента игнорируются. Если W+168==17h, проверки reserve/delta обходятся. Иначе signed reserve=P[2540+4*W+1dc] должен быть>0 и требуется delta>=reserve либо delta!=0, где delta=wrap32(capacity-W+1e4). При отказе полный EAX=0 без записей; безопасного clamp capacity/clip и проверки индекса нет.

После допуска10120210(W,sequence) назначает deadlines. Vptr W сохраняется в ESI. PUSH0 до virtual1d0 — заранее третий аргумент будущего вызова animation, а не аргумент predicate: конкретный CGlock target1001f050 есть XOR EAX,EAX;RET без очистки стека. EAX predicate нормализуется NEG/SBB/NEG, затем PUSHbool,PUSHsequence; вызывается сохранённый vptr+198 с тремя DWORD. Для CGlock это1011f5d0(sequence,0,0),RET0c. Если callback поменяет vptr, именно этот call всё равно использует ранее сохранённую таблицу. Другие derived ABI не доказываются одним C-прототипом.

После animation W+1f0=1, полный EAX=1,RET14h. Здесь нет расходования reserve, заполнения clip, alive/is-reloading guards или rollback после callback. Смысл DWORD W+1f0 ограничен этой записью reload-state: соответствующего имени в pinned WEAPON save table нет. Завершение reload остаётся внешней frame-цепью.
''')
D['10120210']=('Weapon_SetSequenceDeadlines_native','Сроки player/weapon на основе длительности текущего model sequence и двух отдельных чтений clock.',r'''
ECX=W; один sequence DWORD,RET4. Native PUSHsequence сохраняется через GetModelPtr(W.pev.edict): engine-call читает только edict, caller убирает4 bytes, затем PUSHheader формирует1000f390(header,sequence). Полученный ST0 округляется FSTP в float32 duration. 1000f390 возвращает0 при NULL header, signed sequence>=numseq или signed frames<=1; отрицательный sequence не отсекается; иначе duration=float32((frames-1)/fps), без проверки fps==0/finite. Это header оружейного edict, назначение viewmodel по имени не предполагается.

Первый1011ab20 возвращает ST0 clock; x87 FADD float duration и FSTP округляют сумму, которая пишется в текущий P+308. Затем перечитывается P и его+308, полученное значение копируется в W+1cc и W+1d0. Второе отдельное чтение1011ab20 плюс та же float duration пишет W+1d8. Поэтому idle не обязан бит-в-бит равняться первым deadlines. Никакого чтения переданного в1011c560 duration2.6/3.5 здесь нет. W+1d4, think callback, clip и ammo helper не меняет. Возвращаемый EAX не является обещанным status.
''')

intro='''# Оригинальный CGlock: выстрел, reload и сроки последовательностей

Статический проход23, только original server hl.dll. Игру, DLL и ресурсы не запускали и не меняли. Полные семь primary C и native bodies прочитаны; пять новых карточек, два расширения существующих10046dc0/100475b0. Это не закрытие всех оружий или всей frame-машины. SHA, диапазоны, точные bytes, save descriptors, API layout и RTTI закреплены в evidence.json; capture.py воспроизводит извлечение, verify.py независимо сопоставляет PE.

W — private CGlock, P=[W+160], pev=[object+4]. Смещения/маски в тексте hex; численные времена и counts — decimal, если нет явного h/0x. Float-поведение описывает нативный код с маскированными FP-исключениями. Никакие SDK field meanings не подменяют native descriptors.

Factory10047ea0 tail-jumps10045580; последний устанавливает vptr101b0524. RTTI: CGlock→CBasePlayerWeapon→CBasePlayerItem→CBaseAnimating→CBaseDelay→CBaseEntity (mdisp0), без CBaseSpreadWeapon. Таблица связывает Spawn+2c=10047780,Precache+30=10046cb0,PrimaryAttack+1a4=10046dc0,Reload+1c0=100475b0,animation+198=1011f5d0,predicate+1d0=1001f050,empty+190=1011e4a0. Player vptr101a4da8 связывает+228=100e01e0 и+104=1000d5a0; оба вызываемых vector-output пути дают origin+view_ofs.

Pinned ITEM/WEAPON/PLAYER/ENTVARS tables определяют m_iSprintState W128,m_iSuicideState W140,m_pPlayer W160,m_iId W168,m_AccuracyVector W18c,m_flKickPerShot W198,m_flCurrentKick W19c,m_flNextKickReductionTime W1a0,m_iClip W1e4,m_iDefaultAmmo W1f4,m_afButtonPressed P22b0,m_iViewValue P2814. Native byte accesses W178/W1a4 не превращают сериализуемый type12 в безопасный byte type. W1fc здесь shell-index по producer/consumer. Неизвестные поля оставлены offsets.

## Контракты primary
'''
cards=[]
for a,(name,summary,detail) in D.items():
 detail=detail.strip()
 paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-glock-attacks/{a}-0.asm','analysis/server-glock-attacks/evidence.json','analysis/server-glock-attacks/contract.md']
 if a in ('10046dc0','100475b0'):paths+=['analysis/server-glock-attacks/prior-review.txt','analysis/weapons/ranged.json','analysis/weapons/ranged.md']
 cards.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='weapons',confidence='high',summary_ru=summary,details_ru=detail.split('\n\n'),evidence_paths=paths))
contract=intro+'\n\n'.join('### 0x'+a+' — '+name+'\n\n'+detail.strip() for a,(name,summary,detail) in D.items())+'''

## Границы и продолжение

Сохранённые старые карточки оставлены без потери в prior-review.txt, прежние ranged artifacts — evidence/navigation, а не повторная проверка port/runtime. Частное утверждение прежнего обзора о0.1s теперь ограничено соответствующей веткой. Реальные игнорируемые2.6/3.5 отличены от model duration.

Следующие самостоятельные границы: Glock frame10046220 и reload completion; окончательные animation/model/event/client effect consumers; произвольные concrete damage overrides внутри bullet chain; thread/reentry/lifetime гарантии engine callbacks. Здесь нет доказательства полной per-frame и сетевой parity. Accuracy producer W18c..194 и внешние изменения iron/reload/empty flags требуют своих owner-контрактов. Helper timing полностью разобран, но model assets/fps и визуальная анимация не исполнялись. Только explicit callsites и pinned native bindings, без предположения общей SDK-эквивалентности.
'''
(O/'contract.md').write_text(contract,encoding='utf8',newline='\n')
(O/'notes.json').write_text(json.dumps(dict(functions=cards),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote',len(cards),'cards')
