
void FUN_1003e210(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  Panel *in_ECX;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (((DAT_101b2600 != 0) && (iVar2 = *(int *)(DAT_101b2600 + 0x142c), iVar2 != 0)) &&
     (pcVar3 = (char *)(iVar2 + 0xd4), *(char *)(iVar2 + 0xd4) != '\0')) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (1 < (uint)((int)pcVar3 - (iVar2 + 0xd5))) {
      (**(code **)(**(int **)(iVar2 + 0x3a8) + 4))(&local_14,&local_10);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x142c) + 0x3a8) + 0xc))(&local_c,&local_8);
      (**(code **)(**(int **)(*(int *)(DAT_101b2600 + 0x142c) + 0x3a8) + 0x138))
                (&local_24,&local_20,&local_1c,&local_18);
      (**(code **)(**(int **)(in_ECX + 200) + 8))(local_c,local_8);
      (**(code **)(**(int **)(in_ECX + 200) + 0x200))
                (*(int **)(in_ECX + 200),*(int *)(DAT_101b2600 + 0x142c) + 0xd4);
      (**(code **)**(undefined4 **)(in_ECX + 200))(local_14,local_10);
      (**(code **)(**(int **)(in_ECX + 200) + 0x21c))(4);
      (**(code **)(**(int **)(in_ECX + 200) + 0x120))(local_24,local_20,local_1c,local_18);
    }
  }
  vgui::Panel::paint(in_ECX);
  return;
}

