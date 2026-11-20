"""Queue accounting must not confuse labels, duplicate captures or cross-module VAs."""
import unittest

from catalog_decompiled import pending_records


def card(module, address, status="шаблон", reviewed=False, duplicate=False):
    key = f"{module}:{address}"
    review = f"[REVIEW {key}]\n  Назначение: reviewed\n[/REVIEW]\n" if reviewed else ""
    extra = "  Файл: second-capture.c\n" if duplicate else ""
    return (f"[FUNCTION {key}]\n  Символ тела: FUN_{address}\n  Статус: {status}\n"
            f"  Файл: first-capture.c\n{extra}{review}[/FUNCTION]\n")


class PendingQueueTests(unittest.TestCase):
    def test_structural_and_symbols_remain_pending(self):
        text = card("server", "0x10000010") + card("server", "0x10000020", "символ")
        self.assertEqual(len(pending_records(text)), 2)

    def test_only_review_excludes_record(self):
        text = card("client", "0x10000010", "разобрана статически", reviewed=True)
        text += card("client", "0x10000020", "не разобрана")
        self.assertEqual([r[0] for r in pending_records(text)], ["client:0x10000020"])

    def test_modules_are_separate_and_stably_sorted(self):
        text = card("server", "0x10000020") + card("client", "0x10000020")
        text += card("server", "0x10000010")
        self.assertEqual([r[0] for r in pending_records(text, "server")],
                         ["server:0x10000010", "server:0x10000020"])

    def test_duplicate_captures_count_as_one_record(self):
        rows = pending_records(card("server", "0x10000010", duplicate=True))
        self.assertEqual(len(rows), 1)
        self.assertEqual(rows[0][3], "first-capture.c")


if __name__ == "__main__":
    unittest.main()
