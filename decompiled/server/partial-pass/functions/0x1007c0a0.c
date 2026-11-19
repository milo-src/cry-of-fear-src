// rea decompile_all
// name: FUN_1007c0a0
// address: 0x1007c0a0
// body: available
// range: 0x1007c0a0-0x1007c1e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c0a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
  if ((param_1 == 0x1e) || (iVar2 = param_1, param_1 == 0x1f)) {
    iVar2 = FUN_10017780();
    if (iVar2 != 0) {
      piVar1 = (int *)FUN_100177a0();
      iVar2 = (**(code **)(*piVar1 + 0xd0))();
      if ((iVar2 != 0) &&
         ((iVar2 = FUN_100177a0(), *(float *)(*(int *)(iVar2 + 4) + 0x260) != 0.0 ||
          (iVar2 = FUN_100177a0(), (*(uint *)(*(int *)(iVar2 + 4) + 0x1a8) & 0x4000) != 0)))) {
        if ((DAT_10222ee4 != (int *)0x0) &&
           (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
          FUN_100177a0();
        }
        iVar2 = 0x1f;
        goto LAB_1007c15e;
      }
    }
    iVar2 = 0x1e;
  }
LAB_1007c15e:
  iVar2 = FUN_1000e950(iVar2);
  piVar1 = (int *)in_ECX[1];
  in_ECX[0x85] = param_1;
  if (iVar2 < 0) {
    (*DAT_1022303c)(1,"%s has no sequence for act:%d\n",*(int *)(DAT_10223188 + 0x98) + *piVar1,
                    param_1);
    *(undefined4 *)(in_ECX[1] + 300) = 0;
    return;
  }
  if ((piVar1[0x4b] != iVar2) || (in_ECX[0x3f] == 0)) {
    piVar1[0x4d] = 0;
    piVar1 = (int *)in_ECX[1];
  }
  piVar1[0x4b] = iVar2;
  FUN_1000e9e0();
  (**(code **)(*in_ECX + 0x1c0))();
  return;
}

