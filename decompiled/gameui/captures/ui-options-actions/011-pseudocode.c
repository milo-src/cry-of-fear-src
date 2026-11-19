
void __fastcall FUN_1008ccb7(int *param_1)

{
  int *piVar1;
  int iVar2;
  TypeDescriptor *pTVar3;
  TypeDescriptor *pTVar4;
  int iVar5;
  
  iVar5 = 0;
  pTVar4 = &vgui2::EditablePanel::RTTI_Type_Descriptor;
  pTVar3 = &vgui2::Panel::RTTI_Type_Descriptor;
  iVar2 = 0;
  piVar1 = (int *)(**(code **)(*param_1 + 0x300))();
  piVar1 = (int *)FUN_100b0e93(piVar1,iVar2,(int)pTVar3,(int)pTVar4,iVar5);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x228))();
  }
  return;
}

