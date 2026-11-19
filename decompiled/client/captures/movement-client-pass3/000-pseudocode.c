
void FUN_10015650(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  *(undefined4 *)(DAT_101ad6e8 + 4) = param_1;
  FUN_10010dc0();
  *(undefined4 *)(DAT_101ad6e8 + 0x45490) = 0;
  *(float *)(DAT_101ad6e8 + 0x10) = (float)*(byte *)(DAT_101ad6e8 + 0x4545a) * 0.001;
  FUN_10015c90();
  FUN_1000f730(DAT_101ad6e8 + 0x44,DAT_101ad6e8 + 0x14,DAT_101ad6e8 + 0x20,DAT_101ad6e8 + 0x2c);
  if ((*(int *)(DAT_101ad6e8 + 0xd8) != 0) || (0 < *(int *)(DAT_101ad6e8 + 0x1fc))) {
    FUN_10015de0();
    FUN_100108c0();
    return;
  }
  if (((*(int *)(DAT_101ad6e8 + 0xdc) == 8) || (*(int *)(DAT_101ad6e8 + 0xdc) == 0)) ||
     (iVar1 = FUN_10011100(), iVar1 == 0)) {
    FUN_100108c0();
    *(undefined4 *)(DAT_101ad6e8 + 0xec) = *(undefined4 *)(DAT_101ad6e8 + 0xe4);
    if (*(int *)(DAT_101ad6e8 + 0xe8) < -0x10) {
      *(undefined4 *)(DAT_101ad6e8 + 0xec) = 0;
    }
    else {
      *(undefined4 *)(DAT_101ad6e8 + 0xec) = *(undefined4 *)(DAT_101ad6e8 + 0xe4);
    }
    if (*(int *)(DAT_101ad6e8 + 0xe0) == -1) {
      *(uint *)(DAT_101ad6e8 + 0x9c) = *(uint *)(DAT_101ad6e8 + 100) ^ 0x80000000;
    }
    DAT_101ad6ec = 0;
    if (((*(int *)(DAT_101ad6e8 + 0xd0) == 0) && ((*(uint *)(DAT_101ad6e8 + 0xb8) & 0x1000000) == 0)
        ) && (iVar3 = FUN_10013570(), iVar3 != 0)) {
      DAT_101ad6ec = 1;
    }
    if ((*(int *)(DAT_101ad6e8 + 0x90) == 0) && ((*(uint *)(DAT_101ad6e8 + 0xb8) & 0x4000) == 0)) {
      if (DAT_1055b5c8 != 0) {
        DAT_1055b5c8 = 0;
      }
    }
    else if (DAT_1055b5c8 != 1) {
      DAT_1055b5c8 = 1;
    }
    FUN_10016730();
    FUN_10012050();
    if ((*(int *)(DAT_101ad6e8 + 0xd0) == 0) && ((*(uint *)(DAT_101ad6e8 + 0xb8) & 0x1000000) == 0))
    {
      if (iVar3 == 0) {
        if ((*(int *)(DAT_101ad6e8 + 0xdc) != 3) && (*(int *)(DAT_101ad6e8 + 0xdc) != 8)) {
          *(undefined4 *)(DAT_101ad6e8 + 0xdc) = 3;
        }
      }
      else {
        FUN_10013680(iVar3);
      }
    }
    iVar1 = DAT_101ad6e8;
    switch(*(undefined4 *)(DAT_101ad6e8 + 0xdc)) {
    default:
      (**(code **)(DAT_101ad6e8 + 0x4f568))
                ("Bogus pmove player movetype %i on (%i) 0=cl 1=sv\n",
                 *(undefined4 *)(DAT_101ad6e8 + 0xdc),*(undefined4 *)(DAT_101ad6e8 + 4));
      return;
    case 3:
      iVar2 = FUN_10012df0();
      if (iVar2 == 0) {
        FUN_10010380();
        iVar1 = DAT_101ad6e8;
      }
      if (*(float *)(iVar1 + 0xcc) != 0.0) {
        FUN_100172e0();
        FUN_100124d0();
        FUN_100115e0();
        return;
      }
      if ((*(int *)(iVar1 + 0xe4) < 2) || (*(int *)(iVar1 + 0xe8) == -0x13)) {
        if ((*(byte *)(iVar1 + 0x45476) & 2) == 0) {
          *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) & 0xfffffffd;
          iVar1 = DAT_101ad6e8;
        }
        else if (iVar3 == 0) {
          FUN_10013160();
          iVar1 = DAT_101ad6e8;
        }
        if (*(int *)(iVar1 + 0xe0) != -1) {
          *(undefined4 *)(iVar1 + 100) = 0;
          FUN_10012ae0();
        }
        FUN_100114d0();
        if (*(int *)(DAT_101ad6e8 + 0xe0) == -1) {
          FUN_10010670();
        }
        else {
          FUN_10016ba0();
        }
        FUN_100108c0();
        *(float *)(DAT_101ad6e8 + 0x5c) =
             *(float *)(DAT_101ad6e8 + 0x5c) - *(float *)(DAT_101ad6e8 + 0x74);
        *(float *)(DAT_101ad6e8 + 0x60) =
             *(float *)(DAT_101ad6e8 + 0x60) - *(float *)(DAT_101ad6e8 + 0x78);
        *(float *)(DAT_101ad6e8 + 100) =
             *(float *)(DAT_101ad6e8 + 100) - *(float *)(DAT_101ad6e8 + 0x7c);
        FUN_100114d0();
        iVar3 = FUN_10012df0();
        if (iVar3 == 0) {
          FUN_10012460();
        }
        if (*(int *)(DAT_101ad6e8 + 0xe0) != -1) {
          *(undefined4 *)(DAT_101ad6e8 + 100) = 0;
        }
        FUN_10010b40();
      }
      else {
        if (*(int *)(iVar1 + 0xe4) == 2) {
          FUN_10011820();
          iVar1 = DAT_101ad6e8;
        }
        if ((*(float *)(iVar1 + 100) <= 0.0 && *(float *)(iVar1 + 100) != 0.0) &&
           (*(float *)(iVar1 + 0xcc) != 0.0)) {
          *(undefined4 *)(iVar1 + 0xcc) = 0;
          iVar1 = DAT_101ad6e8;
        }
        if ((*(byte *)(iVar1 + 0x45476) & 2) == 0) {
          *(uint *)(iVar1 + 200) = *(uint *)(iVar1 + 200) & 0xfffffffd;
        }
        else {
          FUN_10013160();
        }
        FUN_10017380();
        *(float *)(DAT_101ad6e8 + 0x5c) =
             *(float *)(DAT_101ad6e8 + 0x5c) - *(float *)(DAT_101ad6e8 + 0x74);
        *(float *)(DAT_101ad6e8 + 0x60) =
             *(float *)(DAT_101ad6e8 + 0x60) - *(float *)(DAT_101ad6e8 + 0x78);
        *(float *)(DAT_101ad6e8 + 100) =
             *(float *)(DAT_101ad6e8 + 100) - *(float *)(DAT_101ad6e8 + 0x7c);
        FUN_100108c0();
      }
      return;
    case 5:
      FUN_100115e0();
      if ((*(byte *)(DAT_101ad6e8 + 0x45476) & 2) == 0) {
        *(uint *)(DAT_101ad6e8 + 200) = *(uint *)(DAT_101ad6e8 + 200) & 0xfffffffd;
      }
      else if (iVar3 == 0) {
        FUN_10013160();
      }
      *(float *)(DAT_101ad6e8 + 0x5c) =
           *(float *)(DAT_101ad6e8 + 0x74) + *(float *)(DAT_101ad6e8 + 0x5c);
      *(float *)(DAT_101ad6e8 + 0x60) =
           *(float *)(DAT_101ad6e8 + 0x78) + *(float *)(DAT_101ad6e8 + 0x60);
      *(float *)(DAT_101ad6e8 + 100) =
           *(float *)(DAT_101ad6e8 + 0x7c) + *(float *)(DAT_101ad6e8 + 100);
      FUN_100124d0();
      *(float *)(DAT_101ad6e8 + 0x5c) =
           *(float *)(DAT_101ad6e8 + 0x5c) - *(float *)(DAT_101ad6e8 + 0x74);
      *(float *)(DAT_101ad6e8 + 0x60) =
           *(float *)(DAT_101ad6e8 + 0x60) - *(float *)(DAT_101ad6e8 + 0x78);
      *(float *)(DAT_101ad6e8 + 100) =
           *(float *)(DAT_101ad6e8 + 100) - *(float *)(DAT_101ad6e8 + 0x7c);
    case 0:
      break;
    case 6:
    case 10:
      FUN_10013ce0();
      return;
    case 8:
      FUN_10013bd0();
      return;
    }
  }
  return;
}

