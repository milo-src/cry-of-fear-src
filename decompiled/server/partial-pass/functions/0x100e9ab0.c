// rea decompile_all
// name: CBasePlayer::MultiplayerPlayerDeathThink
// address: 0x100e9ab0
// body: available
// range: 0x100e9ab0-0x100e9e46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBasePlayer::MultiplayerPlayerDeathThink(void) */

void __thiscall CBasePlayer::MultiplayerPlayerDeathThink(CBasePlayer *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0xe9ab0  209  ?MultiplayerPlayerDeathThink@CBasePlayer@@QAEXXZ */
  if ((*(float *)(*(int *)(this + 4) + 0x260) == 3.0) &&
     (*(float *)(this + 0x4fc) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x4fc))) {
    *(undefined4 *)(*(int *)(this + 4) + 0x174) = 0;
    iVar3 = 1;
    *(undefined4 *)(*(int *)(this + 4) + 0x108) = 3;
    *(uint *)(*(int *)(this + 4) + 0x1a8) = *(uint *)(*(int *)(this + 4) + 0x1a8) & 0xfffffdff;
    *(undefined4 *)(*(int *)(this + 4) + 0x164) = 0x41f00000;
    fVar4 = *(float *)(*(int *)(this + 4) + 0x164);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0 < (int)DAT_10223188[0x24]) {
      do {
        iVar1 = FUN_10119680(iVar3);
        if (iVar1 != 0) {
          (*DAT_10223000)(1,DAT_102264d0,0,*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c));
          (*DAT_10223008)((int)fVar4);
          uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
          (*DAT_10223008)(uVar2);
          iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))();
          (*DAT_10223008)(iVar1 != 0);
          (*DAT_10223004)();
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= (int)DAT_10223188[0x24]);
    }
    if (*(int **)(this + 0x252c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x252c) + 0x144))();
      (*DAT_10223000)(1,DAT_102264cc,0,*(undefined4 *)(*(int *)(this + 4) + 0x20c));
      (*DAT_10223008)(1);
      (*DAT_10223008)(*(undefined4 *)(*(int *)(this + 0x252c) + 0x168));
      (*DAT_10223008)(*(undefined4 *)(*(int *)(this + 0x252c) + 0x1e4));
      (*DAT_10223004)();
    }
    FUN_100f67f0();
    *(undefined4 *)(*(int *)(this + 4) + 0x260) = 0;
    FUN_10119810(this,&DAT_101b5fb0,4,0);
    return;
  }
  if (((((this[0x4e8] == (CBasePlayer)0x1) && (*(int *)(this + 0x4f0) < 1)) &&
       (*(float *)(this + 0x1f24) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x1f24)))
      && ((this[0x1f28] == (CBasePlayer)0x0 && (DAT_10222ee4 != (int *)0x0)))) &&
     (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0)) {
    this[0x1f28] = (CBasePlayer)0x1;
    if ((DAT_10222e10 != 0) && (iVar3 = 1, 0 < (int)DAT_10223188[0x24])) {
      do {
        iVar1 = FUN_10119680(iVar3);
        if (iVar1 != 0) {
          FUN_1002a480(iVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 <= (int)DAT_10223188[0x24]);
    }
    (*DAT_10222f60)((int)DAT_10223188[0x26] + (int)DAT_10223188[3],0);
  }
  iVar3 = *(int *)(this + 4);
  if (((*(float *)(iVar3 + 0x260) == 3.0) &&
      (*DAT_10223188 <= *(float *)(this + 0x4fc) && *(float *)(this + 0x4fc) != *DAT_10223188)) &&
     (*(int *)(iVar3 + 0x174) == 2)) {
    FUN_1000eda0(0);
    return;
  }
  if (((*(int *)(iVar3 + 0xb4) != 0) && (*(int *)(this + 0xf8) == 0)) &&
     (*(int *)(iVar3 + 0x174) == 1)) {
    FUN_1000eda0(0);
    fVar4 = *(float *)(this + 0x2654);
    *(float *)(this + 0x2654) = fVar4 + 1.0;
    if (fVar4 + 1.0 < 120.0) {
      return;
    }
  }
  iVar3 = *(int *)(this + 4);
  if ((*(int *)(iVar3 + 0x108) != 0) && ((*(uint *)(iVar3 + 0x1a8) & 0x200) != 0)) {
    *(undefined4 *)(iVar3 + 0x108) = 0;
    iVar3 = *(int *)(this + 4);
  }
  if (*(int *)(iVar3 + 0x174) == 1) {
    *(undefined4 *)(iVar3 + 0x174) = 2;
    iVar3 = *(int *)(this + 4);
  }
  *(undefined4 *)(iVar3 + 0x13c) = 0;
  local_10 = 0x41800000;
  local_c = 0x41800000;
  local_8 = 0x42100000;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x20;
  local_1c = 0xc1800000;
  local_18 = 0xc1800000;
  local_14 = 0xc2100000;
  *(undefined4 *)(*(int *)(this + 4) + 0x13c) = 0;
  FUN_1011a030(*(undefined4 *)(this + 4),&local_1c,&local_10);
  return;
}

