# Original server chat contract

Static investigation, 2026-11-18. Original target:
`D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll`, x86 PE,
SHA256 `751a68831e4fe3541bbbb24da3c785fb9f6cd3d7e6dcd92125fe1e18f0fce641`.
No original code was executed. No game source was modified in this investigation.

## Evidence

Bounded ASCII strings and direct-reference discovery:
`analysis/local/chat-server-index/index.json`. This records `say` at101a8498,
`say_team` at101a849c, team prefix at101a84b0 and `SayText` at101dab24.
The same directory retains `host-say.asm` and `constants.json`, including the
float1.0 at101a1390 and exact byte prefix/newline strings.

REA/Ghidra private session `analysis/local/chat-server-core` contains three full
results, evidence bundle and close/verification records. The requests select
code references1001e19e,1001937b,100e6082, resolving respectively to:

| Procedure | Purpose | Evidence ID |
|---|---|---|
| 1001e130 | Host_Say equivalent, full formatting/filter/send path | ev_17d6b90890526928baeaa4a0917c944a93c577a675d6fd3f6871cb520f752004 |
| 10018d60 | ClientCommand dispatcher containing say/say_team and modal-state guards | ev_aa9661ddcfd2766ea149577e6942a6298758fe7d1dbc853322b7dee928d2cbdf |
| 100e5fc0 | User-message registration | ev_9f0fe9ced397030c7cdbaca94294af9a86ba411c001706feb970bdc7067252fc |

The session closed with `input_unchanged=true`, `queries_succeeded=true`,
`target_executed=false`. Pseudocode is an analytical reconstruction, not original
source. Only chat-relevant portions of the dispatcher were interpreted.

## Wire and display string

`100e5fc0` registers **SayText**, variable size(-1), storing the message ID at
`10226518`. Host_Say sends a reliable per-client `MSG_ONE` (destination1):

```
BYTE    sender entity index
STRING  formatted bytes, NUL terminated
```

The STRING begins with byte02. Normal format is `02 + name + ": " + body + LF`;
team format is `02 + "(TEAM) " + name + ": " + body + LF`.
There are no separate body/name/team fields, localization tokens, language ID,
RGB bytes or additional integers. The name is the sender's netname string.
The client should parse this established contract rather than invent a second
server chat message.

The formatting buffer is128 bytes. Body length is limited to
`126 - strlen(prefix)` **bytes**, reserving LF and final NUL. For a name ofN
bytes this means at most123-N normal-body bytes or116-N team-body bytes.
At the normal boundary the complete string including NUL is128 bytes and the
payload including sender byte is129 bytes. These formulas assume an ordinary
bounded player name; the original uses an unbounded formatting helper for its
prefix and is not a specification for reproducing unsafe buffer behavior.

Truncation overwrites `body[limit]` with NUL. It does not seek a Unicode character
boundary. The final LF is present in the transmitted string and server echo.

## Input, interval and recipients

1. Return when CMD_ARGC is zero. Resolve sender CBasePlayer. Return when
   player+27d8 is greater than current server time, or player+1ea0 equals1.
2. For case-insensitive `say` or `say_team`, require at least two command
   arguments and use CMD_ARGS. The helper also supports a raw-command path:
   format argv0 plus args with a space, or argv0 alone into a256-byte local.
   Normal dispatcher calls are `say`→teamonly0, `say_team`→teamonly1.
3. If input starts with a quote, skip it and remove the final byte. The original
   does not separately check that the final byte is a closing quote.
4. Scan for at least one byte for which CRT `isprint` is true and `isspace` is
   false. Empty/whitespace-only input produces no message or interval update.
   The scan tests whether to accept; it does not trim the displayed body.
5. Build/truncate/append LF, then set player+27d8 to current time+**1.0 second**.
6. Enumerate `player` entities, stopping on null/world invalidity. Skip missing
   entvars, sender, non-network clients and receivers that have blocked sender
   through the voice manager (`10001430`).
7. For teamonly, require gamerules virtual call atvtable+0xd0(receiver,sender)
   to return1 (the SDK GR_TEAMMATE value). This condition applies regardless of
   observer status. Concrete game-mode relationship implementations were outside
   this bounded task; no claim that all co-op players always share a team.
8. Send to remaining receivers. Echo to sender separately, without applying its
   mute/team checks. Echo formatted text to the server console. Log the body
   with command `say`/`say_team`, user ID, auth ID and model-team or user ID,
   depending on the teamplay global.

The extra+1ea0 field is a modal interaction state, not established as a team
or death flag. In the same dispatcher `stopcomputer` clears value1; `freeze`
and `unfreeze` commands set/reset values1/2, with `computercheck` and
`phonenumber` exceptions to command blocking. Host_Say itself blocks value1;
upstream dispatch also suppresses ordinary say while these modal states are
active. Exact original member name is unrecovered. Do not copy the original
object byte offset into the port; connect to its own recovered interaction state
when that feature exists.

## Encoding

Host_Say performs no UTF-8 decoding, codepage conversion, Unicode normalization
or localization. It copies bytes and applies CRT byte classification followed
by byte truncation. Classification of high bytes depends on the process CRT
locale and signed-char handling; this static function does not establish the
active runtime locale. It is therefore insufficient evidence to claim either
full UTF-8 support or guaranteed rejection of every non-ASCII message.

Source-owned Unicode input/rendering should retain the same wire contract.
Preserving complete UTF-8 characters at the byte limit is an explicit safer
port adaptation, not native fidelity. Sending whole unescaped console command
strings is an input-layer concern, separate from the SayText receiver protocol.

## Comparison with current SDK server

Compared with `external/hlsdk-portable/dlls/client.cpp:315` Host_Say and
`player.h` CHAT_INTERVAL1.0. `tools/prepare_game.py` injects recovered command
dispatch hooks but currently leaves this SDK Host_Say implementation intact.

| Behavior | Original CoF | Current portable SDK |
|---|---|---|
| Wire, sender echo, public/team prefixes, buffer, interval | BYTE+STRING,02 prefix,128-byte string,1s | Same |
| Observer team prefix | Always `(TEAM)` | `(SPEC)` if sender IsObserver |
| Observer team recipients | Same gamerules relationship gate as all team senders | Observer senders reach only observer receivers; nonobservers use relationship gate |
| Body acceptance | At least one CRT printable nonspace byte | Nonempty and Q_UnicodeValidate |
| UTF-8 validation | None in this path | Q_UnicodeValidate conditional on `mp_multibyte_only` (default0); default accepts any nonempty byte string |
| Whitespace-only body | Rejected | Accepted with default validation configuration |
| Modal state | Host_Say+1ea0==1 guard, plus dispatcher guards | No equivalent stock state |
| Formatting safety | Unbounded original formatting helper | safe_snprintf/strlcpy used for prefix/raw path |
| Truncation | Byte limit, may split multibyte characters | Same byte truncation |
| Voice mute | Always calls voice-manager block check here | Compiled only when NO_VOICEGAMEMGR is false |

The original has **no `(SPEC)` prefix or IsObserver receiver branch** in this
complete function. The port should retain safe formatting, preserve the original
wire and1s interval, make the team/observer choice explicit, and implement its
own modal gate only when the associated computer/phone behavior is available.
No broader network replacement is required for displaying native chat.
