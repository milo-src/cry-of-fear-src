// rea decompile_all
// name: FUN_10006a40
// address: 0x10006a40
// body: available
// range: 0x10006a40-0x10006e2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006a40(int param_1)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float local_c8;
  undefined1 local_c4 [16];
  float local_b4;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_8c [12];
  undefined1 local_80 [12];
  undefined1 local_74 [12];
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_10220c50 + 0xdc) != 8) {
    (**(code **)(DAT_10220c50 + 0x4f598))(*(undefined4 *)(param_1 + 0x30),&local_38,&local_44);
    local_14 = local_38 + local_44;
    local_10 = local_34 + local_40;
    local_c = local_30 + local_3c;
    FUN_10003490(&local_14,0x3f000000,&local_14);
    local_14 = *(float *)(param_1 + 0x24) + local_14;
    local_10 = *(float *)(param_1 + 0x28) + local_10;
    local_c = *(float *)(param_1 + 0x2c) + local_c;
    *(undefined4 *)(DAT_10220c50 + 0xdc) = 5;
    local_50 = *(undefined4 *)(DAT_10220c50 + 0x38);
    local_4c = *(undefined4 *)(DAT_10220c50 + 0x3c);
    local_48 = (*(float *)(DAT_10220c50 + (*(int *)(DAT_10220c50 + 0xbc) + 0x69c0) * 0xc) - 1.0) +
               *(float *)(DAT_10220c50 + 0x40);
    iVar2 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_50,0);
    *(undefined4 *)(DAT_10220c50 + 0xc0) = 0;
    (**(code **)(DAT_10220c50 + 0x4f5a0))(param_1,DAT_10220c50 + 0x38,&local_14,local_c4);
    if (local_b4 != 1.0) {
      local_c8 = 0.0;
      FUN_10002ae0(DAT_10220c50 + 0x44,local_80,local_8c,0);
      fVar3 = -90.0;
      uVar1 = *(ushort *)(DAT_10220c50 + 0x45476);
      if ((uVar1 & 0x10) == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = -90.0;
      }
      if ((uVar1 & 8) != 0) {
        fVar4 = fVar4 + 90.0;
      }
      if ((uVar1 & 0x200) == 0) {
        fVar3 = 0.0;
      }
      else {
        local_c8 = -90.0;
      }
      if ((uVar1 & 0x400) != 0) {
        fVar3 = fVar3 + 90.0;
        local_c8 = fVar3;
      }
      if ((uVar1 & 2) != 0) {
        *(undefined4 *)(DAT_10220c50 + 0xdc) = 3;
        FUN_10003490(&local_a4,0x43870000,DAT_10220c50 + 0x5c);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if ((fVar4 == 0.0) && (fVar3 == 0.0)) {
        *(undefined4 *)(DAT_10220c50 + 0x5c) = 0;
        *(undefined4 *)(DAT_10220c50 + 0x60) = 0;
        *(undefined4 *)(DAT_10220c50 + 100) = 0;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_10003490(local_80,fVar4,&local_20);
      FUN_100032d0(&local_20,local_c8,local_8c,&local_20);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0x3f800000;
      FUN_10002e30(&local_2c,&local_a4,local_74);
      FUN_100033d0(local_74);
      fVar3 = local_20 * local_a4 + local_1c * local_a0 + local_18 * local_9c;
      FUN_10003490(&local_a4,fVar3,&local_5c);
      local_68 = local_20 - local_5c;
      local_64 = local_1c - local_58;
      local_60 = local_18 - local_54;
      FUN_10002e30(&local_a4,local_74,&local_2c);
      FUN_100032d0(&local_68,-fVar3,&local_2c,DAT_10220c50 + 0x5c);
      if ((iVar2 == -2) && (0.0 < fVar3)) {
        FUN_100032d0(DAT_10220c50 + 0x5c,0x42b40000,&local_a4,DAT_10220c50 + 0x5c);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

