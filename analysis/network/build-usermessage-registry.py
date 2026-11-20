"""Index one saved registration function and bounded saved-C lexical references.

This is navigation, not a whole-binary xref/call graph or payload verifier.
Original hash-pinned server/client DLLs are read only to resolve raw strings.
"""
import hashlib
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[2]
OUT = Path(__file__).resolve().parent
sys.path.insert(0, str(ROOT / 'tools'))
from index_evidence import pe_metadata

SOURCE = ROOT / 'decompiled/server/partial-pass/functions/0x100e5fc0.c'
BINARY = Path('D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll')
EXPECTED = '751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641'
blob = BINARY.read_bytes()
assert hashlib.sha256(blob).hexdigest() == EXPECTED
pe = pe_metadata(blob)
CLIENT_BINARY = BINARY.with_name('client.dll')
# Keep the complete native hash explicit; do not accept another build by name.
CLIENT_EXPECTED = 'e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360'
client_blob = CLIENT_BINARY.read_bytes()
assert hashlib.sha256(client_blob).hexdigest() == CLIENT_EXPECTED
client_pe = pe_metadata(client_blob)


def raw_string(va, data=blob, metadata=pe):
    for section in metadata['sections']:
        delta = va - int(metadata['image_base'], 16) - int(section['rva'], 16)
        if 0 <= delta < section['raw_size']:
            offset = section['raw_offset'] + delta
            bound = min(256, section['raw_size'] - delta)
            tail = data[offset:offset + bound]
            n = tail.index(0) + 1
            b = tail[:n]
            return dict(va=hex(va), end_exclusive=hex(va+n), file_offset=hex(offset),
                        bytes_hex=b.hex(), sha256=hashlib.sha256(b).hexdigest(),
                        ascii=b[:-1].decode('ascii'))
    raise ValueError(hex(va))


source = SOURCE.read_text(encoding='utf-8')
register = re.compile(r'(_?DAT_([0-9a-f]+)) = \(\*DAT_10223074\)\(("[^"]*"|&DAT_[0-9a-f]+),(0x[0-9a-f]+|\d+)\);')
messages = []
raw_names = []
for index, m in enumerate(register.finditer(source)):
    token = m[3]
    if token.startswith('"'):
        name, origin = json.loads(token), 'saved_Ghidra_C_literal'
    else:
        r = raw_string(int(token.split('_')[1], 16))
        raw_names.append(r)
        name, origin = r['ascii'], 'hash_pinned_original_PE_string'
    u = int(m[4], 0)
    size = u if u < 0x80000000 else u - 0x100000000
    messages.append(dict(order=index+1, name=name, name_source=origin,
                         source_expression=token, registered_size=size,
                         size_kind='variable' if size == -1 else 'fixed',
                         id_global='0x'+m[2], id_value='runtime return from RegUserMsg; not the slot address',
                         registration_line=source.count('\n', 0, m.start())+1,
                         server_references=[], client_references=[]))
assert len(messages) == source.count('= (*DAT_10223074)(')
assert len({r['name'] for r in messages}) == len(messages)
assert len({r['id_global'] for r in messages}) == len(messages)
by_global = {r['id_global'][2:]: r for r in messages}
by_name = {r['name']: r for r in messages}
global_re = re.compile(r'\b_?DAT_('+'|'.join(by_global)+r')\b')
begin_re = re.compile(r'\(\*DAT_10223000\)\((.*?)\);', re.S)
func_re = re.compile(r'\b(?:FUN|thunk_FUN)_([0-9a-f]{8})\s*\([^;{}]*\)\s*\{')
literal_re = re.compile(r'"([^"\n]*)"')
hook_re = re.compile(r'\(\*DAT_101b2650\)\("([^"]+)",\s*(?:FUN|thunk_FUN)_([0-9a-f]{8})\);')
all_hook_re = re.compile(r'\(\*DAT_101b2650\)\(("[^"]+"|&DAT_[0-9a-f]+),\s*(?:FUN|thunk_FUN)_([0-9a-f]{8})\);')
reference_files = {}
capture_cache = {}
unresolved_client_hooks = []
resolved_client_hooks = []
raw_client_names = {}
other_client_hook_names = []


