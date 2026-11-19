"""Apply recovered CoF PM rules to the disposable SDK, shared by both DLLs.

Evidence: analysis/movement/physics.md and FUNCTION_CATALOG movement entries.
Never patch the vendor checkout or original game assets.
"""
from pathlib import Path
import shutil


def prepare(root: Path, target: Path):
    path = target / 'pm_shared/pm_shared.c'
    text = path.read_text(encoding='utf-8')

    def replace(old, new):
        nonlocal text
        if text.count(old) != 1:
            raise RuntimeError('CoF PM anchor mismatch: ' + old[:90])
        text = text.replace(old, new, 1)

    def function(name, next_name, transform):
        nonlocal text
        start = text.index(name)
        end = text.index(next_name, start + len(name))
        body = text[start:end]
        updated = transform(body)
        if updated == body:
            raise RuntimeError('CoF PM function unchanged: ' + name)
        text = text[:start] + updated + text[end:]

    replace('#define TIME_TO_DUCK\t\t0.4f', '#define TIME_TO_DUCK\t\t0.6f // CoF 10005400')
    replace('#define MAX_CLIMB_SPEED\t\t200', '#define MAX_CLIMB_SPEED\t\t90 // CoF 10006a40')
    function('void PM_WalkMove( void )\n{', 'void PM_Friction', lambda b: b.replace(
        '\t// Copy movement amounts',
        '\tif( pmove->fuser3 > 0 && pmove->fuser3 < 50 ) return;\n'
        '\tif( pmove->fuser3 >= 50 ) { VectorClear(pmove->forward); VectorClear(pmove->right); }\n\n'
        '\t// Copy movement amounts', 1).replace(
        'wishspeed = VectorNormalize( wishdir );',
        'wishspeed = VectorNormalize( wishdir ) * pmove->clientmaxspeed / 100.0f;', 1).replace(
        '\t// Set pmove velocity',
        '\tif( atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "low")) && !(pmove->flags & 0x40000) )\n'
        '\t{\n\t\twishspeed *= 0.75f;\n\t\tif( pmove->iStepLeft ) wishspeed *= 0.75f;\n\t}\n'
        '\t// Set pmove velocity', 1).replace(
        'PM_Accelerate( wishdir, wishspeed,', 'PM_Accelerate( wishdir, max(30.0f, wishspeed),', 1))
    function('void PM_AirMove( void )\n{', 'qboolean PM_InWater', lambda b: b.replace(
        'wishspeed = VectorNormalize( wishdir );',
        'wishspeed = VectorNormalize( wishdir ) * pmove->clientmaxspeed / 100.0f;', 1))
    replace('if( pmove->iuser3 || pmove->dead )', 'if( pmove->iuser3 || pmove->dead || pmove->fuser3 != 0 )')
    replace('pe->model && (modtype_t)pmove->PM_GetModelType( pe->model ) == mod_brush && pe->skin == CONTENTS_LADDER',
            'pe->iuser1 != 1 && pe->model && (modtype_t)pmove->PM_GetModelType( pe->model ) == mod_brush && pe->skin == CONTENTS_LADDER')
    replace('\t\t// they shouldn\'t be able to move faster than their maxspeed\n\t\tif( flSpeed > pmove->maxspeed )\n\t\t\tflSpeed = pmove->maxspeed;\n', '')
    replace('\t\tif( pmove->flags & FL_DUCKING )\n\t\t\tflSpeed *= PLAYER_DUCKING_MULTIPLIER;\n', '')

    def jump(b):
        b = b.replace('\tqboolean bunnyjump = false;\n', '')
        b = b.replace('\tif( pmove->dead )', '\tif( pmove->fuser3 != 0 ) return;\n\n\tif( pmove->dead )', 1)
        b = b.replace('if( pmove->waterlevel >= 2 )', 'if( pmove->waterlevel >= 2 && pmove->watertype != -19 )', 1)
        a = b.index('\t\t\t// Don\'t play sound again')
        z = b.index('\n\t\t}\n', a)
        b = b[:a] + '\t\t\tpmove->flSwimTime = 5000;\n\t\t\tpmove->PM_PlaySound(CHAN_BODY, "player/vocal/water_breathe.wav", 1, ATTN_NORM, 0, pmove->RandomLong(90,110));' + b[z:]
        a = b.index('\tif( pmove->multiplayer )')
        z = b.index('\n\t// Don\'t play jump', a)
        b = b[:a] + '\tPM_PreventMegaBunnyJumping();\n' + b[z:]
        old = '\telse\n\t{\n\t\tpmove->velocity[2] = sqrt( 2.0f * 800.0f * 45.0f );\n\t}'
        assert b.count(old) == 1
        return b.replace(old, '\telse\n\t{\n\t\tint height = atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "jh"));\n\t\tpmove->velocity[2] = sqrt( max(0, height) * 16.0f * 45.0f );\n\t}')

    function('void PM_Jump( void )\n{', '#define WJ_HEIGHT', jump)

    def parameters(b):
        b = b.replace('\tfloat maxspeed;\n', '')
        b = b.replace('\tspd = (', '\t// CoF 10004170: sprint forward, otherwise asymmetric diagonal input.\n'
                      '\tif( (pmove->cmd.buttons & 0x1000) && (pmove->flags & 0x40000) ) pmove->cmd.sidemove = 0;\n'
                      '\telse if( pmove->cmd.sidemove != 0 && pmove->cmd.forwardmove != 0 ) pmove->cmd.forwardmove *= 0.5f;\n\n\tspd = (', 1)
        a = b.index('\tmaxspeed = pmove->clientmaxspeed;')
        z = b.index('\tif( ( spd != 0.0f )', a)
        b = b[:a] + b[z:]
        b = b.replace('\t\tpmove->cmd.upmove = 0;', '\t\tpmove->cmd.upmove = 0;\n\t\tpmove->cmd.buttons = 0;', 1)
        b = b.replace('if( !pmove->dead )', 'if( !pmove->dead && pmove->fuser3 < 50 )', 1)
        b = b.replace('\telse\n\t{\n\t\tVectorCopy( pmove->oldangles, pmove->angles );',
                      '\telse if( pmove->fuser3 < 50 )\n\t{\n\t\tVectorCopy( pmove->oldangles, pmove->angles );', 1)
        return b.replace('\t// Adjust client view angles',
                         '\tif( !pmove->dead && pmove->view_ofs[2] == PM_DEAD_VIEWHEIGHT ) pmove->view_ofs[2] = VEC_VIEW;\n\n\t// Adjust client view angles', 1)

    function('void PM_CheckParamters( void )\n{', 'void PM_ReduceTimers', parameters)
    text += '\n#include "movement_pm_tests.inc"\n'
    path.write_text(text, encoding='utf-8', newline='\n')
    shutil.copy2(root / 'tests/cof/shared/movement_pm_tests.inc', target / 'pm_shared/movement_pm_tests.inc')
