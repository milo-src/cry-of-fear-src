// rea decompile_all
// name: FUN_100044b0
// address: 0x100044b0
// body: available
// range: 0x100044b0-0x1000487e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100044b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float fVar6;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_58 [68];
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar1 = (*(code *)DAT_10220c50[0x13d58])(DAT_10220c50 + 0xe,local_58);
  piVar4 = DAT_10220c50;
  if (iVar1 == -1) {
    FUN_100090c0(*DAT_10220c50,DAT_10220c50[1]);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_64 = (float)DAT_10220c50[0xe];
  local_68 = (float)DAT_10220c50[0xf];
  local_60 = (float)DAT_10220c50[0x10];
  if ((DAT_10220c50[1] == 0) && ((iVar1 == 0 || (DAT_10220c50[iVar1 * 0x38 + 0xa0] != 0)))) {
    iVar3 = 0;
    FUN_100090c0(*DAT_10220c50,0);
    do {
      FUN_10006120(*piVar4,piVar4[1],&local_80);
      local_14 = local_64 + local_80;
      local_10 = local_68 + local_7c;
      local_c = local_60 + local_78;
      iVar2 = (*(code *)piVar4[0x13d58])(&local_14,local_58);
      piVar4 = DAT_10220c50;
      if (iVar2 == -1) {
        FUN_100090c0(*DAT_10220c50,DAT_10220c50[1]);
        piVar4[0xe] = (int)local_14;
        DAT_10220c50[0xf] = (int)local_10;
        DAT_10220c50[0x10] = (int)local_c;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x36);
  }
  iVar3 = DAT_10220c50[1];
  fVar5 = (float10)(*(code *)DAT_10220c50[0x13d5c])();
  piVar4 = DAT_10220c50;
  iVar2 = 0;
  local_5c = (float)fVar5;
  if (iVar3 == 0) {
    iVar2 = 4;
  }
  if (*(float *)(&DAT_10222c70 + *DAT_10220c50 * 8 + iVar2) < local_5c - 0.05) {
    *(float *)(&DAT_10222c70 + *DAT_10220c50 * 8 + iVar2) = local_5c;
    (*(code *)piVar4[0x13d5d])(iVar1,local_58);
    piVar4 = DAT_10220c50;
    iVar1 = FUN_10006120(*DAT_10220c50,DAT_10220c50[1],&local_80);
    local_14 = local_64 + local_80;
    local_10 = local_68 + local_7c;
    local_c = local_78 + local_60;
    iVar3 = (*(code *)piVar4[0x13d58])(&local_14,0);
    piVar4 = DAT_10220c50;
    if (iVar3 == -1) {
      FUN_100090c0(*DAT_10220c50,DAT_10220c50[1]);
      if (0x1a < iVar1) {
        piVar4[0xe] = (int)local_14;
        DAT_10220c50[0xf] = (int)local_10;
        DAT_10220c50[0x10] = (int)local_c;
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (((*(byte *)((int)DAT_10220c50 + 0x45476) & 7) != 0) &&
       (DAT_10220c50[iVar3 * 0x38 + 0x9c] != 0)) {
      local_5c = 0.0;
      do {
        local_74 = local_60 + local_5c;
        local_70 = -8.0;
        do {
          fVar6 = local_64 + local_70;
          local_6c = -8.0;
          do {
            local_10 = local_68 + local_6c;
            local_14 = fVar6;
            local_c = local_74;
            iVar1 = (*(code *)DAT_10220c50[0x13d58])(&local_14,0);
            if (iVar1 == -1) {
              DAT_10220c50[0xe] = (int)local_14;
              DAT_10220c50[0xf] = (int)local_10;
              DAT_10220c50[0x10] = (int)local_c;
              __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
              return;
            }
            local_6c = local_6c + 8.0;
          } while (local_6c <= 8.0);
          local_70 = local_70 + 8.0;
        } while (local_70 <= 8.0);
        local_5c = local_5c + 18.0;
      } while (local_5c <= 72.0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

