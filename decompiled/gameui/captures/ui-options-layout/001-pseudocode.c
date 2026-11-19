
void __thiscall FUN_1003946c(void *this,int param_1)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x78) == 0) {
    if (*(int *)((int)this + 0x74) != 0) {
      CSliderCtrl::SetRange(*(CSliderCtrl **)((int)this + 0x74),0,4,param_1);
    }
  }
  else {
    iVar1 = param_1 / 2;
    if (*(int *)((int)this + 0x74) != 0) {
      CSliderCtrl::SetRange(*(CSliderCtrl **)((int)this + 0x74),iVar1 + 0x14,4,iVar1 + -0x14);
    }
    CSliderCtrl::SetRange(*(CSliderCtrl **)((int)this + 0x78),0,4,iVar1 + 0x14);
  }
  return;
}

