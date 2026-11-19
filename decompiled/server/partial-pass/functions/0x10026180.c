// rea decompile_all
// name: FUN_10026180
// address: 0x10026180
// body: available
// range: 0x10026180-0x10026877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026180(void)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int *piStack_64;
  float *pfStack_60;
  float *pfStack_5c;
  float local_58;
  int iStack_54;
  undefined4 uStack_50;
  int local_48;
  int local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if (*DAT_10223188 <= (float)in_ECX[0x73] && (float)in_ECX[0x73] != *DAT_10223188) {
    return;
  }
  uStack_50 = 0x100261b0;
  iVar2 = FUN_10017780();
  if ((iVar2 == 0) && ((*(byte *)(in_ECX[0x58] + 0x22b0) & 1) == 0)) {
    return;
  }
  if ((char)in_ECX[0x7e] != '\0') {
    return;
  }
  if (*(int *)(*(int *)(in_ECX[0x58] + 4) + 0x1c4) == 3) {
    if (*DAT_10223188 < (float)in_ECX[0x6c] || *DAT_10223188 == (float)in_ECX[0x6c]) {
      return;
    }
    uStack_50 = 0x10026206;
    (**(code **)(*in_ECX + 400))();
    in_ECX[0x6c] = (int)(*DAT_10223188 + 0.25);
    return;
  }
  if (in_ECX[0x79] < 1) {
    if (in_ECX[0x6e] == 0) {
      uStack_50 = 0x1002624b;
      (**(code **)(*in_ECX + 0x1c0))();
    }
    else if ((float)in_ECX[0x6c] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x6c]) {
      uStack_50 = 0x10026269;
      (**(code **)(*in_ECX + 400))();
      in_ECX[0x6c] = (int)(*DAT_10223188 + 0.25);
    }
    in_ECX[0x73] = (int)(*DAT_10223188 + 0.1);
    in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
    return;
  }
  uStack_50 = 1;
  iStack_54 = in_ECX[0x7f];
  local_8 = DAT_10223188[10] * 40.0;
  local_14 = DAT_10223188[0x11] * 220.0 + DAT_10223188[0xe] * 200.0 + DAT_10223188[0xb] * 40.0;
  local_10 = DAT_10223188[0x12] * 220.0 + DAT_10223188[0xf] * 200.0 + DAT_10223188[0xc] * 40.0;
  local_18 = DAT_10223188[0x10] * 220.0 + DAT_10223188[0xd] * 200.0 + local_8;
  local_c = DAT_10223188[0x10] * 20.0;
  iVar2 = in_ECX[1];
  local_24 = *(float *)(iVar2 + 0x178) + *(float *)(iVar2 + 8) + DAT_10223188[10] * 80.0 + local_c;
  local_20 = *(float *)(iVar2 + 0x17c) + *(float *)(iVar2 + 0xc) + DAT_10223188[0xb] * 80.0 +
             DAT_10223188[0x11] * 20.0;
  local_1c = *(float *)(iVar2 + 0x180) + *(float *)(iVar2 + 0x10) + DAT_10223188[0xc] * 80.0 +
             DAT_10223188[0x12] * 20.0;
  local_58 = *(float *)(iVar2 + 0x54);
  pfStack_5c = &local_18;
  pfStack_60 = &local_24;
  piStack_64 = (int *)0x10026425;
  FUN_1011cf70();
  piStack_64 = *(int **)(*(int *)(in_ECX[0x58] + 4) + 0x20c);
  uStack_68 = 0;
  uStack_6c = DAT_10226490;
  uStack_70 = 1;
  (*DAT_10223000)();
  uVar3 = (*DAT_10223064)(*(undefined4 *)(in_ECX[1] + 0x20c));
  (*DAT_10223010)(uVar3);
  (*DAT_10223020)("aurora/gunsmoke.aur");
  (*DAT_10223008)(1);
  (*DAT_10223020)("models/weapons/browning/v_browning_wheelchair.mdl");
  (*DAT_10223010)(0);
  uStack_50 = 0x10026489;
  (*DAT_10223004)();
  if (*(char *)(in_ECX[0x58] + 0x21ea) == '\0') {
    in_ECX[0x79] = in_ECX[0x79] + -1;
  }
  uStack_50 = 0x3f800000;
  iStack_54 = 0x3f800000;
  local_58 = 2.8026e-45;
  pfStack_5c = (float *)0xfffffffe;
  pfStack_60 = (float *)0x100264ba;
  iVar2 = (*DAT_102230b0)();
  local_58 = (float)iVar2;
  pfStack_5c = (float *)0x100264d4;
  FUN_100f91b0();
  uStack_50 = 0x40000000;
  pfStack_60 = (float *)(*(int *)(in_ECX[0x58] + 4) + 8);
  iStack_54 = 0x3e19999a;
  local_58 = 0.25;
  pfStack_5c = (float *)0x40a00000;
  piStack_64 = (int *)0x10026508;
  FUN_10119de0();
  fVar6 = (float)in_ECX[0x46] + 0.75;
  in_ECX[0x46] = (int)fVar6;
  if (1.0 <= fVar6) {
    if ((1.0 <= fVar6) && (fVar6 < 2.0)) {
      uVar3 = 0x3c0f0846;
      local_28 = 0.00873;
      goto LAB_100265c0;
    }
    if ((2.0 <= fVar6) && (fVar6 < 3.0)) {
      uVar3 = 0x3cd67770;
      local_28 = 0.02618;
      goto LAB_100265c0;
    }
    if ((3.0 <= fVar6) && (fVar6 < 4.0)) {
      uVar3 = 0x3d566278;
      local_28 = 0.05234;
      goto LAB_100265c0;
    }
    if (4.0 <= fVar6) {
      uVar3 = 0x3db280f1;
      local_28 = 0.08716;
      goto LAB_100265c0;
    }
  }
  uVar3 = 0;
  local_28 = 0.0;
