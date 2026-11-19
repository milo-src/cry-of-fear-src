// rea decompile_all
// name: common_vsnprintf_s<wchar_t>
// address: 0x1014c238
// body: available
// range: 0x1014c238-0x1014c33a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    int __cdecl common_vsnprintf_s<wchar_t>(unsigned __int64,wchar_t * const,unsigned int,unsigned
   int,wchar_t const * const,struct __crt_locale_pointers * const,char * const)
   
   Library: Visual Studio 2019 Release */

int __cdecl
common_vsnprintf_s<wchar_t>
          (__uint64 param_1,wchar_t *param_2,uint param_3,uint param_4,wchar_t *param_5,
          __crt_locale_pointers *param_6,char *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (param_5 == (wchar_t *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016fa52();
    return -1;
  }
  if (param_4 == 0) {
    if (param_2 == (wchar_t *)0x0) {
      if (param_3 == 0) {
        return 0;
      }
    }
    else {
LAB_1014c282:
      if (param_3 != 0) {
        piVar2 = __errno();
        if (param_4 < param_3) {
          iVar1 = *piVar2;
          iVar3 = common_vsprintf<__crt_stdio_output::format_validation_base,wchar_t>
                            (param_1,param_2,param_4 + 1,param_5,param_6,param_7);
          if (iVar3 == -2) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
LAB_1014c308:
          if (-1 < iVar3) {
            return iVar3;
          }
        }
        else {
          iVar1 = *piVar2;
          iVar3 = common_vsprintf<__crt_stdio_output::format_validation_base,wchar_t>
                            (param_1,param_2,param_3,param_5,param_6,param_7);
          param_2[param_3 - 1] = L'\0';
          if (iVar3 != -2) goto LAB_1014c308;
          if (param_4 == 0xffffffff) {
            piVar2 = __errno();
            if (*piVar2 != 0x22) {
              return -1;
            }
            piVar2 = __errno();
            *piVar2 = iVar1;
            return -1;
          }
        }
        *param_2 = L'\0';
        if (iVar3 != -2) {
          return -1;
        }
        piVar2 = __errno();
        *piVar2 = 0x22;
        goto LAB_1014c32e;
      }
    }
  }
  else if (param_2 != (wchar_t *)0x0) goto LAB_1014c282;
  piVar2 = __errno();
  *piVar2 = 0x16;
LAB_1014c32e:
  FUN_1016fa52();
  return -1;
}

