# Entity fade and delayed monster removal — static contract

Pass24: 4 новых полных локальных контракта. Original server SHA-256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Сохранённый Ghidra C сопоставлен с полными нативными телами и исходными PE bytes; игра не запускалась.

## Навигация и границы

- Fog sprite producer: `analysis/server-fogfield/contract.md` → StartFadeInAndOut → FadeInAndOut → SUB_Remove.
- Monster vtable slot220 →10088470→StartFadeOut→SUB_Remove. Это отдельный путь без шага прозрачности.
- Scheduler virtual8: inherited1000e1f0 вызывает virtual4(delay,0); parent-aware10017110 описан в `analysis/server-queue-b/contract-parent.md`. CGenericMonster slots4/8 сверены в PE. Нет утверждения об одинаковой реализации всех derived vtables.
- Самостоятельный SUB_FadeOut экспортирован; связь StartFadeOut→SUB_FadeOut отсутствует в его полном native теле.

Поля/константы, export names, vtable/RTTI и API binding закреплены в evidence.json. API table base10222f48 устанавливается bootstrap100b4aa0; slots22/61/90 сопоставлены с локальным SDK.

## 0x1008aaa0 — CBaseEntity_SUB_FadeInAndOut_StateMachine

Меняет renderamt по фазе m_bFadeOut, выдерживает случайную паузу и назначает SUB_Remove.

Полное native тело1008aaa0..1008aba3, thiscall без аргументов, plain RET. O=this, V=[O+4], A=V.renderamt+150, phase=BYTE O+88=m_bFadeOut. Имена и смещения подтверждены BASE22/ENTVARS102 descriptors; три константы float32 равны32,3,7. PE export подтверждает имя SUB_FadeInAndOut. Это последовательные условия, а не взаимоисключающий switch.

Сначала при ordered A<32 и phase==0 записывает float32(A+3), вызывает virtual8(0.1f), затем заново читает V/A. При ordered A>=32 и phase==0 пишет phase=1 ДО RandomLong(0,2), преобразует signed EAX в float32, вызывает virtual8 с этим результатом и немедленно выходит. Локального clamp результата RNG или A к32 нет. Если повышение достигло32, оба назначения времени происходят в одном вызове; последнее заменяет первое у обычного scheduler.

Если предыдущая ветвь не вернулась: при ordered A>0 и phase==1 записывает float32(A-3), вызывает virtual8(0.1f), перечитывает V. Затем при ordered A<=7 и phase==1 пишет A=0, вызывает virtual8(0.2f), ПОСЛЕ callback пишет O+78=101028e0 SUB_Remove. Снижение и назначение удаления могут произойти в одном вызове, второе назначение времени заменяет первое у обычного scheduler. Запись think после callback существенна при reentry.

COMISS/JBE и COMISS/JB исключают unordered на всех четырёх порогах: NaN A не меняется и не перевзводит think (при маскированном FP exception). phase вне0/1 тоже ничего не делает. +Infinity при phase0 переходит к hold, затем остаётся +Infinity при вычитании3; -Infinity при phase0 остаётся -Infinity, при phase1 попадает в removal. Эти границы выведены из инструкций, не runtime наблюдение.

Для fresh A=2/phase0 и обычных невмешивающихся callbacks получается10 повышений до32, затем hold,9 снижений до5 и финальная запись0/removal. Это условный счёт вызовов, не обещание wall-clock длительности: engine scheduling, исходный phase и внешние записи могут изменить результат. Функция сама не устанавливает себя как think и не сбрасывает phase.

## 0x1008abb0 — CBaseEntity_SUB_FadeOut_StepSeven

Уменьшает renderamt на7 за вызов либо назначает удаление через0.2.

Полное native тело1008abb0..1008ac04, thiscall без аргументов, plain RET; PE export подтверждает SUB_FadeOut. Если ordered V.renderamt+150>7, записывает float32(A-7), вызывает virtual8(0.1f) и сразу возвращается. После вычитания порог повторно не проверяет: например A8 становится1 и удаление назначается только следующим вызовом.

