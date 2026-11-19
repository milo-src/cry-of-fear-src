// rea decompile_all
// name: FUN_100a24b0
// address: 0x100a24b0
// body: available
// range: 0x100a24b0-0x100a2708 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a24b0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  uVar1 = *(uint *)(in_ECX[1] + 0x1a4);
  in_ECX[0x1e] = (int)CCoFCoopStats::RestartCampaign;
  if ((uVar1 & 1) == 0) {
    uVar8 = 0x43820000;
  }
  else {
    uVar8 = 0x41f00000;
  }
  (**(code **)(*in_ECX + 8))(uVar8);
  iVar6 = 1;
  do {
    iVar3 = FUN_10119680(iVar6);
    if (iVar3 != 0) {
      FUN_100f2ed0(0,0,0,1);
      (*DAT_10223000)(2,DAT_102266c0,0,0);
      (*DAT_10223004)();
      (*DAT_10223000)(2,DAT_102266b8,0,0);
      uVar8 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_10223008)(uVar8);
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x63c));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x640));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x644));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x648));
      fVar7 = (float10)FUN_100dbfb0();
      (*DAT_1022301c)((float)fVar7);
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x658));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x664));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x668));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x66c));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x670));
      (*DAT_10223010)(*(undefined4 *)(iVar3 + 0x674));
      (*DAT_10223008)(1);
      iVar4 = FUN_100e4c30();
      (*DAT_10223008)(iVar4 != 0);
      iVar4 = FUN_100e4d60();
      (*DAT_10223008)(iVar4 != 0);
      cVar2 = FUN_100dd000(0,1,0);
      (*DAT_10223008)(cVar2 != '\0');
      cVar2 = FUN_100dd000(0,0,1);
      (*DAT_10223008)(cVar2 != '\0');
      (*DAT_10223008)(DAT_10222f14 != 0);
      if (DAT_10222f14 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(iVar3 + 0x638);
      }
      (*DAT_10223010)(uVar8);
      (*DAT_10223008)((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0);
      if (DAT_10222f14 == 0) {
        (*DAT_10223010)(0);
      }
      else {
        iVar4 = 0;
        iVar3 = 1;
        do {
          iVar5 = FUN_10119680(iVar3);
          if (iVar5 != 0) {
            iVar4 = iVar4 + *(int *)(iVar5 + 0x638);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 5);
        (*DAT_10223010)(iVar4);
      }
      (*DAT_10223004)();
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  return;
}

