
/* private: void __thiscall CKeyitemModel::KeyitemUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CKeyitemModel::KeyitemUse
          (CKeyitemModel *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  undefined *puVar4;
  
                    /* 0x4ded0  155  ?KeyitemUse@CKeyitemModel@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z
                        */
  if ((param_1 != (CBaseEntity *)0x0) &&
     (*(float *)(this + 0x100) < *DAT_10223188 || *(float *)(this + 0x100) == *DAT_10223188)) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xd0))();
    if (iVar1 != 0) {
      iVar1 = FUN_100125e0(*(undefined4 *)(param_1 + 4));
      if (iVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(this + 4);
      if (*(int *)(iVar2 + 0x1cc) != 0) {
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(iVar2 + 0x1cc),this,this,3,0);
        iVar2 = *(int *)(this + 4);
      }
      if (((*(byte *)(iVar2 + 0x1a4) & 2) != 0) && (iVar2 = *(int *)(iVar2 + 0x248), iVar2 != 0)) {
        if (iVar2 == 1) {
          puVar4 = &DAT_101b1888;
LAB_1004df91:
          FUN_10119810(iVar1,puVar4,5,0);
          *(int *)(*(int *)(this + 4) + 0x248) = *(int *)(*(int *)(this + 4) + 0x248) + -1;
          return;
        }
        if (iVar2 == 2) {
          puVar4 = &DAT_101b18a4;
          goto LAB_1004df91;
        }
        if (iVar2 == 3) {
          puVar4 = &DAT_101b18c8;
          goto LAB_1004df91;
        }
      }
      iVar2 = FUN_100e2f80(this);
      if (iVar2 != 0) {
        if (((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) &&
           (fVar3 = (float10)(*DAT_1022302c)("difficulty"), (float)fVar3 == 4.0)) {
          *(undefined4 *)(iVar1 + 0x1ef4) = 5;
        }
        *(undefined4 *)(*(int *)(this + 4) + 0x1c0) = 0;
        FUN_10119900(this);
      }
    }
    *(float *)(this + 0x100) = *DAT_10223188 + 1.0;
  }
  return;
}

