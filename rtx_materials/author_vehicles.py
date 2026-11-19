"""Author numeric vehicle masks from read-only MDL skins; never export albedo.

Layout coordinates are in a 1024-square reference atlas. These hand-authored
regions apply only to the content fingerprints recorded in manifest.json.
"""
import argparse
import hashlib
import json
from pathlib import Path
import struct

import numpy as np
from PIL import Image, ImageDraw, ImageFilter


LAYOUTS = {
    'aud': dict(
        glass=[[(320,94),(451,17),(552,17),(535,94)],
               [(568,17),(695,20),(726,93),(555,93)],
               [(719,27),(818,91),(748,91)],
               [(158,322),(431,322),(495,407),(92,407)],
               [(157,678),(434,679),(520,759),(87,759)]],
        rubber=[[(12,180),(1010,180),(1000,203),(15,201)],
                [(16,561),(549,561),(540,655),(19,655)],
                [(17,911),(582,911),(568,979),(25,979)],
                [(654,332),(716,332),(716,552),(654,552)]],
        wheels=[(184,237,65,44),(797,243,61,43)],
        seams=[[(309,103),(302,235),(536,258),(540,119)],
               [(748,122),(730,248)],[(541,122),(748,122)],
               [(60,455),(538,455)],[(80,782),(540,782)]],
        handles=[(478,117,510,122),(706,117,731,122)],
        mirror_box=(230,33,241,44)),
    'foretag': dict(
        glass=[[(177,140),(254,43),(356,42),(348,141)],
               [(95,447),(377,447),(425,532),(53,532)]],
        rubber=[[(20,674),(464,674),(465,798),(20,798)],
                [(528,794),(946,794),(944,835),(526,835)],
                [(107,846),(154,846),(154,1013),(107,1013)]],
        wheels=[(139,341,62,43),(831,345,62,42)],
        seams=[[(150,157),(205,332),(349,332),(359,196)],
               [(373,31),(383,329)],[(387,51),(641,51),(641,151),(387,151),(387,51)],
               [(521,206),(521,332)],[(736,436),(736,798)]],
        handles=[(352,159,364,185),(531,551,556,559),(880,550,903,558)],
        mirror_box=None),
    'vari': dict(
        glass=[[(250,144),(387,49),(520,29),(508,124)],
               [(558,30),(645,23),(719,45),(735,76),(721,107),(557,122)],
               [(115,429),(359,430),(414,520),(64,520)],
               [(627,445),(855,449),(891,521),(560,521)]],
        rubber=[[(243,305),(642,270),(653,292),(250,329)],
                [(20,652),(426,652),(422,687),(20,687)],
                [(512,666),(942,666),(938,711),(511,711)],
                [(25,821),(73,821),(73,992),(25,992)]],
        wheels=[(138,304,64,43),(766,320,64,42)],
        seams=[[(241,165),(260,321),(521,292),(524,139)],
               [(550,141),(552,285),(663,273),(754,166),(761,128)],
               [(52,556),(428,557)],[(554,579),(872,589)]],
        handles=[(463,178,499,186),(700,164,731,172)],
        mirror_box=(193,44,202,53)),
    'polisbil': dict(
        glass=[[(89,29),(273,29),(258,97),(71,97)],
               [(304,30),(437,32),(450,104),(299,100)],
               [(500,33),(561,44),(692,110),(493,103)],
               [(94,377),(396,377),(436,471),(58,471)],
               [(632,359),(854,361),(905,421),(583,421)]],
        rubber=[[(312,247),(748,247),(748,266),(312,266)],
                [(25,607),(465,607),(465,646),(25,646)],
                [(503,632),(995,632),(980,666),(513,666)],
                [(33,744),(97,744),(97,964),(33,964)]],
        wheels=[(219,257,66,48),(848,255,64,47)],
        seams=[[(291,117),(300,247),(480,247),(478,118)],
               [(480,247),(744,247),(737,135)],[(241,491),(241,665)],
               [(600,491),(896,491)]],
        handles=[(312,126,340,133),(672,147,698,156)],
        mirror_box=(328,191,340,204)),
}


def fnv(data):
    value=2166136261
    for b in data: value=((value ^ b)*16777619)&0xffffffff
    return value


def studio_textures(data):
    if data[:4]!=b'IDST' or struct.unpack_from('<i',data,4)[0]!=10:
        raise ValueError('Expected GoldSrc studio v10')
    count,offset=struct.unpack_from('<2i',data,180)
    for i in range(count):
        name,flags,w,h,index=struct.unpack_from('<64s4i',data,offset+i*80)
        if flags or not 0<w<=2048 or not 0<h<=2048 or index+w*h+768>len(data):
            raise ValueError('Unsupported studio texture')
        im=Image.frombytes('P',(w,h),data[index:index+w*h])
        im.putpalette(data[index+w*h:index+w*h+768])
        yield name.split(b'\0')[0].decode('ascii'),im.convert('RGBA')


def mirror_commands(data,box):
    if box is None:return []
    hashes=[]
    count,offset=struct.unpack_from('<2i',data,204)
    for b in range(count):
        _,models,_,mo=struct.unpack_from('<64s3i',data,offset+b*76)
        for m in range(models):
            meshes,mi=struct.unpack_from('<2i',data,mo+m*112+72)
            for j in range(meshes):
                pos=struct.unpack_from('<i',data,mi+j*20+4)[0]
                while True:
                    start=pos
                    n=struct.unpack_from('<h',data,pos)[0];pos+=2
                    if not n:break
                    cmd=[struct.unpack_from('<4h',data,pos+k*8) for k in range(abs(n))]
                    pos+=abs(n)*8
                    if all(box[0]<=c[2]<=box[2] and box[1]<=c[3]<=box[3] for c in cmd):
                        hashes.append(fnv(data[start:pos]))
    return list(dict.fromkeys(hashes))