def filedata(path):
    b = path.read_bytes()
    # Some retained captures contain CR-CR-LF. Match Path.read_text universal
    # newline semantics so line anchors and excerpts agree, while hashing bytes.
    t = b.decode('utf-8', errors='replace').replace('\r\n', '\n').replace('\r', '\n')
    fm = func_re.search(t)
    address = '0x'+fm[1] if fm else None
    return t, address, hashlib.sha256(b).hexdigest()


def capture_provenance(path, digest):
    manifest = path.parent/'capture.json'
    if not manifest.is_file():
        return {}
    if manifest not in capture_cache:
        capture_cache[manifest] = json.loads(manifest.read_text(encoding='utf-8-sig'))
    record = next((r for r in capture_cache[manifest].get('functions', []) if r['file']==path.name), None)
    if not record:
        return {}
    assert record['sha256']==digest, str(path)
    selector = record.get('procedure', '')
    return dict(capture_manifest=manifest.relative_to(ROOT).as_posix(),
                evidence_id=record.get('evidence_id'),
                saved_selector_address=selector.removeprefix('ram:') if selector.startswith('ram:') else selector,
                entry_address_source='actual FUN declaration in saved C; selector is separate')


def index_scope(paths, side):
    manifest = []
    for path in paths:
        t, address, digest = filedata(path)
        rel = path.relative_to(ROOT).as_posix()
        manifest.append(rel+'\t'+digest+'\n')
        if path == SOURCE:
            continue
        found = {}
        if side == 'server':
            spans = [(m.start(), m.end(), m.group(0)) for m in begin_re.finditer(t)]
            for m in global_re.finditer(t):
                r = by_global[m[1]]
                line = t.count('\n', 0, m.start())+1
                call = next((s for start,end,s in spans if start <= m.start() < end), None)
                kind = 'direct_MessageBegin_argument_in_C' if call else 'other_lexical_global_reference'
                ref = dict(path=rel, function_address=address, line=line, kind=kind,
                           excerpt=' '.join((call if call else t.splitlines()[line-1]).split()))
                if re.fullmatch(r'0x[0-9a-f]{8}', path.stem):
                    ref['saved_selector_address'] = path.stem
                found.setdefault(r['name'], []).append(ref)
        else:
            hooks = {(m.start(), m.end()): m[2] for m in hook_re.finditer(t)}
            for m in all_hook_re.finditer(t):
                token = m[1]
                extra = dict(path=rel, function_address=address,
                             line=t.count('\n', 0, m.start())+1,
                             source_expression=token, handler_wrapper='0x'+m[2])
                extra.update(capture_provenance(path, digest))
                if token.startswith('&'):
                    reference_files[rel] = digest
                    try:
                        va = int(token.split('_')[1], 16)
                        if token not in raw_client_names:
                            raw_client_names[token] = raw_string(va, client_blob, client_pe)
                        extra['name'] = raw_client_names[token]['ascii']
                        extra['name_source'] = 'hash_pinned_original_client_PE_string'
                        extra['raw_string_va'] = hex(va)
                    except (ValueError, UnicodeError) as error:
                        extra['resolution_error'] = str(error)
                        unresolved_client_hooks.append(extra)
                        continue
                    resolved_client_hooks.append(extra)
                    if extra['name'] in by_name:
                        ref = dict(extra, kind='raw_PE_resolved_hook_call_DAT_101b2650_in_C',
                                   excerpt=' '.join(t.splitlines()[extra['line']-1].split()))
                        found.setdefault(extra['name'], []).append(ref)
                    else:
                        other_client_hook_names.append(extra)
                elif json.loads(token) not in by_name:
                    extra['name'] = json.loads(token)
                    other_client_hook_names.append(extra)
                    reference_files[rel] = digest
            for m in literal_re.finditer(t):
                if m[1] not in by_name:
                    continue
                handler = next((v for (start,end),v in hooks.items() if start <= m.start() < end), None)
                line = t.count('\n', 0, m.start())+1
                ref = dict(path=rel, function_address=address, line=line,
                           kind='named_hook_call_DAT_101b2650_in_C' if handler else 'name_literal_only',
                           excerpt=' '.join(t.splitlines()[line-1].split()))
                if handler:
                    ref['handler_wrapper'] = '0x'+handler
                found.setdefault(m[1], []).append(ref)
        if found:
            reference_files[rel] = digest
        for name, refs in found.items():
            by_name[name][side+'_references'].extend(refs)
    return dict(file_count=len(paths), path_sha256_manifest_digest=hashlib.sha256(''.join(manifest).encode()).hexdigest(),
                digest_definition='SHA256 of sorted relative-path<TAB>file-SHA256<LF> UTF-8 records; no absolute paths/timestamps.')


