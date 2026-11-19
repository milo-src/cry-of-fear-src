/* Native client 100ae540/100aea10/100aee70, parameter transport owned by CoF.
 * Included in engine/client/cl_tent.c. No original DLL is executed. */
static float CofLightValue( int kind, const char *field )
{
 char name[64]; Q_snprintf(name,sizeof(name),"cof_light%d_%s",kind,field);
 return Cvar_VariableValue(name);
}
static void CL_UpdateFlashlight( cl_entity_t *ent )
{
 const qboolean local = ent->index == cl.playernum + 1;
 int mask = local ? (int)Cvar_VariableValue("cof_light_mask") : 2;
 vec3_t eye, angles, forward;
 static float nearwall[3];
 static double previousTime;
 float dt = (float)(cl.time-previousTime);
 if(dt<0 || dt>.5f) { dt=0; memset(nearwall,0,sizeof(nearwall)); }
 previousTime=cl.time;
 if(mask<0 || mask==128) mask=2; // legacy impulse fixture/default torch
 if(local) { VectorCopy(cl.viewangles,angles); VectorAdd(ent->origin,cl.viewheight,eye); }
 else {
  VectorCopy(ent->origin,eye);eye[2]+=ent->curstate.usehull?12:28;
  VectorSet(angles,ent->curstate.angles[PITCH]*9,ent->angles[YAW],0);
 }
 for(int kind=1;kind<=3;++kind)
 {
  const int key=0x434f0000+ent->index*4+kind;
  dlight_t *dl;
  if(!(mask & (1<<(kind-1)))) continue;
  vec3_t origin, lightAngles;
  VectorCopy(eye,origin);VectorCopy(angles,lightAngles);
  if(local && CofLightValue(kind,"valid")!=0)
  {
   const char* axes[]={"x","y","z"}; vec3_t start; char field[8];
   for(int axis=0;axis<3;++axis) {
    Q_snprintf(field,sizeof(field),"o%s",axes[axis]);origin[axis]=CofLightValue(kind,field);
    Q_snprintf(field,sizeof(field),"a%s",axes[axis]);lightAngles[axis]=CofLightValue(kind,field);
    Q_snprintf(field,sizeof(field),"s%s",axes[axis]);start[axis]=CofLightValue(kind,field);
   }
   if(kind!=1) { pmtrace_t placement=CL_TraceLine(start,origin,PM_STUDIO_BOX);VectorCopy(placement.endpos,origin); }
  }
  dl=CL_AllocDlight(key);
  dl->cof_kind=kind;VectorCopy(origin,dl->origin);
  lightAngles[ROLL]=0; // Native projection lookAt uses world up, not view roll.
  AngleVectors(lightAngles,dl->cof_forward,dl->cof_right,dl->cof_up);
  dl->radius=700;dl->die=(float)cl.time+.01f;
  dl->cof_rgb[0]=dl->cof_rgb[1]=kind==1?.46f:kind==2?1.4f:.5f;
  dl->cof_rgb[2]=kind==1?.51f:dl->cof_rgb[0];
  dl->color.r=(byte)bound(0,dl->cof_rgb[0]*255,255);
  dl->color.g=(byte)bound(0,dl->cof_rgb[1]*255,255);
  dl->color.b=(byte)bound(0,dl->cof_rgb[2]*255,255);
  VectorCopy(dl->cof_forward,forward);
  vec3_t end;VectorMA(origin,150,forward,end);
  pmtrace_t trace=CL_TraceLine(origin,end,PM_STUDIO_BOX);
  const float target=(1-trace.fraction)*30;
  if(local) nearwall[kind-1]+=(target-nearwall[kind-1])*bound(0,10*dt,1);
  dl->cof_fov[0]=dl->cof_fov[1]=kind==3?70:50+(local?nearwall[kind-1]:target);
  if(getenv("COF_PROJECTEDTEST")) {
   static int reported;
   if(!(reported&(1<<kind))) {
    Con_Printf("COF_ATTACHED_LIGHT kind=%d radius=%g fov=%g rgb=%g,%g,%g\n",kind,dl->radius,dl->cof_fov[0],dl->cof_rgb[0],dl->cof_rgb[1],dl->cof_rgb[2]);
    reported|=1<<kind;
   }
  }
 }
}
