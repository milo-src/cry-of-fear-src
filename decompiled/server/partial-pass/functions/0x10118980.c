// rea decompile_all
// name: FUN_10118980
// address: 0x10118980
// body: available
// range: 0x10118980-0x10118ace inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10118aca to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10118980(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  char local_5c [84];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_2 != (byte *)0x0) && (bVar1 = *param_2, bVar1 != 0)) {
    uVar7 = 0;
    pbVar3 = param_2;
    bVar2 = bVar1;
    do {
      if (bVar2 == 0x2e) {
        _strncpy(local_5c,(char *)param_2,uVar7);
        if (uVar7 < 0x51) {
          local_5c[uVar7] = '\0';
          FUN_10118800(param_1,local_5c,pbVar3 + 1);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___report_rangecheckfailure();
      }
      uVar7 = uVar7 + 1;
      bVar2 = param_2[uVar7];
      pbVar3 = param_2 + uVar7;
    } while (bVar2 != 0);
    if (bVar1 == 0x2a) {
      pcVar6 = "*player";
      pbVar3 = param_2;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < (byte)*pcVar6;
        if (bVar1 != *pcVar6) {
LAB_101189f7:
          uVar7 = -(uint)bVar8 | 1;
          goto LAB_101189fc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < (byte)pcVar6[1];
        if (bVar1 != pcVar6[1]) goto LAB_101189f7;
        pbVar3 = pbVar3 + 2;
        pcVar6 = pcVar6 + 2;
      } while (bVar1 != 0);
      uVar7 = 0;
LAB_101189fc:
      if (uVar7 != 0) {
        FUN_10118780(param_1,param_2 + 1);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar4 = FUN_10118460(0,"player");
      if (iVar4 != 0) {
        if (param_1 != 0) {
          iVar4 = (*DAT_10223060)(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
          iVar5 = (*DAT_10223060)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
          if (iVar4 <= iVar5) goto LAB_10118ab7;
        }
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
LAB_10118ab7:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

