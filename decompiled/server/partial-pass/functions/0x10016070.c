// rea decompile_all
// name: FUN_10016070
// address: 0x10016070
// body: available
// range: 0x10016070-0x1001649e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016070(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined8 uVar3;
  
  iVar1 = FUN_10018350();
  if ((iVar1 == 0) || (iVar1 = FUN_10119060(in_ECX[0x3a],0), iVar1 == 0)) {
    if ((*(byte *)(in_ECX[1] + 0x1a4) & 2) != 0) {
      (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" ",
                      *(int *)(in_ECX[1] + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
      iVar1 = FUN_10119060(in_ECX[0x3a],0);
      if (iVar1 == 0) {
        uVar2 = FUN_101168b0(param_3,*(int *)(DAT_10223188 + 0x98) + in_ECX[0x3a]);
        (*DAT_1022303c)(1,"ignored trigger %s; locked by master \"%s\".\n",uVar2);
        return;
      }
      if (param_3 == 1) {
        (*DAT_1022303c)(1,"ignored trigger USE_ON; already on\n");
        return;
      }
      if (param_3 == 0) {
        (*DAT_1022303c)(1,"ignored trigger USE_OFF; already off\n");
        return;
      }
      uVar2 = FUN_101168b0();
      (*DAT_1022303c)(1,"ignored trigger %s.\n",uVar2);
    }
switchD_100160b0_default:
    return;
  }
  uVar2 = (**(code **)(*in_ECX + 0x5c))();
  switch(uVar2) {
  case 0:
  case 3:
    break;
  case 1:
  case 2:
    iVar1 = in_ECX[1];
    if ((float)in_ECX[0x39] != 0.0) {
      in_ECX[0x37] = 3;
      if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
        (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" triggered; will turn off in %f seconds.\n",
                        *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                        (double)(float)in_ECX[0x39]);
      }
      (**(code **)(*in_ECX + 8))();
      return;
    }
    in_ECX[0x37] = 0;
    if ((*(byte *)(iVar1 + 0x1a4) & 2) == 0) goto LAB_100161e7;
    (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" triggered, turned off",
                    *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    iVar1 = *(int *)(in_ECX[1] + 0x1cc);
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_ECX[1] + 500);
      if (iVar1 != 0) {
        uVar3 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + iVar1,": firing \"%s\"");
        goto LAB_100161cc;
      }
    }
    else {
      (*DAT_1022303c)(1,": firing \"%s\"",*(int *)(DAT_10223188 + 0x98) + iVar1);
      if (*(int *)(in_ECX[1] + 500) != 0) {
        uVar3 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 500)," and \"%s\"");
LAB_100161cc:
        (*DAT_1022303c)(1,uVar3);
      }
    }
    (*DAT_1022303c)(1,&DAT_101a53d8);
LAB_100161e7:
    FUN_10101ff0(*(int *)(in_ECX[1] + 0x1cc) + *(int *)(DAT_10223188 + 0x98),param_1);
    FUN_10101ff0(*(int *)(in_ECX[1] + 500) + *(int *)(DAT_10223188 + 0x98),param_1);
    FUN_10017ad0();
    return;
  default:
    goto switchD_100160b0_default;
  }
  iVar1 = in_ECX[1];
  if ((float)in_ECX[0x38] != 0.0) {
    in_ECX[0x37] = 1;
    if ((*(byte *)(iVar1 + 0x1a4) & 2) != 0) {
      (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" triggered; will turn on in %f seconds.\n",
                      *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                      (double)(float)in_ECX[0x38]);
    }
    (**(code **)(*in_ECX + 8))();
    return;
  }
  in_ECX[0x37] = 2;
  if ((*(byte *)(iVar1 + 0x1a4) & 2) == 0) goto LAB_10016378;
  (*DAT_1022303c)(1,"DEBUG: env_state \"%s\" triggered, turned on",
                  *(int *)(iVar1 + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
  iVar1 = *(int *)(in_ECX[1] + 0x1cc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(in_ECX[1] + 0x1f0);
    if (iVar1 != 0) {
      uVar3 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + iVar1,": firing \"%s\"");
      goto LAB_1001635d;
    }
  }
  else {
    (*DAT_1022303c)(1,": firing \"%s\"",*(int *)(DAT_10223188 + 0x98) + iVar1);
    if (*(int *)(in_ECX[1] + 0x1f0) != 0) {
      uVar3 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1f0)," and \"%s\"");
LAB_1001635d:
      (*DAT_1022303c)(1,uVar3);
    }
  }
  (*DAT_1022303c)(1,&DAT_101a53d8);
LAB_10016378:
  FUN_10101ff0(*(int *)(in_ECX[1] + 0x1cc) + *(int *)(DAT_10223188 + 0x98),param_1);
  FUN_10101ff0(*(int *)(in_ECX[1] + 0x1f0) + *(int *)(DAT_10223188 + 0x98),param_1);
  FUN_10017ad0();
  return;
}

