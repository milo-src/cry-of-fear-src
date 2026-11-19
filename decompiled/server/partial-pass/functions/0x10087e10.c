// rea decompile_all
// name: FUN_10087e10
// address: 0x10087e10
// body: available
// range: 0x10087e10-0x10088096 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10087e10(int param_1,undefined4 param_2,float param_3,uint param_4)

{
  int iVar1;
  float *pfVar2;
  int *in_ECX;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [5];
  
  if (param_1 != 0) {
    iVar1 = (*DAT_10223060)(*(undefined4 *)(param_1 + 0x20c));
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x20c);
      if (iVar1 == 0) {
        iVar1 = (*DAT_1022305c)(0);
        if (iVar1 == 0) goto LAB_1008802e;
      }
      if (*(int **)(iVar1 + 0x7c) != (int *)0x0) {
        iVar1 = (**(code **)(**(int **)(iVar1 + 0x7c) + 0xfc))(&fStack_20);
        fVar6 = *(float *)(iVar1 + 4);
        fVar3 = *(float *)(iVar1 + 8);
        pfVar2 = (float *)(**(code **)(*in_ECX + 0xfc))(afStack_18);
        fVar3 = (fVar3 - 0.0) - pfVar2[1];
        fVar6 = (fVar6 - 0.0) - *pfVar2;
        fVar7 = (fStack_24 - 10.0) - pfVar2[2];
        dVar5 = (double)(fVar3 * fVar3 + fVar6 * fVar6 + fVar7 * fVar7);
        if (dVar5 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar5 = SQRT(dVar5);
        }
        if ((float)dVar5 == 0.0) {
          fVar7 = 1.0;
          fVar6 = 0.0;
          fVar3 = 0.0;
        }
        else {
          fVar4 = 1.0 / (float)dVar5;
          fVar6 = fVar6 * fVar4;
          fVar3 = fVar3 * fVar4;
          fVar7 = fVar7 * fVar4;
        }
        dVar5 = (double)(fVar3 * fVar3 + fVar6 * fVar6 + fVar7 * fVar7);
        if (dVar5 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar5 = SQRT(dVar5);
        }
        if ((float)dVar5 == 0.0) {
          fStack_20 = 0.0;
          fStack_1c = 0.0;
          afStack_18[0] = 1.0;
        }
        else {
          afStack_18[0] = 1.0 / (float)dVar5;
          fStack_20 = fVar6 * afStack_18[0];
          fStack_1c = fVar3 * afStack_18[0];
          afStack_18[0] = fVar7 * afStack_18[0];
        }
        _DAT_10222f28 = CONCAT44(fStack_1c,fStack_20);
        DAT_10222f30 = afStack_18[0];
      }
    }
  }
LAB_1008802e:
  if ((param_4 & 0x261) != 0) {
    iVar1 = in_ECX[1];
    if (*(float *)(iVar1 + 0x164) <= param_3) {
      *(undefined4 *)(iVar1 + 0x164) = 0xc2480000;
      (**(code **)(*in_ECX + 0x6c))(param_2,2);
      return 0;
    }
    *(float *)(iVar1 + 0x164) = *(float *)(iVar1 + 0x164) - param_3 * 0.1;
  }
  return 1;
}

