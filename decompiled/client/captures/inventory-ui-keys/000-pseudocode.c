
undefined4 FUN_10044040(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  char cVar2;
  int *in_ECX;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  bool bVar6;
  
  if (param_3 != (byte *)0x0) {
    pcVar5 = "toggleconsole";
    pbVar4 = param_3;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10044080:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_10044085;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10044080;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10044085:
    if (uVar3 == 0) {
      return 1;
    }
    pcVar5 = "+inventory";
    do {
      bVar1 = *param_3;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_100440b7:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_100440bc;
      }
      if (bVar1 == 0) break;
      bVar1 = param_3[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_100440b7;
      param_3 = param_3 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100440bc:
    if (uVar3 == 0) {
      cVar2 = (**(code **)(*in_ECX + 0x28))();
      if (cVar2 != '\0') {
        FUN_100a9120();
        (*DAT_101b2660)("inventory/inventory_close.wav",0x3f800000);
      }
    }
  }
  return 0;
}

