# Native renderer teardown и границы reset

Статический аудит исходного client.dll, SHA256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
REA и игра этим агентом не запускались; использованы сохранённые captures.
Это продолжение [renderer-bootstrap-contract.md](renderer-bootstrap-contract.md),
не runtime проверка освобождения GPU-памяти или context recreation.

## Различать три события

1. **Ошибка первоначальной GL загрузки** в100556f0 освобождает загруженный
   opengl32.dll и ставит module0/status1. Это обработка неудачного init.
2. **HUD video/reset route**1006d9e0 вызывает GL init и общий renderer
   reset10060b10. Само название reset не доказывает library unload или
   уничтожение texture IDs.
3. **Callback зарегистрированный при создании GL manager**10139320 передан
   atexit100b4a40 из tiny initializer10001080. Callback tail-calls
   cleanup10053b40 для owner101be5f8; это отдельная exit-registration цепь.

## Что уже доказано про владельца

Bounded assembly10001080 передаёт ECX=101be5f8 в constructor10053b20,
затем передаёт callback10139320 в100b4a40. Constructor пишет0 в
manager+210(module101be808) и+214(status101be80c). Новая сохранённая функция100b4a40 имеет library identity `_atexit` и
вызывает `__onexit(callback)`, возвращая0 при успехе и-1 при null result.
Тело и signature согласуются; label Visual Studio2019 в Ghidra не является
самостоятельным доказательством исходной версии компилятора. Tiny initializer
не проверяет результат регистрации. Полный CRT exit ordering пока не разобран.
Совпадающий адрес100b4a40 в **server** module — другая функция, непригодная
как доказательство семантики client helper.

`gl-lifecycle-assembly/100b4a30.asm` независимо подтверждает entry100b4a40:
после предыдущего RET идут prologue, передача stack argument в100b49f0 и
преобразование результата в0/-1. Автоматический resolver каталога не использует
эту assembly-связь для library-symbol names и сохраняет selector-only пометку;
ручной REVIEW содержит точное доказательство, а не открытый вопрос об entry.

Callback10139320 теперь дополнительно раскрыт10-байтным bounded asm:
`MOV ECX,101be5f8; JMP10053b40`. Это tail-call cleanup method с точно
установленным owner, а не неизвестный ECX из псевдокода.

10053c70 возвращает status==2. Init100556f0 при status!=0 логирует already
loaded и не выполняет новый probe. Поэтому failure status1 и ready status2
сами по себе не позволяют повторный init без другого writer status0.

В failure path100556f0 после dispatch failure/неподходящего GL renderer
выполняются FreeLibrary(module),module=0,status=1. Обнуления71dispatch pointers
в этом хвосте нет. На успешном init status=2; optional capability probing
уже разобран в `gl-capability-contract.md` и не сбрасывает status при отказе.

Новые exact-address inspections101be808/101be80c возвращают not-in-listing
и пустой список incoming references. Это не список всех writes: constructor
и init явно обращаются через object+210/+214. Для полной карты transitions
нужна typed owner/callee evidence; пустой exact-global result нельзя назвать
доказательством отсутствия reset.

## Cleanup10053b40: unload без возврата status0

Полное тело проверяет manager.module+210. Если ненулевой — вызывает
FreeLibrary(module), игнорируя её return value. Затем всегда логирует
`GL manager: shutdown` и ставит module=0. При module==0 unload пропускается,
но log и повторная запись0 всё равно выполняются. SEH/security-cookie
обвязка присутствует в псевдокоде, она не означает дополнительные GL действия.

В этом теле **не изменяются** status+214, dispatch function pointers,
capability flags/limits, texture handles/ready bytes, allocator1018fe8c.
Здесь нет glDeleteTextures, wglDeleteContext или memset всего manager.
FreeLibrary сама по себе также не доказывает уничтожение engine-owned GL
context либо снятие последней ссылки на DLL.

| До cleanup | После cleanup | Следствие для известных методов |
|---|---|---|
|module!=0,status2|module0,status2|Ready gate остаётсяtrue; init увидитstatus!=0 и не re-probe|
|module0,status1|module0,status1|Ready gatefalse; init всё равно не retry|
|module0,status0|module0,status0|Ready gatefalse; обычный init может пройти начальный guard|

Это условные следствия прочитанных тел, а не наблюдённое повторное создание
рендера. Поскольку callback зарегистрирован через atexit, отсутствие retry
reset здесь нельзя автоматически объявлять ошибкой обычного frame path.
Для context-recreation поведения нужен отдельный engine lifetime контракт.

## HUD_Shutdown: самостоятельный engine export

Export1007ad10 выполняет1007a870(), затем1007fa40(). В самом export нет
вызова10139320/10053b40 или FreeLibrary. Новые тела ограничивают цепь:

- **1007a870**: IN_DeactivateMouse(), затем1007a750(). Последний helper в
  новом проходе раскрыт: освобождает nodes key registry10543540 поnext+0 и
  зануляетhead. Native producers/lookup закрыли node0x28, payload+4 иinline
  name+8; button-state payload globals не освобождаются.
- **1007fa40**: при105440a8!=0 вычисляет subobject через
  `p=a8+4+*(int*)(*(int*)(a8+4)+4)`, уменьшает `*(int*)(p+4)` и лишь при
  результате0 вызывает первый virtual callback `vtable[0](1)` этого
  subobject. Затем при105440a4!=0 вызывает100b42a4(a4,0xe0) и обнуляетa4.
  Pointer a8 этим телом не обнуляется.

