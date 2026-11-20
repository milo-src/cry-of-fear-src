# Граница покрытия декомпила

Этот audit script читает сохранённые C/Evidence, не запускает REA/Ghidra или игру. Отдельные завершённые сессии discovery перечислены ниже с provenance. Числа не означают процент восстановления игры.

| Модуль | C | Адресные записи | Подтверждённые начала | Не подтверждено | Discovered |
|---|---:|---:|---:|---:|---:|
| client / client.dll | 510 | 474 | 468 | 6 | 9664 |
| engine / hw.dll | 45 | 45 | 44 | 1 | 10281 |
| gameui / GameUI.dll | 128 | 126 | 126 | 0 | 6140 |
| opengl / opengl32.dll | 5 | 5 | 0 | 5 | 385 |
| server / hl.dll | 8074 | 8000 | 8000 | 0 | 10398 |
| vgui2 / vgui2.dll | 5 | 5 | 5 | 0 | 2358 |

## client: граница provider и сохранённых тел

SHA-256 `e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Полный retained list_procedures без фильтров содержит 9664 записей: 8314 обычных локальных функций, 602 локальных thunk, 748 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 468 сохранённых actual entries (465 обычных, 3 thunk); за его пределами 0. Без подтверждённого C остаются 8448 локальных entries (7849 обычных, 599 thunk). Неразрешённых C-записей: 6. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [client-discovered-evidence.json](client-discovered-evidence.json). Точная очередь: [client-local-without-confirmed-c.json](client-local-without-confirmed-c.json). Подтверждённые тела: [client-saved-confirmed-addresses.json](client-saved-confirmed-addresses.json). Неустановленные начала: [client-unresolved-c.json](client-unresolved-c.json).
Session request/open/close/reset/hash/exit provenance: [client-inventory-session.json](client-inventory-session.json).

## engine: граница provider и сохранённых тел

SHA-256 `9dd34e536c4bb7cda3bc1bc4f0f5f6163687566a16f35c0ea0be59f93da62875`.
Полный retained list_procedures без фильтров содержит 10281 записей: 9556 обычных локальных функций, 38 локальных thunk, 687 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 44 сохранённых actual entries (44 обычных, 0 thunk); за его пределами 0. Без подтверждённого C остаются 9550 локальных entries (9512 обычных, 38 thunk). Неразрешённых C-записей: 1. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [engine-discovered-evidence.json](engine-discovered-evidence.json). Точная очередь: [engine-local-without-confirmed-c.json](engine-local-without-confirmed-c.json). Подтверждённые тела: [engine-saved-confirmed-addresses.json](engine-saved-confirmed-addresses.json). Неустановленные начала: [engine-unresolved-c.json](engine-unresolved-c.json).
Session request/open/close/reset/hash/exit provenance: [engine-inventory-session.json](engine-inventory-session.json).

## gameui: граница provider и сохранённых тел

SHA-256 `9f6c7f955cd06e186591b46aaed111e59a1301b5a46a2ebc424d4b7f6cf29198`.
Полный retained list_procedures без фильтров содержит 6140 записей: 6001 обычных локальных функций, 20 локальных thunk, 119 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 126 сохранённых actual entries (126 обычных, 0 thunk); за его пределами 0. Без подтверждённого C остаются 5895 локальных entries (5875 обычных, 20 thunk). Неразрешённых C-записей: 0. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [gameui-discovered-evidence.json](gameui-discovered-evidence.json). Точная очередь: [gameui-local-without-confirmed-c.json](gameui-local-without-confirmed-c.json). Подтверждённые тела: [gameui-saved-confirmed-addresses.json](gameui-saved-confirmed-addresses.json). Неустановленные начала: [gameui-unresolved-c.json](gameui-unresolved-c.json).
Session request/open/close/reset/hash/exit provenance: [gameui-inventory-session.json](gameui-inventory-session.json).

## opengl: граница provider и сохранённых тел

SHA-256 `26732d7a9aeb8079f2d0c0920f7e433521a2fcc570017c7dafd45bdd30cdbeab`.
Полный retained list_procedures без фильтров содержит 385 записей: 367 обычных локальных функций, 4 локальных thunk, 14 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 0 сохранённых actual entries (0 обычных, 0 thunk); за его пределами 0. Без подтверждённого C остаются 371 локальных entries (367 обычных, 4 thunk). Неразрешённых C-записей: 5. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [opengl-discovered-evidence.json](opengl-discovered-evidence.json). Точная очередь: [opengl-local-without-confirmed-c.json](opengl-local-without-confirmed-c.json). Подтверждённые тела: [opengl-saved-confirmed-addresses.json](opengl-saved-confirmed-addresses.json). Неустановленные начала: [opengl-unresolved-c.json](opengl-unresolved-c.json).
Session request/open/close/reset/hash/exit provenance: [opengl-inventory-session.json](opengl-inventory-session.json).

## server: граница provider и сохранённых тел

SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
Полный retained list_procedures без фильтров содержит 10398 записей: 9799 обычных локальных функций, 493 локальных thunk, 106 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 8000 сохранённых actual entries (7512 обычных, 488 thunk); за его пределами 0. Без подтверждённого C остаются 2292 локальных entries (2287 обычных, 5 thunk). Неразрешённых C-записей: 0. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [server-discovered-evidence.json](server-discovered-evidence.json). Точная очередь: [server-local-without-confirmed-c.json](server-local-without-confirmed-c.json). Подтверждённые тела: [server-saved-confirmed-addresses.json](server-saved-confirmed-addresses.json). Неустановленные начала: [server-unresolved-c.json](server-unresolved-c.json).

Исторический partial-pass: 8000 C entries. Отдельные captures содержат 74 C-файлов и добавляют 0 actual entries сверх partial-pass. Исторический journal selected=10398, excluded=0, remaining=2398; это сохранённое состояние exporter, не текущая очередь всех C. External не являются игровыми телами. [server-export-journal-summary.json](server-export-journal-summary.json) сохраняет target/profile/filter provenance.

## vgui2: граница provider и сохранённых тел

SHA-256 `42107e58ad018020de5b5b7253f512c7265d6e12ab3f68c45b00cd475011472b`.
Полный retained list_procedures без фильтров содержит 2358 записей: 2129 обычных локальных функций, 4 локальных thunk, 225 external. Provider Ghidra 12.1.4, профиль `5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6`.

В discovered local inventory подтверждены 5 сохранённых actual entries (5 обычных, 0 thunk); за его пределами 0. Без подтверждённого C остаются 2128 локальных entries (2124 обычных, 4 thunk). Неразрешённых C-записей: 0. При наличии таких записей missing-confirmation set может перекрывать уже декомпилированные тела; нельзя объявлять всё множество никогда не выгруженным.

Полные исходные поля/flags/адреса: [vgui2-discovered-evidence.json](vgui2-discovered-evidence.json). Точная очередь: [vgui2-local-without-confirmed-c.json](vgui2-local-without-confirmed-c.json). Подтверждённые тела: [vgui2-saved-confirmed-addresses.json](vgui2-saved-confirmed-addresses.json). Неустановленные начала: [vgui2-unresolved-c.json](vgui2-unresolved-c.json).
Session request/open/close/reset/hash/exit provenance: [vgui2-inventory-session.json](vgui2-inventory-session.json).

## Граница полноты и повторная проверка

Полная опись означает все процедуры, обнаруженные конкретным профилем Ghidra. Не доказано обнаружение каждой функции машинного кода: возможны пропуски, ошибочные границы, split/merge, косвенные пути. Другие зависимости игры не включаются в эти шесть DLL автоматически. PE exports не равны внутренним функциям. Min/max адресов — extent набора, не непрерывное покрытие. REVIEW и ASM-only support не увеличивают число сохранённых C.

Default-space 0x адреса при сравнении нормализуются численно: 0x01d... и 0x1d... — один адрес. Исходный catalog_entry сохранён у каждого файла, Evidence не изменяется. Selectors внутри тела, неоднозначные имена и неустановленные thunk остаются неразрешёнными даже при совпадении selector с новым discovered entry. Семантика и ABI требуют отдельного чтения кода.

Hook ProFont1006e930 опубликован в decompiled/client/captures/profont-pass02; full Evidence находится в [profont-hook-evidence.json](profont-hook-evidence.json). Procedure_info подтверждает entry1006e930/body1006e930..1006e94a,27bytes. Consumer100712a0 разобран в analysis/client-profont/contract.md; его binding/formatter/panel зависимости — в analysis/client-profont-dependencies/contract.md. Это не завершает всю UI lifecycle.

Воспроизведение: `python analysis/corpus-coverage/inventory.py`, затем `python analysis/corpus-coverage/verify.py`. Оба скрипта не открывают REA. Первый проверяет C metadata/hash и пересчитывает множества; второй проверяет portable Evidence, partitions, исходные hashes при доступности и session cleanup. На машине без ignored local используются переносимые Evidence; отсутствие локальных profile-подтверждений явно отмечается.

План дальнейших bounded запросов: [requests-plan.md](requests-plan.md).
