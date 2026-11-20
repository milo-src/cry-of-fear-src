
void FUN_100687d0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int in_ECX;
  char *pcVar5;
  bool bVar6;
  undefined4 uVar7;
  
  DAT_104ce4a8 = &DAT_104d8718;
  DAT_104ce4ac = &DAT_104d2718;
  (*DAT_101be704)(0x1d01);
  DAT_1018fe88 = 1.0;
  DAT_104ce4b4 = 0;
  if (param_1 == 5) {
    (*DAT_101be67c)(0);
    (*DAT_101be698)(0xbe2);
    uVar7 = 1;
LAB_1006884a:
    (*DAT_101be650)(0x302,uVar7);
    DAT_104ce4b4 = 1;
    DAT_1018fe88 = (float)*(int *)(*(int *)(in_ECX + 0x30) + 0x2fc) / 255.0;
  }
  else if ((param_1 == 4) || (param_1 == 2)) {
    (*DAT_101be67c)(0);
    (*DAT_101be698)(0xbe2);
    uVar7 = 0x303;
    goto LAB_1006884a;
  }
  if (DAT_101be77c == 0) {
    (*DAT_101be724)(0x2300,0x2200,0x8570);
    (*DAT_101be724)(0x2300,0x8571,0x2100);
    (*DAT_101be724)(0x2300,0x8580,0x1702);
    (*DAT_101be724)(0x2300,0x8581,0x8577);
    (*DAT_101be724)(0x2300,0x8573,2);
  }
  else {
    (*DAT_101be698)(0x8522);
    (*DAT_101be784)(0x854e,1);
    (*DAT_101be78c)(0x8550,0x1907,0x8523,0x84c0,0x8536,0x1907);
    (*DAT_101be78c)(0x8550,0x1907,0x8524,0x852c,0x8536,0x1907);
    (*DAT_101be790)(0x8550,0x1907,0x852e,0x8530,0x8530,0x853e,0,0,0,0);
    (*DAT_101be78c)(0x8550,0x1906,0x8523,0x84c0,0x8536,0x1906);
    (*DAT_101be78c)(0x8550,0x1906,0x8524,0x852c,0x8536,0x1906);
    (*DAT_101be790)(0x8550,0x1906,0x852e,0x8530,0x8530,0,0,0,0,0);
    (*DAT_101be794)(0x8523,0,0x8536,0x1907);
    (*DAT_101be794)(0x8524,0,0x8536,0x1907);
    (*DAT_101be794)(0x8525,0,0x8536,0x1907);
    (*DAT_101be794)(0x8526,0x852e,0x8536,0x1907);
    (*DAT_101be794)(0x8527,0,0x8536,0x1907);
    (*DAT_101be794)(0x8528,0,0x8536,0x1907);
    (*DAT_101be794)(0x8529,0x852e,0x8536,0x1906);
  }
  if (DAT_105458b0 == 0) {
    pbVar2 = *(byte **)(in_ECX + 0x34);
    pcVar5 = "models/nv_goggles.mdl";
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) goto LAB_10068c61;
      if (bVar1 == 0) goto LAB_10068c5d;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10068c61;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
  }
  else if (DAT_105458b0 == 10) {
    pbVar2 = *(byte **)(in_ECX + 0x34);
    pcVar5 = "models/weapons/v_gasmask.mdl";
    pbVar4 = pbVar2;
    do {
      bVar1 = *pbVar4;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) {
LAB_10068b10:
        uVar3 = -(uint)bVar6 | 1;
        goto LAB_10068b15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10068b10;
      pbVar4 = pbVar4 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_10068b15:
    if (uVar3 == 0) {
      DAT_1018fe88 = 0.7;
      return;
    }
    pcVar5 = "models/weapons/v_gasmask_simon.mdl";
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) goto LAB_10068c61;
      if (bVar1 == 0) goto LAB_10068c5d;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10068c61;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
  }
  else if (DAT_105458b0 == 1) {
    pbVar2 = *(byte **)(in_ECX + 0x34);
    pcVar5 = "models/items/tv_frame.mdl";
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) goto LAB_10068c61;
      if (bVar1 == 0) goto LAB_10068c5d;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10068c61;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
  }
  else if (DAT_105458b0 == 2) {
    pbVar2 = *(byte **)(in_ECX + 0x34);
    if (DAT_105431dc == 0) {
      pcVar5 = "models/weapons/v_death.mdl";
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) goto LAB_10068c61;
        if (bVar1 == 0) goto LAB_10068c5d;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_10068c61;
        pbVar2 = pbVar2 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
    }
    else {
      pcVar5 = "models/weapons/v_death_doctor.mdl";
      do {
        bVar1 = *pbVar2;
        bVar6 = bVar1 < (byte)*pcVar5;
        if (bVar1 != *pcVar5) goto LAB_10068c61;
        if (bVar1 == 0) goto LAB_10068c5d;
        bVar1 = pbVar2[1];
        bVar6 = bVar1 < (byte)pcVar5[1];
        if (bVar1 != pcVar5[1]) goto LAB_10068c61;
        pbVar2 = pbVar2 + 2;
        pcVar5 = pcVar5 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
    }
  }
  else if (DAT_105458b0 == 5) {
    pbVar2 = *(byte **)(in_ECX + 0x34);
    pcVar5 = "models/props/blandat/v_telescope.mdl";
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < (byte)*pcVar5;
      if (bVar1 != *pcVar5) goto LAB_10068c61;
      if (bVar1 == 0) goto LAB_10068c5d;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < (byte)pcVar5[1];
      if (bVar1 != pcVar5[1]) goto LAB_10068c61;
      pbVar2 = pbVar2 + 2;
      pcVar5 = pcVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
  }
  else {
    if (DAT_105458b0 != 6) {
      return;
    }
    if (DAT_1018a3f0 == (byte *)0x0) {
      return;
    }
    pbVar2 = *(byte **)(in_ECX + 0x34);
    pbVar4 = DAT_1018a3f0;
    do {
      bVar1 = *pbVar2;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) goto LAB_10068c61;
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10068c61;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
LAB_10068c5d:
    uVar3 = 0;
  }
LAB_10068c66:
  if (uVar3 == 0) {
    DAT_1018fe88 = 0.7;
    return;
  }
  return;
LAB_10068c61:
  uVar3 = -(uint)bVar6 | 1;
  goto LAB_10068c66;
}

