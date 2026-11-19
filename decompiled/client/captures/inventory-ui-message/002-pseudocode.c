
void FUN_10043130(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  undefined4 *puVar6;
  size_t sVar7;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [256];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  uVar2 = (*DAT_101b2730)();
  switch(param_1) {
  case 0:
  case 0xc:
  case 0xd:
  case 0xe:
    break;
  case 1:
    FUN_10044670(1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 2:
    FUN_10044670(2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 3:
    FUN_10044670(3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 4:
    FUN_10044670(4);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 5:
    FUN_10044670(5);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 6:
    FUN_10044670(6);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 7:
    FUN_100449f0(1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 8:
    FUN_100449f0(2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 9:
    FUN_100449f0(3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 10:
    FUN_100449f0(4);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xb:
    FUN_100a9120();
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xf:
    iVar4 = FUN_100d3cf0(uVar2,&DAT_1014688c);
    if (iVar4 == 0) {
      FUN_100449f0(7);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  case 0x10:
    iVar4 = FUN_100d3cf0(uVar2,&DAT_1014688c);
    if (((iVar4 == 0) && (DAT_101b2600 != 0)) && (*(int *)(DAT_101b2600 + 0x1480) != 0)) {
      FUN_100a9120();
      (**(code **)(**(int **)(DAT_101b2600 + 0x1480) + 0x24))(1);
      FUN_100aaad0();
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    break;
  default:
    (*DAT_101b26ac)("Unknown Inventory ActionSignal %i.\n",param_1);
    break;
  case 0x32:
    FUN_1000c900(local_28,"inventoryequip %i\n",*(undefined4 *)(in_ECX + 0xf0));
    (*DAT_101b2654)(local_28);
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
    puVar6 = (undefined4 *)(in_ECX + 0x100);
    iVar4 = 7;
    do {
      (**(code **)(*(int *)*puVar6 + 0x24))(0);
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x33:
    *(int *)(in_ECX + 0xec) = *(int *)(in_ECX + 0xf0);
    (**(code **)(**(int **)(in_ECX + 0x158 + *(int *)(in_ECX + 0xf0) * 4) + 4))
              (&local_12c,&local_130);
    *(undefined4 *)(in_ECX + 0xf4) = 0xff;
    DAT_101b2bdd = 1;
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
    (**(code **)**(undefined4 **)(in_ECX + 0xf8))(local_12c,local_130);
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(1);
    puVar6 = (undefined4 *)(in_ECX + 0x100);
    iVar4 = 7;
    do {
      (**(code **)(*(int *)*puVar6 + 0x24))(0);
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x34:
    FUN_1000c900(local_28,"inventorydrop %i\n",*(undefined4 *)(in_ECX + 0xf0));
    (*DAT_101b2654)(local_28);
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
    puVar6 = (undefined4 *)(in_ECX + 0x100);
    iVar4 = 7;
    do {
      (**(code **)(*(int *)*puVar6 + 0x24))(0);
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x35:
    *(int *)(in_ECX + 0xe8) = *(int *)(in_ECX + 0xf0);
    (**(code **)(**(int **)(in_ECX + 0x158 + *(int *)(in_ECX + 0xf0) * 4) + 4))
              (&local_130,&local_12c);
    *(undefined4 *)(in_ECX + 0xf4) = 0xff;
    DAT_101b2bdd = 1;
    (**(code **)**(undefined4 **)(in_ECX + 0xf8))(local_130,local_12c);
    (**(code **)(**(int **)(in_ECX + 0xf8) + 0x24))(1);
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
    puVar6 = (undefined4 *)(in_ECX + 0x100);
    iVar4 = 7;
    do {
      (**(code **)(*(int *)*puVar6 + 0x24))(0);
      puVar6 = puVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x36:
    pcVar3 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x138);
        uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar7 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        _strncpy(&DAT_1018d024,pcVar5,sVar7);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        FUN_1000c900(local_128,"quickselset1 %i\n",*(undefined4 *)(in_ECX + 0xf0));
        (*DAT_101b2654)(local_128);
        (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
        puVar6 = (undefined4 *)(in_ECX + 0x100);
        iVar4 = 7;
        do {
          (**(code **)(*(int *)*puVar6 + 0x24))(0);
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(in_ECX + 0x1b0) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    goto LAB_1004389a;
  case 0x37:
    pcVar3 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x13c);
        uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar7 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        _strncpy(&DAT_1018d0a4,pcVar5,sVar7);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        FUN_1000c900(local_128,"quickselset2 %i\n",*(undefined4 *)(in_ECX + 0xf0));
        (*DAT_101b2654)(local_128);
        (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
        puVar6 = (undefined4 *)(in_ECX + 0x100);
        iVar4 = 7;
        do {
          (**(code **)(*(int *)*puVar6 + 0x24))(0);
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(in_ECX + 0x1b0) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    goto LAB_1004389a;
  case 0x38:
    pcVar3 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
    pcVar5 = pcVar3 + 1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != pcVar5) {
      uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
      iVar4 = FUN_100d3cf0(uVar2,"weapon_");
      if (iVar4 != 0) {
        iVar4 = **(int **)(in_ECX + 0x144);
        uVar2 = FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        uVar2 = FUN_1006ee90("inventory_picture",uVar2);
        uVar2 = FUN_10008640(uVar2);
        (**(code **)(iVar4 + 0x1fc))(uVar2);
        sVar7 = 0x80;
        pcVar5 = (char *)FUN_1006cdd0(*(undefined4 *)(in_ECX + 0xf0));
        _strncpy(&DAT_1018d124,pcVar5,sVar7);
        (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
        FUN_1000c900(local_128,"quickselset3 %i\n",*(undefined4 *)(in_ECX + 0xf0));
        (*DAT_101b2654)(local_128);
        (**(code **)(**(int **)(in_ECX + 0xdc) + 0x24))(0);
        puVar6 = (undefined4 *)(in_ECX + 0x100);
        iVar4 = 7;
        do {
          (**(code **)(*(int *)*puVar6 + 0x24))(0);
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *(undefined4 *)(in_ECX + 0x1b0) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
LAB_1004389a:
    (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
    *(undefined4 *)(in_ECX + 0x1b0) = 0;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

