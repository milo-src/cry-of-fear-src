"""Numeric mask regressions: python -m unittest discover -s rtx_materials."""
import unittest
import numpy as np
from PIL import Image
from author import masks


class HighResolutionMasks(unittest.TestCase):
    def test_real_detail_without_albedo_changes(self):
        source = Image.new('RGBA', (224, 192), (110, 110, 110, 255))
        original = source.tobytes()
        profile = dict(kind='stone', roughness=.7, variation=.1, relief=.1,
                       mask_scale=4, detail_seed=17)
        orm, normal = masks(source, profile)
        self.assertEqual(source.tobytes(), original)
        self.assertEqual(normal.size, (896, 768))
        self.assertEqual(normal.getextrema()[3], (254, 254))
        self.assertEqual(orm.getextrema()[0], (255, 255))
        self.assertEqual(orm.getextrema()[2], (0, 0))
        self.assertEqual(orm.getextrema()[3], (255, 255))
        # Flat input still gains genuinely new sub-texel relief, not an upscale
        # of its color. Repeating generation must produce identical PNG pixels.
        again = masks(source, profile)
        self.assertEqual(normal.tobytes(), again[1].tobytes())
        self.assertEqual(orm.tobytes(), again[0].tobytes())
        low = normal.resize(source.size, Image.Resampling.BOX).resize(normal.size, Image.Resampling.BILINEAR)
        error = np.asarray(normal, dtype=float)[..., :2] - np.asarray(low, dtype=float)[..., :2]
        self.assertGreater(float(np.std(error)), 2)
        self.assertGreater(np.asarray(orm)[..., 1].std(), 2)
        n = np.asarray(normal, dtype=float)[..., :2]
        boundary = np.mean(np.abs(n[:, 0]-n[:, -1]))
        interior = np.mean(np.abs(n[:, 1:]-n[:, :-1]))
        self.assertLess(boundary, interior*2)

    def test_resolution_limit(self):
        with self.assertRaises(ValueError):
            masks(Image.new('RGBA', (256, 256)), dict(mask_scale=16))

    def test_plaster_and_glass_are_different_materials(self):
        source=Image.new('RGBA',(128,128),(110,110,110,255))
        profile=dict(kind='stone',height_layout='cof_obbsobwin1',mask_scale=2,
                     roughness=.68,min_roughness=.16,variation=.07,relief=.04)
        orm,normal=masks(source,profile)
        self.assertGreater(orm.getpixel((20,20))[1],orm.getpixel((100,100))[1]+60)
        self.assertGreater(normal.getpixel((20,20))[2],normal.getpixel((100,100))[2]+10)


if __name__ == '__main__':
    unittest.main()
