// rea decompile_all
// name: UnDecorator::getCallingConvention
// address: 0x10147196
// body: available
// range: 0x10147196-0x10147272 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2019 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  DName *in_stack_00000004;
  Tokens TVar2;
  undefined8 local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*DAT_10232958 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  uVar1 = (int)*DAT_10232958 - 0x41;
  DAT_10232958 = DAT_10232958 + 1;
  if (0x14 < uVar1) {
    *(undefined4 *)(in_stack_00000004 + 4) = 0;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
    return in_stack_00000004;
  }
  local_c = 0;
  local_8 = 2;
  if ((~(DAT_10232960 >> 1) & 1) != 0) {
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar1 < 0xd) {
      if (uVar1 == 0xc) {
        TVar2 = 7;
      }
      else if (uVar1 == 0) {
        TVar2 = 1;
      }
      else if (uVar1 == 2) {
        TVar2 = 2;
      }
      else if (uVar1 == 4) {
        TVar2 = 4;
      }
      else if (uVar1 == 6) {
        TVar2 = 3;
      }
      else {
        if (uVar1 != 8) goto LAB_10147244;
        TVar2 = 5;
      }
    }
    else if (uVar1 == 0xe) {
      TVar2 = 8;
    }
    else if (uVar1 == 0x10) {
      TVar2 = 6;
    }
    else if (uVar1 == 0x12) {
      TVar2 = 9;
    }
    else {
      if (uVar1 != 0x14) goto LAB_10147244;
      TVar2 = 10;
    }
    local_14 = UScore(TVar2);
    DName::operator=((DName *)&local_c,(StringLiteral *)&local_14);
  }
LAB_10147244:
  *(undefined4 *)in_stack_00000004 = local_c;
  *(undefined4 *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

