"""Content-verified window apertures. Read original WADs, export numeric data only.

Coordinates below are in a 256x256 reference square (independent of aspect).
Each rectangle describes a complete window; mullions remain opaque and all
panes look into the same virtual room. Never classify glass by dark pixels.
"""
import argparse
import hashlib
import json
from pathlib import Path

import numpy as np
from PIL import Image
from author import wad_images, fnv

LAYOUTS = {}


def add(names, rects, cols=1, rows=1, bar=2, frosted=False, arch=False):
    for name in names.split():
        LAYOUTS[name] = dict(rects=rects, cols=cols, rows=rows, bar=bar,
                             frosted=frosted, arch=arch)


def grid(xs, ys, width, height):
    return [(x,y,x+width,y+height) for y in ys for x in xs]


add('c_building1',grid([25,90,151,216],[17,92],25,34)+
    [(23,183,46,215),(218,183,241,215)],2,3,1.1)
add('c_building2 c_building2s',[(86,45,177,185)],2,3,3)
add('c_build1win1 c_build1win1s',[(30,21,221,231)],2,3,5)
add('c_brick4win1 c_brick4win1s',[(77,66,184,106,1,1),(77,120,184,208,2,1)],bar=7)
add('cn_br4win1 cn_br4win1s cn_br4win1xs',[(85,83,180,108,1,1),(85,120,180,208,2,1)],bar=6)
add('c_obbsobwin1',[(94,94,162,162)],3,3,2,True)
add('c_obbsobwin2',[(98,62,162,204)],3,6,2,True)
add('c2_fonster3 d_fonster3 r_fonster2 r_fonster3',[(20,20,235,235)])
add('bateswindow',[(66,15,165,150)])
add('c2_vwin1',[(34,40,203,217)],2,1,16)
add('c2_vwin2',[(30,24,221,225)],2,3,5)
add('c2_vwin3',[(52,52,212,180)],1,1,2,True)
add('c2_vwin4',[(49,44,205,184)],4,3,5)
add('c2_vwin5',[(23,23,234,231)],2,1,7,True)
add('c2_vwin6',[(31,35,218,206)],2,1,6,True)
add('c2_vwin7',[(96,17,233,175)],2,2,5)
add('c2_vwin8',[(26,12,230,118)])
add('c2_vwin9',[(40,32,211,203)],1,1,2,True)
add('c2_vwin10',[(16,15,240,217)],1,1,2,True)
add('c_build5win',[(24,45,104,208),(166,45,215,208)])
add('c2_obuild1',grid([8,59,110,161,212],[20],31,102))
add('c2_obuild2',[(10,17,241,80)],2,1,9,True)
add('c2_buildingp1',grid([23,83,147,210],[24,103,151],17,25)+
    grid([23,83,147,210],[203],17,43),2,1,1)
add('c2_buildingp2',grid([19,60,162,204],[32,205],21,37)+
    grid([20,62,119,159,204],[126],21,33),2,2,1.5)
add('c_buildwhole3',grid([13,58,157,202],[23,72,119],21,23)+
    [(73,178,119,238,1,1,.28),(128,178,174,238,1,1,.28)],2,3,1)
add('c_buildwhole2',grid([22,47,100,164,217],[30],16,27)+
    grid([22,77,141,196,220],[86],16,26)+
    grid([22,141,194,221],[144],16,26)+grid([10,95,150],[208],17,22)+
    [(189,194,247,231,4,2)],2,1,2)
add('c_buildwhole4',grid([25,91,155],[67,126],21,28)+
    grid([76,140,204],[21],23,9)+grid([15,50,101,135,185,221],[207],18,21),2,1,2)
add('c_build3wa c_build3wag1 c_build3wag2 c_build3wag3',
    [(77,55,136,215),(170,55,230,215)],1,1,2,arch=True)
add('c_build4wa',[(43,70,109,169),(149,70,215,169)],2,2,4,arch=True)
add('c_build4wag1 c_build4wag2 c_build4wag3',
    [(22,70,54,169),(75,70,107,169),(150,70,182,169),(203,70,235,169)],2,2,2,arch=True)
add('he_build1',grid([16,80,148,212],[96,192],24,44),2,1,3)
add('he_build2 he_build3',grid([21,83,147,212],[43,107,169],20,33),2,1,1.5)
add('he_build4',grid([40,69,169,199],[20],14,14)+grid([33,72,163,201],[74,144,210],18,23),2,1,2)
add('he_build5',grid([14,44,77,111,142,174,207,236],[36,86,139],15,22),2,1,1)
add('po_hotelwin',grid([17,149],[83,188],84,53),2,2,7)
add('po_facadebank',grid([57,111,174],[25,55,84,116,145],18,21))
add('po_facadesky1',grid([0],[11,44,77,109,142,174,205,236],256,9),8,1,2)
add('po_facadesky2',grid([18,148],[8,35,61,88,113,140,165,192,218,242],84,12),3,1,2)
add('po_win3x3blue po_win3x3green',[(9,6,246,249)],3,3,5,True)
add('po_winindus3',[(8,5,248,251)],3,4,4,True)
add('r_forfonstercoo',[(17,8,237,247)],3,3,5,True)
add('r_farmfonster',[(10,10,245,247)],2,4,4)
add('r_window',[(15,21,237,242)],3,3,4,True)
add('r_window2 r_window2li',[(6,7,250,249)],3,3,4,True)
add('r_window3 r_window3li',[(8,8,247,128)],1,1,3,True,1.0)
add('r_allafonster',[(39,84,92,111,1,1),(39,128,92,179,2,1),
                     (164,84,215,111,1,1),(164,128,215,179,2,1)],bar=7)
