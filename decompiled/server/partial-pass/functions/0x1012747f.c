// rea decompile_all
// name: ___crtInitOnceExecuteOnce
// address: 0x1012747f
// body: available
// range: 0x1012747f-0x10127508 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___crtInitOnceExecuteOnce
   
   Library: Visual Studio 2019 Release */

uint ___crtInitOnceExecuteOnce(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  pcVar2 = DAT_1023241c;
  if (DAT_1023241c == (code *)0x0) {
    uVar3 = 1;
    LOCK();
    iVar4 = *param_1;
    if (iVar4 == 0) {
      *param_1 = 1;
      iVar4 = 0;
    }
    UNLOCK();
    iVar5 = 2;
    while (iVar4 != 2) {
      if (iVar4 == 0) {
        guard_check_icall(param_1,param_3,param_4);
        iVar4 = (*param_2)();
        if (iVar4 == 0) {
          iVar5 = 0;
        }
        LOCK();
        iVar1 = *param_1;
        *param_1 = iVar5;
        UNLOCK();
        if (iVar1 == 1) {
          return (uint)(iVar4 != 0);
        }
LAB_101274fd:
        SetLastError(0xd);
        return 0;
      }
      if (iVar4 != 1) goto LAB_101274fd;
      SwitchToThread();
      LOCK();
      iVar4 = *param_1;
      if (iVar4 == 0) {
        *param_1 = 1;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  else {
    guard_check_icall(param_1,param_2,param_3,param_4);
    uVar3 = (*pcVar2)();
  }
  return uVar3;
}

