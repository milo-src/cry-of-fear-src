// rea decompile_all
// name: CBaseButton::ButtonBackHome
// address: 0x10012ba0
// body: available
// range: 0x10012ba0-0x10012cf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10012cef to 0x10017ad0 FUN_10017ad0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseButton::ButtonBackHome(void) */

void __thiscall CBaseButton::ButtonBackHome(CBaseButton *this)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
                    /* 0x12ba0  31  ?ButtonBackHome@CBaseButton@@QAEXXZ */
  iVar3 = *(int *)(this + 4);
  *(undefined4 *)(this + 0x100) = 1;
  if ((*(byte *)(iVar3 + 0x1a4) & 0x20) != 0) {
    uVar10 = 0;
    uVar9 = 3;
    uVar2 = FUN_10017790(3,0);
    FUN_10102930(uVar2,uVar9,uVar10);
    iVar3 = *(int *)(this + 4);
  }
  if (*(int *)(iVar3 + 0x1cc) != 0) {
    piVar7 = (int *)0x0;
    while( true ) {
      uVar2 = FUN_10017790();
      piVar7 = (int *)FUN_10118500(piVar7,*(int *)(*(int *)(this + 4) + 0x1cc) +
                                          *(int *)(DAT_10223188 + 0x98),uVar2);
      if (((piVar7 == (int *)0x0) || (*(int *)(piVar7[1] + 0x20c) == 0)) ||
         (iVar3 = (*DAT_10223060)(*(int *)(piVar7[1] + 0x20c)), iVar3 == 0)) break;
      pcVar6 = "multisource";
      pbVar4 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)piVar7[1]);
      do {
        bVar1 = *pbVar4;
        bVar8 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_10012c74:
          uVar5 = -(uint)bVar8 | 1;
          goto LAB_10012c79;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar8 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_10012c74;
        pbVar4 = pbVar4 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar5 = 0;
LAB_10012c79:
      if (uVar5 == 0) {
        iVar3 = *piVar7;
        uVar2 = FUN_10017790(this,3,0);
        (**(code **)(iVar3 + 0xe8))(uVar2);
      }
    }
    iVar3 = *(int *)(this + 4);
  }
  *(uint *)(this + 0x7c) = -(uint)((*(uint *)(iVar3 + 0x1a4) & 0x100) != 0) & 0x10012f70;
  if ((*(byte *)(iVar3 + 0x1a4) & 0x40) == 0) {
    FUN_10017ad0();
    return;
  }
  *(code **)(this + 0x78) = ButtonSpark;
  (**(code **)(*(int *)this + 8))(0x3f000000);
  return;
}

