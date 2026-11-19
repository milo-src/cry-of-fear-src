// rea decompile_all
// name: parse_integer<>
// address: 0x10160a26
// body: available
// range: 0x10160a26-0x1016101b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x10160f19) */
/* Library Function - Multiple Matches With Same Base Name
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::console_input_adapter<wchar_t> >,int,bool)
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::stream_input_adapter<wchar_t> >,int,bool)
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> > >(struct __crt_locale_pointers * const,class
   __crt_strtox::input_adapter_character_source<class
   __crt_stdio_input::string_input_adapter<wchar_t> >,int,bool)
   
   Library: Visual Studio 2019 Release */

undefined8 parse_integer<>(__crt_locale_pointers *param_1)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  wchar_t wVar5;
  int *piVar6;
  uint uVar7;
  uint extraout_ECX;
  int iVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  uint in_stack_00000028;
  byte in_stack_0000002c;
  int local_44 [3];
  char local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  cVar3 = validate();
  uVar10 = in_stack_00000028;
  if (cVar3 != '\0') {
    if ((in_stack_00000028 == 0) ||
       ((1 < (int)in_stack_00000028 && ((int)in_stack_00000028 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_44,param_1);
      local_c = 0;
      local_14 = 0;
      local_34 = in_stack_00000018;
      local_30 = in_stack_0000001c;
      do {
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        iVar8 = _iswctype(wVar5,8);
      } while (iVar8 != 0);
      local_8 = (uint)in_stack_0000002c;
      if (wVar5 == L'-') {
        local_8 = local_8 | 2;
LAB_10160abb:
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
      }
      else if (wVar5 == L'+') goto LAB_10160abb;
      uVar9 = (uint)(ushort)wVar5;
      local_1c = 0x3a;
      local_18 = -1;
      iVar8 = 0x30;
      if ((uVar10 != 0) && (uVar10 != 0x10)) goto LAB_10160d14;
      if ((ushort)wVar5 < 0x30) goto LAB_10160c9c;
      if ((ushort)wVar5 < 0x3a) {
LAB_10160afd:
        iVar8 = uVar9 - iVar8;
LAB_10160c98:
        if (iVar8 == -1) goto LAB_10160c9c;
      }
      else {
        if (0xff0f < (ushort)wVar5) {
          if ((ushort)wVar5 < 0xff1a) {
            iVar8 = uVar9 - 0xff10;
          }
          else {
            iVar8 = -1;
          }
          goto LAB_10160c98;
        }
        if (0x65f < (ushort)wVar5) {
          if ((ushort)wVar5 < 0x66a) {
            iVar8 = uVar9 - 0x660;
            goto LAB_10160c98;
          }
          iVar8 = 0x6f0;
          if ((0x6ef < (ushort)wVar5) &&
             (((ushort)wVar5 < 0x6fa ||
              ((iVar8 = 0x966, 0x965 < (ushort)wVar5 &&
               (((ushort)wVar5 < 0x970 ||
                ((iVar8 = 0x9e6, 0x9e5 < (ushort)wVar5 &&
                 (((ushort)wVar5 < 0x9f0 ||
                  ((iVar8 = 0xa66, 0xa65 < (ushort)wVar5 &&
                   (((ushort)wVar5 < 0xa70 ||
                    ((iVar8 = 0xae6, 0xae5 < (ushort)wVar5 &&
                     (((ushort)wVar5 < 0xaf0 ||
                      ((iVar8 = 0xb66, 0xb65 < (ushort)wVar5 &&
                       (((ushort)wVar5 < 0xb70 ||
                        ((iVar8 = 0xc66, 0xc65 < (ushort)wVar5 &&
                         (((ushort)wVar5 < 0xc70 ||
                          ((iVar8 = 0xce6, 0xce5 < (ushort)wVar5 &&
                           (((ushort)wVar5 < 0xcf0 ||
                            ((iVar8 = 0xd66, 0xd65 < (ushort)wVar5 &&
                             (((ushort)wVar5 < 0xd70 ||
                              ((iVar8 = 0xe50, 0xe4f < (ushort)wVar5 &&
                               (((ushort)wVar5 < 0xe5a ||
                                ((iVar8 = 0xed0, 0xecf < (ushort)wVar5 &&
                                 (((ushort)wVar5 < 0xeda ||
                                  ((iVar8 = 0xf20, 0xf1f < (ushort)wVar5 &&
                                   (((ushort)wVar5 < 0xf2a ||
                                    ((iVar8 = 0x1040, 0x103f < (ushort)wVar5 &&
                                     (((ushort)wVar5 < 0x104a ||
                                      ((iVar8 = 0x17e0, 0x17df < (ushort)wVar5 &&
                                       (((ushort)wVar5 < 0x17ea ||
                                        ((iVar8 = 0x1810, 0x180f < (ushort)wVar5 &&
                                         ((ushort)wVar5 < 0x181a))))))))))))))))))))))))))))))))))))
                       )))))))))))))))))))))) goto LAB_10160afd;
        }
LAB_10160c9c:
        if (((uVar9 < 0x41) || (0x5a < uVar9)) && (0x19 < uVar9 - 0x61)) {
          iVar8 = -1;
        }
        else {
          uVar7 = uVar9;
          if (uVar9 - 0x61 < 0x1a) {
            uVar7 = uVar9 - 0x20;
          }
          iVar8 = uVar7 - 0x37;
        }
      }
      if (iVar8 == 0) {
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        if ((wVar5 == L'x') || (wVar5 == L'X')) {
          if (uVar10 == 0) {
            uVar10 = 0x10;
            in_stack_00000028 = 0x10;
          }
          wVar5 = __crt_strtox::
                  input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                  ::get((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                         *)&stack0x00000008);
          uVar9 = (uint)(ushort)wVar5;
        }
        else {
          if (uVar10 == 0) {
            uVar10 = 8;
            in_stack_00000028 = 8;
          }
          __crt_strtox::
          input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::unget
                    ((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                      *)&stack0x00000008,wVar5);
        }
      }
      else if (uVar10 == 0) {
        uVar10 = 10;
        in_stack_00000028 = 10;
      }
LAB_10160d14:
      local_28 = (int)uVar10 >> 0x1f;
      local_2c = uVar10;
      uVar11 = __aulldvrm(0xffffffff,0xffffffff,uVar10,local_28);
      local_24 = extraout_ECX;
      local_20 = uVar10;
      do {
        uVar1 = CONCAT44(local_14,local_c);
        local_1c = (undefined4)(uVar11 >> 0x20);
        local_10 = (undefined4)uVar11;
        uVar10 = 0xffffffff;
        iVar8 = 0x30;
        wVar5 = (wchar_t)uVar9;
        if ((ushort)wVar5 < 0x30) {
LAB_10160ecd:
          if (((uVar9 < 0x41) || (0x5a < uVar9)) && (0x19 < uVar9 - 0x61)) {
            uVar10 = 0xffffffff;
          }
          else {
            if (uVar9 - 0x61 < 0x1a) {
              uVar9 = uVar9 - 0x20;
            }
            uVar10 = uVar9 - 0x37;
          }
        }
        else {
          if ((ushort)wVar5 < 0x3a) {
LAB_10160ec3:
            uVar10 = uVar9 - iVar8;
          }
          else {
            iVar8 = 0xff10;
            if ((ushort)wVar5 < 0xff10) {
              iVar8 = 0x660;
              if (((ushort)wVar5 < 0x660) ||
                 ((0x669 < (ushort)wVar5 &&
                  ((iVar8 = 0x6f0, (ushort)wVar5 < 0x6f0 ||
                   ((0x6f9 < (ushort)wVar5 &&
                    ((iVar8 = 0x966, (ushort)wVar5 < 0x966 ||
                     ((0x96f < (ushort)wVar5 &&
                      ((iVar8 = 0x9e6, (ushort)wVar5 < 0x9e6 ||
                       ((0x9ef < (ushort)wVar5 &&
                        ((iVar8 = 0xa66, (ushort)wVar5 < 0xa66 ||
                         ((0xa6f < (ushort)wVar5 &&
                          ((iVar8 = 0xae6, (ushort)wVar5 < 0xae6 ||
                           ((0xaef < (ushort)wVar5 &&
                            ((iVar8 = 0xb66, (ushort)wVar5 < 0xb66 ||
                             ((0xb6f < (ushort)wVar5 &&
                              ((iVar8 = 0xc66, (ushort)wVar5 < 0xc66 ||
                               ((0xc6f < (ushort)wVar5 &&
                                ((iVar8 = 0xce6, (ushort)wVar5 < 0xce6 ||
                                 ((0xcef < (ushort)wVar5 &&
                                  ((iVar8 = 0xd66, (ushort)wVar5 < 0xd66 ||
                                   ((0xd6f < (ushort)wVar5 &&
                                    ((iVar8 = 0xe50, (ushort)wVar5 < 0xe50 ||
                                     ((0xe59 < (ushort)wVar5 &&
                                      ((iVar8 = 0xed0, (ushort)wVar5 < 0xed0 ||
                                       ((0xed9 < (ushort)wVar5 &&
                                        ((iVar8 = 0xf20, (ushort)wVar5 < 0xf20 ||
                                         ((0xf29 < (ushort)wVar5 &&
                                          ((iVar8 = 0x1040, (ushort)wVar5 < 0x1040 ||
                                           ((0x1049 < (ushort)wVar5 &&
                                            ((iVar8 = 0x17e0, (ushort)wVar5 < 0x17e0 ||
                                             ((0x17e9 < (ushort)wVar5 &&
                                              ((iVar8 = 0x1810, (ushort)wVar5 < 0x1810 ||
                                               (0x1819 < (ushort)wVar5))))))))))))))))))))))))))))))
                                )))))))))))))))))))))))))))))))) goto LAB_10160ecd;
              goto LAB_10160ec3;
            }
            if ((ushort)wVar5 < 0xff1a) goto LAB_10160ec3;
          }
          if (uVar10 == 0xffffffff) goto LAB_10160ecd;
        }
        if ((uVar10 == 0xffffffff) || (in_stack_00000028 <= uVar10)) goto LAB_10160f72;
        if ((uVar1 < uVar11) || ((uVar11 == uVar1 && ((local_20 != 0 || (uVar10 <= local_24)))))) {
          local_8 = local_8 | 8;
          lVar12 = __allmul(local_2c,local_28,local_c,local_14);
          uVar11 = CONCAT44(local_1c,local_10);
          uVar1 = lVar12 + (ulonglong)uVar10;
        }
        else {
          local_8 = local_8 | 0xc;
        }
        local_14 = (int)(uVar1 >> 0x20);
        local_c = (int)uVar1;
        local_1c = (undefined4)(uVar11 >> 0x20);
        local_10 = (undefined4)uVar11;
        wVar5 = __crt_strtox::
                input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
                get((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>
                     *)&stack0x00000008);
        uVar11 = CONCAT44(local_1c,local_10);
        uVar9 = (uint)(ushort)wVar5;
      } while( true );
    }
    piVar6 = __errno();
    *piVar6 = 0x16;
    FUN_1016fa52();
  }
  local_18 = 0;
  iVar8 = 0;
LAB_10161003:
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return CONCAT44(iVar8,local_18);
LAB_10160f72:
  __crt_strtox::input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_>::
  unget((input_adapter_character_source<__crt_stdio_input::stream_input_adapter<wchar_t>_> *)
        &stack0x00000008,wVar5);
  iVar2 = local_c;
  iVar8 = local_14;
  if ((local_8 & 8) == 0) {
    restore_state(local_34,(short)local_30);
    local_18 = 0;
    iVar8 = 0;
  }
  else {
    bVar4 = __crt_strtox::is_overflow_condition<unsigned___int64>
                      (local_8,CONCAT44(unaff_ESI,local_14));
    if (bVar4) {
      piVar6 = __errno();
      *piVar6 = 0x22;
      if ((local_8 & 1) == 0) {
        iVar8 = -1;
        local_18 = -1;
      }
      else if ((local_8 & 2) == 0) {
        iVar8 = 0x7fffffff;
      }
      else {
        local_18 = 0;
        iVar8 = -0x80000000;
      }
    }
    else {
      local_18 = iVar2;
      if ((local_8 & 2) != 0) {
        local_18 = -iVar2;
        iVar8 = -(iVar8 + (uint)(iVar2 != 0));
      }
    }
  }
  if (local_38 != '\0') {
    *(uint *)(local_44[0] + 0x350) = *(uint *)(local_44[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_10161003;
}

