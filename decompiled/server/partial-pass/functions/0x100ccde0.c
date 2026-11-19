// rea decompile_all
// name: FUN_100ccde0
// address: 0x100ccde0
// body: available
// range: 0x100ccde0-0x100cce99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ccde0(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  undefined4 local_10;
  undefined1 local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar3 = 0;
  if (0 < *(int *)(in_ECX + 0x1c)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 8 + *(int *)(in_ECX + 0x10)) != 0) {
        local_10 = *(undefined4 *)(iVar4 + 0xc + *(int *)(in_ECX + 0x10));
        local_c = 0;
        iVar2 = FUN_10118480(0,"model",&local_10);
        if (iVar2 == 0) {
          (*DAT_1022303c)(2,"**Could not find model %s\n",&local_10);
          *(undefined4 *)(iVar4 + 8 + *(int *)(in_ECX + 0x10)) = 0;
        }
        else {
          *(undefined4 *)(iVar4 + 8 + *(int *)(in_ECX + 0x10)) = *(undefined4 *)(iVar2 + 4);
          iVar2 = *(int *)(iVar4 + 8 + *(int *)(in_ECX + 0x10));
          uVar1 = *(uint *)(iVar2 + 0x1a8);
          if ((uVar1 & 0x10000) == 0) {
            *(uint *)(iVar2 + 0x1a8) = uVar1 + 0x10000;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x18;
    } while (iVar3 < *(int *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 4) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

