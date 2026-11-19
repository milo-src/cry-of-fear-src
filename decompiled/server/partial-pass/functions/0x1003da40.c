// rea decompile_all
// name: CFlare::FlareThink
// address: 0x1003da40
// body: available
// range: 0x1003da40-0x1003dbfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CFlare::FlareThink(void) */

void __thiscall CFlare::FlareThink(CFlare *this)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
                    /* 0x3da40  130  ?FlareThink@CFlare@@QAEXXZ */
  if (*(int *)(*(int *)(this + 4) + 0x19c) != 0) {
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),1,"weapons/flare/flare_burn.wav",0,0,
                 0x20,100);
    return;
  }
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  iVar2 = *(int *)(this + 4);
  fVar1 = *DAT_10223188;
  if ((*(float *)(iVar2 + 0x208) <= fVar1 && fVar1 != *(float *)(iVar2 + 0x208)) &&
     (*(int *)(iVar2 + 0x248) == 1)) {
    *(undefined4 *)(iVar2 + 0x160) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 2;
    *(undefined4 *)(*(int *)(this + 4) + 0x114) = 0;
    FUN_100fc9f0(*(undefined4 *)(*(int *)(this + 4) + 0x20c),1,"weapons/flare/flare_burn.wav",0,0,
                 0x20,100);
    *(undefined4 *)(this + 0x78) = 0;
    return;
  }
  if (*(float *)(iVar2 + 0x1b8) <= fVar1 && fVar1 != *(float *)(iVar2 + 0x1b8)) {
    FUN_100fc9f0(*(undefined4 *)(iVar2 + 0x20c),1,"weapons/flare/flare_burn.wav",0x3e99999a,
                 0x3f4ccccd,0,100);
    *(float *)(*(int *)(this + 4) + 0x1b8) = *DAT_10223188 + 6.9;
    iVar2 = *(int *)(this + 4);
  }
  if ((*(uint *)(iVar2 + 0x1a8) & 0x200) != 0) {
    *(undefined4 *)(iVar2 + 0x50) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x58) = 0;
    iVar2 = *(int *)(this + 4);
    if ((char)*(uint *)(iVar2 + 0x118) < '\0') {
      *(uint *)(iVar2 + 0x118) = *(uint *)(iVar2 + 0x118) & 0xffffff7f;
      *(uint *)(*(int *)(this + 4) + 0x118) = *(uint *)(*(int *)(this + 4) + 0x118) | 2;
      iVar2 = *(int *)(this + 4);
    }
    *(undefined4 *)(iVar2 + 0x10c) = 1;
    FUN_10119fe0(this,*(int *)(this + 4) + 8);
    *(code **)(this + 0x80) = CBasePlayerItem::DefaultUse;
    if (*(int **)(this + 0x14) == (int *)0x0) {
      uVar3 = 2;
    }
    else {
      uVar3 = (**(code **)(**(int **)(this + 0x14) + 0x40))();
      uVar3 = uVar3 & 2;
    }
    *(uint *)(this + 0x108) = uVar3 | 8;
    if (*(int *)(*(int *)(this + 4) + 0x254) == 1) {
      *(code **)(this + 0x7c) = CBasePlayerItem::DefaultTouch;
    }
  }
  return;
}

