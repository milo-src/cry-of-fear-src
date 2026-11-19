
void FUN_10044a30(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  
  uVar1 = (*DAT_101b2730)();
  iVar2 = FUN_100d3cf0(uVar1,&DAT_1014688c);
  if (iVar2 == 0) {
    (**(code **)(*(int *)in_ECX[0x36] + 0x24))(1);
    iVar2 = *(int *)in_ECX[0x54];
    if (in_ECX[0x69] == 0) {
      pcVar3 = "gfx/vgui/640_inventory.tga";
    }
    else {
      pcVar3 = "gfx/vgui/640_inventory_three.tga";
    }
    uVar1 = FUN_10008640(pcVar3);
    (**(code **)(iVar2 + 0x1fc))(uVar1);
    (*(code *)**(undefined4 **)in_ECX[0x57])(0x24,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x48])(0x1f,0x44);
    (*(code *)**(undefined4 **)in_ECX[0x58])(0x8a,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x49])(0x85,0x44);
    (*(code *)**(undefined4 **)in_ECX[0x59])(0xf0,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x4a])(0xeb,0x44);
    (*(code *)**(undefined4 **)in_ECX[0x5a])(0x24,0xe8);
    (*(code *)**(undefined4 **)in_ECX[0x4b])(0x1f,0xe3);
    (*(code *)**(undefined4 **)in_ECX[0x5b])(0x8a,0xe8);
    (*(code *)**(undefined4 **)in_ECX[0x4c])(0x85,0xe3);
    (*(code *)**(undefined4 **)in_ECX[0x5c])(0xf0,0xe8);
    (*(code *)**(undefined4 **)in_ECX[0x4d])(0xeb,0xe3);
    (*(code *)**(undefined4 **)in_ECX[0x50])(0x1f,0x15c);
    (*(code *)**(undefined4 **)in_ECX[0x65])(0x193,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x66])(0x1f9,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x67])(0x25f,0x49);
    (*(code *)**(undefined4 **)in_ECX[0x4e])(0x18e,0x44);
    (*(code *)**(undefined4 **)in_ECX[0x4f])(500,0x44);
    (*(code *)**(undefined4 **)in_ECX[0x51])(0x25a,0x44);
    (**(code **)(*(int *)in_ECX[0x60] + 8))(0x16b,0x2f);
    (*(code *)**(undefined4 **)in_ECX[0x60])(0x175,0xe2);
    (**(code **)(*(int *)in_ECX[0x61] + 8))(0x16b,0x2f);
    (*(code *)**(undefined4 **)in_ECX[0x61])(0x175,0x114);
    (**(code **)(*(int *)in_ECX[0x62] + 8))(0x16b,0x2f);
    (*(code *)**(undefined4 **)in_ECX[0x62])(0x175,0x145);
    (**(code **)(*(int *)in_ECX[99] + 0x24))(0);
    (**(code **)(*(int *)in_ECX[100] + 0x24))(1);
    uVar1 = 0;
  }
  else {
    (**(code **)(*(int *)in_ECX[0x36] + 0x24))();
    iVar2 = *(int *)in_ECX[0x54];
    uVar1 = FUN_10008640("gfx/vgui/640_inventory_p.tga");
    (**(code **)(iVar2 + 0x1fc))(uVar1);
    (*(code *)**(undefined4 **)in_ECX[0x57])(0x24,0x5b);
    (*(code *)**(undefined4 **)in_ECX[0x48])(0x1f,0x56);
    (*(code *)**(undefined4 **)in_ECX[0x58])(0x8a,0x5b);
    (*(code *)**(undefined4 **)in_ECX[0x49])(0x85,0x56);
    (*(code *)**(undefined4 **)in_ECX[0x59])(0xf0,0x5b);
    (*(code *)**(undefined4 **)in_ECX[0x4a])(0xeb,0x56);
    (*(code *)**(undefined4 **)in_ECX[0x5a])(0x24,0xd5);
    (*(code *)**(undefined4 **)in_ECX[0x4b])(0x1f,0xd0);
    (*(code *)**(undefined4 **)in_ECX[0x5b])(0x8a,0xd5);
    (*(code *)**(undefined4 **)in_ECX[0x4c])(0x85,0xd0);
    (*(code *)**(undefined4 **)in_ECX[0x5c])(0xf0,0xd5);
    (*(code *)**(undefined4 **)in_ECX[0x4d])(0xeb,0xd0);
    (*(code *)**(undefined4 **)in_ECX[0x50])(0x1f,0x149);
    (*(code *)**(undefined4 **)in_ECX[0x65])(0x193,0x5a);
    (*(code *)**(undefined4 **)in_ECX[0x66])(0x1f9,0x5a);
    (*(code *)**(undefined4 **)in_ECX[0x67])(0x25f,0x5a);
    (*(code *)**(undefined4 **)in_ECX[0x4e])(0x18e,0x55);
    (*(code *)**(undefined4 **)in_ECX[0x4f])(500,0x55);
    (*(code *)**(undefined4 **)in_ECX[0x51])(0x25a,0x55);
    (**(code **)(*(int *)in_ECX[0x60] + 8))(0x16b,0x2a);
    (*(code *)**(undefined4 **)in_ECX[0x60])(0x175,0xf3);
    (**(code **)(*(int *)in_ECX[0x61] + 8))(0x16b,0x2a);
    (*(code *)**(undefined4 **)in_ECX[0x61])(0x175,0x11d);
    (**(code **)(*(int *)in_ECX[0x62] + 8))(0x16b,0x2a);
    (*(code *)**(undefined4 **)in_ECX[0x62])(0x175,0x147);
    (**(code **)(*(int *)in_ECX[99] + 0x24))(0);
    (**(code **)(*(int *)in_ECX[100] + 0x24))(0);
    uVar1 = 0xff;
  }
  (**(code **)(*in_ECX + 300))(uVar1,0,0,0xff);
  (**(code **)(*(int *)in_ECX[0x52] + 300))(0,0,0,0);
  return;
}

