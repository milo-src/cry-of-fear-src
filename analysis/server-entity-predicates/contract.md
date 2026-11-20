# Entity predicates, inert virtual defaults and exported alias thunks

Static audit of 27 saved server addresses. Original server SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. No target execution, game changes or runtime-equivalence claim. Reproduce native reads with `python analysis/server-entity-predicates/capture.py`; see `evidence.json` and per-entry ASM.

## Navigation and proven contracts

### 0x1000db70 — Entity_Virtuald4_ConstantZero

Постоянный нулевой результат общего виртуального метода +d4.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Слот+d4 используется проверкой получателя ProFont/ScreenFade: этот default отклоняет данные сообщения; это не доказательство отсутствия всех иных сообщений или полной классификации entity.

Native RTTI/vtable owners: CPointEntity 0xd4, CBaseAlias 0xd4, CInfoGroup 0xd4, CMultiAlias 0xd4, CInfoAlias 0xd4, CTriggerChangeAlias 0xd4. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000db80 — Entity_Virtuald0_ConstantZero

Постоянный нулевой результат общего виртуального метода +d0.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0xd0, CBaseAlias 0xd0, CInfoGroup 0xd0, CMultiAlias 0xd0, CInfoAlias 0xd0, CTriggerChangeAlias 0xd0. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000db90 — Entity_Virtualb8_ConstantZero

Постоянный нулевой результат общего виртуального метода +b8.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0xb8, CBaseAlias 0xb8, CInfoGroup 0xb8, CMultiAlias 0xb8, CInfoAlias 0xb8, CTriggerChangeAlias 0xb8. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df00 — Entity_Virtual78_ConstantZero

Постоянный нулевой результат общего виртуального метода +78.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0x78, CBaseAlias 0x78, CInfoGroup 0x78, CMultiAlias 0x78, CInfoAlias 0x78, CTriggerChangeAlias 0x78. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df10 — Entity_Virtual7c_ConstantZero

Постоянный нулевой результат общего виртуального метода +7c.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0x7c, CBaseAlias 0x7c, CInfoGroup 0x7c, CMultiAlias 0x7c, CInfoAlias 0x7c, CTriggerChangeAlias 0x7c. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df60 — Entity_Virtualb4_ConstantZero

Постоянный нулевой результат общего виртуального метода +b4.

Всё тело: XOR EAX,EAX; RET с cleanup 4 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0xb4, CBaseAlias 0xb4, CInfoGroup 0xb4, CMultiAlias 0xb4, CInfoAlias 0xb4, CTriggerChangeAlias 0xb4. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000dfe0 — Entity_Virtual90_ConstantZero

Постоянный нулевой результат общего виртуального метода +90.

Всё тело: XOR EAX,EAX; RET с cleanup 4 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0x90, CBaseAlias 0x90, CInfoGroup 0x90, CMultiAlias 0x90, CInfoAlias 0x90, CTriggerChangeAlias 0x90. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000dff0 — Entity_Virtualf0_ConstantZero

Постоянный нулевой результат общего виртуального метода +f0.

Всё тело: XOR EAX,EAX; RET с cleanup 0 байт аргументов. ECX/аргументы не читаются, память не меняется, callbacks отсутствуют. Полный EAX=0, а не только AL.

Предметное имя и типы аргументов не восстановлены одним постоянным телом; другие overrides могут вести себя иначе.

Native RTTI/vtable owners: CPointEntity 0xf0, CBaseAlias 0xf0, CInfoGroup 0xf0, CMultiAlias 0xf0, CInfoAlias 0xf0, CTriggerChangeAlias 0xf0. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df70 — Entity_Virtuala0_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0xa0, CBaseAlias 0xa0, CInfoGroup 0xa0, CMultiAlias 0xa0, CInfoAlias 0xa0, CTriggerChangeAlias 0xa0. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df80 — Entity_Virtual48_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0x48, CBaseAlias 0x48, CInfoGroup 0x48, CMultiAlias 0x48, CInfoAlias 0x48, CTriggerChangeAlias 0x48. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000df90 — Entity_Virtual30_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0x30, CBaseAlias 0x30, CInfoGroup 0x30, CMultiAlias 0x30, CInfoAlias 0x30, CTriggerChangeAlias 0x30. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e1e0 — Entity_Virtual118_NoOp

Пустой метод; native RET удаляет 4 байт аргументов.

Единственная инструкция RET 4; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0x118, CBaseAlias 0x118, CInfoGroup 0x118, CMultiAlias 0x118, CInfoAlias 0x118, CTriggerChangeAlias 0x118. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e210 — Entity_Virtuala8_NoOp

Пустой метод; native RET удаляет 4 байт аргументов.

Единственная инструкция RET 4; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0xa8, CBaseAlias 0xa8, CInfoGroup 0xa8, CMultiAlias 0xa8, CInfoAlias 0xa8, CTriggerChangeAlias 0xa8. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e220 — Entity_VirtualUnassigned_1000e220_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

