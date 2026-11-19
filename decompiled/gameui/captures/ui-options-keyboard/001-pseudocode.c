
void __fastcall FUN_100513cd(int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  size_t sVar4;
  uint *puVar5;
  uint uVar6;
  void *this;
  int iVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int *local_354;
  int local_338;
  uint local_330 [64];
  char local_230 [256];
  int local_130;
  int *local_12c;
  int local_128;
  int local_124 [6];
  undefined1 local_10c [260];
  int local_8;
  
  FUN_100ad757(local_10c,(byte *)s__s_kb_act_lst_100e83b8);
  uVar10 = 0;
  puVar9 = &DAT_100e83c8;
  puVar8 = local_10c;
  piVar1 = (int *)FUN_10058cb6();
  iVar2 = (**(code **)(*piVar1 + 0x28))(puVar8,puVar9,uVar10);
  if (iVar2 != 0) {
    local_130 = iVar2;
    piVar1 = (int *)FUN_10058cb6();
    local_8 = (**(code **)(*piVar1 + 0x3c))(iVar2);
    FUN_10040ee0(local_124,0,local_8 + 1,'\x01');
    iVar2 = local_8;
    iVar7 = local_130;
    uVar10 = FUN_10035fd0(local_124);
    piVar1 = (int *)FUN_10058cb6();
    (**(code **)(*piVar1 + 0x54))(uVar10,iVar2,iVar7);
    iVar2 = local_130;
    piVar1 = (int *)FUN_10058cb6();
    (**(code **)(*piVar1 + 0x2c))(iVar2);
    local_128 = FUN_10035fd0(local_124);
    *(undefined1 *)(local_128 + local_8) = 0;
    local_338 = 0;
    while( true ) {
      local_128 = FUN_100517af(local_128);
      pcVar3 = FUN_100517d2();
      sVar4 = _strlen(pcVar3);
      if (sVar4 == 0) break;
      puVar5 = (uint *)FUN_100517d2();
      FUN_100ae190(local_330,puVar5);
      local_128 = FUN_100517af(local_128);
      pcVar3 = FUN_100517d2();
      sVar4 = _strlen(pcVar3);
      if (sVar4 == 0) break;
      puVar5 = (uint *)FUN_100517d2();
      FUN_100ae190((uint *)local_230,puVar5);
      if (local_230[0] != '=') {
        uVar6 = FUN_100b1620(local_330,(byte *)local_330,(byte *)s_blank_100e83cc);
        if (uVar6 == 0) {
          local_338 = local_338 + 1;
          (**(code **)(**(int **)(param_1 + 0xb8) + 0x21c))(local_338,local_230,0);
          (**(code **)(**(int **)(param_1 + 0xb8) + 0x234))
                    (local_338,s_Action_100e83d4,local_230,4,0xe2,0);
          (**(code **)(**(int **)(param_1 + 0xb8) + 0x234))
                    (local_338,&DAT_100e83f0,s__GameUI_KeyButton_100e83dc,4,0x80,0);
          (**(code **)(**(int **)(param_1 + 0xb8) + 0x234))
                    (local_338,s_AltKey_100e8408,s__GameUI_Alternate_100e83f4,4,0x80,0);
        }
        else {
          this = (void *)FUN_100743aa(0x18);
          if (this == (void *)0x0) {
            local_354 = (int *)0x0;
          }
          else {
            local_354 = FUN_10072470(this,&DAT_100e8410);
          }
          local_12c = local_354;
          (**(code **)(*local_354 + 0x44))(s_Action_100e8418,local_230);
          (**(code **)(*local_12c + 0x44))(s_Binding_100e8420,local_330);
          (**(code **)(*local_12c + 0x44))(&DAT_100e8428,&DAT_10100448);
          (**(code **)(*local_12c + 0x44))(s_AltKey_100e842c,&DAT_1010044c);
          (**(code **)(**(int **)(param_1 + 0xb8) + 0x23c))(local_338,local_12c);
          (**(code **)(*local_12c + 0x60))();
        }
      }
    }
    FUN_10035f90(local_124);
  }
  return;
}

