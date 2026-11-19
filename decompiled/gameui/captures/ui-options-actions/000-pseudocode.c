
void __fastcall FUN_1004ccfb(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined4 *local_58;
  int *local_54;
  int *local_50;
  int *local_48;
  undefined4 *local_40;
  int local_24;
  int local_14;
  int local_10;
  
  FUN_1004d05e((int)param_1);
  local_10 = *(int *)(*param_1 + 4);
  puVar2 = (undefined4 *)param_1[2];
  do {
    if (local_10 == 0) {
      return;
    }
    pvVar3 = operator_new(0x84);
    if (pvVar3 == (void *)0x0) {
      local_40 = (undefined4 *)0x0;
    }
    else {
      local_40 = FUN_10039404(pvVar3,puVar2,(uint *)s_mpcontrol_t_100e7278);
    }
    local_40[0x1c] = *(undefined4 *)(local_10 + 0x70);
    switch(local_40[0x1c]) {
    case 1:
      pvVar3 = operator_new(0x120);
      if (pvVar3 == (void *)0x0) {
        local_48 = (int *)0x0;
      }
      else {
        local_48 = FUN_1008d110(pvVar3,local_40,(uint *)s_DescCheckButton_100e7284,
                                (char *)(local_10 + 0xb4));
      }
      fVar1 = *(float *)(local_10 + 0x240);
      (**(code **)(*local_48 + 0x2b4))
                (CONCAT31((int3)(CONCAT22((short)((uint)local_48 >> 0x10),
                                          (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                          (ushort)(fVar1 == 0.0) << 0xe) >> 8),(fVar1 == 0.0) == 0))
      ;
      local_40[0x1d] = local_48;
      break;
    case 2:
    case 4:
      pvVar3 = operator_new(0x134);
      if (pvVar3 == (void *)0x0) {
        local_50 = (int *)0x0;
      }
      else {
        uVar4 = FUN_1007d2d0(pvVar3,local_40,(uint *)s_DescTextEntry_100e7294);
        local_50 = (int *)uVar4;
      }
      (**(code **)(*local_50 + 600))(local_10 + 0x1c0);
      local_40[0x1d] = local_50;
      break;
    case 3:
      pvVar3 = operator_new(0x150);
      if (pvVar3 == (void *)0x0) {
        local_54 = (int *)0x0;
      }
      else {
        local_54 = FUN_1007b234(pvVar3,local_40,(uint *)s_DescComboBox_100e72a4,5,0);
      }
      for (local_14 = *(int *)(local_10 + 0x1b4); local_14 != 0;
          local_14 = *(int *)(local_14 + 0x180)) {
        (**(code **)(*local_54 + 0x310))(local_14,0);
      }
      lVar5 = __ftol();
      (**(code **)(*local_54 + 0x340))((int)lVar5);
      local_40[0x1d] = local_54;
    }
    if (local_40[0x1c] != 1) {
      pvVar3 = operator_new(0xbc);
      if (pvVar3 == (void *)0x0) {
        local_58 = (undefined4 *)0x0;
      }
      else {
        local_58 = FUN_1005ad10(pvVar3,local_40,(uint *)s_DescLabel_100e72b4,&DAT_100fee0c);
      }
      local_40[0x1e] = local_58;
      (**(code **)(*(int *)local_40[0x1e] + 0x22c))(3);
      (**(code **)(*(int *)local_40[0x1e] + 0x230))(5,0);
      (**(code **)(*(int *)local_40[0x1e] + 0x21c))(local_10 + 0xb4);
    }
    local_40[0x1f] = local_10;
    FUN_1005e115(local_40,100,0x1c);
    (**(code **)(*(int *)param_1[2] + 0x21c))(local_40);
    if (param_1[1] == 0) {
      param_1[1] = (int)local_40;
      local_40[0x20] = 0;
    }
    else {
      for (local_24 = param_1[1]; local_24 != 0; local_24 = *(int *)(local_24 + 0x80)) {
        if (*(int *)(local_24 + 0x80) == 0) {
          *(undefined4 **)(local_24 + 0x80) = local_40;
          local_40[0x20] = 0;
          break;
        }
      }
    }
    local_10 = *(int *)(local_10 + 0x2cc);
  } while( true );
}

