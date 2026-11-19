// rea decompile_all
// name: FUN_10118800
// address: 0x10118800
// body: available
// range: 0x10118800-0x1011897d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10118979 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10118800(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  int iVar8;
  size_t _Count;
  bool bVar9;
  char *local_60;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  iVar8 = -1;
  _Count = 0;
  cVar1 = *param_3;
  local_60 = (char *)0x0;
  pcVar7 = param_3;
  do {
    if (cVar1 == '\0') {
LAB_10118851:
      iVar3 = FUN_10118590(0,param_2);
      do {
        if (iVar3 == 0) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        pcVar7 = "info_group";
        pbVar6 = (byte *)(**(int **)(iVar3 + 4) + *(int *)(DAT_10223188 + 0x98));
        do {
          bVar2 = *pbVar6;
          bVar9 = bVar2 < (byte)*pcVar7;
          if (bVar2 != *pcVar7) {
LAB_101188cd:
            uVar4 = -(uint)bVar9 | 1;
            goto LAB_101188d2;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar6[1];
          bVar9 = bVar2 < (byte)pcVar7[1];
          if (bVar2 != pcVar7[1]) goto LAB_101188cd;
          pbVar6 = pbVar6 + 2;
          pcVar7 = pcVar7 + 2;
        } while (bVar2 != 0);
        uVar4 = 0;
LAB_101188d2:
        if ((uVar4 == 0) && (iVar5 = FUN_1000d890(param_3), iVar5 != 0)) {
          if (local_60 == (char *)0x0) {
            iVar5 = FUN_10118590(param_1,*(int *)(DAT_10223188 + 0x98) + iVar5);
          }
          else {
            iVar5 = FUN_10118800(param_1,*(int *)(DAT_10223188 + 0x98) + iVar5,local_60);
          }
          if ((iVar5 != 0) &&
             ((iVar5 = (*DAT_10223060)(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x20c)), iVar8 == -1 ||
              (iVar5 < iVar8)))) {
            iVar8 = iVar5;
          }
        }
        iVar3 = FUN_10118590(iVar3,param_2);
      } while( true );
    }
    if (cVar1 == '.') {
      _strncpy(local_58,param_3,_Count);
      if (0x4f < _Count) {
                    /* WARNING: Subroutine does not return */
        ___report_rangecheckfailure();
      }
      local_58[_Count] = '\0';
      local_60 = pcVar7 + 1;
      param_3 = local_58;
      goto LAB_10118851;
    }
    _Count = _Count + 1;
    cVar1 = param_3[_Count];
    pcVar7 = param_3 + _Count;
  } while( true );
}

