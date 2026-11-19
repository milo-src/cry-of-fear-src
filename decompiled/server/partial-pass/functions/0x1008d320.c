// rea decompile_all
// name: CBaseDoor::DoorGoDown
// address: 0x1008d320
// body: available
// range: 0x1008d320-0x1008d47c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseDoor::DoorGoDown(void) */

void __thiscall CBaseDoor::DoorGoDown(CBaseDoor *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
                    /* 0x8d320  92  ?DoorGoDown@CBaseDoor@@QAEXXZ */
  piVar6 = *(int **)(this + 4);
  if (-1 < piVar6[0x69]) {
    FUN_100fc9f0(piVar6[0x83],6,piVar6[0x7c] + *(int *)(DAT_10223188 + 0x98),0x3f800000,0x3f4ccccd,0
                 ,100);
    piVar6 = *(int **)(this + 4);
  }
  *(undefined4 *)(this + 0x100) = 3;
  pcVar5 = "func_door_rotating";
  *(code **)(this + 0x154) = DoorHitBottom;
  pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar6);
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1008d3b1:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1008d3b6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1008d3b1;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1008d3b6:
  if (uVar3 == 0) {
    if (*(int *)(this + 0x1b0) != 0) {
      if (*(int *)(this + 0x1ac) == 0) {
        uVar8 = 3;
      }
      else {
        uVar8 = 0;
      }
      uVar4 = FUN_10017790(uVar8,0);
      FUN_10102930(uVar4,uVar8,uVar3);
    }
    FUN_10101b50(*(undefined4 *)(this + 0x134),*(undefined4 *)(this + 0x138),
                 *(undefined4 *)(this + 0x13c),*(undefined4 *)(*(int *)(this + 4) + 0x1fc));
    return;
  }
  if (*(int *)(this + 0x1b0) != 0) {
    uVar9 = 0;
    uVar4 = 0;
    uVar8 = FUN_10017790(0,0);
    FUN_10102930(uVar8,uVar4,uVar9);
    piVar6 = *(int **)(this + 4);
  }
  FUN_101025c0(*(undefined4 *)(this + 0x11c),*(undefined4 *)(this + 0x120),
               *(undefined4 *)(this + 0x124),piVar6[0x7f]);
  return;
}

