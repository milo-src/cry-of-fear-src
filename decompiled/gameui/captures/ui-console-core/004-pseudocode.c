
void __fastcall FUN_1004a5d6(void *param_1)

{
  char cVar1;
  int *piVar2;
  uint *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined1 local_824 [4];
  size_t local_820;
  int local_81c;
  char local_818 [512];
  uint local_618 [256];
  int local_218;
  uint local_214;
  char local_210 [512];
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_10 = 1000;
  local_214 = local_214 & 0xffffff00;
  local_8 = 0;
  do {
    if (999 < local_8) {
LAB_1004a662:
      if ((local_214 & 0xff) == 0) {
        FUN_1004948a(param_1,s_Can_t_condump__Too_many_existing_100e6c84);
      }
      else {
        uVar8 = 0;
        puVar7 = &DAT_100e6ccc;
        pcVar5 = local_210;
        piVar2 = (int *)FUN_10058cb6();
        local_c = (**(code **)(*piVar2 + 0x28))(pcVar5,puVar7,uVar8);
        if (local_c == 0) {
          FUN_1004948a(param_1,s_Unable_to_condump_to_100e6ce8);
          FUN_1004948a(param_1,local_210);
          FUN_1004948a(param_1,&DAT_100e6d00);
        }
        else {
          local_218 = 0;
          while( true ) {
            FUN_1007777c(*(void **)((int)param_1 + 0x118),local_218,(int)local_618,0x400);
            local_218 = local_218 + 0x200;
            if ((local_618[0] & 0xffff) == 0) break;
            uVar8 = 0x200;
            pcVar5 = local_818;
            puVar3 = local_618;
            piVar2 = (int *)FUN_10058cc0();
            (**(code **)(*piVar2 + 0x14))(puVar3,pcVar5,uVar8);
            local_820 = _strlen(local_818);
            for (local_81c = 0; local_81c < (int)local_820; local_81c = local_81c + 1) {
              if (local_818[local_81c] == '\n') {
                local_824[0] = 0xd;
                uVar8 = 1;
                puVar4 = local_824;
                iVar6 = local_c;
                piVar2 = (int *)FUN_10058cb6();
                (**(code **)(*piVar2 + 0x58))(puVar4,uVar8,iVar6);
              }
              uVar8 = 1;
              pcVar5 = local_818 + local_81c;
              iVar6 = local_c;
              piVar2 = (int *)FUN_10058cb6();
              (**(code **)(*piVar2 + 0x58))(pcVar5,uVar8,iVar6);
            }
          }
          iVar6 = local_c;
          piVar2 = (int *)FUN_10058cb6();
          (**(code **)(*piVar2 + 0x2c))(iVar6);
          FUN_1004948a(param_1,s_console_dumped_to_100e6cd0);
          FUN_1004948a(param_1,local_210);
          FUN_1004948a(param_1,&DAT_100e6ce4);
        }
      }
      return;
    }
    FUN_100adee5(local_210,0x200,(byte *)s_condump_03d_txt_100e6c74);
    pcVar5 = local_210;
    piVar2 = (int *)FUN_10058cb6();
    cVar1 = (**(code **)(*piVar2 + 0x20))(pcVar5);
    if (cVar1 == '\0') {
      local_214 = CONCAT31(local_214._1_3_,1);
      goto LAB_1004a662;
    }
    local_8 = local_8 + 1;
  } while( true );
}

