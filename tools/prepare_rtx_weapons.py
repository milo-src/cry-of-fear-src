"""Route own dual hands through the native RTX studio pipeline, in build/ only."""
from pathlib import Path
import shutil
ROOT=Path(__file__).resolve().parents[1]

def one(text,old,new):
    if text.count(old)!=1: raise ValueError('RTX weapon hook changed: '+old[:80])
    return text.replace(old,new,1)

def prepare(target):
    target=Path(target).resolve()
    if not target.is_relative_to((ROOT/'build').resolve()): raise ValueError('Disposable engine tree required')
    shutil.copy2(ROOT/'src/cof/shared/weapon_studio_interface.h',target/'ref/gl/weapon_studio_interface.h')
    path=target/'ref/gl/gl_studio.c';text=path.read_text()
    text=one(text,'#include "gl_local.h"','#include "gl_local.h"\n#include "r_studioint.h"\n#include "weapon_studio_interface.h"')
    anchor='static qboolean R_AllowFlipViewModel( cl_entity_t *e )\n{'
    text=one(text,anchor,anchor+'''
    if(e == tr.viewent && (e->curstate.iuser4 == COF_WEAPON_HAND_LEFT || e->curstate.iuser4 == COF_WEAPON_HAND_RIGHT))
        return e->curstate.iuser4 == COF_WEAPON_HAND_LEFT;
''')
    # Native event evaluation uses this renderer's own bones and attachments.
    begin=text.index('static int R_StudioDrawModel( int flags )')
    end=text.index('static void R_StudioDrawModelInternal(',begin)
    segment=text[begin:end]
    segment=one(segment,'\t\tR_StudioClientEvents( );','''
        CofWeaponStudioInterface* cof = pStudioDraw && pStudioDraw->version == COF_WEAPON_STUDIO_VERSION ? (CofWeaponStudioInterface*)pStudioDraw : NULL;
        if(cof && RI.currententity == tr.viewent) cof->HandEvent(1);
        R_StudioClientEvents();
        if(cof && RI.currententity == tr.viewent) cof->HandEvent(0);
''')
    text=text[:begin]+segment+text[end:]
    anchor='static void R_StudioDrawModelInternal( cl_entity_t *e, int flags )\n{'
    wrapper='''static int CofRTDrawSingleWeaponHand(int flags) {
    model_t* savedModel=RI.currentmodel;
    qboolean savedFlip=tr.fFlipViewModel;
    RI.currentmodel=RI.currententity->model;
    tr.fFlipViewModel=R_AllowFlipViewModel(RI.currententity);
    int result=R_StudioDrawModel(flags);
    RI.currentmodel=savedModel; tr.fFlipViewModel=savedFlip;
    return result;
}
'''
    text=one(text,anchor,wrapper+anchor+'''
    // Only our versioned client can expose the extension. Other mods retain
    // the stock native path. World models always use the native renderer.
    if(e == tr.viewent && pStudioDraw && pStudioDraw->version == COF_WEAPON_STUDIO_VERSION) {
        CofWeaponStudioInterface* cof=(CofWeaponStudioInterface*)pStudioDraw;
        if(cof->DrawHands(flags,CofRTDrawSingleWeaponHand) >= 0) return;
    }
''')
    path.write_text(text)
    path=target/'ref/gl/gl_opengl.c';text=path.read_text()
    text=one(text,'#include "gl_local.h"','#include "gl_local.h"\n#include "r_studioint.h"\n#include "weapon_studio_interface.h"')
    start=text.index('else if( curtype == RT_BATCH_TYPE_STUDIO )')
    end=text.index('else if( curtype == RT_BATCH_TYPE_BRUSH )',start)
    segment=text[start:end]
    anchor='\t\tassert( mesh.uniqueObjectID != 0 );'
    segment=one(segment,anchor,'''        if(isviewmodel && (RI.currententity->curstate.iuser4 == COF_WEAPON_HAND_LEFT || RI.currententity->curstate.iuser4 == COF_WEAPON_HAND_RIGHT)) {
            // Stable disjoint IDs prevent RTGL replacing one hand's matching
            // body/mesh primitive with the other, and retain motion history.
            mesh.uniqueObjectID = 0x434f480000000000ULL | (uint32_t)RI.currententity->curstate.iuser4;
            static unsigned reported;
            unsigned hand = RI.currententity->curstate.iuser4 == COF_WEAPON_HAND_LEFT ? 1 : 2;
            if(getenv("COF_WEAPONTEST") && !(reported & (1u << hand))) {
                reported |= 1u << hand;
                gEngfuncs.Con_Printf("COF_RTX_HAND_SUBMIT hand=%u model=%s\\n",hand,RI.currentmodel->name);
            }
        }
'''+anchor)
    text=text[:start]+segment+text[end:];path.write_text(text)
