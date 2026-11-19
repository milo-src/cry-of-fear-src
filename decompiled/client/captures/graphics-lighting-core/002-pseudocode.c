
void FUN_10069410(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  int local_10c;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_10190600 ^ (uint)&stack0xfffffffc;
  FUN_1006a420();
  iVar3 = (*DAT_101b26dc)(0);
  iVar3 = *(int *)(iVar3 + 0xb94);
  if (iVar3 != 0) {
    FUN_1007d4d0("\n>> Creating ext data for textures\n");
    local_10c = *(int *)(iVar3 + 0x174);
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0x170)) {
      do {
        pcVar2 = *(char **)(local_10c + iVar6 * 4);
        if ((((*(int *)(pcVar2 + 0x20) == 0) && (cVar1 = *pcVar2, cVar1 != '\0')) && (cVar1 != '+'))
           && (cVar1 != '-')) {
          local_110 = 0;
          local_114 = 0;
          local_118 = 0;
          FUN_1006a030(pcVar2,&local_110,&local_114,&local_118);
          iVar4 = FUN_10069ef0(*(undefined4 *)(local_10c + iVar6 * 4));
          if (iVar4 == 0) {
            iVar4 = FUN_100b44cb(0x2c);
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_10069250(*(undefined4 *)(local_10c + iVar6 * 4));
            }
            FUN_1007d4d0("Loaded texture data for %s\n",*(undefined4 *)(local_10c + iVar6 * 4));
            FUN_1000c900(local_108,"gfx/bumpmaps/%s.tga",*(undefined4 *)(local_10c + iVar6 * 4));
            uVar5 = FUN_10069630(local_108,2,0);
            *(undefined4 *)(iVar4 + 0x10) = uVar5;
            FUN_1000c900(local_108,"gfx/bumpmaps/%s_gloss.tga",
                         *(undefined4 *)(local_10c + iVar6 * 4));
            uVar5 = FUN_10069630(local_108,1,0);
            *(undefined4 *)(iVar4 + 0x18) = uVar5;
            if (*(int *)(iVar4 + 0x10) == 0) {
              *(undefined4 *)(iVar4 + 0x1c) = 0;
            }
            else {
              FUN_1000c900(local_108,"gfx/bumpmaps/%s_glosshi.tga",
                           *(undefined4 *)(local_10c + iVar6 * 4));
              uVar5 = FUN_10069630(local_108,1,0);
              *(undefined4 *)(iVar4 + 0x1c) = uVar5;
            }
          }
          *(undefined4 *)(iVar4 + 0x14) = local_110;
          *(undefined4 *)(iVar4 + 0x20) = local_114;
          *(undefined4 *)(iVar4 + 0x24) = local_118;
          *(int *)(*(int *)(local_10c + iVar6 * 4) + 0x2c) = iVar4;
          *(undefined4 *)(*(int *)(local_10c + iVar6 * 4) + 0x24) = 0xfffffd66;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(iVar3 + 0x170));
    }
    FUN_1007d4d0("Finished creating ext data for textures\n");
    FUN_1006a6f0();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

