# ProFont: зависимости текста, владелец и путь отображения

Статический разбор оригинального `client.dll`, SHA-256
`e0d0ef0eac981bda321c834e7d73ad7a905cc66bcbed13706bc8e24eac284360`.
Игра и DLL не исполнялись. Этот пакет продолжает
`analysis/client-profont/contract.md`; renderer/RTX не исследовались.

Три последовательные private Ghidra 12.1.4 сессии сохранены полностью в
`provider-01..03.json` и `session-01..03.json`. В первой три запроса
`procedure_info` были отвергнуты из-за неподдерживаемого `detail`; ошибки
сохранены. Исправленные info получены во второй сессии. Во всех трёх входной
бинарник неизменён, target_executed=false, REA exit=0, close/reset завершены.
Сессии 02 и 03 полностью успешны. Псевдокод копируется побайтно, включая
исходные переводы строк, в `decompiled/client/captures/profont-dependencies-pass04`.

Новых REVIEW здесь восемь. `1003bf00` уже имел карточку: для него отдельно
подготовлено уточнение provenance/ABI, а не новая реализация.
Конструктор `100362b0`, solve `1003bf20`, paint `1003bc10` и mirror paint
`1003e210` используются как существующие основания без повторного REVIEW.

## Навигация и владение

```text
10098930 setup viewport
  ├─ global101b2600 уже есть → tail jump100a91b0
  └─ allocation14a8 → 100a4010(this,x,y,w,h)
       ├─ TeamFortressViewport vtable; global101b2600=this
       └─ allocation104c → 100362b0 CHUDControl
            ├─ viewport+142c=child; child.setParent(viewport)
            ├─ child+3a8 = Label(" ",0,0,screenWidth,64), font child+f54
            ├─ constructor ends with reset10038df0
            └─ vtable101452cc: +1b8 solve1003bf20, +1c0 paint1003bc10
                    paint → 1003b0c0 notification state/update → Panel::paint

ProFont hook1006e930 → consumer100712a0
  ├─ ReadByte → child+bc; ReadString → local256 → child+d4
  ├─ DEADNOTIFY → 1006cb10("+jump") [one or two calls]
  │                 └─ <GetGameDirectory()>/config.cfg → quoted uppercase key
  └─ 1000c900 sprintf-like wrapper + 100fe800 strncpy
```

`10098930` is the actual entry for the initial selector `10098980`.
Native ASM passes the allocation as ECX, dimensions from the parent panel's
virtual+18/+1c as stack arguments, and stores the constructor's EAX.
An allocation failure stores NULL and still dereferences it for virtual+40;
this is not a graceful NULL-success path. Existing viewport uses the reset
tail call instead of a new allocation.

`100a4010` is thiscall with RET16 and EAX=this. It constructs the base Panel,
scheme manager and a set of menu panels; installs the input handler, command
menus and additional widgets. The exact recovered ownership important here is
child142c: initially zero; allocated size104c; ECX allocation passed to
100362b0; EAX child stored; setParent receives the viewport. Its NULL branch
also reaches a dereference. Allocation failure handling inside allocator and
the lifetime/destructor of the full tree are outside this packet.

CHUDControl identity is backed by the constructor vtable assignment, raw COL
and RTTI, not only the Ghidra name. `layout-evidence.json` decodes vtable slots
through original import jumps: setPos/getPos/setSize/getSize, setVisible,
isVisible, setParent, setFgColor/getFgColor, drawSetTextFont, drawSetTextColor
and drawSetTextPos. It does not substitute these native bindings with a port's
VGUI layout. The Label-specific virtual+200 is a call with explicit stack
arguments `(label,text)` and caller cleanup8; preserve this ABI, rather than
automatically rewriting every call as ECX-thiscall. Its final external widget
implementation is not recovered here.

## 1006cb10: lookup reads config.cfg

One stack command argument, RET4; incoming ECX is unused by this body. Each
call clears the first byte of shared output10542a88, obtains game directory
from engine slot71 at101b2724, copies it to a local256 buffer and appends the
literal `/config.cfg`. The native callback takes no argument; the cookie on
the stack is not a directory-query parameter, despite the decompiler output.
The existing engine API mapping is documented in
`analysis/graphics/music-client-contract.md` and renderer bootstrap evidence.

