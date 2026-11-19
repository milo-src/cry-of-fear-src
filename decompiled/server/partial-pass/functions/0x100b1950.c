// rea decompile_all
// name: CGrenade::ExplodeTouch
// address: 0x100b1950
// body: available
// range: 0x100b1950-0x100b1b57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CGrenade::ExplodeTouch(class CBaseEntity *) */

void __thiscall CGrenade::ExplodeTouch(CGrenade *this,CBaseEntity *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [60];
  
                    /* 0xb1950  112  ?ExplodeTouch@CGrenade@@QAEXPAVCBaseEntity@@@Z */
  *(undefined4 *)(*(int *)(this + 4) + 0x194) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20c);
  iVar1 = *(int *)(this + 4);
  dVar4 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                   *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                  *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
  if (dVar4 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  if ((float)dVar4 == 0.0) {
    fVar9 = 1.0;
    fVar5 = 0.0;
    fVar7 = 0.0;
  }
  else {
    fVar9 = 1.0 / (float)dVar4;
    fVar5 = *(float *)(iVar1 + 0x20) * fVar9;
    fVar7 = *(float *)(iVar1 + 0x24) * fVar9;
    fVar9 = *(float *)(iVar1 + 0x28) * fVar9;
  }
  fVar10 = *(float *)(iVar1 + 8) - fVar5 * 32.0;
  fVar6 = *(float *)(iVar1 + 0xc) - fVar7 * 32.0;
  fVar2 = *(float *)(iVar1 + 0x10) - fVar9 * 32.0;
  fVar9 = *(float *)(iVar1 + 0x24);
  fVar5 = *(float *)(iVar1 + 0x28);
  fVar7 = *(float *)(iVar1 + 0x20);
  dVar4 = (double)(fVar7 * fVar7 + fVar9 * fVar9 + fVar5 * fVar5);
  local_4c = fVar10;
  local_48 = fVar6;
  local_44 = fVar2;
  if (dVar4 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  fVar8 = 0.0;
  if ((float)dVar4 == 0.0) {
    fVar5 = 1.0;
    fVar9 = 0.0;
  }
  else {
    fVar3 = 1.0 / (float)dVar4;
    fVar8 = fVar7 * fVar3;
    fVar9 = fVar9 * fVar3;
    fVar5 = fVar5 * fVar3;
  }
  local_58 = fVar8 * 64.0 + fVar10;
  local_54 = fVar9 * 64.0 + fVar6;
  local_50 = fVar5 * 64.0 + fVar2;
  FUN_1011a800(&local_4c,&local_58,1,*(undefined4 *)(iVar1 + 0x20c),local_40);
  FUN_100b1540(local_40,0x40);
  return;
}

