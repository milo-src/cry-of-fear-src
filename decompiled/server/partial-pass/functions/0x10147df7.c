// rea decompile_all
// name: UnDecorator::getECSUDataType
// address: 0x10147df7
// body: available
// range: 0x10147df7-0x10147f86 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2019 Release */

undefined4 * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *pDVar2;
  undefined4 *in_stack_00000004;
  DName local_2c [16];
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  cVar1 = *DAT_10232958;
  if (cVar1 == '\0') {
    local_14 = "`unknown ecsu\'";
    local_10 = 0xe;
    pDVar2 = (DName *)DName::DName((DName *)&local_1c,(StringLiteral *)&local_14);
    DName::operator+(pDVar2,(DNameStatus)in_stack_00000004);
    return in_stack_00000004;
  }
  local_14 = (char *)0x0;
  local_10 = 0;
  if (cVar1 == 'W') {
    if ((~(DAT_10232960 >> 0xf) & 1) != 0) {
LAB_10147ea9:
      DAT_10232958 = DAT_10232958 + 1;
      local_c = (char *)0x0;
      local_8 = 0;
      if (cVar1 == 'T') {
        local_1c = "union ";
LAB_10147f63:
        local_18 = 6;
LAB_10147f6a:
        DName::operator=((DName *)&local_c,(StringLiteral *)&local_1c);
      }
      else {
        if (cVar1 == 'U') {
          local_1c = "struct ";
          local_18 = 7;
          goto LAB_10147f6a;
        }
        if (cVar1 == 'V') {
          local_1c = "class ";
          goto LAB_10147f63;
        }
        if (cVar1 != 'W') {
          if (cVar1 == 'X') {
            local_1c = "coclass ";
            local_18 = 8;
          }
          else {
            if (cVar1 != 'Y') goto LAB_10147f76;
            local_1c = "cointerface ";
            local_18 = 0xc;
          }
          goto LAB_10147f6a;
        }
        local_1c = "enum ";
        local_18 = 5;
        getEnumType();
        pDVar2 = (DName *)DName::DName(local_2c,(StringLiteral *)&local_1c);
        DName::operator+(pDVar2,(DName *)&local_1c);
        local_c = local_1c;
        local_8 = local_18;
      }
LAB_10147f76:
      local_14 = local_c;
      local_10 = local_8;
      goto LAB_10147e68;
    }
  }
  else if (((~(DAT_10232960 >> 0xf) & 1) != 0) && ((DAT_10232960 & 0x1000) == 0)) goto LAB_10147ea9;
  DAT_10232958 = DAT_10232958 + 1;
  if (cVar1 == 'W') {
    getEnumType();
  }
LAB_10147e68:
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_1c);
  *in_stack_00000004 = local_14;
  in_stack_00000004[1] = local_10;
  return in_stack_00000004;
}

