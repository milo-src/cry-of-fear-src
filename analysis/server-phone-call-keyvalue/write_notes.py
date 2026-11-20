"""Generate one complete local KeyValue contract and catalog card."""
from pathlib import Path
import json
O=Path(__file__).resolve().parent;e=json.loads((O/'evidence.json').read_text(encoding='utf8'))
details=[
'Native CPhoneCall::KeyValue entry10060140..10060e28: ECX=this, один stack pointer K, RET4. K.key находится+4, K.value+8, DWORD handled+0c. EBX сохраняет this, ESI — K, EDI — начальный key pointer. Ни this/K/key, ни value на локальном уровне не проверяются на NULL. Возврат EAX не является status: integer/audio ветви оставляют результат converter/AllocString, float ветви не определяют meaningful integer result; handled — отдельная запись после field store.',
'Проверяются ровно65 literal keys в порядке subtitlenumber1..32, subtitletime1..32, audiofile. Первые три сравнения встроены: exact byte-by-byte до NUL, по два байта за проход. Остальные62 используют cdecl1000aba0 с тем же exact case-sensitive правилом и full EAX0/1. Это не распознавание числового suffix: ведущий ноль, знак, дополнительный пробел, другой регистр или номер33 не принимаются данным слоем. Одна успешная ветвь немедленно возвращает; совпадение префикса без совпадения terminating NUL не подходит.',
'subtitlenumberN, где N от1 до32, вызывает cdecl1016b55e(K.value) и записывает полный EAX как DWORD в this+e8+4*N. Получаются ec..168. Helper передаёт в1016a01f locale=NULL, источник байтов с end pointer=NULL, base10, signed mode1. Shared native parser пропускает locale whitespace, допускает один знак, читает цифры до неподходящего байта; отсутствие цифр даёт0. Signed overflow насыщается до INT_MAX/INT_MIN, errno22h, что подтверждает10169fb8 и основной parser. Primary не читает errno/end pointer, не ограничивает subtitle ID, не валидирует его наличие и не делает float conversion. ASCII12.75→12, -4junk→-4; повторный ключ перезаписывает поле.',
'subtitletimeN, где N от1 до32, вызывает cdecl1016f5ec(K.value), затем FSTP DWORD в this+16c+4*N, то есть170..1ec. Wrapper1016f5ec является отдельным native entry: передаёт (value,NULL) в1016da44, очищает8 stack bytes и возвращает ST0 без собственной обработки. Primary округляет x87 результат до float32 согласно FP control word. Нет проверки знака, конечности, сортировки времён, прибавления globals.time или проверки результата. Если converter вернул NaN/infinity/negative, primary не фильтрует их; это условное утверждение о store, не доказательство конкретного синтаксиса таких литералов. Полный grammar/locale/errno/overflow backend1016da44 здесь не разобран. Ghidra FID_conflict__atof и wchar_t* не доказывают wide-string ABI; native call получает неизменный K.value pointer.',
'audiofile вызывает engine AllocString через10223054 (slot67 таблицы10222f48, initializer100b4aa0), передав K.value без изменения. Полученный DWORD string_t сохраняется в this+1f0; даже нулевой результат не проверяется, handled становится1. Ключ не открывает файл, не добавляет путь или extension, не запускает звук и не выполняет precache. Владение строкой передаётся engine string pool; native descriptor m_sAudioFile имеет type17 (sound string), а не raw char buffer.',
'Во всех65 успешных ветвях порядок одинаков: conversion/callback → store соответствующего поля → DWORD K.handled=1 → возврат. Входной handled не проверяется, прежнее поле не очищается до converter, остальные slots не изменяются. Нет транзакции, общего reset, allocation локального массива, увеличения current subtitle или запуска think. Ошибка либо невозврат внутри callback не откатывает уже совершённые им изменения и не гарантирует запись handled.',
'Если все65 сравнений не совпали, вызывает1000dba0 с исходными this и K, затем RET4; сам до fallback handled не меняет. Этот конкретный base helper принимает movewith→engine AllocString→this+18, skill→signed atoi→this+60, style→signed atoi→this+64, выставляя handled1; любой иной key ставит handled0. Следовательно неизвестный phone key может быть принят базовым слоем. Прямого рекурсивного phone parsing, generic entvars parsing или logging в этом локальном fallback нет.',
'Storage подтверждено native save table10212a80 с7 descriptors: m_iSubtitleNumber type10, basee8,count33; m_fSubtitleNumberNext type0, base16c,count33; m_sAudioFile type17,+1f0; m_iCurrentSubtitle type10,+1f4; m_hPhoneUser type4,+1f8; m_bAnswered type12,+200; m_pPlayer type4,+e0. Здесь type IDs записаны десятично. Primary пишет только indices1..32 обоих33-элементных массивов; index0 поe8/16c, current1f4, handles и answered не меняет. Эти поля принадлежат CPhoneCall, не одноимённым offsets player/monster. В type12 нельзя подменять native generic DWORD width догадкой BYTE по префиксу m_b.',
'Связь класса не выводится из одного имени: factory1005fb60 записывает vptr101b5a20 в allocation204h, raw vtable+34 содержит10060140, locator101fb414/type descriptor1021d790 несёт .?AVCPhoneCall@@. Restore10060e90 и Save10060ed0 ссылаются на literal CPhoneCall и эту же таблицу7. Эти тела сохранены как supporting evidence, без дополнительных REVIEW. Последующая интерпретация времени/ID, выбор пользователя, Play/End и network payload находятся в отдельных lifecycle/runtime пакетах.'
]
note=dict(module='server',address='0x10060140',proposed_name='CPhoneCall_KeyValueSubtitleNumbersTimesAndAudio',subsystem='entity-core',confidence='high',summary_ru='Разбирает все65 ключей телефонного звонка:32 subtitle ID,32 float-времени и audiofile; остальные передаёт базовому KeyValue.',details_ru=details,evidence_paths=['decompiled/server/partial-pass/functions/0x10060140.c','analysis/server-phone-call-keyvalue/10060140-0.asm','analysis/server-phone-call-keyvalue/evidence.json','analysis/server-phone-call-keyvalue/contract.md','analysis/server-state-reader/contract.md','analysis/server-alias-state/contract.md'])
(O/'notes.json').write_text(json.dumps({'functions':[note]},ensure_ascii=False,indent=2)+'\n',encoding='utf8')
parts=['''# CPhoneCall: полный KeyValue10060140

Оригинальный server hl.dll; статический разбор полного C и native диапазона10060140..10060e28. Новая карточка только одна. Поддержка не считается новым REVIEW; float conversion wrapper1016f5ec сохранён только как ASM, без выдуманного C. Игру/DLL не исполняли, ресурсы/порт не меняли.

Предлагаемое имя: CPhoneCall_KeyValueSubtitleNumbersTimesAndAudio. Адреса и смещения hexadecimal, количества и type IDs — decimal. evidence.json содержит SHA исходного PE, C/ASM, literals, таблицы и все65 пары branch→store; verify.py повторяет независимый PE mapping и проверяет каждую ветвь.

## Локальный контракт
''']
parts.extend('\n'+d+'\n'for d in details)
parts.append('''
## Все ключи и машинные точки записи

Таблица получена из всех native literal branches, не из предположения о цикле. В машинном теле цепочка развёрнута. Следующая ветвь — цель mismatch; каждая строка имеет собственные conversion, handled store и RET4. Все соответствующие callsite bytes/targets сохранены в evidence.key_branches.

| Ключ | Literal VA | Branch | Mismatch → | This offset | Conversion | Field store | Handled store | RET4 |
|---|---|---|---|---|---|---|---|---|
''')
for r in e['key_branches']:
 parts.append('| '+' | '.join('`'+str(r[k])+'`'for k in ['key','key_pointer','branch_start','next_branch','storage_offset','conversion','store_address','handled_address','ret_address'])+' |\n')