server_paths = sorted((ROOT/'decompiled/server/partial-pass/functions').glob('*.c'))
client_paths = sorted((ROOT/'decompiled/client/captures').rglob('*.c'))
scopes = dict(server=index_scope(server_paths, 'server'), client=index_scope(client_paths, 'client'))

# Audit names outside this one native registration block, without asserting that
# they are built-in engine messages or unused. SDK matches are comparison only.
sdk_path = ROOT/'external/hlsdk-portable/cl_dll/hud.cpp'
sdk_text = sdk_path.read_text(encoding='utf-8')
sdk_hooks = {m[1]: sdk_text.count('\n', 0, m.start())+1
             for m in re.finditer(r'^\s*HOOK_MESSAGE\(\s*(\w+)\s*\);', sdk_text, re.M)}
outside_names = sorted({r['name'] for r in other_client_hook_names})
outside_native_refs = {name: [] for name in outside_names}
engine_paths = sorted((ROOT/'decompiled/engine/captures').rglob('*.c'))
engine_manifest = []
for path in server_paths + engine_paths:
    t, address, digest = filedata(path)
    rel = path.relative_to(ROOT).as_posix()
    if path.is_relative_to(ROOT/'decompiled/engine/captures'):
        engine_manifest.append(rel+'\t'+digest+'\n')
    for m in literal_re.finditer(t):
        if m[1] in outside_native_refs:
            outside_native_refs[m[1]].append(dict(path=rel, function_address=address,
                line=t.count('\n', 0, m.start())+1, kind='name_literal_only',
                excerpt=' '.join(t.splitlines()[t.count('\n', 0, m.start())].split())))
            reference_files[rel] = digest
outside_audit = [dict(name=name,
    hook_occurrences=[r for r in other_client_hook_names if r['name']==name],
    native_server_engine_literal_references=outside_native_refs[name],
    classification='outside_main_registration_with_SDK_hook_analogue' if name in sdk_hooks else 'outside_main_registration_without_this_SDK_hook_analogue',
    sdk_comparison=([dict(path=sdk_path.relative_to(ROOT).as_posix(), line=sdk_hooks[name],
                         sha256=hashlib.sha256(sdk_path.read_bytes()).hexdigest())] if name in sdk_hooks else []),
    limitation='SDK resemblance is not original-engine builtin ID proof; bounded native name-literal absence does not prove unused, missing handler, or absence of raw-label/indirect registration.')
    for name in outside_names]
for r in messages:
    direct = [x for x in r['server_references'] if x['kind'] == 'direct_MessageBegin_argument_in_C']
    hooks = [x for x in r['client_references'] if 'handler_wrapper' in x]
    r['counts'] = dict(server_lexical_occurrences=len(r['server_references']),
                       server_unique_functions=len({x['function_address'] for x in r['server_references'] if x['function_address']}),
                       server_unique_source_files=len({x['path'] for x in r['server_references']}),
                       server_unresolved_entry_source_files=len({x['path'] for x in r['server_references'] if x['function_address'] is None}),
                       direct_begin_occurrences=len(direct),
                       direct_begin_unique_functions=len({x['function_address'] for x in direct if x['function_address']}),
                       direct_begin_unique_source_files=len({x['path'] for x in direct}),
                       direct_begin_unresolved_entry_source_files=len({x['path'] for x in direct if x['function_address'] is None}),
                       client_reference_occurrences=len(r['client_references']),
                       client_literal_occurrences=sum(x['kind']!='raw_PE_resolved_hook_call_DAT_101b2650_in_C' for x in r['client_references']),
                       client_resolved_raw_hook_occurrences=sum(x['kind']=='raw_PE_resolved_hook_call_DAT_101b2650_in_C' for x in r['client_references']),
                       client_distinct_hook_wrappers=len({x['handler_wrapper'] for x in hooks}))
