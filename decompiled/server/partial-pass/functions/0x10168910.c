// rea decompile_all
// name: __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width
// address: 0x10168910
// body: available
// range: 0x10168910-0x10168b35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall
   __crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::format_string_parser<wchar_t>::scan_optional_field_width
          (format_string_parser<wchar_t> *this)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int local_8;
  
  iVar4 = 0x30;
  uVar1 = **(ushort **)(this + 8);
  uVar2 = (uint)uVar1;
  if (0x2f < uVar1) {
    if (uVar2 < 0x3a) {
LAB_10168931:
      uVar3 = uVar2 - iVar4;
    }
    else {
      iVar4 = 0xff10;
      if (uVar1 < 0xff10) {
        iVar4 = 0x660;
        if ((uVar1 < 0x660) ||
           ((0x669 < uVar1 &&
            ((iVar4 = 0x6f0, uVar1 < 0x6f0 ||
             ((0x6f9 < uVar1 &&
              ((iVar4 = 0x966, uVar1 < 0x966 ||
               ((0x96f < uVar1 &&
                ((iVar4 = 0x9e6, uVar1 < 0x9e6 ||
                 ((0x9ef < uVar1 &&
                  ((iVar4 = 0xa66, uVar1 < 0xa66 ||
                   ((0xa6f < uVar1 &&
                    ((iVar4 = 0xae6, uVar1 < 0xae6 ||
                     ((0xaef < uVar1 &&
                      ((iVar4 = 0xb66, uVar1 < 0xb66 ||
                       ((0xb6f < uVar1 &&
                        ((iVar4 = 0xc66, uVar1 < 0xc66 ||
                         ((0xc6f < uVar1 &&
                          ((iVar4 = 0xce6, uVar1 < 0xce6 ||
                           ((0xcef < uVar1 &&
                            ((iVar4 = 0xd66, uVar1 < 0xd66 ||
                             ((0xd6f < uVar1 &&
                              ((iVar4 = 0xe50, uVar1 < 0xe50 ||
                               ((0xe59 < uVar1 &&
                                ((iVar4 = 0xed0, uVar1 < 0xed0 ||
                                 ((0xed9 < uVar1 &&
                                  ((iVar4 = 0xf20, uVar1 < 0xf20 ||
                                   ((0xf29 < uVar1 &&
                                    ((iVar4 = 0x1040, uVar1 < 0x1040 ||
                                     ((0x1049 < uVar1 &&
                                      ((iVar4 = 0x17e0, uVar1 < 0x17e0 ||
                                       ((0x17e9 < uVar1 &&
                                        ((iVar4 = 0x1810, uVar1 < 0x1810 || (0x1819 < uVar1)))))))))
                                     )))))))))))))))))))))))))))))))))))))))))))))))))))))
        goto LAB_10168ac9;
        goto LAB_10168931;
      }
      if (uVar1 < 0xff1a) goto LAB_10168931;
      uVar3 = 0xffffffff;
    }
    if (uVar3 != 0xffffffff) goto LAB_10168af2;
  }
LAB_10168ac9:
  if (((uVar2 < 0x41) || (0x5a < uVar2)) && (0x19 < uVar2 - 0x61)) {
    uVar3 = 0xffffffff;
  }
  else {
    if (uVar2 - 0x61 < 0x1a) {
      uVar2 = uVar2 - 0x20;
    }
    uVar3 = uVar2 - 0x37;
  }
LAB_10168af2:
  if (uVar3 < 10) {
    local_8 = 0;
    lVar5 = wcstoull(*(ushort **)(this + 8),&local_8,10);
    if ((lVar5 == 0) || (local_8 == *(int *)(this + 8))) {
      reset_token_state_for_error(this,0x16);
      return false;
    }
    *(longlong *)(this + 0x20) = lVar5;
    *(int *)(this + 8) = local_8;
  }
  return true;
}

