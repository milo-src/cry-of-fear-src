"""Focused corpus accounting tests; no binaries, runtime or shared catalogue writes.

Run: python -m unittest discover -s tools -p test_catalog_progress.py
"""
from collections import defaultdict
from pathlib import Path
import tempfile
import unittest
from unittest.mock import patch

import catalog_decompiled as catalog


class ProgressTest(unittest.TestCase):
    def fixture(self):
        # Same VA in two DLLs is two records. An interior selector and a
        # second typing/capture of one entry must not inflate function count.
        rows = [
            ("server", "0x1000", "0x1000", "partial-pass/a.c", "индекс Ghidra"),
            ("server", "0x1000", "0x1004", "captures/a.c", "имя FUN в объявлении тела"),
            ("client", "0x1000", "0x1000", "captures/a.c", "имя FUN в объявлении тела"),
            ("client", "0x2000", "0x2000", "captures/b.c", "селектор запроса; начало тела отдельно не подтверждено"),
            ("client", "0x3000", "0x3000", "captures/c.c", "имя FUN в объявлении тела"),
            ("client", "0x4000", "0x4000", "captures/d.c", "имя FUN в объявлении тела"),
        ]
        sources, groups = [], defaultdict(list)
        for module, entry, requested, name, basis in rows:
            source = dict(module=module, entry=entry, requested=requested,
                          path=Path("decompiled") / module / name, address_basis=basis)
            sources.append(source)
            groups[module, entry].append(source)
        classification = dict(zip(groups, [(status, "") for status in catalog.STATUS_KEYS]))
        blocks = {"server:0x1000": "partial review: fields still unknown"}
        identities = {"server": {"a" * 64}, "client": {"b" * 64}}
        partial = {"selected_function_count": 4, "exported_function_count": 1,
                   "target_sha256": "a" * 64}
        return sources, groups, classification, blocks, identities, partial

    def test_captures_modules_and_statuses_are_different_denominators(self):
        self.assertEqual(catalog.topic_for("  Подсистема: audio\n"), "audio")
        result = catalog.corpus_progress(*self.fixture())
        totals = result["totals"]
        self.assertEqual((totals["c_files"], totals["unique_address_records"]), (6, 5))
        self.assertEqual((totals["reviewed"], totals["unreviewed"]), (1, 4))
        self.assertEqual(totals["additional_c_files_for_existing_addresses"], 1)
        self.assertEqual(totals["addresses_with_multiple_c_files"], 1)
        self.assertEqual(totals["selector_mismatch_files"], 1)
        self.assertEqual(totals["unconfirmed_entry_records"], 1)
        self.assertEqual(set(totals["status_counts"].values()), {1})
        self.assertEqual(result["modules"]["server"]["unique_address_records"], 1)
        self.assertEqual(result["modules"]["client"]["unique_address_records"], 4)

    def test_historical_selection_does_not_become_whole_module_total(self):
        result = catalog.corpus_progress(*self.fixture())
        self.assertEqual(result["server_partial_pass"]["not_exported_in_this_pass"], 3)
        for row in result["modules"].values():
            self.assertIsNone(row["discovered_function_total"])
            self.assertIsNone(row["not_captured_function_total"])
        text = "\n".join(catalog.progress_lines(result))
        self.assertIn("не процент восстановления всей игры", text)
        self.assertIn("не число отсутствующих сегодня функций", text)

    def test_conflicting_pass_metadata_or_review_status_fails(self):
        args = self.fixture()
        args[-1]["exported_function_count"] = 2
        with self.assertRaisesRegex(AssertionError, "Partial pass metadata"):
            catalog.corpus_progress(*args)
        args = self.fixture()
        args[3].clear()
        with self.assertRaises(AssertionError):
            catalog.corpus_progress(*args)

    def test_failed_replace_preserves_previous_document_and_cleans_temp(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / "FUNCTION_CATALOG.txt"
            path.write_text("existing review", encoding="utf-8")
            with patch.object(Path, "replace", side_effect=OSError("simulated replace failure")):
                with self.assertRaises(OSError):
                    catalog.atomic_write(path, "replacement")
            self.assertEqual(path.read_text(encoding="utf-8"), "existing review")
            self.assertEqual(list(Path(folder).iterdir()), [path])


if __name__ == "__main__":
    unittest.main()
