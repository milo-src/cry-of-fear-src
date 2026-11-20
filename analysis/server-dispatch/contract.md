# Server DLL callback binding and dispatch

Статический разбор оригинального `hl.dll`, SHA-256
`751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Новые REVIEW: 10 сохранённых C-адресов. Два дополнительных обработчика
`StartFrame`/`ServerDeactivate` имеют только ASM-доказательство и не прибавляются
к числу разобранных C. DLL не запускалась. Воспроизводимый снимок:
`capture.py`, `evidence.json`, 17 ограниченных диапазонов ASM.

## Привязка к интерфейсу

`GetEntityAPI` 100183d0 (ранее разобран) и `GetEntityAPI2` 10018400 копируют
50 DWORD (200 байт) из 102119f8. Имена слотов сопоставлены с сохранённым
`external/hlsdk-portable/engine/eiface.h`; хэш заголовка, все 50 адресов и raw
байты таблицы включены в evidence. Это проверка ABI, а не вывод из похожих имён.

10018400 принимает два стековых аргумента и возвращает EAX 1 при ненулевой
выходной таблице и `*version == 140`; иначе записывает 140 через указатель
version и возвращает 0. NULL version не проверяется ни в одной ветви.
У 100183d0 версия передаётся значением; эти ABI нельзя смешивать.

| Slot | Native entry | Callback |
|---:|---|---|
| 2 | 10016a30 | Think |
| 3 | 100169e0 | Use |
| 4 | 10016980 | Touch |
| 5 | 10016a80 | Blocked |
| 6 | 10016940 | KeyValue |
| 9 | 10017000 | SetAbsBox |
| 21 | 1001e9e0 | ServerActivate |
| 22 | 1001ea70 | ServerDeactivate (ASM-only) |
| 23 | 1001e7b0 | PlayerPreThink |
| 24 | 1001e770 | PlayerPostThink |
| 25 | 1001ece0 | StartFrame (ASM-only) |

## Серверные границы и аргументы

В этих обработчиках edict+7c содержит private object, edict+80 — entvars,
private+4 — указатель entvars. Native this передаётся в ECX; стековые
аргументы и хвостовые JMP проверены по ASM.

- **KeyValue 10016940:** NULL edict или KeyValueData дают ранний выход.
  Сначала 10116570 получает `(edict+80, kv)`. Только если `kv+0c == 0`
  (не обработано), `kv+0 != 0` (classname) и private object существует,
  вызывается virtual+34 с тем же kv. Разбор всех типов entvars расположен
  в соседнем пакете serializer; здесь установлен порядок передачи.
- **Touch 10016980:** глобальный 10222df0 должен быть нулём; нужны оба
  private object. Если OR их `pev.flags+1a8` содержит 40000000, вызова нет.
  Иначе первый получает virtual+e4(other). Назначение всех writers глобального
  запрета ещё не восстановлено.
- **Use 100169e0:** достаточно первого private object без флага40000000.
  Второй преобразуется в private pointer или NULL; virtual+e8 получает
  `(other, other, 3, 0.0f)`. Этот engine callback не передаёт произвольные
  activator/caller/type/value из FireTargets.
- **Think 10016a30:** требует private object. Отрицательные signed flags
  вызывают диагностическое сообщение `Dormant entity %s is thinking!!`,
  но не запрещают Think: после сообщения выполняется tail JMP virtual+e0.
- **Blocked 10016a80:** первый private обязателен, второй может быть NULL;
  virtual+ec(other) вызывается без проверок flags, присутствующих в Touch.
- **SetAbsBox 10017000:** при private object выполняет tail JMP virtual+4c.
  Иначе tail JMP10018140 с `(edict+80)` вместо
  исходного аргумента. Декомпилятор потерял этот аргумент. NULL edict тоже
  идёт сюда с адресом80: это не безопасный no-op. Геометрия bounds отдельно
  разобрана в `analysis/server-parent-tree/contract.md`; угловая кубическая
  оценка не гарантирует охват любого повёрнутого прямоугольного brush.

## MoveWith: где обслуживаются очереди

Привязка ранее неизвестных wrapper-адресов установлена таблицей, а их
внутренний порядок — native ASM:

```text
StartFrame 1001ece0
  -> если 10222ee4 != NULL: virtual+4 этого объекта
  -> если 10222f04 != 0: return
  -> globalvars+1c = DWORD10214608
  -> ++DWORD10222ef0
  -> tail JMP100c40c0: проход AssistList/deadline correction

PlayerPreThink 1001e7b0(edict)
  -> если private существует: virtual+24c
  -> saved10222dfc = globalvars.frametime(+4)

PlayerPostThink 1001e770(edict)
  -> если private существует: virtual+250
  -> globalvars.frametime(+4) = saved10222dfc
  -> tail JMP100c4120: desired Think processing
```

PreThink сохраняет frametime **после** player virtual call. PostThink
восстанавливает его **после** своего player call. Даже при NULL edict/private
сохранение/восстановление и последний проход выполняются. Сохранённое значение
глобальное, не индивидуальное поле игрока; инвариант неперекрывающихся вызовов
нельзя доказать одним wrapper. В StartFrame gamerules-подобный virtual call
идёт до проверки gate; точные owners/writers трёх скаляров оставлены открытыми.

Детали очередей, flags, дробного frametime и сброса doingDesired:
`analysis/server-queue-b/contract-parent.md`. Эта привязка не доказывает полный
порядок вызовов движком между игроками, collision/pusher steps и callbacks.

## Активация и деактивация

**ServerActivate 1001e9e0(edicts, count, clientMax)** сначала ставит
10222e00=1 и10222df8=1. Затем идёт по count записям со stride32c. Условие
допуска точное: `edict.free == 0 && index >= clientMax && private != NULL`.
Не заменять `>=` на `>` по ожиданиям от SDK. Signed-negative pev.flags
приводят к диагностике `Can't instance %s`; иначе virtual+44 (Activate).
После обхода, включая count<=0, всегда tail JMP100e5fc0 — LinkUserMessages. Уже установленный guarded registration155 сообщений описан в [реестре сообщений](../network/usermessage-registry.md); это не сброс AssistList.

**ServerDeactivate 1001ea70 (ASM-only)** всегда обнуляет10223190 — указатель
sentinel AssistList. Только если10222e00 ровно1, дополнительно обнуляет
10222e00 и10222df8. Код не обходит список, не освобождает его элементы и
не очищает их private+3c. Это объясняет границу жизни указателя sentinel,
но не доказывает очистку всех объектов или памяти движком.

## Оставшиеся вопросы

- Порядок engine calls и жизненный цикл edict/private objects; paired Pre/Post
  при ошибках, нескольких игроках и ранних выходах.
- Владельцы и writers10222df0,10222f04,10214608,10222ef0.
- Полные реализации player virtual+24c/+250 и влияющие на frametime ветви.
- Native frame/pusher ordering и фактическая достижимость нештатных NULL/gate
  веток. Никаких runtime/visual подтверждений этот пакет не заявляет.