В шести проверенных RTTI/vtables ссылки на этот адрес нет; иные владельцы не установлены данным пакетом.

### 0x1000e260 — Entity_Virtual2c_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CTriggerChangeAlias 0x2c. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e270 — Entity_Virtualac_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0xac, CBaseAlias 0xac, CInfoGroup 0xac, CMultiAlias 0xac, CInfoAlias 0xac, CTriggerChangeAlias 0xac. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e280 — Entity_Virtualb0_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0xb0, CBaseAlias 0xb0, CInfoGroup 0xb0, CMultiAlias 0xb0, CInfoAlias 0xb0, CTriggerChangeAlias 0xb0. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e2d0 — Entity_Virtualf4_NoOp

Пустой метод; native RET удаляет 0 байт аргументов.

Единственная инструкция RET 0; не читает ECX/аргументы, не меняет память или EAX, не вызывает функции. Входное значение EAX не является определённым возвращаемым результатом.

Отдельный адрес сохраняется в навигации даже при совпадающем машинном теле. Название конкретного callback и типы параметров остаются неизвестными; Ghidra void(void) не определяет native cleanup.

Native RTTI/vtable owners: CPointEntity 0xf4, CBaseAlias 0xf4, CInfoGroup 0xf4, CMultiAlias 0xf4, CInfoAlias 0xf4, CTriggerChangeAlias 0xf4. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000db00 — Entity_IsBspSolidOrPushstep

Проверяет BSP-solid либо pushstep movetype.

ECX=this; pev=[this+4]. Возвращает EAX=1 если DWORD pev+10c==4 или DWORD pev+108==13, иначе EAX=0. RET без аргументов, записей нет.

Имена solid/movetype подтверждены оригинальными ENTVARS descriptors; константы SOLID_BSP=4 и MOVETYPE_PUSHSTEP=13 сопоставлены с сохранённым SDK const.h. Проверки model pointer, classname, здоровья или фактической геометрии нет.

Native RTTI/vtable owners: CPointEntity 0xc0, CBaseAlias 0xc0, CInfoGroup 0xc0, CMultiAlias 0xc0, CInfoAlias 0xc0, CTriggerChangeAlias 0xc0. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000db20 — Entity_VelocityDiffersFromSharedVector

Сравнивает три компонента velocity с общей тройкой float.

ECX=this; pev.velocity+20/+24/+28 сравниваются с 10222f34/38/3c. EAX=0 только если все три сравнения ordered equal; первая неравная либо unordered пара даёт EAX=1. RET без аргументов; короткое замыкание по компонентам.

UCOMISS; LAHF; TEST AH,44; JP отличает unequal/unordered от ordered equal. +0 и -0 равны; при маскированном invalid NaN приводит к1. Исключения немаскированного MXCSR не моделируются.

Тройка лежит в zero-fill хвосте PE .data (нет raw backing). Начальные нули при загрузке не доказывают неизменность в runtime: полный набор writers не разобран. Поэтому контракт сравнивает с текущими значениями global, а не безусловно с нулём.

Native RTTI/vtable owners: CPointEntity 0x9c, CBaseAlias 0x9c, CInfoGroup 0x9c, CMultiAlias 0x9c, CInfoAlias 0x9c, CTriggerChangeAlias 0x9c. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000dfa0 — Entity_IsBspPredicateAndNoDamage

Возвращает1 при истинном виртуальном BSP-предикате и нулевом takedamage.

ECX=this. Сначала CALL [vtable+c0]; EAX==0 немедленно даёт0. Иначе сравнивает float pev.takedamage+170 с native constant101a1370=+0; ordered equal даёт1, unequal/unordered даёт0. RET без аргументов.

В исследованных таблицах+c0=1000db00. Dispatch сохранён: иной subclass может подменять предикат. Проверяется float takedamage, а не health/max_health/deadflag. Собственных записей в объект нет; побочные эффекты виртуального вызова не исключены.

Native RTTI/vtable owners: CPointEntity 0xc4, CBaseAlias 0xc4, CInfoGroup 0xc4, CMultiAlias 0xc4, CInfoAlias 0xc4, CTriggerChangeAlias 0xc4. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e1f0 — Entity_ScheduleRelative_DefaultFlag

Передаёт относительную задержку в виртуальный scheduler с нулевым флагом.

ECX=this; один stack float передаётся без изменения через MOVSS как первый аргумент CALL [vtable+4](delay,0); затем RET4. Сам wrapper не записывает nextthink и не гарантирует тип возвращаемого значения.

Во всех шести таблицах+4=10017110. Эта реализация прибавляет delay к pev.ltime при movetype7, иначе к globals.time; при parent==0, children==0 и сброшенном бите flags 0x20 записывает pev.nextthink и this+58/+5c. В альтернативной ветке пишет desired this+58, вызывает10018090 и100c4880(this,0). Контракт wrapper не подменяет другие overrides.

