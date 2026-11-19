
void FUN_10048f10(void)

{
  Panel *pPVar1;
  Panel PVar2;
  Panel *pPVar3;
  Panel *in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_c;
  int local_8;
  
  pPVar1 = in_ECX + 0x19c;
  pPVar3 = pPVar1;
  do {
    PVar2 = *pPVar3;
    pPVar3 = pPVar3 + 1;
  } while (PVar2 != (Panel)0x0);
  if (1 < (uint)((int)pPVar3 - (int)(in_ECX + 0x19d))) {
    if ((*pPVar1 == (Panel)0x2a) || (in_ECX[0x21c] != (Panel)0x0)) {
      uVar6 = 0;
      uVar5 = 0xff;
      uVar4 = 0xff;
    }
    else {
      uVar6 = 200;
      uVar5 = 200;
      uVar4 = 200;
    }
    (**(code **)(**(int **)(in_ECX + 0x220) + 0x120))(uVar4,uVar5,uVar6,0);
    (**(code **)(**(int **)(in_ECX + 0x22c) + 0xc))(pPVar1,&local_c,&local_8);
    (**(code **)(*(int *)in_ECX + 0x198))
              (DAT_1018f430 / 2 - local_c / 2,DAT_1018f434 + local_8 * -2);
    (**(code **)(**(int **)(in_ECX + 0x220) + 8))(DAT_1018f430,0x40);
    (**(code **)(**(int **)(in_ECX + 0x220) + 0x200))(*(int **)(in_ECX + 0x220),pPVar1);
    (**(code **)**(undefined4 **)(in_ECX + 0x220))(0,DAT_1018f434 + local_8 * -3);
    (**(code **)(**(int **)(in_ECX + 0x220) + 0x21c))(4);
  }
  vgui::Panel::paint(in_ECX);
  return;
}

