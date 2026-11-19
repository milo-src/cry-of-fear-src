"""Build a portable Russian function ledger from the saved Ghidra exports.

Only reads saved text/metadata. Does not execute or import game binaries.
Human reviews live in FUNCTION_CATALOG.txt, inside REVIEW blocks, and survive
regeneration. Optional --notes JSON files add structured analyst reviews.
"""

from __future__ import annotations

import argparse
from collections import Counter, defaultdict
import csv
import hashlib
import json
import os
from pathlib import Path
import re
import sys
import tempfile

ROOT = Path(__file__).resolve().parents[1]
CATALOG = ROOT / "decompiled/FUNCTION_CATALOG.txt"
MODULE_NAMES = {
    "server": "hl.dll — серверная игровая логика",
    "client": "client.dll — клиент, HUD, ввод, эффекты",
    "gameui": "GameUI.dll — меню и интерфейс",
    "engine": "hw.dll — движок",
    "opengl": "opengl32.dll — графическая DLL из исследованной установки",
    "vgui2": "vgui2.dll — библиотека интерфейса",
}
# Keep quoted text intact while removing comments, including URL-like strings.
TOKEN = re.compile(r'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|//[^\n]*|/\*.*?\*/', re.S)
CALL = re.compile(r"\b([A-Za-z_$][\w$]*(?:::[A-Za-z_$][\w$]*)*)\s*\(")
REVIEW = re.compile(r"^\[REVIEW ([\w]+:0x[0-9a-f]+)\]\n(.*?)^\[/REVIEW\]", re.M | re.S)
FUNCTION = re.compile(r"^\[FUNCTION (\w+:0x[0-9a-f]+)\]\n.*?^\[/FUNCTION\]", re.M | re.S)
WORKBOARD = re.compile(r"^\[WORKBOARD\]\n(.*?)^\[/WORKBOARD\]", re.M | re.S)
# Navigation groups use the analyst's subsystem field, not guessed semantics
# from binary strings. These labels describe where to read, not port readiness.
TOPICS = {
    "foundation": ("ABI и сущности", "abi, entity, callbacks, Use, Think, private data",
                   "Сверить engine callbacks и calling convention → описать private data → переносить lifecycle сущности.",
                   "Размеры структур, владение указателями, виртуальные слоты и сохранение полей.",
                   "analysis/abi/capture.json"),
    "doors": ("Двери, кнопки и взаимодействия", "door, дверь, button, unlock, ключ, Use",
              "Найти вход Use/Touch → guards и ключ → переход состояния → завершение и target.",
              "Заблокированная дверь, повторное использование, окончание анимации, сюжетные ограничения.",
              "analysis/doors/review.md"),
    "inventory": ("Инвентарь и предметы", "inventory, item, slot, key, drop, combine",
                  "Сопоставить серверную команду, изменение слота, сообщение и обновление клиентской панели.",
                  "Пустой/полный инвентарь, неверный слот, подбор/использование, перенос между картами.",
                  "analysis/inventory/behavior.md"),
    "movement": ("Движение, бег, прыжок и приседание", "movement, PM_Move, walk, run, sprint, jump, duck, dodge, движение, бег, прыжок",
                 "Начать с analysis/movement/overview.md → ввод/CL_CreateMove → серверные ограничения скорости → общий PM_Move → HUD/prediction. Формулы и offsets: analysis/movement/physics.md.",
                 "Повторяемые usercmd, шаг времени, диагональ, ускорение/трение, onground, удержание прыжка, высота jh, приседание, падение; runtime parity пока не проверено.",
                 "analysis/movement/overview.md"),
    "vitals": ("HP, стамина и ограничения спринта", "health, HP, stamina, sprint, exhaustion, syringe, здоровье, стамина, выносливость",
               "Игрок: health/stamina fields → updater 0x100f4d70 → damage/healing → Health/Stamina сообщения → клиентский HUD. Не смешивать HP и очередь лечения.",
               "Начало/конец спринта, истощение, восстановление стоя/сидя, Nightmare, смерть, лечебная очередь и сохранение.",
               "analysis/movement/health-stamina.md"),
    "ladders": ("Лестницы и карабканье руками", "ladder, climb, cof_ladder_manager, func_ladder, лестница, карабканье",
                "Сначала определить тип: func_ladder → PM; cof_ladder_manager → AttachCam/camera_model → анимации и forwardpressed/backpressed → topent/bottoment.",
                "Подъём/спуск, отпускание клавиш, разворот, начало/конец лестницы, занятый менеджер, восстановление камеры/флагов, отсутствующие endpoints.",
                "analysis/movement/ladders.md"),
    "combat": ("Оружие, урон и лечение", "weapon, damage, melee, ammo, morphine, syringe, здоровье",
               "Начать с действия игрока → проверки оружия → боеприпас/урон/лечение → анимация и сообщение.",
               "Числовые аргументы урона/дальности, cooldown, расход предмета, режимы и отказ действия.", ""),
    "monsters": ("Монстры и создание NPC", "monster, AI, spawn, schedule, task, boss",
                 "Разделить создание объекта и поведение NPC; затем раскрыть Think/AI через конкретную vtable.",
                 "Условия создания, принадлежность virtual methods, расписания и переходы жив/мёртв.", ""),
    "saving": ("Сохранения и жизненный цикл игрока", "save, restore, death, revive, respawn",
               "Типизировать таблицу полей → формат чтения/записи → восстановление ссылок и состояния игрока.",
               "Отсутствующие/неизвестные поля, ссылки на сущности, смерть, загрузка и совместимость формата.", ""),
    "chat": ("Текстовый чат", "chat, say, say_team, SayText, messagemode",
             "Ввод → серверная маршрутизация → формат сообщения → клиентские строки, прокрутка и срок показа.",
             "Предел длины, режим чата, получатели, фильтрация, истечение строки и закрытие ввода.",
             "analysis/ui/chat-server.md"),
    "voice": ("Голосовая связь", "voice, vban, mute, VoiceMask, ReqState, sv_alltalk",
              "Регистрация сообщений → состояние клиента → ban/allow masks → разрешение listener/speaker.",
              "Диапазон клиента, mute, sv_alltalk, смена маски; захват/кодек звука этим разбором не восстановлены.", ""),
    "menu": ("Игровые меню и диалоги", "menu, VGUIMenu, dialog, puzzle, pause",
             "Найти сообщение/command → нужную панель → обработчик кнопки → серверный ответ и закрытие.",
             "Различия client VGUI и GameUI, номера панелей, захват ввода, повторное открытие и уничтожение.",
             "analysis/menu/vgui.md"),
    "options": ("Настройки", "options, cvar, video, audio, settings",
                "Чтение значения → виджет → apply/reset → фактический cvar/команда.",
                "Диапазоны, дефолты, отмена изменений, жизненный цикл панели и перезапуск, если требуется.",
                "analysis/ui/options.md"),
    "console": ("Консоль", "console, GameConsole, print, history, command",
                "Создание интерфейса → показ/скрытие → ввод/история → выполнение и вывод.",
                "Отдельно различать Hide, Clear и Show; владение текстом, focus и autocomplete.",
                "analysis/ui/console.md"),
    "input": ("Ввод и элементы управления", "input, key, mouse, keyboard, controls, button",
              "Маршрутизатор события → состояние панели/игрока → действие; отделить UI widget от игровой команды.",
              "Нажатие/отпускание, повтор, переключение меню, блокировка gameplay и соответствие key codes.",
              "analysis/ui/controls.md"),
    "hud": ("HUD и клиентские сообщения", "HUD, message, health, stamina, status",
            "Регистрация → декодирование payload → состояние → Draw/Redraw/Reset.",
            "Длины и типы полей, порядок байтов, видимость, разрешение экрана и сброс при карте.",
            "analysis/ui/hud.md"),
    "graphics": ("Рендер и шейдеры", "render, graphics, OpenGL, Cg, water, shader",
                 "Определить точку в кадре → необходимые состояния/ресурсы → draw → восстановление состояния.",
                 "ABI графических callbacks, форматы текстур, состояние GL, зависимости pass и владение ресурсами.",
                 "analysis/graphics/client-renderer.md"),
    "lighting": ("Освещение", "light, flashlight, lightmap, attenuation",
                 "Источник/сообщение света → параметры и область влияния → lightmap/динамический проход.",
                 "Координаты, радиус, затухание, гамма, выключение/удаление и обновление текстур.",
                 "analysis/graphics/lighting.md"),
    "weather": ("Туман, дождь и погода", "fog, rain, weather, particle",
                "Связать entity и wire-поля с клиентским состоянием, временем жизни и отрисовкой эффекта.",
                "Включение/выключение, масштаб параметров, границы области, утечки и сброс при смене карты.",
                "analysis/graphics/weather.md"),
    "models": ("Модели и анимация", "model, animation, sequence, bounds",
               "Precache/поиск → создание/настройка модели → sequence и bounding box → освобождение.",
               "Имена ресурсов, индексы последовательностей, координаты и callback обновления bounds.", ""),
    "camera": ("Камера и вид игрока", "camera, refdef, view, cutscene, FOV",
               "Входной режим → origin/angles/FOV → ограничения → возврат обычного управления.",
               "Переходы режимов, интерполяция, столкновения, сохранение и восстановление управления.", ""),
    "assets": ("Шрифты и UI-ресурсы", "font, glyph, texture, bitmap, asset, resource",
               "Загрузка → метрики/геометрия → отрисовка → кэш и уничтожение.",
               "Кодировка, alpha, размеры, владение буферами и повторная загрузка.",
               "analysis/menu/fonts.md"),
    "audio": ("Звук и музыка", "sound, music, sentence, volume, wav",
              "Команда/событие → выбор ресурса → громкость/канал → engine callback и остановка.",
              "Отсутствующий ресурс, sentence lookup, сравнение имён/указателей, затухание и состояние между картами.", ""),
    "runtime": ("Служебные обёртки и runtime", "CRT, allocation, formatter, iterator, helper",
                "Отделить игровое действие от контейнера/CRT; подтвердить ABI перед заменой стандартной реализацией.",
                "Семантика памяти, varargs, ограничения буфера и ложные библиотечные имена Ghidra.", ""),
}
SUBSYSTEM_TOPIC = {
    "movement": "movement", "player-movement": "movement", "movement-input": "movement", "prediction": "movement",
    "stamina": "vitals", "health": "vitals", "health-stamina": "vitals", "vitals": "vitals",
    "ladders": "ladders", "ladder": "ladders", "movement_ladders": "ladders",
    "abi": "foundation", "entity-core": "foundation", "commands": "foundation", "network": "foundation",
    "doors": "doors", "inventory": "inventory", "weapons": "combat", "combat": "combat", "healing": "combat",
    "monsters": "monsters", "spawning": "monsters", "saving": "saving", "player-lifecycle": "saving",
    "chat": "chat", "chat-input": "chat", "menu": "menu", "options": "options", "console": "console",
    "controls": "input", "input": "input", "hud": "hud", "graphics": "graphics", "client-renderer": "graphics",
    "lighting": "lighting", "lights": "lighting", "fog": "weather", "rain": "weather", "weather": "weather",
    "models": "models", "camera": "camera", "player-view": "camera", "assets": "assets", "fonts": "assets",
    "music": "audio",
}
NON_CALLS = set("if while for switch return sizeof alignof defined catch __except __try "
                "int uint long ulong short ushort char uchar float double void bool "
                "undefined undefined1 undefined2 undefined4 undefined8 code CONCAT11 "
                "CONCAT22 CONCAT44 SUB41 SUB42 SUB81 SUB82 SUB84 ZEXT48 SEXT48".split())


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def clean(text):
    return TOKEN.sub(lambda m: "\n" * m[0].count("\n") if m[0].startswith(("//", "/*")) else m[0], text)