Native RTTI/vtable owners: CPointEntity 0x8, CBaseAlias 0x8, CInfoGroup 0x8, CMultiAlias 0x8, CInfoAlias 0x8, CTriggerChangeAlias 0x8. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e290 — Entity_ReturnStaticEmptyString

Возвращает указатель на постоянную пустую строку.

MOV EAX,101a2496; RET. В оригинальном PE по адресу находится NUL, поэтому возвращена пустая ASCII строка, а не NULL. Память не выделяет, ECX не читает, результат статический адрес модуля.

Предметный смысл виртуального getter+d8 не устанавливается только этим default; содержимое расположено в .rdata.

Native RTTI/vtable owners: CPointEntity 0xd8, CBaseAlias 0xd8, CInfoGroup 0xd8, CMultiAlias 0xd8, CInfoAlias 0xd8, CTriggerChangeAlias 0xd8. Это только шесть проверенных таблиц, не все подклассы.

### 0x1000e5a0 — Export_info_alias_TailThunk

Экспорт info_alias переходит в фабрику 0x1000d230.

PE export name/ordinal/EAT и 5 байт E9 rel32 подтверждены непосредственно. Единственная инструкция JMP 0x1000d230; стек, ECX и исходные аргументы сохраняются, собственного CALL/RET/allocation нет.

Ghidra C разворачивает за thunk полное тело фабрики; это не отдельная реализация и не основание повторно приписывать этому entry самостоятельный allocator. Семантика создания и тип объекта разобраны по адресу назначения; неизвестные ограничения фабрики сохраняются.

В шести проверенных RTTI/vtables ссылки на этот адрес нет; иные владельцы не установлены данным пакетом.

### 0x1000e5b0 — Export_info_group_TailThunk

Экспорт info_group переходит в фабрику 0x1000d290.

PE export name/ordinal/EAT и 5 байт E9 rel32 подтверждены непосредственно. Единственная инструкция JMP 0x1000d290; стек, ECX и исходные аргументы сохраняются, собственного CALL/RET/allocation нет.

Ghidra C разворачивает за thunk полное тело фабрики; это не отдельная реализация и не основание повторно приписывать этому entry самостоятельный allocator. Семантика создания и тип объекта разобраны по адресу назначения; неизвестные ограничения фабрики сохраняются.

В шести проверенных RTTI/vtables ссылки на этот адрес нет; иные владельцы не установлены данным пакетом.

### 0x1000e5c0 — Export_multi_alias_TailThunk

Экспорт multi_alias переходит в фабрику 0x1000d2f0.

PE export name/ordinal/EAT и 5 байт E9 rel32 подтверждены непосредственно. Единственная инструкция JMP 0x1000d2f0; стек, ECX и исходные аргументы сохраняются, собственного CALL/RET/allocation нет.

Ghidra C разворачивает за thunk полное тело фабрики; это не отдельная реализация и не основание повторно приписывать этому entry самостоятельный allocator. Семантика создания и тип объекта разобраны по адресу назначения; неизвестные ограничения фабрики сохраняются.

В шести проверенных RTTI/vtables ссылки на этот адрес нет; иные владельцы не установлены данным пакетом.

### 0x1000e5d0 — Export_trigger_changealias_TailThunk

Экспорт trigger_changealias переходит в фабрику 0x1000d350.

PE export name/ordinal/EAT и 5 байт E9 rel32 подтверждены непосредственно. Единственная инструкция JMP 0x1000d350; стек, ECX и исходные аргументы сохраняются, собственного CALL/RET/allocation нет.

Ghidra C разворачивает за thunk полное тело фабрики; это не отдельная реализация и не основание повторно приписывать этому entry самостоятельный allocator. Семантика создания и тип объекта разобраны по адресу назначения; неизвестные ограничения фабрики сохраняются.

В шести проверенных RTTI/vtables ссылки на этот адрес нет; иные владельцы не установлены данным пакетом.

## Boundaries and reconstruction notes

- Preserve stack cleanup and actual virtual dispatch. Do not infer SDK names for empty slots solely from their position or identical bodies.
- Owner identity is proven by six native RTTI chains and their vtable bytes; this is not an exhaustive class hierarchy.
- `velocity`, `solid`, `movetype`, `takedamage` names come from the original 102-entry ENTVARS descriptor table, not a guessed source layout.
- Shared comparison vector writers remain unaudited. The PE zero-fill initial value alone cannot establish a perpetual zero vector.
- Export thunks are separate address records but forward to already reviewed factories. Saved Ghidra C may show target pseudocode rather than the five-byte export body.
- Native float ordered/unordered paths assume masked SSE exceptions; do not replace them with integer compares or ordinary equality without preserving behavior.
