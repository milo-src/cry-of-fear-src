import unittest
import numpy as np
from PIL import Image
from author_vehicles import LAYOUTS, masks
from build import material_levels


class VehicleMasks(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.source=Image.new('RGBA',(512,512),(100,90,80,255))
        cls.orm,cls.normal=masks(cls.source,LAYOUTS['aud'])

    def test_atlas_materials_do_not_make_body_or_windows_metallic(self):
        glass=self.orm.getpixel((400,60))
        paint=self.orm.getpixel((400,145))
        rubber=self.orm.getpixel((400,190))
        rim=self.orm.getpixel((184,237))
        self.assertLess(glass[1],paint[1])
        self.assertLess(paint[1],rubber[1])
        self.assertEqual((glass[2],paint[2],rubber[2]),(0,0,0))
        self.assertGreater(rim[2],128)

    def test_vehicle_marker_survives_mips_without_opacity_changes(self):
        for mip in material_levels(self.normal):
            self.assertEqual(mip.getextrema()[3],(253,253))
        for mip in material_levels(self.orm,self.normal):
            self.assertEqual(mip.getextrema()[3],(255,255))
        height=np.asarray(self.normal)[...,2]
        self.assertGreater(int(height.min()),65)
        self.assertLess(int(height.max()),170)

    def test_door_seam_is_recessed_and_color_is_untouched(self):
        self.assertLess(self.normal.getpixel((540,160))[2],self.normal.getpixel((510,160))[2])
        self.assertEqual(self.source.getextrema(),((100,100),(90,90),(80,80),(255,255)))


if __name__=='__main__':unittest.main()