stats = dict(registrations=len(messages), fixed=sum(r['registered_size']>=0 for r in messages),
             variable=sum(r['registered_size']==-1 for r in messages),
             zero_size=sum(r['registered_size']==0 for r in messages),
             with_server_lexical_reference=sum(bool(r['server_references']) for r in messages),
             with_direct_begin_candidate=sum(r['counts']['direct_begin_occurrences']>0 for r in messages),
             with_client_named_hook=sum(r['counts']['client_distinct_hook_wrappers']>0 for r in messages),
             client_raw_hook_occurrences=len(resolved_client_hooks)+len(unresolved_client_hooks),
             client_resolved_raw_hook_occurrences=len(resolved_client_hooks),
             client_resolved_raw_hook_unique_labels=len(raw_client_names),
             client_unresolved_raw_hook_occurrences=len(unresolved_client_hooks),
             client_unresolved_raw_hook_unique_labels=len({r['source_expression'] for r in unresolved_client_hooks}),
             client_outside_registration_hook_occurrences=len(other_client_hook_names),
             client_outside_registration_unique_names=len(outside_names),
             server_unresolved_entry_occurrences=sum(x['function_address'] is None for r in messages for x in r['server_references']),
             server_unresolved_entry_source_files=len({x['path'] for r in messages for x in r['server_references'] if x['function_address'] is None}))
result = dict(schema=2, purpose='Bounded saved-C navigation index; not a complete call graph or verified payload registry.',
              binary=dict(path=BINARY.as_posix(), sha256=EXPECTED, image_base=pe['image_base']),
              client_binary=dict(path=CLIENT_BINARY.as_posix(), sha256=CLIENT_EXPECTED, image_base=client_pe['image_base']),
              registration=dict(address='0x100e5fc0', path=SOURCE.relative_to(ROOT).as_posix(),
                                sha256=hashlib.sha256(SOURCE.read_bytes()).hexdigest(), guard='DAT_1022649c == 0',
                                engine_callback_slot='0x10223074', abi_callback='RegUserMsg'),
              scan_scope=dict(server_directory='decompiled/server/partial-pass/functions',
                              client_directory='decompiled/client/captures', **scopes),
              limitations=[
                  'Only 8000 saved server partial-pass C files and existing client captures; not all discovered native functions.',
                  'Lexical global reference is not necessarily a sender; direct MessageBegin arguments are identified syntactically, without control-flow/alias recovery.',
                  'Ghidra can lose MessageBegin arguments, e.g. two PlayMP3 stop calls. No reference does not prove unused or absent.',
                  'Named declarations without a parsed FUN address retain function_address:null. saved_selector_address comes only from a partial-pass filename; it is a navigation selector, not an asserted function entry. Unique-function counts exclude null; source-file and unresolved-entry counts remain separate.',
                  'Client name literals are not proof of a hook unless the explicit DAT_101b2650 call is present; wrappers are not automatically decoded. Resolved raw &DAT names retain original expressions, PE bytes and call sites separately; failed resolutions remain explicit.',
                  'Repeated client captures of the same function are preserved as separate evidence paths and deduplicated only by handler address in counts.',
                  'Registered fixed size does not establish field layout or prove every sender/receiver agrees; variable -1 does not mean unlimited size.',
                  'Runtime message numeric IDs, recipient routing, payload schemas, and functions not saved here remain outside this automatic index.',
              ], raw_name_strings=raw_names, stats=stats, referenced_file_sha256=reference_files,
              raw_client_name_strings=list(raw_client_names.values()),
              resolved_client_hook_labels=resolved_client_hooks,
              unresolved_client_hook_labels=unresolved_client_hooks,
              client_outside_registration_audit=outside_audit,
              outside_audit_scan=dict(server_scope='same server scope as scan_scope.server',
                  engine_directory='decompiled/engine/captures', engine_file_count=len(engine_paths),
                  engine_manifest_sha256=hashlib.sha256(''.join(engine_manifest).encode()).hexdigest(),
                  comparison='Exact quoted literals only; no raw-label, alias or control-flow recovery'),
              client_hook_names_not_in_this_registration=other_client_hook_names, messages=messages)
