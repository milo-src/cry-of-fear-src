
void FUN_10044670(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  undefined1 local_128 [256];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0xe8) == 0) {
    if (*(int *)(in_ECX + 0xec) == 0) {
      pcVar3 = (char *)FUN_1006cdd0(param_1);
      pcVar7 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (1 < (uint)((int)pcVar3 - (int)pcVar7)) {
        *(int *)(in_ECX + 0xf0) = param_1;
        (*DAT_101b2660)("inventory/inventory_toggle.wav",0x3f800000);
        uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        iVar4 = FUN_100d3cf0(uVar2,"weapon_");
        (**(code **)(**(int **)(in_ECX + 0x158 + *(int *)(in_ECX + 0xf0) * 4) + 4))
                  (&local_12c,&local_130);
        (**(code **)(**(int **)(in_ECX + 0x158 + *(int *)(in_ECX + 0xf0) * 4) + 0xc))
                  (&local_134,&local_138);
        local_12c = local_12c + local_134;
        (**(code **)(**(int **)(in_ECX + 0x100) + 0xc))(&local_134,&local_138);
        (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(1);
        (**(code **)**(undefined4 **)(in_ECX + 0xdc))(local_12c + -5,local_130 + -5);
        iVar5 = **(int **)(in_ECX + 0xdc);
        if (iVar4 != 0) {
          pcVar7 = "gfx/vgui/inventory_weapons.tga";
        }
        else {
          pcVar7 = "gfx/vgui/inventory_items.tga";
        }
        uVar2 = FUN_10008640(pcVar7);
        (**(code **)(iVar5 + 0x1fc))(uVar2);
        iVar5 = 1;
        iVar6 = 0x100;
        do {
          (**(code **)**(undefined4 **)(iVar6 + in_ECX))(local_12c,local_130);
          if (iVar5 < 4) {
            (**(code **)(**(int **)(iVar6 + in_ECX) + 0x24))(1);
LAB_100449ba:
            local_130 = local_130 + local_138;
          }
          else {
            (**(code **)(**(int **)(iVar6 + in_ECX) + 0x24))(iVar4 != 0);
            if (iVar5 < 5) goto LAB_100449ba;
            if (4 < iVar5) {
              local_12c = local_12c + 0x2a;
            }
          }
          iVar6 = iVar6 + 4;
          iVar5 = iVar5 + 1;
        } while (iVar6 < 0x119);
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (*(int *)(in_ECX + 0xec) != param_1) {
      uVar2 = FUN_1006cdd0(param_1);
      pcVar3 = (char *)FUN_1006ee90("combined_result",uVar2);
      pcVar7 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar3 - (int)pcVar7) < 2) {
        *(undefined4 *)(in_ECX + 0xec) = 0;
        DAT_101b2bdd = 0;
        (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(0);
        (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xec));
      uVar2 = FUN_1006ee90("combined_result",uVar2);
      FUN_1000c900(local_128,"inventorycombine %i %i %s\n",*(undefined4 *)(in_ECX + 0xec),param_1,
                   uVar2);
      (*DAT_101b2654)(local_128);
LAB_100446f0:
      *(undefined4 *)(in_ECX + 0xe8) = 0;
      DAT_101b2bdd = 0;
      (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(0);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else if (*(int *)(in_ECX + 0xe8) != param_1) {
    uVar2 = FUN_1006cdd0(param_1);
    pcVar3 = (char *)FUN_1006ee90("classname",uVar2);
    pcVar7 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar3 - (int)pcVar7)) {
      FUN_1000c900(local_28,"inventorydualwield %i %i\n",*(undefined4 *)(in_ECX + 0xe8),param_1);
      (*DAT_101b2654)(local_28);
      goto LAB_100446f0;
    }
    *(undefined4 *)(in_ECX + 0xe8) = 0;
    DAT_101b2bdd = 0;
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(0);
  }
  (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

