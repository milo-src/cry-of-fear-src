
void FUN_1003bc10(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  Panel *in_ECX;
  int iVar4;
  char *pcVar5;
  int local_c;
  int local_8;
  
  if (DAT_10542bb4 != 0) {
    uVar1 = (*DAT_101b2718)(1,4);
    switch(uVar1) {
    case 1:
      (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xf54));
      (**(code **)(*(int *)in_ECX + 400))(0xff,0xff,0,1);
      (**(code **)(**(int **)(in_ECX + 0xf54) + 0xc))("Dicks",&local_8,&local_c);
      iVar2 = (*DAT_101b2718)(0,0x32);
      iVar4 = DAT_1018f430 / 2;
      iVar3 = (*DAT_101b2718)(0,0x32);
      (**(code **)(*(int *)in_ECX + 0x198))
                (iVar2 + (iVar4 - local_8 / 2),iVar3 + (DAT_1018f434 / 2 - local_c / 2));
      pcVar5 = "Dicks";
      break;
    case 2:
      (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xf54));
      (**(code **)(*(int *)in_ECX + 400))(0xff,0xff,0,1);
      (**(code **)(**(int **)(in_ECX + 0xf54) + 0xc))("Balls",&local_8,&local_c);
      iVar2 = (*DAT_101b2718)(0,0x32);
      iVar4 = DAT_1018f430 / 2;
      iVar3 = (*DAT_101b2718)(0,0x32);
      (**(code **)(*(int *)in_ECX + 0x198))
                (iVar2 + (iVar4 - local_8 / 2),iVar3 + (DAT_1018f434 / 2 - local_c / 2));
      pcVar5 = "Balls";
      break;
    case 3:
      (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xf54));
      (**(code **)(*(int *)in_ECX + 400))(0xff,0xff,0,1);
      (**(code **)(**(int **)(in_ECX + 0xf54) + 0xc))("Dongs",&local_8,&local_c);
      iVar2 = (*DAT_101b2718)(0,0x32);
      iVar4 = DAT_1018f430 / 2;
      iVar3 = (*DAT_101b2718)(0,0x32);
      (**(code **)(*(int *)in_ECX + 0x198))
                (iVar2 + (iVar4 - local_8 / 2),iVar3 + (DAT_1018f434 / 2 - local_c / 2));
      pcVar5 = "Dongs";
      break;
    case 4:
      (**(code **)(*(int *)in_ECX + 0x188))(*(undefined4 *)(in_ECX + 0xf54));
      (**(code **)(*(int *)in_ECX + 400))(0xff,0xff,0,1);
      (**(code **)(**(int **)(in_ECX + 0xf54) + 0xc))("Butts",&local_8,&local_c);
      iVar2 = (*DAT_101b2718)(0,0x32);
      iVar4 = DAT_1018f430 / 2;
      iVar3 = (*DAT_101b2718)(0,0x32);
      (**(code **)(*(int *)in_ECX + 0x198))
                (iVar2 + (iVar4 - local_8 / 2),iVar3 + (DAT_1018f434 / 2 - local_c / 2));
      pcVar5 = "Butts";
      break;
    default:
      goto switchD_1003bc3f_default;
    }
    (**(code **)(*(int *)in_ECX + 0x1a0))(pcVar5,5);
  }
switchD_1003bc3f_default:
  FUN_1003b0c0();
  vgui::Panel::paint(in_ECX);
  return;
}