def compact(text):
    return " ".join(text.split())


def declaration_name(header):
    anonymous = re.search(r"\b((?:thunk_)?FUN_[0-9a-fA-F]+)\s*\(", header)
    if anonymous:
        return anonymous[1]
    prefix = re.sub(r"\s*::\s*", "::", header.split("(", 1)[0]).strip()
    convention = re.split(r"\b__(?:cdecl|thiscall|stdcall|fastcall|vectorcall)\b", prefix)
    if len(convention) > 1:
        return compact(convention[-1])
    return prefix.split()[-1]


def fields(text):
    code = clean(text)
    header, sep, rest = code.partition("{")
    if not sep or "(" not in header:
        raise ValueError("Cannot identify function declaration")
    name = declaration_name(header)
    body = rest.rsplit("}", 1)[0]
    strings = list(dict.fromkeys(m[0] for m in TOKEN.finditer(body) if m[0].startswith('"')))
    # Preserve offsets for return expressions containing quoted semicolons.
    bare = TOKEN.sub(lambda m: " " * len(m[0]), body)
    calls = list(dict.fromkeys(x for x in CALL.findall(bare)
                              if x not in NON_CALLS and not re.fullmatch(r"(?:CONCAT|SUB|ZEXT|SEXT|undefined|uint|int|float)\d+", x)))
    classes = sorted(set(re.findall(r"([\w:]+)::vftable", bare)))
    globals_ = sorted(set(re.findall(r"\b(?:DAT|PTR|PTR_DAT|FLOAT|DOUBLE|INT|UINT|BYTE|WORD|DWORD|QWORD)_[0-9a-fA-F]+\b", bare)))
    string_labels = sorted(set(re.findall(r"\b(?:PTR_)?s_[A-Za-z0-9_]+_[0-9a-fA-F]{6,16}\b", bare)))
    pointer_labels = sorted(set(re.findall(r"\bPTR_[A-Za-z0-9_]+_[0-9a-fA-F]{6,16}\b", bare)) - set(string_labels) - set(globals_))
    return {
        "name": name, "signature": compact(header), "body": compact(body),
        "calls": calls, "strings": strings, "classes": classes, "globals": globals_,
        "string_labels": string_labels, "pointer_labels": pointer_labels,
        "ranges": re.findall(r"^// range: (.+)$", text, re.M),
        "if": len(re.findall(r"\bif\s*\(", bare)),
        "loops": len(re.findall(r"\b(?:for|while)\s*\(", bare)),
        "switch": len(re.findall(r"\bswitch\s*\(", bare)),
        "returns": list(dict.fromkeys(compact(body[m.start(1):m.end(1)])
                                      for m in re.finditer(r"\breturn\b([^;]*);", bare))),
        "indirect": "code **" in bare or bool(re.search(r"\(\*+\s*(?:DAT_|PTR_|[a-zA-Z_]\w*\))", bare)),
        "warnings": list(dict.fromkeys(compact(x) for x in re.findall(r"/\*\s*(WARNING:.*?)\*/", text, re.S))),
        "library_match": "Library Function -" in text,
    }


