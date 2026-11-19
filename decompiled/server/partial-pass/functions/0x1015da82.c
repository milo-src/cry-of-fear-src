// rea decompile_all
// name: __crt_strtox::parse_floating_point_from_source<__crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>_>
// address: 0x1015da82
// body: available
// range: 0x1015da82-0x1015dede inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char>
   > >(struct __crt_locale_pointers * const,class __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<char> > &,struct __crt_strtox::floating_point_string &)
   
   Library: Visual Studio 2019 Release */

floating_point_parse_result __cdecl
__crt_strtox::
parse_floating_point_from_source<__crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>_>
          (__crt_locale_pointers *param_1,
          input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_> *param_2,
          floating_point_string *param_3)

{
  floating_point_string *pfVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  char cVar4;
  int iVar5;
  uint uVar6;
  floating_point_parse_result fVar7;
  byte bVar8;
  uint uVar9;
  floating_point_string *pfVar10;
  int local_10;
  char local_b [4];
  char local_7;
  char local_6;
  byte local_5;
  
  cVar4 = validate();
  if (cVar4 == '\0') {
    return 7;
  }
  _Var3 = *(__uint64 *)(param_2 + 0x10);
  _Var2 = *(__uint64 *)(param_2 + 0x10);
  cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                    (param_2);
  while( true ) {
    local_b[0] = cVar4;
    iVar5 = __ischartype_l(cVar4,8,param_1);
    if (iVar5 == 0) break;
    cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                      (param_2);
  }
  param_3[0x308] = (floating_point_string)(local_b[0] == '-');
  if ((local_b[0] == '-') || (cVar4 = local_b[0], local_b[0] == '+')) {
    cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
  }
  if ((cVar4 == 'I') || (cVar4 == 'i')) {
    fVar7 = parse_floating_point_possible_infinity<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>,unsigned___int64>
                      (local_b,param_2,_Var3);
    return fVar7;
  }
  if ((cVar4 == 'N') || (cVar4 == 'n')) {
    fVar7 = parse_floating_point_possible_nan<char,__crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>,unsigned___int64>
                      (local_b,param_2,_Var2);
    return fVar7;
  }
  local_5 = 0;
  if (cVar4 == '0') {
    cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                      (param_2);
    if ((cVar4 == 'x') || (cVar4 == 'X')) {
      local_5 = 1;
      cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    }
    else {
      input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::unget
                (param_2,cVar4);
      cVar4 = local_b[0];
    }
  }
  local_10 = 0;
  local_6 = '\0';
  pfVar10 = param_3 + 8;
  if (cVar4 == '0') {
    local_6 = '\x01';
    do {
      cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    } while (cVar4 == '0');
  }
  uVar9 = ((local_5 == 0) - 1 & 6) + 9;
  while( true ) {
    if ((byte)(cVar4 - 0x30U) < 10) {
      uVar6 = (int)cVar4 - 0x30;
    }
    else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar4 - 0x57;
    }
    else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar4 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if (uVar9 < uVar6) break;
    local_6 = '\x01';
    if (pfVar10 != param_3 + 0x308) {
      *pfVar10 = SUB41(uVar6,0);
      pfVar10 = pfVar10 + 1;
    }
    local_10 = local_10 + 1;
    cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
  }
  if (cVar4 == *(char *)**(undefined4 **)(*(int *)param_1 + 0x88)) {
    cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                      (param_2);
    local_b[0] = cVar4;
    if ((pfVar10 == param_3 + 8) && (cVar4 == '0')) {
      local_6 = '\x01';
      do {
        local_10 = local_10 + -1;
        cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                          (param_2);
        local_b[0] = cVar4;
      } while (cVar4 == '0');
    }
    while( true ) {
      if ((byte)(cVar4 - 0x30U) < 10) {
        uVar6 = (int)cVar4 - 0x30;
      }
      else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar4 - 0x57;
      }
      else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        uVar6 = (int)cVar4 - 0x37;
      }
      else {
        uVar6 = 0xffffffff;
      }
      if (uVar9 < uVar6) break;
      local_6 = '\x01';
      if (pfVar10 != param_3 + 0x308) {
        *pfVar10 = SUB41(uVar6,0);
        pfVar10 = pfVar10 + 1;
      }
      cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                        (param_2);
      local_b[0] = cVar4;
    }
  }
  iVar5 = 0;
  if (local_6 == '\0') {
    cVar4 = ::FID_conflict_operator__();
    if (cVar4 == '\0') {
      return 7;
    }
    if (local_5 != 0) {
      return 2;
    }
    return 7;
  }
  input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::unget
            (param_2,local_b[0]);
  cVar4 = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                    (param_2);
  if (cVar4 == 'E') {
LAB_1015dd1e:
    bVar8 = local_5 ^ 1;
  }
  else {
    if (cVar4 != 'P') {
      if (cVar4 == 'e') goto LAB_1015dd1e;
      bVar8 = 0;
      if (cVar4 != 'p') goto LAB_1015dd24;
    }
    bVar8 = local_5;
  }
