import json
from pathlib import Path
import unittest

from PIL import Image, ImageDraw
from author_foliage import masks
from build import material_levels


class FoliageMasks(unittest.TestCase):
    def test_transparent_palette_is_not_relief(self):
        coverage=Image.new('L',(32,32));ImageDraw.Draw(coverage).ellipse((8,8,24,24),fill=255)
        normals=[]
        for key in ((255,0,0,255),(0,255,0,255),(0,0,255,255)):
            image=Image.new('RGBA',(32,32),key)
            ImageDraw.Draw(image).ellipse((8,8,24,24),fill=(80,60,20,255))
            original=image.tobytes()
            orm,n=masks(image,coverage)
            self.assertEqual(image.tobytes(),original)
            self.assertEqual(orm.getextrema()[2],(0,0))
            self.assertEqual(orm.getextrema()[3],(255,255))
            self.assertEqual(n.getpixel((0,0))[:2],(128,128))
            normals.append(n.tobytes())
        self.assertEqual(normals[0],normals[1]);self.assertEqual(normals[0],normals[2])
        self.assertGreater(n.getpixel((10,16))[0],0)
        self.assertLess(n.getpixel((10,16))[0],n.getpixel((22,16))[0])
        for mip in material_levels(n):self.assertEqual(mip.getextrema()[3],(251,251))

    def test_verified_pack_bounds_and_no_glass_marker(self):
        root=Path(__file__).parent
        entries=[e for e in json.loads((root/'manifest.json').read_text())['materials'] if e.get('foliage')]
        self.assertGreater(len(entries),50)
        total=0
        for e in entries:
            self.assertTrue(e['studio_texture'].startswith('#models/Props/Vaxter/'))
            self.assertFalse(e.get('window') or e.get('mirror_commands'))
            with Image.open(root/'masks'/(e['name']+'_n.png')) as n:
                self.assertEqual(n.getextrema()[3],(251,251))
                self.assertEqual(n.width*e['height'],n.height*e['width'])
                total+=n.width*n.height*8*4/3
        self.assertLess(total,80*1024*1024)


if __name__=='__main__':unittest.main()
