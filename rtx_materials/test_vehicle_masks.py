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

    def test_atlas_glass_coverage_leaves_body_and_rubber_dielectric(self):
        glass=self.orm.getpixel((400,60))
        paint=self.orm.getpixel((400,145))
        rubber=self.orm.getpixel((400,190))
        rim=self.orm.getpixel((184,237))
        self.assertLess(glass[1],paint[1])
        self.assertLess(paint[1],rubber[1])
        self.assertEqual((glass[2],paint[2],rubber[2]),(0,0,0))
        self.assertGreater(rim[2],128)
        self.assertEqual(glass[3],0)  # only glass opts into the reflective coating
        self.assertEqual((paint[3],rubber[3],rim[3]),(255,255,255))
        self.assertLess(glass[1],20)  # smooth enough to retain recognizable reflections

    def test_vehicle_marker_and_neutral_ao_survive_mips(self):
        for mip in material_levels(self.normal):
            self.assertEqual(mip.getextrema()[3],(253,253))
        for mip in material_levels(self.orm,self.normal):
            self.assertEqual(mip.getextrema()[0],(255,255))
        height=np.asarray(self.normal)[...,2]
        self.assertGreater(int(height.min()),65)
        self.assertLess(int(height.max()),170)

    def test_door_seam_is_recessed_and_color_is_untouched(self):
        self.assertLess(self.normal.getpixel((540,160))[2],self.normal.getpixel((510,160))[2])
        self.assertEqual(self.source.getextrema(),((100,100),(90,90),(80,80),(255,255)))


if __name__=='__main__':unittest.main()
