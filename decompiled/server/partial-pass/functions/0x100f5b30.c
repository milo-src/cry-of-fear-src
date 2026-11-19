// rea decompile_all
// name: FUN_100f5b30
// address: 0x100f5b30
// body: available
// range: 0x100f5b30-0x100f5c84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f5b30(void)

{
  int iVar1;
  CWheelchair *this;
  CBaseEntity *in_ECX;
  CBaseEntity *pCVar2;
  USE_TYPE UVar3;
  float fVar4;
  
  iVar1 = FUN_10017780();
  if (iVar1 == 0) {
    iVar1 = *(int *)(in_ECX + 4);
    iVar1 = FUN_10017950("wheelchair",iVar1 + 8,iVar1 + 0x50,*(undefined4 *)(iVar1 + 0x20c));
    if (iVar1 != 0) {
      FUN_100dd990(1,1);
      FUN_100f0ba0(0);
      FUN_100deff0(0);
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) | 0x80;
      if (*(int *)(in_ECX + 0x2300) != 0) {
        *(uint *)(in_ECX + 0x5d0) = *(uint *)(in_ECX + 0x5d0) & 0xffffffbf;
        *(undefined4 *)(in_ECX + 0x2300) = 0;
        (*DAT_10223000)(1,DAT_102265f4,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223008)(10);
        (*DAT_10223020)(&DAT_101a2496);
        (*DAT_10223008)(*(float *)(*(int *)(in_ECX + 4) + 0x268) == 0.0);
        (*DAT_10223004)();
      }
      *(undefined4 *)(in_ECX + 0x60c) = 0;
      (*DAT_10223000)(1,DAT_1022661c,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      (*DAT_10223008)(*(undefined4 *)(in_ECX + 0x60c));
      (*DAT_10223004)();
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x164) = 0x42c80000;
      fVar4 = 0.0;
      UVar3 = 3;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = 0;
      pCVar2 = in_ECX;
      this = (CWheelchair *)FUN_10018800(*(undefined4 *)(iVar1 + 4));
      CWheelchair::WheelchairUse(this,in_ECX,pCVar2,UVar3,fVar4);
    }
  }
  return;
}

