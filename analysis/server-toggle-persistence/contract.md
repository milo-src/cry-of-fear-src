# Toggle / Delay: persistence and inherited virtual accessors

Pass25: 8 новых полных локальных контрактов. Baseline1985 REVIEW/6670 pending. Только static saved C + полные native тела + PE tables исходного server hl.dll SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Никакой игры, ресурсов, портирования или коммитов.

Цепь persistence: уже разобранный CBaseEntity10018000/10017f30 → новые Delay10102ac0/10102850 → прежние Animating1000eaa0/1000ea60 → новые Toggle10102b20/10102890. Общий [serializer](../server-serializer/contract.md) и [base entity](../server-parent-tree/contract.md) — существующие контракты, не новые REVIEW. [Fogfield](../server-fogfield/contract.md) использует inherited Save/Restore и отдельно хранит активность в pev.iuser2.

Все offsets hex. Private object и pev различаются. Native descriptors/RTTI/slots и jump table закреплены в evidence.json; имена float/state полей происходят из DLL, не из предположения о полном совпадении SDK.

## 0x10102b20 — CBaseToggle_Save_NativeFields

Сохраняет блок CBaseToggle после базового класса и передаёт result сериализатора.

Thiscall: ECX=object, один stack argument writer*, RET4, полный EAX. Сначала прямой вызов наследуемого 1000eaa0 с тем же object и stream pointer. Если EAX==0, немедленно вернуть0 без обработки своего блока. Иначе продолжить собственный CBaseToggle. Ghidra void здесь теряет реальный result forwarding. Нет NULL object/stream guards.

После наследуемого вызова заново читает object.pev+4 и текущий globals.pStringBase через10223188+98. Owner label=stringBase+pev.targetname(+1d0), если string_t!=0; иначе stringBase+pev.classname(+0). Это проверка offset на0, не проверка пустоты полученной строки. Затем ECX=writer, WriteFields1011adc0(ownerLabel,"CBaseToggle",object,table10219a98,20 decimal). Все пять stack arguments и RET14 writer подтверждены ранее; здесь его полный EAX возвращается без нормализации.

Owner label служит serializer diagnostic, не дополнительным полем блока. Собственный wrapper не откатывает ранее записанные блоки и не проверяет переполнение/частичные записи. Общий WriteFields на обычном возврате выдаёт1 даже при ряде warning/overflow условий; поэтому не трактовать EAX как доказательство полной сохранности файла. Подробный формат и границы ошибок — analysis/server-serializer/contract.md.

Native TOGGLE table10219a98 содержит20 записей, все count1/flags0. Сохраняются state+100(type10), ActivateFinished+104(type15), MoveDistance+108, Wait+10c, Lip+110, TWidth+114, TLength+118, Position1+11c/Position2+128(type8), Angle1+134/Angle2+140(type7), TriggersLeft+14c(type10), Height+150, CallWhenMoveDone+154(type11), FinalDest+158(type8), LinearMoveSpeed+164/AngularMoveSpeed+168, FinalAngle+16c(type7), Master+17c(type1), DamageInflict+178(type10); неоговорённые scalar float поля имеют type0. Порядок Master перед DamageInflict не равен порядку offsets; сериализатор следует таблице.

CFuncFogField vtable101a4434 использует38→10102b20 и3c→10102890, без собственного fog Save/Restore wrapper в этих slots. Цепь до данного блока: ENTVARS/BASE→CBaseDelay→CBaseAnimating→CBaseToggle. Это подтверждает inherited persistence, но не отдельную полную таблицу всех полей fogfield: например object+180 не входит в эти20 descriptors. Runtime iuser2 принадлежит pev и не тождественен private m_toggle_state+100.

## 0x10102890 — CBaseToggle_Restore_NativeFields

Восстанавливает блок CBaseToggle после базового класса и передаёт result сериализатора.

Thiscall: ECX=object, один stack argument reader*, RET4, полный EAX. Сначала прямой вызов наследуемого 1000ea60 с тем же object и stream pointer. Если EAX==0, немедленно вернуть0 без обработки своего блока. Иначе продолжить собственный CBaseToggle. Ghidra void здесь теряет реальный result forwarding. Нет NULL object/stream guards.

После успешного наследуемого вызова ECX=reader, ReadFields10117010("CBaseToggle",object,table10219a98,20 decimal); полный EAX reader возвращается без изменений. Нет собственного rebinding think, вызова Spawn/Use, нормализации состояния или rollback: уже восстановленные базовые поля остаются изменёнными и при отказе собственного блока.

