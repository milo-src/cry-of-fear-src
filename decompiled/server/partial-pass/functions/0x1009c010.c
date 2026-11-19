// rea decompile_all
// name: CGibShooter::ShootThink
// address: 0x1009c010
// body: available
// range: 0x1009c010-0x1009c602 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CGibShooter::ShootThink(void) */

void __thiscall CGibShooter::ShootThink(CGibShooter *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float10 fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  int local_9c;
  float local_7c;
  float fStack_78;
  
                    /* 0x9c010  270  ?ShootThink@CGibShooter@@QAEXXZ */
  if (*(float *)(this + 0xdc) == 0.0) {
    local_9c = *(int *)(this + 0xec);
    if (local_9c < 1) goto LAB_1009c5b9;
  }
  else {
    local_9c = 1;
    (**(code **)(*(int *)this + 8))(*(float *)(this + 0xdc));
  }
  do {
    if (*(int *)(this + 0x110) != 0) {
      FUN_10017790(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x110));
      FUN_100b81e0();
    }
    if (*(int *)(this + 0x10c) == 0) {
      uVar19 = *(undefined8 *)(*(int *)(this + 4) + 0x44);
      fVar21 = *(float *)(*(int *)(this + 4) + 0x4c);
    }
    else {
      FUN_10017790(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x10c));
      puVar13 = (undefined8 *)FUN_100b8240();
      fVar21 = *(float *)(puVar13 + 1);
      local_7c = (float)*puVar13;
      fStack_78 = (float)((ulonglong)*puVar13 >> 0x20);
      dVar18 = (double)(local_7c * local_7c + fStack_78 * fStack_78 + fVar21 * fVar21);
      if (dVar18 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar18 = SQRT(dVar18);
      }
      if ((float)dVar18 == 0.0) {
        uVar19 = 0;
        fVar21 = 1.0;
      }
      else {
        fVar16 = 1.0 / (float)dVar18;
        fVar21 = fVar21 * fVar16;
        uVar19 = CONCAT44(fStack_78 * fVar16,local_7c * fVar16);
      }
    }
    fVar15 = (float10)(*DAT_102230b4)();
    fVar16 = *(float *)(this + 0xfc);
    fVar7 = (float)fVar15;
    fVar17 = *(float *)(DAT_10223188 + 0x40);
    fVar1 = *(float *)(DAT_10223188 + 0x44);
    fVar2 = *(float *)(DAT_10223188 + 0x48);
    fVar15 = (float10)(*DAT_102230b4)();
    fVar3 = *(float *)(this + 0xfc);
    fVar8 = (float)fVar15;
    fVar20 = *(float *)(DAT_10223188 + 0x28);
    fVar4 = *(float *)(DAT_10223188 + 0x2c);
    fVar5 = *(float *)(DAT_10223188 + 0x30);
    fVar15 = (float10)(*DAT_102230b4)();
    iVar14 = DAT_10223188;
    fVar6 = *(float *)(this + 0xfc);
    fVar9 = (float)fVar15;
    local_7c = (float)uVar19;
    fVar20 = local_7c + fVar16 * fVar17 * fVar7 + fVar3 * fVar20 * fVar8 +
             fVar6 * *(float *)(DAT_10223188 + 0x34) * fVar9;
    fStack_78 = (float)((ulonglong)uVar19 >> 0x20);
    fVar17 = fStack_78 + fVar16 * fVar1 * fVar7 + fVar3 * fVar4 * fVar8 +
             fVar6 * *(float *)(DAT_10223188 + 0x38) * fVar9;
    fVar21 = fVar21 + fVar16 * fVar2 * fVar7 + fVar3 * fVar5 * fVar8 +
             fVar6 * *(float *)(DAT_10223188 + 0x3c) * fVar9;
    if (fVar17 * fVar17 + fVar20 * fVar20 + fVar21 * fVar21 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    if (*(int *)(this + 0x108) != 0) {
      FUN_10017790(*(int *)(iVar14 + 0x98) + *(int *)(this + 0x108));
      FUN_100b8110();
    }
    iVar14 = (**(code **)(*(int *)this + 0x11c))();
    if (iVar14 != 0) {
      *(undefined4 *)(*(int *)(iVar14 + 4) + 0x1d0) = *(undefined4 *)(this + 0x104);
      piVar10 = *(int **)(this + 4);
      if ((*(byte *)(piVar10 + 0x69) & 4) != 0) {
        iVar11 = *(int *)(iVar14 + 4);
        iVar12 = *(int *)(DAT_10223188 + 0x98);
        (*DAT_1022303c)(1,"DEBUG: %s \"%s\" creates a shot at %f %f %f; vel %f %f %f; pos \"%s\"\n",
                        *piVar10 + iVar12,piVar10[0x74] + iVar12,(double)*(float *)(iVar11 + 8),
                        (double)*(float *)(iVar11 + 0xc),(double)*(float *)(iVar11 + 0x10),
                        (double)*(float *)(iVar11 + 0x20),(double)*(float *)(iVar11 + 0x24),
                        (double)*(float *)(iVar11 + 0x28),*(int *)(this + 0x108) + iVar12);
      }
      if (*(int *)(this + 0x114) != 0) {
        FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(this + 0x114),iVar14,this,3,0);
      }
    }
    iVar14 = *(int *)(this + 0xec);
    local_9c = local_9c + -1;
    *(int *)(this + 0xec) = iVar14 + -1;
  } while (0 < local_9c);
  if (0 < iVar14 + -1) {
    return;
  }
LAB_1009c5b9:
  if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 1) == 0) {
    *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
    (**(code **)(*(int *)this + 8))(0);
    return;
  }
  *(undefined4 *)(this + 0xec) = *(undefined4 *)(this + 0xf0);
  *(undefined4 *)(this + 0x78) = 0;
  FUN_10017ad0();
  return;
}

