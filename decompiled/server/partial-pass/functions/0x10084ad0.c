// rea decompile_all
// name: FUN_10084ad0
// address: 0x10084ad0
// body: available
// range: 0x10084ad0-0x10084c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10084ad0(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x160) + 0x2540 + *(int *)(in_ECX + 0x1dc) * 4);
  if (((((0 < iVar1) && (*(int *)(in_ECX + 0x128) != 1)) && (*(int *)(in_ECX + 0x128) < 3)) &&
      ((*(int *)(in_ECX + 0x140) == 0 && (*(float *)(in_ECX + 0x1cc) <= *DAT_10223188)))) &&
     (*(float *)(in_ECX + 0x1d0) <= *DAT_10223188)) {
    iVar2 = -*(int *)(in_ECX + 0x1e4);
    if (((iVar1 <= iVar2 + 0x12) || (iVar2 != -0x12)) && (*(char *)(in_ECX + 0x1a4) == '\0')) {
      if (*(char *)(in_ECX + 0x178) != '\0') {
        *(undefined1 *)(in_ECX + 0x1a4) = 1;
        return;
      }
      *(undefined4 *)(in_ECX + 0x128) = 2;
      *(undefined4 *)(in_ECX + 0x1f8) = 0;
      if (*(int *)(in_ECX + 0x1e4) != 0) {
        FUN_100ea240("vp70_reload",0);
        uVar6 = 0;
        uVar5 = 0;
        *(undefined4 *)(in_ECX + 0x1e4) = 0;
        uVar3 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),6,0,0);
        fVar4 = (float10)FUN_1000f390(uVar3);
        FUN_1011c560(0x12,6,(float)fVar4,uVar5,uVar6);
        return;
      }
      FUN_100ea240("vp70_reload_empty",0);
      uVar6 = 0;
      uVar5 = 0;
      *(undefined4 *)(in_ECX + 0x1e4) = 0;
      uVar3 = (*DAT_10223070)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),7,0,0);
      fVar4 = (float10)FUN_1000f390(uVar3);
      FUN_1011c560(0x12,7,(float)fVar4,uVar5,uVar6);
    }
  }
  return;
}

