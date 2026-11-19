// rea decompile_all
// name: FUN_10113380
// address: 0x10113380
// body: available
// range: 0x10113380-0x10113561 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10113380(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  undefined1 local_1c [12];
  undefined8 local_10;
  float local_8;
  
  iVar2 = *(int *)(param_1 + 4);
  switch(*(undefined4 *)(iVar2 + 0x108)) {
  case 0:
  case 7:
  case 8:
  case 0xc:
    break;
  default:
    iVar3 = *(int *)(in_ECX + 4);
    if (((*(byte *)(iVar3 + 0x1a4) & 4) == 0) || ((*(byte *)(iVar2 + 0x1a8) & 0x20) != 0)) {
      if (*(int *)(in_ECX + 0x180) == 0) {
        uVar1 = *(undefined8 *)(iVar3 + 0x44);
        local_8 = *(float *)(iVar3 + 0x4c);
      }
      else {
        puVar4 = (undefined8 *)FUN_100b8240(local_1c);
        uVar1 = *puVar4;
        local_8 = *(float *)(puVar4 + 1);
      }
      if (*(int *)(in_ECX + 0x184) == 0) {
        local_10._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_10._0_4_ = (float)uVar1;
      }
      else {
        local_10 = uVar1;
        fVar5 = (float10)FUN_100b81e0(param_1,*(int *)(DAT_10223188 + 0x98) +
                                              *(int *)(in_ECX + 0x184));
        fVar6 = (float)fVar5;
        local_10._0_4_ = (float)local_10 * fVar6;
        local_10._4_4_ = local_10._4_4_ * fVar6;
        local_8 = local_8 * fVar6;
      }
      fVar6 = *(float *)(*(int *)(in_ECX + 4) + 0x1fc);
      if (fVar6 == 0.0) {
        fVar6 = 100.0;
      }
      local_8 = local_8 * fVar6;
      local_10._4_4_ = local_10._4_4_ * fVar6;
      local_10._0_4_ = (float)local_10 * fVar6;
      if ((*(int *)(iVar2 + 0x10c) != 0) && (*(int *)(iVar2 + 0x10c) != 4)) {
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0) {
          local_8 = *(float *)(iVar2 + 0x28) + local_8;
          *(ulonglong *)(iVar2 + 0x20) =
               CONCAT44(*(float *)(iVar2 + 0x24) + local_10._4_4_,
                        *(float *)(iVar2 + 0x20) + (float)local_10);
          *(float *)(iVar2 + 0x28) = local_8;
          if (0.0 < *(float *)(iVar2 + 0x28)) {
            *(uint *)(iVar2 + 0x1a8) = *(uint *)(iVar2 + 0x1a8) & 0xfffffdff;
          }
          FUN_10119900();
          return;
        }
        if ((*(uint *)(iVar2 + 0x1a8) & 0x400000) != 0) {
          local_10 = CONCAT44(*(float *)(iVar2 + 0x30) + local_10._4_4_,
                              *(float *)(iVar2 + 0x2c) + (float)local_10);
          local_8 = *(float *)(iVar2 + 0x34) + local_8;
        }
        *(undefined8 *)(iVar2 + 0x2c) = local_10;
        *(float *)(iVar2 + 0x34) = local_8;
        *(uint *)(iVar2 + 0x1a8) = *(uint *)(iVar2 + 0x1a8) | 0x400000;
      }
    }
  }
  return;
}

