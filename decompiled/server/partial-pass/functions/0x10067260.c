// rea decompile_all
// name: FUN_10067260
// address: 0x10067260
// body: available
// range: 0x10067260-0x100678ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10067260(void)

{
  uint *puVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  undefined4 uStack_74;
  char *pcStack_70;
  float *pfStack_6c;
  int *piStack_68;
  int iStack_64;
  float *pfStack_60;
  float fStack_5c;
  char *pcStack_58;
  undefined4 uStack_54;
  float *pfStack_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  fVar2 = *DAT_10223188;
  if (((((float)in_ECX[0x73] <= fVar2) && (in_ECX[0x4a] == 0)) && (in_ECX[0x50] == 0)) &&
     ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) != 0)) {
    iVar4 = *(int *)(in_ECX[0x58] + 4);
    if (*(int *)(iVar4 + 0x1c4) != 3) {
      if (0 < in_ECX[0x79]) {
        pfStack_50 = *(float **)(iVar4 + 0x20c);
        uStack_54 = 0;
        pcStack_58 = (char *)DAT_10226490;
        fStack_5c = 1.4013e-45;
        pfStack_60 = (float *)0x1006733e;
        (*DAT_10223000)();
        pfStack_60 = *(float **)(in_ECX[1] + 0x20c);
        iStack_64 = 0x1006734d;
        iStack_64 = (*DAT_10223064)();
        piStack_68 = (int *)0x10067354;
        (*DAT_10223010)();
        piStack_68 = (int *)0x101ab5e4;
        pfStack_6c = (float *)0x1006735f;
        (*DAT_10223020)();
        pfStack_6c = (float *)0x1;
        pcStack_70 = (char *)0x10067367;
        (*DAT_10223008)();
        pcStack_70 = "models/weapons/rifle/v_rifle.mdl";
        uStack_74 = 0x10067372;
        (*DAT_10223020)();
        uStack_74 = 0;
        (*DAT_10223010)();
        pfStack_50 = (float *)0x10067383;
        (*DAT_10223004)();
        piVar3 = (int *)in_ECX[0x58];
        if (*(char *)((int)piVar3 + 0x21ea) == '\0') {
          in_ECX[0x79] = in_ECX[0x79] + -1;
        }
        pfStack_50 = &local_2c;
        iVar4 = piVar3[0xa05];
        uStack_54 = 0x100673aa;
        (**(code **)(*piVar3 + 0x228))();
        uStack_54 = 0;
        pcStack_58 = (char *)0x0;
        fStack_5c = 0.0;
        pfStack_60 = (float *)in_ECX[0x5a];
        local_38 = local_2c + DAT_10223188[0x10] * 32.0;
        local_34 = local_28 + DAT_10223188[0x11] * 32.0;
        local_30 = local_24 + DAT_10223188[0x12] * 32.0;
        iStack_64 = 0;
        piStack_68 = (int *)0x0;
        pfStack_6c = &local_38;
        pcStack_70 = (char *)(*(int *)(in_ECX[0x58] + 4) + 8);
        uStack_74 = 0;
        (*DAT_10223134)(iVar4 != 1,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c),DAT_10231f50)
        ;
        uStack_54 = 0;
        pcStack_58 = "rifle_shoot";
        fStack_5c = 2.6516507e-29;
        FUN_100ea240();
        local_8 = 0x40800000;
        if (*(char *)((int)in_ECX + 0x106) == '\0') {
          uStack_54 = 9;
          pcStack_58 = (char *)0xfffffff7;
          fStack_5c = 2.6516604e-29;
          iVar4 = (*DAT_102230b0)();
          uStack_54 = 0x40800000;
          pcStack_58 = (char *)0x40800000;
        }
        else {
          uStack_54 = 4;
          pcStack_58 = (char *)0xfffffffc;
          fStack_5c = 2.6516673e-29;
          iVar4 = (*DAT_102230b0)();
          pcStack_58 = (char *)0x40400000;
          uStack_54 = 0x40000000;
        }
        fStack_5c = (float)iVar4;
        pfStack_60 = (float *)0x100674d5;
        FUN_100f91b0();
        pfStack_60 = (float *)0x40a00000;
        iStack_64 = *(int *)(in_ECX[0x58] + 4);
        if (*(char *)((int)in_ECX + 0x106) == '\0') {
          if ((*(uint *)(iStack_64 + 0x1a8) & 0x4000) == 0) {
            uStack_54 = 0x40c00000;
            pfStack_60 = (float *)0x40e00000;
            fStack_5c = 0.4;
            pcStack_58 = (char *)0x3e99999a;
            local_8 = 0x40c00000;
          }
          else {
            fStack_5c = 0.3;
            pcStack_58 = (char *)0x3e4ccccd;
            uStack_54 = local_8;
          }
        }
        else if ((*(uint *)(iStack_64 + 0x1a8) & 0x4000) == 0) {
          fStack_5c = 0.25;
          pfStack_60 = (float *)0x40a00000;
          pcStack_58 = (char *)0x3e19999a;
          uStack_54 = 0x40000000;
        }
        else {
          uStack_54 = 0x40000000;
          fStack_5c = 0.1;
          pfStack_60 = (float *)0x40000000;
          pcStack_58 = (char *)0x3dcccccd;
        }
        iStack_64 = iStack_64 + 8;
        piStack_68 = (int *)0x1006759e;
        FUN_10119de0();
        uStack_54 = 0;
        pcStack_58 = (char *)0x1;
        fStack_5c = 4.2039e-45;
        pfStack_60 = (float *)0x100675b1;
        (**(code **)(*in_ECX + 0x198))();
        pfStack_60 = (float *)0x5;
        iStack_64 = 0x100675be;
        FUN_100f2a50();
        puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
        *puVar1 = *puVar1 | 2;
        iVar4 = *(int *)(in_ECX[0x58] + 4);
        local_44 = *(float *)(iVar4 + 0x68) + *(float *)(iVar4 + 0x74);
        local_40 = *(float *)(iVar4 + 0x6c) + *(float *)(iVar4 + 0x78);
        local_3c = *(float *)(iVar4 + 0x70) + *(float *)(iVar4 + 0x7c);
        pfStack_60 = &local_44;
        iStack_64 = 0x1006760d;
        FUN_10119320();
        pfStack_60 = (float *)&local_20;
        iStack_64 = 0x10067622;
        (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
        piStack_68 = &local_14;
        iStack_64 = 0x3e31d0d4;
        pfStack_6c = (float *)0x10067639;
        FUN_100dfea0();
        in_ECX[0x67] = (int)((float)in_ECX[0x66] + (float)in_ECX[0x67]);
        in_ECX[0x68] = (int)(*DAT_10223188 + 1.8);
        iStack_64 = *(undefined4 *)(in_ECX[0x58] + 0x2288);
        piStack_68 = *(int **)(in_ECX[0x58] + 4);
        pfStack_6c = (float *)(int)_DAT_10226864;
        pcStack_70 = (char *)0x2;
        uStack_74 = 0x17;
        if (*(char *)((int)in_ECX + 0x106) == '\0') {
          iVar4 = in_ECX[99];
          iVar5 = in_ECX[100];
          iVar6 = in_ECX[0x65];
        }
        else {
          iVar4 = 0x3c0f0846;
          iVar5 = 0x3c0f0846;
          iVar6 = 0x3c0f0846;
        }
        FUN_10088ca0(&local_44,1,local_20,local_1c,local_18,local_14,local_10,local_c,iVar4,iVar5,
                     iVar6,0x46000000);
        in_ECX[0x76] = (int)(*DAT_10223188 + 0.58);
        if (*(char *)((int)in_ECX + 0x106) == '\0') {
          iStack_64 = 0x40a00000;
        }
        else {
          iStack_64 = 0x40400000;
        }
        piStack_68 = (int *)0x10067778;
        FUN_100f9100();
        piStack_68 = (int *)in_ECX[0x58];
        iStack_64 = 1;
        (**(code **)(*piStack_68 + 0x104))(&uStack_74);
        FUN_10116a40("weapons_new/rifle/rifle_fire.wav",0,1);
        if (*(char *)((int)in_ECX + 0x106) != '\0') {
          in_ECX[0x7e] = 1;
          in_ECX[0x7f] = (int)(*DAT_10223188 + 0.66);
        }
        in_ECX[0x80] = 1;
        in_ECX[0x81] = (int)(*DAT_10223188 + 0.76);
        *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
        *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
        in_ECX[0x73] = (int)(*DAT_10223188 + 1.66);
        in_ECX[0x74] = (int)(*DAT_10223188 + 1.66);
        in_ECX[0x75] = (int)(*DAT_10223188 + 1.66);
        in_ECX[0x76] = (int)(*DAT_10223188 + 1.66);
        return;
      }
      if (in_ECX[0x6e] == 0) {
        pfStack_50 = (float *)0x10067322;
        (**(code **)(*in_ECX + 0x1c0))();
        return;
      }
    }
    if ((float)in_ECX[0x6c] <= fVar2 && fVar2 != (float)in_ECX[0x6c]) {
      pfStack_50 = (float *)0x0;
      uStack_54 = 1;
      pcStack_58 = (char *)0x12;
      fStack_5c = 2.6515313e-29;
      (**(code **)(*in_ECX + 0x198))();
      fStack_5c = 2.6515343e-29;
      (**(code **)(*in_ECX + 400))();
      in_ECX[0x6c] = (int)(*DAT_10223188 + 0.25);
      return;
    }
  }
  return;
}

