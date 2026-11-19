// rea decompile_all
// name: FUN_10064c60
// address: 0x10064c60
// body: available
// range: 0x10064c60-0x10065265 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10064c60(void)

{
  uint *puVar1;
  float fVar2;
  code *pcVar3;
  int iVar4;
  int *in_ECX;
  char *pcStack_50;
  int iStack_4c;
  char *pcStack_48;
  int *piStack_44;
  char *pcStack_40;
  float *pfStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  fVar2 = *DAT_10223188;
  if (((((float)in_ECX[0x73] <= fVar2) && ((char)in_ECX[0x7f] == '\0')) &&
      ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) != 0)) && ((in_ECX[0x4a] == 0 && (in_ECX[0x50] == 0)))
     ) {
    if (*(int *)(*(int *)(in_ECX[0x58] + 4) + 0x1c4) == 3) {
      if ((float)in_ECX[0x6c] <= fVar2 && fVar2 != (float)in_ECX[0x6c]) {
        uStack_30 = 0x10064ce9;
        (**(code **)(*in_ECX + 400))();
        in_ECX[0x6c] = (int)(*DAT_10223188 + 1.0);
      }
      uStack_30 = 0;
      uStack_34 = 1;
      in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
      pcVar3 = *(code **)(*in_ECX + 0x198);
      in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
      if ((char)in_ECX[0x5e] == '\0') {
        fStack_38 = 1.54143e-44;
        pfStack_3c = (float *)0x10064d55;
        (*pcVar3)();
        return;
      }
      fStack_38 = 2.66247e-44;
      pfStack_3c = (float *)0x10064d4c;
      (*pcVar3)();
      return;
    }
    if (in_ECX[0x79] < 1) {
      if (in_ECX[0x6e] == 0) {
        uStack_30 = 0x10064d7a;
        (**(code **)(*in_ECX + 0x1c0))();
      }
      else {
        uStack_30 = 0;
        uStack_34 = 1;
        if ((char)in_ECX[0x5e] == '\0') {
          fStack_38 = 1.54143e-44;
        }
        else {
          fStack_38 = 2.66247e-44;
        }
        pfStack_3c = (float *)0x10064dcc;
        (**(code **)(*in_ECX + 0x198))();
        if ((float)in_ECX[0x6c] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x6c]) {
          pfStack_3c = (float *)0x10064de8;
          (**(code **)(*in_ECX + 400))();
          in_ECX[0x6c] = (int)(*DAT_10223188 + 1.0);
        }
      }
      in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
      in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
      return;
    }
    *(undefined4 *)(in_ECX[1] + 0x250) = 0;
    uStack_30 = *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
    uStack_34 = 0;
    fStack_38 = (float)DAT_10226490;
    pfStack_3c = (float *)0x1;
    if (DAT_10222f10 == 0) {
      pcStack_40 = (char *)0x10064e75;
      (*DAT_10223000)();
      pcStack_40 = *(char **)(in_ECX[1] + 0x20c);
      piStack_44 = (int *)0x10064e84;
      piStack_44 = (int *)(*DAT_10223064)();
      pcStack_48 = (char *)0x10064e8b;
      (*DAT_10223010)();
      pcStack_48 = "aurora/gunsmoke.aur";
      iStack_4c = 0x10064e96;
      (*DAT_10223020)();
      iStack_4c = 1;
      pcStack_50 = (char *)0x10064e9e;
      (*DAT_10223008)();
      pcStack_50 = "models/weapons/revolver/v_revolver.mdl";
    }
    else {
      pcStack_40 = (char *)0x10064e3f;
      (*DAT_10223000)();
      pcStack_40 = *(char **)(in_ECX[1] + 0x20c);
      piStack_44 = (int *)0x10064e4e;
      piStack_44 = (int *)(*DAT_10223064)();
      pcStack_48 = (char *)0x10064e55;
      (*DAT_10223010)();
      pcStack_48 = "aurora/gunsmoke.aur";
      iStack_4c = 0x10064e60;
      (*DAT_10223020)();
      iStack_4c = 1;
      pcStack_50 = (char *)0x10064e68;
      (*DAT_10223008)();
      pcStack_50 = "models/weapons/revolver/v_revolver_doctor.mdl";
    }
    (*DAT_10223020)();
    (*DAT_10223010)(0);
    uStack_30 = 0x10064eba;
    (*DAT_10223004)();
    iVar4 = in_ECX[0x58];
    if ((*(char *)(iVar4 + 0x21ea) == '\0') &&
       (in_ECX[0x79] = in_ECX[0x79] + -1, *(char *)(iVar4 + 0x21ea) == '\0')) {
      in_ECX[0x7e] = in_ECX[0x79] * 0x48;
    }
    uStack_30 = 0;
    uStack_34 = 0;
    fStack_38 = 0.0;
    pfStack_3c = (float *)in_ECX[0x5a];
    iStack_4c = *(int *)(iVar4 + 4) + 8;
    pcStack_40 = (char *)0x0;
    piStack_44 = (int *)0x0;
    pcStack_48 = (char *)&DAT_10222f34;
    pcStack_50 = (char *)0x0;
    (*DAT_10223134)(0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c),DAT_10231f50);
    uStack_30 = 0x3f800000;
    uStack_34 = 0x3f800000;
    fStack_38 = 2.8026e-45;
    pfStack_3c = (float *)0xfffffffe;
    pcStack_40 = (char *)0x10064f50;
    iVar4 = (*DAT_102230b0)();
    fStack_38 = (float)iVar4;
    pfStack_3c = (float *)0x10064f6a;
    FUN_100f91b0();
    pfStack_3c = (float *)0x40000000;
    if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x4000) == 0) {
      pfStack_3c = (float *)0x40a00000;
      fStack_38 = 0.25;
      uStack_34 = 0x3e19999a;
    }
    else {
      fStack_38 = 0.1;
      uStack_34 = 0x3dcccccd;
    }
    pcStack_40 = (char *)(*(int *)(in_ECX[0x58] + 4) + 8);
    uStack_30 = 0x40000000;
    piStack_44 = (int *)0x10064fd1;
    FUN_10119de0();
    uStack_30 = 0;
    uStack_34 = 1;
    if ((char)in_ECX[0x5e] == '\0') {
      fStack_38 = 4.2039e-45;
    }
    else {
      fStack_38 = 2.52234e-44;
    }
    pfStack_3c = (float *)0x10064ff3;
    (**(code **)(*in_ECX + 0x198))();
    pfStack_3c = (float *)0x0;
    pcStack_40 = "pistol_shoot";
    piStack_44 = (int *)0x10065005;
    FUN_100ea240();
    pfStack_3c = (float *)0x5;
    pcStack_40 = (char *)0x10065012;
    FUN_100f2a50();
    puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
    *puVar1 = *puVar1 | 2;
    iVar4 = *(int *)(in_ECX[0x58] + 4);
    local_28 = *(float *)(iVar4 + 0x68) + *(float *)(iVar4 + 0x74);
    local_24 = *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x78);
    local_20 = *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x7c);
    pfStack_3c = &local_28;
    pcStack_40 = (char *)0x10065061;
    FUN_10119320();
    pfStack_3c = (float *)&local_1c;
    pcStack_40 = (char *)0x10065076;
    (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
    piStack_44 = &local_10;
    pcStack_40 = (char *)0x3e31d0d4;
    pcStack_48 = (char *)0x1006508d;
    FUN_100dfea0();
    in_ECX[0x67] = (int)((float)in_ECX[0x66] + (float)in_ECX[0x67]);
    iVar4 = in_ECX[0x58];
    in_ECX[0x68] = (int)(*DAT_10223188 + 0.35);
    if ((iVar4 == 0) || (*(char *)(iVar4 + 0x680) == '\0')) {
      pcStack_40 = *(char **)(iVar4 + 0x2288);
      piStack_44 = *(int **)(iVar4 + 4);
      pcStack_48 = (char *)(int)_DAT_10226868;
    }
    else {
      pcStack_40 = *(char **)(iVar4 + 0x2288);
      piStack_44 = *(int **)(iVar4 + 4);
      pcStack_48 = (char *)0x23;
    }
    iStack_4c = 2;
    pcStack_50 = (char *)0x3;
    FUN_10088ca0(&local_28,1,local_1c,local_18,local_14,local_10,local_c,local_8,in_ECX[99],
                 in_ECX[100],in_ECX[0x65],0x46000000);
    pcStack_40 = (char *)0x40800000;
    in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
    piStack_44 = (int *)0x100651a3;
    FUN_100f9100();
    piStack_44 = (int *)in_ECX[0x58];
    pcStack_40 = (char *)0x1;
    (**(code **)(*piStack_44 + 0x104))(&pcStack_50);
    FUN_10116a40("weapons_new/revolver/revolver_fire.wav",0,1);
    *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
    *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
    in_ECX[0x73] = (int)(*DAT_10223188 + 0.65);
    in_ECX[0x74] = (int)(*DAT_10223188 + 0.65);
    if (in_ECX[0x79] < 1) {
      in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
    }
  }
  return;
}

