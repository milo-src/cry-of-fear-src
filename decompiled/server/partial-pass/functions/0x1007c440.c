// rea decompile_all
// name: CTapeRecorder::BlinkThink
// address: 0x1007c440
// body: available
// range: 0x1007c440-0x1007c5ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CTapeRecorder::BlinkThink(void) */

void __thiscall CTapeRecorder::BlinkThink(CTapeRecorder *this)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  
                    /* 0x7c440  20  ?BlinkThink@CTapeRecorder@@AAEXXZ */
  if (*DAT_10223188 <= *(float *)(this + 0x100) && *(float *)(this + 0x100) != *DAT_10223188) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  iVar2 = *(int *)(this + 4);
  local_c = *(undefined4 *)(iVar2 + 0xc);
  local_10 = *(undefined4 *)(iVar2 + 8);
  local_8 = *(float *)(iVar2 + 0x10) + 4.0;
  piVar3 = (int *)FUN_1009f400("sprites/glow01.spr",&local_10,1);
  *(undefined4 *)(piVar3[1] + 0x148) = 0x3dcccccd;
  piVar3[0x1e] = (int)CSprite::AnimateUntilDead;
  *(undefined4 *)(piVar3[1] + 0x13c) = 0x41200000;
  *(float *)(piVar3[1] + 0x1e8) = (float)piVar3[0x38] / 10.0 + *DAT_10223188;
  (**(code **)(*piVar3 + 8))(0);
  *(undefined4 *)(piVar3[1] + 0x14c) = 5;
  *(undefined4 *)(piVar3[1] + 0x154) = 0x43400000;
  *(undefined4 *)(piVar3[1] + 0x158) = 0;
  *(undefined4 *)(piVar3[1] + 0x15c) = 0;
  *(undefined4 *)(piVar3[1] + 0x150) = 0x437f0000;
  *(undefined4 *)(piVar3[1] + 0x160) = 0;
  iVar2 = piVar3[1];
  fVar1 = *(float *)(*(int *)(this + 4) + 0x10);
  *(undefined8 *)(iVar2 + 8) = *(undefined8 *)(*(int *)(this + 4) + 8);
  *(float *)(iVar2 + 0x10) = fVar1 + 4.0;
  *(float *)(this + 0x100) = *DAT_10223188 + 1.0;
  (**(code **)(*(int *)this + 8))(0x3dcccccd);
  return;
}