def load_sources():
    sources = []
    identities = defaultdict(set)
    for path in sorted((ROOT / "decompiled").rglob("capture.json")):
        meta = json.loads(path.read_text(encoding="utf-8"))
        module = path.relative_to(ROOT / "decompiled").parts[0]
        identities[module].add(meta["binary_sha256"])
        for f in meta["functions"]:
            sources.append({"path": path.parent / f["file"], "module": module,
                            "requested": f["procedure"].split(":")[-1].lower(),
                            "sha256": f["sha256"], "evidence": f.get("evidence_id"),
                            "metadata": path.relative_to(ROOT).as_posix(), "entry": None})
    path = ROOT / "decompiled/server/partial-pass/index.json"
    meta = json.loads(path.read_text(encoding="utf-8"))
    identities["server"].add(meta["target_sha256"])
    for f in meta["functions"]:
        sources.append({"path": path.parent / f["relative_path"], "module": "server",
                        "requested": f["address"], "entry": f["address"],
                        "provider_name": f["name"], "sha256": f["sha256"],
                        "evidence": None, "metadata": path.relative_to(ROOT).as_posix()})
    assert all(len(v) == 1 for v in identities.values()), "Different builds require separate address spaces"
    actual = set((ROOT / "decompiled").rglob("*.c"))
    assert {s["path"] for s in sources} == actual, "Metadata does not cover all C files"
    assert len(sources) == len(actual), "A file is indexed more than once"
    for s in sources:
        assert sha(s["path"]) == s["sha256"], f"Source changed: {s['path']}"
        s.update(fields(s["path"].read_text(encoding="utf-8")))
    return sources, identities, meta["selected_function_count"]


def load_exports():
    exports = defaultdict(list)
    for module, stem in (("server", "hl"), ("client", "client"), ("gameui", "GameUI")):
        path = ROOT / "analysis/exports" / (stem + ".csv")
        with path.open(encoding="utf-8-sig", newline="") as f:
            for row in csv.DictReader(f):
                exports[(module, row["address"].lower())].append(row)
    return exports


def resolve(sources, exports):
    by_name = defaultdict(set)
    for s in sources:
        if s["entry"]:
            by_name[(s["module"], s["name"])].add(s["entry"])
    for (module, addr), rows in exports.items():
        for row in rows:
            by_name[(module, row["name"])].add(addr)
            if row["demangled"]:
                found = CALL.findall(row["demangled"])
                if found:
                    by_name[(module, found[0])].add(addr)
    groups = defaultdict(list)
    for s in sources:
        if s["entry"]:
            s["address_basis"] = "индекс Ghidra"
        elif re.fullmatch(r"(?:thunk_)?FUN_[0-9a-fA-F]+", s["name"]):
            s["entry"] = "0x" + s["name"].split("_")[-1].lower()
            s["address_basis"] = "имя FUN в объявлении тела"
        elif len(by_name[(s["module"], s["name"])]) == 1:
            s["entry"] = next(iter(by_name[(s["module"], s["name"])]))
            s["address_basis"] = "совпадение символа с индексом/экспортом"
        else:
            s["entry"] = s["requested"]
            s["address_basis"] = "селектор запроса; начало тела отдельно не подтверждено"
        groups[(s["module"], s["entry"])].append(s)
    return groups, by_name


def observation(s, exported):
    """Narrow structural descriptions, never inferred full gameplay semantics."""
    b, c = s["body"], s["classes"]
    if (exported and c and "0x20c" in b and "DAT_10223044" in b
            and re.search(r"\w+\[1\] = param_1", b)):
        return "шаблон", ("Фабрика сущности: получает/проверяет private data, вызывает выделение через "
                "DAT_10223044, записывает vtable " + ", ".join(c) +
                " и привязывает param_1. Это создание объекта; его игровое поведение здесь не реализовано.")
    if re.fullmatch(r"\s*return\s*;?\s*", b):
        return "шаблон", "Пустая реализация: сразу возвращает управление. Назначение слота требует вызывающего кода."
    if re.fullmatch(r"\s*return\s+[^;]+;\s*", b):
        return "шаблон", "Возвращает выражение " + s["returns"][0] + ". Смысл значения требует контекста вызывающего кода."
    if c and not s["calls"] and not s["if"] and not s["loops"] and len(b) < 800:
        return "шаблон", ("Записывает vtable " + ", ".join(c) +
                "; возможно инициализация/завершение объекта. Направление жизненного цикла и смысл полей не установлены.")
    if len(s["calls"]) == 1 and not s["indirect"] and not s["if"] and not s["loops"] and len(b) < 180:
        return "шаблон", "Короткая обёртка с вызовом " + s["calls"][0] + "; назначение наследуется только после разбора вызываемой функции."
    if s["library_match"]:
        return "метка Ghidra", ("Ghidra пометила тело как библиотечное (" + s["name"] +
                "). Совпадение сигнатуры не доказывает исходное имя/библиотеку; роль по телу ещё не разобрана.")
    if not re.fullmatch(r"(?:thunk_)?FUN_[0-9a-fA-F]+", s["name"]):
        return "символ", ("Символ " + s["name"] +
                " задаёт точку поиска. Конкретное поведение ещё требует разбора тела; имя не считается доказательством семантики.")
    return "не разобрана", "Конкретное игровое назначение пока не установлено. Ниже сохранены наблюдаемые связи и данные для следующего разбора."


