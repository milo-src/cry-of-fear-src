// rea decompile_all
// name: FUN_10032330
// address: 0x10032330
// body: available
// range: 0x10032330-0x10032b25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10032330(char param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  char cVar6;
  undefined4 uVar7;
  int *in_ECX;
  float10 fVar8;
  int iStack_58;
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
  
  cVar6 = param_1;
  if (in_ECX[0x4a] != 0) {
    return;
  }
  if (DAT_102119d0 != 0) {
    return;
  }
  iVar3 = in_ECX[0x58];
  uVar4 = *(uint *)(*(int *)(iVar3 + 4) + 0x1a8);
  if ((uVar4 & 0x40000) != 0) {
    return;
  }
  if ((uVar4 & 0x200) == 0) {
    return;
  }
  if (param_1 == '\0') {
    if ((*(uint *)(iVar3 + 0x22b0) & 0x800) == 0) {
      return;
    }
    if (*DAT_10223188 <= (float)in_ECX[0x74] && (float)in_ECX[0x74] != *DAT_10223188) {
      return;
    }
    if (*(int *)(iVar3 + 0x5e0) < 1) {
      pfStack_44 = (float *)0x10032417;
      (**(code **)(*in_ECX + 400))();
      in_ECX[0x74] = (int)(*DAT_10223188 + 0.8);
      return;
    }
  }
  else {
    if ((*(uint *)(iVar3 + 0x22b0) & 1) == 0) {
      return;
    }
    if (*DAT_10223188 <= (float)in_ECX[0x73] && (float)in_ECX[0x73] != *DAT_10223188) {
      return;
    }
    if (*(int *)(iVar3 + 0x5dc) < 1) {
      pfStack_44 = (float *)0x100323bb;
      (**(code **)(*in_ECX + 400))();
      in_ECX[0x73] = (int)(*DAT_10223188 + 0.8);
      return;
    }
  }
  if (*(int *)(*(int *)(iVar3 + 4) + 0x1c4) == 3) {
    pfStack_44 = (float *)0x10032452;
    (**(code **)(*in_ECX + 400))();
    fVar5 = *DAT_10223188 + 0.25;
    if (param_1 == '\0') {
      in_ECX[0x76] = (int)fVar5;
      in_ECX[0x74] = (int)fVar5;
      return;
    }
    _DAT_102119b0 = fVar5;
    in_ECX[0x73] = (int)fVar5;
    return;
  }
  local_8 = DAT_10223188[0xc] * 40.0;
  local_38 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + DAT_10223188[10] * 40.0;
  local_34 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
  local_30 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + local_8;
  if (param_1 == '\0') {
    pfStack_44 = (float *)0x1;
    iStack_48 = in_ECX[0x87];
    iVar3 = in_ECX[1];
    local_2c = *(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 8) + DAT_10223188[10] * 80.0 +
               DAT_10223188[0x10] * 20.0;
    local_28 = *(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0xc) + DAT_10223188[0xb] * 80.0 +
               DAT_10223188[0x11] * 20.0;
    local_24 = *(float *)(iVar3 + 0x180) + *(float *)(iVar3 + 0x10) + DAT_10223188[0xc] * 80.0 +
               DAT_10223188[0x12] * 20.0;
    local_4c = *(int **)(iVar3 + 0x54);
    pfStack_50 = &local_38;
    pfStack_54 = &local_2c;
    iStack_58 = 0x100326d3;
    FUN_1011cf70();
    iStack_58 = *(int *)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
    (*DAT_10223000)(1,DAT_10226490,0);
    uVar7 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
    (*DAT_10223010)(uVar7);
    (*DAT_10223020)("aurora/gunsmoke.aur");
    (*DAT_10223008)(1);
    pfStack_44 = (float *)0x0;
    iStack_48 = in_ECX[0x80];
    local_4c = (int *)0x1003272d;
    pfStack_44 = (float *)FUN_10031f00();
    iStack_48 = 0x10032734;
    (*DAT_10223020)();
    iStack_48 = 0;
    local_4c = (int *)0x1003273c;
    (*DAT_10223010)();
    pfStack_44 = (float *)0x10032745;
    (*DAT_10223004)();
    local_4c = (int *)0xc0c00000;
  }
  else {
    pfStack_44 = (float *)0x1;
    iStack_48 = in_ECX[0x87];
    iVar3 = in_ECX[1];
    local_4c = *(int **)(iVar3 + 0x54);
    pfStack_50 = &local_2c;
    pfStack_54 = &local_38;
    iStack_58 = 0x100325ff;
    local_2c = local_38;
    local_38 = (*(float *)(iVar3 + 0x178) + *(float *)(iVar3 + 8) + DAT_10223188[10] * 80.0) -
               DAT_10223188[0x10] * 20.0;
    local_28 = local_34;
    local_34 = (*(float *)(iVar3 + 0x17c) + *(float *)(iVar3 + 0xc) + DAT_10223188[0xb] * 80.0) -
               DAT_10223188[0x11] * 20.0;
    local_24 = local_30;
    local_30 = (*(float *)(iVar3 + 0x180) + *(float *)(iVar3 + 0x10) + DAT_10223188[0xc] * 80.0) -
               DAT_10223188[0x12] * 20.0;
    FUN_1011cf70();
    local_4c = (int *)0x40c00000;
  }
  _param_1 = 0x40000000;
  pfStack_44 = (float *)0x40000000;
  iStack_48 = 0x40000000;
  pfStack_50 = (float *)0x1003277d;
  FUN_100f91b0();
  if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x4000) == 0) {
    iStack_48 = 0x3e19999a;
    _param_1 = 0x40a00000;
    local_4c = (int *)0x3e800000;
  }
  else {
    local_4c = (int *)0x3dcccccd;
    iStack_48 = 0x3dcccccd;
  }
  pfStack_54 = (float *)(*(int *)(in_ECX[0x58] + 4) + 8);
  pfStack_44 = (float *)0x40000000;
  pfStack_50 = (float *)_param_1;
  iStack_58 = 0x100327e6;
  FUN_10119de0();
  pfStack_44 = (float *)0x5;
  iStack_48 = 0x100327f6;
  FUN_100f2a50();
  puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
  *puVar1 = *puVar1 | 2;
  iVar3 = *(int *)(in_ECX[0x58] + 4);
  local_38 = *(float *)(iVar3 + 0x68) + *(float *)(iVar3 + 0x74);
  local_34 = *(float *)(iVar3 + 0x6c) + *(float *)(iVar3 + 0x78);
  local_30 = *(float *)(iVar3 + 0x70) + *(float *)(iVar3 + 0x7c);
  pfStack_44 = &local_38;
  iStack_48 = 0x10032845;
  FUN_10119320();
  pfStack_44 = (float *)&local_20;
  iStack_48 = 0x1003285a;
  (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
  local_4c = &local_14;
  iStack_48 = 0x3e31d0d4;
  pfStack_50 = (float *)0x10032871;
  FUN_100dfea0();
  iStack_48 = *(undefined4 *)(in_ECX[0x58] + 0x2288);
  local_4c = *(int **)(in_ECX[0x58] + 4);
  if (cVar6 == '\0') {
    pfStack_50 = (float *)in_ECX[0x86];
    pfStack_54 = (float *)0x2;
    iStack_58 = 3;
    FUN_10088ca0(&local_38,1,local_20,local_1c,local_18,local_14,local_10,local_c,in_ECX[99],
                 in_ECX[100],in_ECX[0x65],0x46000000);
    in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
  }
  else {
    pfStack_50 = (float *)in_ECX[0x84];
    pfStack_54 = (float *)0x2;
    iStack_58 = 3;
    FUN_10088ca0(&local_38,1,local_20,local_1c,local_18,local_14,local_10,local_c,in_ECX[99],
                 in_ECX[100],in_ECX[0x65],0x46000000);
    _DAT_102119b0 = *DAT_10223188 + 1.0;
  }
  iStack_48 = 0x40a00000;
  local_4c = (int *)0x100329da;
  FUN_100f9100();
  iStack_48 = 10;
  local_4c = (int *)0x0;
  pfStack_50 = (float *)0x100329e4;
  (*DAT_102230b0)();
  local_4c = (int *)in_ECX[0x58];
  if (cVar6 == '\0') {
    if (*(char *)((int)local_4c + 0x21ea) != '\0') goto LAB_10032a13;
    local_4c[0x178] = local_4c[0x178] + -1;
  }
  else {
    if (*(char *)((int)local_4c + 0x21ea) != '\0') goto LAB_10032a13;
    local_4c[0x177] = local_4c[0x177] + -1;
  }
  local_4c = (int *)in_ECX[0x58];
LAB_10032a13:
  iStack_48 = 1;
  (**(code **)(*local_4c + 0x104))(&iStack_58);
  FUN_10116a40("weapons_new/glock/glock_fire.wav",0,1);
  local_4c = (int *)0x10032a3a;
  FUN_10036540();
  *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
  *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
  pfStack_50 = (float *)in_ECX[0x58];
  if (cVar6 == '\0') {
    piVar2 = (int *)((int)pfStack_50 + 0x5e0);
    local_4c = (int *)0x0;
    pfStack_50 = (float *)0x1;
    if (*piVar2 == 0) {
      pfStack_54 = (float *)0x3;
    }
    else {
      pfStack_54 = (float *)0x2;
    }
    iStack_58 = 0x10032b04;
    (**(code **)(*in_ECX + 0x198))();
    iStack_58 = in_ECX[0x80];
    fVar8 = (float10)FUN_10031dd0();
    in_ECX[0x74] = (int)(float)(fVar8 + (float10)*DAT_10223188);
    return;
  }
  local_4c = (int *)(3 - (uint)(*(int *)((int)pfStack_50 + 0x5dc) != 0));
  pfStack_54 = (float *)0x10032a93;
  FUN_10038f10();
  local_4c = (int *)in_ECX[0x81];
  pfStack_50 = (float *)0x10032aa0;
  fVar8 = (float10)FUN_10031dd0();
  in_ECX[0x73] = (int)(float)(fVar8 + (float10)*DAT_10223188);
  local_4c = *(int **)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
  pfStack_50 = (float *)0x0;
  pfStack_54 = (float *)DAT_10226614;
  iStack_58 = 1;
  (*DAT_10223000)();
  (*DAT_10223008)(0);
  local_4c = (int *)0x10032add;
  (*DAT_10223004)();
  return;
}

