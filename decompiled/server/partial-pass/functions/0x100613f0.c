// rea decompile_all
// name: CPushableVan::VanThink
// address: 0x100613f0
// body: available
// range: 0x100613f0-0x10061858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CPushableVan::VanThink(void) */

void __thiscall CPushableVan::VanThink(CPushableVan *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  CPushableVan *pCVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_5c;
  int local_50;
  
                    /* 0x613f0  357  ?VanThink@CPushableVan@@AAEXXZ */
  local_50 = 2;
  iVar2 = 0;
  local_5c = 0;
  pCVar5 = this + 0x114;
  iVar6 = 0;
  do {
    if (*(int **)pCVar5 == (int *)0x0) {
      if (1 < iVar2) {
        (*DAT_1022303c)(1,"Max nerds are grabbing\n",iVar2);
        iVar2 = local_5c;
      }
    }
    else {
      local_5c = iVar2 + 1;
      iVar3 = (**(code **)(**(int **)pCVar5 + 0xbc))();
      if (iVar3 != 0) {
        iVar3 = *(int *)pCVar5;
        iVar1 = *(int *)(iVar3 + 4);
        if (((*(float *)(iVar1 + 0x264) == 0.0) && (**(int **)(iVar1 + 0x20c) == 0)) &&
           (((*(uint *)(iVar3 + 0x22b4) | *(uint *)(iVar3 + 0x22b0) | *(uint *)(iVar1 + 0x184)) &
            0x20) != 0)) {
          *(undefined4 *)(iVar1 + 0x50) = 0;
          *(float *)(*(int *)(*(int *)pCVar5 + 4) + 0x54) =
               *(float *)(*(int *)(this + 4) + 0x54) + 180.0;
          *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0xa0) = 1;
          iVar3 = *(int *)pCVar5;
          iVar2 = local_5c;
          if (((*(uint *)(*(int *)(iVar3 + 4) + 0x184) | *(uint *)(iVar3 + 0x22b4) |
               *(uint *)(iVar3 + 0x22b0)) & 0x2000) == 0) {
            iVar6 = iVar6 + -1;
            if (-1 < iVar6) goto LAB_100614e3;
            iVar3 = *(int *)(this + 4);
            iVar6 = 0;
          }
          else {
            iVar6 = iVar6 + 1;
            if (2 < iVar6) {
              iVar6 = 2;
            }
LAB_100614e3:
            iVar3 = *(int *)(this + 4);
            if (0 < iVar6) {
              *(undefined4 *)(iVar3 + 0x108) = 5;
              *(undefined4 *)(*(int *)(this + 4) + 0x10c) = 3;
              iVar3 = *(int *)(this + 4);
              fVar10 = DAT_10223188[0xc];
              *(ulonglong *)(iVar3 + 0x20) =
                   CONCAT44(DAT_10223188[0xb] * 1.1 + *(float *)(iVar3 + 0x24),
                            DAT_10223188[10] * 1.1 + *(float *)(iVar3 + 0x20));
              *(float *)(iVar3 + 0x28) = fVar10 * 1.1 + *(float *)(iVar3 + 0x28);
              iVar3 = *(int *)(this + 4);
              fVar10 = *(float *)(iVar3 + 0x20);
              fVar12 = *(float *)(iVar3 + 0x24);
              fVar11 = *(float *)(iVar3 + 0x28);
              dVar8 = (double)(fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11);
              if (dVar8 < 0.0) {
                __libm_sse2_sqrt_precise();
              }
              else {
                dVar8 = SQRT(dVar8);
              }
              fVar9 = (float)dVar8;
              if (5.0 < fVar9) {
                if (fVar9 == 0.0) {
                  fVar11 = 1.0;
                  fVar10 = 0.0;
                  fVar12 = 0.0;
                }
                else {
                  fVar9 = 1.0 / fVar9;
                  fVar10 = fVar10 * fVar9;
                  fVar12 = fVar12 * fVar9;
                  fVar11 = fVar11 * fVar9;
                }
                *(ulonglong *)(iVar3 + 0x20) = CONCAT44(fVar12 * 5.0,fVar10 * 5.0);
                *(float *)(iVar3 + 0x28) = fVar11 * 5.0;
                iVar3 = *(int *)(this + 4);
              }
              fVar10 = *(float *)(iVar3 + 0x28);
              iVar1 = *(int *)(*(int *)pCVar5 + 4);
              *(ulonglong *)(iVar1 + 0x20) =
                   CONCAT44(*(float *)(iVar3 + 0x24) * 10.0,*(float *)(iVar3 + 0x20) * 10.0);
              *(float *)(iVar1 + 0x28) = fVar10 * 10.0;
              *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x28) = 0;
              iVar3 = FUN_1000e9b0("push_van");
              if (iVar3 == -1) {
                iVar3 = 0;
              }
              if (*(int *)(*(int *)(*(int *)pCVar5 + 4) + 300) != iVar3) {
                *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x134) = 0;
                *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x130) = 0;
                uVar4 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x20c),iVar3)
                ;
                fVar7 = (float10)FUN_1000f390(uVar4);
                *(float *)(*(int *)pCVar5 + 0x4f4) = (float)(fVar7 + (float10)*DAT_10223188);
                if (*(int *)(*(int *)(*(int *)pCVar5 + 4) + 300) != iVar3) {
                  *(int *)(*(int *)(*(int *)pCVar5 + 4) + 300) = iVar3;
                  *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x134) = 0;
                  FUN_1000e9e0();
                }
              }
              goto LAB_1006180a;
            }
          }
          *(undefined8 *)(iVar3 + 0x20) = DAT_10222f34;
          *(undefined4 *)(iVar3 + 0x28) = DAT_10222f3c;
          iVar3 = *(int *)(this + 4);
          iVar1 = *(int *)(*(int *)pCVar5 + 4);
          uVar4 = *(undefined4 *)(iVar3 + 0x24);
          *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
          *(undefined4 *)(iVar1 + 0x24) = uVar4;
          *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(iVar3 + 0x28);
          FUN_100ea240("push_van_idle",1);
          goto LAB_1006180a;
        }
      }
      if (*(int *)pCVar5 != 0) {
        (*DAT_1022303c)(1,"%s just released use\n",
                        *(int *)(*(int *)(*(int *)pCVar5 + 4) + 0x1d4) + (int)DAT_10223188[0x26]);
      }
      FUN_100f9140(0,0);
      *(undefined4 *)(*(int *)(*(int *)pCVar5 + 4) + 0x260) = 0;
      FUN_100f2a50(0);
      FUN_100f67f0();
      *(int *)pCVar5 = 0;
      local_5c = iVar2;
    }
LAB_1006180a:
    pCVar5 = pCVar5 + 4;
    local_50 = local_50 + -1;
    if (local_50 == 0) {
      if ((iVar2 == 0) || (iVar6 == 0)) {
        iVar2 = *(int *)(this + 4);
        *(undefined8 *)(iVar2 + 0x20) = DAT_10222f34;
        *(undefined4 *)(iVar2 + 0x28) = DAT_10222f3c;
      }
      (**(code **)(*(int *)this + 8))(0x3d4ccccd);
      return;
    }
  } while( true );
}

