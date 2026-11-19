// rea decompile_all
// name: __crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::process_string_specifier_tchar<wchar_t>
// address: 0x101626ff
// body: available
// range: 0x101626ff-0x10162865 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_input::input_processor<wchar_t,class
   __crt_stdio_input::string_input_adapter<wchar_t> >::process_string_specifier_tchar<wchar_t>(enum
   __crt_stdio_input::conversion_mode,wchar_t)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_input::input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>::
process_string_specifier_tchar<wchar_t>
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_> *this,
          conversion_mode param_1,wchar_t param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  ushort *local_1c;
  int local_8;
  
  puVar8 = (ushort *)0x0;
  if (this[0x30] == (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0)
  {
    *(int *)(this + 0x54) = *(int *)(this + 0x54) + 4;
    piVar5 = *(int **)(this + 0x54);
    puVar8 = (ushort *)piVar5[-1];
    if (puVar8 == (ushort *)0x0) {
      piVar5 = __errno();
      *piVar5 = 0x16;
      FUN_1016fa52();
      return false;
    }
    if ((*(uint *)this & 1) != 0) {
      *(int **)(this + 0x54) = piVar5 + 1;
      iVar9 = *piVar5;
      goto LAB_10162752;
    }
  }
  iVar9 = -1;
LAB_10162752:
  if (iVar9 == 0) {
    if ((*(uint *)this & 4) != 0) {
      string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
LAB_10162767:
      *puVar8 = 0;
    }
LAB_1016276c:
    piVar5 = __errno();
    *piVar5 = 0xc;
  }
  else {
    uVar1 = *(uint *)(this + 0x38);
    iVar2 = *(int *)(this + 0x3c);
    local_8 = iVar9;
    if ((param_1 != 0) && (iVar9 != -1)) {
      local_8 = iVar9 + -1;
    }
    uVar7 = 0;
    iVar6 = 0;
    local_1c = puVar8;
    while( true ) {
      if (((uVar1 != 0 || iVar2 != 0) && (uVar7 == uVar1)) && (iVar6 == iVar2)) goto LAB_10162823;
      uVar4 = string_input_adapter<wchar_t>::get((string_input_adapter<wchar_t> *)(this + 8));
      bVar3 = is_character_allowed_in_string(this,param_1,uVar4);
      if (!bVar3) break;
      if (this[0x30] ==
          (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) {
        if (local_8 == 0) {
          if (iVar9 != -1) goto LAB_10162767;
          goto LAB_1016276c;
        }
        *local_1c = uVar4;
        local_1c = local_1c + 1;
        local_8 = local_8 + -1;
      }
      bVar3 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + (uint)bVar3;
    }
    string_input_adapter<wchar_t>::unget((string_input_adapter<wchar_t> *)(this + 8),uVar4);
LAB_10162823:
    if ((uVar7 != 0 || iVar6 != 0) &&
       (((param_1 != 0 || ((uVar7 == uVar1 && (iVar6 == iVar2)))) || ((*(uint *)this & 4) != 0)))) {
      if ((this[0x30] ==
           (input_processor<wchar_t,__crt_stdio_input::string_input_adapter<wchar_t>_>)0x0) &&
         (param_1 != 0)) {
        *local_1c = 0;
      }
      return true;
    }
  }
  return false;
}

