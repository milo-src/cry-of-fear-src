// rea decompile_all
// name: UnDecorator::getEnumType
// address: 0x10147f98
// body: available
// range: 0x10147f98-0x10148094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getEnumType(void)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getEnumType(void)

{
  char cVar1;
  DName *this;
  DName *in_stack_00000004;
  DName local_1c [8];
  char *local_14;
  undefined4 local_10;
  char *local_c;
  undefined4 local_8;
  
  local_c = (char *)0x0;
  local_8 = 0;
  if (*DAT_10232958 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  switch(*DAT_10232958) {
  case '0':
  case '1':
    local_14 = "char ";
    goto LAB_10147ffb;
  case '2':
  case '3':
    local_14 = "short ";
    local_10 = 6;
    break;
  case '4':
    goto switchD_10147fc4_caseD_34;
  case '5':
    local_14 = "int ";
    local_10 = 4;
    break;
  case '6':
  case '7':
    local_14 = "long ";
LAB_10147ffb:
    local_10 = 5;
    break;
  default:
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    in_stack_00000004[4] = (DName)0x2;
    *(undefined4 *)in_stack_00000004 = 0;
    return in_stack_00000004;
  }
  DName::operator=((DName *)&local_c,(StringLiteral *)&local_14);
switchD_10147fc4_caseD_34:
  cVar1 = *DAT_10232958;
  DAT_10232958 = DAT_10232958 + 1;
  if ((((cVar1 == '1') || (cVar1 == '3')) || (cVar1 == '5')) || (cVar1 == '7')) {
    local_14 = "unsigned ";
    local_10 = 9;
    this = (DName *)DName::DName(local_1c,(StringLiteral *)&local_14);
    DName::operator+(this,(DName *)&local_14);
    local_c = local_14;
    local_8 = local_10;
  }
  *(char **)in_stack_00000004 = local_c;
  *(undefined4 *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

