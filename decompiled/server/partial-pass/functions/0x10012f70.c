// rea decompile_all
// name: CBaseButton::ButtonTouch
// address: 0x10012f70
// body: available
// range: 0x10012f70-0x10013088 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseButton::ButtonTouch(class CBaseEntity *) */

void __thiscall CBaseButton::ButtonTouch(CBaseButton *this,CBaseEntity *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
                    /* 0x12f70  34  ?ButtonTouch@CBaseButton@@QAEXPAVCBaseEntity@@@Z */
  pcVar7 = "player";
  pbVar6 = (byte *)(**(int **)(param_1 + 4) + *(int *)(DAT_10223188 + 0x98));
  do {
    bVar1 = *pbVar6;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_10012fb0:
      uVar2 = -(uint)bVar8 | 1;
      goto LAB_10012fb5;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_10012fb0;
    pbVar6 = pbVar6 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar2 = 0;
LAB_10012fb5:
  if (uVar2 == 0) {
    FUN_10017740(param_1);
    iVar3 = FUN_10012d00();
    if (iVar3 != 0) {
      iVar4 = FUN_10119060(*(undefined4 *)(this + 0x17c),param_1);
      if (iVar4 == 0) {
        FUN_1008e010(*(undefined4 *)(this + 4),this + 0x1b4,1,1);
        return;
      }
      *(undefined4 *)(this + 0x7c) = 0;
      if (iVar3 == 2) {
        FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),2,
                     *(int *)(*(int *)(this + 4) + 0x1ec) + *(int *)(DAT_10223188 + 0x98),0x3f800000
                     ,0x3f4ccccd,0,100);
        uVar10 = 0;
        uVar9 = 3;
        uVar5 = FUN_10017790(3,0);
        FUN_10102930(uVar5,uVar9,uVar10);
        ButtonReturn(this);
        return;
      }
      FUN_10012a80();
    }
  }
  return;
}

