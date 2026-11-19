
void FUN_1003f4b0(void)

{
  byte bVar1;
  char cVar2;
  SHORT SVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  Panel *in_ECX;
  char *pcVar8;
  bool bVar9;
  float10 fVar10;
  undefined1 local_488 [256];
  undefined1 local_388 [256];
  byte local_288 [256];
  byte local_188 [256];
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  cVar2 = (**(code **)(*(int *)in_ECX + 0x28))();
  if ((((cVar2 != '\0') &&
       (cVar2 = (**(code **)(**(int **)(in_ECX + 0xd4) + 0x28))(), cVar2 != '\0')) &&
      (cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0x28))(), cVar2 != '\0')) &&
     (*(int *)(in_ECX + 0xc0) == 0)) {
    (**(code **)(**(int **)(in_ECX + 0xd4) + 0x200))(0,local_188,0x100);
    (**(code **)(**(int **)(in_ECX + 0xd8) + 0x200))(0,local_288,0x100);
    SVar3 = GetAsyncKeyState(0xd);
    if ((SVar3 < 0) &&
       (fVar10 = (float10)(*DAT_101b26e0)(),
       *(float *)(in_ECX + 0xbc) <= (float)fVar10 && (float)fVar10 != *(float *)(in_ECX + 0xbc))) {
      fVar10 = (float10)(*DAT_101b26e0)();
      *(float *)(in_ECX + 0xbc) = (float)((float10)1 + fVar10);
      (**(code **)(**(int **)(in_ECX + 0xd4) + 0x200))(0,local_488,0x100);
      (**(code **)(**(int **)(in_ECX + 0xd8) + 0x200))(0,local_388,0x100);
      FUN_1000c900(local_88,"computercheck %s %s",local_488,local_388);
      (*DAT_101b2654)(local_88);
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xd4) + 0xa8))();
    if (cVar2 != '\0') {
      pcVar8 = "Enter a username...";
      pbVar4 = local_188;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1003f632:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_1003f637;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1003f632;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_1003f637:
      if (uVar5 == 0) {
        (**(code **)(**(int **)(in_ECX + 0xd4) + 0x1fc))(&PTR_1013b108,0);
      }
      SVar3 = GetAsyncKeyState(9);
      if ((SVar3 < 0) &&
         (fVar10 = (float10)(*DAT_101b26e0)(),
         *(float *)(in_ECX + 0xbc) <= (float)fVar10 && (float)fVar10 != *(float *)(in_ECX + 0xbc)))
      {
        fVar10 = (float10)(*DAT_101b26e0)();
        *(float *)(in_ECX + 0xbc) = (float)((float10)1 + fVar10);
        (**(code **)(**(int **)(in_ECX + 0xd8) + 0xa4))();
      }
    }
    cVar2 = (**(code **)(**(int **)(in_ECX + 0xd8) + 0xa8))();
    if (cVar2 != '\0') {
      pcVar8 = "Enter a password...";
      pbVar4 = local_288;
      do {
        bVar1 = *pbVar4;
        bVar9 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_1003f6e0:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_1003f6e5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar9 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_1003f6e0;
        pbVar4 = pbVar4 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_1003f6e5:
      if (uVar5 == 0) {
        (**(code **)(**(int **)(in_ECX + 0xd8) + 0x1fc))(&PTR_1013b108,0);
      }
      SVar3 = GetAsyncKeyState(9);
      if ((SVar3 < 0) &&
         (fVar10 = (float10)(*DAT_101b26e0)(),
         *(float *)(in_ECX + 0xbc) <= (float)fVar10 && (float)fVar10 != *(float *)(in_ECX + 0xbc)))
      {
        fVar10 = (float10)(*DAT_101b26e0)();
        *(float *)(in_ECX + 0xbc) = (float)((float10)1 + fVar10);
        (**(code **)(**(int **)(in_ECX + 0xd4) + 0xa4))();
      }
    }
    iVar6 = (*DAT_101b26d4)();
    iVar7 = (*DAT_101b2718)(0xfffffffe,2);
    pbVar4 = local_188;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (*(int *)(in_ECX + 0xc4) != (int)pbVar4 - (int)(local_188 + 1)) {
      if (iVar6 != 0) {
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar6 + 0x2c0,4,"buttons/keyboard_type.wav",0x3f333333,0x3f4ccccd,0,
                   100 - iVar7);
      }
      pbVar4 = local_188;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      *(int *)(in_ECX + 0xc4) = (int)pbVar4 - (int)(local_188 + 1);
    }
    pbVar4 = local_288;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    if (*(int *)(in_ECX + 200) != (int)pbVar4 - (int)(local_288 + 1)) {
      if (iVar6 != 0) {
        (**(code **)(DAT_101b2758 + 4))
                  (0xffffffff,iVar6 + 0x2c0,4,"buttons/keyboard_type.wav",0x3f333333,0x3f4ccccd,0,
                   100 - iVar7);
      }
      pbVar4 = local_288;
      do {
        bVar1 = *pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (bVar1 != 0);
      *(int *)(in_ECX + 200) = (int)pbVar4 - (int)(local_288 + 1);
    }
  }
  vgui::Panel::solve(in_ECX);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

