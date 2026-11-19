
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10060000(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  iVar7 = param_2[0xc1];
  if (iVar7 == 0x47) {
    puVar6 = (undefined8 *)FUN_1005c0f0(*param_2);
    *puVar6 = *(undefined8 *)(param_2 + 0xb0);
    *(undefined4 *)(puVar6 + 1) = param_2[0xb2];
    puVar6[5] = *(undefined8 *)(param_2 + 0xb3);
    *(undefined4 *)(puVar6 + 6) = param_2[0xb5];
    *(float *)((int)puVar6 + 0xc) = (float)(int)(param_2[0xbf] << 3);
    *(float *)(puVar6 + 2) = (float)*(byte *)(param_2 + 0xc0) * 0.0078125;
    *(float *)((int)puVar6 + 0x14) = (float)*(byte *)((int)param_2 + 0x301) * 0.0078125;
    *(float *)(puVar6 + 3) = (float)*(byte *)((int)param_2 + 0x302) * 0.0078125;
    if ((float)param_2[0xbc] != 0.0) {
      *(undefined4 *)((int)puVar6 + 0x34) = param_2[0xbc];
      *(undefined4 *)(puVar6 + 7) = param_2[0xbc];
      FUN_1000c900((int)puVar6 + 0x3c,"gfx/spotlight%d.tga",param_2[0xbe]);
    }
    fVar9 = (float10)(*DAT_101b26e0)();
    *(float *)((int)puVar6 + 0x1c) = (float)(fVar9 + (float10)0.01);
    return 0;
  }
  if (iVar7 == 0xb8) {
    puVar6 = (undefined8 *)FUN_1005c0f0(0xfffffed4);
    *puVar6 = _DAT_10550324;
    uVar2 = DAT_1055032c;
    puVar6[2] = 0x3ea8f5c33e99999a;
    *(undefined4 *)(puVar6 + 1) = uVar2;
    *(undefined4 *)((int)puVar6 + 0xc) = 0x43a00000;
    *(undefined4 *)(puVar6 + 3) = 0x3eae147b;
    fVar9 = (float10)(*DAT_101b26e0)();
    *(float *)((int)puVar6 + 0x1c) = (float)(fVar9 + (float10)0.01);
    iVar7 = param_2[0xc1];
  }
  if (iVar7 != 0x48) {
    if (iVar7 == 0x49) {
      puVar6 = (undefined8 *)FUN_1005c0f0(*param_2);
      *puVar6 = *(undefined8 *)(param_2 + 0x2d8);
      *(undefined4 *)(puVar6 + 1) = param_2[0x2da];
      puVar6[5] = *(undefined8 *)(param_2 + 0xb3);
      *(undefined4 *)(puVar6 + 6) = param_2[0xb5];
      *(undefined4 *)((int)puVar6 + 0xc) = 0x42c80000;
      *(undefined4 *)(puVar6 + 2) = 0x437e0000;
      *(undefined4 *)((int)puVar6 + 0x14) = 0x43720000;
      *(undefined4 *)(puVar6 + 3) = 0x43400000;
      fVar9 = (float10)(*DAT_101b26e0)();
      *(float *)((int)puVar6 + 0x1c) = (float)(fVar9 + (float10)0.01);
      iVar7 = param_2[0xc1];
    }
    if (iVar7 == 0xa5) {
      puVar6 = (undefined8 *)FUN_1005c0f0(*param_2);
      fVar9 = (float10)(*DAT_101b2714)(0xbf000000,0x3f000000);
      fVar10 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3d4ccccd);
      *puVar6 = *(undefined8 *)(param_2 + 0x2d2);
      *(undefined4 *)(puVar6 + 1) = param_2[0x2d4];
      *(float *)(puVar6 + 1) = *(float *)(puVar6 + 1) + 5.0;
      iVar7 = (*DAT_101b2718)(0xfffffff1,0xf);
      *(float *)((int)puVar6 + 0xc) = (float)(iVar7 + 0xdc);
      fVar11 = (float10)(*DAT_101b26e0)();
      puVar6[2] = CONCAT44((float)fVar10 + 0.2,(float)fVar9 + 1.15);
      *(float *)((int)puVar6 + 0x1c) = (float)(fVar11 + (float10)0.01);
      *(float *)(puVar6 + 3) = (float)fVar10 + 0.1;
      iVar7 = param_2[0xc1];
    }
    if (iVar7 == 0x44) {
      puVar6 = (undefined8 *)FUN_1005c0f0(*param_2);
      fVar9 = (float10)(*DAT_101b2714)(0xbf000000,0x3f000000);
      fVar10 = (float10)(*DAT_101b2714)(0xbdcccccd,0x3d4ccccd);
      *puVar6 = *(undefined8 *)(param_2 + 0x2e1);
      *(undefined4 *)(puVar6 + 1) = param_2[0x2e3];
      iVar7 = (*DAT_101b2718)(0xfffffff1,0xf);
      *(float *)((int)puVar6 + 0xc) = (float)(iVar7 + 0xdc);
      fVar11 = (float10)(*DAT_101b26e0)();
      puVar6[2] = CONCAT44((float)fVar10 + 0.2,(float)fVar9 + 1.15);
      *(float *)((int)puVar6 + 0x1c) = (float)(fVar11 + (float10)0.01);
      *(float *)(puVar6 + 3) = (float)fVar10 + 0.1;
      iVar7 = param_2[0xc1];
    }
    if (iVar7 == 0xf5) {
      bVar3 = *(byte *)(param_2 + 0xc0);
      if ((((bVar3 == 0) && (*(char *)((int)param_2 + 0x301) == '\0')) &&
          (*(char *)((int)param_2 + 0x302) == '\0')) &&
         ((param_2[0xbf] == 0xff || (param_2[0xbf] == 0)))) {
        puVar8 = (undefined4 *)FUN_1005c0f0(*param_2);
        fVar1 = (float)param_2[0x2d4];
        uVar2 = param_2[0x2d3];
        *puVar8 = param_2[0x2d2];
        puVar8[1] = uVar2;
        puVar8[2] = fVar1 + 6.0;
        iVar7 = (*DAT_101b2718)(0xfffffffb,5);
        puVar8[3] = (float)(iVar7 + 0xdc);
        fVar9 = (float10)(*DAT_101b26e0)();
        *(undefined8 *)(puVar8 + 4) = 0x3ecccccd3ecccccd;
        puVar8[7] = (float)(fVar9 + (float10)0.01);
        puVar8[6] = 0x3ecccccd;
      }
      else {
        bVar4 = *(byte *)((int)param_2 + 0x301);
        bVar5 = *(byte *)((int)param_2 + 0x302);
        puVar8 = (undefined4 *)FUN_1005c0f0(*param_2);
        fVar1 = (float)param_2[0x2d4];
        uVar2 = param_2[0x2d3];
        *puVar8 = param_2[0x2d2];
        puVar8[1] = uVar2;
        puVar8[2] = fVar1 + 6.0;
        iVar7 = (*DAT_101b2718)(0xfffffffb,5);
        puVar8[3] = (float)(iVar7 + param_2[0xbf]);
        fVar9 = (float10)(*DAT_101b26e0)();
        puVar8[7] = (float)(fVar9 + (float10)0.01);
        *(ulonglong *)(puVar8 + 4) = CONCAT44((float)(bVar4 / 0xff),(float)(bVar3 / 0xff));
        puVar8[6] = (float)(bVar5 / 0xff);
      }
    }
    iVar7 = param_2[0xc1];
    if ((((iVar7 == 0x46) || (iVar7 == 0xb8)) || (iVar7 == 0x89)) &&
       (*(int *)(param_2[0x2e5] + 0x44) == 1)) {
      FUN_10064170(param_2);
      return 0;
    }
    if ((((*(float *)(DAT_104cd508 + 0xc) != 0.0) && (*(float *)(DAT_104cdd88 + 0xc) != 0.0)) &&
        (*(int *)(param_2[0x2e5] + 0x44) == 0)) && (iVar7 = FUN_1005f110(param_2), iVar7 == 0)) {
      return 0;
    }
    return 1;
  }
  fVar9 = (float10)(*DAT_101b2714)(0x42700000,0x42a00000);
  puVar6 = (undefined8 *)FUN_1005c0f0(*param_2);
  *puVar6 = *(undefined8 *)(param_2 + 0xb0);
  *(undefined4 *)(puVar6 + 1) = param_2[0xb2];
  puVar6[5] = *(undefined8 *)(param_2 + 0xb3);
  *(undefined4 *)(puVar6 + 6) = param_2[0xb5];
  *(float *)((int)puVar6 + 0xc) = (float)(int)fVar9;
  fVar9 = (float10)(*DAT_101b2714)(0xc1200000,0x40a00000);
  *(float *)(puVar6 + 2) = (float)(fVar9 + (float10)250.0);
  fVar9 = (float10)(*DAT_101b2714)(0xc1200000,0x41200000);
  *(float *)((int)puVar6 + 0x14) = (float)(fVar9 + (float10)190.0);
  fVar9 = (float10)(*DAT_101b2714)(0xc1200000,0x41200000);
  *(float *)(puVar6 + 3) = (float)(fVar9 + (float10)70.0);
  fVar9 = (float10)(*DAT_101b26e0)();
  *(float *)((int)puVar6 + 0x1c) = (float)(fVar9 + (float10)0.01);
  return 0;
}

