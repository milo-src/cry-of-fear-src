# Ссылки на сущности: edict и сохранённый serial

Пять новых actual C entries оригинального server `hl.dll`. [Карточки](notes.json),
[evidence](evidence.json) и [скрипт захвата](capture.py) связывают сохранённые C,
четыре bounded ASM диапазона и SHA-256 оригинала. Выполнялся только статический
разбор; функции игры не вызывались. Название EHANDLE описывает восстановленное
поведение, а точное написание исходных C++ operators не установлено.

## Структура и вызовы

Handle занимает два DWORD: `+0` — edict pointer, `+4` — сохранённый serial.
ECX у этих функций указывает именно на handle, который может находиться внутри
другого объекта. Например, door Use `1008f2f0` передаёт `ECX=door+e4` в setter,
а `DelayThink 10101ee0` передаёт `ECX=temporary+e4` в resolver. Поэтому поля
handle нельзя приписывать началу CBaseDoor/CBaseDelay.

| Вход | Восстановленное поведение |
|---|---|
| 10017740 | Записать ссылку из entity private object; очистить при NULL entity |
| 10017ba0 | Вернуть edict, только если он ненулевой и serial совпал |
| 10017780 | Вернуть строго 0/1 по результату проверки edict |
| 10017790 | Из валидного edict вернуть private pointer по +7c |
| 100177a0 | Другой вход с тем же private-pointer поведением |

`10017740` — thiscall, один стековый аргумент, `ret 4`. Ненулевой entity
разыменовывается как `entity+4 → entvars`, затем `entvars+20c → edict`.
Setter пишет edict в handle+0 и, если edict ненулевой, копирует edict+4 в
handle+4. **Если entity ненулевой, а его edict нулевой, старый serial сохраняется.**
При NULL entity обнуляются оба DWORD. EAX на всех обычных путях остаётся исходным
entity pointer; это не возврат `this`, несмотря на возможное ожидание от C++
оператора присваивания. Ghidra объявляет функцию void и этого не показывает.
Проверок handle pointer/entvars pointer нет.

`10017ba0` читает handle+0, проверяет ненулевой pointer и равенство двух serial.
При несовпадении возвращает NULL **без очистки самого handle**. Нет чтения
edict free flag, проверки private pointer, entity classname, состояния удаления,
табличного диапазона или защиты от произвольного dangling pointer. Само чтение
serial уже требует доступной памяти edict. Политика engine allocator/повторного
использования и изменения serial находится за границей этих пяти тел.

`10017780` после resolver использует `neg eax; sbb eax,eax; neg eax`, получая
ровно 0 или 1. Следовательно bool может быть 1 при NULL private data, если edict
и serial допустимы. Напротив, `10017790`/`100177a0` возвращают сам DWORD edict+7c
без дополнительной проверки; NULL private data даёт NULL даже при валидном edict.
Тела двух последних функций семантически одинаковы, но это **две разные точки
входа**, а не два capture одной функции. Разница relative CALL displacement
согласуется с их разными адресами. Нельзя приписывать им разные правила lifetime
по одному предположению об исходном имени operator.

## Связь с механиками

В [дверях/DelayedUse](../server-queue-b/contract-extra.md) activator сохраняется
как handle и разрешается заново при отложенном вызове. При изменившемся serial
resolver передаст NULL; поиск target с таким контекстом следует отдельно
проверять в lookup helper. Отсутствие activator не отменяет DelayThink само по себе.

В [MultiSource](../server-queue-a/contract-extra.md) массив из 32 handle имеет
stride 8. Register использует setter, Use — resolver для сравнения caller.
Это объясняет проверку serial при сравнении; оно не исправляет отдельно доказанную
ошибку границы membership loop. Совпадение двух NULL после невалидного handle
также определяется обычным сравнением указателей caller, а не проверкой bool.

Открыто: реальные writers serial/free/private data в engine, save/restore handle
при переходах между картами, все косвенные потребители и threading assumptions.
Ни один из этих вопросов не закрыт одним названием EHANDLE.