assert hashlib.sha256(BINARY.read_bytes()).hexdigest() == EXPECTED
assert hashlib.sha256(CLIENT_BINARY.read_bytes()).hexdigest() == CLIENT_EXPECTED
(OUT/'usermessage-registry.json').write_text(json.dumps(result, ensure_ascii=False, indent=2)+'\n', encoding='utf-8', newline='\n')

lines = ['# Индекс регистрации user messages', '',
         'Навигация по оригинальной серверной `LinkUserMessages100e5fc0` и сохранённому C-корпусу. '+
         'Это статический RE; игра, REA-процесс и порт не запускались/не изменялись.', '',
         f"Регистраций **{stats['registrations']}**: фиксированных **{stats['fixed']}** (включая {stats['zero_size']} нулевых), variable `-1` **{stats['variable']}**. "+
         f"В {len(server_paths)} server C найдены обращения к {stats['with_server_lexical_reference']} ID-слотам, "+
         f"явные аргументы MessageBegin — для {stats['with_direct_begin_candidate']} сообщений. "+
         f"В {len(client_paths)} client capture C найдены named hook calls для {stats['with_client_named_hook']} имён.", '',
         'Источник: `decompiled/server/partial-pass/functions/0x100e5fc0.c`; SHA и строки регистрации — '+
         'в [JSON](usermessage-registry.json). Вся функция защищена `DAT_1022649c == 0`; '+
         'каждый ID-слот получает runtime-результат `RegUserMsg` через `10223074`. Адрес слота не является числовым ID сообщения.', '',
         'Пять имён, оставленных декомпилятором как `&DAT_*`, прочитаны из оригинального `hl.dll` SHA-256 '+EXPECTED+'. '+
         'JSON содержит их VA, file offset, NUL-terminated bytes и SHA. Остальные имена взяты из C literals. '+
         'Четыре raw client hook labels разрешены отдельно по hash-pinned client.dll; исходные выражения и все повторные call sites сохранены. '+
         'Воспроизведение: `python analysis/network/build-usermessage-registry.py`.', '',
         '## Как выбирать следующий протокол', '',
         '1. Найти имя/ID в таблице, затем запись `messages` в JSON. `server_references` дают адрес функции, файл, строку и точный excerpt.',
         '   Если адрес входа не извлечён из объявления именованной функции, `function_address:null` сохранён. `saved_selector_address` берётся из имени partial-pass файла; селектор не объявляется адресом входа.',
         '2. `direct_MessageBegin_argument_in_C` — видимый аргумент вызова; `other_lexical_global_reference` — только обращение к глобалу. Условия и payload нужно читать в теле.',
         '3. `client_references` отличает named hook call от простого literal; поле `handler_wrapper` даёт следующий адрес. Повторные captures одной функции не являются разными handlers.',
         '   `resolved_client_hook_labels` сохраняет raw call sites, `raw_client_name_strings` — оригинальные PE bytes; неуспешные чтения остаются в `unresolved_client_hook_labels`. Hook names вне server registration block лежат отдельно с bounded audit и SDK comparison, не объявляются встроенными engine messages.',
         '4. Перед новым захватом проверить REVIEW адресов в `decompiled/FUNCTION_CATALOG.txt` и существующие analysis-контракты. Этот индекс не присваивает им статус полноты.', '',
         '**Ограничение:** 8000 partial-pass C — не все функции DLL. Ghidra теряет аргументы/alias-связи; ноль найденных отправителей или hooks не доказывает отсутствие протокола. '+
         'Fixed size не раскрывает поля и не гарантирует согласие всех senders/readers; `-1` означает variable registration, не безлимитную сеть. '+
         'Полный граф, runtime IDs, маршрутизация, типы полей и проверки лимитов не выводятся автоматически.', '',
         'Нулевой H также не означает, что протокол неизвестен существующим ручным REVIEW: индекс намеренно не подменяет semantic-каталог. '+
         'Подробности проверки client labels и внешних имён: [usermessage-hook-resolution.md](usermessage-hook-resolution.md).', '',
         '## Разрешение клиентских имён', '',
         f"Raw hook occurrences: {stats['client_raw_hook_occurrences']}; разрешено {stats['client_resolved_raw_hook_occurrences']} вхождений / {stats['client_resolved_raw_hook_unique_labels']} labels; осталось {stats['client_unresolved_raw_hook_occurrences']} вхождений / {stats['client_unresolved_raw_hook_unique_labels']} labels. Повторы captures сохранены.", '',
         '| PE label | Имя | Hook wrapper |', '|---|---|---|',
         *[f"| `{token}` | {r['ascii']} | "+', '.join(sorted({x['handler_wrapper'] for x in resolved_client_hooks if x['source_expression']==token}))+' |' for token,r in raw_client_names.items()], '',
         f"Вне основного registration block: {len(outside_names)} имён / {len(other_client_hook_names)} call-site вхождений. "+
         'Совпадение с локальным SDK — только сходство происхождения, не доказанный исходный handler, builtin ID или неиспользуемый код.', '',
         '| Имя | Hook wrappers | HOOK_MESSAGE в локальном HLSDK | Server/engine literal occurrences |', '|---|---|---|---:|',
         *[f"| {r['name']} | "+', '.join(sorted({x['handler_wrapper'] for x in r['hook_occurrences']}))+f" | {'да' if r['sdk_comparison'] else 'нет'} | {len(r['native_server_engine_literal_references'])} |" for r in outside_audit], '',
         '## Таблица', '',
         'R = число уникальных server C-файлов с ID-обращениями; S = из них с видимым MessageBegin; H = разные client hook wrapper адреса. '+
         'Отдельные JSON counters `*_unique_functions` считают только извлечённые ненулевые адреса; `*_unresolved_entry_source_files` сохраняют число источников без распознанного адреса входа. '+
         'Номера строк и все совпадения находятся в JSON. Первый sender — точка входа для чтения, не единственный отправитель.', '',
         '| Имя | Размер | ID-слот | R / S / H | Первый sender / hook |',
         '|---|---:|---|---:|---|']
