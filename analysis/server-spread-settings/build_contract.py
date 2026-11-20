"""Render the human-authored review cards and exact layout as one navigable contract."""
from pathlib import Path
import json
OUT=Path(__file__).resolve().parent
intro='''# Параметры оружия: разброс, режим, скорость и прыжок

Статический разбор девяти оригинальных server entry. DLL не запускалась. Адреса и offsets ниже hexadecimal; размеры и величины decimal, если не оговорено иначе. Evidence содержит исходные C, полные bounded ASM, оригинальные bytes, dispatch table и непосредственные stores. Имена функций аналитические; это контракт поведения бинарника, а не восстановленные авторские исходники.

## Быстрый маршрут

`100d08f0 LoadTable → 100d0490 Cone → 100d1c10 Bind → 100d0830 Reset → 100cff60 Recovery`.
Выбор primary `100d0860`; переключение `100d1af0`; dispatch атаки `100d1ce0`; вспомогательный forward copy `100dfea0`.

Предыдущие связи: [world bootstrap](../server-world-bootstrap/contract.md), [resource precache](../server-resource-precache/contract.md), [movement/HP/stamina](../movement/health-stamina.md).

## Структуры и точные границы

Array base `10225a30`, stride `a4` (164 bytes), signed count `10225980`. Fallback `10225988` расположен отдельно, на `a8` ниже array base; считать его элементом -1 со stride `a4` нельзя. Вместимость array этим кодом не доказана; проверок вместимости нет. Name до первого numeric field занимает 32 bytes, но copy не ограничена этим размером.

| Offset | Обычная запись после начальных stores | Fallback после конца loader |
|---|---|---|
| 00..1f | name, unbounded copy | formatter с `default\\n` |
| 20 | primary Cone(minAngle) после parse | Cone(6) |
| 2c | primary Cone(maxAngle-minAngle) | Cone(6) |
| 38 | equalize 0 | 0 |
| 3c | expand 0.25 | 0.25 |
| 40 | minpunch (-0.5,-0.5,0) | не записано |
| 4c | maxpunch (1.5,0.5,0) | не записано |
| 58 | secondary Cone(minAngle) после parse | Cone(2) |
| 64 | secondary Cone(maxAngle-minAngle) | Cone(4) |
| 70 | equalize 0 | 0 |
| 74 | expand 0.2 | 0.2 |
| 78 | minpunch (-0.3,-0.3,0) | не записано |
| 84 | maxpunch (1,0.3,0) | не записано |
| 90/94 | primary/secondary speed 0/0 | 0/0 |
| 98/9c | primary/secondary jump -1/-1 | не записано |
| a0 | returntime 1.5 | 1.5 |

Weapon: `160` owner; `1d8` deadline; `1f8` table pointer; `1fc` return multiplier; `200` anchor; `204` amplitude; `208` mode. Локальный accumulator100d0410, equalization, cone output и punch описаны в [spread-application](../server-spread-application/contract.md). Все writers и связь expand с конкретным выстрелом этим ещё не исчерпаны. Player `pev+214` maxspeed и physics key `jh` связаны с отдельным movement контрактом. Classname `pev+0` подтверждён native save descriptor.

## Табличные cone constants

Вектор содержит одинаковый DWORD в x/y/z. Значения не вычисляются через sin во время вызова.

| Angle | float32 bits |
|---|---|
'''
e=json.loads((OUT/'evidence.json').read_text(encoding='utf-8'))
for row in e['cone_values']:
    if not row['unsupported']:
        intro+=f"| {row['angle']} | `{row['bits']}` |\n"
intro+='''
11..14, 16..19, отрицательные и >20: diagnostic и zero vector. Angle 0: zero без diagnostic.

## Границы дальнейшего разбора

- Конкретные derived callbacks `1e8/1ec/1f0/1f4`: стрельба, recoil, ammo и cooldown. Dispatch сам не доказывает их реализацию.
- Все producers recovery anchor/amplitude; применение equalize/expand и vectors к выстрелу.
- Полные numeric conversion callees `1016b55e/1016f5ec`, formatter `1001f160`, locale/overflow/error behavior.
- Реальные файлы настроек и размер native array; отсутствие bounds check не устанавливает выделенную вместимость.
- Реальная скорость PM, источник global forward vector, порядок engine callbacks и ambient FP controls. Статический анализ не является runtime проверкой.

## Контракты entry
'''
for row in json.loads((OUT/'notes.json').read_text(encoding='utf-8'))['functions']:
    intro+=f"\n### {row['address']} — {row['proposed_name']}\n\n{row['summary_ru']}\n\n{row['details_ru']}\n"
(OUT/'contract.md').write_text(intro,encoding='utf-8',newline='\n')
