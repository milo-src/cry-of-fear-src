# ProFont client message and respawn notification

Original client SHA-256 `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
One completed private REA/Ghidra capture of consumer100712a0, two queries (pseudo/info), original unchanged, close/reset/exit verified. Portable responses: `provider-evidence.json`, lifecycle and used schemas: `session.json`. Original captured C bytes are preserved in `decompiled/client/captures/profont-pass03/`; hook was captured in pass02. No target execution or game changes.

## Cross-module chain

server10119810 writes style BYTE plus text STRING under ProFont ID → registered client1006e930 → consumer100712a0 → global101b2600.child142c fields. Server broadcast/recipient eligibility and transport modes remain documented in `analysis/server-client-effects/contract.md`. This new capture supplies the previously absent consumer, without claiming all panel rendering is known.

## 0x1006e930 ProFont_MessageHook_Forward

Клиентский hook ProFont передаёт сообщение в обработчик100712a0.

cdecl callback(name,size,buffer): wrapper кладёт stack аргументы (1018a0c0,name,size,buffer), CALL100712a0, ADD ESP,16; RET. Это дополнительный первый stack аргумент-контекст; всего четыре аргумента, не ECX thiscall.

Возвращаемый EAX после CALL сохраняется до RET. На штатном пути consumer возвращает1 даже при отсутствии панели; Ghidra void у обоих адресов не отражает native return.

Регистрация строки ProFont→1006e930 имеется в сохранённом client init; формат server10119810 — BYTE style + NUL-terminated STRING. Подлинный класс1018a0c0 и полный lifetime панели этим wrapper не раскрыты.

## 0x100712a0 ProFont_ReadNotificationAndRespawnHint

Читает стиль и текст ProFont, заменяет DEADNOTIFY подсказкой о возрождении и обновляет панель.

cdecl(context,name,size,buffer), обычный RET без callee cleanup. Первые два stack аргумента не читаются. BeginReader(buffer,size)→ReadUnsignedByte→ReadString2047. Результат byte сохраняется целым DWORD, включая возможный sentinelffffffff; parser error не проверяется.

strncpy(local256,readerString,256), затем case-sensitive substring helper100d3cf0 ищет DEADNOTIFY где угодно в строке, не exact/token match. При совпадении дважды вызывается1006cb10 с ECX1018a0c0 и строкой+jump (второй вызов только если первыйnonNULL). NonNULL-result форматируется в local128: Press %s to respawn (lose weapons) or wait to be revived. Иначе native literal Press jump to respawn (lose weapons) or wait to be revived. Полученное копируется в local256 черезstrncpy256.

Если global101b2600 и его child+142c nonNULL, копирует local256 в child+d4 побайтно вплоть доNUL, без отдельного destination capacity. Затем child+f18=255.0f (437f0000), byte+f1c=0,byte+f1d=0,DWORD+f20=0,DWORD+bc=результатReadByte. Эти offsets подтверждены; их локальное использование в color/phase/hold раскрыто в `analysis/client-profont-dependencies/contract.md`. Полный внешний UI lifetime остаётся отдельным вопросом.

Нормальный эпилог MOV EAX,1 проходит через100b42c0; успешная cookie-ветка толькоCMP/JNE/RET и сохраняетEAX. Ошибка cookie уходит в100b4ab5; возврат из этой ветки не заявляется. Отсутствие панели не меняет штатный return1 и не отменяет уже выполненный parsing.

Нет гарантированного local256[255]=0 послеstrncpy; reader допускает длиннее256. Поэтому дальнейшие substring/NUL-copy нельзя описывать как безусловно bounded safe. Достижимость длинного payload зависит от transport, не проверялась. Lookup1006cb10, wrapper formatter1000c900, CRT copy100fe800 и native panel path продолжены пакетом `analysis/client-profont-dependencies/contract.md`; полное UI поведение не объявляется восстановленным.

## Remaining dependencies

Pass04 closes the binding lookup (persisted config.cfg, not current engine binds), formatter wrapper ABI, strncpy, child142c ownership, reset and local paint transitions: see `analysis/client-profont-dependencies/contract.md`. Still separate: stream/getline/locale helpers, full printf backend, source of double1018d1b8, external VGUI blend and child-tree teardown, additional text/state producers. Timing/phase fields now have native local use evidence, not inferred semantics from their initial values. Existing message readers retain their own limitations. Static normal-path return1 is not a runtime success assertion.

Reproduce PE/ASM reads with `python analysis/client-profont/capture.py`. This does not rerun Ghidra; the original full Evidence and actual body408 bytes are retained.
