// rea decompile_all
// name: FUN_1009bc60
// address: 0x1009bc60
// body: available
// range: 0x1009bc60-0x1009be19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1009bc60(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined1 local_54 [16];
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  float local_1c;
  float local_18;
  float local_14;
  float local_10 [3];
  
  iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x110);
  if (iVar1 != 0) {
    if (6 < iVar1) {
      (*DAT_1022303c)(1,"Invalid dir value in static decal entity!\n");
      return;
    }
    FUN_10098980(iVar1 + -1,param_1);
    return;
  }
  uVar2 = 0;
  do {
    local_10[0] = 0.0;
    local_10[1] = 0.0;
    iVar1 = -10;
    if ((uVar2 & 1) != 0) {
      iVar1 = 10;
    }
    local_10[2] = 0.0;
    local_10[uVar2 >> 1] = (float)iVar1;
    iVar1 = *(int *)(in_ECX + 4);
    local_18 = *(float *)(iVar1 + 0xc) + local_10[1];
    local_14 = *(float *)(iVar1 + 0x10) + local_10[2];
    local_1c = *(float *)(iVar1 + 8) + local_10[0];
    FUN_1011a800((float *)(iVar1 + 8),&local_1c,1,*(undefined4 *)(iVar1 + 0x20c),local_54);
    if (local_44 != 1.0) {
      if (local_24 == 0) {
LAB_1009bd66:
        (*DAT_10223000)(1,DAT_10226558,0,*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
        (*DAT_1022301c)(local_40);
        (*DAT_1022301c)(local_3c);
        (*DAT_1022301c)(local_38);
        (*DAT_1022301c)(local_30);
        (*DAT_1022301c)(local_2c);
        (*DAT_1022301c)(local_28);
        (*DAT_10223008)(1);
        (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d4));
        (*DAT_10223004)();
        return;
      }
      iVar1 = (*DAT_10223064)(local_24);
      if (iVar1 == 0) goto LAB_1009bd66;
    }
    uVar2 = uVar2 + 1;
    if (5 < (int)uVar2) {
      return;
    }
  } while( true );
}