for r in messages:
    direct = sorted({x['function_address'] for x in r['server_references'] if x['kind']=='direct_MessageBegin_argument_in_C' and x['function_address']})
    direct_refs = [x for x in r['server_references'] if x['kind']=='direct_MessageBegin_argument_in_C']
    hooks = sorted({x['handler_wrapper'] for x in r['client_references'] if 'handler_wrapper' in x})
    c = r['counts']
    fallback = next((x['saved_selector_address']+' (selector)' for x in direct_refs if x.get('saved_selector_address')), direct_refs[0]['path'] if direct_refs else '—')
    nav = (direct[0] if direct else fallback)+' / '+(', '.join(hooks) if hooks else '—')
    lines.append(f"| {r['name']} | {r['registered_size']} | `{r['id_global']}` | {c['server_unique_source_files']} / {c['direct_begin_unique_source_files']} / {c['client_distinct_hook_wrappers']} | {nav} |")
lines += ['', f"Неизвлечённый адрес входа: {stats['server_unresolved_entry_occurrences']} server occurrences в {stats['server_unresolved_entry_source_files']} разных C-файлах. Эти источники доступны по selector/path; null не считается отдельной native function.", '',
          '## Где индекс пока не даёт прямого sender', '',
          ', '.join('`'+r['name']+'`' for r in messages if not r['counts']['direct_begin_occurrences'])+'.', '',
          'Это список для проверки сохранённого C/alias/неполного захвата, а не список неиспользуемых сообщений. '+
          'Для уже исследованных movement, music, custom textures и UI используйте существующие контракты; данный проход не переаннотирует их payload.', '']
(OUT/'usermessage-registry.md').write_text('\n'.join(lines), encoding='utf-8', newline='\n')

catalog=(ROOT/'decompiled/FUNCTION_CATALOG.txt').read_text(encoding='utf-8')
review=re.search(r'^\[REVIEW server:0x100e5fc0\]\n(.*?)^\[/REVIEW\]',catalog,re.M|re.S)
assert review
def fields(label):
    return re.findall(r'^  '+label+r': (.*)$',review[1],re.M)
