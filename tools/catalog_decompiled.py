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
    result = "\n".join(lines) + "\n"
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
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--notes", action="append", default=[], help="Merge analyst JSON; reviews persist in the text catalog")
    build(parser.parse_args().notes)
