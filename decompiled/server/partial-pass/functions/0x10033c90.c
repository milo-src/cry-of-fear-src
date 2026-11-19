// rea decompile_all
// name: FUN_10033c90
// address: 0x10033c90
// body: available
// range: 0x10033c90-0x10034456 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10033c90(char param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float fVar6;
  undefined4 uStack_58;
  float *pfStack_54;
  float *pfStack_50;
  int *local_4c;
  int iStack_48;
  float *pfStack_44;
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
  float local_8;
  
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  iVar2 = in_ECX[0x58];
  uVar3 = *(uint *)(*(int *)(iVar2 + 4) + 0x1a8);
  if ((uVar3 & 0x40000) != 0) {
    return;
  }
  if ((uVar3 & 0x200) == 0) {
    return;
  }
  if (param_1 == '\0') {
    if ((*(uint *)(iVar2 + 0x22b0) & 0x800) == 0) {
      return;
    }
    fVar6 = *DAT_10223188;
    if (fVar6 < (float)in_ECX[0x74]) {
      return;
    }
    if (*(int *)(iVar2 + 0x5e0) < 1) goto LAB_10033d82;
  }
  else {
    if ((*(uint *)(iVar2 + 0x22b0) & 1) == 0) {
      return;
    }
    fVar6 = *DAT_10223188;
    if (fVar6 < (float)in_ECX[0x73]) {
      return;
    }
    if (*(int *)(iVar2 + 0x5dc) < 1) {
      if (fVar6 <= _DAT_102119ac) {
        return;
      }
      pfStack_44 = (float *)0x10033d2c;
      (**(code **)(*in_ECX + 400))();
      _DAT_102119ac = *DAT_10223188 + 0.25;
      return;
    }
  }
  if (*(int *)(*(int *)(iVar2 + 4) + 0x1c4) != 3) {
    local_8 = DAT_10223188[0xc] * 40.0;
    local_38 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + DAT_10223188[10] * 40.0;
    local_34 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
    local_30 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + local_8;
    if (param_1 == '\0') {
      pfStack_44 = (float *)0x1;
      iStack_48 = in_ECX[0x87];
      iVar2 = in_ECX[1];
      local_2c = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8) + DAT_10223188[10] * 80.0 +
                 DAT_10223188[0x10] * 20.0;
      local_28 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc) + DAT_10223188[0xb] * 80.0 +
                 DAT_10223188[0x11] * 20.0;
      local_24 = *(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10) + DAT_10223188[0xc] * 80.0 +
                 DAT_10223188[0x12] * 20.0;
      local_4c = *(int **)(iVar2 + 0x54);
      pfStack_50 = &local_38;
      pfStack_54 = &local_2c;
      uStack_58 = 0x10033fff;
      FUN_1011cf70();
      uStack_58 = *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
      (*DAT_10223000)(1,DAT_10226490,0);
      uVar4 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
      (*DAT_10223010)(uVar4);
      (*DAT_10223020)("aurora/gunsmoke.aur");
      (*DAT_10223008)(1);
      pfStack_44 = (float *)0x0;
      iStack_48 = in_ECX[0x80];
      local_4c = (int *)0x10034059;
      pfStack_44 = (float *)FUN_10031f00();
      iStack_48 = 0x10034060;
      (*DAT_10223020)();
      iStack_48 = 0;
      local_4c = (int *)0x10034068;
      (*DAT_10223010)();
      pfStack_44 = (float *)0x10034071;
      (*DAT_10223004)();
      local_4c = (int *)0xc1200000;
    }
    else {
      pfStack_44 = (float *)0x1;
      iStack_48 = in_ECX[0x87];
      iVar2 = in_ECX[1];
      local_4c = *(int **)(iVar2 + 0x54);
      pfStack_50 = &local_2c;
      pfStack_54 = &local_38;
      uStack_58 = 0x10033f2b;
      local_2c = local_38;
      local_38 = (*(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8) + DAT_10223188[10] * 80.0) -
                 DAT_10223188[0x10] * 20.0;
      local_28 = local_34;
      local_34 = (*(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc) + DAT_10223188[0xb] * 80.0) -
                 DAT_10223188[0x11] * 20.0;
      local_24 = local_30;
      local_30 = (*(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10) + DAT_10223188[0xc] * 80.0) -
                 DAT_10223188[0x12] * 20.0;
      FUN_1011cf70();
      local_4c = (int *)0x41200000;
    }
    pfStack_44 = (float *)0x40800000;
    iStack_48 = 0x40800000;
    pfStack_50 = (float *)0x1003409c;
    FUN_100f91b0();
    pfStack_50 = (float *)0x40a00000;
    if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x4000) == 0) {
      pfStack_50 = (float *)0x40c00000;
      local_4c = (int *)0x3eb33333;
    }
    else {
      local_4c = (int *)0x3e4ccccd;
    }
    pfStack_54 = (float *)(*(int *)(in_ECX[0x58] + 4) + 8);
    pfStack_44 = (float *)0x40000000;
    iStack_48 = 0x3e19999a;
    uStack_58 = 0x100340fa;
    FUN_10119de0();
    pfStack_44 = (float *)0x5;
    iStack_48 = 0x1003410a;
    FUN_100f2a50();
    puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
    *puVar1 = *puVar1 | 2;
    iVar2 = *(int *)(in_ECX[0x58] + 4);
    local_38 = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
    local_34 = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
    local_30 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
    pfStack_44 = &local_38;
    iStack_48 = 0x10034159;
    FUN_10119320();
    pfStack_44 = (float *)&local_20;
    iStack_48 = 0x1003416e;
    (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
    local_4c = &local_14;
    iStack_48 = 0x3e31d0d4;
    pfStack_50 = (float *)0x10034185;
    FUN_100dfea0();
    in_ECX[0x67] = 0x40a00000;
    iStack_48 = *(undefined4 *)(in_ECX[0x58] + 0x2288);
    local_4c = *(int **)(in_ECX[0x58] + 4);
    if (param_1 == '\0') {
      pfStack_50 = (float *)in_ECX[0x86];
      pfStack_54 = (float *)0x2;
      uStack_58 = 3;
      FUN_10088ca0(&local_38,1,local_20,local_1c,local_18,local_14,local_10,local_c,in_ECX[99],
                   in_ECX[100],in_ECX[0x65],0x46000000);
      in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
    }
    else {
      pfStack_50 = (float *)in_ECX[0x84];
      pfStack_54 = (float *)0x2;
      uStack_58 = 3;
      FUN_10088ca0(&local_38,1,local_20,local_1c,local_18,local_14,local_10,local_c,in_ECX[99],
                   in_ECX[100],in_ECX[0x65],0x46000000);
      _DAT_102119b0 = *DAT_10223188 + 1.0;
    }
    iStack_48 = 0x41000000;
    local_4c = (int *)0x100342f8;
    FUN_100f9100();
    iStack_48 = 10;
    local_4c = (int *)0x0;
    pfStack_50 = (float *)0x10034302;
    (*DAT_102230b0)();
    local_4c = (int *)in_ECX[0x58];
    iStack_48 = 1;
    (**(code **)(*local_4c + 0x104))(&uStack_58);
    FUN_10116a40("weapons_new/p345/p345_fire.wav",0,1);
    *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
    *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
    iVar2 = in_ECX[0x58];
    if (param_1 == '\0') {
      if (*(char *)(iVar2 + 0x21ea) == '\0') {
        *(int *)(iVar2 + 0x5e0) = *(int *)(iVar2 + 0x5e0) + -1;
      }
      local_4c = (int *)in_ECX[0x80];
      pfStack_50 = (float *)0x1003440e;
      fVar5 = (float10)FUN_10031dd0();
      in_ECX[0x74] = (int)(float)(fVar5 + (float10)*DAT_10223188);
      local_4c = (int *)0x10034422;
      FUN_10036540();
      local_4c = (int *)0x0;
      pfStack_50 = (float *)0x1;
      if (*(int *)(in_ECX[0x58] + 0x5e0) == 0) {
        pfStack_54 = (float *)0x3;
        uStack_58 = 0x1003444f;
        (**(code **)(*in_ECX + 0x198))();
        return;
      }
      pfStack_54 = (float *)0x2;
      uStack_58 = 0x10034443;
      (**(code **)(*in_ECX + 0x198))();
      return;
    }
    if (*(char *)(iVar2 + 0x21ea) == '\0') {
      *(int *)(iVar2 + 0x5dc) = *(int *)(iVar2 + 0x5dc) + -1;
    }
    local_4c = (int *)in_ECX[0x81];
    pfStack_50 = (float *)0x1003438c;
    fVar5 = (float10)FUN_10031dd0();
    in_ECX[0x73] = (int)(float)(fVar5 + (float10)*DAT_10223188);
    local_4c = (int *)0x100343a0;
    FUN_10036540();
    pfStack_50 = (float *)in_ECX[0x58];
    local_4c = (int *)(3 - (uint)(*(int *)((int)pfStack_50 + 0x5dc) != 0));
    pfStack_54 = (float *)0x100343bf;
    FUN_10038f10();
    local_4c = *(int **)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
    pfStack_50 = (float *)0x0;
    pfStack_54 = (float *)DAT_10226614;
    uStack_58 = 1;
    (*DAT_10223000)();
    (*DAT_10223008)(0);
    local_4c = (int *)0x100343ef;
    (*DAT_10223004)();
    return;
  }
LAB_10033d82:
  if (fVar6 < (float)in_ECX[0x6c] || fVar6 == (float)in_ECX[0x6c]) {
    return;
  }
  pfStack_44 = (float *)0x10033d99;
  (**(code **)(*in_ECX + 400))();
  in_ECX[0x6c] = (int)(*DAT_10223188 + 0.8);
  return;
}

