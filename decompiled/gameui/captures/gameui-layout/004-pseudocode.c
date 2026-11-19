
void __thiscall FUN_1003fa90(void *this,char param_1,char param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined1 local_1c;
  int local_8;
  
  iVar1 = (**(code **)(DAT_100f9e8c + 0xbc))(s__steam_100e5f28,0);
  for (local_8 = 0; iVar2 = FUN_1006009d(this), local_8 < iVar2; local_8 = local_8 + 1) {
    piVar3 = (int *)FUN_100600c8(this,local_8);
    piVar3 = (int *)FUN_100b0e93(piVar3,0,0x100de398,0x100e5dc0,0);
    if (piVar3 != (int *)0x0) {
      local_1c = 1;
      piVar4 = (int *)FUN_10099f9d((int)piVar3);
      if (piVar4 != (int *)0x0) {
        if (((param_1 != '\0') && (param_3 == '\0')) &&
           (iVar2 = (**(code **)(*piVar4 + 0x28))(s_OnlyInCareerGame_100e5f14,0), iVar2 != 0)) {
          local_1c = 0;
        }
        if (((param_1 != '\0') && (param_3 != '\0')) &&
           (iVar2 = (**(code **)(*piVar4 + 0x28))(s_NotInCareerGame_100e5f04,0), iVar2 != 0)) {
          local_1c = 0;
        }
        if ((param_1 == '\0') &&
           (iVar2 = (**(code **)(*piVar4 + 0x28))(s_OnlyInGame_100e5ef8,0), iVar2 != 0)) {
          local_1c = 0;
        }
        else if ((param_2 == '\0') ||
                (iVar2 = (**(code **)(*piVar4 + 0x28))(s_notmulti_100e5eec,0), iVar2 == 0)) {
          if (((param_1 == '\0') || (param_2 != '\0')) ||
             (iVar2 = (**(code **)(*piVar4 + 0x28))(s_notsingle_100e5ee0,0), iVar2 == 0)) {
            if ((iVar1 != 0) &&
               (iVar2 = (**(code **)(*piVar4 + 0x28))(s_notsteam_100e5ed4,0), iVar2 != 0)) {
              local_1c = 0;
            }
          }
          else {
            local_1c = 0;
          }
        }
        else {
          local_1c = 0;
        }
        (**(code **)(*piVar3 + 0x74))(local_1c);
      }
    }
  }
  (**(code **)(*(int *)this + 0xe8))(0,0);
  return;
}