LAB_1015dd24:
  local_b[0] = cVar4;
  if (bVar8 != 0) {
    local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::get
                           (param_2);
    local_7 = local_b[0] == '-';
    if ((local_b[0] == '+') || (local_b[0] == '-')) {
      local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::
                   get(param_2);
    }
    local_6 = '\0';
    if (local_b[0] == '0') {
      local_6 = '\x01';
      local_b[0] = '0';
      do {
        local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>
                     ::get(param_2);
      } while (local_b[0] == '0');
    }
    while( true ) {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar9 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar9 = (int)local_b[0] - 0x57;
      }
      else if ((byte)(local_b[0] + 0xbfU) < 0x1a) {
        uVar9 = (int)local_b[0] - 0x37;
      }
      else {
        uVar9 = 0xffffffff;
      }
      if (9 < uVar9) goto LAB_1015ddce;
      local_6 = '\x01';
      iVar5 = iVar5 * 10 + uVar9;
      if (0x1450 < iVar5) break;
      local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::
                   get(param_2);
    }
    iVar5 = 0x1451;
LAB_1015ddce:
    while( true ) {
      if ((byte)(local_b[0] - 0x30U) < 10) {
        uVar9 = (int)local_b[0] - 0x30;
      }
      else if ((byte)(local_b[0] + 0x9fU) < 0x1a) {
        uVar9 = (int)local_b[0] - 0x57;
      }
      else if ((byte)(local_b[0] + 0xbfU) < 0x1a) {
        uVar9 = (int)local_b[0] - 0x37;
      }
      else {
        uVar9 = 0xffffffff;
      }
      if (9 < uVar9) break;
      local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::
                   get(param_2);
    }
    if (local_7 != '\0') {
      iVar5 = -iVar5;
    }
    if (local_6 == '\0') {
      cVar4 = ::FID_conflict_operator__();
      if (cVar4 == '\0') {
        return 7;
      }
      local_b[0] = input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::
                   get(param_2);
    }
  }
  input_adapter_character_source<__crt_stdio_input::stream_input_adapter<char>_>::unget
            (param_2,local_b[0]);
  pfVar1 = param_3 + 8;
  if (pfVar10 != pfVar1) {
    do {
      if (pfVar10[-1] != (floating_point_string)0x0) break;
      pfVar10 = pfVar10 + -1;
    } while (pfVar10 != pfVar1);
    if (pfVar10 != pfVar1) {
      if (0x1450 < iVar5) {
        return 9;
      }
      if (-0x1451 < iVar5) {
        iVar5 = iVar5 + (((local_5 == 0) - 1 & 3) + 1) * local_10;
        if (0x1450 < iVar5) {
          return 9;
        }
        if (-0x1451 < iVar5) {
          *(int *)param_3 = iVar5;
          *(int *)(param_3 + 4) = (int)pfVar10 - (int)pfVar1;
          return (uint)local_5;
        }
      }
      return 8;
    }
  }
  return 2;
}

