
void FUN_100556f0(void)

{
  char cVar1;
  int iVar2;
  HMODULE pHVar3;
  undefined *puVar4;
  int in_ECX;
  code *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  
  FUN_1007d4d0("GL manager: reset\n");
  if (*(int *)(in_ECX + 0x214) != 0) {
    FUN_1007d4d0("GL manager: already loaded\n");
    return;
  }
  iVar2 = (*DAT_101b26c4)("-noglfx",0);
  if (iVar2 != 0) {
    FUN_1007d4d0("GL manager: disabled by user\n");
    (*DAT_101b26a8)("VidInit: skipping loading of opengl32.dll - disabled by user\n");
    return;
  }
  iVar2 = (*DAT_10545850)();
  if (iVar2 == 0) {
    pcVar7 = 
    "You appear to be running Cry of Fear in software mode\nCry of Fear does not support software mode. Would you like to switch to OpenGL now?"
    ;
LAB_1005575f:
    pcVar5 = MessageBoxA_exref;
    iVar2 = MessageBoxA((HWND)0x0,pcVar7,(LPCSTR)0x0,4);
    if (iVar2 != 6) goto LAB_100557fa;
    iVar2 = FUN_10055620("LaunchOptions"," -num_edicts 2048 -gl");
    if (iVar2 == 0) {
LAB_100557e3:
      pcVar7 = "Unable to set OpenGL mode.";
    }
    else {
      pcVar7 = "Succesfully set OpenGL mode. Please restart Steam and Cry of Fear";
    }
  }
  else {
    iVar2 = (*DAT_10545850)();
    if (iVar2 == 1) goto LAB_100557fa;
    iVar2 = (*DAT_10545850)();
    pcVar5 = MessageBoxA_exref;
    if (iVar2 == 2) {
      pcVar7 = 
      "You appear to be running Cry of Fear in Direct 3D mode\nCry of Fear does not support Direct3D. Would you like to switch to OpenGL now?"
      ;
      goto LAB_1005575f;
    }
    iVar2 = MessageBoxA((HWND)0x0,
                        "You appear to be running Cry of Fear in an unsupported video mode\nCry of Fear only runs in OpenGL. Would you like to switch to OpenGL now?"
                        ,(LPCSTR)0x0,4);
    if (iVar2 != 6) goto LAB_100557fa;
    iVar2 = FUN_10055620("LaunchOptions"," -num_edicts 2048 -gl");
    if (iVar2 == 0) goto LAB_100557e3;
    pcVar7 = "Succesfully set OpenGL mode. Please restart Cry of Fear";
  }
  (*pcVar5)(0,pcVar7,0,0);
  (*DAT_101b2658)(&DAT_1014b38c);
LAB_100557fa:
  iVar2 = (*DAT_10545850)();
  if (iVar2 == 0) {
    FUN_1007d4d0("GL manager: Software renderer\n");
    (*DAT_101b26a8)("VidInit: Software renderer\n");
    *(undefined4 *)(in_ECX + 0x214) = 1;
    return;
  }
  pHVar3 = LoadLibraryA("opengl32.dll");
  *(HMODULE *)(in_ECX + 0x210) = pHVar3;
  if (pHVar3 == (HMODULE)0x0) {
    FUN_1007d4d0("GL manager: Cannot load opengl32.dll\n");
    (*DAT_101b26a8)("VidInit ERROR: Cannot load opengl32.dll!\n");
    *(undefined4 *)(in_ECX + 0x214) = 1;
    return;
  }
  iVar2 = FUN_10053c80();
  if (iVar2 == 0) {
    FUN_1007d4d0("GL manager: Error loading opengl32.dll functions\n");
    pcVar7 = "VidInit: Error loading opengl32.dll functions!\n";
  }
  else {
    (*DAT_101b26a8)("VidInit: opengl32.dll loaded successfully\n");
    FUN_1007d4d0("GL manager: loaded library\n");
    iVar2 = (**(code **)(in_ECX + 0xb0))(0x1f01);
    if (iVar2 != 0) {
      FUN_1007d4d0("GL manager: opengl renderer\n");
      (*DAT_101b26a8)("VidInit: OpenGL renderer (%s)\n",iVar2);
      *(undefined4 *)(in_ECX + 0x214) = 2;
      FUN_100554c0();
      FUN_10054f90();
      FUN_10054de0();
      FUN_10054e20();
      FUN_10055100();
      FUN_100552d0();
      FUN_10055140();
      FUN_10054c90();
      FUN_10055440();
      (*DAT_101be6b8)(0xd55,in_ECX + 0x208);
      (*DAT_101be6b8)(0xd55,in_ECX + 0x20c);
      (*DAT_101be6b8)(0xd33,(undefined4 *)(in_ECX + 0x204));
      cVar1 = FUN_10053bf0("PARANOIA_HACKS_V1");
      *(uint *)(in_ECX + 0x200) = (uint)(cVar1 != '\0');
      FUN_1007d400("Paranoia opengl hacks version: %d\n",(uint)(cVar1 != '\0'));
      FUN_1007d400("| Max texture size: %d\n",*(undefined4 *)(in_ECX + 0x204));
      puVar6 = &DAT_1014b6d8;
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x164) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| Multitexturing support: %s (%d TU)\n",puVar4,*(undefined4 *)(in_ECX + 0x168));
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x180) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| Diffuse bump-mapping support: %s\n",puVar4);
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x184) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| NV register combiners support: %s (%d)\n",puVar4,
                   *(undefined4 *)(in_ECX + 0x188));
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x1a0) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| ARB fragment programs support: %s (%d IU, %d TC)\n",puVar4,
                   *(undefined4 *)(in_ECX + 0x1a4),*(undefined4 *)(in_ECX + 0x1a8));
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x1d4) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| Cubemaps support: %s\n",puVar4);
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x1dc) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| 3D textures support: %s\n",puVar4);
      puVar4 = &DAT_1014b6d8;
      if (*(int *)(in_ECX + 0x1e0) == 0) {
        puVar4 = &DAT_1014b6dc;
      }
      FUN_1007d400("| VBO support: %s\n",puVar4);
      if (*(int *)(in_ECX + 0x1f8) == 0) {
        puVar6 = &DAT_1014b6dc;
      }
      FUN_1007d400("| Rectangle textures support: %s\n",puVar6);
      return;
    }
    FUN_1007d4d0("GL manager: Direct 3D renderer\n");
    pcVar7 = "VidInit: Direct3D renderer\n";
  }
  (*DAT_101b26a8)(pcVar7);
  FreeLibrary(*(HMODULE *)(in_ECX + 0x210));
  *(undefined4 *)(in_ECX + 0x210) = 0;
  *(undefined4 *)(in_ECX + 0x214) = 1;
  return;
}

