
void FUN_1002ea30(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  int local_8;
  
  local_c = in_ECX;
  (**(code **)(**(int **)(in_ECX + 0xc6f0) + 8))(&local_10,&local_8);
  (**(code **)(**(int **)(in_ECX + 0xc6e8) + 8))(local_18,local_14);
  iVar1 = DAT_1018f434 - local_8;
  iVar2 = DAT_1018f430 / 2 - local_10 / 2;
  (**(code **)(**(int **)(in_ECX + 0xc6e0) + 8))(local_20,local_1c);
  (**(code **)**(undefined4 **)(in_ECX + 0xc6f4))(iVar2,iVar1 + local_8 * -10);
  (**(code **)**(undefined4 **)(local_c + 0xc6fc))(iVar2,iVar1 + local_8 * -9);
  (**(code **)**(undefined4 **)(local_c + 0xc704))(iVar2,iVar1 + local_8 * -8);
  (**(code **)**(undefined4 **)(local_c + 0xc70c))(iVar2,iVar1 + local_8 * -7);
  (**(code **)**(undefined4 **)(local_c + 0xc714))(iVar2,iVar1 + local_8 * -2);
  (**(code **)**(undefined4 **)(local_c + 0xc71c))(iVar2,iVar1 + local_8 * -5);
  (**(code **)**(undefined4 **)(local_c + 0xc724))(iVar2,iVar1 + local_8 * -4);
  (**(code **)**(undefined4 **)(local_c + 0xc72c))(iVar2,iVar1 + local_8 * -3);
  (**(code **)**(undefined4 **)(local_c + 0xc734))(iVar2,iVar1 + local_8 * -6);
  (**(code **)**(undefined4 **)(local_c + 0xc73c))(iVar2,iVar1 - local_8);
  return;
}

