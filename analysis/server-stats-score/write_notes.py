"""Generate the three score cards and their readable static contract."""
from pathlib import Path
import json
OUT=Path(__file__).resolve().parent
rows=[]
def add(a,name,summary,details):
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='saving',summary_ru=summary,confidence='high',details_ru=details,evidence_paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-stats-score/{a}-0.asm','analysis/server-stats-score/evidence.json','analysis/server-stats-score/contract.md','analysis/server-stats-score/verify_paths.py','analysis/server-unlock-callers/contract.md','analysis/server-bullet-traces/contract.md']))
add('100dbfb0','PlayerStats_UpdateHitRatio',
 'Пересчитывает и сохраняет процентное отношение двух signed счётчиков; нулевой знаменатель даёт100, а не0.',[
 'Native thiscall ECX=player, без stack args, plain RET, float32 результат загружается FLD в ST0. Всегда записывает те же float32 bits в player+64c. Изначальное значение100.0 взято из PE101a1f1c; EAX не является контрактом результата.',
 'Читает denominator=DWORD player+63c как signed32. Если denominator<=0, numerator вообще не читается и результат100.0. При denominator>0 читает signed numerator+640: numerator>0 даёт float32(100.0 * float32(float32(numerator)/float32(denominator))); numerator==0 даёт+0.0; numerator<0 даёт100.0. Это конкретный порядок guards, не общая защита ratio от всех неверных данных.',
 'Положительная ветка: MOVD обоих integers → CVTDQ2PS каждой величины → DIVSS numerator/denominator → MULSS100 → FSTP отсутствует: значение сохранено MOVSS в локальный float, FLD загружает уже округлённое значение. Нет double intermediate, integer division или clamp до100. Округление integer→float может терять точность начиная с больших значений; MXCSR rounding mode не устанавливается этой функцией.',
 'При обычном masked floating-point режиме и неизменных входных DWORD denominator/numerator положительны и конечны, поэтому ratio из этой функции конечен и неотрицателен, но может быть намного больше100. Последующие NaN guards scorer имеют смысл как native branch semantics при изменённой памяти/окружении, а не доказанный путь получения NaN из обычных положительных counters.',
 'Raw PLAYER descriptor10217fe8 сохраняет общий playerstats как type14,count80,offset638; отдельные названия полей63c/640/64c не записаны. Из [bullet traces](../server-bullet-traces/contract.md) доказаны writes63c перед pellet loop и640/648 по последней цели, а не обязательный счёт каждого pellet. Поэтому имя HitRatio аналитическое; нельзя обещать точный UI-процент попаданий всего оружия или учитывать пропущенные producers.',
 'Прямые callers в зафиксированной .text: оба scorer10092ce0/10092f60 и три Use100a24b0/100a2710/100a51c0. В scorer ST0 явно отбрасывается FSTP ST0, затем ratio заново читается изplayer+64c. Расчёт здесь не отправляет сообщение, не меняет counters и не проверяет NULL player; consumers могут вызывать его повторно.'
])
add('10092ce0','PlayerStats_CampaignScore',
 'Вычисляет сумму пяти оценок по playerstats и возвращает её только при точном BYTE678==1.',[
 'Native cdecl(player*), plain RET, полный EAX32; Ghidra char и char temporaries не означают truncation до8бит. До вызова100dbfb0 вычисляет T=wrap32(player+668 + 60*player+66c) через SHL4/SUB/LEA, сохраняетESI. Затем thiscall100dbfb0 с ECX=player, FSTP ST0 и чтение обновлённого ratio+64c. Даже при финальном BYTE678!=1 этот side effect ratio выполняется.',
 'Компонент selector+67c (signed DWORD): значения1,2,3,4 дают2,4,6,7 соответственно; любое другое0. Это не bitmask и не накопление за несколько modes. Native имя этого члена opaque playerstats не известно; присваивать название difficulty только по ожидаемому смыслу нельзя.',
 'Компонент ratio R из+64c: [30,40)→1;[40,50)→2;[50,60)→3;[60,70)→4;[70,80)→5;[80,90)→6;[90,+Inf]→7. Ниже30, -Inf и unordered NaN→0. Guards COMISS/JB и CMOVA/CMOVAE исключают unordered из положительных buckets при masked exceptions. Верхнего предела100 нет; endpoint точно принадлежит следующему интервалу.',
 'Signed DWORD+650: <=5→7;6..10→6;11..25→5;26..40→4;41..60→3;61..70→2;>70→1. Signed DWORD+644: <=2→7;3..10→6;11..20→5;21..30→4;31..40→3;41..45→2;>45→1. Отрицательные counters попадают в первый интервал и получают7; не clamp их к0 перед восстановлением формулы.',
 'Временной компонент использует signed интерпретацию уже обёрнутого32бит T: <=150→7;151..180→5;181..240→4;241..300→3;301..360→2;361..420→1;>420→0. Оценки6 в этом компоненте нет. Не умножает668 на60 и не переводит в часы; порядок668+60*66c и границы взяты из инструкций, единицы producers ещё не доказаны.',
 'После суммы selector+ratio+650+644+T каждый native exit проверяет ровно BYTE player+678==1: при совпадении полный EAX=sum, иначе0, включая byte2/255. Обычный диапазон суммы2..35 при включённом gate; без gate0. NULL player, отрицательные inputs и arithmetic overflow не отклоняются заранее. Wrap32 времени может превратить большое положительное значение в отрицательное и дать максимальный time component.',
 'Результат — сырой score, не display rank: Credits100a2710 и Stats100a51c0 выбирают этот helper при BYTE player+680==0, затем применяют свои шкалы rank/reward. Прямые callsites100a2ff1 и100a520a подтверждены E8 bytes. Scorer не читает680, не открывает settings, не выбирает награды и не отправляет Credits; эти действия остаются в caller contract.'
])
add('10092f60','PlayerStats_AlternateScore',
 'Вычисляет альтернативную сумму selector, ratio и короткой временной шкалы, с тем же точным BYTE678 gate.',[
 'Native cdecl(player*), plain RET, полный EAX32. Сначала ECX=player→100dbfb0; затем читает66c (10092f6f), отбрасывает ST0 через FSTP (10092f75), читает selector67c (10092f77), ratio64c (10092f84),668 (10092f8c) и завершает wrap32 T=668+60*66c через LEA (10092f9a). Это иной порядок, чем10092ce0, который снимает T до helper. Ratio обновляется даже при финальном gate!=1.',
 'DWORD selector+67c равный любому из1,2,3,4 даёт4, любое другое значение0. Native четыре CMP/LEA/CMOVNE выглядят как последовательное накопление, но при неизменном selector может сработать ровно одно равенство. Сравнения не принимают combined modes или ненулевое значение вообще.',
 'Ratio компоненты: [30,40)→1;[40,50)→2;[50,60)→3;[60,70)→4;[70,80)→5;[80,90)→6;R>=90→7;R<30 либо unordered NaN→0. Здесь инструкции добавляют bucket к имеющемуся score, а не заменяют его. Финальный CMOVB отменяет +7 при R<90 или unordered. +Inf получает7, -Inf0 при masked exceptions; результат обычного ratio helper конечен.',
 'Signed T: <=8→7;9→6;10→5;11→4;12→3;13→2;14→1;>14→0. После веток9..14 ещё одна CMP8/CMOVG добавляет7 только при<=8; отрицательное обёрнутое T тоже получает7. Здесь нет компонентов DWORD+650 и+644: эти counters вообще не читаются.',
 'Возвращает selector+ratio+T (диапазон0..18) только при BYTE678==1, иначе0. 32битная арифметика и signed ветвления, NULL guards отсутствуют. Gate не отменяет уже записанный ratio+64c. EAX0 может означать выключенный gate или нулевую сумму, отдельного success флага нет.',
 'Credits100a2710 и Stats100a51c0 выбирают этот helper при BYTE680!=0. Прямые callsites100a2f76,100a5203 и повторный100a5221; в Stats alternate score может пересчитываться дважды в одном Use. Шкалы ранга в callers различаются; этот helper не выбирает display rank, не читает engine rules/multiplayer и не доказывает самостоятельную coop policy.'
])
intro='''# Playerstats: ratio и два итоговых score

Только статический реверс оригинального server hl.dll, SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`. Три новых primary entry; сохранённые C — псевдокод, не исходники. Native ASM задаёт ABI, ширину результата, порядок округлений и signed/NaN guards. DLL не исполнялась. Все offsets/адреса — hex, числа шкал — decimal.

Навигация: [bullet producers](../server-bullet-traces/contract.md) → ratio100dbfb0 → scorer10092ce0/10092f60 → [Credits/Stats callers](../server-unlock-callers/contract.md). Native PLAYER table даёт один непрозрачный80-byte playerstats блок638..687; имена отдельных членов не выдуманы. Ten прямых E8 ссылок в .text подтверждены instruction boundary; indirect/runtime graph этим не исчерпан. Три остальных owner тела сохранены только как navigation support и не считаются новыми REVIEW.

`capture.py` снимает C hashes, bounded objdump и native PE fields/constants; `verify.py` проверяет bytes/notes. `verify_paths.py` интерпретирует ограниченное подмножество сохранённых инструкций на синтетических inputs: это статическая проверка таблиц, не запуск оригинальной DLL и не runtime parity. Округление replay предполагает nearest-even float32; другие MXCSR/exception modes остаются границей. Тестовая инъекция NaN/Inf после helper проверяет scorer guards, не достижимость такого ratio в игре.

Продолжение pass14: server-stats-lifecycle доказывает девять исходных labels текстового writer1004a6e0, включая+664 seconds,+668 minutes,+66c hours; Use100a4080 связывает+67c сdifficulty и+684 сcof_subtitlelanguage. Открыты остальные producers/reset/save/load80-byte stats, native callers writer и обратные readers100c5300/10029090, другие weapons/kill accounting, FP environment, client UI labels и runtime callbacks. Ни один из трёх entry не устанавливает полноту всей системы статистики.

'''
(OUT/'notes.json').write_text(json.dumps(dict(functions=rows),ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
text=intro
for r in rows:text+='## '+r['address']+' — '+r['proposed_name']+'\n\n'+r['summary_ru']+'\n\n'+'\n\n'.join(r['details_ru'])+'\n\n'
(OUT/'contract.md').write_text(text,encoding='utf-8')
print('Wrote3 score cards')
