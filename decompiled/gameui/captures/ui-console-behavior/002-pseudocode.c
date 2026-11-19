
void __thiscall FUN_100494f8(void *this,uint *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  uint *puVar5;
  char *pcVar6;
  void *pvVar7;
  uint *puVar8;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  int local_14;
  int local_10;
  undefined4 *local_8;
  
  FUN_1004abf0((void *)((int)this + 0x238));
  pvVar1 = (void *)_strlen((char *)param_1);
  if ((int)pvVar1 < 1) {
    for (local_14 = 0; iVar2 = FUN_1004acc0((int)this + 0x24c), local_14 < iVar2;
        local_14 = local_14 + 1) {
      piVar3 = (int *)FUN_1004aca0((void *)((int)this + 0x24c),local_14);
      iVar2 = FUN_1004abd0((void *)((int)this + 0x238));
      puVar4 = (undefined1 *)FUN_1004ab50((void *)((int)this + 0x238),iVar2);
      *puVar4 = 0;
      pvVar1 = operator_new(0xc);
      if (pvVar1 == (void *)0x0) {
        local_40 = (undefined4 *)0x0;
      }
      else {
        local_40 = FUN_10048f72(pvVar1,piVar3);
      }
      *(undefined4 **)(puVar4 + 0xc) = local_40;
    }
  }
  else {
    puVar5 = FUN_100ae970(param_1,&DAT_100e6be8);
    if (puVar5 == (uint *)0x0) {
      for (local_10 = (**(code **)(DAT_100f9e8c + 0x198))(); local_10 != 0;
          local_10 = (**(code **)(DAT_100f9e8c + 0x19c))(local_10)) {
        pvVar7 = pvVar1;
        pcVar6 = (char *)(**(code **)(DAT_100f9e8c + 0x1a0))(local_10);
        iVar2 = FUN_100b17b0((byte *)param_1,pcVar6,pvVar7);
        if (iVar2 == 0) {
          iVar2 = FUN_1004abd0((void *)((int)this + 0x238));
          puVar4 = (undefined1 *)FUN_1004ab50((void *)((int)this + 0x238),iVar2);
          *puVar4 = 1;
          *(int *)(puVar4 + 4) = local_10;
          *(undefined4 *)(puVar4 + 8) = 0;
          pvVar7 = operator_new(0xc);
          if (pvVar7 == (void *)0x0) {
            local_44 = (undefined4 *)0x0;
          }
          else {
            puVar8 = (uint *)0x0;
            puVar5 = (uint *)(**(code **)(DAT_100f9e8c + 0x1a0))(local_10);
            local_44 = FUN_10048f38(pvVar7,puVar5,puVar8);
          }
          *(undefined4 **)(puVar4 + 0xc) = local_44;
        }
      }
      for (local_8 = (undefined4 *)(**(code **)(DAT_100f9e8c + 0x194))();
          local_8 != (undefined4 *)0x0; local_8 = (undefined4 *)local_8[4]) {
        iVar2 = FUN_100b17b0((byte *)param_1,(char *)*local_8,pvVar1);
        if (iVar2 == 0) {
          iVar2 = FUN_1004abd0((void *)((int)this + 0x238));
          puVar4 = (undefined1 *)FUN_1004ab50((void *)((int)this + 0x238),iVar2);
          *puVar4 = 1;
          *(undefined4 *)(puVar4 + 4) = 0;
          *(undefined4 **)(puVar4 + 8) = local_8;
          pvVar7 = operator_new(0xc);
          if (pvVar7 == (void *)0x0) {
            local_48 = (undefined4 *)0x0;
          }
          else {
            local_48 = FUN_10048f38(pvVar7,(uint *)*local_8,(uint *)local_8[1]);
          }
          *(undefined4 **)(puVar4 + 0xc) = local_48;
        }
      }
    }
  }
  return;
}

