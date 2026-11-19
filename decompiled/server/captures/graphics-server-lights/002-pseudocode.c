
void FUN_100a8570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  int *in_ECX;
  undefined1 local_10 [12];
  
  iVar2 = FUN_10018350(param_3);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x5c))();
    if (iVar2 == 2) {
      (**(code **)(*in_ECX + 0x11c))(0);
      *(uint *)(in_ECX[1] + 0x1a4) = *(uint *)(in_ECX[1] + 0x1a4) & 0xfffffffd;
      FUN_10017ad0();
      return;
    }
    iVar2 = in_ECX[1];
    if (*(int *)(iVar2 + 0x1d8) == 0) {
      *(undefined8 *)(in_ECX + 0x37) = *(undefined8 *)(iVar2 + 8);
      iVar2 = *(int *)(iVar2 + 0x10);
    }
    else {
      puVar3 = (undefined8 *)FUN_100b8110(local_10);
      *(undefined8 *)(in_ECX + 0x37) = *puVar3;
      iVar2 = *(int *)(puVar3 + 1);
    }
    in_ECX[0x39] = iVar2;
    (**(code **)(*in_ECX + 0x11c))(1);
    *(uint *)(in_ECX[1] + 0x1a4) = *(uint *)(in_ECX[1] + 0x1a4) | 2;
    fVar1 = *(float *)(in_ECX[1] + 0x164);
    if (fVar1 != 0.0) {
      (**(code **)(*in_ECX + 8))(fVar1);
      return;
    }
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
      in_ECX[0x1e] = (int)CBaseEntity::SUB_Remove;
      (**(code **)(*in_ECX + 8))(0);
    }
  }
  return;
}

