// rea decompile_all
// name: FUN_10004bd0
// address: 0x10004bd0
// body: available
// range: 0x10004bd0-0x10004ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004bd0(void)

{
  int iVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 local_f0 [76];
  float local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  float fStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffff0;
  if ((*(float *)(DAT_10220c50 + 0xcc) == 0.0) &&
     (-180.0 < *(float *)(DAT_10220c50 + 100) || *(float *)(DAT_10220c50 + 100) == -180.0)) {
    local_38 = *(float *)(DAT_10220c50 + 0x5c);
    local_34 = *(float *)(DAT_10220c50 + 0x60);
    local_30 = 0.0;
    fVar3 = (float10)FUN_100033d0(&local_38);
    local_a4 = (float)fVar3;
    local_20 = *(float *)(DAT_10220c50 + 0x14);
    local_1c = *(float *)(DAT_10220c50 + 0x18);
    local_18 = 0.0;
    FUN_100033d0(&local_20);
    if ((local_a4 == 0.0) ||
       (0.0 <= local_1c * local_34 + local_20 * local_38 + local_18 * local_30)) {
      local_2c = *(undefined4 *)(DAT_10220c50 + 0x38);
      local_28 = *(undefined4 *)(DAT_10220c50 + 0x3c);
      local_24 = *(float *)(DAT_10220c50 + 0x40) + 8.0;
      FUN_100032d0(&local_2c,0x41c00000,&local_20,local_44);
      iVar1 = *(int *)(DAT_10220c50 + 0xbc);
      *(undefined4 *)(DAT_10220c50 + 0xbc) = 2;
      puVar2 = (undefined4 *)
               (**(code **)(DAT_10220c50 + 0x4f584))(local_f0,&local_2c,local_44,0,0xffffffff);
      local_a0 = *puVar2;
      uStack_9c = puVar2[1];
      uStack_98 = puVar2[2];
      uStack_94 = puVar2[3];
      local_90 = (float)puVar2[4];
      uStack_8c = puVar2[5];
      uStack_88 = puVar2[6];
      uStack_84 = puVar2[7];
      local_80 = puVar2[8];
      uStack_7c = puVar2[9];
      fStack_78 = (float)puVar2[10];
      uStack_74 = puVar2[0xb];
      local_70 = puVar2[0xc];
      uStack_6c = puVar2[0xd];
      uStack_68 = puVar2[0xe];
      uStack_64 = puVar2[0xf];
      local_60 = puVar2[0x10];
      if ((local_90 < 1.0) && (ABS(fStack_78) <= 0.1 && ABS(fStack_78) != 0.1)) {
        local_24 = (*(float *)(DAT_10220c50 + (iVar1 + 0x69c4) * 0xc) - 8.0) + local_24;
        FUN_100032d0(&local_2c,0x41c00000,&local_20,local_44);
        FUN_100032d0(&DAT_10220c40,0xc2480000,&local_80,DAT_10220c50 + 0x68);
        puVar2 = (undefined4 *)
                 (**(code **)(DAT_10220c50 + 0x4f584))(local_f0,&local_2c,local_44,0,0xffffffff);
        local_a0 = *puVar2;
        uStack_9c = puVar2[1];
        uStack_98 = puVar2[2];
        uStack_94 = puVar2[3];
        local_90 = (float)puVar2[4];
        uStack_8c = puVar2[5];
        uStack_88 = puVar2[6];
        uStack_84 = puVar2[7];
        local_80 = puVar2[8];
        uStack_7c = puVar2[9];
        fStack_78 = (float)puVar2[10];
        uStack_74 = puVar2[0xb];
        local_70 = puVar2[0xc];
        uStack_6c = puVar2[0xd];
        uStack_68 = puVar2[0xe];
        uStack_64 = puVar2[0xf];
        local_60 = puVar2[0x10];
        if (local_90 == 1.0) {
          *(undefined4 *)(DAT_10220c50 + 0xcc) = 0x44fa0000;
          *(undefined4 *)(DAT_10220c50 + 100) = 0x43610000;
          *(uint *)(DAT_10220c50 + 200) = *(uint *)(DAT_10220c50 + 200) | 2;
          *(uint *)(DAT_10220c50 + 0xb8) = *(uint *)(DAT_10220c50 + 0xb8) | 0x800;
        }
      }
      *(int *)(DAT_10220c50 + 0xbc) = iVar1;
    }
  }
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffff0);
  return;
}

