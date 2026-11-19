
void FUN_1004adf0(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  Panel *in_ECX;
  char *pcVar4;
  int local_c;
  int local_8;
  
  iVar3 = *(int *)(in_ECX + 0xf0);
  if (iVar3 == 1) {
    if (*(int *)(in_ECX + 0xf4) == 0) goto LAB_1004af57;
    pcVar2 = (char *)FUN_1004ab60(*(int *)(in_ECX + 0xf4));
    (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xdc));
    (**(code **)(*(int *)in_ECX + 400))(200,200,200,1);
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0xc))(pcVar2,&local_c,&local_8);
    (**(code **)(*(int *)in_ECX + 0x198))
              (DAT_1018f430 / 2 - local_c / 2,DAT_1018f434 + local_8 * -2);
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)in_ECX + 0x1a0))(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
    iVar3 = *(int *)(in_ECX + 0xf0);
  }
  if ((iVar3 == 2) && (*(int *)(in_ECX + 0xf4) != 0)) {
    pcVar2 = (char *)FUN_1004aad0(*(int *)(in_ECX + 0xf4));
    (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xdc));
    (**(code **)(*(int *)in_ECX + 400))(200,200,200,1);
    (**(code **)(**(int **)(in_ECX + 0xdc) + 0xc))(pcVar2,&local_8,&local_c);
    (**(code **)(*(int *)in_ECX + 0x198))
              (DAT_1018f430 / 2 - local_8 / 2,DAT_1018f434 + local_c * -2);
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (**(code **)(*(int *)in_ECX + 0x1a0))(pcVar2,(int)pcVar4 - (int)(pcVar2 + 1));
  }
LAB_1004af57:
  vgui::Panel::paint(in_ECX);
  return;
}

