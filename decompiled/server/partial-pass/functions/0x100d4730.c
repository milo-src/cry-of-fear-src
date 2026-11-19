// rea decompile_all
// name: CFuncTrackTrain::Find
// address: 0x100d4730
// body: available
// range: 0x100d4730-0x100d491b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFuncTrackTrain::Find(void) */

void __thiscall CFuncTrackTrain::Find(CFuncTrackTrain *this)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  char *pcVar6;
  bool bVar7;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
                    /* 0xd4730  121  ?Find@CFuncTrackTrain@@QAEXXZ */
  iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1cc));
  *(int *)(this + 0xe0) = iVar3;
  if (iVar3 != 0) {
    pcVar6 = "path_track";
    piVar2 = *(int **)(iVar3 + 4);
    pbVar5 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *piVar2);
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < (byte)*pcVar6;
      if (bVar1 != *pcVar6) {
LAB_100d47a0:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_100d47a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < (byte)pcVar6[1];
      if (bVar1 != pcVar6[1]) goto LAB_100d47a0;
      pbVar5 = pbVar5 + 2;
      pcVar6 = pcVar6 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_100d47a5:
    if (uVar4 != 0) {
      (*DAT_1022303c)(4,"func_track_train must be on a path of path_track\n");
      *(undefined4 *)(this + 0xe0) = 0;
      return;
    }
    local_1c = (float)piVar2[2];
    local_10 = (float)piVar2[4] + *(float *)(this + 0xe8);
    local_18 = (float)piVar2[3];
    local_14 = local_10 - *(float *)(this + 0xe8);
    local_c = local_18;
    local_8 = local_1c;
    FUN_100d2200(&local_1c,*(undefined4 *)(this + 0xe4),0);
    local_34 = local_1c - local_8;
    local_14 = *(float *)(this + 0xe8) + local_14;
    local_30 = local_18 - local_c;
    local_2c = local_14 - local_10;
    FUN_1011a8d0(&local_28,&local_34);
    local_24 = local_24 + 180.0;
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) != 0) {
      local_28 = 0;
    }
    FUN_100c48e0(this,local_28,local_24,local_20);
    FUN_100c4550(this,local_8,local_c,local_10);
    FUN_100d6810(0x3dcccccd,0);
    *(code **)(this + 0x78) = PostponeNext;
    *(undefined4 *)(*(int *)(this + 4) + 0x1fc) = *(undefined4 *)(this + 0xf4);
    FUN_100d88a0();
  }
  return;
}

