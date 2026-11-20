
void FUN_10065050(int *param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined1 local_2c [12];
  undefined1 local_20 [12];
  float local_14;
  float local_10;
  float local_c;
  int local_8;
  
  if (*(int *)(&DAT_104d24b8 + param_2 * 4) != **(int **)(in_ECX + 0x4098)) {
    local_8 = in_ECX;
    FUN_10094880(*(int *)(in_ECX + 0x30) + 0xb48,0xbf800000,&local_14);
    iVar1 = *(int *)(in_ECX + 0x40a8);
    iVar2 = param_2 * 0x30;
    local_14 = *(float *)(iVar1 + 0xc + iVar2) + local_14;
    local_10 = *(float *)(iVar1 + 0x1c + iVar2) + local_10;
    local_c = *(float *)(iVar1 + 0x2c + iVar2) + local_c;
    FUN_100947c0(&local_14);
    FUN_10091130(&local_14,in_ECX + 0x4074,local_20);
    FUN_100947c0(local_20);
    FUN_10091130(&local_14,local_20,local_2c);
    FUN_100947c0(local_2c);
    FUN_100690f0(local_20,*(int *)(local_8 + 0x40a8) + iVar2,&DAT_104e0b48 + param_2 * 0xc);
    FUN_100690f0(local_2c,*(int *)(local_8 + 0x40a8) + iVar2,&DAT_104e0548 + param_2 * 0xc);
    *(undefined4 *)(&DAT_104d24b8 + param_2 * 4) = **(undefined4 **)(local_8 + 0x4098);
  }
  *param_1 = (int)((*(float *)(&DAT_104e0548 + param_2 * 0xc) * param_3 +
                    *(float *)(&DAT_104e054c + param_2 * 0xc) * param_4 +
                    *(float *)(&DAT_104e0550 + param_2 * 0xc) * param_5 + 1.0) * 32.0);
  param_1[1] = (int)((*(float *)(&DAT_104e0b48 + param_2 * 0xc) * param_3 +
                      *(float *)(&DAT_104e0b4c + param_2 * 0xc) * param_4 +
                      *(float *)(&DAT_104e0b50 + param_2 * 0xc) * param_5 + 1.0) * 32.0);
  return;
}

