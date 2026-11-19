// rea decompile_all
// name: __crt_strtox::parse_digit
// address: 0x1016768f
// body: available
// range: 0x1016768f-0x1016786d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned int __cdecl __crt_strtox::parse_digit(wchar_t)
   
   Libraries: Visual Studio 2019 Debug, Visual Studio 2019 Release */

uint __cdecl __crt_strtox::parse_digit(wchar_t param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x30;
  if ((ushort)param_1 < 0x30) goto LAB_10167828;
  if ((ushort)param_1 < 0x3a) {
LAB_101676aa:
    uVar1 = (uint)(ushort)param_1 - iVar2;
  }
  else {
    iVar2 = 0xff10;
    if ((ushort)param_1 < 0xff10) {
      iVar2 = 0x660;
      if (((ushort)param_1 < 0x660) ||
         ((0x669 < (ushort)param_1 &&
          ((iVar2 = 0x6f0, (ushort)param_1 < 0x6f0 ||
           ((0x6f9 < (ushort)param_1 &&
            ((iVar2 = 0x966, (ushort)param_1 < 0x966 ||
             ((0x96f < (ushort)param_1 &&
              ((iVar2 = 0x9e6, (ushort)param_1 < 0x9e6 ||
               ((0x9ef < (ushort)param_1 &&
                ((iVar2 = 0xa66, (ushort)param_1 < 0xa66 ||
                 ((0xa6f < (ushort)param_1 &&
                  ((iVar2 = 0xae6, (ushort)param_1 < 0xae6 ||
                   ((0xaef < (ushort)param_1 &&
                    ((iVar2 = 0xb66, (ushort)param_1 < 0xb66 ||
                     ((0xb6f < (ushort)param_1 &&
                      ((iVar2 = 0xc66, (ushort)param_1 < 0xc66 ||
                       ((0xc6f < (ushort)param_1 &&
                        ((iVar2 = 0xce6, (ushort)param_1 < 0xce6 ||
                         ((0xcef < (ushort)param_1 &&
                          ((iVar2 = 0xd66, (ushort)param_1 < 0xd66 ||
                           ((0xd6f < (ushort)param_1 &&
                            ((iVar2 = 0xe50, (ushort)param_1 < 0xe50 ||
                             ((0xe59 < (ushort)param_1 &&
                              ((iVar2 = 0xed0, (ushort)param_1 < 0xed0 ||
                               ((0xed9 < (ushort)param_1 &&
                                ((iVar2 = 0xf20, (ushort)param_1 < 0xf20 ||
                                 ((0xf29 < (ushort)param_1 &&
                                  ((iVar2 = 0x1040, (ushort)param_1 < 0x1040 ||
                                   ((0x1049 < (ushort)param_1 &&
                                    ((iVar2 = 0x17e0, (ushort)param_1 < 0x17e0 ||
                                     ((0x17e9 < (ushort)param_1 &&
                                      ((iVar2 = 0x1810, (ushort)param_1 < 0x1810 ||
                                       (0x1819 < (ushort)param_1))))))))))))))))))))))))))))))))))))
                     )))))))))))))))))))))))))) goto LAB_10167828;
      goto LAB_101676aa;
    }
    if ((ushort)param_1 < 0xff1a) goto LAB_101676aa;
    uVar1 = 0xffffffff;
  }
  if (uVar1 != 0xffffffff) {
    return uVar1;
  }
LAB_10167828:
  uVar1 = (uint)(ushort)param_1;
  if (((uVar1 < 0x41) || (0x5a < uVar1)) && (0x19 < uVar1 - 0x61)) {
    return 0xffffffff;
  }
  if (uVar1 - 0x61 < 0x1a) {
    uVar1 = uVar1 - 0x20;
  }
  return uVar1 - 0x37;
}