10026090 opens the stream-like object with `(path,1,0x40,1)`, 10020990 extracts
the next string, and status bits6 determine whether processing continues.
These helpers' complete I/O/locale semantics have not been independently
reversed in this packet. A candidate must contain both case-sensitive
substrings `bind` and the requested command; it need not be a whole command,
nor start with bind, nor exclude comments. Nonmatches continue the loop.

For a match the quote scan starts at index1, not0. Characters after the first
quote are passed to toupper100fb47b (MOVSX source byte) until the next quote;
then a NUL is written and EAX=10542a88. The quote checks do not parse escape
sequences. An empty quoted key can return a nonNULL empty string. A matched
but malformed quote sequence returns NULL after cleanup rather than searching
later candidates. Exhaustion/status failure prints the binding diagnostic and
returns NULL. Native EAX branches and the cookie helper resolve Ghidra's void.

The shared buffer is overwritten by later calls. ProFont invokes the helper
twice if the first result is nonNULL; the second result is formatted without
a second NULL check. This reads the persisted config, not the current engine
binding table. It does not establish active/rebound keys when config differs.

Safety limits are not uniform: directory and extracted line are copied until
NUL before the line-length range check (size>=256 goes to rangecheckfailure).
There is a final output-index check before NUL. This is not proof of safe
arbitrary malformed inputs or race-free/reentrant shared-buffer ownership.

## 1000c900 / 10006e40 / 100fe800: formatting and copying

`10006e40` is precisely `MOV EAX,10193b70; RET`, with no consumed stack
arguments. This returns the common printf-options address. The PE's initial
eight bytes are recorded, but subsequent writers are not audited.

`1000c900(dest,format,...)` is cdecl. The native va_list begins at EBP+10.
The stack for100efb51 is `(optionsLow|1,optionsHigh,dest,0xffffffff,format,0,
va_list)`; seven DWORDs are caller-cleaned. Ghidra incorrectly attaches the
five earlier pushed arguments to the options accessor. The common formatter
is identified as __stdio_common_vsprintf; its full locale/format-error internals
remain outside this packet. Nonnegative EAX is returned; negative EAX becomes
-1. No destination capacity is provided: size_t(-1) is not the local128 bound
in ProFont. No buffer-safety guarantee follows from this wrapper.

`100fe800` is the native cdecl strncpy: count0 returns dest without copying;
otherwise copy at most count bytes, stop source interpretation at NUL and
zero-pad remaining destination bytes. If no NUL is found within count, no
extra terminator is appended. EAX returns the original destination on every
ordinary path. Alignment/word loops implement the same byte result; source
word loads exist in aligned paths, so this is not a byte-access footprint
guarantee. The apparent uint dereference in decompiled scalar paths is checked
against byte-load ASM. Overlap/invalid pointers are not promised safe.

## 1003b0c0: ProFont consumption and exact transitions

This is called by CHUDControl paint1003bc10 after its optional unrelated text
effect. It also animates a separate top banner at+848 and a center-message
buffer at+e98 before the ProFont section. Those channels use different state:
do not combine the center-message timing (+f2c, fade250/125, hold3) with the
ProFont timing (+f18, fade500/500, hold4).

The native engine callback101b26e0 supplies current time T (x87 result stored
as float). ProFont processing then queries `cl_subtitles` through101b2644,
stores/truncates to integer and returns when that integer is0. This return does
not explicitly clear the old label. The full application frame ordering and
the writer/meaning of double1018d1b8 are not proven here; below it is named D,
not assumed to be an independently verified frame delta.

For primary text+d4 nonempty, it computes strlen secondary+1d5 and primary;
primary length<=1 returns before the transitions. A one-character message is
therefore different from an ordinary multi-character notification.

| Field | Proven local role |
|---|---|
| +d4 | Primary NUL-terminated text passed to label+3a8 |
| +bc | Signed style selection; discrete color table below |
| +f18 | Float A, converted to int as fourth color argument |
| +f1c | Byte:0 decreasing-A phase;1 increasing-A phase |
| +f1d | Byte hold marker |
| +f20 | Float hold deadline |
| +f54 | Font used for text size and drawing setup |
| +3a8 | Label recipient; constructor and paint linked |

