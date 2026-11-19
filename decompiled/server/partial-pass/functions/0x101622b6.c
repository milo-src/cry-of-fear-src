// rea decompile_all
// name: __crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::process_string_specifier_tchar<wchar_t>
// address: 0x101622b6
// body: available
// range: 0x101622b6-0x10162430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<char,class
   __crt_stdio_input::stream_input_adapter<char> >::process_string_specifier_tchar<wchar_t>(enum
   __crt_stdio_input::conversion_mode,wchar_t)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>::
process_string_specifier_tchar<wchar_t>
          (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_> *this,
          conversion_mode param_1,wchar_t param_2)

{
  uint *puVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  wchar_t *pwVar5;
  uint uVar6;
  wchar_t *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  pwVar5 = (wchar_t *)0x0;
  if (this[0x26] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0) {
    *(int *)(this + 100) = *(int *)(this + 100) + 4;
    puVar1 = *(uint **)(this + 100);
    pwVar5 = (wchar_t *)puVar1[-1];
    if (pwVar5 == (wchar_t *)0x0) {
      piVar3 = __errno();
      *piVar3 = 0x16;
      FUN_1016fa52();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(uint **)(this + 100) = puVar1 + 1;
      uVar6 = *puVar1;
      goto LAB_10162309;
    }
  }
  uVar6 = 0xffffffff;
LAB_10162309:
  if (uVar6 == 0) {
    if ((*(uint *)this & 4) != 0) {
      iVar4 = FUN_1017046f(*(undefined4 *)(this + 8));
      if (iVar4 != -1) {
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      }
LAB_10162327:
      *pwVar5 = L'\0';
    }
LAB_1016232c:
    piVar3 = __errno();
    *piVar3 = 0xc;
  }
  else {
    local_14 = *(uint *)(this + 0x28);
    local_18 = *(int *)(this + 0x2c);
    local_10 = uVar6;
    if ((param_1 != 0) && (uVar6 != 0xffffffff)) {
      local_10 = uVar6 - 1;
    }
    local_c = 0;
    local_8 = 0;
    local_20 = pwVar5;
    while( true ) {
      if (((local_14 != 0 || local_18 != 0) && (local_c == local_14)) && (local_8 == local_18))
      goto LAB_101623ee;
      local_1c = FUN_1017046f(*(undefined4 *)(this + 8));
      if (local_1c != -1) {
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      }
      bVar2 = is_character_allowed_in_string(this,param_1,local_1c);
      if (!bVar2) break;
      if (this[0x26] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0) {
        if (local_10 == 0) {
          if (uVar6 != 0xffffffff) goto LAB_10162327;
          goto LAB_1016232c;
        }
        bVar2 = write_character(this,pwVar5,uVar6,&local_20,&local_10,(char)local_1c);
        if (!bVar2) goto LAB_101623ee;
      }
      bVar2 = 0xfffffffe < local_c;
      local_c = local_c + 1;
      local_8 = local_8 + (uint)bVar2;
    }
    stream_input_adapter<char>::unget((stream_input_adapter<char> *)(this + 8),local_1c);
LAB_101623ee:
    if ((local_c != 0 || local_8 != 0) &&
       (((param_1 != 0 || ((local_c == local_14 && (local_8 == local_18)))) ||
        ((*(uint *)this & 4) != 0)))) {
      if ((this[0x26] == (input_processor<char,__crt_stdio_input::stream_input_adapter<char>_>)0x0)
         && (param_1 != 0)) {
        *local_20 = L'\0';
      }
      return true;
    }
  }
  return false;
}

