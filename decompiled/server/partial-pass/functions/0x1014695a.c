// rea decompile_all
// name: UnDecorator::getArrayType
// address: 0x1014695a
// body: available
// range: 0x1014695a-0x10146af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getArrayType(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getArrayType(DName *param_1)

{
  int iVar1;
  DName *pDVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  DName *in_stack_00000008;
  DName local_2c [8];
  StringLiteral local_24 [8];
  undefined *local_1c;
  uint local_18;
  undefined *local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_10232958 == '\0') {
    if (*(int *)in_stack_00000008 != 0) {
      local_1c = &DAT_101ec3b8;
      local_18 = 2;
      pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
      pDVar2 = (DName *)DName::operator+(pDVar2,local_24);
      pDVar2 = (DName *)DName::operator+(pDVar2,(DNameStatus)&local_14);
      cVar4 = (char)&local_c;
      goto LAB_10146a94;
    }
  }
  else {
    iVar1 = getNumberOfDimensions();
    if ((-1 < iVar1) && (iVar1 != 0)) {
      local_c = 0;
      local_8 = 0;
      iVar5 = iVar1;
      if ((*(uint *)(in_stack_00000008 + 4) & 0x800) == 0) goto LAB_101469b6;
      local_14 = &DAT_101eba8c;
      local_10 = 2;
      DName::operator+=((DName *)&local_c,(StringLiteral *)&local_14);
      while (iVar5 = iVar1, (char)local_8 < '\x02') {
LAB_101469b6:
        iVar1 = iVar5 + -1;
        if ((iVar5 == 0) || (*DAT_10232958 == '\0')) break;
        getDimension(SUB41(&local_14,0));
        pDVar2 = (DName *)operator+((char)local_24,(DName *)0x5b);
        pDVar2 = (DName *)DName::operator+(pDVar2,(char)local_2c);
        DName::operator+=((DName *)&local_c,pDVar2);
      }
      if (*(int *)in_stack_00000008 != 0) {
        if ((*(uint *)(in_stack_00000008 + 4) & 0x800) == 0) {
          pDVar2 = (DName *)operator+((char)local_2c,(DName *)0x28);
          in_stack_00000008 = (DName *)DName::operator+(pDVar2,(char)local_24);
          pDVar2 = (DName *)&local_14;
        }
        else {
          pDVar2 = local_2c;
        }
        puVar3 = (undefined4 *)DName::operator+(in_stack_00000008,pDVar2);
        local_c = *puVar3;
        local_8 = puVar3[1];
      }
      getPrimaryDataType((DName *)&local_1c);
      *(undefined **)param_1 = local_1c;
      *(uint *)(param_1 + 4) = local_18 | 0x800;
      return param_1;
    }
  }
  local_c = 0;
  local_8 = 0;
  DName::doPchar((DName *)&local_c,'[');
  pDVar2 = (DName *)DName::operator+((DName *)&local_c,(DNameStatus)local_2c);
  cVar4 = (char)local_24;
LAB_10146a94:
  DName::operator+(pDVar2,cVar4);
  getBasicDataType(param_1);
  return param_1;
}