def review_blocks(paths, identities=None):
    blocks = {}
    if CATALOG.exists():
        existing = CATALOG.read_text(encoding="utf-8")
        if identities is not None:
            saved = dict(re.findall(r"^  (\w+): [^\n]*\n    SHA-256: ([0-9a-f]{64})$", existing, re.M))
            expected = {module: next(iter(hashes)) for module, hashes in identities.items()}
            assert saved == expected, "Binary identities changed: archive/revalidate human reviews before regeneration"
        matches = list(REVIEW.finditer(existing))
        assert len(matches) == len(re.findall(r"^\[REVIEW ", existing, re.M)), "Malformed review block; refusing to discard notes"
        assert len({m[1] for m in matches}) == len(matches), "Duplicate review block"
        blocks.update({m[1]: m[2].rstrip() for m in matches})
    for path in paths:
        data = json.loads(Path(path).read_text(encoding="utf-8-sig"))
        for r in data["functions"]:
            key = r["module"] + ":" + r["address"].lower()
            details = r.get("details_ru", [])
            if isinstance(details, str):
                details = [details]
            confidence = {"high": "высокая для описанного статического поведения",
                          "medium": "средняя; часть смысла восстановлена по контексту"}.get(r["confidence"], r["confidence"])
            lines = ["  Предлагаемое имя: " + r["proposed_name"],
                     "  Подсистема: " + r["subsystem"],
                     "  Назначение: " + r["summary_ru"],
                     "  Уверенность: " + confidence]
            lines += ["  Разбор: " + d for d in details]
            for p in r.get("evidence_paths", []):
                assert (ROOT / p).is_file(), f"Review evidence missing: {p}"
                lines.append("  Основание: " + p.replace("\\", "/"))
            blocks[key] = "\n".join(lines)
    return blocks


def review_field(block, label):
    prefix = "  " + label + ": "
    return next((line[len(prefix):] for line in block.splitlines() if line.startswith(prefix)), "")


def topic_for(block):
    subsystem = review_field(block, "Подсистема")
    if subsystem in SUBSYSTEM_TOPIC:
        return SUBSYSTEM_TOPIC[subsystem]
    for prefix, topic in (("Голосовая", "voice"), ("Контейнер битовой", "voice"),
                          ("Сущности", "foundation"), ("Engine ABI", "foundation"),
                          ("Монстры", "monsters"), ("Save/restore", "saving"),
                          ("Кнопки", "doors"), ("Звук", "audio"), ("Ресурсы / модели", "models")):
        if subsystem.startswith(prefix):
            return topic
    return "runtime"


def line_ref(kind, key):
    return f"@LINE({kind} {key})"