Это точный наблюдаемый reference-count release. Producer1007f9e0 уже связываетa8 с результатом createIrrKlangDevice,
аa4 — с отдельным224-байтным local context. Конкретный backend class и
virtual destructor implementation остаются внешней границей. Полная
локальная цепь описана в [sound-lifecycle-contract.md](sound-lifecycle-contract.md). Wrapper
100b42a4 теперь раскрыт: передаёт лишьpointer в100f7be4→FID_conflict__free,
не использует caller size и не вызывает C++ destructor сам. Связь с sound subsystem поддержана существующим10080410:
он проверяетa8 и вызывает его virtual method+8 с сформированными weapon
sound paths;1007fb10 разрешает этот путь только приa4!=0. Импорт
createIrrKlangDevice есть, но одного импорта недостаточно для полного
восстановления layout всех аудиообъектов.

На прочитанной части engine HUD_Shutdown имеет отдельную input/shared-object
цепь. Input helper1007a750 иmouse1007c1d0 теперь прочитаны; косвенный audio destructor
остаётся отдельной границей, поэтому
нельзя доказать отсутствие любых вложенных GL действий. Также нельзя
приравнивать HUD_Shutdown к выполнению всех CRT atexit callbacks или считать
1007fa40 идемпотентным: второй pointer a8 и его referencecount требуют
контракта вызовов, не предположения по обнулению толькоa4.

## Video reset не равен уничтожению textures

HUD_Reset1001d520 и HUD_VidInit1001d560 ведут в1006d9e0. Там очищаются custom
paths/active flags и вызываются init/reset helpers. Reset10060b10 вызывает
100586a0,10059110,1005c3d0,100640a0, затем dirty1018f848=1 и frame state reset.
Из уже прочитанных callees1005c3d0 делает memset104cc550,0,0xf80;
100640a0 сбрасывает sky markers/ambient/direct overrides. Они не являются
подтверждённым GL texture deletion.

Карта71обязательных GetProcAddress slots10053c80 не содержит glDeleteTextures
или других glDelete* names. Это ограниченное наблюдение об этой таблице,
не доказательство отсутствия удаления через другие API tables/engine callbacks
или context destruction. Точно так же direct xrefs replacement handles
пока не показывают их зануление на video reset, но косвенные writes этим
не исключаются.

## Следующие точные границы

- Точный CRT exit timing и остальные registrations: callback/body закрыты,
  но порядок teardown других объектов относительно GL context не восстановлен.
- Audio virtual target release-object из1007fa40 ведётся отдельным аудитом.
  Input1007a750,mouse1007c1d0 иfree-forwarders100b42a4/100f7be4 закрыты в
  [hud-shutdown-followup.md](hud-shutdown-followup.md).
- Exact writes module101be808/status101be80c и pointer-based owner methods:
  установить bounded перечень retry/reset transitions.
- Дальнейшая проверка ownership textures/context требует engine teardown
  evidence; отсутствие glDeleteTextures в одной таблице не является утечкой.

## Прямые источники

- `analysis/graphics/studio-flow-assembly/10001080.asm` и `capture.json` —owner constructor/registered callback.
- `decompiled/client/captures/graphics-studio-flow-init/001-pseudocode.c` —constructor10053b20.
- `decompiled/client/captures/graphics-studio-flow-init/000-pseudocode.c` —init100556f0.
- `decompiled/client/captures/graphics-studio-flow-routing/000-pseudocode.c` —ready gate10053c70.
- `decompiled/client/captures/graphics-material-reset/000-pseudocode.c` —10060b10.
- `decompiled/client/captures/graphics-lighting-projection/000-pseudocode.c` —1005c3d0 memory reset.
- `decompiled/client/captures/graphics-studio-texture-lifecycle/004-pseudocode.c` —sky reset100640a0.
- `analysis/graphics/native-gl-dispatch-map.json` —71named assignments, не live support.
- `analysis/exports/client.csv` —export HUD_Shutdown1007ad10.

- `decompiled/client/captures/graphics-gl-capabilities/009-pseudocode.c` —callback10139320→10053b40.
- `decompiled/client/captures/graphics-gl-capabilities/010-inspect_native_instruction.json`, `011-inspect_native_instruction.json` —ограничение exact-global xrefs.

- `analysis/graphics/gl-lifecycle-assembly/10139320.asm` и `capture.json` —точный owner ECX и tail jump.

- `decompiled/client/captures/graphics-gl-lifecycle-followup/001-pseudocode.c` —cleanup10053b40.
- `decompiled/client/captures/graphics-gl-lifecycle-followup/002-pseudocode.c` и одноимённый procedure JSON —actual selector100b4a40/library symbol_atexit.
- `decompiled/client/captures/graphics-gl-lifecycle-followup/003-pseudocode.c` —HUD_Shutdown1007ad10.

- `decompiled/client/captures/graphics-gl-cleanup-boundary/001-pseudocode.c`, `002-pseudocode.c` —input/shared-object cleanup.
- `decompiled/client/captures/weapons-client-effects/000-pseudocode.c`, `weapons-client-core/007-pseudocode.c` —проверенные sound-path consumers105440a8/a4.
- `analysis/exports/client-imports.csv` —импортcreateIrrKlangDevice, без предположения полного object ABI.

Последующее закрытие input/allocator boundary и native key registry owners:
[hud-shutdown-followup.md](hud-shutdown-followup.md); соответствующие captures
`graphics-hud-lifetime`, `graphics-hud-lifetime-producers`, `graphics-hud-lifetime-owners`.
