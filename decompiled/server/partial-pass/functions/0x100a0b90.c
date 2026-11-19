// rea decompile_all
// name: CEnvModel::Think
// address: 0x100a0b90
// body: available
// range: 0x100a0b90-0x100a0dae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: virtual void __thiscall CEnvModel::Think(void) */

void __thiscall CEnvModel::Think(CEnvModel *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* 0xa0b90  320  ?Think@CEnvModel@@EAEXXZ */
  if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) == 0) goto LAB_100a0d1c;
  iVar3 = FUN_10118460(0,"player");
  if (iVar3 == 0) {
LAB_100a0d00:
    if (DAT_10226477 == '\0') goto LAB_100a0d1c;
  }
  else if (DAT_10226477 == '\0') {
    FUN_10119320(*(int *)(this + 4) + 0x50);
    iVar3 = *(int *)(iVar3 + 4);
    iVar1 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar3 + 8) - *(float *)(iVar1 + 8);
    fVar8 = *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc);
    dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
    if (dVar7 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar7 = SQRT(dVar7);
    }
    if ((float)dVar7 == 0.0) {
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    else {
      fVar10 = 1.0 / (float)dVar7;
      fVar9 = fVar6 * fVar10;
      fVar10 = fVar8 * fVar10;
    }
    if (0.0 <= *(float *)(DAT_10223188 + 0x2c) * fVar10 + *(float *)(DAT_10223188 + 0x28) * fVar9) {
      fVar5 = (float10)FUN_100a9c90(fVar6,fVar8,*(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10))
      ;
      fVar6 = (float)fVar5 - *(float *)(*(int *)(this + 4) + 0x54);
      if (180.0 < fVar6) {
        fVar6 = fVar6 - 360.0;
      }
      if (fVar6 < -180.0) {
        fVar6 = fVar6 + 360.0;
      }
      FUN_1000eb70(0,fVar6);
    }
    goto LAB_100a0d00;
  }
  FUN_1000eb70(0,0);
LAB_100a0d1c:
  FUN_1000eda0(0);
  if ((*(int *)(this + 0xf8) != 0) && (*(int *)(this + 0xfc) == 0)) {
    uVar2 = *(uint *)(*(int *)(this + 4) + 0x1a4);
    if ((uVar2 & 1) == 0) {
      iVar3 = *(int *)(this + 0x118);
    }
    else {
      iVar3 = *(int *)(this + 0x11c);
    }
    if (iVar3 != 2) {
      return;
    }
    uVar4 = uVar2 & 0xfffffffe;
    if ((uVar2 & 1) == 0) {
      uVar4 = uVar2 | 1;
    }
    *(uint *)(*(int *)(this + 4) + 0x1a4) = uVar4;
    FUN_1009bed0();
  }
  if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 8) == 0) {
    (**(code **)(*(int *)this + 8))(0x3dcccccd);
    return;
  }
  (**(code **)(*(int *)this + 8))(0);
  return;
}

