
void FUN_01d010e6(undefined4 *param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_210 [512];
  code *local_10;
  code *local_c;
  int *local_8;
  
  if (DAT_01eda250 == 0) {
    uVar3 = *param_1;
    local_c = (code *)param_1[1];
    local_8 = (int *)(*local_c)(s_VFileSystem009_01ea813c,0);
    (**(code **)(*local_8 + 0x7c))(s_vgui2_dll_01ea814c);
    uVar1 = FUN_01d87ca9(s_vgui2_dll_01ea8158);
    *(undefined4 *)(in_ECX + 0x1c) = uVar1;
    pcVar2 = (code *)FUN_01d87d19(*(undefined4 *)(in_ECX + 0x1c));
    *(undefined4 *)(in_ECX + 4) = uVar3;
    *(code **)(in_ECX + 8) = pcVar2;
    *(code **)(in_ECX + 0xc) = local_c;
    *(undefined4 *)(in_ECX + 0x18) = 3;
    FUN_01e6ff86(local_210,0x200,s_cl_dlls_GameUI_dll_01ea8164);
    FUN_01d49269(local_210);
    FUN_01d490cf(local_210);
    FUN_01d5d4e2(local_210);
    uVar3 = FUN_01d87ca9(local_210);
    *(undefined4 *)(in_ECX + 0x20) = uVar3;
    local_10 = (code *)FUN_01d87d19(*(undefined4 *)(in_ECX + 0x20));
    *(code **)(in_ECX + 4 + *(int *)(in_ECX + 0x18) * 4) = local_10;
    if (local_10 != (code *)0x0) {
      DAT_01eda250 = (*local_10)(s_GameUI007_01ea8178,0);
      DAT_01eda254 = (*local_10)(s_GameConsole003_01ea8184,0);
      DAT_01eda258 = (*local_10)(s_CareerUI001_01ea8194,0);
      *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    }
    DAT_01eda790 = (*pcVar2)(s_VGUI_InputInternal001_01ea81a0,0);
    if (DAT_01eda790 == 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (DAT_02fb9c88 == (code *)0x0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
    else {
      pcVar2 = (code *)(*DAT_02fb9c88)();
      if (pcVar2 != (code *)0x0) {
        *(code **)(in_ECX + 4 + *(int *)(in_ECX + 0x18) * 4) = pcVar2;
        *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
      }
      DAT_01eda25c = (*pcVar2)(s_VClientVGUI001_01ea81b8,0);
    }
    FUN_01e27f5a(s_BaseUI_01ea81c8,in_ECX + 4,*(undefined4 *)(in_ECX + 0x18));
  }
  return;
}

