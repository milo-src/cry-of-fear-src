// rea decompile_all
// name: CBasePlayer::PlayerDeathThink
// address: 0x100ea310
// body: available
// range: 0x100ea310-0x100ea585 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CBasePlayer::PlayerDeathThink(void) */

void __thiscall CBasePlayer::PlayerDeathThink(CBasePlayer *this)

{
  int iVar1;
  float10 fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_20;
  
                    /* 0xea310  223  ?PlayerDeathThink@CBasePlayer@@QAEXXZ */
  local_20 = 0.0;
  if (*(int *)(this + 0x5ac) != 0) {
    fVar2 = (float10)FUN_1000eda0(0);
    FUN_1000e5f0((float)fVar2);
  }
  if ((((*(float *)(this + 0x1f24) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x1f24))
       && (this[0x1f28] == (CBasePlayer)0x0)) && (DAT_10222ee4 != (int *)0x0)) &&
     (iVar1 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar1 == 0)) {
    this[0x1f28] = (CBasePlayer)0x1;
    if ((DAT_10223190 != 0) && (iVar1 = *(int *)(DAT_10223190 + 0xdc), iVar1 != 0)) {
      (*DAT_10223000)(1,DAT_102266e0,0,*(undefined4 *)(*(int *)(this + 4) + 0x20c));
      (*DAT_10223020)((int)DAT_10223188[0x26] + iVar1);
      (*DAT_10223004)();
    }
    (*DAT_10223000)(1,DAT_10226580,0,*(undefined4 *)(*(int *)(this + 4) + 0x20c));
    (*DAT_10223008)(0x23);
    (*DAT_10223008)(((byte)this[0x5b4] & 0x10) != 0);
    (*DAT_10223004)();
  }
  iVar1 = *(int *)(this + 4);
  if ((*(uint *)(iVar1 + 0x1a8) & 0x200) != 0) {
    dVar3 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                     *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                    *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
    if (dVar3 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    fVar4 = (float)dVar3;
    fVar6 = fVar4 - 20.0;
    if (0.0 < fVar6) {
      if (fVar4 == 0.0) {
        fVar4 = 1.0;
        fVar5 = local_20;
      }
      else {
        fVar4 = 1.0 / fVar4;
        local_20 = *(float *)(iVar1 + 0x20) * fVar4;
        fVar5 = *(float *)(iVar1 + 0x24) * fVar4;
        fVar4 = *(float *)(iVar1 + 0x28) * fVar4;
      }
      fVar4 = fVar4 * fVar6;
      *(ulonglong *)(iVar1 + 0x20) = CONCAT44(fVar5 * fVar6,local_20 * fVar6);
    }
    else {
      *(undefined8 *)(iVar1 + 0x20) = DAT_10222f34;
      fVar4 = DAT_10222f3c;
    }
    *(float *)(iVar1 + 0x28) = fVar4;
  }
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0x108) != 0) && ((*(uint *)(iVar1 + 0x1a8) & 0x200) != 0)) {
    *(undefined4 *)(iVar1 + 0x108) = 0;
    iVar1 = *(int *)(this + 4);
  }
  if (*(int *)(iVar1 + 0x174) == 1) {
    *(undefined4 *)(iVar1 + 0x174) = 2;
    iVar1 = *(int *)(this + 4);
  }
  *(undefined4 *)(iVar1 + 0x13c) = 0;
  *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 0x20;
  *(undefined4 *)(*(int *)(this + 4) + 0x13c) = 0;
  *(undefined4 *)(*(int *)(this + 4) + 0x184) = 0;
  *(undefined4 *)(this + 0x2654) = 0;
  FUN_10017ad0();
  return;
}

