// rea decompile_all
// name: CFuncTrackChange::Find
// address: 0x100d44e0
// body: available
// range: 0x100d44e0-0x100d4722 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncTrackChange::Find(void) */

void __thiscall CFuncTrackChange::Find(CFuncTrackChange *this)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  char *pcVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
                    /* 0xd44e0  120  ?Find@CFuncTrackChange@@QAEXXZ */
  iVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1ac));
  if (iVar2 != 0) {
    pcVar7 = "path_track";
    pbVar6 = (byte *)(**(int **)(iVar2 + 4) + *(int *)(DAT_10223188 + 0x98));
    do {
      bVar1 = *pbVar6;
      bVar8 = bVar1 < (byte)*pcVar7;
      if (bVar1 != *pcVar7) {
LAB_100d4547:
        uVar3 = -(uint)bVar8 | 1;
        goto LAB_100d454c;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar8 = bVar1 < (byte)pcVar7[1];
      if (bVar1 != pcVar7[1]) goto LAB_100d4547;
      pbVar6 = pbVar6 + 2;
      pcVar7 = pcVar7 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_100d454c:
    if (uVar3 == 0) {
      *(int *)(this + 0x1a0) = iVar2;
      iVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1b0));
      if (iVar2 != 0) {
        iVar4 = FUN_1000aaf0(*(undefined4 *)(iVar2 + 4),"path_track");
        if (iVar4 != 0) {
          *(int *)(this + 0x1a4) = iVar2;
          iVar2 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1b4));
          if (iVar2 != 0) {
            iVar4 = FUN_1000aaf0(*(undefined4 *)(iVar2 + 4),"func_tracktrain");
            if (iVar4 != 0) {
              iVar4 = *(int *)(this + 4);
              *(int *)(this + 0x1a8) = iVar2;
              fVar11 = (*(float *)(iVar4 + 0xc4) + *(float *)(iVar4 + 0xd0)) * 0.5;
              fVar10 = (*(float *)(iVar4 + 0xd4) + *(float *)(iVar4 + 200)) * 0.5;
              fVar9 = (*(float *)(iVar4 + 0xd8) + *(float *)(iVar4 + 0xcc)) * 0.5;
              uVar5 = FUN_100d2660(fVar11,fVar10,fVar9);
              *(undefined4 *)(this + 0x1a4) = uVar5;
              uVar5 = FUN_100d2660(fVar11,fVar10,fVar9);
              *(undefined4 *)(this + 0x1a0) = uVar5;
              (**(code **)(*(int *)this + 0x134))(*(undefined4 *)(this + 0x100));
              *(undefined4 *)(this + 0x78) = 0;
              return;
            }
          }
          (*DAT_1022303c)(4,"Can\'t find train for track change! %s\n",
                          *(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1b4));
          return;
        }
      }
      (*DAT_1022303c)(4,"Can\'t find bottom track for track change! %s\n",
                      *(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1b0));
      return;
    }
  }
  (*DAT_1022303c)(4,"Can\'t find top track for track change! %s\n",
                  *(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x1ac));
  return;
}

