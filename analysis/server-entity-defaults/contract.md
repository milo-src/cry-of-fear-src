# Общие виртуальные defaults и getters сущностей

23 actual saved-C entry из оригинального server `hl.dll`, SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Только статические C/ASM/PE: target DLL, игра, сборка и REA не запускались.
[Карточки](notes.json), [доказательства](evidence.json), [capture.py](capture.py).
Пакет сохраняет 34 C hashes, 26 ограниченных ASM диапазонов с проверкой каждого
байта против PE, шесть vtables и raw RTTI/поля/константы.

## Владельцы и границы таблиц

Имена классов подтверждены MSVC RTTI Complete Object Locator, TypeDescriptor
и ClassHierarchyDescriptor: не назначены по похожему расположению функций.
Factory entries четырёх concrete классов также читаются как support и уже
разобраны в [alias state](../server-alias-state/contract.md).

| Vtable | RTTI class | Размер slots, hex | Base chain после собственного класса |
|---|---|---:|---|
| 101a249c | CPointEntity | 11c | CBaseEntity |
| 101a25bc | CBaseAlias | 12c | CPointEntity → CBaseEntity |
| 101a2710 | CInfoGroup | 11c | CPointEntity → CBaseEntity |
| 101a2830 | CMultiAlias | 12c | CBaseAlias → CPointEntity → CBaseEntity |
| 101a296c | CInfoAlias | 12c | CBaseAlias → CPointEntity → CBaseEntity |
| 101a2c70 | CTriggerChangeAlias | 11c | CBaseEntity |

Все исследованные COL имеют offset0. RTTI base descriptors фиксируют
single inheritance без отдельного смещения this для рассматриваемых методов.
Это локальный набор классов, а не полный список vtables игры.

22 из 23 entries одинаковы в соответствующих slots всех шести таблиц.
Исключение1000d6b0: базовый alias resolver только в CBaseAlias+11c; ниже указаны
его overrides. Короткие таблицы заканчиваются после +118: последующие RTTI
pointers/строки не считаются методами. Наличие одинакового адреса доказывает
reuse данного тела, но не восстанавливает исходный C++ declaration owner.

## Точный ABI общих slots

Здесь `this` — private object в ECX, а `pev=DWORD[this+4]`, если тело его читает.
Не следует считать DWORD в стеке исходным source-level аргументом без учёта
скрытого result buffer. `RET n` устанавливает объём удаляемого stack payload;
один лишь `void(void)` из Ghidra этой информации не сохраняет.

| Entry | Virtual slot | Фактическое действие / result | Cleanup |
|---|---:|---|---:|
| 1000d3b0 | 10 | virtual+0c(time,0), собственный result не установлен | 4 |
| 1000d450 | 18 | копия origin→out; EAX=out; второй DWORD игнорируется | 8 |
| 1000d480 | 1c | копия velocity→out; EAX=out; второй DWORD игнорируется | 8 |
| 1000d470 | 20 | FLDZ → ST0=+0; DWORD входа игнорируется | 4 |
| 1000d870 | 28 | пустой, EAX/ST0 не устанавливает | 4 |
| 1000d570 | 50 | EAX=0 | 0 |
| 1000d580 | 54 | пустой | 4 |
| 1000d420 | 70 | EAX=ffffffff | 0 |
| 1000da10 | 80 | EAX=0 | 0 |
| 1000d3e0 | 84 | пустой | 8 |
| 1000d3f0 | 88 | пустой | 8 |
| 1000d3d0 | 8c | EAX=0 | 4 |
| 1000da20 | 94 | EAX=ffffffff | 10 hex / 16 bytes |
| 1000d880 | 98 | FLDZ → ST0=+0 | 0 |
| 1000dad0 | bc | EAX=(deadflag==0 && health>0) | 0 |
| 1000da30 | c8 | EAX=case-sensitive equality входа и targetname | 4 |
| 1000d640 | f8 | EAX=0 | 0 |
| 1000d4a0 | fc | out=(absmax+absmin)*float0.5; EAX=out | 4 |
| 1000d5f0 | 100 | out=view_ofs+origin; EAX=out | 4 |
| 1000d430 | 108 | virtual+fc(out); EAX=out; второй DWORD игнорируется | 8 |
| 1000da90 | 10c | engine GetEntityIllum(edict); сохраняет EAX callback | 0 |
| 1000d590 | 0 | буквально C2 00 00, пустой | 0 |

Пустые методы не читают this или аргументы, не пишут память и не вызывают
callbacks. Их входной EAX остаётся как был: это **не** определённый возвращаемый
bool. Для константных integer функций весь EAX задан явно. Вещественные нули
возвращаются через x87, не EAX. Отдельные адреса с одинаковым телом сохранены
как разные entries, поскольку slots/исходные роли могут различаться.

Предметные названия части пустых/константных slots пока не закрыты consumers.
Например +94 удаляет четыре DWORD, поэтому SDK GiveAmmo с тремя аргументами
не является готовым native прототипом. Slot0 сам по себе не доказывает
деструктор:1000d590 ничего не освобождает. Пакет фиксирует точный callable
контракт и владельцев даже там, где исходное имя метода неизвестно.

## Scheduler wrapper

