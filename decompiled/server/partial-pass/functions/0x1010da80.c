// rea decompile_all
// name: CMultiManager::ManagerThink
// address: 0x1010da80
// body: available
// range: 0x1010da80-0x1010e188 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* public: void __thiscall CMultiManager::ManagerThink(void) */

void __thiscall CMultiManager::ManagerThink(CMultiManager *this)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  CMultiManager *pCVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float local_8;
  
                    /* 0x10da80  173  ?ManagerThink@CMultiManager@@QAEXXZ */
  if (*(int *)(this + 0x178) == 0) {
    fVar11 = *(float *)(this + 0xe8);
    iVar5 = *(int *)(this + 0xe4);
    iVar7 = *(int *)(this + 0xe0);
    fVar1 = *DAT_10223188;
    iVar3 = iVar5 - iVar7;
    iVar8 = iVar5;
    if (iVar5 < iVar7) {
      pCVar4 = this + iVar5 * 4 + 300;
      do {
        if (fVar1 - fVar11 < *(float *)pCVar4) break;
        iVar8 = iVar8 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar8 < iVar7);
      iVar3 = iVar8 - iVar7;
    }
    if (SBORROW4(iVar8,iVar7) == iVar3 < 0) {
      iVar7 = *(int *)(this + 4);
      if ((*(byte *)(iVar7 + 0x1a4) & 4) == 0) {
        *(undefined4 *)(this + 0xdc) = 0;
        if (((int)*(uint *)(iVar7 + 0x1a4) < 0) || ((*(uint *)(iVar7 + 0x1a4) & 8) != 0)) {
          *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
          (**(code **)(*(int *)this + 8))();
          *(undefined4 *)(this + 0x80) = 0;
          if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
            (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": killed.\n",
                            *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26]);
          }
        }
        else {
          *(undefined4 *)(this + 0x78) = 0;
          *(code **)(this + 0x80) = ManagerUse;
          if ((*(byte *)(iVar7 + 0x1a4) & 0x20) != 0) {
            (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": last burst.\n",
                            *(int *)(iVar7 + 0x1d0) + (int)DAT_10223188[0x26]);
          }
        }
      }
      else {
        fVar10 = *(float *)(this + 0x16c);
        *(undefined4 *)(this + 0xe4) = 0;
        if (*(float *)(this + 0x170) == 0.0) {
          if (fVar10 == 0.0) {
            *(undefined4 *)(this + 0xdc) = 2;
            fVar10 = 0.0;
          }
          else {
            *(undefined4 *)(this + 0xdc) = 1;
          }
        }
        else {
          fVar9 = (float10)(*DAT_102230b4)(fVar10,*(float *)(this + 0x170));
          iVar7 = *(int *)(this + 4);
          fVar10 = (float)fVar9;
          *(undefined4 *)(this + 0xdc) = 1;
        }
        *(float *)(this + 0xe8) = fVar10;
        if ((*(byte *)(iVar7 + 0x1a4) & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": restarting loop.\n",
                          *(int *)(iVar7 + 0x1d0) + (int)DAT_10223188[0x26]);
        }
        (**(code **)(*(int *)this + 8))();
        *(float *)(this + 0xe8) = *DAT_10223188 + *(float *)(this + 0xe8);
      }
    }
    else {
      *(int *)(this + 0xe4) = iVar8;
      *(undefined4 *)(this + 0xdc) = 2;
      (**(code **)(*(int *)this + 0x10))();
    }
    if (iVar5 < *(int *)(this + 0xe0)) {
      pCVar4 = this + iVar5 * 4 + 0xec;
      do {
        if (fVar1 - fVar11 < *(float *)(pCVar4 + 0x40)) {
          return;
        }
        if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": firing \"%s\".\n",
                          *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                          *(int *)pCVar4 + (int)DAT_10223188[0x26]);
        }
        uVar6 = FUN_10017790(this);
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)pCVar4,uVar6);
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar5 < *(int *)(this + 0xe0));
    }
  }
  else {
    iVar5 = *(int *)(this + 4);
    local_8 = 0.0;
    uVar2 = *(uint *)(iVar5 + 0x1a4);
    if ((uVar2 & 4) == 0) {
      if (((int)uVar2 < 0) || ((uVar2 & 8) != 0)) {
        if ((uVar2 & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": killed.\n",
                          *(int *)(iVar5 + 0x1d0) + (int)DAT_10223188[0x26]);
        }
        *(code **)(this + 0x78) = CBaseEntity::SUB_Remove;
        (**(code **)(*(int *)this + 8))();
        *(undefined4 *)(this + 0x80) = 0;
      }
      else {
        if ((uVar2 & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": last burst.\n",
                          *(int *)(iVar5 + 0x1d0) + (int)DAT_10223188[0x26]);
        }
        *(undefined4 *)(this + 0xdc) = 0;
        *(undefined4 *)(this + 0x78) = 0;
        *(code **)(this + 0x80) = ManagerUse;
      }
    }
    else {
      fVar11 = *(float *)(this + 0x16c);
      if (*(float *)(this + 0x170) == 0.0) {
        if (fVar11 == 0.0) {
          fVar11 = 0.0;
        }
      }
      else {
        fVar9 = (float10)(*DAT_102230b4)(fVar11,*(float *)(this + 0x170));
        iVar5 = *(int *)(this + 4);
        fVar11 = (float)fVar9;
      }
      *(float *)(this + 0xe8) = fVar11;
      if ((*(byte *)(iVar5 + 0x1a4) & 0x20) != 0) {
        (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": restarting loop.\n",
                        *(int *)(iVar5 + 0x1d0) + (int)DAT_10223188[0x26]);
      }
      (**(code **)(*(int *)this + 8))();
      *(undefined4 *)(this + 0xe8) = *(undefined4 *)(this + 0x58);
      *(undefined4 *)(this + 0xdc) = 1;
    }
    iVar5 = *(int *)(this + 0x178);
    if (iVar5 == 1) {
      fVar11 = 0.0;
      iVar5 = *(int *)(this + 0xe0);
      if (0 < iVar5) {
        pCVar4 = this + 300;
        iVar7 = iVar5;
        do {
          fVar11 = fVar11 + *(float *)pCVar4;
          pCVar4 = pCVar4 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (fVar11 == 0.0) {
        iVar5 = (*DAT_102230b0)(0,iVar5 + -1);
        iVar5 = *(int *)(this + (iVar5 + 0x3b) * 4) + (int)DAT_10223188[0x26];
        if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": firing \"%s\" (random choice).\n",
                          *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],iVar5);
        }
        uVar6 = FUN_10017790(this,*(undefined4 *)(this + 0x18c),0);
        FUN_10101ff0(iVar5,uVar6);
        return;
      }
      fVar9 = (float10)(*DAT_102230b4)(0,fVar11);
      iVar5 = 0;
      if (0 < *(int *)(this + 0xe0)) {
        pCVar4 = this + 300;
        do {
          local_8 = *(float *)pCVar4 + local_8;
          if ((float)fVar9 <= local_8) {
            if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
              (*DAT_1022303c)(1,
                              "DEBUG: multi_manager \"%s\": firing \"%s\" (weighted random choice).\n"
                              ,*(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                              *(int *)(this + iVar5 * 4 + 0xec) + (int)DAT_10223188[0x26]);
            }
            uVar6 = FUN_10017790(this,*(undefined4 *)(this + 0x18c),0);
            FUN_10101ff0(*(int *)(this + iVar5 * 4 + 0xec) + (int)DAT_10223188[0x26],uVar6);
            return;
          }
          iVar5 = iVar5 + 1;
          pCVar4 = pCVar4 + 4;
        } while (iVar5 < *(int *)(this + 0xe0));
        return;
      }
    }
    else if (iVar5 == 2) {
      iVar5 = 0;
      if (0 < *(int *)(this + 0xe0)) {
        pCVar4 = this + 0xec;
        do {
          iVar7 = (*DAT_102230b0)(0,100);
          if ((float)iVar7 <= *(float *)(pCVar4 + 0x40)) {
            if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
              (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": firing \"%s\" (%f%% chance).\n",
                              *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                              *(int *)pCVar4 + (int)DAT_10223188[0x26],
                              (double)*(float *)(pCVar4 + 0x40));
            }
            uVar6 = FUN_10017790(this);
            FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)pCVar4,uVar6);
          }
          iVar5 = iVar5 + 1;
          pCVar4 = pCVar4 + 4;
        } while (iVar5 < *(int *)(this + 0xe0));
        return;
      }
    }
    else if ((iVar5 == 3) && (iVar5 = 0, 0 < *(int *)(this + 0xe0))) {
      pCVar4 = this + 0xec;
      do {
        if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x20) != 0) {
          (*DAT_1022303c)(1,"DEBUG: multi_manager \"%s\": firing \"%s\" (simultaneous).\n",
                          *(int *)(*(int *)(this + 4) + 0x1d0) + (int)DAT_10223188[0x26],
                          *(int *)pCVar4 + (int)DAT_10223188[0x26]);
        }
        uVar6 = FUN_10017790(this);
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)pCVar4,uVar6);
        iVar5 = iVar5 + 1;
        pCVar4 = pCVar4 + 4;
      } while (iVar5 < *(int *)(this + 0xe0));
      return;
    }
  }
  return;
}

