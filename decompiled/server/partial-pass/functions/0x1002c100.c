// rea decompile_all
// name: CCutsceneModel::StartNextAnimation
// address: 0x1002c100
// body: available
// range: 0x1002c100-0x1002c22c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CCutsceneModel::StartNextAnimation(void) */

void __thiscall CCutsceneModel::StartNextAnimation(CCutsceneModel *this)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  
                    /* 0x2c100  291  ?StartNextAnimation@CCutsceneModel@@QAEXXZ */
  if (0 < *(int *)(this + 0x100)) {
    *(float *)(*(int *)(this + 4) + 0x10) =
         (float)*(int *)(this + 0x100) + *(float *)(*(int *)(this + 4) + 0x10);
    *(undefined4 *)(this + 0x100) = 0;
  }
  pcVar5 = "climb_up_loop";
  iVar6 = *(int *)(this + *(int *)(this + 0x18c) * 4 + 0x104);
  pbVar2 = (byte *)(*(int *)(DAT_10223188 + 0x98) + iVar6);
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < (byte)*pcVar5;
    if (bVar1 != *pcVar5) {
LAB_1002c171:
      uVar3 = -(uint)bVar7 | 1;
      goto LAB_1002c176;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar7 = bVar1 < (byte)pcVar5[1];
    if (bVar1 != pcVar5[1]) goto LAB_1002c171;
    pbVar2 = pbVar2 + 2;
    pcVar5 = pcVar5 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_1002c176:
  if (uVar3 == 0) {
    *(undefined4 *)(this + 0x100) = 0x30;
    iVar6 = *(int *)(this + *(int *)(this + 0x18c) * 4 + 0x104);
  }
  FUN_1002bfb0(*(int *)(DAT_10223188 + 0x98) + iVar6);
  if (*(int *)(this + 0x18c) < *(int *)(this + 0x188)) {
    uVar4 = (*DAT_10223070)(*(undefined4 *)(*(int *)(this + 4) + 0x20c),
                            *(int *)(this + *(int *)(this + 0x18c) * 4 + 0x104) +
                            *(int *)(DAT_10223188 + 0x98));
    fVar8 = (float10)FUN_1000f3e0(uVar4);
    if ((float)fVar8 != 0.0) {
      (**(code **)(*(int *)this + 8))((float)fVar8);
      *(int *)(this + 0x18c) = *(int *)(this + 0x18c) + 1;
      return;
    }
    (*DAT_1022303c)(1,"Unable to find delay\n");
  }
  *(int *)(this + 0x18c) = *(int *)(this + 0x18c) + 1;
  return;
}