def organize_catalog(old_lines, blocks):
    """Three reading levels: task map, reviewed cards, full technical inventory.

    REVIEW contents remain verbatim. Line references are resolved only after
    layout is final; references change no newline counts. Workboard is the only
    extra human-maintained block and remains in this same text file.
    """
    text = "\n".join(old_lines) + "\n"
    records = {m[1]: m[0] for m in FUNCTION.finditer(text)}
    assert len(records) == text.count("[/FUNCTION]"), "Duplicate/malformed function records"
    grouped = defaultdict(list)
    for key, block in blocks.items():
        grouped[topic_for(block)].append(key)
    board = ("  Текущая задача: не выбрана. Выбрать одну механику и входную функцию.\n"
             "  Следующий шаг: открыть MECHANIC, затем FUNCTION; заполнить контракт по исходному C.\n"
             "  Последний результат: организация каталога; новых фактов о бинарниках этот проход не добавляет.\n"
             "  Блокеры: фиксировать конкретные неизвестные поля/ABI/ветви со ссылкой module:address.\n"
             "  Реализация: отмечать путь исходника и точный объём переноса, а не общий статус всей механики.\n"
             "  Проверка: записывать сценарий, ожидаемый результат и фактически наблюдённый результат.\n"
             "  История: добавлять короткие датированные записи; незавершённое сохранять здесь.")
    if CATALOG.exists():
        previous = CATALOG.read_text(encoding="utf-8")
        boards = list(WORKBOARD.finditer(previous))
        assert len(boards) == previous.count("\n[WORKBOARD]\n") <= 1, "Malformed workboard"
        if boards:
            board = boards[0][1].rstrip("\n")

    lines = ["CRY OF FEAR — РАБОЧИЙ АТЛАС ВОССТАНОВЛЕНИЯ",
             "Формат 2 | UTF-8 | Срез декомпила: 2026-11-19", "",
             "НАЧАТЬ ЗДЕСЬ: этот файл читается выборочно, а не целиком.",
             f"Объём: {len(records)} адресных записей; {len(blocks)} с заметками аналитика; {text.count('  Файл: ')} исходных C-файлов.",
             "Разбор ≠ готовый перенос ≠ проверенное совпадение с оригиналом. Реализации здесь автоматически не аттестуются.",
             "Найти механику → взять функцию → прочитать REVIEW и исходный C → восстановить контракт → переносить → проверять.", "",
             "ОГЛАВЛЕНИЕ — номера строк начинаются с 1; в редакторе используйте переход к строке."]
    sections = [("mechanics", "Механики и короткий индекс функций"), ("workflow", "Как восстановить одну функцию"),
                ("workboard", "Рабочая задача и сохранённый прогресс"), ("coverage", "Покрытие, достоверность и SHA модулей"),
                ("reviewed", "Карточки с разбором — читать в первую очередь"),
                ("pending", "Неразобранные функции и структурные шаблоны"),
                ("references", "Указатели классов и общих строк"), ("frontier", "Часто вызываемые неразобранные функции")]
    lines += [f"  {title}: строка {line_ref('SECTION', key)}; якорь SECTION {key}" for key, title in sections]
    lines += ["", "БЫСТРЫЕ КОМАНДЫ (запуск из корня репозитория, только чтение каталога):",
              "  python tools/catalog_decompiled.py --find inventory --limit 12",
              "  python tools/catalog_decompiled.py --show server:0x100e4410",
              "  python tools/catalog_decompiled.py --mechanic doors",
              "  python tools/catalog_decompiled.py --section workboard",
              "  PowerShell: Get-Content decompiled/FUNCTION_CATALOG.txt -Encoding utf8 | Select-Object -Skip (СТРОКА-1) -First 100",
              "  Без параметров генератор обновляет опись и номера строк; REVIEW и WORKBOARD сохраняются.",
              "  Поиск: полный ID включает DLL, например server:0x100183d0. Один адрес без модуля неоднозначен.", "",
              "[SECTION mechanics]", "МЕХАНИКИ — карта чтения и план работы, не доказательство полного восстановления.",
              "Группы взяты из пометок аналитика. Синонимы ниже нужны для поиска. Связи вызовов остаются лексическими.",
              "Индекс: ID | рабочее имя | краткое назначение | L=строка полной карточки. Полный текст всегда в REVIEW."]
    for topic, (title, keywords, *_rest) in TOPICS.items():
        lines.append(f"  {topic}: {title} — {len(grouped[topic])} записей; L={line_ref('MECHANIC', topic)}")
    for topic, (title, keywords, route, check, doc) in TOPICS.items():
        lines += ["", f"[MECHANIC {topic}]", title, "  Искать также: " + keywords,
                  "  Маршрут чтения/переноса: " + route, "  До признания эквивалентности проверить: " + check]
        if doc:
            assert (ROOT / doc).is_file(), doc
            lines.append("  Подробный прежний разбор: " + doc)
        lines.append("  Функции с заметками (сортировка по DLL и адресу):")
        for key in sorted(grouped[topic]):
            block = blocks[key]
            name = review_field(block, "Предлагаемое имя")
            summary = compact(review_field(block, "Назначение"))
            short = summary if len(summary) <= 150 else summary[:147] + "..."
            lines += [f"    {key} | {name} | L={line_ref('FUNCTION', key)}", "      " + short]
        lines.append(f"[/MECHANIC {topic}]")
    lines += ["[/SECTION mechanics]", "", "[SECTION workflow]", "ВОССТАНОВЛЕНИЕ ОДНОЙ ФУНКЦИИ",
              "1. Выбрать одну точку входа по механике и её FUNCTION ID, сверить модуль и хеш исходника.",
              "2. Прочитать REVIEW, затем перечисленный C; при расхождении доверять доказательству, а заметку уточнить.",
              "3. Выписать контракт: входы/ABI → прочитанное состояние → условия отказа → изменения/эффекты → return.",
              "4. Проследить вызываемые helpers и виртуальные слоты; не переносить неизвестное поле как будто оно уже типизировано.",
              "5. Для сообщения сверить отправителя и получателя: ID, длину, порядок/типы полей и reset состояния.",
              "6. Найти существующую реализацию в src/ и прежний analysis/; переносить только установленную часть поведения.",
              "7. Записать проверяемые сценарии: обычный путь, границы, отказ, повторное действие и смена жизненного цикла.",
              "8. После переноса обновить REVIEW и WORKBOARD: путь к коду, что проверено, что осталось неизвестным.", "",
              "ШАБЛОН КОНТРАКТА (скопировать в WORKBOARD для текущей задачи или дополнить REVIEW):",
              "  Цель / ID: ...",
              "  Входы и calling convention: ... / не установлены",
              "  Читает: поля/глобальные данные с типами и адресами ...",
              "  Меняет / внешние эффекты: ...",
              "  Условия и переходы состояния: ...",
              "  Возвращает / ошибки: ...",
              "  Зависимости: module:address, virtual slot, сообщения, ресурсы ...",
              "  Доказательство: C + адрес/ветвь + evidence ID ...",
              "  Неизвестное и как проверить: ...",
              "  Реализация: путь и объём переноса / не сверена",
              "  Проверка: сценарий + наблюдение / не выполнялась", "",
              "ЛЕГЕНДА: статический разбор = заметка аналитика; шаблон = узкое структурное наблюдение;",
              "символ/метка Ghidra = зацепка, не установленная семантика; не разобрана = назначение неизвестно.",
              "Уверенность REVIEW относится к описанному поведению, а не ко всей механике и не к runtime-паритету.",
              "Менять вручную REVIEW и WORKBOARD. Остальная разметка и индексы производные и перезаписываются генератором.",
              "Игровые проверки — только по AGENTS.md: изолированный desktop, -nosound; обычный запуск здесь не выполняется.",
              "[/SECTION workflow]", "", "[SECTION workboard]", "[WORKBOARD]", board,
              "[/WORKBOARD]", "[/SECTION workboard]", "", "[SECTION coverage]"]

    def old_section(start, end):
        return old_lines[old_lines.index(start):old_lines.index(end)]

    lines += old_section("ОБЛАСТЬ И ДОСТОВЕРНОСТЬ", "КАК ПОЛЬЗОВАТЬСЯ")
    lines += old_section("СВОДКА УРОВНЯ РАЗБОРА", "КАРТА РЕКОНСТРУКЦИИ И НЕЗАКРЫТЫЕ ВОПРОСЫ")
    plan_start = old_lines.index("КАРТА РЕКОНСТРУКЦИИ И НЕЗАКРЫТЫЕ ВОПРОСЫ")
    plan_end = next(i for i, v in enumerate(old_lines) if v.startswith("ПРИОРИТЕТЫ СЛЕДУЮЩЕГО ПРОХОДА"))
    lines += old_lines[plan_start:plan_end]
    lines += ["[/SECTION coverage]", "", "[SECTION reviewed]", "ПОЛНЫЕ КАРТОЧКИ С АНАЛИТИЧЕСКИМИ ЗАМЕТКАМИ"]
    for key in sorted(blocks, key=lambda k: (list(TOPICS).index(topic_for(blocks[k])), k)):
        topic = topic_for(blocks[key])
        record_lines = records[key].splitlines()
        record_lines.insert(1, f"  Навигация: {topic} ({TOPICS[topic][0]}); карта L={line_ref('MECHANIC', topic)}")
        # Keep the complete original dependency lists later in the card, while
        # exposing a few already reviewed neighbors with usable names up front.
        for label, heading, cap in (("Вызовы в каталоге", "Разобранные вызываемые функции", 8),
                                    ("Вызывается из (только разрешённые текстовые связи)", "Примеры разобранных вызывающих функций", 3)):
            raw = review_field(records[key], label)
            neighbors = [k for k in re.findall(r"\b\w+:0x[0-9a-f]+", raw) if k in blocks and k != key]
            if neighbors:
                at = record_lines.index("[/REVIEW]") + 1
                extra = ["  " + heading + " (лексические связи):"]
                extra += [f"    {k} | {review_field(blocks[k], 'Предлагаемое имя')} | L={line_ref('FUNCTION', k)}"
                          for k in neighbors[:cap]]
                if len(neighbors) > cap:
                    extra.append(f"    Ещё {len(neighbors) - cap}: полный список адресов ниже в карточке.")
                record_lines[at:at] = extra
        lines += ["", *record_lines]
    lines += ["[/SECTION reviewed]", "", "[SECTION pending]",
              "ОСТАЛЬНЫЕ КАРТОЧКИ — известные структурные признаки не означают готовность к переносу.",
              "Порядок: модуль, затем адрес. Для поиска имени/строки используйте --find, для одной записи — --show."]
    current_module = None
    for key, record in sorted(records.items()):
        if key in blocks:
            continue
        module = key.split(":")[0]
        if module != current_module:
            lines += ["", f"[MODULE_PENDING {module}]", MODULE_NAMES[module]]
            current_module = module
        lines += ["", record]
    lines += ["[/SECTION pending]", "", "[SECTION references]"]
    lines += old_section("УКАЗАТЕЛЬ VTABLE-КЛАССОВ", "ПОЛНЫЙ КАТАЛОГ")
    lines += ["[/SECTION references]", "", "[SECTION frontier]",
              "Высокое число текстовых входящих связей помогает найти общие зависимости; это не порядок реализации механик.",
              "В этой очереди могут быть CRT/защитные обёртки, которые не требуется переписывать как игровой код."]
    start = next(i for i, v in enumerate(old_lines) if v.startswith("ПРИОРИТЕТЫ СЛЕДУЮЩЕГО ПРОХОДА"))
    end = old_lines.index("ИНДЕКС СТАТИЧЕСКИ РАЗОБРАННЫХ ФУНКЦИЙ")
    lines += old_lines[start + 1:end] + ["[/SECTION frontier]"]
    # Some entries are whole multi-line records: count physical lines, not list items.
    result = "\n".join(lines) + "\n"
    anchors = {}
    for n, line in enumerate(result.splitlines(), 1):
        match = re.fullmatch(r"\[(SECTION|MECHANIC|FUNCTION) ([\w:.-]+)\]", line)
        if match:
            anchor = match[1] + " " + match[2]
            assert anchor not in anchors, anchor
            anchors[anchor] = n
    result = re.sub(r"@LINE\(([^)]+)\)", lambda m: str(anchors[m[1]]), result)
    assert {m[1]: m[2].rstrip() for m in REVIEW.finditer(result)} == blocks, "Review content lost in layout"
    assert {m[1] for m in FUNCTION.finditer(result)} == set(records), "Functions lost in layout"
    return result