ReadFields проверяет token блока, очищает разрешённые поля и декодирует records по native descriptors; его result не охватывает все ошибки payload/field decoding. Это внешний уже разобранный serializer contract, а не гарантия атомарного восстановления. Нулевые flags всех собственных descriptors означают отсутствие per-field global-overlay exemption; остальные режимы/relocation определяет reader.

Native TOGGLE table10219a98 содержит20 записей, все count1/flags0. Сохраняются state+100(type10), ActivateFinished+104(type15), MoveDistance+108, Wait+10c, Lip+110, TWidth+114, TLength+118, Position1+11c/Position2+128(type8), Angle1+134/Angle2+140(type7), TriggersLeft+14c(type10), Height+150, CallWhenMoveDone+154(type11), FinalDest+158(type8), LinearMoveSpeed+164/AngularMoveSpeed+168, FinalAngle+16c(type7), Master+17c(type1), DamageInflict+178(type10); неоговорённые scalar float поля имеют type0. Порядок Master перед DamageInflict не равен порядку offsets; сериализатор следует таблице.

CFuncFogField vtable101a4434 использует38→10102b20 и3c→10102890, без собственного fog Save/Restore wrapper в этих slots. Цепь до данного блока: ENTVARS/BASE→CBaseDelay→CBaseAnimating→CBaseToggle. Это подтверждает inherited persistence, но не отдельную полную таблицу всех полей fogfield: например object+180 не входит в эти20 descriptors. Runtime iuser2 принадлежит pev и не тождественен private m_toggle_state+100.

## 0x10102ac0 — CBaseDelay_Save_NativeFields

Сохраняет блок CBaseDelay после базового класса и передаёт result сериализатора.

Thiscall: ECX=object, один stack argument writer*, RET4, полный EAX. Сначала прямой вызов наследуемого 10018000 с тем же object и stream pointer. Если EAX==0, немедленно вернуть0 без обработки своего блока. Иначе продолжить собственный CBaseDelay. Ghidra void здесь теряет реальный result forwarding. Нет NULL object/stream guards.

После наследуемого вызова заново читает object.pev+4 и текущий globals.pStringBase через10223188+98. Owner label=stringBase+pev.targetname(+1d0), если string_t!=0; иначе stringBase+pev.classname(+0). Это проверка offset на0, не проверка пустоты полученной строки. Затем ECX=writer, WriteFields1011adc0(ownerLabel,"CBaseDelay",object,table10219a68,3 decimal). Все пять stack arguments и RET14 writer подтверждены ранее; здесь его полный EAX возвращается без нормализации.

Owner label служит serializer diagnostic, не дополнительным полем блока. Собственный wrapper не откатывает ранее записанные блоки и не проверяет переполнение/частичные записи. Общий WriteFields на обычном возврате выдаёт1 даже при ряде warning/overflow условий; поэтому не трактовать EAX как доказательство полной сохранности файла. Подробный формат и границы ошибок — analysis/server-serializer/contract.md.

Native DELAY table10219a68 содержит ровно3 записи, count1/flags0: m_flDelay+dc type0, m_iszKillTarget+e0 type1, m_hActivator+e4 type4. Activator — descriptor type4, не просто сырой сохраняемый private pointer. У данного wrapper нет своих callbacks срабатывания delay/killtarget; это только persistence слой.

## 0x10102850 — CBaseDelay_Restore_NativeFields

Восстанавливает блок CBaseDelay после базового класса и передаёт result сериализатора.

Thiscall: ECX=object, один stack argument reader*, RET4, полный EAX. Сначала прямой вызов наследуемого 10017f30 с тем же object и stream pointer. Если EAX==0, немедленно вернуть0 без обработки своего блока. Иначе продолжить собственный CBaseDelay. Ghidra void здесь теряет реальный result forwarding. Нет NULL object/stream guards.

После успешного наследуемого вызова ECX=reader, ReadFields10117010("CBaseDelay",object,table10219a68,3 decimal); полный EAX reader возвращается без изменений. Нет собственного rebinding think, вызова Spawn/Use, нормализации состояния или rollback: уже восстановленные базовые поля остаются изменёнными и при отказе собственного блока.

ReadFields проверяет token блока, очищает разрешённые поля и декодирует records по native descriptors; его result не охватывает все ошибки payload/field decoding. Это внешний уже разобранный serializer contract, а не гарантия атомарного восстановления. Нулевые flags всех собственных descriptors означают отсутствие per-field global-overlay exemption; остальные режимы/relocation определяет reader.

