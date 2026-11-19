// rea decompile_all
// name: FUN_10101ff0
// address: 0x10101ff0
// body: available
// range: 0x10101ff0-0x101021c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x101021c0 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10101ff0(char *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint _Count;
  uint uVar5;
  char *_Source;
  char local_58 [80];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((param_1 != (char *)0x0) && (param_4 != 6)) {
    if (*param_1 == '+') {
      param_4 = 1;
      _Source = param_1 + 1;
    }
    else {
      _Source = param_1;
      if (*param_1 == '-') {
        _Source = param_1 + 1;
        param_4 = 0;
      }
    }
    piVar2 = (int *)FUN_10118500(0,_Source,param_2);
    iVar3 = param_2;
    if (piVar2 == (int *)0x0) {
      cVar1 = *_Source;
      _Count = 0;
      if (cVar1 == '\0') goto LAB_101021b0;
      while (uVar5 = _Count + 1, cVar1 != '(') {
        cVar1 = _Source[uVar5];
        _Count = uVar5;
        if (cVar1 == '\0') {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      cVar1 = _Source[uVar5];
      uVar4 = uVar5;
      while( true ) {
        if (cVar1 == '\0') {
          (*DAT_1022303c)(4,"Missing \')\' in target value \"%s\"",param_1);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (cVar1 == ')') break;
        cVar1 = _Source[uVar4 + 1];
        uVar4 = uVar4 + 1;
      }
      uVar4 = uVar4 - uVar5;
      _strncpy(local_58,_Source + uVar5,uVar4);
      if (0x4f < uVar4) {
LAB_101021c0:
                    /* WARNING: Subroutine does not return */
        ___report_rangecheckfailure();
      }
      local_58[uVar4] = '\0';
      iVar3 = FUN_10118500(0,local_58,param_2);
      if (iVar3 == 0) goto LAB_101021b0;
      _strncpy(local_58,_Source,_Count);
      if (0x4f < _Count) goto LAB_101021c0;
      _Source = local_58;
      local_58[_Count] = '\0';
      piVar2 = (int *)FUN_10118500(0,_Source,param_2);
      if (piVar2 == (int *)0x0) goto LAB_101021b0;
    }
    do {
      if ((((int *)piVar2[1])[0x6a] & 0x40000000U) == 0) {
        if (param_4 == 4) {
          (*DAT_1022303c)(2,"Use_kill on %s\n",*(int *)(DAT_10223188 + 0x98) + *(int *)piVar2[1]);
          FUN_10119900(piVar2);
        }
        else {
          (**(code **)(*piVar2 + 0xe8))(iVar3,param_3,param_4,param_5);
        }
      }
      piVar2 = (int *)FUN_10118500(piVar2,_Source,param_2);
    } while (piVar2 != (int *)0x0);
    FUN_10118700();
  }
LAB_101021b0:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

