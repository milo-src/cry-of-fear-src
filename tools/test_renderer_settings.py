"""Run with python -m unittest discover -s tools -p test_renderer_settings.py."""
import tempfile
import unittest
from pathlib import Path
from renderer_settings import read_preferences, read_settings


class RendererPreferencesTest(unittest.TestCase):
    def test_formats_and_invalid_input(self):
        cases = {
            'COF_RENDERER_V1 1 0\n': (1, 0, -1, 4),
            'COF_RENDERER_V1 0 2\n': (0, 2, -1, 2),
            'COF_RENDERER_V2 1 2 0 5\n': (1, 2, 0, 5),
            'COF_RENDERER_V2 1 1 2 1\n': (1, 1, 2, 1),
            'COF_RENDERER_V2 0 0 1 4\n': (0, 0, 1, 4),
            'COF_RENDERER_V2 1 1 3 2': (0, 1, -1, 3),
            'COF_RENDERER_V2 1 1 0 0': (0, 1, -1, 3),
            'COF_RENDERER_V2 1 2 0 2 garbage': (0, 1, -1, 3),
            'COF_RENDERER_V1 1 3': (0, 1, -1, 3),
            '': (0, 1, -1, 3),
        }
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder)/'renderer.cfg'
            self.assertEqual(read_preferences(path), (0, 1, -1, 3))
            for text, expected in cases.items():
                with self.subTest(text=text):
                    path.write_text(text, encoding='ascii')
                    self.assertEqual(read_preferences(path), expected)
                    self.assertEqual(read_settings(path), expected[:2])


if __name__ == '__main__':
    unittest.main()