Native DELAY table10219a68 содержит ровно3 записи, count1/flags0: m_flDelay+dc type0, m_iszKillTarget+e0 type1, m_hActivator+e4 type4. Activator — descriptor type4, не просто сырой сохраняемый private pointer. У данного wrapper нет своих callbacks срабатывания delay/killtarget; это только persistence слой.

Наследуемый10017f30 (CBaseEntity Restore) может восстанавливать model/size даже когда его reader-result0; этот wrapper лишь проверяет итоговый EAX и при0 не читает DELAY. Следовательно ранний отказ здесь не означает отсутствия побочных эффектов базового восстановления.

## 0x10010920 — FogField_ObjectCaps_CallParentThenReturnZero

Вызывает родительский запрос capabilities, но возвращает ноль.

Полное native тело10010920..1001092e. ECX=object; читает object+14=m_pMoveWith, подтверждённый BASE descriptor. При ненулевом parent вызывает его virtual40 без stack arguments, затем в любом случае XOR EAX,EAX; RET. Нет собственного аргумента, полного результата parent не возвращает и никакую его маску не сохраняет.

CFuncFogField vtable101a4434 slot40 указывает это тело. Вызов parent нельзя удалить как бесполезный только потому, что итог0: virtual callback может иметь побочные эффекты. Parent vtable/lifetime и циклическая связь локально не защищены; при нормальном возврате parent полный EAX всегда0. Здесь нет изменения полей, recursive traversal guard или implicit use of base capabilities.

## 0x101022c0 — CBaseToggle_GetMappedState

Преобразует private toggle state в другую числовую схему состояния.

Полное native тело101022c0..101022e6; ECX=object, без stack args, plain RET, полный EAX. Читает DWORD object+100=m_toggle_state. CMP EAX,3; unsigned JA отсекает все значения>3, включая signed отрицательные. Для0..3 прыгает через PE table101022e8: targets101022d2,101022e4,101022d8,101022de.

Точная функция: raw0→2, raw1→0, raw2→1, raw3→3; любое другое DWORD→0. Это не bool и не identity mapping; никакой проверки iuser2, health, движения или timer нет. Вызовы/callbacks отсутствуют, состояние не меняется. Имена смысловых enum значений не выводятся только из их номеров.

Конкретные CFuncFogField101a4434, CBaseDoor101bf290 и CRotDoor101bf59c имеют этот target в slot5c. Их slot80 ведёт к raw getter100102c0, поэтому два virtual нельзя подменять друг другом. Возможные другие derived overrides не утверждаются по этим трём таблицам.

## 0x100102c0 — CBaseToggle_GetRawToggleState

Возвращает DWORD m_toggle_state без преобразования.

Полное native тело100102c0..100102c6: MOV EAX,[ECX+100h]; RET. ECX=object, без stack args, весь DWORD возвращается в EAX. Имя m_toggle_state и type10 подтверждены TOGGLE descriptor10219a98. Нет bounds clamp, normalization, bool conversion или записи; NULL ECX не проверяется.

Конкретные fogfield и обе door vtables ставят getter в slot80. Например raw2 здесь возвращается как2, тогда как mapped getter101022c0 возвращает1. Чтение private+100 не означает чтение pev+100 (ltime) либо проверку блокировки двери; это разные адресные пространства.

## 0x100101f0 — CBaseToggle_GetWaitFloat

Возвращает m_flWait через x87 ST0.

Полное native тело100101f0..100101f6: FLD DWORD PTR[ECX+10ch]; RET. ECX=object, без stack args. Возврат float через x87 ST0, не EAX и не разыменованный float10 pointer: Ghidra float10 отражает регистр расширенной точности. TOGGLE descriptor называет поле m_flWait,type0,count1,flags0.

Значение не ограничивается: отрицательные/нулевые/бесконечные и NaN проходят аппаратную загрузку с обычными правилами x87 exceptions/NaN, отдельного finite guard нет. Getter не прибавляет global time, не делает scheduling и не сбрасывает поле. Конкретные fogfield/две door vtables используют slot98; единицы и правила интерпретации задаются caller, не этим телом.

## Осталось отдельно

Полное множество writers/consumers toggle-state и wait, derived Save/Restore overrides, собственные fogfield поля вне inherited tables и вся межуровневая persistence. Локальная REVIEW не доказывает работоспособность сохранений игры или engine guarantees. Числовые accessors намеренно не выданы за реализацию движения/замков.

## Воспроизведение

`python analysis/server-toggle-persistence/capture.py` снимает статические bytes и таблицы. `python analysis/server-toggle-persistence/verify.py` сверяет их независимым PE parser и проверяет связность карточек. Primary8 прочитаны полностью; supports служат ранее доказанным зависимостям.
