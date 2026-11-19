// rea decompile_all
// name: FUN_100a4670
// address: 0x100a4670
// body: available
// range: 0x100a4670-0x100a4af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a4670(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if ((((param_1 != 0) && (*(int *)(in_ECX[1] + 0xb8) != 0)) &&
      (iVar2 = FUN_10118460(0,"player"), iVar2 != 0)) &&
     (iVar2 = FUN_100125e0(*(undefined4 *)(iVar2 + 4)), iVar2 != 0)) {
    local_8 = iVar2;
    if (((DAT_10222ee4 == (int *)0x0) || (iVar3 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar3 == 0)
        ) || (iVar3 = in_ECX[1], *(int *)(iVar3 + 0x254) == 1)) {
      FUN_100f5d50();
      iVar3 = in_ECX[1];
      if ((*(byte *)(iVar3 + 0x1a4) & 0x20) != 0) {
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
        FUN_10117180(uVar4,uVar4);
        iVar3 = in_ECX[1];
      }
      if ((*(byte *)(iVar3 + 0x1a4) & 1) != 0) {
        FUN_100deff0(0);
        iVar3 = in_ECX[1];
      }
      if ((*(byte *)(iVar3 + 0x1a4) & 2) != 0) {
        *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 8;
        iVar3 = in_ECX[1];
      }
      if ((*(byte *)(iVar3 + 0x1a4) & 4) != 0) {
        *(undefined4 *)(iVar2 + 0x1eb4) = 1;
      }
      puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a8);
      *puVar1 = *puVar1 | 0x80;
      iVar3 = in_ECX[1];
      if ((*(byte *)(iVar3 + 0x1a4) & 0x40) != 0) {
        *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 0x10;
        iVar3 = in_ECX[1];
      }
      iVar3 = FUN_10017950("camera_model",iVar3 + 8,iVar3 + 0x50,
                           *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      *(int *)(iVar2 + 0x5ac) = iVar3;
      if (iVar3 != 0) {
        iVar5 = in_ECX[1];
        if (*(int *)(iVar5 + 0x298) != 0) {
          *(int *)(*(int *)(iVar3 + 4) + 0x298) = *(int *)(iVar5 + 0x298);
          iVar5 = in_ECX[1];
        }
        uVar4 = 0x46;
        if (*(int *)(iVar5 + 0x160) == 0xb8) {
          uVar4 = 0xb8;
        }
        *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5ac) + 4) + 0x160) = uVar4;
        iVar3 = in_ECX[1];
        local_10 = *(undefined4 *)(iVar3 + 0xc);
        local_c = *(undefined4 *)(iVar3 + 0x10);
        local_14 = *(undefined4 *)(iVar3 + 8);
        FUN_10119fe0(*(undefined4 *)(iVar2 + 0x5ac),&local_14);
        (*DAT_10222f50)(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5ac) + 4) + 0x20c),
                        *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
        FUN_10017740(*(undefined4 *)(iVar2 + 0x5ac));
        (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
        iVar3 = FUN_100177a0();
        uVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
        (*DAT_10223010)(uVar4);
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        *(undefined4 *)(in_ECX[1] + 0x19c) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
      }
    }
    else {
      param_1 = 1;
      if (0 < *(int *)(DAT_10223188 + 0x90)) {
        do {
          iVar2 = FUN_10119680(param_1);
          if (iVar2 != 0) {
            FUN_100f5d50();
            iVar3 = in_ECX[1];
            if ((*(byte *)(iVar3 + 0x1a4) & 0x20) != 0) {
              uVar4 = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
              FUN_10117180(uVar4,uVar4);
              iVar3 = in_ECX[1];
            }
            if ((*(byte *)(iVar3 + 0x1a4) & 1) != 0) {
              FUN_100deff0(0);
              iVar3 = in_ECX[1];
            }
            if ((*(byte *)(iVar3 + 0x1a4) & 2) != 0) {
              *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 8;
              iVar3 = in_ECX[1];
            }
            if ((*(byte *)(iVar3 + 0x1a4) & 4) != 0) {
              *(undefined4 *)(iVar2 + 0x1eb4) = 1;
              iVar3 = in_ECX[1];
            }
            if ((*(byte *)(iVar3 + 0x1a4) & 0x40) != 0) {
              *(uint *)(iVar2 + 0x2500) = *(uint *)(iVar2 + 0x2500) | 0x10;
            }
            puVar1 = (uint *)(*(int *)(iVar2 + 4) + 0x1a8);
            *puVar1 = *puVar1 | 0x80;
            iVar3 = FUN_10017950("camera_model",in_ECX[1] + 8,in_ECX[1] + 0x50,
                                 *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
            *(int *)(iVar2 + 0x5ac) = iVar3;
            if (iVar3 != 0) {
              iVar5 = in_ECX[1];
              if (*(int *)(iVar5 + 0x298) != 0) {
                *(int *)(*(int *)(iVar3 + 4) + 0x298) = *(int *)(iVar5 + 0x298);
                iVar5 = in_ECX[1];
                iVar3 = *(int *)(iVar2 + 0x5ac);
              }
              if (*(int *)(iVar5 + 0x254) != 0) {
                *(int *)(*(int *)(iVar3 + 4) + 0x254) = *(int *)(iVar5 + 0x254);
                iVar5 = in_ECX[1];
              }
              uVar4 = 0x46;
              if (*(int *)(iVar5 + 0x160) == 0xb8) {
                uVar4 = 0xb8;
              }
              *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5ac) + 4) + 0x160) = uVar4;
              iVar3 = in_ECX[1];
              local_10 = *(undefined4 *)(iVar3 + 0xc);
              local_c = *(undefined4 *)(iVar3 + 0x10);
              local_14 = *(undefined4 *)(iVar3 + 8);
              FUN_10119fe0(*(undefined4 *)(iVar2 + 0x5ac),&local_14);
              (*DAT_10222f50)(*(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x5ac) + 4) + 0x20c),
                              *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
              FUN_10017740(*(undefined4 *)(iVar2 + 0x5ac));
              (*DAT_10223000)(1,DAT_1022664c,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
              iVar2 = FUN_100177a0();
              uVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
              (*DAT_10223010)(uVar4);
              (*DAT_10223008)(0);
              (*DAT_10223004)();
            }
          }
          param_1 = param_1 + 1;
        } while (param_1 <= *(int *)(DAT_10223188 + 0x90));
        iVar3 = in_ECX[1];
        iVar2 = local_8;
      }
      *(undefined4 *)(iVar3 + 0x19c) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c);
    }
    (**(code **)(*in_ECX + 8))(0);
    in_ECX[0x1e] = (int)CCoFMDLCutscene::StartNextAnimation;
  }
  return;
}

