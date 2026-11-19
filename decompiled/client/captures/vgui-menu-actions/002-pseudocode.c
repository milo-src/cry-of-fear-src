
void FUN_1001e420(undefined4 param_1)

{
  int in_ECX;
  char *pcVar1;
  
  switch(param_1) {
  case 1:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0xec) == 0) {
LAB_1001e471:
        (*DAT_101b2660)("inventory/inventory_no.wav",0x3f800000);
        return;
      }
      pcVar1 = "dropammo 1";
LAB_1001e452:
      (*DAT_101b2654)(pcVar1);
      (*DAT_101b2660)("inventory/inventory_click.wav",0x3f800000);
      return;
    }
    break;
  case 2:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0xf0) == 0) goto LAB_1001e471;
      pcVar1 = "dropammo 2";
      goto LAB_1001e452;
    }
    break;
  case 3:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0xf4) == 0) goto LAB_1001e471;
      pcVar1 = "dropammo 3";
      goto LAB_1001e452;
    }
    break;
  case 4:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0xf8) == 0) goto LAB_1001e471;
      pcVar1 = "dropammo 4";
      goto LAB_1001e452;
    }
    break;
  case 5:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0xfc) == 0) goto LAB_1001e471;
      pcVar1 = "dropammo 5";
      goto LAB_1001e452;
    }
    break;
  case 6:
    if (*(int *)(in_ECX + 0xc4) != 0) {
      if (*(int *)(in_ECX + 0x100) == 0) goto LAB_1001e471;
      pcVar1 = "dropammo 6";
      goto LAB_1001e452;
    }
    break;
  case 7:
    *(undefined4 *)(in_ECX + 0xc4) = 1;
    (*DAT_101b2660)("inventory/inventory_toggle.wav",0x3f800000);
  }
  return;
}

