// rea decompile_all
// name: UnDecorator::getPrimaryDataType
// address: 0x1014905a
// body: available
// range: 0x1014905a-0x10149278 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Variable defined which should be unmapped: param_1 */
/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getPrimaryDataType(class DName const &)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getPrimaryDataType(DName *param_1)

{
  char cVar1;
  char *pcVar2;
  int *in_stack_00000008;
  char *local_14;
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  cVar1 = *DAT_10232958;
  pcVar2 = DAT_10232958;
  if (cVar1 == '\0') {
LAB_1014910d:
    DAT_10232958 = pcVar2;
    operator+((DNameStatus)param_1,(DName *)0x1);
    return param_1;
  }
  if (cVar1 != '$') {
    if (cVar1 != 'A') {
      if (cVar1 != 'B') {
        getBasicDataType(param_1);
        return param_1;
      }
      if (*in_stack_00000008 == 0) {
        local_14 = "volatile";
        local_10 = 8;
      }
      else {
        local_14 = "volatile ";
        local_10 = 9;
      }
      DName::operator=((DName *)&local_c,(StringLiteral *)&local_14);
      pcVar2 = DAT_10232958;
    }
    goto LAB_101490d2;
  }
  if (DAT_10232958[1] == '$') {
    pcVar2 = DAT_10232958 + 2;
    cVar1 = *pcVar2;
    if (cVar1 < 'R') {
      if (cVar1 != 'Q') {
        if (cVar1 == '\0') goto LAB_1014910d;
        if (cVar1 == 'A') {
          DAT_10232958 = DAT_10232958 + 3;
          getFunctionIndirectType(param_1);
          return param_1;
        }
        if (cVar1 == 'B') {
          DAT_10232958 = DAT_10232958 + 3;
          getPtrRefDataType(param_1,(int)in_stack_00000008);
          return param_1;
        }
        if (cVar1 == 'C') {
          DAT_10232958 = DAT_10232958 + 3;
          local_14 = (char *)0x0;
          local_10 = 0;
          getDataIndirectType((DName *)&local_c,(IndirectionKind)in_stack_00000008,(DName *)0x0,
                              (int)&local_14);
          getBasicDataType(param_1);
          return param_1;
        }
        goto LAB_1014922d;
      }
    }
    else {
      if (cVar1 != 'R') {
        if (cVar1 == 'S') {
          pcVar2 = DAT_10232958 + 3;
        }
        else {
          if (cVar1 == 'T') {
            DAT_10232958 = DAT_10232958 + 3;
            if (*in_stack_00000008 == 0) {
              local_14 = "std::nullptr_t";
              local_10 = 0xe;
              DName::DName(param_1,(StringLiteral *)&local_14);
              return param_1;
            }
            local_14 = "std::nullptr_t ";
            local_10 = 0xf;
            operator+((StringLiteral *)param_1,(DName *)&local_14);
            return param_1;
          }
          if (cVar1 == 'Y') {
            DAT_10232958 = DAT_10232958 + 3;
            getScopedName();
            return param_1;
          }
        }
        goto LAB_1014922d;
      }
      if (*in_stack_00000008 == 0) {
        local_14 = "volatile";
        local_10 = 8;
      }
      else {
        local_14 = "volatile ";
        local_10 = 9;
      }
      DAT_10232958 = pcVar2;
      DName::operator=((DName *)&local_c,(StringLiteral *)&local_14);
      pcVar2 = DAT_10232958;
    }
LAB_101490d2:
    local_14 = (char *)*in_stack_00000008;
    DAT_10232958 = pcVar2 + 1;
    local_10 = in_stack_00000008[1] | 0x100;
    getPtrRefType(param_1,(DName *)&local_c,(IndirectionKind)&local_14);
  }
  else {
    if (DAT_10232958[1] == '\0') goto LAB_1014910d;
LAB_1014922d:
    DAT_10232958 = pcVar2;
    *(undefined4 *)(param_1 + 4) = 0;
    param_1[4] = (DName)0x2;
    *(undefined4 *)param_1 = 0;
  }
  return param_1;
}