add('r_voodofonst',[(2,3,254,251)],16,8,2,True)
add('c1a1_window',[(7,22,245,237)],1,4,7,True)
# Plain glass has no authored room boundary. Only a reflective surface response;
# real translucent brush geometry continues to use the engine's refraction path.
PLAIN = 'c_glassblur c_glasssharp c_hogglas1 c2_orutglas glass1 glass_bright glass_dark glass_med glassblue1 glassblue2 glassgreen invr_glassdrkdr po_glassdirty po_glassdrkdrt po_glassdrkst'.split()
add(' '.join(PLAIN),[(0,0,256,256)],frosted=True)


def masks(image, layout, plain=False):
    w,h=image.size
    if max(w,h)<=256:w,h=w*2,h*2
    while max(w,h)>512:w,h=w//2,h//2
    y,x=np.mgrid[:h,:w];x=(x+.5)*256/w;y=(y+.5)*256/h
    orm=np.ones((h,w,4));orm[...,1]=.83;orm[...,2]=0
    n=np.full((h,w,4),.5);n[...,3]=252/255
    for rect in layout['rects']:
        x0,y0,x1,y1=rect[:4]
        cols,rows=rect[4:6] if len(rect)>4 else (layout['cols'],layout['rows'])
        arch=rect[6] if len(rect)>6 else layout['arch']
        u=(x-x0)/(x1-x0);v=(y-y0)/(y1-y0)
        edge=np.minimum.reduce([x-x0,x1-x,y-y0,y1-y])
        for i in range(1,cols):
            edge=np.minimum(edge,abs(x-(x0+(x1-x0)*i/cols))-layout['bar']/2)
        for i in range(1,rows):
            edge=np.minimum(edge,abs(y-(y0+(y1-y0)*i/rows))-layout['bar']/2)
        if arch:
            # Half ellipse at the head; retain stone/wood outside the arch.
            arch_height=.25 if isinstance(arch,bool) else arch
            arch_y=arch_height*(1-np.sqrt(np.maximum(0,1-(u*2-1)**2)))
            edge=np.minimum(edge,(v-arch_y)*(y1-y0))
            if arch_height==1:
                angle=np.arctan2(v-1,(u*2-1))
                radial=abs(np.sin(angle*4))*np.sqrt((v-1)**2+(u*2-1)**2)
                edge=np.minimum(edge,(radial-.055)*(y1-y0))
        coverage=np.clip(edge*min(w,h)/256,0,1)
        inside=coverage>0
        n[...,0][inside]=u[inside];n[...,1][inside]=v[inside]
        # B=window aspect/4; zero disables virtual rooms on plain glass.
        n[...,2][inside]=0 if plain else np.clip((x1-x0)*w/((y1-y0)*h)/4,.03,1)
        orm[...,3]=np.minimum(orm[...,3],1-coverage)
        orm[...,1]=orm[...,1]*(1-coverage)+(.24 if layout['frosted'] else .075)*coverage
    return [Image.fromarray(np.rint(np.clip(a,0,1)*255).astype('uint8'),'RGBA') for a in (orm,n)]


def author(game, output):
    evidence=wad_images(game,set(LAYOUTS))
    manifest=json.loads((output/'manifest.json').read_text())
    manifest['channels']='ORM: G=roughness, B=metallic, A=inverse glass coverage for vehicles/windows; N: RG=slopes, B=height, A=254 world / 253 vehicle; window A=252, RG=room coordinates, B=aspect/4 (0=plain glass)'
    manifest['materials']=[e for e in manifest['materials'] if e['name'] not in LAYOUTS]
    for name,layout in LAYOUTS.items():
        image,wad=evidence[name]
        orm,normal=masks(image,layout,name in PLAIN)
        for suffix,im in (('orm',orm),('n',normal)):
            im.save(output/'masks'/f'{name}_{suffix}.png')
        manifest['materials'].append(dict(name=name,width=image.width,height=image.height,
            mask_width=normal.width,mask_height=normal.height,window=True,
            source_wad=wad,source_rgba_fnv1a=fnv(image.tobytes()),
            source_rgba_sha256=hashlib.sha256(image.tobytes()).hexdigest()))
    (output/'manifest.json').write_text(json.dumps(manifest,indent=2)+'\n')
    print('Authored window/glass textures:',len(LAYOUTS))


if __name__=='__main__':
    p=argparse.ArgumentParser();p.add_argument('--game-dir',type=Path,required=True)
    author(p.parse_args().game_dir,Path(__file__).parent)
