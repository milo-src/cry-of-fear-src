"""Canonical primary notes; proposed names are not original symbols."""
from pathlib import Path
import json
OUT=Path(__file__).resolve().parent
rows=[]
def add(a,name,summary,details):
 rows.append(dict(module='server',address='0x'+a,proposed_name=name,subsystem='ai',summary_ru=summary,confidence='high',details_ru=details,evidence_paths=[f'decompiled/server/partial-pass/functions/0x{a}.c',f'analysis/server-follower-speech-policy/{a}-0.asm','analysis/server-follower-speech-policy/evidence.json','analysis/server-follower-speech-policy/contract.md','analysis/server-follower-behavior/contract.md','external/hlsdk-portable/engine/eiface.h']))
add('10104a10','Follower_SelectScheduleByTypeAndSpeechState','Выбирает native schedule descriptor по типу, speech masks, здоровью и положению client edict1.',[
'Thiscall ECX=this, stack(type), RET4, полный EAX=указатель schedule. Raw selector10104d08 имеет47байт для type1..2f; jump table10104cf0 имеет6целей. Только1,0f,2d,2e,2f имеют специальные ветви; все остальные, включая unsigned(type-1)>2e, вызывают1008ca70(this,type) и передают его результат. Никакого local assignment schedule+230 здесь нет.',
'Type2d→10219e98 MoveAway;2e→10219f00 MoveAwayFollow;2f→10219ebc MoveAwayFail. Type0f вызывает RandomLong(0,99): signed result<2→10219dbc Idle Speak Wait, иначе102131e4 IdleStand. Не ограничивает неожиданный отрицательный ответ RNG. Все10 возвращаемых native descriptors, имена, task pairs, interrupt/sound masks декодированы в evidence.schedules; значения tasks не заменены догадками по SDK.',
'Type1 сначала snapshot DWORD flags=this+368. Если mask8 отсутствует, сразу10219e38 Idle Hello. Иначе при mask10==0 и ordered health<=max_health*double0.75 вызывает speech virtual1a0(payload=this+3b8,duration,1.0,2.0); duration=RandomFloat(float2.8,float3.2), ST0→float32. ПОСЛЕ callback OR flags с10 и возврат IdleStand. Если эта ветвь не взята, аналогично mask20==0 и ordered health<=max_health*double0.5: payload+3bc, OR20, IdleStand. Float health/max_health сначала расширяются до double, произведение double; COMISD/JB исключает unordered. Это собственное здоровье, не HP follow target. NaN/отрицательные значения не нормализуются.',
'Если обе health-ветки не взяты, virtual244()!=0 и RandomLong(0,DWORD(this+36c)*2)==0 дают10219d88 Idle Speak; удвоение DWORD может переполниться, нет clamp. Иначе10104f50(this) проверяет ordered float(this+3dc)>now, полный EAX0/1. При false и condition DWORD+180 mask200000, затем RandomLong(0,6)==0, запрашивает engine PEntityOfEntIndex(1). NULL edict вызывает base1008ca70(this,исходный type1), а не IdleStand. Edict.free/private/alive/IsPlayer здесь не проверяются.',
'При nonNULL edict1 вызывает10119320(&edict+0d0), native tail-jump engine MakeVectors(slot19), затем берёт self.pev.origin и edict.origin(+88). Считает XY-distance: float subtraction/products/sum, double sqrt (negative input support1016be90), затем float32. Только ordered distance<128.0 допускает101181f0(edictOrigin,selfOrigin,&globals.v_forward+28); helper нормализует XY self−edict, делает XY dot и возвращает ST0, здесь снова округляемый до float32. Ordered dot>=this+208 даёт10219f78 TlkIdleWatchClientStare; иначе10219f64 TlkIdleWatchClient. Вертикальная разница не участвует; globals forward меняется MakeVectors, не сохраняется/восстанавливается. Unordered distance/dot уходит в обычный WatchClient.',
'Если watch-ветка не была выбрана, повторно вызывает10104f50: true→10219fac TlkIdleEyecontact, false→IdleStand. Это повторное чтение текущего time/deadline после callbacks, не reuse первого bool. Возврат descriptor не доказывает его runtime запуск или concrete owner; native exact LE32 scan primary адреса по raw .rdata/.data не нашёл vtable binding.'
])
add('10104f70','Follower_KeyValueSentenceOverrides','Разбирает четыре точных ключа речевых overrides и передаёт остальные базовому KeyValue.',[
'Thiscall ECX=this, stack(KeyValueData* K), RET4. Последовательно точные case-sensitive ключи K.key(+4): UseSentence→this+3c4; UnUseSentence→3c8; RefusalSentence→3cc; SpeakAs→3d0. Первые три сравниваются inline до NUL, четвёртый через1000aba0, который возвращает полный EAX1 при exact equality. Значения string_t не являются готовыми char pointers.',
'При match вызывает engine AllocString(slot67,address10223054,K.value(+8)), записывает полный EAX в соответствующее поле, затем DWORD K.handled(+c)=1 и выходит. NULL/empty value, allocation failure или повторный key не проверяются; прежний override перезаписывается. При отсутствии всех четырёх match вызывает100bf970(this,K), не очищая handled самостоятельно. Нет meaningful boolean return, case folding, sound calls или связывания override с payload полями в этом локальном теле.'
])
add('10105dc0','Follower_StopFollowingClearTargetAndMaybeSchedule','Прекращает следование player-target, при необходимости произносит реплику и очищает schedule.',[
'Thiscall ECX=this, stack(clearSchedule,speak), RET8. Сначала10017780(&this+18c) требует serial-valid target EHANDLE; затем100177a0(&this+18c) получает private и target.virtuald0()!=0. Между getter и virtual нет private NULL/lifetime guard. Не прошедший gate возвращает без изменений. Это m_hTargetEnt18c, не m_hEnemy184.',
'Если own memory BYTE+2ec mask1 отсутствует и speak!=0, вызывает RandomFloat(2.8,3.2), затем own virtual1a0(payload+388,duration float32,1.0,2.0). После speech копирует текущие два DWORD target18c/190 в speech-recipient EHANDLE3e0/3e4. Это raw copy после callback, не сохранённый до него target; при запрете речи recipient не меняется. Успех звука не проверяется.',
'Далее если DWORD this+2b8==1 вызывает100c1a70(this): его локальный tail после100c1ab0 пишет DWORD pev+130=0, memory+2ec&=~20h, +2b8=0,+2d0=1. Полный downstream route callback не приписывается текущему body. Затем10017740(&this+18c,NULL) очищает target. Если clearSchedule!=0,1000aad0 обнуляет taskStatus+22c,schedule+230,index+234; иначе эти три поля напрямую не меняются.',
'Наконец проверяет10017780(&this+184), то есть отдельный enemy EHANDLE. При nonzero пишет ideal monster state+228=2; при отсутствии enemy ideal state оставляет прежним. Наличие enemy не проверяется через IsPlayer/alive/private. Return EAX не нормализуется в success; concrete virtual240 binding к этой функции не доказан одним совпадением семантики.'
])
add('10105210','Follower_PlayScriptedSpeechAndSetRecipient','Устанавливает use deadline, вызывает четырёхаргументную речь и назначает speech recipient после callback.',[
'Thiscall ECX=this, шесть stack DWORD(payload,float duration,float volume,float attenuation,groupFlag,recipient), RET18h. Если groupFlag==0, сначала101058c0(this): selectors0..5 через10104040(this,previous,selector,1), у каждого candidate.virtual78()!=NULL вызывает returnedObject.virtual1a8() без аргументов. Это visible group callback dispatch; фактический stop/sound эффект зависит от concrete callback. Nonzero groupFlag весь этот обход пропускает.',
'После optional group callback читает текущий globals.time и пишет float32 this+3c0=duration+now (ADDSS). Ghidra int-looking store не означает float→int conversion. Далее own virtual1a0(payload,duration,volume,attenuation), все четыре исходных DWORD без clamps, и только после возврата10017740(&this+3e0,recipient). Recipient может бытьNULL; порядок важен при reentrant callback. Нет success/result проверки, guard payload или сохранения прежнего deadline/recipient.'
])
add('10105280','Follower_PlaySentenceUpdateSpeechTimers','Маркирует speech deadlines и вызывает sound wrapper либо sentence-group playback по первому байту имени.',[
'Thiscall ECX=this, stack(char*name,float duration,float volume,float attenuation), RET10h. nameNULL полностью пропускает тело. Для любого nonNULL, включая пустую строку, сначала10105f30(this,duration): ordered duration<=0 даёт own deadline3dc=now+3.0, positive/NaN даёт duration+now. Затем заново читает now и записывает global10230d78=float32(double(float32(now+duration))+2.0). Это отдельный общий deadline; отрицательная duration здесь не заменяется3.0. Callback/global timing может различаться, нет finiteness guard.',
'Берёт edict=this.pev.pContainingEntity(+20c). Если name[0]==ASCII!, получает pitch=10104d40(this), то есть RandomLong(0,3)+DWORD this+370, и вызывает cdecl100fc9f0(edict,channel2,name,volume,attenuation,flags0,pitch). Имя с ведущим ! передаётся целиком, без удаления префикса.',
'В остальных случаях получает тот же pitch, но вызывает cdecl100fe450(edict,name,volume,attenuation,flags0,pitch,channelOverride=-1). PUSH-1 перед10104d40 не является аргументом pitch helper: тот plain RET без stack args; значение остаётся седьмым аргументом100fe450, что подтверждает ADD ESP,1ch после playback. Support100fe450 при успешном sentence-group lookup заменяет-1 на channel2 перед100fc9f0; failure/выключенная sentence table может не вызвать звук. Полная группа/voice backend описана в server-sentence-lifecycle, звук в игре здесь не проверялся.',
'После любого обычного возврата playback-wrapper OR this+368 с8, независимо от его EAX/успеха. Не устанавливает speech recipient EHANDLE и не откатывает timers при несуществующей группе. Возврат не обещает normalised bool. Concrete virtual1a0→этот entry и writers sentence overrides не доказаны raw absence scan; нельзя объявлять все derived actors использующими данный путь.'
])
e=json.loads((OUT/'evidence.json').read_text(encoding='utf8'))
text='''# Follower speech policy — pass17

Only static original hl.dll analysis, no target execution. Five complete primary
bodies, original bytes, supporting C, save descriptors, numeric dispatch and ten
schedule descriptors are pinned in evidence.json. All offsets and masks below are
hexadecimal; numeric ranges, counts, seconds and float constants are decimal.

## Navigation and ownership boundary

SelectSchedule10104a10 → native schedule/task data → [follower tasks](../server-follower-tasks/contract.md).
KeyValue10104f70 sets string_t overrides; their complete initialization remains separate.
StopFollowing10105dc0 distinguishes target18c from enemy184.
Speech10105210 → virtual1a0; local playback10105280 → sentence/sound wrappers.
[Gates](../server-follower-gates/contract.md) and [behavior](../server-follower-behavior/contract.md)
cover adjacent local contracts. No concrete numeric vtable binding for these five
entries was found by the exact raw data scan; the exported FollowerUse name identifies
that entry only. This is not proof that the code is unreachable or fully reconstructed.
'''
for r in rows:text+='\n## '+r['address']+' — '+r['proposed_name']+'\n\n'+r['summary_ru']+'\n\n'+'\n\n'.join(r['details_ru'])+'\n'
text+='\n## Native returned schedule data\n\nTask IDs/masks are hexadecimal; arguments are float32 values. Exact raw bytes and pointers are in evidence.json.\n\n| Address | Name | Interrupt / sound | Task ID(argument), in order |\n|---|---|---|---|\n'
for s in e['schedules']:text+='| '+s['address']+' | '+s['name']+' | '+s['interrupt_mask']+' / '+s['sound_mask']+' | '+', '.join(t['task']+'('+str(t['argument_float'])+')' for t in s['tasks'])+' |\n'
text+='\n## Still open\n\nConcrete owner vtables/callback installation, initial payload/override fields and their consumers, all callers and runtime reachability, engine RNG and audio execution remain separate. Support routines are not newly counted primary entries. Null/NaN/overflow/late callback behavior is documented, not repaired in game code.\n'
(OUT/'contract.md').write_text(text,encoding='utf8',newline='\n')
(OUT/'notes.json').write_text(json.dumps(dict(functions=rows),ensure_ascii=False,indent=2)+'\n',encoding='utf8')
print('Wrote5 primary cards and native schedule table')
