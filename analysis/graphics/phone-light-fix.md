# Телефон: пересвет RTX и подсветка экрана

2026-11-19, продолжение `projected-light-implementation.md`.

## Причины

- RTGL1 `lightUniqueIdIgnoreFirstPersonViewerShadows` исключает тени тела игрока, но не освещение first-person модели. Источник у attachment телефона попадал на его собственную близкую поверхность; её сильный прямой свет затем попадал в bloom/lens. Это воспроизведено с настоящим `weapon_mobile` и прочитано из Vulkan swapchain на изолированном desktop.
- Исходный `v_mobile.mdl` содержит `fullbright_mess1..7.bmp` и `fullbright_lowbattery.bmp` с flags=0, `buttons_fullbright.bmp` с flags=32 (additive). Стандартный Xash не выводит FULLBRIGHT из имени. `phone_off.bmp`, корпус и руки не должны становиться fullbright.

## Изменения

- `tools/prepare_rtx_shaders.py`: `traceVisibility` отвергает собственный источник, указанный через `lightIndexIgnoreFPVShadows`, только для `INSTANCE_CUSTOM_INDEX_FLAG_FIRST_PERSON`. Мир и остальные источники сохраняют освещение. Индекс уже передаётся существующим RTGL1 API, shader ABI не меняется.
- `tools/prepare_attached_lights.py`: телефон имеет приоритет этого единственного индекса при сочетании с tactical light. Это не универсальная маска всех источников двух рук: второй самостоятельный источник остаётся обычным светом.
- `tools/prepare_rtx_weapons.py`: для fullbright-материалов телефона `emissive = 1/max(1, rt_emis_maxscrcolor)`; при штатном screen boost произведение равно 1, вместо общей additive emissive=.35. Экран читабелен, кнопки подсвечены, корпус не превращается в излучатель.
- `tools/prepare_projected_lights.py`: обычный GL при загрузке только `models/weapons/mobile/v_mobile.mdl` устанавливает `STUDIO_NF_FULLBRIGHT` в оперативной памяти для имён с `fullbright`. Оригинальный MDL не изменяется.
- `tools/smoke_rtx.py --phone-light`: реальный pickup/deploy, включение телефона, проверка материалов/эмиссии. Старый `--projected` проверяет виды источников, но сам по себе не проверяет телефон в руках.

## Проверка

Waf x86/x64 и компиляция шейдеров прошли; все 8 SPIR-V сохраняют ABI закреплённого RTGL1. Runtime-проверка обычного режима подтвердила 9 fullbright skins и включённый телефон. Для RTX сняты GPU readback до/после при одной камере: `c_apartment3`, позиция `182 605 100`, углы `0 180 0`. В области телефона 250×285 число почти белых пикселей (каждый RGB>=245) уменьшилось с 22229 до 0; экран и кнопки видимы на финальном кадре. Числа и хэши — `phone-light-verification.json`.

Все тесты: отдельный Windows desktop, `-nosound`, без ввода и desktop capture. Обычный режим проверен по runtime-состоянию, а не по изображению. Это исправление дефекта порта, не подтверждение пиксельного совпадения с оригинальной игрой.

```
python tools/smoke_rtx.py --renderer normal --phone-light --timeout 100
python tools/smoke_rtx.py --renderer rtx --phone-light --readback --map c_apartment3 --pose "182 605 100 0 180 0" --timeout 100
```
