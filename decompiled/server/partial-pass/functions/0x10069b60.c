// rea decompile_all
// name: CRoofBossHead::TrackTarget
// address: 0x10069b60
// body: available
// range: 0x10069b60-0x1006a063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CRoofBossHead::TrackTarget(void) */

void __thiscall CRoofBossHead::TrackTarget(CRoofBossHead *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fStack_30;
  float fStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
                    /* 0x69b60  338  ?TrackTarget@CRoofBossHead@@QAEXXZ */
  FUN_1000eda0(0);
  if (*(float *)(this + 0x368) <= *DAT_10223188 && *DAT_10223188 != *(float *)(this + 0x368)) {
    *(undefined4 *)(this + 0x7c) = 0;
    *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
    *(float *)(*(int *)(this + 4) + 0x104) = *DAT_10223188 + 0.1;
    return;
  }
  iVar1 = FUN_10017780();
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0x124))(0x200);
    uVar2 = (**(code **)(*(int *)this + 0x14c))();
    FUN_10017740(uVar2);
  }
  iVar1 = FUN_10017780();
  if (iVar1 != 0) {
    iVar1 = *(int *)this;
    uVar2 = FUN_10017790();
    iVar1 = (**(code **)(iVar1 + 0x114))(uVar2);
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_100177a0();
      puVar4 = (undefined8 *)(**(code **)(*piVar3 + 0x108))(&fStack_14,*(int *)(this + 4) + 8);
      iVar1 = *(int *)(this + 4);
      *(undefined8 *)(this + 0x2f4) = *puVar4;
      fVar8 = *(float *)(puVar4 + 1);
      goto LAB_10069cba;
    }
  }
  iVar1 = *(int *)(this + 4);
  fVar6 = *(float *)(this + 0x36c);
  fVar8 = *(float *)(iVar1 + 0x28) * fVar6 * 0.1 + *(float *)(this + 0x2fc);
  *(ulonglong *)(this + 0x2f4) =
       CONCAT44(*(float *)(iVar1 + 0x24) * fVar6 * 0.1 + *(float *)(this + 0x2f8),
                *(float *)(iVar1 + 0x20) * fVar6 * 0.1 + *(float *)(this + 0x2f4));
  fStack_c = fVar8;
LAB_10069cba:
  *(float *)(this + 0x2fc) = fVar8;
  fStack_2c = *(float *)(this + 0x2f8) - *(float *)(iVar1 + 0xc);
  fStack_30 = *(float *)(this + 0x2f4) - *(float *)(iVar1 + 8);
  fVar8 = *(float *)(this + 0x2fc) - *(float *)(iVar1 + 0x10);
  dVar7 = (double)(fStack_2c * fStack_2c + fStack_30 * fStack_30 + fVar8 * fVar8);
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  if ((float)dVar7 == 0.0) {
    fStack_30 = 0.0;
    fStack_2c = 0.0;
    fVar6 = 1.0;
  }
  else {
    fVar6 = 1.0 / (float)dVar7;
    fStack_30 = fVar6 * fStack_30;
    fStack_2c = fVar6 * fStack_2c;
    fVar6 = fVar6 * fVar8;
  }
  dVar7 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                   *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                  *(float *)(iVar1 + 0x28) * *(float *)(iVar1 + 0x28));
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar8 = (float)dVar7;
  fStack_18 = fVar6;
  fStack_20 = fStack_30;
  fStack_1c = fStack_2c;
  if (0.1 <= fVar8) {
    if (fVar8 == 0.0) {
      fStack_20 = 0.0;
      fStack_1c = 0.0;
      fStack_18 = 1.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fStack_20 = *(float *)(iVar1 + 0x20) * fVar8;
      fStack_1c = *(float *)(iVar1 + 0x24) * fVar8;
      fStack_18 = *(float *)(iVar1 + 0x28) * fVar8;
    }
  }
  fStack_2c = fStack_1c + fStack_2c;
  fStack_30 = fStack_20 + fStack_30;
  fStack_c = fStack_18;
  fStack_18 = fStack_18 + fVar6;
  dVar7 = (double)(fStack_2c * fStack_2c + fStack_30 * fStack_30 + fStack_18 * fStack_18);
  fStack_14 = fStack_20;
  fStack_10 = fStack_1c;
  if (dVar7 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  if ((float)dVar7 == 0.0) {
    fStack_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 1.0;
  }
  else {
    fVar8 = 1.0 / (float)dVar7;
    fStack_20 = fVar8 * fStack_30;
    fStack_1c = fVar8 * fStack_2c;
    fStack_18 = fVar8 * fStack_18;
  }
  *(ulonglong *)(iVar1 + 0x20) = CONCAT44(fStack_1c,fStack_20);
  *(float *)(iVar1 + 0x28) = fStack_18;
  iVar1 = *(int *)(this + 4);
  if ((*(int *)(iVar1 + 0x19c) != 0) && ((*(byte *)(*(int *)(iVar1 + 0x19c) + 0x228) & 0x20) != 0))
  {
    fVar5 = (float10)(*DAT_102230b4)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar1 + 0x20) = (float)(fVar5 + (float10)*(float *)(iVar1 + 0x20));
    iVar1 = *(int *)(this + 4);
    fVar5 = (float10)(*DAT_102230b4)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar1 + 0x24) = (float)(fVar5 + (float10)*(float *)(iVar1 + 0x24));
    iVar1 = *(int *)(this + 4);
    fVar5 = (float10)(*DAT_102230b4)(0xbdcccccd,0x3dcccccd);
    *(float *)(iVar1 + 0x28) = (float)(fVar5 + (float10)*(float *)(iVar1 + 0x28));
    iVar1 = *(int *)(this + 4);
  }
  fVar8 = *(float *)(this + 0x36c);
  fStack_c = *(float *)(iVar1 + 0x28) * fVar8;
  *(ulonglong *)(iVar1 + 0x20) =
       CONCAT44(*(float *)(iVar1 + 0x24) * fVar8,fVar8 * *(float *)(iVar1 + 0x20));
  *(float *)(iVar1 + 0x28) = fStack_c;
  *(float *)(*(int *)(this + 4) + 0x104) = *DAT_10223188 + 0.1;
  puVar4 = (undefined8 *)FUN_1011a8d0(&fStack_14,*(int *)(this + 4) + 0x20);
  iVar1 = *(int *)(this + 4);
  *(undefined8 *)(iVar1 + 0x50) = *puVar4;
  *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(puVar4 + 1);
  *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 2;
  FUN_10017780();
  return;
}

