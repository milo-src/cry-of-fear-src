/* Renderer-only collision avoidance for the local first-person world body.
 * GoldSrc's movement hull does not contain the animated arms. An arm entering
 * a wall stops casting its complete shadow. Swing the arm at its shoulder,
 * preserving bone lengths; never scale/clip vertices or alter the MDL/viewmodel.
 * This is an RTX adaptation, not a reconstruction of original game IK.
 */
typedef struct {
    int root, count, bone[MAXSTUDIOBONES];
    vec3_t pivot, axis, point[MAXSTUDIOBONES];
    float angle;
} cof_rt_arm_t;

static void CofRTArmMatrix(const cof_rt_arm_t *arm, float amount, matrix3x4 m)
{
    const float c = cosf(arm->angle * amount), s = sinf(arm->angle * amount), t = 1-c;
    const float x=arm->axis[0], y=arm->axis[1], z=arm->axis[2];
    m[0][0]=t*x*x+c;   m[0][1]=t*x*y-s*z; m[0][2]=t*x*z+s*y;
    m[1][0]=t*x*y+s*z; m[1][1]=t*y*y+c;   m[1][2]=t*y*z-s*x;
    m[2][0]=t*x*z-s*y; m[2][1]=t*y*z+s*x; m[2][2]=t*z*z+c;
    for (int i=0;i<3;++i)
        m[i][3]=arm->pivot[i]-DotProduct(m[i],arm->pivot);
}

static qboolean CofRTArmClear(const cof_rt_arm_t *arm, float amount)
{
    matrix3x4 rotation;
    CofRTArmMatrix(arm,amount,rotation);
    // Probe each joint/finger with a skin margin. Rays begin at the shoulder
    // and include solid brushes. If the shoulder itself is embedded, leave
    // the authored pose intact rather than deforming the torso.
    for (int i=1;i<arm->count;++i) {
        vec3_t p;
        Matrix3x4_VectorTransform(rotation,arm->point[i],p);
        for (int side=0;side<7;++side) {
            vec3_t end, start;
            VectorCopy(p,end); VectorCopy(arm->pivot,start);
            if (side) end[(side-1)/2] += (side&1) ? 3.0f : -3.0f;
            pmtrace_t hit=gEngfuncs.CL_TraceLine(start,end,PM_STUDIO_IGNORE);
            if (hit.startsolid || hit.allsolid || hit.fraction<1.0f) return false;
        }
    }
    return true;
}

static void CofRTPlayerPose(void)
{
    if (cof_rt_menu_scene || RI.currententity != gEngfuncs.GetLocalPlayer() ||
        ENGINE_GET_PARM(PARM_THIRDPERSON) || ENGINE_GET_PARM(PARM_LOCAL_HEALTH)<=0 ||
        !CL_IsViewEntityLocalPlayer() || FBitSet(RI.rvp.flags,RF_DRAW_CUBEMAP)) return;
    if (m_pStudioHeader->numbones<=0 || m_pStudioHeader->numbones>MAXSTUDIOBONES) return;
    const mstudiobone_t *bones=(const mstudiobone_t *)((const byte *)m_pStudioHeader+m_pStudioHeader->boneindex);
    static const char *roots[2][2]={{"Bip01 L Arm1","Bip01 L UpperArm"},{"Bip01 R Arm1","Bip01 R UpperArm"}};
    static const char *hands[2]={"Bip01 L Hand","Bip01 R Hand"};
    for (int side=0;side<2;++side) {
        cof_rt_arm_t arm={0};
        int hand=-1;
        arm.root=-1;
        for (int i=0;i<m_pStudioHeader->numbones;++i) {
            if (!Q_stricmp(bones[i].name,roots[side][0]) || !Q_stricmp(bones[i].name,roots[side][1])) arm.root=i;
            if (!Q_stricmp(bones[i].name,hands[side])) hand=i;
        }
        if (arm.root<0 || hand<0) continue; // Unrecognized custom rig: preserve its animation.
        for (int i=arm.root;i<m_pStudioHeader->numbones;++i) {
            int parent=i, depth=0;
            while (parent>=0 && parent<m_pStudioHeader->numbones && parent!=arm.root && depth++<MAXSTUDIOBONES)
                parent=bones[parent].parent;
            if (parent!=arm.root) continue;
            arm.bone[arm.count]=i;
            Matrix3x4_OriginFromMatrix(g_studio.bonestransform[i],arm.point[arm.count++]);
        }
        qboolean haveHand=false;
        for (int i=0;i<arm.count;++i) if (arm.bone[i]==hand) haveHand=true;
        if (!haveHand || arm.count<3) continue;
        VectorCopy(arm.point[0],arm.pivot);
        vec3_t from, to, handpos;
        Matrix3x4_OriginFromMatrix(g_studio.bonestransform[hand],handpos);
        VectorSubtract(handpos,arm.pivot,from);
        VectorSubtract(RI.currententity->origin,arm.pivot,to);
        to[2]-=12; // Fold toward the body and down, away from nearby walls.
        if (VectorLength(from)<.001f || VectorLength(to)<.001f) continue;
        VectorNormalize(from); VectorNormalize(to);
        CrossProduct(from,to,arm.axis);
        if (VectorLength(arm.axis)<.001f) continue;
        VectorNormalize(arm.axis);
        arm.angle=acosf(bound(-1.0f,DotProduct(from,to),1.0f));
        const qboolean blocked=!CofRTArmClear(&arm,0);
        float amount=0;
        if (blocked) {
            // Search the shortest collision-free swing, then refine the contact
            // angle. No clear solution means leave the authored pose intact.
            for (int step=1;step<=8;++step) {
                float high=step/8.0f, low=(step-1)/8.0f;
                if (!CofRTArmClear(&arm,high)) continue;
                for (int j=0;j<8;++j) {
                    float mid=(low+high)*.5f;
                    if (CofRTArmClear(&arm,mid)) high=mid; else low=mid;
                }
                amount=high;
                break;
            }
        }
        float lengthError=0;
        if (amount>0) {
            matrix3x4 rotation, result;
            CofRTArmMatrix(&arm,amount,rotation);
            for (int i=0;i<arm.count;++i) {
                int bone=arm.bone[i];
                Matrix3x4_ConcatTransforms(result,rotation,g_studio.bonestransform[bone]);
                Matrix3x4_Copy(g_studio.bonestransform[bone],result);
                Matrix3x4_ConcatTransforms(result,rotation,g_studio.lighttransform[bone]);
                Matrix3x4_Copy(g_studio.lighttransform[bone],result);
                vec3_t delta, old;
                Matrix3x4_OriginFromMatrix(g_studio.bonestransform[bone],delta);
                VectorSubtract(delta,arm.pivot,delta); VectorSubtract(arm.point[i],arm.pivot,old);
                lengthError=Q_max(lengthError,fabsf(VectorLength(delta)-VectorLength(old)));
            }
        }
        if (getenv("COF_RTX_LIGHTINGTEST")) {
            static unsigned reports[2];
            if (++reports[side]%60==0) {
                // Check the installed bone matrices, not just solver candidates.
                cof_rt_arm_t observed=arm;
                for (int i=0;i<arm.count;++i)
                    Matrix3x4_OriginFromMatrix(g_studio.bonestransform[arm.bone[i]],observed.point[i]);
                gEngfuncs.Con_Printf("COF_RTX_ARM side=%d blocked=%d corrected=%d clear=%d angle=%.3f length_error=%.5f\n",
                    side,blocked,amount>0,CofRTArmClear(&observed,0),amount*arm.angle,lengthError);
            }
        }
    }
}
