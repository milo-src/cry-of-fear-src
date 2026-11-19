// rea decompile_all
// name: FUN_10009e50
// address: 0x10009e50
// body: available
// range: 0x10009e50-0x1000a587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e50(void)

{
  float *pfVar1;
  int iVar2;
  char *_Str;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  undefined1 local_108 [72];
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  float local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  local_44 = *(float *)(DAT_10220c50 + 0x45468);
  local_40 = *(float *)(DAT_10220c50 + 0x4546c);
  fVar6 = *(float *)(DAT_10220c50 + 0x214);
  if ((fVar6 != 0.0) && (fVar6 < 50.0)) goto LAB_1000a576;
  if (50.0 <= fVar6) {
    *(undefined4 *)(DAT_10220c50 + 0x14) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x18) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x1c) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x20) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x24) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x28) = 0;
  }
  *(undefined4 *)(DAT_10220c50 + 0x1c) = 0;
  *(undefined4 *)(DAT_10220c50 + 0x28) = 0;
  FUN_100033d0(DAT_10220c50 + 0x14);
  FUN_100033d0(DAT_10220c50 + 0x20);
  local_38 = *(float *)(DAT_10220c50 + 0x20) * local_40 + *(float *)(DAT_10220c50 + 0x14) * local_44
  ;
  local_24 = 0;
  local_30 = 0;
  local_34 = *(float *)(DAT_10220c50 + 0x24) * local_40 + *(float *)(DAT_10220c50 + 0x18) * local_44
  ;
  local_2c = local_38;
  local_28 = local_34;
  fVar5 = (float10)FUN_100033d0(&local_38);
  local_40 = (float)fVar5;
  local_3c = (*(float *)(DAT_10220c50 + 0x1f8) * local_40) / 100.0;
  if (*(float *)(DAT_10220c50 + 500) < local_3c) {
    FUN_10003490(&local_2c,*(float *)(DAT_10220c50 + 500) / local_3c,&local_2c);
    local_3c = *(float *)(DAT_10220c50 + 500);
  }
  _Str = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1470);
  iVar3 = _atoi(_Str);
  if (((iVar3 != 0) && ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) &&
     (local_3c = local_3c * 0.75, *(int *)(DAT_10220c50 + 0x98) != 0)) {
    local_3c = local_3c * 0.75;
  }
  *(undefined4 *)(DAT_10220c50 + 100) = 0;
  fVar6 = 30.0;
  if (30.0 <= local_3c) {
    fVar6 = local_3c;
  }
  FUN_10003670(&local_38,fVar6,*(undefined4 *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x10));
  iVar3 = DAT_10220c50;
  *(undefined4 *)(DAT_10220c50 + 100) = 0;
  pfVar1 = (float *)(DAT_10220c50 + 0x5c);
  *pfVar1 = *(float *)(DAT_10220c50 + 0x74) + *pfVar1;
  *(float *)(DAT_10220c50 + 0x60) =
       *(float *)(DAT_10220c50 + 0x78) + *(float *)(DAT_10220c50 + 0x60);
  *(float *)(iVar3 + 100) = *(float *)(DAT_10220c50 + 0x7c) + *(float *)(iVar3 + 100);
  fVar5 = (float10)FUN_10002fd0(pfVar1);
  local_40 = (float)fVar5;
  if (local_40 < 1.0) {
    *(undefined4 *)(DAT_10220c50 + 0x5c) = 0;
    *(undefined4 *)(DAT_10220c50 + 0x60) = 0;
    *(undefined4 *)(DAT_10220c50 + 100) = 0;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
    return;
  }
  iVar3 = *(int *)(DAT_10220c50 + 0xe0);
  local_20 = *(float *)(DAT_10220c50 + 0x5c) * *(float *)(DAT_10220c50 + 0x10) +
             *(float *)(DAT_10220c50 + 0x38);
  local_1c = *(float *)(DAT_10220c50 + 0x60) * *(float *)(DAT_10220c50 + 0x10) +
             *(float *)(DAT_10220c50 + 0x3c);
  local_18 = *(float *)(DAT_10220c50 + 0x40);
  piVar4 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))
                            (local_108,(float *)(DAT_10220c50 + 0x38),&local_20,0,0xffffffff);
  local_b0 = (float)piVar4[4];
  iStack_ac = piVar4[5];
  iStack_a8 = piVar4[6];
  iStack_a4 = piVar4[7];
  local_c0 = *piVar4;
  iStack_bc = piVar4[1];
  iStack_b8 = piVar4[2];
  iStack_b4 = piVar4[3];
  local_a0 = piVar4[8];
  iStack_9c = piVar4[9];
  iStack_98 = piVar4[10];
  iStack_94 = piVar4[0xb];
  local_90 = piVar4[0xc];
  iStack_8c = piVar4[0xd];
  iStack_88 = piVar4[0xe];
  iStack_84 = piVar4[0xf];
  if (local_b0 == 1.0) {
    *(int *)(DAT_10220c50 + 0x38) = iStack_ac;
    *(int *)(DAT_10220c50 + 0x3c) = iStack_a8;
    *(int *)(DAT_10220c50 + 0x40) = iStack_a4;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
    return;
  }
  if (((iVar3 == -1) &&
      ((*(int *)(DAT_10220c50 + 0xe4) == 0 || (*(int *)(DAT_10220c50 + 0xe8) == -0x13)))) ||
     (*(float *)(DAT_10220c50 + 0xcc) != 0.0)) goto LAB_1000a576;
  local_48 = *(float *)(DAT_10220c50 + 0x38);
  local_3c = *(float *)(DAT_10220c50 + 0x3c);
  local_50 = *(undefined4 *)(DAT_10220c50 + 0x40);
  local_54 = *(undefined4 *)(DAT_10220c50 + 0x5c);
  local_58 = *(undefined4 *)(DAT_10220c50 + 0x60);
  local_5c = *(undefined4 *)(DAT_10220c50 + 100);
  FUN_10005880();
  iVar3 = DAT_10220c50;
  local_4c = *(float *)(DAT_10220c50 + 0x38);
  pfVar1 = (float *)(DAT_10220c50 + 0x38);
  local_44 = *(float *)(DAT_10220c50 + 0x3c);
  local_60 = *(undefined4 *)(DAT_10220c50 + 0x40);
  local_64 = *(undefined4 *)(DAT_10220c50 + 0x5c);
  local_68 = *(undefined4 *)(DAT_10220c50 + 0x60);
  local_40 = *(float *)(DAT_10220c50 + 100);
  *pfVar1 = local_48;
  *(float *)(iVar3 + 0x3c) = local_3c;
  *(undefined4 *)(iVar3 + 0x40) = local_50;
  *(undefined4 *)(iVar3 + 0x5c) = local_54;
  *(undefined4 *)(iVar3 + 0x60) = local_58;
  *(undefined4 *)(iVar3 + 100) = local_5c;
  local_20 = *pfVar1;
  local_1c = *(float *)(iVar3 + 0x3c);
  local_18 = *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x30) + *(float *)(iVar3 + 0x40);
  piVar4 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))(local_108,pfVar1,&local_20,0,0xffffffff);
  local_b0 = (float)piVar4[4];
  iStack_ac = piVar4[5];
  iStack_a8 = piVar4[6];
  iStack_a4 = piVar4[7];
  local_c0 = *piVar4;
  iStack_bc = piVar4[1];
  iStack_b8 = piVar4[2];
  iStack_b4 = piVar4[3];
  local_a0 = piVar4[8];
  iStack_9c = piVar4[9];
  iStack_98 = piVar4[10];
  iStack_94 = piVar4[0xb];
  local_90 = piVar4[0xc];
  iStack_8c = piVar4[0xd];
  iStack_88 = piVar4[0xe];
  iStack_84 = piVar4[0xf];
  if ((iStack_bc == 0) && (local_c0 == 0)) {
    *(int *)(DAT_10220c50 + 0x38) = iStack_ac;
    *(int *)(DAT_10220c50 + 0x3c) = iStack_a8;
    *(int *)(DAT_10220c50 + 0x40) = iStack_a4;
  }
  FUN_10005880();
  local_20 = *(float *)(DAT_10220c50 + 0x38);
  local_1c = *(float *)(DAT_10220c50 + 0x3c);
  local_18 = *(float *)(DAT_10220c50 + 0x40) - *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x30);
  piVar4 = (int *)(**(code **)(DAT_10220c50 + 0x4f584))
                            (local_108,DAT_10220c50 + 0x38,&local_20,0,0xffffffff);
  local_c0 = *piVar4;
  iStack_bc = piVar4[1];
  iStack_b8 = piVar4[2];
  iStack_b4 = piVar4[3];
  local_b0 = (float)piVar4[4];
  iStack_ac = piVar4[5];
  iStack_a8 = piVar4[6];
  iStack_a4 = piVar4[7];
  local_90 = piVar4[0xc];
  iStack_8c = piVar4[0xd];
  iStack_88 = piVar4[0xe];
  iStack_84 = piVar4[0xf];
  if ((float)piVar4[10] < 0.7) {
LAB_1000a526:
    *(float *)(DAT_10220c50 + 0x38) = local_4c;
    *(float *)(DAT_10220c50 + 0x3c) = local_44;
    *(undefined4 *)(DAT_10220c50 + 0x40) = local_60;
    *(undefined4 *)(DAT_10220c50 + 0x5c) = local_64;
    *(undefined4 *)(DAT_10220c50 + 0x60) = local_68;
  }
  else {
    if ((iStack_bc == 0) && (local_c0 == 0)) {
      *(int *)(DAT_10220c50 + 0x38) = iStack_ac;
      *(int *)(DAT_10220c50 + 0x3c) = iStack_a8;
      *(int *)(DAT_10220c50 + 0x40) = iStack_a4;
    }
    iVar3 = DAT_10220c50;
    *(undefined4 *)(DAT_10220c50 + 0x2c) = *(undefined4 *)(DAT_10220c50 + 0x38);
    iVar2 = DAT_10220c50;
    *(undefined4 *)(DAT_10220c50 + 0x30) = *(undefined4 *)(DAT_10220c50 + 0x3c);
    *(undefined4 *)(DAT_10220c50 + 0x34) = *(undefined4 *)(DAT_10220c50 + 0x40);
    fVar6 = *(float *)(iVar3 + 0x2c) - local_48;
    fVar7 = *(float *)(iVar2 + 0x30) - local_3c;
    if (fVar6 * fVar6 + fVar7 * fVar7 <
        (local_4c - local_48) * (local_4c - local_48) +
        (local_44 - local_3c) * (local_44 - local_3c)) goto LAB_1000a526;
  }
  *(float *)(DAT_10220c50 + 100) = local_40;
LAB_1000a576:
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

