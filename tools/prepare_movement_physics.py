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
    def steps(b):
        b = b.replace('\tint step;','\tint step;\n'
            '\tint walkTime = atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "asd"));\n'
            '\tint runTime = atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "bsd"));\n'
            '\tint sprintTime = atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "csd"));\n'
            '\tif( atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "low")) && pmove->iStepLeft )\n'
            '\t{ runTime = (int)(runTime * 1.25); sprintTime = (int)(sprintTime * 1.25); }', 1)
        a = b.index('\t\t\tswitch( pmove->chtexturetype )')
        z = b.index('\n\t\t}\n\n\t\tpmove->flTimeStepSound', a)
        return b[:a] + ('\t\t\tfvol = fWalking ? 0.2f : 0.5f;\n'
            '\t\t\tpmove->flTimeStepSound = runTime;\n'
            '\t\t\tif( (pmove->cmd.buttons & 0x1000) && (pmove->flags & 0x40000) ) pmove->flTimeStepSound = sprintTime;\n'
            '\t\t\tif( pmove->flags & 0x80000 ) pmove->flTimeStepSound = walkTime;') + b[z:]
    function('void PM_UpdateStepSound( void )\n{', 'qboolean PM_AddToTouched', steps)
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
    # Server 1000a630 / 100061b0: water uses the same percent speed scale;
    # sprint retains full wish speed and special contents -19 is not swimming.
    function('void PM_WaterMove( void )\n{', 'void PM_AirMove', lambda b: b.replace(
        '!pmove->cmd.upmove )', '!pmove->cmd.upmove && pmove->watertype != -17 )', 1).replace(
        'wishspeed = VectorNormalize( wishdir );',
        'wishspeed = VectorNormalize( wishdir ) * pmove->clientmaxspeed / 100.0f;', 1).replace(
        '\twishspeed *= 0.8f;',
        '\tif( !(pmove->cmd.buttons & 0x1000) || !(pmove->flags & 0x40000) ) wishspeed *= 0.8f;', 1))
    replace('return ( pmove->waterlevel > 1 );',
            'return ( pmove->waterlevel > 1 && pmove->watertype != -19 );')
    function('void PM_PlayerMove( qboolean server )\n{', 'void PM_Move(', lambda b: b.replace(
        'pmove->oldwaterlevel = pmove->waterlevel;',
        'pmove->oldwaterlevel = pmove->watertype < -16 ? 0 : pmove->waterlevel;', 1).replace(
        'if( pmove->waterlevel >= 2 )',
        'if( pmove->waterlevel >= 2 && pmove->watertype != -19 )', 1).replace(
        '\t\t\t// Let the user try to duck to get unstuck\n\t\t\tPM_Duck();\n\n\t\t\tif( PM_CheckStuck() )\n\t\t\t\treturn;  // Can\'t move, we\'re stuck',
        '\t\t\treturn; // CoF 10008a00: no second duck/unstick pass.', 1))
    replace('if( pmove->iuser3 || pmove->dead )', 'if( pmove->iuser3 || pmove->dead || pmove->fuser3 != 0 )')
    replace('pe->model && (modtype_t)pmove->PM_GetModelType( pe->model ) == mod_brush && pe->skin == CONTENTS_LADDER',
            'pe->iuser1 != 1 && pe->model && (modtype_t)pmove->PM_GetModelType( pe->model ) == mod_brush && pe->skin == CONTENTS_LADDER')
    replace('\t\t// they shouldn\'t be able to move faster than their maxspeed\n\t\tif( flSpeed > pmove->maxspeed )\n\t\t\tflSpeed = pmove->maxspeed;\n', '')
    replace('\t\tif( pmove->flags & FL_DUCKING )\n\t\t\tflSpeed *= PLAYER_DUCKING_MULTIPLIER;\n', '')

    def jump(b):
        b = b.replace('\tqboolean bunnyjump = false;\n', '')
        b = b.replace('\tif( pmove->dead )', '\tif( pmove->fuser3 != 0 ) return;\n\n\tif( pmove->dead )', 1)
        b = b.replace('if( pmove->waterlevel >= 2 )', 'if( pmove->waterlevel >= 2 && pmove->watertype != -19 )', 1)
        # Project admission bit, sampled before the server's jump stamina debit.
        # Keep swimming/ladder exit independent from ground-jump stamina.
        b = b.replace('\tif( pmove->onground == -1 )',
            '\tif( atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "cof_jb")) )\n'
            '\t{ pmove->oldbuttons |= IN_JUMP; return; }\n\n\tif( pmove->onground == -1 )', 1)
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

    def spring(b):
        start, end = b.index('{'), b.index('\n}', b.index('{'))
        return b[:start] + '''{
    // CoF server10005260/client10011eb0. vuser3 is angular velocity,
    // punchangle is displacement; do not replace with stock HL linear decay.
    float damping, stiffness;
    if( pmove->dead ) pmove->vuser3[2] = 670.0f;
    if( atoi(pmove->PM_Info_ValueForKey(pmove->physinfo, "chr")) == 2 )
        pmove->vuser3[0] = 670.0f;
    if( Length(punchangle) <= 0.001f && Length(pmove->vuser3) <= 0.001f ) return;
    VectorMA(punchangle, pmove->frametime, pmove->vuser3, punchangle);
    damping = max(0.0f, 1.0f - pmove->frametime * 9.0f);
    VectorScale(pmove->vuser3, damping, pmove->vuser3);
    stiffness = min(2.0f, max(0.0f, pmove->frametime * 65.0f));
    VectorMA(pmove->vuser3, -stiffness, punchangle, pmove->vuser3);
    punchangle[0] = min(89.0f, max(-89.0f, punchangle[0]));
    punchangle[1] = min(179.0f, max(-179.0f, punchangle[1]));
    punchangle[2] = min(89.0f, max(-89.0f, punchangle[2]));
''' + b[end:]
    function('void PM_DropPunchAngle( vec3_t punchangle )\n{', 'void PM_CheckParamters', spring)

    def landing(b):
        b = b.replace('player/pl_fallpain3.wav', 'player/pl_fallpain.wav')
        b = b.replace('\t\t\t// play step sound for current texture',
            '\t\t\tif( pmove->waterlevel < 3 ) pmove->PM_PlaySound(CHAN_AUTO,\n'
            '\t\t\t\tpmove->multiplayer ? "player/sprint/equipment_movement.wav" : "player/sprint/bag_movement.wav",\n'
            '\t\t\t\t0.7f, 0.8f, 0, PITCH_NORM);\n\n\t\t\t// play step sound for current texture', 1)
        a = b.index('\t\t\t// Knock the screen')
        z = b.index('\n\t\t}\n', a)
        return b[:a] + '''            // 10003ef0: add landing impulse to the shared angular spring.
            {
                float strength = min(pmove->flFallVelocity, 700.0f) * 0.42f;
                pmove->vuser3[0] += strength;
                pmove->vuser3[1] += pmove->RandomFloat(-strength / 10.0f, strength / 10.0f);
                pmove->vuser3[2] += pmove->RandomFloat(-strength / 10.0f, strength / 10.0f);
            }''' + b[z:]
    function('void PM_CheckFalling( void )\n{', 'void PM_PlayWaterSounds', landing)
    # Original 100089f0 is an empty return, not the SDK water transition audio.
    function('void PM_PlayWaterSounds( void )\n{', 'float PM_CalcRoll',
             lambda b: b[:b.index('{')] + '{}\n\n')

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
