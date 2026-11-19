// rea decompile_all
// name: UnDecorator::getArgumentList
// address: 0x10146692
// body: available
// range: 0x10146692-0x1014679e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArgumentList(void)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getArgumentList(void)

{
  bool bVar1;
  char *pcVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  undefined1 local_1c [8];
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  bVar1 = true;
  *(undefined4 *)in_stack_00000004 = 0;
  *(undefined4 *)(in_stack_00000004 + 4) = 0;
  while( true ) {
    if (*DAT_10232958 == '@') {
      return in_stack_00000004;
    }
    if (*DAT_10232958 == 'Z') {
      return in_stack_00000004;
    }
    if (bVar1) {
      bVar1 = false;
    }
    else {
      DName::operator+=(in_stack_00000004,',');
    }
    pcVar2 = DAT_10232958;
    if (*DAT_10232958 == '\0') break;
    if ((int)*DAT_10232958 - 0x30U < 10) {
      DAT_10232958 = DAT_10232958 + 1;
      pDVar3 = (DName *)Replicator::operator[](DAT_1023294c,(int)local_1c);
      DName::operator+=(in_stack_00000004,pDVar3);
    }
    else {
      local_c = 0;
      local_8 = 0;
      getPrimaryDataType(local_14);
      if ((1 < (int)DAT_10232958 - (int)pcVar2) && (*(int *)DAT_1023294c != 9)) {
        Replicator::operator+=(DAT_1023294c,local_14);
      }
      DName::operator+=(in_stack_00000004,local_14);
      if (DAT_10232958 == pcVar2) {
        *(undefined4 *)(in_stack_00000004 + 4) = 0;
        *(undefined4 *)in_stack_00000004 = 0;
        in_stack_00000004[4] = (DName)0x2;
      }
    }
    if (in_stack_00000004[4] != (DName)0x0) {
      return in_stack_00000004;
    }
  }
  if ('\x01' < (char)in_stack_00000004[4]) {
    return in_stack_00000004;
  }
  if (*(int *)in_stack_00000004 != 0) {
    DName::append<DNameStatusNode>(in_stack_00000004,(DNameStatusNode *)&PTR_vftable_101ec55c);
    return in_stack_00000004;
  }
  DName::operator=(in_stack_00000004,1);
  return in_stack_00000004;
}