LAB_100265c0:
  *(ulonglong *)(in_ECX + 99) = CONCAT44(uVar3,uVar3);
  uStack_50 = 0;
  in_ECX[0x65] = (int)local_28;
  iStack_54 = 1;
  local_58 = 2.8026e-45;
  pfStack_5c = (float *)0x100265e4;
  (**(code **)(*in_ECX + 0x198))();
  pfStack_5c = (float *)0x5;
  pfStack_60 = (float *)0x100265f1;
  FUN_100f2a50();
  puVar1 = (uint *)(*(int *)(in_ECX[0x58] + 4) + 0x118);
  *puVar1 = *puVar1 | 2;
  iVar2 = *(int *)(in_ECX[0x58] + 4);
  local_30 = *(float *)(iVar2 + 0x68) + *(float *)(iVar2 + 0x74);
  local_2c = *(float *)(iVar2 + 0x6c) + *(float *)(iVar2 + 0x78);
  local_28 = *(float *)(iVar2 + 0x70) + *(float *)(iVar2 + 0x7c);
  pfStack_5c = &local_30;
  pfStack_60 = (float *)0x10026640;
  FUN_10119320();
  pfStack_5c = (float *)&local_48;
  pfStack_60 = (float *)0x10026655;
  (**(code **)(*(int *)in_ECX[0x58] + 0x228))();
  piStack_64 = &local_3c;
  pfStack_60 = (float *)0x3e31d0d4;
  uStack_68 = 0x1002666c;
  FUN_100dfea0();
  pfStack_60 = (float *)0x1002667d;
  iVar2 = FUN_10017780();
  pfStack_60 = *(float **)(in_ECX[0x58] + 0x2288);
  piStack_64 = *(int **)(in_ECX[0x58] + 4);
  uStack_68 = 10;
  uStack_6c = 2;
  uStack_70 = 3;
  if (iVar2 == 0) {
    fVar6 = (float)in_ECX[99];
    fVar5 = (float)in_ECX[100];
    fVar4 = (float)in_ECX[0x65];
  }
  else {
    fVar6 = (float)in_ECX[99] + 0.0349;
    fVar5 = (float)in_ECX[100] + 0.0349;
    fVar4 = (float)in_ECX[0x65] + 0.0349;
    iVar2 = *(int *)(in_ECX[0x58] + 4);
    local_3c = *(undefined4 *)(iVar2 + 0x74);
    local_38 = *(undefined4 *)(iVar2 + 0x78);
    local_34 = *(undefined4 *)(iVar2 + 0x7c);
    local_48 = in_ECX[0x80];
    local_44 = in_ECX[0x81];
    local_40 = in_ECX[0x82];
  }
  FUN_10088ca0(&local_30,1,local_48,local_44,local_40,local_3c,local_38,local_34,fVar6,fVar5,fVar4,
               0x46000000);
  pfStack_60 = (float *)0x40400000;
  in_ECX[0x76] = (int)(*DAT_10223188 + 1.0);
  piStack_64 = (int *)0x100267bc;
  FUN_100f9100();
  piStack_64 = (int *)in_ECX[0x58];
  pfStack_60 = (float *)0x1;
  (**(code **)(*piStack_64 + 0x104))(&uStack_70);
  FUN_10116a40("weapons_new/browning/browning_fire.wav",0,1);
  *(undefined4 *)(in_ECX[0x58] + 0x2298) = 1;
  *(float *)(in_ECX[0x58] + 0x22a0) = *DAT_10223188 + 0.2;
  in_ECX[0x73] = (int)(*DAT_10223188 + 0.25);
  in_ECX[0x74] = (int)(*DAT_10223188 + 1.0);
  if (in_ECX[0x79] < 1) {
    in_ECX[0x73] = (int)(*DAT_10223188 + 1.0);
  }
  return;
}

