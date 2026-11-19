// rea decompile_all
// name: FUN_10014cc0
// address: 0x10014cc0
// body: available
// range: 0x10014cc0-0x10015003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10014cc0(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int *in_ECX;
  code *pcVar5;
  double dVar6;
  float fVar7;
  float fStack_18;
  
  uVar2 = FUN_10012df0(in_ECX[0x77]);
  FUN_10116a30(uVar2);
  uVar2 = (*DAT_10223054)(uVar2);
  *(undefined4 *)(in_ECX[1] + 0x1ec) = uVar2;
  (**(code **)(*in_ECX + 0x30))();
  iVar3 = in_ECX[1];
  if ((*(byte *)(iVar3 + 0x1a4) & 0x40) != 0) {
    in_ECX[0x1e] = (int)CBaseButton::ButtonSpark;
    (**(code **)(*in_ECX + 8))(0x3f000000);
    iVar3 = in_ECX[1];
  }
  FUN_10102b80(iVar3);
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  iVar3 = in_ECX[1];
  if ((*(byte *)(iVar3 + 0x1a4) & 0x80) == 0) {
    *(undefined4 *)(iVar3 + 0x10c) = 4;
  }
  else {
    *(undefined4 *)(iVar3 + 0x10c) = 0;
    *(undefined4 *)(in_ECX[1] + 0x110) = 0xffffffff;
  }
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  *(bool *)(in_ECX + 0x60) = in_ECX[99] != 0;
  iVar3 = in_ECX[1];
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  if (*(float *)(iVar3 + 0x1fc) == 0.0) {
    *(undefined4 *)(iVar3 + 0x1fc) = 0x42200000;
    iVar3 = in_ECX[1];
  }
  if (0.0 < *(float *)(iVar3 + 0x164)) {
    *(undefined4 *)(iVar3 + 0x170) = 0x3f800000;
    iVar3 = in_ECX[1];
  }
  fStack_18 = (float)in_ECX[0x43];
  if (fStack_18 == 0.0) {
    in_ECX[0x43] = 0x3f800000;
    fStack_18 = 1.0;
  }
  fVar7 = (float)in_ECX[0x44];
  if (fVar7 == 0.0) {
    fVar7 = 4.0;
    in_ECX[0x44] = 0x40800000;
  }
  in_ECX[0x40] = 1;
  *(undefined8 *)(in_ECX + 0x47) = *(undefined8 *)(iVar3 + 8);
  in_ECX[0x49] = *(int *)(iVar3 + 0x10);
  fVar1 = *(float *)(iVar3 + 0x4c);
  fVar7 = (ABS((*(float *)(iVar3 + 0xf4) - 2.0) * *(float *)(iVar3 + 0x44)) +
           ABS((*(float *)(iVar3 + 0xf8) - 2.0) * *(float *)(iVar3 + 0x48)) +
          ABS((*(float *)(iVar3 + 0xfc) - 2.0) * fVar1)) - fVar7;
  *(ulonglong *)(in_ECX + 0x4a) =
       CONCAT44(*(float *)(iVar3 + 0x48) * fVar7 + (float)in_ECX[0x48],
                *(float *)(iVar3 + 0x44) * fVar7 + (float)in_ECX[0x47]);
  in_ECX[0x4c] = (int)(fVar1 * fVar7 + (float)in_ECX[0x49]);
  fVar7 = (float)in_ECX[0x4a] - (float)in_ECX[0x47];
  dVar6 = (double)(((float)in_ECX[0x4b] - (float)in_ECX[0x48]) *
                   ((float)in_ECX[0x4b] - (float)in_ECX[0x48]) + fVar7 * fVar7 +
                  ((float)in_ECX[0x4c] - (float)in_ECX[0x49]) *
                  ((float)in_ECX[0x4c] - (float)in_ECX[0x49]));
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  if (((float)dVar6 < 1.0) || ((*(byte *)(iVar3 + 0x1a4) & 1) != 0)) {
    *(undefined8 *)(in_ECX + 0x4a) = *(undefined8 *)(in_ECX + 0x47);
    in_ECX[0x4c] = in_ECX[0x49];
  }
  in_ECX[0x6b] = 0;
  in_ECX[0x6a] = (uint)(fStack_18 == -1.0);
  if ((*(uint *)(iVar3 + 0x1a4) & 0x100) == 0) {
    in_ECX[0x1f] = 0;
    pcVar4 = CBaseButton::ButtonUse;
    pcVar5 = CBaseButton::ButtonUse_IgnorePlayer;
  }
  else {
    in_ECX[0x1f] = (int)CBaseButton::ButtonTouch;
    pcVar4 = CBaseButton::ButtonUse_IgnorePlayer;
    pcVar5 = CBaseButton::ButtonUse;
  }
  if ((*(uint *)(iVar3 + 0x1a4) & 0x200) != 0) {
    pcVar4 = pcVar5;
  }
  in_ECX[0x20] = (int)pcVar4;
  return;
}

