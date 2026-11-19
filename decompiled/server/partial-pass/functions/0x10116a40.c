// rea decompile_all
// name: FUN_10116a40
// address: 0x10116a40
// body: available
// range: 0x10116a40-0x10116c24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10116a40(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int param_7,char param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_10 [12];
  
  iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))();
  if (iVar1 == 0) {
LAB_10116b8e:
    if (param_8 != '\0') {
      uVar5 = 0;
      uVar6 = 2;
      goto LAB_10116bb5;
    }
  }
  else {
    piVar2 = (int *)FUN_100125e0(*(undefined4 *)(param_7 + 4));
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x228))(local_10);
    param_4 = *puVar3;
    param_5 = puVar3[1];
    param_6 = puVar3[2];
    iVar1 = FUN_1013f5f0(param_1,"weapons");
    if (iVar1 == 0) goto LAB_10116b8e;
    if (param_8 != '\0') {
      iVar1 = 1;
      if (*(int *)(DAT_10223188 + 0x90) < 1) {
        return;
      }
      do {
        iVar4 = FUN_10119680(iVar1);
        if (iVar4 != 0) {
          (*DAT_10223000)(1,DAT_102266f4,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
          (*DAT_10223020)(param_1);
          (*DAT_10223008)(param_2);
          (*DAT_10223008)(param_3);
          (*DAT_1022301c)(param_4);
          (*DAT_1022301c)(param_5);
          (*DAT_1022301c)(param_6);
          (*DAT_10223008)(iVar4 != param_7);
          uVar5 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
          (*DAT_10223010)(uVar5);
          (*DAT_10223004)();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 <= *(int *)(DAT_10223188 + 0x90));
      return;
    }
  }
  uVar5 = *(undefined4 *)(*(int *)(param_7 + 4) + 0x20c);
  uVar6 = 1;
LAB_10116bb5:
  (*DAT_10223000)(uVar6,DAT_102266f4,0,uVar5);
  (*DAT_10223020)(param_1);
  (*DAT_10223008)(param_2);
  (*DAT_10223008)(param_3);
  (*DAT_1022301c)(param_4);
  (*DAT_1022301c)(param_5);
  (*DAT_1022301c)(param_6);
  (*DAT_10223008)(0);
  (*DAT_10223010)(1);
  (*DAT_10223004)();
  return;
}

