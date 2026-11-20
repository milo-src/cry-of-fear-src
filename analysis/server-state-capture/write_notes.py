"""Emit canonical review cards and searchable contract from static native findings."""
from pathlib import Path
import json
OUT=Path(__file__).resolve().parent
rows=[]
def add(a,name,summary,details):
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='persistence',summary_ru=summary,confidence='high',details_ru=details,evidence_paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-state-capture/{a}-0.asm','analysis/server-state-capture/evidence.json','analysis/server-state-capture/contract.md','analysis/server-state-restore/contract.md']))

add('10029070','StateManager_ZeroBanksPreserveHeader','Обнуляет два банка записей состояния, сохраняя первые четыре байта manager.',[
'Thiscall ECX=M, plain RET, полный EAX=M. Вызывает native memset1013f490(M+4,0,0x10f38). Собственной allocation, vptr store или записи M[0..3] нет. Поэтому BYTE M[0], который restore использует для допуска второго банка, этой функцией не инициализируется. WorldPrecache10120eb0 выделяет0x10f3c и вызывает этот constructor; поведение constructor не следует заменять zero-initialize всего объекта.',
'Геометрия из capture/restore: stride S=0x41c; A_i=M+4+i*S, B_i=A_i+0x879c, i=1..32. Каждый банк содержит33 stride, но slot0 эти обходы не выбирают; 2*33*0x41c=0x10f38. Constructor обнуляет также оба slot0. В этом теле нет чтения файлов, отправки сообщений или player callbacks.'
])
add('100e4ee0','Player_IsEmptyInventoryStringId','Возвращает полный EAX1 только для нулевого DWORD аргумента GUI slot.',[
'Native ABI: один stack argument, RET4; ECX не читается. XOR EAX,EAX; CMP DWORD[EBP+8],EAX; SETE AL. Полный EAX нормализован0/1, не AL-only с неопределёнными старшими битами. Любое ненулевое значение даёт0 независимо от содержимого строкового пула.',
'В producer1002a480 вызывается с ECX=player и DWORD P+2200+4*(slot-1), slot1..6. Значение0 означает пропуск GUI slot. Это только сравнение string_t с0: нет поиска слота, проверки classname, валидности указателя или наличия предмета. Имя реконструировано по этому caller; исходный авторский symbol неизвестен.'
])
add('1002a000','StateManager_CaptureGuiWeaponBySubstring','Находит предмет по подстроке classname и записывает classname pointer, clip и reserve в один GUI weapon slot.',[
'Thiscall ECX=M, stack(needleClassname,guiSlot,recordIndex,P), RET0x10. R=M+4+recordIndex*0x41c. Нет entry guards для M/P/needle или bounds recordIndex. Значимый success bool не устанавливается: успешная ветвь оставляет EAX=скопированный reserve DWORD, который может быть0; no-match завершает с EAX6. Caller1002a480 результат игнорирует.',
'Обходит шесть heads P+2514..2528 по порядку, затем item.next+164. Для каждого head точное case-sensitive weapon_action@101a9ae4 пропускает всю цепочку. На текущем node вычисляет globals.pStringBase+node.pev.classname; нулевой результирующий адрес или unsigned strlen<=1 также пропускает остаток этой цепочки. Эти guards не обеспечивают общую безопасность: первоначальное сравнение head уже разыменовывает строку.',
'Для остальных node вызывает case-sensitive strstr1013f5f0(nodeClassname,needleClassname), затем заново читает globalvars10223188. Нет exact-equality требования: needle weapon_foo может выбрать weapon_foobar. NULL match идёт к next. При match switch unsigned(guiSlot-1)<=5; invalid guiSlot продолжает обход next без записи. Raw jump table1002a464 содержит шесть целей1002a0d6/1002a165/1002a1f5/1002a285/1002a315/1002a3a5.',
'Каждая из шести ветвей повторно читает текущий head через сохранённый адрес head и заново сравнивает его classname с weapon_action. Совпадение здесь идёт к next текущего node; проверяется именно head, не текущий node. При несовпадении T=R+230+12*(guiSlot-1): DWORD T+0=raw resolved node classname pointer, T+4=node.clip(+1e4), T+8=P.ammo[2540+4*node.primaryAmmoType(+1dc)]. Возвращается после первого такого node.',
'Нет guard ammo index, в том числе для-1, нет clamp clip/reserve, проверки ItemInfo primaryName, очистки отсутствующего weapon slot, записи valid/name/mode или второго банка. Classname сохраняется как адрес в текущем string pool, не копия и не устойчивый file identifier. Восстановление10029090 позже использует exact classname и все подходящие chain nodes; это не симметричная пара поиска.'
])
add('1002a480','StateManager_CapturePlayerInFirstFreeRecord','Записывает состояние игрока в первый свободный A slot; для умершего копирует весь record также в B.',[
'Thiscall ECX=M, stack(P), RET4; нормализованный return value отсутствует. PNULL возвращает сразу. Иначе сначала BYTE M[0]=0, затем ищет первый i=1..32 с BYTE A_i.valid==0, где A_i=M+4+i*0x41c. Если все заняты, возвращает после изменения M[0]. Нет поиска уже существующего имени, проверки B_i.valid или предварительного memset выбранной записи. Дубликаты игрока могут занимать разные slots.',
'Вызывает P.virtual+bc() и проверяет полный EAX:0 выбирает dead branch, любое nonzero live branch. HP непосредственно для этого решения не читается. В обоих путях вызывает100e4d60 и нормализует его полный EAX через TEST/SETNE в BYTE R+14. Уже разобранный100e4d60 проверяет MP role либо Steam group callbacks; точный внешний Steam interface остаётся границей. R обозначает выбранный A_i.',
'Общий stats mapping:15 DWORD P+63c+4*j → R+1d8+4*j, j=0..14; BYTE P+678→R+214, DWORD P+67c→R+218, BYTE P+680→R+21c. Это66 значимых байт с padding, не сплошной memcpy66. В dead branch сначала R.mode(+1d0)=1, helper flag и stats, затем R.valid=1, R.name(+8)=pool+P.pev.netname(+1d4). REP MOVSD0x107 копирует весь R размера0x41c в B_i=R+0x879c, включая untouched/stale fields и padding. B_i перезаписывается без проверки его имени/valid.',
'Dead branch не заполняет HP, stamina, active weapon, quick slots и inventory fields. Live branch не копирует запись в B. M[0] остаётся0 после обоих путей; следовательно, сам producer не включает B lookup в restore10029090. Позднейшие owners этого header byte должны рассматриваться отдельно. Record и name хранят raw pointers, не persistable identifiers.',
'Live branch пишет mode0, helper flag, raw netname pointer. CVTTSS2SI float pev.health(+164)→signed DWORD R+48, float P+21f0→R+4c: дробная часть отбрасывается к нулю, round-mode не используется. Для NaN/out-of-range invalid conversion при masked exception даёт0x80000000; unmasked exception может прервать выполнение. Valid1 записывается между второй conversion и её store; это не атомарный snapshot. Затем DWORD P+3b4→R+4 и общий stats mapping.',
'Далее DWORD P+3dc/3e0/3e4→R+224/228/22c. Если P.active(+252c)!=NULL, записывает R+c=pool+active.pev.classname и R+10=заново прочитанный active.id(+168). Если activeNULL, оба поля остаются прежними. Цикл i=1..32 копирует BYTE P+3f4+i → R+3f8+i; P+3f4 и R+3f8 не входят в цикл. Три NUL-terminated byte-copy loop копируют P+204c/20cc/214c → R+278/2f8/378 без length bound; Ghidra int pointer не означает DWORD-copy. Превышение inline buffer способно затронуть соседние поля/records.',
'Для GUI slot1..6 читает DWORD P+2200+4*(slot-1), вызывает100e4ee0(value); full EAX!=0 пропускает. Иначе заново читает value, разрешает через pool и вызывает100dff70(P,"classname",resolvedGuiName). NULL результата пропускает. Затем cdecl strncmp1016f680(result,"weapon_",7); только full EAX0 допускает1002a000(M,result,slot,i,P). Отсутствующие/неоружейные слоты не обнуляются. Это выбор шести GUI описаний с последующим substring search по owned chains, а не сериализация всего item list.',
'Непосредственно в этом теле нет engine messages, открытия файлов, allocation или удаления предметов. Вызовы helper/virtual могут иметь собственные побочные эффекты; стабильность player/pool не проверяется. Saved-C direct callers сохранены с hashes в caller_search; это ограниченный поиск, не доказательство полного native callgraph. Переходы/смерть и очистка банков разобраны отдельно в server-state-lifecycle; обратное чтение — server-state-restore, текстовый cfg — server-state-reader.'
])
base='analysis/server-state-capture/'
rows[2]['evidence_paths'] += [base+'1013f5f0-0.asm']
rows[3]['evidence_paths'] += [base+'1016f680-native.asm',base+'100e4d60-0.asm',base+'100dff70-0.asm','analysis/server-multiplayer-flow/contract.md','analysis/inventory/behavior.md']
(OUT/'notes.json').write_text(json.dumps(dict(functions=rows),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
intro='''# Server state capture — pass16

Static original hl.dll evidence only. No target execution or game changes.
See evidence.json for original DLL SHA256, full saved-C ranges, exact native bytes,
RTTI, descriptor tables, strings and bounded caller-search provenance.

## Navigation

- 10029070 — constructor and bank geometry.
- 100e4ee0 — GUI empty-string-id predicate.
- 1002a000 — six-chain substring selection and six output triples.
- 1002a480 — producer, live/dead paths and exact field mapping.
- Consumer: [state restore](../server-state-restore/contract.md).
- Owners/reset: [state lifecycle](../server-state-lifecycle/contract.md).
- Text format is separate: [state reader](../server-state-reader/contract.md).

All offsets below are hexadecimal unless a decimal count is explicitly stated.
M=manager; P=player; R=A_i=M+4+i*0x41c; B_i=R+0x879c; i=1..32.
Names are proposed, not recovered author symbols. Four primary entries only;
captured support functions are not counted again. Full local branches are reviewed;
external callbacks, file-description parser internals and complete caller reachability
are not made complete by this packet.
'''
for r in rows:
 intro+='\n## '+r['address']+' — '+r['proposed_name']+'\n\n'+r['summary_ru']+'\n\n'+'\n\n'.join(r['details_ru'])+'\n'
intro+='''
## Remaining boundaries

Track header M[0] writers across lifecycle; track raw string-pool pointer lifetime
across map changes; distinguish GUI description lookup from owned items; inspect
missing concrete callbacks before implementing. Do not silently repair the original
stale-field, first-free, substring, unbounded-copy, or integer-conversion behavior
in documentation. Dynamic reproduction of these edge cases was not performed.
'''
(OUT/'contract.md').write_text(intro,encoding='utf8',newline='\n')
print('Wrote4 primary cards and contract')
