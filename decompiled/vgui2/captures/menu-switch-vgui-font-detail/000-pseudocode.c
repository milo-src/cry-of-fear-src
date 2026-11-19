
int __thiscall
FUN_10026af0(void *this,byte *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  LPVOID pvVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int *this_00;
  int iVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1003bb3b;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (0 < *(int *)((int)this + 0x20)) {
    do {
      ExceptionList = ppvVar2;
      uVar3 = FUN_10028160(*(void **)(*(int *)((int)this + 0x14) + iVar6 * 4),param_1,param_2,
                           param_3,param_4,param_5,param_6);
      if ((char)uVar3 != '\0') {
        iVar6 = *(int *)(*(int *)((int)this + 0x14) + iVar6 * 4);
        if (iVar6 != 0) {
          ExceptionList = local_c;
          return iVar6;
        }
        break;
      }
      iVar6 = iVar6 + 1;
      ppvVar2 = ExceptionList;
    } while (iVar6 < *(int *)((int)this + 0x20));
  }
  iVar6 = *(int *)((int)this + 0x20);
  this_00 = (int *)((int)this + 0x14);
  FUN_10027180(this_00,1);
  FUN_10027200(this_00,iVar6,1);
  puVar4 = operator_new(0x280);
  local_4 = 0;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = FUN_100272b0(puVar4);
  }
  *(undefined1 **)(*this_00 + iVar6 * 4) = puVar4;
  local_4 = 0xffffffff;
  uVar3 = FUN_10027400(*(void **)(*this_00 + iVar6 * 4),param_1,param_2,param_3,param_4,param_5,
                       param_6);
  if ((char)uVar3 != '\0') {
    ExceptionList = local_c;
    return *(int *)(*this_00 + iVar6 * 4);
  }
  pvVar1 = *(LPVOID *)(*this_00 + iVar6 * 4);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_10027380((int)pvVar1);
    FUN_1002944b(pvVar1);
  }
  iVar5 = (*(int *)((int)this + 0x20) - iVar6) + -1;
  if (0 < iVar5) {
    FUN_100298e0((undefined4 *)(*this_00 + iVar6 * 4),(undefined4 *)(*this_00 + 4 + iVar6 * 4),
                 iVar5 * 4);
  }
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + -1;
  ExceptionList = local_c;
  return 0;
}