For finite values the instructions implement the following order. Comparisons
are strict; this is not a smoothed approximation:

1. If hold!=0 and T>deadline: WORD[f1c]=1, hence phase=1/hold=0;
   A=0; DWORD[c0]=0; f28 receives strlen of the separate e98 buffer.
2. If phase==0 and hold==0: if A>0, A=float(double(A)-D*500).
   Only if resulting A<0: hold=1, A=0, deadline=float(double(T)+4).
3. Else if phase==1 and hold==0: if A<255, A=float(double(A)+D*500).
   Only if resulting A>255: phase=0,A=255,text[d4]=NUL.

At exactly A=0 or255 the corresponding crossing transition does not fire;
rewriting tests as <= or >= changes native behavior. NaN/time reversal and
invalid D are not normalized by this code. Native compare ordering is retained
in ASM for exceptional inputs.

Both parent drawing color and label foreground color use this style mapping:

| Style | RGB |
|---|---|
| 0,3 | 255,255,0 |
| 1 | 0,128,255 |
| 2,6 | 255,0,0 |
| 4 | 0,255,0 |
| 5 | 200,200,200 |

Other styles skip the color setter; they do not get a new default white.
The fourth argument is trunc(A). This establishes its color/transparency
parameter use; exact external VGUI blend behavior is not reimplemented here.

The parent sets font and measured text position (style<6 centered near bottom,
style>=6 x10 near vertical center), but these calls set drawing state: no
drawPrintText call for this primary string is present in this section.
The actual populated Label+3a8 is resized to `(screenWidth,64)`, receives
primary text, moves to `(0,screenHeight-3*DWORD101b2bd0)`, gets virtual+21c(4)
and foreground color. Do not equate the earlier parent text coordinates with
the label's final position. Secondary text length>1 affects measurement and a
later parent text-position setup, not a proved independent draw here.

When primary+d4 is initially empty and subtitles enabled, c4/c8/cc/d0 are
cleared and style becomes5; secondary+1d5 is cleared only if its length>1.
The source has further legacy primary-empty length logic. No capacity bound
for either inline text buffer is established by these strlen/copy sites.

## 10038df0: reset that closes construction

This native ECX method resets many HUD controls and time/visibility fields;
it is not merely a ProFont helper. It hides the group of32 child panels,
initializes65 player/time entries and four paired indicators, clears five
chat labels, hides additional overlay controls and invokes1003bbd0(0).
For this path it clears text+d4 and secondary+1d5 (WORD at+1d4), c0..d0,
A[f18], phase/hold WORD[f1c], deadline[f20],f24/f28, and label+3a8 text.
The earlier style assignment5 is overwritten later with0; final style is0.
It also clears center-message+e98 and its independent timing fields.
The imported virtual calls and precise offsets are saved; not every unrelated
indicator's game meaning or allocation ownership is claimed.

## 1003bf00 support refinement and remaining work

Actual entry1003bf00 is confirmed as a five-byte JMP100b3704. The next thunk
is FF25[1013a958], resolved by the PE import table to
`vgui.dll!?paintBackground@Panel@vgui@@MAEXXZ`. Ghidra's pseudo is the forwarded
body; it is not a recursive source implementation. This closes the old
selector-only uncertainty and is the only explicit baseline REVIEW update.

Still separate: full stream/getline10026090/10020990 behavior and toupper
locale details; full formatter100efb51 internals; source writer of
double1018d1b8; child-tree teardown; Label-specific vtable+200/+21c and external
VGUI final painting/blending; all producers of secondary text and state fields.
Existing mirror paint1003e210 copies primary text and geometry/color from this
label into another label, so all user-visible render routes are not exhausted
by the single CHUDControl chain. There is no claim of complete UI parity.

Reproduction: `python analysis/client-profont-dependencies/retain.py` retains
completed captures and verifies their bounded ASM against the original PE;
`capture-layout.py` verifies tables/imports/constants. Neither opens REA nor
executes the target. `verify.py` is read-only consistency validation.
