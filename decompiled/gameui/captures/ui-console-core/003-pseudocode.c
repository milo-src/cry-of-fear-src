
void __thiscall FUN_10049997(void *this,int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint *puVar6;
  int *local_130;
  undefined4 *local_124;
  uint local_114 [63];
  undefined1 local_15;
  int *local_14;
  int local_10;
  undefined4 local_c;
  size_t local_8;
  
  if (param_1 == *(int *)((int)this + 0x11c)) {
    (**(code **)(**(int **)((int)this + 0x11c) + 0x224))((int)this + 0x138,0x100);
    local_8 = _strlen((char *)((int)this + 0x138));
    if (((int)local_8 < 1) ||
       ((*(char *)((int)this + local_8 + 0x137) != '~' &&
        (*(char *)((int)this + local_8 + 0x137) != '`')))) {
      if ((*(char *)((int)this + 0x130) == '\0') &&
         ((0 < (int)local_8 && (*(char *)((int)this + local_8 + 0x137) == ' ')))) {
        *(undefined4 *)((int)this + 0x134) = 0;
        FUN_10049787(this,'\0');
      }
      *(undefined1 *)((int)this + 0x130) = 0;
      FUN_100494f8(this,(uint *)((int)this + 0x138));
      iVar2 = FUN_1004ab70((int)this + 0x238);
      if (iVar2 < 1) {
        (**(code **)(**(int **)((int)this + 0x124) + 0x74))(0);
      }
      else {
        (**(code **)(**(int **)((int)this + 0x124) + 0x74))(1);
        (**(code **)(**(int **)((int)this + 0x124) + 0x294))();
        local_c = 7;
        local_10 = 0;
        while ((iVar2 = FUN_1004ab70((int)this + 0x238), local_10 < iVar2 && (local_10 < 7))) {
          local_114[0]._0_1_ = 0;
          if (local_10 == 6) {
            FUN_100ae190(local_114,(uint *)&DAT_100e6bfc);
          }
          else {
            iVar2 = FUN_1004ab50((void *)((int)this + 0x238),local_10);
            puVar6 = (uint *)FUN_1004b990(iVar2);
            FUN_100ae190(local_114,puVar6);
          }
          local_15 = 0;
          pvVar1 = (void *)FUN_100743aa(0x18);
          if (pvVar1 == (void *)0x0) {
            local_130 = (int *)0x0;
          }
          else {
            local_130 = FUN_10072470(pvVar1,s_CompletionCommand_100e6c00);
          }
          local_14 = local_130;
          (**(code **)(*local_130 + 0x44))(s_command_100e6c14,local_114);
          (**(code **)(**(int **)((int)this + 0x124) + 0x220))(local_114,local_14,this,0);
          local_10 = local_10 + 1;
        }
        FUN_1004a174(this);
      }
      (**(code **)(*(int *)this + 0x30))(0);
      (**(code **)(**(int **)((int)this + 0x11c) + 0x30))(0);
    }
    else {
      (**(code **)(**(int **)((int)this + 0x11c) + 0x218))(&DAT_100fedec);
      pvVar1 = (void *)FUN_100743aa(0x18);
      if (pvVar1 == (void *)0x0) {
        local_124 = (undefined4 *)0x0;
      }
      else {
        local_124 = FUN_10072470(pvVar1,s_Close_100e6bf4);
      }
      (**(code **)(*(int *)this + 0x7c))(this,local_124,0);
      if (DAT_100f9e84 != (int *)0x0) {
        iVar2 = FUN_100343a4();
        if (iVar2 == 0) {
          (**(code **)(*DAT_100f9e84 + 0x1c))();
        }
        else {
          puVar3 = (undefined4 *)FUN_100343a4();
          uVar4 = (**(code **)*puVar3)();
          piVar5 = (int *)FUN_10058c8e();
          (**(code **)(*piVar5 + 0xcc))(uVar4);
        }
      }
    }
  }
  return;
}

