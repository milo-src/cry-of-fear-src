
void FUN_100439d0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  size_t sVar6;
  undefined1 local_128 [256];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x1b0) < 1) goto switchD_10043a0e_default;
  uVar2 = (*DAT_101b2730)();
  switch(*(undefined4 *)(in_ECX + 0x1b0)) {
  case 1:
    pcVar5 = "inventoryequip %i\n";
    break;
  case 2:
    iVar4 = *(int *)(in_ECX + 0x1b8);
    if ((iVar4 == 0) || (*(int *)(in_ECX + 0x1bc) == 0)) goto switchD_10043a0e_default;
    if (iVar4 == *(int *)(in_ECX + 0x1bc)) {
      (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
    }
    else {
      uVar2 = FUN_1006cdd0(iVar4);
      pcVar3 = (char *)FUN_1006ee90("combined_result",uVar2);
      pcVar5 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar3 - (int)pcVar5) < 2) goto LAB_10043e5d;
      uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0x1b8));
      uVar2 = FUN_1006ee90("combined_result",uVar2);
      FUN_1000c900(local_128,"inventorycombine %i %i %s\n",*(undefined4 *)(in_ECX + 0x1b8),
                   *(undefined4 *)(in_ECX + 0x1bc),uVar2);
      (*DAT_101b2654)(local_128);
    }
    *(undefined4 *)(in_ECX + 0x1b8) = 0;
    *(undefined4 *)(in_ECX + 0x1bc) = 0;
    goto LAB_10043e5d;
  case 3:
    pcVar5 = "inventoryuse %i\n";
    break;
  case 4:
    pcVar5 = "inventorydrop %i\n";
    break;
  case 5:
    pcVar3 = (char *)FUN_1006cdd0(param_1);
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(param_1);
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x138);
        uVar2 = FUN_1006cdd0(param_1);
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar6 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(param_1);
        _strncpy(&DAT_1018d024,pcVar5,sVar6);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        pcVar5 = "quickselset1 %i\n";
LAB_10043e2f:
        FUN_1000c900(local_28,pcVar5,param_1);
        (*DAT_101b2654)(local_28);
        goto LAB_10043e5d;
      }
    }
    goto LAB_10043e47;
  case 6:
    pcVar3 = (char *)FUN_1006cdd0(param_1);
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(param_1);
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x13c);
        uVar2 = FUN_1006cdd0(param_1);
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar6 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(param_1);
        _strncpy(&DAT_1018d0a4,pcVar5,sVar6);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        pcVar5 = "quickselset2 %i\n";
        goto LAB_10043e2f;
      }
    }
    goto LAB_10043e47;
  case 7:
    iVar4 = FUN_100d3cf0(uVar2,&DAT_1014688c);
    if (((iVar4 == 0) && (iVar4 = *(int *)(in_ECX + 0x1b8), iVar4 != 0)) &&
       (*(int *)(in_ECX + 0x1bc) != 0)) {
      if (iVar4 == *(int *)(in_ECX + 0x1bc)) {
        (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
        *(undefined4 *)(in_ECX + 0x1bc) = 0;
        *(undefined4 *)(in_ECX + 0x1b8) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      uVar2 = FUN_1006cdd0(iVar4);
      pcVar3 = (char *)FUN_1006ee90("classname",uVar2);
      pcVar5 = pcVar3 + 1;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (1 < (uint)((int)pcVar3 - (int)pcVar5)) {
        FUN_1000c900(local_128,"inventorydualwield %i %i\n",*(undefined4 *)(in_ECX + 0x1b8),
                     *(undefined4 *)(in_ECX + 0x1bc));
        (*DAT_101b2654)(local_128);
        *(undefined4 *)(in_ECX + 0x1bc) = 0;
        *(undefined4 *)(in_ECX + 0x1b8) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    goto switchD_10043a0e_default;
  case 8:
    pcVar3 = (char *)FUN_1006cdd0(param_1);
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(param_1);
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x144);
        uVar2 = FUN_1006cdd0(param_1);
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar6 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(param_1);
        _strncpy(&DAT_1018d124,pcVar5,sVar6);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        pcVar5 = "quickselset3 %i\n";
        goto LAB_10043e2f;
      }
    }
LAB_10043e47:
    (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
    goto LAB_10043e5d;
  default:
    goto switchD_10043a0e_default;
  }
  FUN_1000c900(local_28,pcVar5,param_1);
  (*DAT_101b2654)(local_28);
LAB_10043e5d:
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
switchD_10043a0e_default:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