def masks(image,layout):
    # Twice the source resolution preserves thin seams without replacing color.
    w,h=image.width*2,image.height*2
    def region(polys):
        im=Image.new('L',(w,h));draw=ImageDraw.Draw(im)
        for poly in polys:draw.polygon([(x*w/1024,y*h/1024) for x,y in poly],fill=255)
        return np.asarray(im.filter(ImageFilter.GaussianBlur(.65)),dtype=float)/255
    glass=region(layout['glass']);rubber=region(layout['rubber'])
    tire=Image.new('L',(w,h));rim=tire.copy()
    for x,y,r,inner in layout['wheels']:
        for dest,rad in ((tire,r),(rim,inner)):
            ImageDraw.Draw(dest).ellipse(((x-rad)*w/1024,(y-rad)*h/1024,
                                         (x+rad)*w/1024,(y+rad)*h/1024),fill=255)
    tire=np.asarray(tire.filter(ImageFilter.GaussianBlur(.7)),dtype=float)/255
    rim=np.asarray(rim.filter(ImageFilter.GaussianBlur(.7)),dtype=float)/255
    rubber=np.maximum(rubber,tire*(1-rim))
    paint=(1-glass)*(1-rubber)*(1-tire)
    lum=np.asarray(image.convert('L').resize((w,h),Image.Resampling.BICUBIC),dtype=float)/255
    broad=np.asarray(image.convert('L').resize((w,h)).filter(ImageFilter.GaussianBlur(6)),dtype=float)/255
    detail=np.clip(lum-broad,-.12,.12)
    rng=np.random.default_rng(7231)
    grain=rng.uniform(-1,1,(h,w))
    rough=.31+.06*(1-lum)+detail*.13+grain*.012
    rough=rough*(1-glass)+(.13+.035*(1-lum))*glass
    rough=rough*(1-rubber)+(.85+detail*.15)*rubber
    rough=rough*(1-rim)+(.29+detail*.2)*rim
    metal=.65*rim  # painted body and glass stay dielectric
    seam=Image.new('L',(w,h));draw=ImageDraw.Draw(seam)
    for line in layout['seams']:
        draw.line([(x*w/1024,y*h/1024) for x,y in line],fill=255,width=max(1,round(w/512)))
    seam=np.asarray(seam.filter(ImageFilter.GaussianBlur(.9)),dtype=float)/255
    handle=Image.new('L',(w,h));draw=ImageDraw.Draw(handle)
    for x,y,x2,y2 in layout['handles']:draw.rounded_rectangle((x*w/1024,y*h/1024,x2*w/1024,y2*h/1024),radius=2,fill=255)
    handle=np.asarray(handle.filter(ImageFilter.GaussianBlur(.8)),dtype=float)/255
    height=.5-.16*seam*paint+.11*handle-.055*glass
    height+=detail*(.025*paint+.09*rubber+.12*rim)+grain*.0015*paint
    gy,gx=np.gradient(height)
    normal=np.ones((h,w,4));normal[...,0]=.5-np.clip(gx*3.2,-.65,.65)*.5
    normal[...,1]=.5-np.clip(gy*3.2,-.65,.65)*.5
    normal[...,2]=height;normal[...,3]=253/255  # shallow vehicle relief, no porous world grain
    orm=np.ones((h,w,4));orm[...,1]=np.clip(rough,.10,.94);orm[...,2]=metal
    return [Image.fromarray(np.rint(np.clip(a,0,1)*255).astype('uint8'),'RGBA') for a in (orm,normal)]


def author(game,output):
    path=output/'manifest.json';manifest=json.loads(path.read_text())
    manifest['channels']='ORM: G=perceptual roughness, B=metallic; N: RG=tangent slopes, B=height, A=254 world relief / 253 vehicle relief (255 legacy)'
    entries=[e for e in manifest['materials'] if not e['name'].startswith('vehicle_')]
    for model in sorted((game/'models/Props/Fordon').glob('*.mdl')):
        family=model.stem.split('_')[0]
        if family not in LAYOUTS:continue
        data=model.read_bytes();layout=LAYOUTS[family]
        mirrors=mirror_commands(data,layout['mirror_box'])
        for i,(skin,image) in enumerate(studio_textures(data)):
            # policecartex2 contains mirrored lettering/credits, not the same UV layout.
            if family=='polisbil' and i:continue
            name='vehicle_'+model.stem+'_'+str(i)
            orm,normal=masks(image,layout)
            for suffix,im in (('orm',orm),('n',normal)):im.save(output/'masks'/(name+'_'+suffix+'.png'))
            entries.append(dict(name=name,studio_texture='#'+model.relative_to(game).with_suffix('').as_posix()+'/'+Path(skin).stem+'.mdl',
                                width=image.width,height=image.height,mask_width=normal.width,mask_height=normal.height,
                                source_rgba_fnv1a=fnv(image.tobytes()),source_sha256=hashlib.sha256(image.tobytes()).hexdigest(),
                                source_model_sha256=hashlib.sha256(data).hexdigest(),mirror_commands=mirrors))
    manifest['materials']=entries;path.write_text(json.dumps(manifest,indent=2)+'\n')
    print('Authored',sum(e['name'].startswith('vehicle_') for e in entries),'vehicle skins')


if __name__=='__main__':
    parser=argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--game-dir',type=Path,required=True)
    args=parser.parse_args();author(args.game_dir,Path(__file__).parent)
