// rea decompile_all
// name: FUN_100bb3f0
// address: 0x100bb3f0
// body: available
// range: 0x100bb3f0-0x100bb57c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bb3f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined1 local_44 [4];
  int local_40;
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  iVar1 = FUN_100ba460(param_1);
  if (iVar1 != 0) {
    iVar1 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar2 = FUN_10119680(iVar1);
        if (iVar2 != 0) {
          iVar3 = *(int *)(in_ECX + 4);
          if (((*(float *)(iVar3 + 8) == (float)DAT_10222f34) &&
              (*(float *)(iVar3 + 0xc) == DAT_10222f34._4_4_)) &&
             (*(float *)(iVar3 + 0x10) == DAT_10222f3c)) {
            iVar3 = *(int *)(iVar2 + 4) + 8;
            FUN_1011a860(iVar3,iVar3,
                         (*(uint *)(*(int *)(iVar2 + 4) + 0x1a8) & 0x4000 | 0x2000) >> 0xd,
                         *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),local_44);
            iVar3 = local_40;
          }
          else {
            iVar3 = FUN_10017d80(iVar2);
          }
          if (iVar3 == 0) {
            local_8 = local_8 + 1;
            iVar3 = *(int *)(in_ECX + 0xe4);
          }
          else {
            local_c = local_c + 1;
            iVar3 = *(int *)(in_ECX + 0xe0);
          }
          if (iVar3 != 0) {
            FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + iVar3,iVar2,param_1,param_3,param_4);
          }
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= *(int *)(DAT_10223188 + 0x90));
    }
    if (*(int *)(in_ECX + 0xe8) != 0) {
      FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe8),param_1);
    }
    if (*(int *)(in_ECX + 0xec) != 0) {
      FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xec),param_1);
    }
  }
  return;
}

