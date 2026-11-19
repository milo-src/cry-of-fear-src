
void __fastcall FUN_1004ca0a(int *param_1)

{
  int local_220;
  int local_214;
  int local_210;
  uint local_20c [64];
  void *local_10c;
  int *local_108;
  uint local_104 [64];
  
  if (*param_1 != 0) {
    local_214 = param_1[1];
    while (local_214 != 0) {
      local_10c = *(void **)(local_214 + 0x7c);
      if (*(int *)(local_214 + 0x74) == 0) {
        FUN_1003966a(local_10c,(char *)((int)local_10c + 0x1c0));
        local_214 = *(int *)(local_214 + 0x80);
      }
      else {
        switch(*(undefined4 *)((int)local_10c + 0x70)) {
        case 1:
          (**(code **)(**(int **)(local_214 + 0x74) + 0x2b8))();
          FUN_100ad757((undefined1 *)local_104,&DAT_100e7264);
          break;
        case 2:
          local_108 = *(int **)(local_214 + 0x74);
          (**(code **)(*local_108 + 0x224))(local_20c,0x100);
          FUN_100ad757((undefined1 *)local_104,&DAT_100e7268);
          break;
        case 3:
          local_220 = (**(code **)(**(int **)(local_214 + 0x74) + 0x344))();
          local_210 = *(int *)((int)local_10c + 0x1b4);
          __ftol();
          while ((local_210 != 0 && (local_220 != 0))) {
            local_210 = *(int *)(local_210 + 0x180);
            local_220 = local_220 + -1;
          }
          if (local_210 == 0) {
            FUN_100ad757((undefined1 *)local_104,&DAT_100e7274);
          }
          else {
            FUN_100ad757((undefined1 *)local_104,&DAT_100e7270);
          }
          break;
        case 4:
          local_108 = *(int **)(local_214 + 0x74);
          (**(code **)(*local_108 + 0x224))(local_20c,0x100);
          FUN_100ad757((undefined1 *)local_104,&DAT_100e726c);
        }
        FUN_10039751(local_104);
        FUN_100ae190(local_20c,local_104);
        FUN_1003966a(local_10c,(char *)local_20c);
        local_214 = *(int *)(local_214 + 0x80);
      }
    }
  }
  return;
}

