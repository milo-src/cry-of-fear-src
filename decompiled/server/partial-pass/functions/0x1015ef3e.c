// rea decompile_all
// name: parse_floating_point_from_source<>
// address: 0x1015ef3e
// body: available
// range: 0x1015ef3e-0x1015fb3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
    enum __crt_strtox::floating_point_parse_result __cdecl
   __crt_strtox::parse_floating_point_from_source<class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > &,struct __crt_strtox::floating_point_string
   &)
   
   Library: Visual Studio 2019 Release */

uint parse_floating_point_from_source<>
               (int *param_1,
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
               *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  wchar_t wVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int *piVar10;
  bool bVar11;
  int local_18;
  int *local_14;
  int local_10;
  wchar_t local_c [3];
  byte local_5;
  
  cVar4 = validate();
  if (cVar4 == '\0') {
    return 7;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  local_c[0] = __crt_strtox::
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
               get(param_2);
  while (iVar6 = _iswctype(local_c[0],8), iVar6 != 0) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  piVar10 = param_3 + 0xc2;
  *(bool *)piVar10 = local_c[0] == L'-';
  if ((local_c[0] == L'-') || (local_c[0] == L'+')) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  if ((local_c[0] == L'I') || (local_c[0] == L'i')) {
    uVar7 = parse_floating_point_possible_infinity<>(local_c,param_2,uVar1,uVar2);
    return uVar7;
  }
  if ((local_c[0] == L'N') || (local_c[0] == L'n')) {
    uVar7 = parse_floating_point_possible_nan<>(local_c,param_2,uVar1,uVar2);
    return uVar7;
  }
  local_10 = 0;
  local_5 = 0;
  if (local_c[0] == L'0') {
    wVar5 = __crt_strtox::
            input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::get
                      (param_2);
    if ((wVar5 == L'x') || (wVar5 == L'X')) {
      local_5 = 1;
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    }
    else {
      __crt_strtox::
      input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::unget
                (param_2,wVar5);
    }
  }
  bVar11 = false;
  local_14 = param_3 + 2;
  local_18 = 0;
  if (local_c[0] == L'0') {
    bVar11 = true;
    do {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while (local_c[0] == L'0');
  }
  bVar9 = local_5;
  uVar7 = ((local_5 == 0) - 1 & 6) + 9;
  do {
    iVar6 = 0x30;
    if ((ushort)local_c[0] < 0x30) {
LAB_1015f249:
      uVar8 = (uint)(ushort)local_c[0];
      if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < uVar8 - 0x61)) {
        uVar8 = 0xffffffff;
      }
      else {
        if (uVar8 - 0x61 < 0x1a) {
          uVar8 = uVar8 - 0x20;
        }
        uVar8 = uVar8 - 0x37;
      }
    }
    else {
      if ((ushort)local_c[0] < 0x3a) {
LAB_1015f0b5:
        uVar8 = (uint)(ushort)local_c[0] - iVar6;
      }
      else {
        if ((ushort)local_c[0] < 0xff10) {
          iVar6 = 0x660;
          if (((ushort)local_c[0] < 0x660) ||
             ((0x669 < (ushort)local_c[0] &&
              ((iVar6 = 0x6f0, (ushort)local_c[0] < 0x6f0 ||
               ((0x6f9 < (ushort)local_c[0] &&
                ((iVar6 = 0x966, (ushort)local_c[0] < 0x966 ||
                 ((0x96f < (ushort)local_c[0] &&
                  ((iVar6 = 0x9e6, (ushort)local_c[0] < 0x9e6 ||
                   ((0x9ef < (ushort)local_c[0] &&
                    ((iVar6 = 0xa66, (ushort)local_c[0] < 0xa66 ||
                     ((0xa6f < (ushort)local_c[0] &&
                      ((iVar6 = 0xae6, (ushort)local_c[0] < 0xae6 ||
                       ((0xaef < (ushort)local_c[0] &&
                        ((iVar6 = 0xb66, (ushort)local_c[0] < 0xb66 ||
                         ((0xb6f < (ushort)local_c[0] &&
                          ((iVar6 = 0xc66, (ushort)local_c[0] < 0xc66 ||
                           ((0xc6f < (ushort)local_c[0] &&
                            ((iVar6 = 0xce6, (ushort)local_c[0] < 0xce6 ||
                             ((0xcef < (ushort)local_c[0] &&
                              ((iVar6 = 0xd66, (ushort)local_c[0] < 0xd66 ||
                               ((0xd6f < (ushort)local_c[0] &&
                                ((iVar6 = 0xe50, (ushort)local_c[0] < 0xe50 ||
                                 ((0xe59 < (ushort)local_c[0] &&
                                  ((iVar6 = 0xed0, (ushort)local_c[0] < 0xed0 ||
                                   ((0xed9 < (ushort)local_c[0] &&
                                    ((iVar6 = 0xf20, (ushort)local_c[0] < 0xf20 ||
                                     ((0xf29 < (ushort)local_c[0] &&
                                      ((iVar6 = 0x1040, (ushort)local_c[0] < 0x1040 ||
                                       ((0x1049 < (ushort)local_c[0] &&
                                        ((iVar6 = 0x17e0, (ushort)local_c[0] < 0x17e0 ||
                                         ((0x17e9 < (ushort)local_c[0] &&
                                          ((iVar6 = 0x1810, (ushort)local_c[0] < 0x1810 ||
                                           (0x1819 < (ushort)local_c[0])))))))))))))))))))))))))))))
                             ))))))))))))))))))))))))))))))))) goto LAB_1015f249;
          goto LAB_1015f0b5;
        }
        if ((ushort)local_c[0] < 0xff1a) {
          iVar6 = 0xff10;
          goto LAB_1015f0b5;
        }
        uVar8 = 0xffffffff;
      }
      if (uVar8 == 0xffffffff) goto LAB_1015f249;
    }
    if (uVar7 < uVar8) goto LAB_1015f2a0;
    bVar11 = true;
    if (local_14 != piVar10) {
      *(char *)local_14 = (char)uVar8;
      local_14 = (int *)((int)local_14 + 1);
    }
    local_18 = local_18 + 1;
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  } while( true );
LAB_1015f886:
  local_10 = 0x1451;
LAB_1015f88e:
  do {
    iVar6 = 0x30;
    if ((ushort)local_c[0] < 0x30) {
LAB_1015fa3b:
      uVar7 = (uint)(ushort)local_c[0];
      if (((uVar7 < 0x41) || (0x5a < uVar7)) && (0x19 < uVar7 - 0x61)) {
        uVar7 = 0xffffffff;
      }
      else {
        if (uVar7 - 0x61 < 0x1a) {
          uVar7 = uVar7 - 0x20;
        }
        uVar7 = uVar7 - 0x37;
      }
    }
    else {
      if ((ushort)local_c[0] < 0x3a) {
LAB_1015f8a2:
        uVar7 = (uint)(ushort)local_c[0] - iVar6;
      }
      else {
        iVar6 = 0xff10;
        if ((ushort)local_c[0] < 0xff10) {
          iVar6 = 0x660;
          if (((ushort)local_c[0] < 0x660) ||
             ((0x669 < (ushort)local_c[0] &&
              ((iVar6 = 0x6f0, (ushort)local_c[0] < 0x6f0 ||
               ((0x6f9 < (ushort)local_c[0] &&
                ((iVar6 = 0x966, (ushort)local_c[0] < 0x966 ||
                 ((0x96f < (ushort)local_c[0] &&
                  ((iVar6 = 0x9e6, (ushort)local_c[0] < 0x9e6 ||
                   ((0x9ef < (ushort)local_c[0] &&
                    ((iVar6 = 0xa66, (ushort)local_c[0] < 0xa66 ||
                     ((0xa6f < (ushort)local_c[0] &&
                      ((iVar6 = 0xae6, (ushort)local_c[0] < 0xae6 ||
                       ((0xaef < (ushort)local_c[0] &&
                        ((iVar6 = 0xb66, (ushort)local_c[0] < 0xb66 ||
                         ((0xb6f < (ushort)local_c[0] &&
                          ((iVar6 = 0xc66, (ushort)local_c[0] < 0xc66 ||
                           ((0xc6f < (ushort)local_c[0] &&
                            ((iVar6 = 0xce6, (ushort)local_c[0] < 0xce6 ||
                             ((0xcef < (ushort)local_c[0] &&
                              ((iVar6 = 0xd66, (ushort)local_c[0] < 0xd66 ||
                               ((0xd6f < (ushort)local_c[0] &&
                                ((iVar6 = 0xe50, (ushort)local_c[0] < 0xe50 ||
                                 ((0xe59 < (ushort)local_c[0] &&
                                  ((iVar6 = 0xed0, (ushort)local_c[0] < 0xed0 ||
                                   ((0xed9 < (ushort)local_c[0] &&
                                    ((iVar6 = 0xf20, (ushort)local_c[0] < 0xf20 ||
                                     ((0xf29 < (ushort)local_c[0] &&
                                      ((iVar6 = 0x1040, (ushort)local_c[0] < 0x1040 ||
                                       ((0x1049 < (ushort)local_c[0] &&
                                        ((iVar6 = 0x17e0, (ushort)local_c[0] < 0x17e0 ||
                                         ((0x17e9 < (ushort)local_c[0] &&
                                          ((iVar6 = 0x1810, (ushort)local_c[0] < 0x1810 ||
                                           (0x1819 < (ushort)local_c[0])))))))))))))))))))))))))))))
                             ))))))))))))))))))))))))))))))))) goto LAB_1015fa3b;
          goto LAB_1015f8a2;
        }
        if ((ushort)local_c[0] < 0xff1a) goto LAB_1015f8a2;
        uVar7 = 0xffffffff;
      }
      if (uVar7 == 0xffffffff) goto LAB_1015fa3b;
    }
    if (9 < uVar7) break;
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  } while( true );
  if (bVar11) {
    local_10 = -local_10;
  }
  iVar6 = local_10;
  if (!bVar3) {
    cVar4 = FID_conflict_operator__();
    if (cVar4 == '\0') {
      return 7;
    }
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
  }
  goto LAB_1015faa3;
LAB_1015f2a0:
  if ((uint)(ushort)local_c[0] == (int)*(char *)**(undefined4 **)(*param_1 + 0x88)) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
    if (local_14 != param_3 + 2) goto LAB_1015f30a;
    if (local_c[0] != L'0') goto LAB_1015f30a;
    local_c[0] = L'0';
    do {
      local_18 = local_18 + -1;
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while (local_c[0] == L'0');
    do {
      bVar11 = true;
LAB_1015f30a:
      if ((ushort)local_c[0] < 0x30) goto LAB_1015f576;
      if ((ushort)local_c[0] < 0x3a) {
        uVar8 = (ushort)local_c[0] - 0x30;
LAB_1015f571:
        if (uVar8 == 0xffffffff) goto LAB_1015f576;
      }
      else {
        if (0xff0f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0xff1a) {
            uVar8 = (ushort)local_c[0] - 0xff10;
          }
          else {
            uVar8 = 0xffffffff;
          }
          goto LAB_1015f571;
        }
        if (0x65f < (ushort)local_c[0]) {
          if ((ushort)local_c[0] < 0x66a) {
            uVar8 = (ushort)local_c[0] - 0x660;
          }
          else {
            if ((ushort)local_c[0] < 0x6f0) goto LAB_1015f576;
            if ((ushort)local_c[0] < 0x6fa) {
              uVar8 = (ushort)local_c[0] - 0x6f0;
            }
            else {
              if ((ushort)local_c[0] < 0x966) goto LAB_1015f576;
              if ((ushort)local_c[0] < 0x970) {
                uVar8 = (ushort)local_c[0] - 0x966;
              }
              else {
                if ((ushort)local_c[0] < 0x9e6) goto LAB_1015f576;
                if ((ushort)local_c[0] < 0x9f0) {
                  uVar8 = (ushort)local_c[0] - 0x9e6;
                }
                else {
                  if ((ushort)local_c[0] < 0xa66) goto LAB_1015f576;
                  if ((ushort)local_c[0] < 0xa70) {
                    uVar8 = (ushort)local_c[0] - 0xa66;
                  }
                  else {
                    if ((ushort)local_c[0] < 0xae6) goto LAB_1015f576;
                    if ((ushort)local_c[0] < 0xaf0) {
                      uVar8 = (ushort)local_c[0] - 0xae6;
                    }
                    else {
                      if ((ushort)local_c[0] < 0xb66) goto LAB_1015f576;
                      if ((ushort)local_c[0] < 0xb70) {
                        uVar8 = (ushort)local_c[0] - 0xb66;
                      }
                      else {
                        if ((ushort)local_c[0] < 0xc66) goto LAB_1015f576;
                        if ((ushort)local_c[0] < 0xc70) {
                          uVar8 = (ushort)local_c[0] - 0xc66;
                        }
                        else {
                          if ((ushort)local_c[0] < 0xce6) goto LAB_1015f576;
                          if ((ushort)local_c[0] < 0xcf0) {
                            uVar8 = (ushort)local_c[0] - 0xce6;
                          }
                          else {
                            if ((ushort)local_c[0] < 0xd66) goto LAB_1015f576;
                            if ((ushort)local_c[0] < 0xd70) {
                              uVar8 = (ushort)local_c[0] - 0xd66;
                            }
                            else {
                              if ((ushort)local_c[0] < 0xe50) goto LAB_1015f576;
                              if ((ushort)local_c[0] < 0xe5a) {
                                uVar8 = (ushort)local_c[0] - 0xe50;
                              }
                              else {
                                if ((ushort)local_c[0] < 0xed0) goto LAB_1015f576;
                                if ((ushort)local_c[0] < 0xeda) {
                                  uVar8 = (ushort)local_c[0] - 0xed0;
                                }
                                else {
                                  if ((ushort)local_c[0] < 0xf20) goto LAB_1015f576;
                                  if ((ushort)local_c[0] < 0xf2a) {
                                    uVar8 = (ushort)local_c[0] - 0xf20;
                                  }
                                  else {
                                    if ((ushort)local_c[0] < 0x1040) goto LAB_1015f576;
                                    if ((ushort)local_c[0] < 0x104a) {
                                      uVar8 = (ushort)local_c[0] - 0x1040;
                                    }
                                    else {
                                      if ((ushort)local_c[0] < 0x17e0) goto LAB_1015f576;
                                      if ((ushort)local_c[0] < 0x17ea) {
                                        uVar8 = (ushort)local_c[0] - 0x17e0;
                                      }
                                      else {
                                        if (((ushort)local_c[0] < 0x1810) ||
                                           (0x1819 < (ushort)local_c[0])) goto LAB_1015f576;
                                        uVar8 = (ushort)local_c[0] - 0x1810;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          goto LAB_1015f571;
        }
LAB_1015f576:
        uVar8 = (uint)(ushort)local_c[0];
        if (((uVar8 < 0x41) || (0x5a < uVar8)) && (0x19 < uVar8 - 0x61)) {
          uVar8 = 0xffffffff;
        }
        else {
          if (uVar8 - 0x61 < 0x1a) {
            uVar8 = uVar8 - 0x20;
          }
          uVar8 = uVar8 - 0x37;
        }
      }
      if (uVar7 < uVar8) break;
      if (local_14 != piVar10) {
        *(char *)local_14 = (char)uVar8;
        local_14 = (int *)((int)local_14 + 1);
      }
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while( true );
  }
  if (!bVar11) {
    cVar4 = FID_conflict_operator__();
    if (cVar4 == '\0') {
      return 7;
    }
    if (bVar9 != 0) {
      return 2;
    }
    return 7;
  }
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget(param_2,local_c[0]);
  local_c[0] = __crt_strtox::
               input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
               get(param_2);
  if (local_c[0] == L'E') {
LAB_1015f62b:
    bVar9 = local_5 ^ 1;
  }
  else if (local_c[0] == L'P') {
LAB_1015f626:
    bVar9 = local_5;
  }
  else {
    if (local_c[0] == L'e') goto LAB_1015f62b;
    bVar9 = 0;
    if (local_c[0] == L'p') goto LAB_1015f626;
  }
  iVar6 = 0;
  if (bVar9 != 0) {
    local_c[0] = __crt_strtox::
                 input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
                 get(param_2);
    bVar11 = local_c[0] == L'-';
    if ((local_c[0] == L'+') || (local_c[0] == L'-')) {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    }
    bVar3 = false;
    if (local_c[0] != L'0') goto LAB_1015f68e;
    local_c[0] = L'0';
    do {
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while (local_c[0] == L'0');
    do {
      bVar3 = true;
LAB_1015f68e:
      iVar6 = 0x30;
      if ((ushort)local_c[0] < 0x30) {
LAB_1015f835:
        uVar7 = (uint)(ushort)local_c[0];
        if (((uVar7 < 0x41) || (0x5a < uVar7)) && (0x19 < uVar7 - 0x61)) {
          uVar7 = 0xffffffff;
        }
        else {
          if (uVar7 - 0x61 < 0x1a) {
            uVar7 = uVar7 - 0x20;
          }
          uVar7 = uVar7 - 0x37;
        }
      }
      else {
        if ((ushort)local_c[0] < 0x3a) {
LAB_1015f69c:
          uVar7 = (uint)(ushort)local_c[0] - iVar6;
        }
        else {
          iVar6 = 0xff10;
          if ((ushort)local_c[0] < 0xff10) {
            iVar6 = 0x660;
            if (((ushort)local_c[0] < 0x660) ||
               ((0x669 < (ushort)local_c[0] &&
                ((iVar6 = 0x6f0, (ushort)local_c[0] < 0x6f0 ||
                 ((0x6f9 < (ushort)local_c[0] &&
                  ((iVar6 = 0x966, (ushort)local_c[0] < 0x966 ||
                   ((0x96f < (ushort)local_c[0] &&
                    ((iVar6 = 0x9e6, (ushort)local_c[0] < 0x9e6 ||
                     ((0x9ef < (ushort)local_c[0] &&
                      ((iVar6 = 0xa66, (ushort)local_c[0] < 0xa66 ||
                       ((0xa6f < (ushort)local_c[0] &&
                        ((iVar6 = 0xae6, (ushort)local_c[0] < 0xae6 ||
                         ((0xaef < (ushort)local_c[0] &&
                          ((iVar6 = 0xb66, (ushort)local_c[0] < 0xb66 ||
                           ((0xb6f < (ushort)local_c[0] &&
                            ((iVar6 = 0xc66, (ushort)local_c[0] < 0xc66 ||
                             ((0xc6f < (ushort)local_c[0] &&
                              ((iVar6 = 0xce6, (ushort)local_c[0] < 0xce6 ||
                               ((0xcef < (ushort)local_c[0] &&
                                ((iVar6 = 0xd66, (ushort)local_c[0] < 0xd66 ||
                                 ((0xd6f < (ushort)local_c[0] &&
                                  ((iVar6 = 0xe50, (ushort)local_c[0] < 0xe50 ||
                                   ((0xe59 < (ushort)local_c[0] &&
                                    ((iVar6 = 0xed0, (ushort)local_c[0] < 0xed0 ||
                                     ((0xed9 < (ushort)local_c[0] &&
                                      ((iVar6 = 0xf20, (ushort)local_c[0] < 0xf20 ||
                                       ((0xf29 < (ushort)local_c[0] &&
                                        ((iVar6 = 0x1040, (ushort)local_c[0] < 0x1040 ||
                                         ((0x1049 < (ushort)local_c[0] &&
                                          ((iVar6 = 0x17e0, (ushort)local_c[0] < 0x17e0 ||
                                           ((0x17e9 < (ushort)local_c[0] &&
                                            ((iVar6 = 0x1810, (ushort)local_c[0] < 0x1810 ||
                                             (0x1819 < (ushort)local_c[0])))))))))))))))))))))))))))
                                ))))))))))))))))))))))))))))))))))) goto LAB_1015f835;
            goto LAB_1015f69c;
          }
          if ((ushort)local_c[0] < 0xff1a) goto LAB_1015f69c;
          uVar7 = 0xffffffff;
        }
        if (uVar7 == 0xffffffff) goto LAB_1015f835;
      }
      if (9 < uVar7) goto LAB_1015f88e;
      bVar3 = true;
      local_10 = local_10 * 10 + uVar7;
      if (0x1450 < local_10) goto LAB_1015f886;
      local_c[0] = __crt_strtox::
                   input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>
                   ::get(param_2);
    } while( true );
  }
LAB_1015faa3:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::string_input_adapter<wchar_t>_>::
  unget(param_2,local_c[0]);
  piVar10 = param_3 + 2;
  if (local_14 != piVar10) {
    do {
      if (*(char *)((int)local_14 + -1) != '\0') break;
      local_14 = (int *)((int)local_14 + -1);
    } while (local_14 != piVar10);
    if (local_14 != piVar10) {
      if (0x1450 < iVar6) {
        return 9;
      }
      if (-0x1451 < iVar6) {
        iVar6 = iVar6 + (((local_5 == 0) - 1 & 3) + 1) * local_18;
        if (0x1450 < iVar6) {
          return 9;
        }
        if (-0x1451 < iVar6) {
          *param_3 = iVar6;
          param_3[1] = (int)local_14 - (int)piVar10;
          return (uint)local_5;
        }
      }
      return 8;
    }
  }
  return 2;
}

