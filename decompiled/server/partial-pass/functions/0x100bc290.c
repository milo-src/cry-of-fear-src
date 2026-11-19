// rea decompile_all
// name: FUN_100bc290
// address: 0x100bc290
// body: available
// range: 0x100bc290-0x100bc3e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bc290(float param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  iVar2 = *(int *)(in_ECX + 700);
  if (iVar2 == 7) {
    iVar2 = FUN_100bddb0();
    if (iVar2 == 0) {
      (*DAT_1022303c)(2,"Can\'t Refresh Route!!\n");
      return;
    }
  }
  else {
    uVar1 = *(uint *)(in_ECX + 0x244 + iVar2 * 0x10);
    if (-1 < (char)uVar1) {
      if ((uVar1 & 0xfffffe7f) == 0x10) {
        uVar3 = (**(code **)(**(int **)(in_ECX + 0xc) + 0xdc))();
        iVar2 = *(int *)(in_ECX + 700);
        *(undefined4 *)(in_ECX + 0xc) = uVar3;
      }
      iVar2 = iVar2 * 0x10;
      if (((*(byte *)(iVar2 + 0x244 + in_ECX) & 0x20) != 0) &&
         ((*(byte *)(iVar2 + 0x254 + in_ECX) & 0x20) != 0)) {
        uVar3 = FUN_100cd530(in_ECX + 0x238 + iVar2,in_ECX);
        uVar4 = FUN_100cd530(*(int *)(in_ECX + 700) * 0x10 + 0x248 + in_ECX,in_ECX);
        FUN_100cdcb0(uVar3,uVar4,&param_1);
        if ((-1 < (int)param_1) &&
           (((iVar2 = *(int *)(DAT_102238c0 + 8 + (int)param_1 * 0x18), iVar2 != 0 &&
             (iVar2 = FUN_100cd990(uVar3,iVar2,*(undefined4 *)(in_ECX + 0x304),0), iVar2 != 0)) &&
            (iVar2 = *(int *)(DAT_102238c0 + 8 + (int)param_1 * 0x18), iVar2 != 0)))) {
          fVar5 = (float10)FUN_100c11d0(iVar2);
          *(float *)(in_ECX + 0x210) = (float)fVar5;
        }
      }
      *(int *)(in_ECX + 700) = *(int *)(in_ECX + 700) + 1;
      return;
    }
    if (param_1 < *(float *)(in_ECX + 0xf0) * 0.2) {
      FUN_100c1150();
    }
  }
  return;
}

