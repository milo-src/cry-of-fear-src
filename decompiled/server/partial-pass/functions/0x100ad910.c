// rea decompile_all
// name: FUN_100ad910
// address: 0x100ad910
// body: available
// range: 0x100ad910-0x100adab7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100ad910(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  undefined4 uVar3;
  
  (**(code **)(*in_ECX + 0x30))();
  uVar3 = 0;
  if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) == 0) {
    uVar3 = 0x3f800000;
  }
  *(undefined4 *)(in_ECX[1] + 0x170) = uVar3;
  if (in_ECX[0x45] != 0) {
    *(uint *)(in_ECX[1] + 0x1a8) = *(uint *)(in_ECX[1] + 0x1a8) | 0x20;
    iVar2 = in_ECX[1];
    *(ulonglong *)(iVar2 + 0x178) =
         CONCAT44((*(float *)(iVar2 + 0xe0) + *(float *)(iVar2 + 0xec)) * 0.5,
                  (*(float *)(iVar2 + 0xdc) + *(float *)(iVar2 + 0xe8)) * 0.5);
    *(float *)(iVar2 + 0x180) = (*(float *)(iVar2 + 0xe4) + *(float *)(iVar2 + 0xf0)) * 0.5;
  }
  *(undefined4 *)(in_ECX[1] + 0x10c) = 4;
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  in_ECX[0x3e] = *(int *)(in_ECX[1] + 0x54);
  *(undefined4 *)(in_ECX[1] + 0x54) = 0;
  iVar2 = in_ECX[1];
  in_ECX[0x42] = (int)*(float *)(iVar2 + 0x164);
  in_ECX[0x43] = (int)*(float *)(iVar2 + 0x150);
  in_ECX[0x44] = *(int *)(iVar2 + 0x14c);
  if (in_ECX[0x3b] == 0) {
    *(undefined4 *)(iVar2 + 0x210) = 1;
    iVar2 = in_ECX[1];
  }
  (*DAT_10222f50)(*(undefined4 *)(iVar2 + 0x20c),
                  *(int *)(iVar2 + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar2 = in_ECX[1];
  in_ECX[0x1f] = (int)CBreakable::BreakTouch;
  in_ECX[0x20] = (int)CBreakable::BreakUse;
  if ((*(byte *)(iVar2 + 0x1a4) & 1) != 0) {
    in_ECX[0x1f] = 0;
  }
  iVar1 = FUN_100acb80();
  if ((iVar1 == 0) && (*(int *)(iVar2 + 0x14c) != 0)) {
    *(uint *)(iVar2 + 0x1a8) = *(uint *)(iVar2 + 0x1a8) | 0x2000000;
  }
  iVar2 = in_ECX[0x19];
  if (0x1f < iVar2) {
    (*DAT_10222ff4)(iVar2,&DAT_101cb214);
    return;
  }
  if (iVar2 < -0x1f) {
    (*DAT_10222ff4)(-iVar2,&DAT_101cb218);
  }
  return;
}

