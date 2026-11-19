// rea decompile_all
// name: CCoFMDLCutscene::StartNextAnimation
// address: 0x1009f4a0
// body: available
// range: 0x1009f4a0-0x1009faa2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* private: void __thiscall CCoFMDLCutscene::StartNextAnimation(void) */

void __thiscall CCoFMDLCutscene::StartNextAnimation(CCoFMDLCutscene *this)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  char *pcVar10;
  bool bVar11;
  float10 fVar12;
  
                    /* 0x9f4a0  290  ?StartNextAnimation@CCoFMDLCutscene@@AAEXXZ */
  if (*(int *)(*(int *)(this + 4) + 0x19c) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(this + 4) + 0x19c) + 0x7c);
  if (iVar4 == 0) {
    return;
  }
  bVar11 = false;
  if (((DAT_10222ee4 != (int *)0x0) && (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 != 0))
     && (*(int *)(*(int *)(this + 4) + 0x254) != 1)) {
    bVar11 = true;
  }
  iVar4 = FUN_100125e0(*(undefined4 *)(iVar4 + 4));
  if (iVar4 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x5ac) == 0) {
    return;
  }
  iVar3 = *(int *)(this + 0x3f0);
  if (*(int *)(this + 0x3ec) < iVar3) {
    if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x10) != 0) {
      if (bVar11) {
        iVar3 = 1;
        if (0 < *(int *)(DAT_10223188 + 0x90)) {
          do {
            iVar5 = FUN_10119680(iVar3);
            if (iVar5 != 0) {
              *(undefined4 *)(iVar5 + 0x5ac) = 0;
              FUN_10017740(0);
              *(uint *)(iVar5 + 0x2500) = *(uint *)(iVar5 + 0x2500) & 0xfffffffe;
              *(undefined1 *)(iVar5 + 0x3c8) = 0;
              iVar6 = *(int *)(this + 4);
              if ((*(byte *)(iVar6 + 0x1a4) & 1) != 0) {
                FUN_100deff0(1);
                iVar6 = *(int *)(this + 4);
              }
              if ((*(byte *)(iVar6 + 0x1a4) & 2) != 0) {
                *(uint *)(iVar5 + 0x2500) = *(uint *)(iVar5 + 0x2500) & 0xfffffff7;
                iVar6 = *(int *)(this + 4);
              }
              if ((*(byte *)(iVar6 + 0x1a4) & 4) != 0) {
                *(undefined4 *)(iVar5 + 0x1eb4) = 0;
                iVar6 = *(int *)(this + 4);
              }
              if ((*(byte *)(iVar6 + 0x1a4) & 0x40) != 0) {
                *(uint *)(iVar5 + 0x2500) = *(uint *)(iVar5 + 0x2500) & 0xffffffef;
              }
              puVar1 = (uint *)(*(int *)(iVar5 + 4) + 0x1a8);
              *puVar1 = *puVar1 & 0xffffff7f;
              FUN_10119900(*(undefined4 *)(iVar5 + 0x5ac));
              (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
              (*DAT_10223010)(0);
              (*DAT_10223008)(0);
              (*DAT_10223004)();
              (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c));
              (*DAT_1022301c)(0x42480000);
              (*DAT_10223008)(0);
              (*DAT_10223008)(0);
              (*DAT_10223004)();
              *(undefined4 *)(*(int *)(iVar5 + 4) + 0x274) = 0x42b40000;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 <= *(int *)(DAT_10223188 + 0x90));
        }
      }
      else {
        *(undefined4 *)(iVar4 + 0x5ac) = 0;
        FUN_10017740(0);
        *(uint *)(iVar4 + 0x2500) = *(uint *)(iVar4 + 0x2500) & 0xfffffffe;
        *(undefined1 *)(iVar4 + 0x3c8) = 0;
        iVar3 = *(int *)(this + 4);
        if ((*(byte *)(iVar3 + 0x1a4) & 1) != 0) {
          FUN_100deff0(1);
          iVar3 = *(int *)(this + 4);
        }
        if ((*(byte *)(iVar3 + 0x1a4) & 2) != 0) {
          *(uint *)(iVar4 + 0x2500) = *(uint *)(iVar4 + 0x2500) & 0xfffffff7;
          iVar3 = *(int *)(this + 4);
        }
        if ((*(byte *)(iVar3 + 0x1a4) & 4) != 0) {
          *(undefined4 *)(iVar4 + 0x1eb4) = 0;
        }
        puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a8);
        *puVar1 = *puVar1 & 0xffffff7f;
        if ((*(byte *)(*(int *)(this + 4) + 0x1a4) & 0x40) != 0) {
          *(uint *)(iVar4 + 0x2500) = *(uint *)(iVar4 + 0x2500) & 0xffffffef;
        }
        FUN_10119900(*(undefined4 *)(iVar4 + 0x5ac));
        (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        (*DAT_10223010)(0);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
        (*DAT_1022301c)(0x42480000);
        (*DAT_10223008)(0);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        *(undefined4 *)(*(int *)(iVar4 + 4) + 0x274) = 0x42b40000;
      }
    }
    if (*(int *)(*(int *)(this + 4) + 0x1cc) == 0) {
      return;
    }
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0x1cc),iVar4,iVar4,3,
                 0);
    return;
  }
  if (bVar11) {
    iVar5 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
LAB_1009f7f4:
      iVar3 = FUN_10119680(iVar5);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x5ac) != 0)) {
        if (*(float *)(*(int *)(iVar3 + 4) + 0x268) == 0.0) {
          pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0xb8));
          pcVar10 = "models/ladder_climb.mdl";
          do {
            bVar2 = *pbVar7;
            bVar11 = bVar2 < (byte)*pcVar10;
            if (bVar2 != *pcVar10) goto LAB_1009f890;
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar11 = bVar2 < (byte)pcVar10[1];
            if (bVar2 != pcVar10[1]) goto LAB_1009f890;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar2 != 0);
