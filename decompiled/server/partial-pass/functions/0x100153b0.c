// rea decompile_all
// name: FUN_100153b0
// address: 0x100153b0
// body: available
// range: 0x100153b0-0x100155af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100153b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  code *pcVar9;
  int in_ECX;
  int iVar10;
  code *pcVar11;
  float fVar12;
  
  uVar8 = FUN_10012df0(*(undefined4 *)(in_ECX + 0x1dc));
  FUN_10116a30(uVar8);
  uVar8 = (*DAT_10223054)(uVar8);
  *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1ec) = uVar8;
  FUN_10101e00(*(undefined4 *)(in_ECX + 4));
  iVar10 = *(int *)(in_ECX + 4);
  if ((*(byte *)(iVar10 + 0x1a4) & 2) != 0) {
    *(ulonglong *)(iVar10 + 0x44) =
         CONCAT44(*(float *)(iVar10 + 0x48) * -1.0,*(float *)(iVar10 + 0x44) * -1.0);
    *(float *)(iVar10 + 0x4c) = *(float *)(iVar10 + 0x4c) * -1.0;
    iVar10 = *(int *)(in_ECX + 4);
  }
  *(undefined4 *)(iVar10 + 0x108) = 7;
  *(uint *)(*(int *)(in_ECX + 4) + 0x10c) = (~*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) << 2;
  (*DAT_10222f50)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                  *(int *)(*(int *)(in_ECX + 4) + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar10 = *(int *)(in_ECX + 4);
  if (*(float *)(iVar10 + 0x1fc) == 0.0) {
    *(undefined4 *)(iVar10 + 0x1fc) = 0x42200000;
    iVar10 = *(int *)(in_ECX + 4);
  }
  fVar12 = *(float *)(in_ECX + 0x10c);
  if (fVar12 == 0.0) {
    fVar12 = 1.0;
    *(undefined4 *)(in_ECX + 0x10c) = 0x3f800000;
  }
  if (0.0 < *(float *)(iVar10 + 0x164)) {
    *(undefined4 *)(iVar10 + 0x170) = 0x3f800000;
    iVar10 = *(int *)(in_ECX + 4);
    fVar12 = *(float *)(in_ECX + 0x10c);
  }
  fVar1 = *(float *)(in_ECX + 0x108);
  *(undefined4 *)(in_ECX + 0x100) = 1;
  *(undefined8 *)(in_ECX + 0x134) = *(undefined8 *)(iVar10 + 0x50);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(iVar10 + 0x58);
  fVar2 = *(float *)(iVar10 + 0x44);
  fVar3 = *(float *)(iVar10 + 0x48);
  fVar4 = *(float *)(iVar10 + 0x4c);
  fVar5 = *(float *)(iVar10 + 0x50);
  fVar6 = *(float *)(iVar10 + 0x54);
  fVar7 = *(float *)(iVar10 + 0x58);
  *(undefined4 *)(in_ECX + 0x1ac) = 1;
  *(ulonglong *)(in_ECX + 0x140) = CONCAT44(fVar3 * fVar1 + fVar6,fVar2 * fVar1 + fVar5);
  *(float *)(in_ECX + 0x148) = fVar4 * fVar1 + fVar7;
  *(uint *)(in_ECX + 0x1a8) = (uint)(fVar12 == -1.0);
  if ((*(uint *)(iVar10 + 0x1a4) & 0x100) == 0) {
    *(undefined4 *)(in_ECX + 0x7c) = 0;
    pcVar9 = CBaseButton::ButtonUse_IgnorePlayer;
    pcVar11 = CBaseButton::ButtonUse;
  }
  else {
    *(code **)(in_ECX + 0x7c) = CBaseButton::ButtonTouch;
    pcVar9 = CBaseButton::ButtonUse;
    pcVar11 = CBaseButton::ButtonUse_IgnorePlayer;
  }
  if ((*(uint *)(iVar10 + 0x1a4) & 0x200) == 0) {
    pcVar9 = pcVar11;
  }
  *(code **)(in_ECX + 0x80) = pcVar9;
  return;
}

