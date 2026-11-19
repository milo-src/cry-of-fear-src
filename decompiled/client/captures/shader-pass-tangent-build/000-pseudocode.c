
void FUN_10061eb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_8;
  
  FUN_1007d4d0("GenerateVertexArray()\n");
  FUN_10061e10();
  do {
    iVar3 = (*DAT_101be6ac)();
  } while (iVar3 != 0);
  uVar7 = 0;
  uVar9 = 0;
  local_20 = 0;
  iVar3 = (*DAT_101b26dc)(0);
  iVar3 = *(int *)(iVar3 + 0xb94);
  iVar6 = *(int *)(iVar3 + 0xb0);
  iVar1 = *(int *)(iVar3 + 0xb4);
  if (0 < iVar6) {
    piVar4 = (int *)(iVar1 + 0x24);
    do {
      if (((*(byte *)(piVar4 + -7) & 0x14) == 0) && (0 < *(int *)(*piVar4 + 8))) {
        uVar9 = uVar9 + 1;
        uVar7 = uVar7 + *(int *)(*piVar4 + 8);
      }
      piVar4 = piVar4 + 0x17;
      iVar6 = iVar6 + -1;
      local_20 = uVar7;
    } while (iVar6 != 0);
  }
  FUN_1007d4d0("%d world polygons visible\n",uVar9);
  FUN_1007d4d0("%d vertexes in all world polygons\n",local_20);
  iVar6 = 0;
  local_14 = 0;
  local_18 = 0;
  DAT_104cdf8c = FUN_100b42b2(-(uint)((int)((ulonglong)local_20 * 0x1c >> 0x20) != 0) |
                              (uint)((ulonglong)local_20 * 0x1c));
  DAT_104cdf90 = FUN_100b42b2(-(uint)((int)((ulonglong)uVar9 * 0x28 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar9 * 0x28));
  local_1c = 0;
  if (0 < *(int *)(iVar3 + 0xb0)) {
    piVar4 = (int *)(iVar1 + 0x2c);
    local_8 = 0;
    do {
      if (((*(byte *)(piVar4 + -9) & 0x14) == 0) && (iVar1 = piVar4[-2], 0 < *(int *)(iVar1 + 8))) {
        *(uint *)(iVar1 + 0xc) = (uint)*(ushort *)(iVar1 + 0xc) | local_18 << 0x10;
        iVar2 = DAT_104cdf90;
        *(int *)(local_8 + DAT_104cdf90) = iVar6;
        puVar5 = (undefined4 *)(iVar2 + 0x10 + local_8);
        *puVar5 = *(undefined4 *)*piVar4;
        *(undefined4 *)(local_8 + 0x14 + iVar2) = *(undefined4 *)(*piVar4 + 4);
        *(undefined4 *)(local_8 + 0x18 + iVar2) = *(undefined4 *)(*piVar4 + 8);
        puVar8 = (undefined4 *)(local_8 + 0x1c + iVar2);
        *puVar8 = *(undefined4 *)(*piVar4 + 0x10);
        *(undefined4 *)(local_8 + 0x20 + iVar2) = *(undefined4 *)(*piVar4 + 0x14);
        *(undefined4 *)(local_8 + 0x24 + iVar2) = *(undefined4 *)(*piVar4 + 0x18);
        FUN_100947c0(puVar5);
        FUN_100947c0(puVar8);
        puVar5 = (undefined4 *)(iVar2 + 4 + local_8);
        *puVar5 = *(undefined4 *)piVar4[-10];
        *(undefined4 *)(local_8 + 8 + iVar2) = *(undefined4 *)(piVar4[-10] + 4);
        *(undefined4 *)(local_8 + 0xc + iVar2) = *(undefined4 *)(piVar4[-10] + 8);
        if ((*(byte *)(piVar4 + -9) & 2) != 0) {
          FUN_10094730(puVar5);
        }
        iVar6 = 0;
        if (0 < *(int *)(iVar1 + 8)) {
          puVar5 = (undefined4 *)(DAT_104cdf8c + 8 + local_14 * 0x1c);
          puVar8 = (undefined4 *)(iVar1 + 0x10);
          do {
            puVar5[-2] = *puVar8;
            iVar6 = iVar6 + 1;
            puVar5[-1] = puVar8[1];
            local_14 = local_14 + 1;
            *puVar5 = puVar8[2];
            puVar5[1] = puVar8[3];
            puVar5[2] = puVar8[4];
            puVar5[3] = puVar8[5];
            puVar5[4] = puVar8[6];
            puVar5 = puVar5 + 7;
            puVar8 = puVar8 + 7;
          } while (iVar6 < *(int *)(iVar1 + 8));
        }
        local_18 = local_18 + 1;
        local_8 = local_8 + 0x28;
        iVar6 = local_14;
      }
      local_1c = local_1c + 1;
      piVar4 = piVar4 + 0x17;
    } while (local_1c < *(int *)(iVar3 + 0xb0));
  }
  FUN_1007d4d0("Created Vertex Array for world polys\n");
  if (DAT_101be7d8 != 0) {
    (*DAT_101be7e0)(1,&DAT_104cdf88);
    if (DAT_104cdf88 != 0) {
      (*DAT_101be7dc)(0x8892,DAT_104cdf88);
      (*DAT_101be7e4)(0x8892,local_20 * 0x1c,DAT_104cdf8c,0x88e4);
      iVar3 = (*DAT_101be6ac)();
      if (iVar3 == 0x505) {
        (*DAT_101be7dc)(0x8892,0);
        (*DAT_101be7e8)(1,&DAT_104cdf88);
        DAT_104cdf88 = 0;
        FUN_1007d400("Error: glBufferDataARB failed to upload data to VBO\n");
        return;
      }
      (*DAT_101be7dc)();
      FUN_1007d4d0("Created VBO for world polys\n");
      return;
    }
    FUN_1007d400("Error: glGenBuffersARB failed to generate buffer index\n");
  }
  return;
}

