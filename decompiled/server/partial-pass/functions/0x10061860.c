// rea decompile_all
// name: CPushableVan::VanUse
// address: 0x10061860
// body: available
// range: 0x10061860-0x10061be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CPushableVan::VanUse(class CBaseEntity *,class CBaseEntity *,enum
   USE_TYPE,float) */

void __thiscall
CPushableVan::VanUse
          (CPushableVan *this,CBaseEntity *param_1,CBaseEntity *param_2,USE_TYPE param_3,
          float param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  CPushableVan *pCVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  float fStack_c;
  
                    /* 0x61860  358  ?VanUse@CPushableVan@@AAEXPAVCBaseEntity@@0W4USE_TYPE@@M@Z */
  if ((((param_1 != (CBaseEntity *)0x0) &&
       (piVar4 = (int *)FUN_100125e0(*(undefined4 *)(param_1 + 4)), piVar4 != (int *)0x0)) &&
      (iVar5 = (**(code **)(*piVar4 + 0xd0))(), iVar5 != 0)) &&
     (iVar5 = (**(code **)(*piVar4 + 0xbc))(), iVar5 != 0)) {
    pCVar6 = this + 0x114;
    bVar3 = false;
    if ((*(int **)(this + 0x114) != (int *)0x0) && (*(int **)(this + 0x114) == piVar4)) {
      bVar3 = true;
    }
    if (((*(int **)(this + 0x118) == (int *)0x0) || (*(int **)(this + 0x118) != piVar4)) && (!bVar3)
       ) {
      iVar7 = 1;
      iVar5 = *(int *)(this + 4);
      do {
        FUN_10119320(iVar5 + 0x50);
        fVar1 = *(float *)(DAT_10223188 + 0x28);
        iVar5 = *(int *)(this + 4);
        fVar2 = *(float *)(DAT_10223188 + 0x2c);
        fVar11 = *(float *)(piVar4[1] + 8) -
                 (fVar1 * (float)*(int *)(this + 0x104) + *(float *)(iVar5 + 8));
        fVar10 = *(float *)(piVar4[1] + 0xc) -
                 (fVar2 * (float)*(int *)(this + 0x104) + *(float *)(iVar5 + 0xc));
        dVar9 = (double)(fVar10 * fVar10 + fVar11 * fVar11);
        if (dVar9 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar9 = SQRT(dVar9);
        }
        if ((float)dVar9 == 0.0) {
          fVar11 = 0.0;
          fVar10 = 0.0;
        }
        else {
          fVar8 = 1.0 / (float)dVar9;
          fVar11 = fVar11 * fVar8;
          fVar10 = fVar10 * fVar8;
        }
        if ((((0.0 <= fVar2 * fVar10 + fVar1 * fVar11) && (*(int *)pCVar6 == 0)) &&
            ((*(uint *)(piVar4[1] + 0x1a8) & 0x4200) == 0x200)) &&
           ((*(byte *)(piVar4 + 0x8b9) & 8) == 0)) {
          *(int **)(this + iVar7 * 4 + 0x110) = piVar4;
          (*DAT_1022303c)(1,"%s grabbed the van\n",
                          *(int *)(DAT_10223188 + 0x98) + *(int *)(piVar4[1] + 0x1d4));
          iVar5 = piVar4[1];
          fStack_20 = *(float *)(iVar5 + 8);
          fStack_1c = *(float *)(iVar5 + 0xc);
          uStack_18 = *(undefined4 *)(iVar5 + 0x10);
          if (this[0x100] != (CPushableVan)0x0) {
            fStack_20 = *(float *)(*(int *)(this + 4) + 8);
            if (iVar7 == 1) {
              fStack_20 = fStack_20 - 36.0;
            }
            else if (iVar7 == 2) {
              fStack_20 = fStack_20 + 36.0;
            }
          }
          if (this[0x101] != (CPushableVan)0x0) {
            fStack_1c = *(float *)(*(int *)(this + 4) + 0xc);
            if (iVar7 == 1) {
              fStack_1c = fStack_1c - 16.0;
            }
            else if (iVar7 == 2) {
              fStack_1c = fStack_1c + 16.0;
            }
          }
          FUN_10119fe0(piVar4,&fStack_20);
          *(undefined4 *)(*(int *)(*(int *)(this + iVar7 * 4 + 0x110) + 4) + 0x50) = 0;
          *(float *)(*(int *)(*(int *)(this + iVar7 * 4 + 0x110) + 4) + 0x54) =
               *(float *)(*(int *)(this + 4) + 0x54) + 180.0;
          *(undefined4 *)(*(int *)(*(int *)(this + iVar7 * 4 + 0x110) + 4) + 0xa0) = 1;
          iVar5 = *(int *)(*(int *)(this + iVar7 * 4 + 0x110) + 4);
          fStack_c = *(float *)(DAT_10223188 + 0x30) * 20.0;
          *(ulonglong *)(iVar5 + 0x20) =
               CONCAT44(*(float *)(DAT_10223188 + 0x2c) * 20.0,
                        *(float *)(DAT_10223188 + 0x28) * 20.0);
          *(float *)(iVar5 + 0x28) = fStack_c;
          FUN_100f9140(1,0x44268000);
          iVar5 = piVar4[1];
          *(undefined8 *)(iVar5 + 0x20) = DAT_10222f34;
          *(undefined4 *)(iVar5 + 0x28) = DAT_10222f3c;
          FUN_100ea240("push_van_idle",1);
          *(undefined4 *)(piVar4[1] + 0x260) = 0x42480000;
          FUN_100f68a0();
          return;
        }
        iVar7 = iVar7 + 1;
        pCVar6 = pCVar6 + 4;
      } while (iVar7 < 3);
    }
  }
  return;
}