1000d3b0 читает один DWORD через MOVSS, кладёт `(time,0)` и вызывает
virtual+0c, сохраняя ECX=this. Собственных записей времени нет. Во всех шести
таблицах +0c=100171b0; его ASM входит support, потому что Ghidra теряет второй
аргумент и объявляет только один.

При this.parent+14==0 и this.child+1c==0 тот callee присваивает pev.nextthink,
this.desiredNextThink+58 и cachedNextThink+5c. Иначе пишет desired, вызывает
10018090 и100c4880(this,secondArgument). Wrapper выбирает secondArgument0,
но не устраняет виртуальную диспетчеризацию. Назначение флага/полная scheduler
логика раскрываются отдельно в [parent tree](../server-parent-tree/contract.md)
и связанных parent/scheduler пакетах; это не самостоятельный вызов Think.

## Векторные значения и data ownership

Native ENTVARS table1021aae0 подтверждает поля origin+8, velocity+20,
absmin+c4, absmax+d0, view_ofs+178, health+164, deadflag+174,
targetname+1d0. Это stronger evidence, чем перенос offsets современного SDK.
Все output pointers принадлежат caller: данные копируются/вычисляются,
никакой allocator и передачи владения нет. Проверок NULL/размера out нет.

1000d450/480 копируют DWORD-компоненты побитно, включая особые float значения.
Они не интерполируют по игнорируемому второму DWORD и не применяют parent
matrix. Точное source-level назначение дополнительного параметра ещё открыто.
Обычный отдельный output безопасен; универсальный memmove-контракт для
частичного overlap не следует из последовательных stores.

1000d4a0 использует мировые **absolute bounds**, а не local mins/maxs и не
модельный центр. Каждая ось: ADDSS(max,min), затем MULSS на raw0.5@101a1dd8.
Следовательно сначала округляется/может переполниться float-сумма; формула
не заменяется более устойчивой половинной суммой. Актуальность absbounds
зависит от внешних writers, здесь они не пересчитываются.

1000d5f0 складывает view_ofs и origin. Соседний virtual+104=1000d5a0 имеет те же
операции (support C/ASM); это отдельный entry и не повод объединять любые
Eye/Ear overrides. В native defaults нет recoil, angles или локального
camera transform.

1000d430 передаёт только output pointer в virtual+fc, затем сам возвращает
тот же pointer в EAX и удаляет8bytes. Его default даёт Center, но override
+fc изменит результат без замены1000d430. Аналитическое имя BodyTarget
согласуется с функцией и SDK; original symbol и точный тип второго входа
не выдаются за восстановленные имена.

## Строки, alive и illumination

1000da30 вычисляет два адреса от string pool base gpGlobals+98: аргумент
string_t и pev.targetname. Это сравнение содержимого, не ID. Побайтовое
case-sensitive сравнение останавливается на первом отличии/NUL; native EAX
явно0/1. Нет wildcard, alias resolution или special case для ID0: он тоже
адресует pool base. В отличие от похожего SDK HasTarget, здесь поле
**targetname+1d0**, а не target+1cc. Строки borrowed, length/validity guards нет.

1000dad0 возвращает1 при deadflag==0 и health>0. COMISS/JBE даёт false для
unordered NaN; +Infinity удовлетворяет сравнению. Никакие takedamage,
frozen, spectator, classname или revive таймеры здесь не проверяются.
[DispatchSave](../server-save-dispatch/contract.md) использует virtual+bc
для части monster classnames: этот пакет закрывает его конкретный default,
но не все overrides других классов.

1000da90 берёт pev.containingEntity+20c и вызывает10222f84. Binding доказан:
GiveFnptrsToDll100b4aa0 копирует144DWORD в10222f48; +3c=slot15 в enginefuncs_s
есть pfnGetEntityIllum. CALL возвращает EAX, subsequent ADD ESP4/RET его
не изменяют. Никакого RemoveEntity или локального освещения в теле нет;
алгоритм, диапазон и возможные engine side effects остаются внешним контрактом.

## Alias override и shadowing

```text
CBaseAlias +11c → 1000d6b0: EAX0, RET4, вход не читается
CInfoAlias +11c → 1000d6c0 → target search10118590(active message)
CMultiAlias +11c → 1000d6f0 → список/weights → target search10118590
```

По смыслу существующего [target resolution](../server-targets/contract.md)
result — private entity pointer, поэтому базовый0 означает отсутствие
следующей alias-сущности. Он не очищает dirty flag/link, не flush-ит очередь
и не сообщает успех операции. Аргумент search cursor/context игнорируется
лишь в base default; его нельзя выкидывать из ABI всех overrides.

CInfoGroup не наследует CBaseAlias по RTTI и имеет короткую таблицу без+11c.
Поэтому поиск `group.member` нельзя направлять в этот alias resolver только
из-за близости classnames или source addresses.

## Что остаётся открытым

- Имена/типы части пустых virtual slots и все их concrete consumers.
- Полный перечень subclasses и overrides за пределами шести таблиц.
- Engine illumination implementation и валидность string pool/edict lifetimes.
- Назначение игнорируемого DWORD у origin/velocity getters и BodyTarget wrapper.
- Runtime порядок обновления absbounds/view_ofs, достижимость unusual inputs.

Эти локальные контракты не означают runtime parity или готовую реализацию.
