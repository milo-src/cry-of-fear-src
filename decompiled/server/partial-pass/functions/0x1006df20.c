// rea decompile_all
// name: FUN_1006df20
// address: 0x1006df20
// body: available
// range: 0x1006df20-0x1006e3d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006df20(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  bool bVar4;
  bool bVar5;
  float fVar6;
  char *pcStack_6c;
  float *pfStack_68;
  char *pcStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  char *pcStack_54;
  undefined4 uStack_50;
  float *pfStack_4c;
  undefined1 local_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  fVar6 = *DAT_10223188;
  if (fVar6 < (float)in_ECX[0x73]) {
    return;
  }
  if ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) == 0) {
    return;
  }
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (in_ECX[0x50] == 0) {
    if (*(int *)(*(int *)(in_ECX[0x58] + 4) + 0x1c4) == 3) {
      bVar5 = fVar6 == (float)in_ECX[0x6c];
      bVar4 = fVar6 < (float)in_ECX[0x6c];
    }
    else {
      if ((in_ECX[0x7e] != 0) && (*(int *)(in_ECX[1] + 0x24c) == 0)) {
        *(undefined4 *)(in_ECX[1] + 0x24c) = 1;
      }
      if (0 < in_ECX[0x79]) {
        if (in_ECX[0x7e] != 0) {
          return;
        }
        *(undefined4 *)(in_ECX[0x58] + 0x2294) = 1000;
        *(undefined4 *)(in_ECX[0x58] + 0x229c) = 0x100;
        in_ECX[0x1e] = (int)CShotgun::LolShell;
        *(float *)(in_ECX[1] + 0x104) = *DAT_10223188 + 0.45;
        pfStack_4c = *(float **)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
        uStack_50 = 0;
        pcStack_54 = (char *)DAT_10226490;
        uStack_58 = 1;
        iStack_5c = 0x1006e085;
        (*DAT_10223000)();
        iStack_5c = *(undefined4 *)(in_ECX[1] + 0x20c);
        piStack_60 = (int *)0x1006e094;
        piStack_60 = (int *)(*DAT_10223064)();
        pcStack_64 = (char *)0x1006e09b;
        (*DAT_10223010)();
        pcStack_64 = "aurora/gunsmoke.aur";
        pfStack_68 = (float *)0x1006e0a6;
        (*DAT_10223020)();
        pfStack_68 = (float *)0x1;
        pcStack_6c = (char *)0x1006e0ae;
        (*DAT_10223008)();
        pcStack_6c = "models/weapons/shotgun/v_shotgun.mdl";
        (*DAT_10223020)();
        (*DAT_10223010)(0);
        pfStack_4c = (float *)0x1006e0ca;
        (*DAT_10223004)();
        iVar3 = in_ECX[0x58];
        if (*(char *)(iVar3 + 0x21ea) == '\0') {
          in_ECX[0x79] = in_ECX[0x79] + -1;
        }
        iVar2 = *(int *)(iVar3 + 0x2814);
        pfStack_4c = (float *)(*(int *)(iVar3 + 4) + 0x74);
        uStack_50 = 0x1006e0f1;
        FUN_10119320();
        pfStack_4c = &local_10;
        uStack_50 = 0x1006e106;
        (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
        uStack_50 = 0;
        pcStack_54 = (char *)0x0;
        uStack_58 = 0;
        iStack_5c = in_ECX[0x5a];
        local_1c = local_10 + DAT_10223188[0x10] * 32.0;
        local_18 = local_c + DAT_10223188[0x11] * 32.0;
        local_14 = local_8 + DAT_10223188[0x12] * 32.0;
        piStack_60 = (int *)0x0;
        pcStack_64 = (char *)0x0;
        pfStack_68 = &local_1c;
        pcStack_6c = (char *)(*(int *)(in_ECX[0x58] + 4) + 8);
        (*DAT_10223134)(iVar2 != 1,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),DAT_10231f50,
                        0);
        uStack_50 = 0;
        pcStack_54 = "shotgun_shoot";
        uStack_58 = 0x1006e1c1;
        FUN_100ea240();
        uStack_50 = 0x40000000;
        piStack_60 = (int *)(*(int *)(in_ECX[0x58] + 4) + 8);
        pcStack_54 = (char *)0x3e19999a;
        uStack_58 = 0x3eb33333;
        iStack_5c = 0x40e00000;
        pcStack_64 = (char *)0x1006e1f5;
        FUN_10119de0();
        uStack_50 = 0;
        pcStack_54 = (char *)0x1;
        if ((char)in_ECX[0x5e] == '\0') {
          uStack_58 = 1;
        }
        else {
          uStack_58 = 0x10;
        }
        iStack_5c = 0x1006e215;
        (**(code **)(*in_ECX + 0x198))();
        piStack_60 = (int *)in_ECX[0x58];
        iStack_5c = 1;
        (**(code **)(*piStack_60 + 0x104))(&pcStack_6c);
        FUN_10116a40("weapons_new/shotgun/shoot.wav",0,1);
        piStack_60 = &local_34;
        puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
        *puVar1 = *puVar1 | 2;
        pcStack_64 = (char *)0x1006e25d;
        (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
        pfStack_68 = (float *)&local_28;
        pcStack_64 = (char *)0x3db27eb6;
        pcStack_6c = (char *)0x1006e274;
        FUN_100dfea0();
        pcStack_64 = *(char **)(in_ECX[0x58] + 0x2288);
        pfStack_68 = *(float **)(in_ECX[0x58] + 4);
        pcStack_6c = (char *)(int)_DAT_1022685c;
        FUN_10088ca0(local_40,8,local_34,local_30,local_2c,local_28,local_24,local_20,0x3d8ede55,
                     0x3d8ede55,0x3d8ede55,0x45000000,3,0);
        pcStack_64 = (char *)0x40000000;
        pfStack_68 = (float *)0x40000000;
        pcStack_6c = (char *)0x4;
        iVar3 = (*DAT_102230b0)(0xfffffffc);
        pcStack_6c = (char *)(float)iVar3;
        FUN_100f91b0();
        pcStack_64 = (char *)0x40a00000;
        pfStack_68 = (float *)0x1006e34f;
        FUN_100f9100();
        pfStack_68 = (float *)in_ECX[0x79];
        if ((pfStack_68 == (float *)0x0) && (*(int *)(in_ECX[0x58] + 0x2540 + in_ECX[0x77] * 4) < 1)
           ) {
          pcStack_6c = "!HEV_AMO0";
          pcStack_64 = (char *)pfStack_68;
          FUN_100f3a40();
          pfStack_68 = (float *)in_ECX[0x79];
        }
        in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
        if (pfStack_68 == (float *)0x0) {
          fVar6 = *DAT_10223188 + 1.0;
        }
        else {
          fVar6 = *DAT_10223188 + 5.0;
        }
        in_ECX[0x76] = (int)fVar6;
        in_ECX[0x72] = 0;
        return;
      }
      if (in_ECX[0x7e] != 0) {
        return;
      }
      if (in_ECX[0x79] != 0) {
        return;
      }
      bVar5 = *DAT_10223188 == (float)in_ECX[0x6c];
      bVar4 = *DAT_10223188 < (float)in_ECX[0x6c];
    }
    if (bVar4 || bVar5) {
      return;
    }
    pfStack_4c = (float *)0x1006df95;
    (**(code **)(*in_ECX + 400))();
    in_ECX[0x6c] = (int)(*DAT_10223188 + 0.25);
    return;
  }
  return;
}