def read_catalog(find=None, show=None, mechanic=None, section=None, limit=20):
    text = CATALOG.read_text(encoding="utf-8")
    if show is not None:
        for m in FUNCTION.finditer(text):
            if m[1] == show.lower():
                print(m[0])
                return
        raise SystemExit("No such FUNCTION ID; specify module:0xaddress (use --find first).")
    if mechanic is not None or section is not None:
        kind, key = ("MECHANIC", mechanic) if mechanic is not None else ("SECTION", section)
        match = re.search(r"^\[" + kind + " " + re.escape(key) + r"\]\n.*?^\[/" + kind + " " + re.escape(key) + r"\]", text, re.M | re.S)
        if not match:
            raise SystemExit("Unknown section/mechanic; see the table of contents.")
        print(match[0])
        return
    if limit < 1:
        raise SystemExit("--limit must be positive")
    query = find.casefold().strip()
    if not query:
        raise SystemExit("--find requires a nonempty search term")
    found = []
    for m in FUNCTION.finditer(text):
        body = m[0]
        if query not in body.casefold():
            continue
        review = REVIEW.search(body)
        name = review_field(review[2], "Предлагаемое имя") if review else review_field(body, "Символ тела")
        summary = review_field(review[2], "Назначение") if review else review_field(body, "Назначение/граница знания")
        rank = (query != m[1].casefold(), query not in name.casefold(), review is None, m[1])
        found.append((rank, m[1], name, summary))
    for _rank, key, name, summary in sorted(found)[:limit]:
        print(f"{key} | {name}\n  {summary}\n  python tools/catalog_decompiled.py --show {key}")
    print(f"Matched {len(found)}; shown {min(limit, len(found))}.")


