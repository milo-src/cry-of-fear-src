# Аудит устаревших графических пробелов

2026-11-20. Проверены недавние studio, camera, GL и blur REVIEW, их notes и
связанные документы. Это не полный аудит 8564 адресов. Игра, сборка и исходные
ресурсы не запускались и не изменялись.

**Текущий статус: исправления выполнены.** Основной проход обновил шесть REVIEW:
10060b10,10065ef0,100687d0,10089830,10053b20,100556f0; синхронизировал старые
notes для camera/custom/blur и этих функций, обновил WORKBOARD и bootstrap.
GL optional probes и зарегистрированный module-release path теперь закрыты
отдельными контрактами. Указанные ниже прежние формулировки — журнал исправлений,
не текущие TODO. Проверки сохранены в `gl-capabilities-reverse-verification.json`.

Снимок `decompiled/FUNCTION_CATALOG.txt`: SHA256
`ccdb2662b7e2be4ece20e6aaad644c1ce26727c67452cfd0a65d0873dfc5552b`.
Номера строк ниже относятся к этому снимку (809 REVIEW); после регенерации
идентификатор REVIEW является устойчивым указателем.

## Журнал найденных и исправленных расхождений

| REVIEW / место в снимке | Устаревшая формулировка | Точное исправление и основание |
|---|---|---|
| client:0x10065ef0, L25735 | GL pointer initializer и replacement lifecycle перечислены вместе с открытым bone mask | Core dispatch подтверждён `renderer-bootstrap-contract.md` / `native-gl-dispatch-map.json`; ready invalidation и TakePhoto scheduling раскрыты `studio-texture-lifecycle-audit.md` / `camera-capture-contract.md`. Сохранить неизвестные bone mask/culling, полный resource lifetime, внешнее engine ordering. |
| client:0x100687d0, L26090 | Все GL имена только signature/enum-derived; initializer не подтверждён | Названные core cells подтверждены10053c80 GetProcAddress. Optional NV combiners не приравнивать к71 core entries; добавить отдельное подтверждение из нового capability batch после его разбора. Сохранить numeric calls и старые evidence paths. |
| client:0x10060b10, L24863 | Для событий reset ещё «необходимы callers» | Добавить доказанные HUD_VidInit1001d560 / HUD_Reset1001d520 →1006d9e0→10060b10. Это уже есть в client:0x1006d9e0 L26537–38 и bootstrap doc. Сохранить неизвестный внешний engine event/context ordering и отсутствие доказательства удаления всех textures. |
| client:0x10089830, L27838 | Смысл других render API кодов «в этом теле не установлен» | Локальная оговорка верна, но теперь есть межфункциональное доказательство:100556f0 различает software0/OpenGL1/Direct3D2, тогда как manager.status имеет другую область значений. Достаточно cross-reference; не объявлять этот predicate Cg-ready или GL-manager-ready. |

Выполнена синхронизация **исходных notes**, чтобы следующая загрузка старого
файла не вернула закрытый вопрос. Ниже перечислены их прежние состояния:

| Источник | REVIEW ID | Canonical row / действие |
|---|---|---|
| `studio-material-catalog-notes.json` L16/L41 | client:0x10065ef0 / client:0x100687d0 | Те же точечные правки, что выше. |
| `studio-texture-lifecycle-catalog-notes.json` L76 | client:0x10060b10 | Добавить два доказанных входа; убрать общее требование вновь найти callers. |
| `studio-texture-loader-notes.json` L62/L81 | client:0x10064c10 / client:0x10064ac0 | Confidence `dispatch name signature-derived` устарел. Canonical: `camera-capture-catalog-notes.json` rows по этим ID; каталог L25336–25424 уже актуален. Из live-row L66 оставить внешний viewport ownership, но client scheduling теперь известен. |
| `shader-catalog-notes.json` L181 и `blur-trigger-notes.json` L44 | client:0x10071df0 | «Смысл трёх игровых условий ещё не установлен» противоречит даже соседним новым details в blur-trigger-notes. Canonical: `camera-capture-catalog-notes.json`, каталог L27149–27168; три причины — server Blur byte, integer waterlevel>2, абсолютный Damage deadline. Opacity0.5, steps32/24 и evidence старых shader captures сохранить. |
| `cg-profile-routing-notes.json` L48 | client:0x10089830 | Добавить ссылку на mode enum в100556f0; не смешивать enum с manager status. |

Предпочтительный порядок: обновить canonical row, сохранить объединение
подтверждённых evidence paths и существенных старых фактов, затем привести
дубли того же ID к актуальной версии. Не склеивать противоречивые предложения
простым добавлением details в конец. Raw captures и исторические failed queries
сохраняются: они описывают происхождение доказательств, а не актуальный пробел.

## Выполненная точечная уборка документов

По поручению владельца каталога изменены только:

- `studio-material-contract.md`: бывшие L31–34 обновлены до подтверждённого
  core GL dispatch; бывшие L170–171 больше не называют framebuffer capture IDs
  неисследованными; остаточные границы ссылаются на закрытые lifecycle/camera
  контракты, сохраняя реальные неизвестные.
- `studio-texture-lifecycle-audit.md`: бывший L214 и TODO L239 обновлены до
  доказанной HUD_VidInit/HUD_Reset цепочки. Внешние engine events, context
  recreation, resource lifetime и возможность bulk/indexed writes сохранены.
- `surface-flag-producers.md`: бывшие L140–144 и TODO L226–228 больше не
  утверждают, что тело1006d9e0 отсутствует. Указаны сохранённый полный C,
  порядок reset до GetScreenInfo и второй вход HUD_Reset; внешний engine
  lifecycle остаётся открытым.

Проверка: повторное чтение изменённых участков и `git diff --check` для этих
трёх файлов и данного отчёта. Это проверка документации, не runtime/visual QA.

## GL capability batch — разбор и синхронизация завершены

`decompiled/client/captures/graphics-gl-capabilities/` уже содержит000..009 C
и references010..011. После follow-up captures обновлены:

- WORKBOARD: закрыты9 optional/diagnostic helpers, matcher/search иmodule-release
  callback. Внешние context lifetime/recreation иCRT ordering остаются открыты.
- client:0x100556f0 L23898 и `renderer-bootstrap-contract.md` L58–60/L153:
  общий открытый extension contract заменён ссылками на точные контракты.
- client:0x100687d0: optional NV binding proof добавлен отдельно от core71.

Наличие C capture само по себе ещё не доказывает проверку всех failure branches
или actual GPU capabilities. Этот аудит не подменяет разбор нового batch.

## Не закрывать при уборке

- Constructor→studio vtable assignment и полный смысл bone mask.
- Внешний engine world/viewmodel/HUD порядок, read buffer и viewport origin.
- Полный GL context teardown/resource lifetime; отсутствие direct xref не
  исключает bulk/indexed writes. Пробный Cg handle также не доказан освобождённым.
- Native engine WRITE_STRING(NULL) wire semantics, engine packet size limit
  и безопасность256-байтного custom destination при ReadString cap2047.
- Числовая vtable привязка server10095490/100a38e0 к cof_customiseplayer.
- Интеграция описанных native контрактов в собственный renderer и сравнение
  изображения с оригиналом: статический разбор не является такой проверкой.

WORKBOARD теперь разделяет статически установленные контракты, перенесённый
код, выполненные проверки и реальные открытые вопросы. Исходные Evidence и
старые verification snapshots не переписываются задним числом.
