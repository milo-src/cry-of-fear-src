// rea decompile_all
// name: CBaseDoor::DoorGoUp
// address: 0x1008d480
// body: available
// range: 0x1008d480-0x1008d6eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBaseDoor::DoorGoUp(void) */

void __thiscall CBaseDoor::DoorGoUp(CBaseDoor *this)

{
  byte bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0x8d480  93  ?DoorGoUp@CBaseDoor@@QAEXXZ */
  local_8 = 1.0;
  iVar5 = *(int *)(this + 4);
  if (-1 < *(int *)(iVar5 + 0x1a4)) {
    FUN_100fc9f0(*(undefined4 *)(iVar5 + 0x20c),6,
                 *(int *)(iVar5 + 0x1f0) + *(int *)(DAT_10223188 + 0x98),0x3f800000,0x3f4ccccd,0,100
                );
  }
  *(undefined4 *)(this + 0x100) = 2;
  *(code **)(this + 0x154) = DoorHitTop;
  if (*(int *)(this + 0x1b0) != 0) {
    uVar10 = 0;
    if (*(int *)(this + 0x1ac) == 0) {
      uVar9 = 3;
    }
    else {
      uVar9 = 1;
    }
    uVar2 = FUN_10017790(uVar9,0);
    FUN_10102930(uVar2,uVar9,uVar10);
  }
  pcVar7 = "func_door_rotating";
  pbVar3 = (byte *)(*(int *)(DAT_10223188 + 0x98) + **(int **)(this + 4));
  do {
    bVar1 = *pbVar3;
    bVar8 = bVar1 < (byte)*pcVar7;
    if (bVar1 != *pcVar7) {
LAB_1008d558:
      uVar4 = -(uint)bVar8 | 1;
      goto LAB_1008d55d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar3[1];
    bVar8 = bVar1 < (byte)pcVar7[1];
    if (bVar1 != pcVar7[1]) goto LAB_1008d558;
    pbVar3 = pbVar3 + 2;
    pcVar7 = pcVar7 + 2;
  } while (bVar1 != 0);
  uVar4 = 0;
LAB_1008d55d:
  if (uVar4 == 0) {
    iVar5 = FUN_10017780();
    if (iVar5 != 0) {
      iVar6 = FUN_100177a0();
      iVar5 = *(int *)(this + 4);
      iVar6 = *(int *)(iVar6 + 4);
      if (((*(byte *)(iVar5 + 0x1a4) & 0x10) == 0) && (*(float *)(iVar5 + 0x48) != 0.0)) {
        local_c = *(float *)(iVar6 + 8) - *(float *)(iVar5 + 8);
        local_10 = *(float *)(iVar6 + 0xc) - *(float *)(iVar5 + 0xc);
        local_1c = 0;
        local_14 = 0;
        local_18 = *(undefined4 *)(iVar6 + 0x54);
        FUN_10119320(&local_1c);
        FUN_10119320(iVar6 + 0x50);
        if (((*(float *)(iVar6 + 0xc) + *(float *)(DAT_10223188 + 0x2c) * 10.0) -
            *(float *)(*(int *)(this + 4) + 0xc)) * local_c -
            ((*(float *)(iVar6 + 8) + *(float *)(DAT_10223188 + 0x28) * 10.0) -
            *(float *)(*(int *)(this + 4) + 8)) * local_10 < 0.0) {
          local_8 = -1.0;
        }
      }
    }
    FUN_10101b50(*(float *)(this + 0x140) * local_8,*(float *)(this + 0x144) * local_8,
                 *(float *)(this + 0x148) * local_8,*(undefined4 *)(*(int *)(this + 4) + 0x1fc));
    return;
  }
  FUN_101025c0(*(undefined4 *)(this + 0x128),*(undefined4 *)(this + 300),
               *(undefined4 *)(this + 0x130),(*(int **)(this + 4))[0x7f]);
  return;
}

