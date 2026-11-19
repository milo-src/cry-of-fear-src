// rea decompile_all
// name: common_vsprintf<__crt_stdio_output::standard_base,char>
// address: 0x1014c9a9
// body: available
// range: 0x1014c9a9-0x1014cb26 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::standard_base,char>(unsigned __int64,char
   * const,unsigned int,char const * const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_vsprintf<__crt_stdio_output::standard_base,char>
          (__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,
          char *param_6)

{
  char *******pppppppcVar1;
  int *piVar2;
  int iVar3;
  char *unaff_EDI;
  int local_488;
  char local_484 [8];
  char local_47c;
  uint local_478;
  char *******local_474;
  uint local_470;
  uint local_46c;
  undefined4 local_468;
  char *******local_464;
  output_adapter_data<char,__crt_stdio_output::string_output_adapter<char>_> local_460 [64];
  formatting_buffer local_420 [1040];
  undefined4 local_10;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_464 = (char *******)param_2;
  if ((param_4 == (char *)0x0) || ((param_3 != 0 && (param_2 == (char *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016fa52();
    goto LAB_1014cafe;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_488,param_5);
  pppppppcVar1 = local_464;
  local_478 = (uint)param_1 & 2;
  local_474 = local_464;
  local_470 = param_3;
  local_46c = 0;
  if (((param_1 & 2) != 0) || (local_468 = 0, local_464 == (char *******)0x0)) {
    local_468 = 1;
  }
  local_464 = (char *******)&local_474;
  __crt_stdio_output::output_adapter_data<char,__crt_stdio_output::string_output_adapter<char>_>::
  output_adapter_data<char,__crt_stdio_output::string_output_adapter<char>_>
            (local_460,(string_output_adapter<char> *)&local_464,CONCAT44(param_4,param_1._4_4_),
             local_484,(__crt_locale_pointers *)param_6,unaff_EDI);
  local_10 = 0;
  iVar3 = __crt_stdio_output::
          output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
          ::process((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::standard_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     *)local_460);
  if (pppppppcVar1 != (char *******)0x0) {
    if ((param_1 & 1) == 0) {
      if (local_478 == 0) {
        if (param_3 != 0) {
          if (local_46c != param_3) goto LAB_1014cad6;
LAB_1014cb21:
          *(undefined1 *)((int)pppppppcVar1 + (param_3 - 1)) = 0;
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar3) {
          if (local_46c == param_3) goto LAB_1014cb21;
          goto LAB_1014cad6;
        }
        *(undefined1 *)pppppppcVar1 = 0;
      }
    }
    else if (((param_3 != 0) || (iVar3 == 0)) && (local_46c != param_3)) {
LAB_1014cad6:
      *(undefined1 *)((int)pppppppcVar1 + local_46c) = 0;
    }
  }
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_420);
  if (local_47c != '\0') {
    *(uint *)(local_488 + 0x350) = *(uint *)(local_488 + 0x350) & 0xfffffffd;
  }
LAB_1014cafe:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

