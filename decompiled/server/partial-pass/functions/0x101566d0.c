// rea decompile_all
// name: __crt_stdio_output::output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>::state_case_type
// address: 0x101566d0
// body: available
// range: 0x101566d0-0x1015693b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: bool __thiscall __crt_stdio_output::output_processor<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t>,class
   __crt_stdio_output::positional_parameter_base<wchar_t,class
   __crt_stdio_output::string_output_adapter<wchar_t> > >::state_case_type(void)
   
   Library: Visual Studio 2019 Release */

bool __thiscall
__crt_stdio_output::
output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
::state_case_type(output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
                  *this)

{
  string_output_adapter<wchar_t> *this_00;
  short sVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_14;
  undefined4 local_10;
  undefined2 local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  uVar10 = *(ushort *)(this + 0x32);
  if (uVar10 < 0x65) {
    if (uVar10 == 100) {
LAB_1015678f:
      *(uint *)(this + 0x20) = *(uint *)(this + 0x20) | 0x10;
LAB_10156793:
      uVar12 = 0;
      uVar11 = 10;
LAB_10156796:
      cVar5 = type_case_integer(uVar11,uVar12);
    }
    else if (uVar10 < 0x59) {
      if (uVar10 == 0x58) {
        uVar12 = 1;
LAB_1015673b:
        uVar11 = 0x10;
        goto LAB_10156796;
      }
      if (uVar10 != 0x41) {
        if (uVar10 == 0x43) goto LAB_1015674f;
        if (uVar10 < 0x45) goto LAB_1015692e;
        if (0x47 < uVar10) {
          if (uVar10 != 0x53) goto LAB_1015692e;
          goto LAB_10156723;
        }
      }
LAB_1015679f:
      cVar5 = type_case_a();
    }
    else if (uVar10 == 0x5a) {
      cVar5 = type_case_Z();
    }
    else {
      if (uVar10 == 0x61) goto LAB_1015679f;
      if (uVar10 != 99) goto LAB_1015692e;
LAB_1015674f:
      cVar5 = type_case_c_tchar(0);
    }
  }
  else if (uVar10 < 0x71) {
    if (uVar10 == 0x70) {
      cVar5 = type_case_p();
    }
    else {
      if (uVar10 < 0x68) goto LAB_1015679f;
      if (uVar10 == 0x69) goto LAB_1015678f;
      if (uVar10 == 0x6e) {
        cVar5 = type_case_n();
      }
      else {
        if (uVar10 != 0x6f) goto LAB_1015692e;
        cVar5 = type_case_o();
      }
    }
  }
  else {
    if (uVar10 != 0x73) {
      if (uVar10 != 0x75) {
        if (uVar10 != 0x78) goto LAB_1015692e;
        uVar12 = 0;
        goto LAB_1015673b;
      }
      goto LAB_10156793;
    }
LAB_10156723:
    cVar5 = type_case_s();
  }
  if (((cVar5 == '\0') || (cVar5 = should_skip_type_state_output(), cVar5 != '\0')) ||
     (this[0x30] !=
      (output_processor<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>,__crt_stdio_output::positional_parameter_base<wchar_t,__crt_stdio_output::string_output_adapter<wchar_t>_>_>
       )0x0)) goto LAB_1015692e;
  iVar7 = 0;
  local_10 = 0;
  local_c = 0;
  uVar2 = *(uint *)(this + 0x20);
  local_14 = 0;
  if ((uVar2 >> 4 & 1) != 0) {
    if ((uVar2 >> 6 & 1) == 0) {
      if ((uVar2 & 1) == 0) {
        if ((uVar2 >> 1 & 1) != 0) {
          local_10 = 0x20;
          iVar7 = 1;
          local_14 = 1;
        }
        goto LAB_10156839;
      }
      uVar10 = 0x2b;
    }
    else {
      uVar10 = 0x2d;
    }
    local_10 = (uint)uVar10;
    local_14 = 1;
    iVar7 = 1;
  }
LAB_10156839:
  sVar1 = *(short *)(this + 0x32);
  if (((sVar1 == 0x78) || (sVar1 == 0x58)) && ((uVar2 >> 5 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((sVar1 == 0x61) || (sVar1 == 0x41)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((bVar3) || (bVar4)) {
    *(undefined2 *)((int)&local_10 + iVar7 * 2) = 0x30;
    if ((sVar1 == 0x58) || (uVar9 = 0x78, sVar1 == 0x41)) {
      uVar9 = 0x58;
    }
    *(undefined2 *)((int)&local_10 + iVar7 * 2 + 2) = uVar9;
    iVar7 = iVar7 + 2;
    local_14 = iVar7;
  }
  this_00 = (string_output_adapter<wchar_t> *)(this + 0x448);
  iVar8 = (*(int *)(this + 0x24) - *(int *)(this + 0x38)) - iVar7;
  if (((byte)this[0x20] & 0xc) == 0) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              (this_00,' ',iVar8,(int *)(this + 0x18));
    iVar7 = local_14;
  }
  string_output_adapter<wchar_t>::write_string
            (this_00,(wchar_t *)&local_10,iVar7,(int *)(this + 0x18),
             (__crt_deferred_errno_cache *)(this + 0xc));
  if (((*(uint *)(this + 0x20) >> 3 & 1) != 0) && ((*(uint *)(this + 0x20) >> 2 & 1) == 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              (this_00,'0',iVar8,(int *)(this + 0x18));
  }
  write_stored_string_tchar(this,L'\0');
  if ((-1 < *(int *)(this + 0x18)) && ((*(uint *)(this + 0x20) >> 2 & 1) != 0)) {
    write_multiple_characters<__crt_stdio_output::string_output_adapter<wchar_t>,char>
              (this_00,' ',iVar8,(int *)(this + 0x18));
  }
LAB_1015692e:
  uVar6 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return (bool)uVar6;
}

