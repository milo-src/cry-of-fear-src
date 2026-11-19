// rea decompile_all
// name: CWheelchair::WheelchairThink
// address: 0x10087370
// body: available
// range: 0x10087370-0x1008763a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CWheelchair::WheelchairThink(void) */

void __thiscall CWheelchair::WheelchairThink(CWheelchair *this)

{
  float fVar1;
  int iVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
                    /* 0x87370  368  ?WheelchairThink@CWheelchair@@QAEXXZ */
  if (*(int *)(this + 900) != 0) {
    *(undefined4 *)(*(int *)(this + 4) + 0x164) =
         *(undefined4 *)(*(int *)(*(int *)(this + 900) + 4) + 0x164);
  }
  (*DAT_10222fb0)(*(undefined4 *)(*(int *)(this + 4) + 0x20c));
  if (*(float *)(this + 0x370) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x370)) {
    FUN_10119320(*(int *)(this + 4) + 0x50);
    iVar2 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar2 + 0x260);
    *(ulonglong *)(iVar2 + 0x20) =
         CONCAT44(*(float *)(iVar2 + 0x24) * fVar6,*(float *)(iVar2 + 0x20) * fVar6);
    *(float *)(iVar2 + 0x28) = *(float *)(iVar2 + 0x28) * fVar6;
    iVar2 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar2 + 0x260);
    *(ulonglong *)(iVar2 + 0x5c) =
         CONCAT44(*(float *)(iVar2 + 0x60) * fVar6,*(float *)(iVar2 + 0x5c) * fVar6);
    *(float *)(iVar2 + 100) = *(float *)(iVar2 + 100) * fVar6;
    iVar2 = *(int *)(this + 4);
    fVar6 = *(float *)(iVar2 + 0x20);
    dVar3 = (double)(fVar6 * fVar6 + *(float *)(iVar2 + 0x24) * *(float *)(iVar2 + 0x24) +
                    *(float *)(iVar2 + 0x28) * *(float *)(iVar2 + 0x28));
    if (dVar3 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    fVar1 = *(float *)(iVar2 + 600);
    fVar4 = 1.0;
    fVar5 = (float)dVar3;
    if (fVar1 < fVar5) {
      fVar8 = 0.0;
      fVar7 = fVar8;
      if (fVar5 != 0.0) {
        fVar5 = 1.0 / fVar5;
        fVar8 = fVar6 * fVar5;
        fVar4 = *(float *)(iVar2 + 0x28) * fVar5;
        fVar7 = *(float *)(iVar2 + 0x24) * fVar5;
      }
      *(ulonglong *)(iVar2 + 0x20) = CONCAT44(fVar7 * fVar1,fVar8 * fVar1);
      *(float *)(iVar2 + 0x28) = fVar4 * fVar1;
      iVar2 = *(int *)(this + 4);
    }
    fVar6 = *(float *)(iVar2 + 100);
    dVar3 = (double)(*(float *)(iVar2 + 0x5c) * *(float *)(iVar2 + 0x5c) +
                     *(float *)(iVar2 + 0x60) * *(float *)(iVar2 + 0x60) + fVar6 * fVar6);
    if (dVar3 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar3 = SQRT(dVar3);
    }
    fVar1 = *(float *)(iVar2 + 0x25c);
    fVar5 = (float)dVar3;
    if (fVar1 < fVar5) {
      fVar4 = 0.0;
      if (fVar5 == 0.0) {
        fVar6 = 1.0;
        fVar8 = fVar4;
      }
      else {
        fVar5 = 1.0 / fVar5;
        fVar4 = *(float *)(iVar2 + 0x5c) * fVar5;
        fVar8 = *(float *)(iVar2 + 0x60) * fVar5;
        fVar6 = fVar6 * fVar5;
      }
      *(ulonglong *)(iVar2 + 0x5c) = CONCAT44(fVar8 * fVar1,fVar4 * fVar1);
      *(float *)(iVar2 + 100) = fVar6 * fVar1;
    }
    *(float *)(this + 0x370) = *DAT_10223188 + 0.1;
  }
  if ((*(float *)(this + 0x374) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x374)) &&
     (iVar2 = FUN_1000e9b0(&DAT_101aa610), *(int *)(*(int *)(this + 4) + 300) != iVar2)) {
    FUN_10086c10(&DAT_101aa610);
    *(undefined4 *)(*(int *)(this + 4) + 0x248) = 0;
    *(undefined4 *)(*(int *)(this + 4) + 0x168) = 0;
  }
  return;
}