def build(notes):
    sources, identities, selected = load_sources()
    exports = load_exports()
    groups, names = resolve(sources, exports)
    blocks = review_blocks(notes, identities)
    keys = {m + ":" + a for m, a in groups}
    assert set(blocks) <= keys, "Review addresses absent from corpus: " + str(set(blocks) - keys)
    representatives = {}
    for key, group in groups.items():
        representatives[key] = sorted(group, key=lambda s: ("partial-pass" not in s["path"].parts, str(s["path"])))[0]
    incoming = defaultdict(set)
    outgoing = defaultdict(set)
    for (module, address), group in groups.items():
        for name in set(x for s in group for x in s["calls"]):
            candidates = names[(module, name)]
            if re.fullmatch(r"(?:thunk_)?FUN_[0-9a-fA-F]+", name):
                candidates = {"0x" + name.split("_")[-1].lower()}
            if len(candidates) == 1:
                target = next(iter(candidates))
                if (module, target) in groups:
                    incoming[(module, target)].add(address)
                    outgoing[(module, address)].add(target)
    counts = Counter()
    classification = {}
    for key, s in representatives.items():
        status, description = observation(s, exports[key])
        if key[0] + ":" + key[1] in blocks:
            status = "разобрана статически"
        counts[status] += 1
        classification[key] = status, description
    aliases = [s for s in sources if s["entry"] != s["requested"]]
    ambiguous = [s for s in sources if "не подтверждено" in s["address_basis"]]
    lines = [
        "CRY OF FEAR — КАТАЛОГ ФУНКЦИЙ И ПЛАН ВОССТАНОВЛЕНИЯ",
        "Срез сохранённого декомпила: 2026-11-19. Формат: UTF-8.", "",
        "ОБЛАСТЬ И ДОСТОВЕРНОСТЬ",
        f"Проверено по SHA-256 и включено файлов .c: {len(sources)}; записей модуль:адрес: {len(groups)}.",
        f"Статических разборов с описанием назначения: {len(blocks)}. Остальные записи — структурная опись, не готовая реконструкция.",
        f"Прежние captures с аналитическими заметками: {sum('captures' in s['path'].parts and s['module'] + ':' + s['entry'] in blocks for s in sources)} из {sum('captures' in s['path'].parts for s in sources)} файлов.",
        "Глубина ручного разбора различается: у больших функций часть ветвей, аргументов и полей остаётся неизвестной даже при наличии записи REVIEW.",
        f"Серверный общий проход содержит {sum('partial-pass' in s['path'].parts for s in sources)} из {selected} выбранных Ghidra функций; это не полный набор всей игры.",
        "Одна запись может ссылаться на несколько captures одной функции. Каждый исходный файл перечислен ровно один раз.",
        "Адреса — VA конкретной DLL, а не единое пространство всех модулей. Совпадения VA разных DLL не объединяются.",
        f"Селекторов внутри/вне возвращённого входа: {len(aliases)}; селекторов без отдельного подтверждения входа: {len(ambiguous)}.",
        "Никакой runtime-проверки в этом проходе нет. Псевдокод не является исходниками разработчиков и не собирается сам по себе.",
        "Предлагаемые имена — аннотации аналитика. FUN_/DAT_, this/in_ECX, типы, ABI и границы могут быть ошибками декомпилятора.",
        "Метки Library Function получены сопоставлением сигнатур Ghidra: встречаются ложные имена; не переносить их как факт.",
        "Вызовы/глобальные метки/строки извлечены из текста, а не из полного CFG/xref базы. Указатели и виртуальные вызовы не разрешены.",
        "Количество if/циклов описывает форму псевдокода, не точную сложность машинного кода. Упоминание глобальной метки не доказывает запись.",
        "Строки и классы — зацепки для проверки; по одному слову игровое назначение не присваивается.",
        "Оригинальные C-файлы и игровые ресурсы не изменяются. Источники и evidence ID сохранены возле каждой записи.", "",
        "КАК ПОЛЬЗОВАТЬСЯ",
        "Искать по адресу, имени класса, строке команды/ресурса или относительному пути файла.",
        "[FUNCTION module:address] — запись функции; [REVIEW ...] — сохраняемый ручной разбор.",
        "Чтобы уточнить назначение, редактировать блок REVIEW; генератор сохраняет его при повторном запуске.",
        "Обновление описи: python tools/catalog_decompiled.py (читает только текстовые выгрузки).",
        "Если менялись исходные C, сначала сверить/обновить их provenance: несовпадение SHA останавливает генератор.", "",
        "СВОДКА УРОВНЯ РАЗБОРА",
    ]
    lines += [f"  {status}: {count}" for status, count in sorted(counts.items())]
    lines += ["", "МОДУЛИ И ИДЕНТИЧНОСТЬ"]
    for module in sorted(identities):
        lines += [f"  {module}: {MODULE_NAMES[module]}", f"    SHA-256: {next(iter(identities[module]))}",
                  f"    Файлов: {sum(s['module'] == module for s in sources)}; записей: {sum(m == module for m, _ in groups)}"]
    lines += ["", "КАРТА РЕКОНСТРУКЦИИ И НЕЗАКРЫТЫЕ ВОПРОСЫ",
              "1. ABI и состояние: типизировать таблицы engine callbacks, entvars/private data, сохранение и восстановление; подтвердить thiscall/stdcall.",
              "   Начало: analysis/abi/capture.json, analysis/STATUS.md, GetEntityAPI/GetEntityAPI2/GiveFnptrsToDll.",
              "2. Игрок: здоровье, урон, stamina, движение, инвентарь, ключи, переключение оружия; восстановить связи server/client сообщений.",
              "   Начало: analysis/inventory/behavior.md, analysis/ui/inventory.md; далее ClientCommand, inventory callbacks и player virtual methods.",
              "3. Мир: двери, кнопки, trigger/Use/Touch/Think, взаимодействия, пазлы; фабрика entity лишь создаёт объект, не объясняет его AI/логику.",
              "   Начало: analysis/doors/README.md; связать vtable классов с KeyValue/Spawn/Use/Think и BSP entities.",
              "4. Бой и AI: оружие, патроны, melee, атаки NPC, расписания/tasks, условия, боссы; нужны поля объектов, vtable и control-flow, а не только exports.",
              "5. Кампания: смена карт, сюжетные флаги, скриптовые сцены, сохранения, концовки и co-op; текущая статическая опись не проверяет прохождение.",
              "6. Клиент: HUD, чат, меню, ввод, текст/шрифты, инвентарь, звук/музыка, OpenGL/Cg и эффекты; связывать сетевые поля с сервером.",
              "   Начало: analysis/ui/chat-client.md, analysis/ui/chat-server.md, analysis/menu/vgui.md, analysis/graphics/client-renderer.md.",
              "7. Паритет: переносить небольшие подтверждённые подсистемы; runtime-проверки отдельно по AGENTS.md, без захвата рабочего стола.",
              "   Библиотечные CRT/контейнеры не следует ошибочно считать игровыми механиками или приоритетом ручного переписывания.",
              "У всех ещё не разобранных записей статус сохранён явно. Следующий проход должен уменьшать этот список, а не только переименовывать FUN.",
              "", "ПРИОРИТЕТЫ СЛЕДУЮЩЕГО ПРОХОДА (число входящих текстовых связей, только этот корпус)"]
    todo = [(len(incoming[key]), key) for key in groups if key[0] + ":" + key[1] not in blocks
            and not representatives[key]["library_match"]]
    for count, key in sorted(todo, key=lambda x: (-x[0], x[1]))[:40]:
        lines.append(f"  {key[0]}:{key[1]} {representatives[key]['name']} — {count}; {classification[key][0]}")
    lines += ["", "ИНДЕКС СТАТИЧЕСКИ РАЗОБРАННЫХ ФУНКЦИЙ"]
    for key, block in sorted(blocks.items()):
        name = next((x.strip() for x in block.splitlines() if "Предлагаемое имя:" in x), "")
        subsystem = next((x.strip() for x in block.splitlines() if "Подсистема:" in x), "")
        lines.append(f"  {key} — {name}; {subsystem}")
    classes = defaultdict(set)
    shared_strings = defaultdict(lambda: defaultdict(set))
    for (module, address), group in groups.items():
        for s in group:
            for cls in s["classes"]:
                classes[(module, cls)].add(address)
            for literal in s["strings"]:
                if re.fullmatch(r'"[A-Za-z_][A-Za-z0-9_]{2,39}"', literal):
                    shared_strings[literal][module].add(address)
    lines += ["", "УКАЗАТЕЛЬ VTABLE-КЛАССОВ",
              "Это ссылки/присваивания vtable в телах, а не восстановленные определения классов или полный перечень их методов."]
    for (module, cls), addresses in sorted(classes.items()):
        lines.append(f"  {module} {cls}: " + ", ".join(module + ":" + a for a in sorted(addresses)))
    lines += ["", "ОБЩИЕ ИМЕНА МЕЖДУ МОДУЛЯМИ",
              "Точные совпадения коротких строковых литералов. Это точки поиска сообщений/интерфейсов, не доказанные сетевые пары."]
    for literal, modules in sorted(shared_strings.items()):
        if len(modules) > 1:
            lines.append("  " + literal + ": " + "; ".join(
                module + " " + ", ".join(sorted(addresses)) for module, addresses in sorted(modules.items())))
    lines += ["", "ПОЛНЫЙ КАТАЛОГ", ""]
    for (module, address), group in sorted(groups.items()):
        key = module + ":" + address
        s = representatives[(module, address)]
        status, description = classification[(module, address)]
        lines += [f"[FUNCTION {key}]", "  Символ тела: " + s["name"], "  Декларация Ghidra: " + s["signature"],
                  "  Статус: " + status]
        for row in exports[(module, address)]:
            lines.append("  Экспорт: " + (row["demangled"] or row["name"]) + "; evidence=" + row["evidence_id"])
        if key in blocks:
            lines += [f"[REVIEW {key}]", blocks[key], "[/REVIEW]"]
        else:
            lines.append("  Назначение/граница знания: " + description)
        if s.get("provider_name") and s["provider_name"] != s["name"]:
            lines.append("  Имя в индексе Ghidra: " + s["provider_name"])
        variants = {compact(clean(x["path"].read_text(encoding="utf-8"))) for x in group}
        if len(variants) > 1:
            lines.append(f"  Вариантов текста тела/типизации: {len(variants)}; ниже лексические данные объединены, эталон декларации — первый общий проход/первый capture.")
        for x in group:
            lines += ["  Файл: " + x["path"].relative_to(ROOT).as_posix(),
                      f"    SHA-256: {x['sha256']}; селектор={x['requested']}; вход={x['entry']}; основание={x['address_basis']}"]
            if x["requested"] != x["entry"]:
                lines.append("    ВНИМАНИЕ: селектор не равен входу возвращённой функции; не создавать отдельную функцию по селектору.")
            lines.append("    Provenance: " + x["metadata"] + ("; " + x["evidence"] if x["evidence"] else ""))
        for title, field in (("Классы vtable", "classes"), ("Именованные вызовы (лексически)", "calls"),
                             ("Глобальные метки (упоминания)", "globals"), ("Строки/ресурсы", "strings"),
                             ("Метки строк Ghidra (не точный текст)", "string_labels"),
                             ("Метки указателей (не разрешённые вызовы)", "pointer_labels"),
                             ("Машинные диапазоны из экспорта (псевдокод может разворачивать thunk)", "ranges"),
                             ("Предупреждения Ghidra", "warnings")):
            values = list(dict.fromkeys(v for x in group for v in x[field]))
            if values:
                lines.append("  " + title + ":")
                lines += ["    " + v for v in values]
        if any(x["indirect"] for x in group):
            lines.append("  Есть косвенные указатели/вызовы: получатели не разрешены по одному тексту.")
        outs = sorted(outgoing[(module, address)])
        ins = sorted(incoming[(module, address)])
        if outs:
            lines.append("  Вызовы в каталоге: " + ", ".join(module + ":" + a for a in outs))
        if ins:
            lines.append("  Вызывается из (только разрешённые текстовые связи): " + ", ".join(module + ":" + a for a in ins))
        lines.append(f"  Форма эталонного тела: if={s['if']}, циклы={s['loops']}, switch={s['switch']}.")
        if s["returns"]:
            lines.append("  Выражения return (Ghidra): " + "; ".join(x or "void" for x in s["returns"]))
        lines += ["[/FUNCTION]", ""]
    result = organize_catalog(lines, blocks)
    # Ensure every source is accounted for and every human review survived.
    assert result.count("  Файл: ") == len(sources)
    assert len(REVIEW.findall(result)) == len(blocks)
    # Reviews exist only in this text file: never truncate it before a complete
    # replacement is safely written. A failed run leaves the previous ledger.
    temporary = None
    try:
        with tempfile.NamedTemporaryFile(mode="w", encoding="utf-8", newline="\n",
                                         dir=CATALOG.parent, prefix=".catalog-", suffix=".tmp",
                                         delete=False) as f:
            temporary = Path(f.name)
            f.write(result)
            f.flush()
            os.fsync(f.fileno())
        temporary.replace(CATALOG)
    finally:
        if temporary is not None and temporary.exists():
            temporary.unlink()
    print(json.dumps({"files": len(sources), "entries": len(groups), "reviews": len(blocks),
                      "selector_mismatches": len(aliases), "unconfirmed_entries": len(ambiguous),
                      "status": dict(counts), "output_bytes": CATALOG.stat().st_size}, ensure_ascii=False))


if __name__ == "__main__":
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--notes", action="append", default=[], help="Merge analyst JSON; reviews persist in the text catalog")
    reading = parser.add_mutually_exclusive_group()
    reading.add_argument("--find", help="Search saved function cards; no regeneration")
    reading.add_argument("--show", help="Read one function by module:0xaddress")
    reading.add_argument("--mechanic", help="Read a mechanic guide and its short function index")
    reading.add_argument("--section", help="Read a section by its stable ID")
    parser.add_argument("--limit", type=int, default=20, help="Maximum search matches (default 20)")
    args = parser.parse_args()
    if any(value is not None for value in (args.find, args.show, args.mechanic, args.section)):
        if args.notes:
            parser.error("--notes cannot be combined with a read-only operation")
        read_catalog(args.find, args.show, args.mechanic, args.section, args.limit)
    else:
        build(args.notes)
