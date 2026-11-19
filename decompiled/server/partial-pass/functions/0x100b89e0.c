// rea decompile_all
// name: FUN_100b89e0
// address: 0x100b89e0
// body: available
// range: 0x100b89e0-0x100b8b21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100b89e0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar2 = FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d4),
                       param_2);
  switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x188)) {
  case 1:
    iVar1 = *(int *)(iVar2 + 4);
    FUN_100b91a0(param_1,iVar2,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                 *(undefined4 *)(iVar1 + 0x58));
    return param_1;
  case 2:
    iVar1 = *(int *)(iVar2 + 4);
    FUN_100b91a0(param_1,iVar2,*(undefined4 *)(iVar1 + 0x74),*(undefined4 *)(iVar1 + 0x78),
                 *(undefined4 *)(iVar1 + 0x7c));
    return param_1;
  default:
    iVar1 = *(int *)(iVar2 + 4);
    FUN_100b9020(param_1,iVar2,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x24),
                 *(undefined4 *)(iVar1 + 0x28));
    return param_1;
  case 5:
    uVar3 = 0;
    break;
  case 6:
    uVar3 = 1;
    break;
  case 7:
    uVar3 = 2;
    break;
  case 8:
    uVar3 = 3;
  }
  FUN_1000e7c0(uVar3,local_1c,&local_10);
  FUN_100b91a0(param_1,iVar2,local_10,local_c,local_8);
  return param_1;
}

