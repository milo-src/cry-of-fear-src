"""Aperture boundaries are material data, never inferred from dark albedo."""
import json
from pathlib import Path
import unittest
import numpy as np
from PIL import Image
from author_windows import LAYOUTS, masks
from build import material_levels


class WindowMasks(unittest.TestCase):
    def test_facade_wall_mullions_and_door_are_not_glass(self):
        orm,n=masks(Image.new('RGBA',(512,512),(0,0,0,255)),LAYOUTS['c_building1'])
        # Layout coordinates are 256-square; output is 512-square.
        for x,y in ((10,10),(37.5,30),(120,210),(100,160)):
            self.assertEqual(orm.getpixel((int(x*2),int(y*2)))[3],255)
        for x,y in ((29,20),(43,21),(94,96),(220,188)):
            self.assertEqual(orm.getpixel((x*2,y*2))[3],0)
        self.assertEqual(n.getextrema()[3],(252,252))

    def test_panes_share_room_and_plain_glass_has_no_room(self):
        source=Image.new('RGBA',(128,128),(120,100,80,255))
        orm,n=masks(source,LAYOUTS['c2_vwin1'])
        self.assertLess(n.getpixel((60,100))[0],n.getpixel((180,100))[0])
        self.assertEqual(n.getpixel((60,100))[1],n.getpixel((180,100))[1])
        _,plain=masks(source,LAYOUTS['glass_dark'],True)
        self.assertEqual(plain.getpixel((100,100))[2],0)
        for mip in material_levels(n):self.assertEqual(mip.getextrema()[3],(252,252))

    def test_pack_window_contract_and_memory_bound(self):
        root=Path(__file__).parent
        entries=[e for e in json.loads((root/'manifest.json').read_text())['materials'] if e.get('window')]
        self.assertEqual({e['name'] for e in entries},set(LAYOUTS))
        total=0
        for e in entries:
            with Image.open(root/'masks'/(e['name']+'_n.png')) as n:
                self.assertEqual(n.getextrema()[3],(252,252))
                self.assertLessEqual(max(n.size),512)
                total+=n.width*n.height*8*4/3
            with Image.open(root/'masks'/(e['name']+'_orm.png')) as orm:
                self.assertEqual(orm.getextrema()[0],(255,255))
                self.assertLess(orm.getextrema()[3][0],255)
        self.assertLess(total,150*1024*1024)


if __name__=='__main__':unittest.main()