Иначе A<=7 ИЛИ unordered NaN (COMISS A,7; JBE) пишет renderamt=0, вызывает virtual8(0.2f), затем O+78=101028e0 SUB_Remove. Поведение NaN отличается от SUB_FadeInAndOut. m_bFadeOut+88 здесь не читается и не меняется; callback на себя не назначает.

Уже разобранный SUB_StartFadeOut1008ac50 вызывает scheduler(.2) и напрямую ставит SUB_Remove; он НЕ запускает эту функцию. В bounded поиске сохранённых server C по адресу/именам FadeOut прямой caller1008abb0 не установлен. PE export доказывает доступность символа, но не его использование в каждом death/effect пути.

## 0x1008ac10 — CBaseEntity_SUB_StartFadeInAndOut

Начинает цикл прозрачности с renderamt2 и отключает столкновение.

Полное native тело1008ac10..1008ac42, thiscall без аргументов, plain RET; PE export подтверждает имя. Порядок: V.renderamt+150=2.0f; V.solid+10c=0; virtual8(0.1f); затем O.m_pfnThink+78=1008aaa0. Порог/цвет/rendermode/scale/velocity здесь не настраиваются, цикл немедленно не вызывается.

Не сбрасывает O.m_bFadeOut+88. При phase1 и обычном scheduler первый цикл получает A2, уменьшает до-1, затем пишет0 и назначает удаление; при phase вне0/1 цикл ничего не делает. Нельзя переносить в восстановление подразумеваемый reset phase только из названия Start.

Подтверждённый fogfield caller1000ff30 сначала пишет sprite renderamt32 и назначает1.0, затем этот starter заменяет их на2 и0.1. Полный producer описан в analysis/server-fogfield/contract.md. Общее происхождение/инициализация phase и все внешние callers остаются отдельной задачей.

## 0x10088470 — CBaseMonster_FadeMonster_StopMotionAndScheduleRemove

Останавливает анимацию/движение монстра и назначает прямое удаление без постепенного fade.

Полное native тело10088470..100884ef, thiscall без аргументов, plain RET. Native CGenericMonster vtable101ce36c slot220 содержит10088470, RTTI .?AVCGenericMonster@@. ENTVARS descriptors подтверждают поля: framerate+13c=0; velocity+20..28 копируется из глобального vector10222f34..3c; movetype+108=0; avelocity+5c..64 копируется из того же vector.

Затем animtime+138 получает DWORD gpGlobals.time через10223188; effects+118 OR=20h (EF_NOINTERP), вызов1008ac50 SUB_StartFadeOut; после него AlertMessage1022303c(level1,"Fading monster!\n"). Vector называется нулевым в прежнем контексте, но здесь это чтение изменяемого global, а не три immediate zero: все его writers этим пакетом не закрыты.

1008ac50 лишь virtual8(0.2f) и ПОСЛЕ callback O+78=101028e0. Этот путь не вызывает1008abb0/1008aaa0, не меняет renderamt, rendermode, health и не проверяет dead-state. Название/diagnostic Fading не означает постепенное изменение прозрачности. Подтверждён только данный локальный путь, не вся death dispatch система.

Поддерживающий SUB_Remove101028e0 сначала вызывает10102c50 cleanup; при ordered health+164>0 пишет health0 и AlertMessage(level2), затем RemoveEntity10222fa0(pev.edict+20c). NaN health пропускает diagnostic/reset. Полная очистка parent links описана ранее в analysis/server-parent-tree/contract.md; engine deallocation и runtime lifetime здесь не реконструированы.

## Осталось вне этого пакета

Глобальные writers/инициализация m_bFadeOut; все динамические users экспортированного SUB_FadeOut; derived scheduler overrides и точная runtime длительность; engine removal/free; остальные death callbacks. Закрытие этих четырёх адресов не означает полного восстановления death/effect системы или всей игры.

## Воспроизведение

`python analysis/server-entity-fade/capture.py` — read-only capture оригинальной DLL по SHA.
`python analysis/server-entity-fade/verify.py` — отдельный PE parser, сверка C/ASM/bytes/descriptors/exports/API/constants и связности карточек. Никакой сборки/запуска/изменения ресурсов.
