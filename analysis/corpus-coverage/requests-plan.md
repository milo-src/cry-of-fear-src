# Следующие bounded запросы и завершённые inventories

## Уже выполнено

Полные list_procedures серверного и клиентского бинарников сохранены ранее. Проход pass03 последовательно снял engine, GameUI, игровой opengl32 и vgui2, по одному private Ghidra import за раз. Все четыре сеанса закрылись с exit0, close/reset без ошибок и неизменным SHA исходной DLL. Актуальное наличие portable Evidence и точные числа выводит [inventory.md](inventory.md); завершённые session requests/open/close/reset/exit/hash сохранены в `<module>-inventory-session.json`. Повторять завершённые imports только ради прежней описи не требуется.

`inventory.py`, `verify.py` и `retain_session.py` не запускают REA: последний только переносит результат уже завершённой сессии, проверяя cleanup и hash. Full Evidence сохраняет все flags/addresses. Новых C из metadata не создаётся, REVIEW автоматически не назначается.

## Следующий смысловой разбор клиента

Hook1006e930 и consumer100712a0 уже захвачены и разобраны в pass02/pass03. Pass04 добавил binding lookup1006cb10, formatter1000c900, strncpy100fe800, options10006e40, viewport10098930/100a4010, update1003b0c0 и reset10038df0; actual1003bf00 подтверждён отдельно. См. [client-profont-dependencies](../client-profont-dependencies/contract.md). Повторять эти запросы как неизвестные не нужно.

Следующие зависимости: stream/getline10026090/10020990, formatter backend100efb51, источник double1018d1b8, teardown дочерних панелей и внешний VGUI. ScreenShake/ScreenFade — отдельные leads: server регистрации известны, client hooks нужно установить по refs; адресов не выдумывать. Перед запросом каждого адреса пересечь его с актуальным missing-confirmation set и уже сохранёнными C.

Все три pass04 private sessions закрыты. В первой сохранены три ошибки schema для procedure_info; повторные корректные info во второй успешны. Не выдавать первую сессию за полностью успешную и не запускать одновременные Ghidra imports. Точные portable session/provider records находятся в client-profont-dependencies.

## Точное продолжение C-выгрузки

Для каждого SHA/profile имеются `*-local-without-confirmed-c.json` и `*-unresolved-c.json`. Первое — разность provider local entries и подтверждённых сохранённых C. При наличии unresolved C оно не означает, что каждый адрес никогда не декомпилировался. Сначала адресные info/body metadata для этих C либо явно сохранять неопределённость. Default-space адреса сравнивать численно, не различать ведущий ноль; имена и interior selectors не заменяют actual entry.

`tools/rea_ghidra.py` выполняет конечный JSON list queries за один import, закрывает и reset-ит session. Поддерживает `procedure_pseudo_code`, `procedure_info`, `list_procedures`, но не `decompile_all`. Для сервера уже подготовлен прежний first25 файл [server-next-25-requests.json](server-next-25-requests.json); перед запуском пересечь его с актуальным missing set, чтобы не повторять поздние captures.

```powershell
python tools/rea_ghidra.py 'D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/hl.dll' --requests analysis/corpus-coverage/server-next-25-requests.json --output analysis/local/corpus-server-missing-25-next
```

После каждого bounded batch проверять isError, non-null C, original SHA/profile и actual body entry. Failed/null/external сохранять отдельными статусами, не считать C и не REVIEW. Source C переносить без изменения bytes с hash/evidence_id. Shared catalogue обновляется его владельцем отдельно.

## Экспорт через journal

Saved actual schema — [saved-tool-schemas.json](saved-tool-schemas.json). Перед использованием новой сессии сверять её собственную tools/list schema. Существующий ignored `analysis/local/full-decompile/decompile_cof.py` умеет decompile_all, однако его while-loop продолжает до remaining=0: batch-size ограничивает только один запрос. Для конечной задачи нужен явный лимит числа batches либо один запрос:

```json
{"name":"decompile_all","arguments":{"output_directory":"D:/github/cry-of-fear-src/analysis/local/full-decompile/server/export","layout":"address","resume":true,"limit":25}}
```

Resume требует совпадения target SHA, provider, analysis profile и layout, проверяет уже записанные files/external, не допускает concurrent directory writer. Сначала проверить hashes старого journal и C. Исторические counts этого journal сохранены отдельно; они не обновляются от выборочных captures. Новые untried идут перед retry failures. External записи не означают тела игры. Упомянутый старым script `publish_decompiled.py` при обследовании не найден; не ссылаться на него как на готовый доступный инструмент.

## Граница полного списка

`list_procedures {"detail":"complete"}` возвращает полный inline Evidence. В фактической сохранённой schema нет limit/offset/cursor; пагинацию выдумывать нельзя. Summary альтернатива требует реальной schema inspect_analysis_view и сохранения retained full Evidence до close. Проверять subject/profile, explicit omissions/errors и unique addresses. Полный provider inventory всё ещё не доказывает, что Ghidra нашла все функции. Динамические пути, ошибки границ, другие DLL и смысловой разбор остаются отдельными задачами.