row=dict(module='server', address='0x100e5fc0', proposed_name=fields('Предлагаемое имя')[0],
         subsystem=fields('Подсистема')[0], summary_ru=fields('Назначение')[0], confidence=fields('Уверенность')[0],
         details_ru=fields('Разбор'), evidence_paths=fields('Основание'))
row['summary_ru']='Регистрирует 155 user messages; индекс имён, размеров и ID-слотов дополнен навигацией по сохранённому C.'
new_details = [
    f"Весь registration block под DAT1022649c==0: {stats['registrations']} уникальных имён/слотов, fixed{stats['fixed']} включая zero{stats['zero_size']}, variable{stats['variable']}. ID=runtime return RegUserMsg10223074, не адрес глобала.",
    'Пять &DAT labels разрешены hash-pinned PE strings: '+', '.join(r['source_expression']+'='+r['name'] for r in messages if r['name_source']=='hash_pinned_original_PE_string')+'.',
    'usermessage-registry.json сохраняет lexical server references и явные MessageBegin args отдельно; client literal и hook calls также различаются. Это навигация по8000 partial-pass C и существующим clientcaptures, не полный native callgraph/доказательство использования или полного payload.'
    f"Client raw hook names: {len(raw_client_names)} labels / {len(resolved_client_hooks)} occurrences разрешены отдельно через hash-pinned client PE; unresolved {len(unresolved_client_hooks)}. Это подтверждает имя явного HookUserMsg call, но не декодирует wrapper.",
    f"Вне этого server registration block остаётся {len(outside_names)} client hook имён. SDK-аналоги и bounded native literal references приведены отдельно; встроенные engine IDs или неиспользуемость не предполагаются."
]
for detail in new_details:
    if detail not in row['details_ru']:
        row['details_ru'].append(detail)
for p in ['analysis/network/usermessage-registry.json','analysis/network/usermessage-registry.md','analysis/network/build-usermessage-registry.py']:
    if p not in row['evidence_paths']:row['evidence_paths'].append(p)
client_review=re.search(r'^\[REVIEW client:0x1006cf00\]\n(.*?)^\[/REVIEW\]',catalog,re.M|re.S)
assert client_review
def client_fields(label):
    return re.findall(r'^  '+label+r': (.*)$', client_review[1], re.M)
client_row=dict(module='client', address='0x1006cf00', proposed_name=client_fields('Предлагаемое имя')[0],
    subsystem=client_fields('Подсистема')[0], summary_ru=client_fields('Назначение')[0],
    confidence=client_fields('Уверенность')[0], details_ru=client_fields('Разбор'),
    evidence_paths=client_fields('Основание'))
for detail in [
    'Четыре raw имени явных HookUserMsg calls разрешены по оригинальному client PE: '+', '.join(token+'='+r['ascii'] for token,r in raw_client_names.items())+'. Все 12 повторных occurrences сохранены как provenance, а не разные функции.',
    'ViewMode, GasMask, ValClass, Feign, Detpack, BuildSt, RandomPC, Spectator и AllowSpec отсутствуют в проверенном server block100e5fc0. Восемь имён имеют локальный SDK hook-аналог, GasMask — нет. Это не доказательство engine builtin ID, отсутствия sender во всей DLL или неиспользуемого handler.',
    'Разрешённый raw label Logo также отсутствует в основном registration block: итог 10 внешних имён / 30 вхождений, 9 с SDK hook-аналогом. Среди 155 зарегистрированных сообщений доказанные client hooks увеличились с 69 до 72 (Blur, Boat, MOTD).'
]:
    if detail not in client_row['details_ru']:
        client_row['details_ru'].append(detail)
for review_row in [row, client_row]:
    for p in ['analysis/network/usermessage-registry.json','analysis/network/usermessage-registry.md',
              'analysis/network/build-usermessage-registry.py','analysis/network/usermessage-hook-resolution.md']:
        if p not in review_row['evidence_paths']:
            review_row['evidence_paths'].append(p)
(OUT/'usermessage-registry-notes.json').write_text(json.dumps(dict(functions=[row,client_row],subsystems=[]),ensure_ascii=False,indent=2)+'\n',encoding='utf-8',newline='\n')
print(json.dumps(stats, indent=2))
