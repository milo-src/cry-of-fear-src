// rea decompile_all
// name: FUN_10115680
// address: 0x10115680
// body: available
// range: 0x10115680-0x101159e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10115680(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  float10 fVar5;
  double dVar6;
  
  iVar2 = FUN_10119060(*(undefined4 *)(in_ECX + 0xf0),param_1);
  if (iVar2 == 0) {
    if (*(int *)(in_ECX + 0xf4) == 0) {
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) == 0) {
        return;
      }
      (*DAT_1022303c)(1,"DEBUG: trigger_relay \"%s\" wasn\'t activated: locked by master %s\n",
                      *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),
                      *(int *)(in_ECX + 0xf0) + *(int *)(DAT_10223188 + 0x98));
      return;
    }
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xf4),param_1);
    iVar2 = *(int *)(in_ECX + 4);
    if ((*(byte *)(iVar2 + 0x1a4) & 2) != 0) {
      iVar1 = *(int *)(DAT_10223188 + 0x98);
      (*DAT_1022303c)(1,
                      "DEBUG: trigger_relay \"%s\" locked by master %s - fired alternate target %s\n"
                      ,*(int *)(iVar2 + 0x1d0) + iVar1,*(int *)(in_ECX + 0xf0) + iVar1,
                      *(int *)(in_ECX + 0xf4) + iVar1);
      iVar2 = *(int *)(in_ECX + 4);
    }
    uVar4 = *(uint *)(iVar2 + 0x1a4);
  }
  else {
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 2) != 0) {
      uVar3 = FUN_101168b0();
      (*DAT_1022303c)(1,"DEBUG: trigger_relay \"%s\" was sent %s",
                      *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98),uVar3);
      if (param_1 == 0) {
        (*DAT_1022303c)(1," (no locus)");
      }
      else {
        (*DAT_1022303c)();
      }
    }
    iVar2 = *(int *)(in_ECX + 4);
    if ((*(int *)(iVar2 + 0x1cc) == 0) && (*(int *)(in_ECX + 0xe0) == 0)) {
      if ((*(byte *)(iVar2 + 0x1a4) & 2) == 0) {
        return;
      }
      (*DAT_1022303c)(1,&DAT_101a53d8);
      return;
    }
    if (*(int *)(iVar2 + 0x1d8) != 0) {
      fVar5 = (float10)FUN_100b81e0(param_1,*(int *)(DAT_10223188 + 0x98) + *(int *)(iVar2 + 0x1d8))
      ;
      iVar2 = *(int *)(in_ECX + 4);
      param_4 = (float)fVar5;
    }
    if (*(int *)(in_ECX + 0xec) == 5) {
      if ((*(byte *)(iVar2 + 0x1a4) & 2) != 0) {
        if (*(float *)(in_ECX + 0xdc) == 0.0) {
          uVar3 = FUN_101168b0();
          (*DAT_1022303c)(1,": sending %s(same) now.\n",uVar3);
        }
        else {
          dVar6 = (double)*(float *)(in_ECX + 0xdc);
          uVar3 = FUN_101168b0();
          (*DAT_1022303c)(1,": will send %s(same) in %f seconds.\n",uVar3,dVar6);
        }
      }
    }
    else if (*(int *)(in_ECX + 0xec) == 2) {
      if ((*(uint *)(iVar2 + 0x1a4) & 2) != 0) {
        if (*(float *)(in_ECX + 0xdc) == 0.0) {
          (*DAT_1022303c)(1,": sending ratio %f now.\n",(double)param_4);
        }
        else {
          (*DAT_1022303c)(1,": will send ratio %f in %f seconds.\n",(double)param_4,
                          (double)*(float *)(in_ECX + 0xdc));
        }
      }
    }
    else if ((*(uint *)(iVar2 + 0x1a4) & 2) != 0) {
      if (*(float *)(in_ECX + 0xdc) == 0.0) {
        uVar3 = FUN_101168b0();
        (*DAT_1022303c)(1,": sending %s now.\n",uVar3);
      }
      else {
        dVar6 = (double)*(float *)(in_ECX + 0xdc);
        uVar3 = FUN_101168b0();
        (*DAT_1022303c)(1,": will send %s in %f seconds.\n",uVar3,dVar6);
      }
    }
    FUN_10102930();
    uVar4 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4);
  }
  if ((uVar4 & 1) != 0) {
    if ((uVar4 & 2) != 0) {
      (*DAT_1022303c)(1,"trigger_relay \"%s\" removes itself.\n");
    }
    FUN_10119900();
  }
  return;
}

