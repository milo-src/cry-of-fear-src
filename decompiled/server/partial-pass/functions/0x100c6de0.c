// rea decompile_all
// name: FUN_100c6de0
// address: 0x100c6de0
// body: available
// range: 0x100c6de0-0x100c6ee8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100c6ee4 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100c6de0(char *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  DAT_102231a8 = 0;
  if (param_1 != (char *)0x0) {
    cVar2 = *param_1;
joined_r0x100c6e06:
    while (' ' < cVar2) {
      if (cVar2 != '/') {
        if (cVar2 == '\"') {
          cVar2 = param_1[1];
          param_1 = param_1 + 2;
          if (cVar2 == '\"') goto LAB_100c6e6e;
          goto LAB_100c6e52;
        }
        if ((((cVar2 == '{') || (cVar2 == '}')) || (cVar2 == ')')) ||
           (((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')))) {
          DAT_102231a8 = cVar2;
          DAT_102231a9 = 0;
          return param_1 + 1;
        }
LAB_100c6e96:
        iVar3 = (int)&DAT_102231a8 - (int)param_1;
        goto LAB_100c6ea0;
      }
      if (param_1[1] != '/') goto LAB_100c6e96;
      cVar2 = *param_1;
      while ((cVar2 != '\0' && (cVar2 != '\n'))) {
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
        cVar2 = *pcVar1;
      }
    }
    if (cVar2 != '\0') {
      cVar2 = param_1[1];
      param_1 = param_1 + 1;
      goto joined_r0x100c6e06;
    }
  }
  return (char *)0x0;
LAB_100c6ea0:
  param_1[iVar3] = cVar2;
  uVar4 = uVar4 + 1;
  cVar2 = param_1[1];
  param_1 = param_1 + 1;
  if ((cVar2 == '{') || (cVar2 == '}')) goto LAB_100c6e66;
  if (((cVar2 == ')') || (((cVar2 == '(' || (cVar2 == '\'')) || (cVar2 == ',')))) || (cVar2 < '!'))
  goto LAB_100c6e66;
  goto LAB_100c6ea0;
  while( true ) {
    (&DAT_102231a8)[uVar4] = cVar2;
    uVar4 = uVar4 + 1;
    cVar2 = *param_1;
    param_1 = param_1 + 1;
    if (cVar2 == '\"') break;
LAB_100c6e52:
    if (cVar2 == '\0') break;
  }
LAB_100c6e66:
  if (0x5db < uVar4) {
                    /* WARNING: Subroutine does not return */
    ___report_rangecheckfailure();
  }
LAB_100c6e6e:
  (&DAT_102231a8)[uVar4] = 0;
  return param_1;
}