parts.append('''
## Native persistence layout

| Native name | Offset | Type ID | Count | Flags |
|---|---|---|---|---|
''')
for r in e['save_tables'][0]['fields']:parts.append(f"| {r['name']} | {r['offset']} | {r['type_id']} | {r['count']} | {r['flags']} |\n")
parts.append('''
## Границы и воспроизведение

- Numeric integer path: полные сохранённые1016b55e/1016a01f/10169fb8 и прежний [reader contract](../server-state-reader/contract.md). Полный locale classifier и error handlers не переобъявлены завершёнными.
- Float path: установлены entry1016f5ec, его CALL1016da44(value,NULL), ST0 и FSTP float32. Полная floating parser grammar и platform-specific error modes остаются точной внешней границей; нельзя обещать поддержку exponent/hex/NaN по одному библиотечному имени.
- Base unknown-key path: [alias-state](../server-alias-state/contract.md), native1000dba0 сохранён и проверен полностью. DispatchKeyValue/порядок загрузки карты не выводятся из одного callback.
- Потребители данных: [phone lifecycle](../server-phone-call-lifecycle/contract.md). Этот пакет не доказывает, что все32 введённых элемента будут проиграны, либо что nonfinite time допустим для дальнейшего scheduler.

`python analysis/server-phone-call-keyvalue/capture.py`, затем `write_notes.py` и `verify.py`. Capture вызывает только objdump и читает PE как данные. Verify проверяет native SHA, все bounded bytes, descriptors/RTTI/API, literal sequence и полную схему всех65 unrolled branches. Код игры, исходный бинарник и shared catalog не изменяются.
''')
(O/'contract.md').write_text(''.join(parts),encoding='utf8')
print('Wrote 1 card and 65-key contract')