LAB_1009f88c:
          uVar8 = 0;
        }
        else {
          pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0xb8));
          pcVar10 = "models/ladder_climb_doctor.mdl";
          do {
            bVar2 = *pbVar7;
            bVar11 = bVar2 < (byte)*pcVar10;
            if (bVar2 != *pcVar10) goto LAB_1009f890;
            if (bVar2 == 0) goto LAB_1009f88c;
            bVar2 = pbVar7[1];
            bVar11 = bVar2 < (byte)pcVar10[1];
            if (bVar2 != pcVar10[1]) goto LAB_1009f890;
            pbVar7 = pbVar7 + 2;
            pcVar10 = pcVar10 + 2;
          } while (bVar2 != 0);
          uVar8 = 0;
        }
        goto LAB_1009f895;
      }
      goto LAB_1009f8f0;
    }
    goto LAB_1009f915;
  }
  if (*(float *)(*(int *)(iVar4 + 4) + 0x268) == 0.0) {
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0xb8));
    pcVar10 = "models/ladder_climb.mdl";
    do {
      bVar2 = *pbVar7;
      bVar11 = bVar2 < (byte)*pcVar10;
      if (bVar2 != *pcVar10) goto LAB_1009f980;
      if (bVar2 == 0) goto LAB_1009f97c;
      bVar2 = pbVar7[1];
      bVar11 = bVar2 < (byte)pcVar10[1];
      if (bVar2 != pcVar10[1]) goto LAB_1009f980;
      pbVar7 = pbVar7 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar2 != 0);
    uVar8 = 0;
  }
  else {
    pbVar7 = (byte *)(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(this + 4) + 0xb8));
    pcVar10 = "models/ladder_climb_doctor.mdl";
    do {
      bVar2 = *pbVar7;
      bVar11 = bVar2 < (byte)*pcVar10;
      if (bVar2 != *pcVar10) goto LAB_1009f980;
      if (bVar2 == 0) break;
      bVar2 = pbVar7[1];
      bVar11 = bVar2 < (byte)pcVar10[1];
      if (bVar2 != pcVar10[1]) goto LAB_1009f980;
      pbVar7 = pbVar7 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar2 != 0);
LAB_1009f97c:
    uVar8 = 0;
  }
LAB_1009f985:
  if ((uVar8 == 0) && (1 < iVar3)) {
    iVar3 = *(int *)(*(int *)(iVar4 + 0x5ac) + 4);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + 48.0;
  }
  if (DAT_10222ee4 != (int *)0x0) {
    (**(code **)(*DAT_10222ee4 + 0x20))();
  }
  FUN_100c20c0(*(int *)(this + *(int *)(this + 0x3f0) * 4 + 0x368) + *(int *)(DAT_10223188 + 0x98));
  if (*(int *)(this + 0x3f0) <= *(int *)(this + 0x3ec)) {
    iVar3 = *(int *)(this + *(int *)(this + 0x3f0) * 4 + 0x368) + *(int *)(DAT_10223188 + 0x98);
LAB_1009fa37:
    uVar9 = (*DAT_10223070)(*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x5ac) + 4) + 0x20c),iVar3);
    fVar12 = (float10)FUN_1000f3e0(uVar9);
    if ((float)fVar12 != 0.0) {
      (**(code **)(*(int *)this + 8))((float)fVar12);
      *(int *)(this + 0x3f0) = *(int *)(this + 0x3f0) + 1;
      return;
    }
    (*DAT_1022303c)(1,"Unable to find delay\n");
  }
LAB_1009fa96:
  *(int *)(this + 0x3f0) = *(int *)(this + 0x3f0) + 1;
  return;
LAB_1009f890:
  uVar8 = -(uint)bVar11 | 1;
LAB_1009f895:
  if ((uVar8 == 0) && (1 < *(int *)(this + 0x3f0))) {
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5ac) + 4);
    *(float *)(iVar3 + 0x10) = *(float *)(iVar3 + 0x10) + 48.0;
  }
  if (DAT_10222ee4 != (int *)0x0) {
    (**(code **)(*DAT_10222ee4 + 0x20))();
  }
  FUN_100c20c0(*(int *)(this + *(int *)(this + 0x3f0) * 4 + 0x368) + *(int *)(DAT_10223188 + 0x98));
LAB_1009f8f0:
  iVar5 = iVar5 + 1;
  if (*(int *)(DAT_10223188 + 0x90) < iVar5) goto code_r0x1009f903;
  goto LAB_1009f7f4;
code_r0x1009f903:
  iVar3 = *(int *)(this + 0x3f0);
  if (*(int *)(this + 0x3ec) < iVar3) goto LAB_1009fa96;
LAB_1009f915:
  iVar3 = *(int *)(this + iVar3 * 4 + 0x368) + *(int *)(DAT_10223188 + 0x98);
  goto LAB_1009fa37;
LAB_1009f980:
  uVar8 = -(uint)bVar11 | 1;
  goto LAB_1009f985;
}

