// rea decompile_all
// name: common_vsprintf<__crt_stdio_output::positional_parameter_base,char>
// address: 0x1014c640
// body: available
// range: 0x1014c640-0x1014c7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_vsprintf<class __crt_stdio_output::positional_parameter_base,char>(unsigned
   __int64,char * const,unsigned int,char const * const,struct __crt_locale_pointers * const,char *
   const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_vsprintf<__crt_stdio_output::positional_parameter_base,char>
          (__uint64 param_1,char *param_2,uint param_3,char *param_4,__crt_locale_pointers *param_5,
          char *param_6)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int local_af4;
  __crt_locale_pointers local_af0 [8];
  char local_ae8;
  undefined8 local_ae4;
  uint local_adc;
  char **local_ad8;
  char *local_ad4;
  __crt_locale_pointers *local_ad0;
  char *local_acc;
  uint local_ac8;
  uint local_ac4;
  undefined4 local_ac0;
  char *local_abc;
  positional_parameter_base<char,__crt_stdio_output::string_output_adapter<char>_> local_ab8 [64];
  formatting_buffer local_a78 [2672];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_abc = param_2;
  if ((param_4 == (char *)0x0) || ((param_3 != 0 && (param_2 == (char *)0x0)))) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016fa52();
    goto LAB_1014c7c6;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_af4,param_5);
  pcVar1 = local_abc;
  local_adc = (uint)param_1 & 2;
  local_acc = local_abc;
  local_ac8 = param_3;
  local_ac4 = 0;
  if (((param_1 & 2) != 0) || (local_ac0 = 0, local_abc == (char *)0x0)) {
    local_ac0 = 1;
  }
  local_ad8 = &local_acc;
  local_abc = param_6;
  local_ad0 = local_af0;
  local_ad4 = param_4;
  local_ae4 = param_1;
  __crt_stdio_output::
  positional_parameter_base<char,__crt_stdio_output::string_output_adapter<char>_>::
  positional_parameter_base<char,__crt_stdio_output::string_output_adapter<char>_><__crt_stdio_output::string_output_adapter<char>_const&,unsigned___int64_const&,char_const*_const&,__crt_locale_pointers*_const&,char*_const&>
            (local_ab8,(string_output_adapter<char> *)&local_ad8,&local_ae4,&local_ad4,&local_ad0,
             &local_abc);
  iVar3 = __crt_stdio_output::
          output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
          ::process((output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::positional_parameter_base<char,__crt_stdio_output::string_output_adapter<char>_>_>
                     *)local_ab8);
  if (pcVar1 != (char *)0x0) {
    if ((param_1 & 1) == 0) {
      if (local_adc == 0) {
        if (param_3 != 0) {
          if (local_ac4 != param_3) goto LAB_1014c79f;
LAB_1014c7ea:
          pcVar1[param_3 - 1] = '\0';
        }
      }
      else if (param_3 != 0) {
        if (-1 < iVar3) {
          if (local_ac4 == param_3) goto LAB_1014c7ea;
          goto LAB_1014c79f;
        }
        *pcVar1 = '\0';
      }
    }
    else if (((param_3 != 0) || (iVar3 == 0)) && (local_ac4 != param_3)) {
LAB_1014c79f:
      pcVar1[local_ac4] = '\0';
    }
  }
  __crt_stdio_output::formatting_buffer::~formatting_buffer(local_a78);
  if (local_ae8 != '\0') {
    *(uint *)(local_af4 + 0x350) = *(uint *)(local_af4 + 0x350) & 0xfffffffd;
  }
LAB_1014c7c6:
  iVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar3;
}

