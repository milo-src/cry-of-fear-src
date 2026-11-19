// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>
// address: 0x1016a242
// body: available
// range: 0x1016a242-0x1016a849 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned long __cdecl __crt_strtox::parse_integer<unsigned long,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2019 Release */

ulong __cdecl
__crt_strtox::parse_integer<unsigned_long,__crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,undefined4 *param_3,uint param_4,
          byte param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  wchar_t wVar8;
  uint uVar9;
  uint uVar10;
  int local_a4 [3];
  char local_98;
  wchar_t *local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  bVar1 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  uVar6 = param_4;
  if (bVar1) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_a4,param_1);
      local_8 = 0;
      local_94 = param_2;
      do {
        wVar8 = *param_2;
        param_2 = param_2 + 1;
        iVar3 = _iswctype(wVar8,8);
      } while (iVar3 != 0);
      uVar7 = (uint)param_5;
      if (wVar8 == L'-') {
        uVar7 = uVar7 | 2;
LAB_1016a2de:
        wVar8 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar8 == L'+') goto LAB_1016a2de;
      uVar9 = (uint)(ushort)wVar8;
      local_90 = 0x3a;
      local_c = 0x660;
      local_10 = 0x66a;
      local_14 = 0x6f0;
      local_18 = 0x6fa;
      local_1c = 0x966;
      local_20 = 0x970;
      local_24 = 0x9e6;
      local_28 = 0x9f0;
      local_2c = 0xa66;
      local_30 = 0xa70;
      local_34 = 0xae6;
      local_38 = 0xaf0;
      local_3c = 0xb66;
      local_40 = 0xb70;
      local_44 = 0xc66;
      local_48 = 0xc70;
      local_4c = 0xce6;
      local_50 = 0xcf0;
      local_54 = 0xd66;
      local_58 = 0xd70;
      local_5c = 0xe50;
      local_60 = 0xe5a;
      local_64 = 0xed0;
      local_68 = 0xeda;
      local_6c = 0xf20;
      local_70 = 0xf2a;
      local_74 = 0x1040;
      local_78 = 0x104a;
      local_7c = 0x17e0;
      local_80 = 0x17ea;
      local_84 = 0x1810;
      local_88 = 0x181a;
      local_8c = 0xff1a;
      if ((uVar6 != 0) && (uVar6 != 0x10)) goto LAB_1016a5e8;
      if ((ushort)wVar8 < 0x30) {
LAB_1016a573:
        if (((uVar9 < 0x41) || (0x5a < uVar9)) && (0x19 < uVar9 - 0x61)) {
          iVar3 = -1;
        }
        else {
          uVar4 = uVar9;
          if (uVar9 - 0x61 < 0x1a) {
            uVar4 = uVar9 - 0x20;
          }
          iVar3 = uVar4 - 0x37;
        }
      }
      else {
        iVar3 = 0x30;
        if ((ushort)wVar8 < 0x3a) {
LAB_1016a40d:
          iVar3 = uVar9 - iVar3;
        }
        else {
          if ((ushort)wVar8 < 0xff10) {
            if (((ushort)wVar8 < 0x660) ||
               ((iVar3 = local_c, 0x669 < (ushort)wVar8 &&
                ((iVar3 = 0x6f0, (ushort)wVar8 < 0x6f0 ||
                 ((0x6f9 < (ushort)wVar8 &&
                  ((iVar3 = 0x966, (ushort)wVar8 < 0x966 ||
                   ((0x96f < (ushort)wVar8 &&
                    ((iVar3 = 0x9e6, (ushort)wVar8 < 0x9e6 ||
                     ((0x9ef < (ushort)wVar8 &&
                      ((iVar3 = 0xa66, (ushort)wVar8 < 0xa66 ||
                       ((0xa6f < (ushort)wVar8 &&
                        ((iVar3 = 0xae6, (ushort)wVar8 < 0xae6 ||
                         ((0xaef < (ushort)wVar8 &&
                          ((iVar3 = 0xb66, (ushort)wVar8 < 0xb66 ||
                           ((0xb6f < (ushort)wVar8 &&
                            ((iVar3 = 0xc66, (ushort)wVar8 < 0xc66 ||
                             ((0xc6f < (ushort)wVar8 &&
                              ((iVar3 = 0xce6, (ushort)wVar8 < 0xce6 ||
                               ((0xcef < (ushort)wVar8 &&
                                ((iVar3 = 0xd66, (ushort)wVar8 < 0xd66 ||
                                 ((0xd6f < (ushort)wVar8 &&
                                  ((iVar3 = 0xe50, (ushort)wVar8 < 0xe50 ||
                                   ((0xe59 < (ushort)wVar8 &&
                                    ((iVar3 = 0xed0, (ushort)wVar8 < 0xed0 ||
                                     ((0xed9 < (ushort)wVar8 &&
                                      ((iVar3 = 0xf20, (ushort)wVar8 < 0xf20 ||
                                       ((0xf29 < (ushort)wVar8 &&
                                        ((iVar3 = 0x1040, (ushort)wVar8 < 0x1040 ||
                                         ((0x1049 < (ushort)wVar8 &&
                                          ((iVar3 = 0x17e0, (ushort)wVar8 < 0x17e0 ||
                                           ((0x17e9 < (ushort)wVar8 &&
                                            ((iVar3 = 0x1810, (ushort)wVar8 < 0x1810 ||
                                             (0x1819 < (ushort)wVar8))))))))))))))))))))))))))))))))
                             )))))))))))))))))))))))))))))) goto LAB_1016a573;
            goto LAB_1016a40d;
          }
          if ((ushort)wVar8 < 0xff1a) {
            iVar3 = uVar9 - 0xff10;
          }
          else {
            iVar3 = -1;
          }
        }
        if (iVar3 == -1) goto LAB_1016a573;
      }
      if (iVar3 == 0) {
        wVar8 = *param_2;
        if ((wVar8 == L'x') || (wVar8 == L'X')) {
          if (uVar6 == 0) {
            uVar6 = 0x10;
            param_4 = 0x10;
          }
          uVar9 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (uVar6 == 0) {
            uVar6 = 8;
            param_4 = 8;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar8);
        }
      }
      else if (uVar6 == 0) {
        uVar6 = 10;
        param_4 = 10;
      }
LAB_1016a5e8:
      uVar4 = (uint)(0xffffffff / (ulonglong)uVar6);
      do {
        wVar8 = (wchar_t)uVar9;
        if ((ushort)wVar8 < 0x30) {
LAB_1016a76a:
          if (((uVar9 < 0x41) || (0x5a < uVar9)) && (0x19 < uVar9 - 0x61)) {
            uVar5 = 0xffffffff;
          }
          else {
            if (uVar9 - 0x61 < 0x1a) {
              uVar9 = uVar9 - 0x20;
            }
            uVar5 = uVar9 - 0x37;
          }
        }
        else {
          iVar3 = 0x30;
          if ((ushort)wVar8 < 0x3a) {
LAB_1016a605:
            uVar5 = uVar9 - iVar3;
          }
          else {
            iVar3 = 0xff10;
            if ((ushort)wVar8 < 0xff10) {
              if (((ushort)wVar8 < (ushort)(wchar_t)local_c) ||
                 ((iVar3 = local_c, (ushort)(wchar_t)local_10 <= (ushort)wVar8 &&
                  (((ushort)wVar8 < (ushort)(wchar_t)local_14 ||
                   ((iVar3 = local_14, (ushort)(wchar_t)local_18 <= (ushort)wVar8 &&
                    (((ushort)wVar8 < (ushort)(wchar_t)local_1c ||
                     ((iVar3 = local_1c, (ushort)(wchar_t)local_20 <= (ushort)wVar8 &&
                      (((ushort)wVar8 < (ushort)(wchar_t)local_24 ||
                       ((iVar3 = local_24, (ushort)(wchar_t)local_28 <= (ushort)wVar8 &&
                        (((ushort)wVar8 < (ushort)(wchar_t)local_2c ||
                         ((iVar3 = local_2c, (ushort)(wchar_t)local_30 <= (ushort)wVar8 &&
                          (((ushort)wVar8 < (ushort)(wchar_t)local_34 ||
                           ((iVar3 = local_34, (ushort)(wchar_t)local_38 <= (ushort)wVar8 &&
                            (((ushort)wVar8 < (ushort)(wchar_t)local_3c ||
                             ((iVar3 = local_3c, (ushort)(wchar_t)local_40 <= (ushort)wVar8 &&
                              (((ushort)wVar8 < (ushort)(wchar_t)local_44 ||
                               ((iVar3 = local_44, (ushort)(wchar_t)local_48 <= (ushort)wVar8 &&
                                (((ushort)wVar8 < (ushort)(wchar_t)local_4c ||
                                 ((iVar3 = local_4c, (ushort)(wchar_t)local_50 <= (ushort)wVar8 &&
                                  (((ushort)wVar8 < (ushort)(wchar_t)local_54 ||
                                   ((iVar3 = local_54, (ushort)(wchar_t)local_58 <= (ushort)wVar8 &&
                                    (((ushort)wVar8 < (ushort)(wchar_t)local_5c ||
                                     ((iVar3 = local_5c, (ushort)(wchar_t)local_60 <= (ushort)wVar8
                                      && (((ushort)wVar8 < (ushort)(wchar_t)local_64 ||
                                          ((iVar3 = local_64,
                                           (ushort)(wchar_t)local_68 <= (ushort)wVar8 &&
                                           (((ushort)wVar8 < (ushort)(wchar_t)local_6c ||
                                            ((iVar3 = local_6c,
                                             (ushort)(wchar_t)local_70 <= (ushort)wVar8 &&
                                             (((ushort)wVar8 < (ushort)(wchar_t)local_74 ||
                                              ((iVar3 = local_74,
                                               (ushort)(wchar_t)local_78 <= (ushort)wVar8 &&
                                               (((ushort)wVar8 < (ushort)(wchar_t)local_7c ||
                                                ((iVar3 = local_7c,
                                                 (ushort)(wchar_t)local_80 <= (ushort)wVar8 &&
                                                 (((ushort)wVar8 < (ushort)(wchar_t)local_84 ||
                                                  (iVar3 = local_84,
                                                  (ushort)(wchar_t)local_88 <= (ushort)wVar8))))))))
                                              ))))))))))))))))))))))))))))))))))))))))))))))))))))))
              goto LAB_1016a76a;
              goto LAB_1016a605;
            }
            if ((ushort)wVar8 < (ushort)(wchar_t)local_8c) goto LAB_1016a605;
            uVar5 = 0xffffffff;
          }
          if (uVar5 == 0xffffffff) goto LAB_1016a76a;
        }
        if ((uVar5 == 0xffffffff) || (param_4 <= uVar5)) goto LAB_1016a7ce;
        if ((local_8 < uVar4) ||
           ((local_8 == uVar4 && (uVar5 <= (uint)(0xffffffff % (ulonglong)uVar6))))) {
          uVar10 = 8;
          local_8 = local_8 * param_4 + uVar5;
        }
        else {
          uVar10 = 0xc;
        }
        uVar9 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
        uVar7 = uVar7 | uVar10;
      } while( true );
    }
    piVar2 = __errno();
    *piVar2 = 0x16;
    FUN_1016fa52();
  }
  uVar6 = 0;
LAB_1016a27e:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = param_2;
  }
  return uVar6;
LAB_1016a7ce:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar8);
  uVar6 = local_8;
  if ((uVar7 & 8) == 0) {
    uVar6 = 0;
    param_2 = local_94;
  }
  else {
    bVar1 = is_overflow_condition<unsigned_long>(uVar7,local_8);
    if (bVar1) {
      piVar2 = __errno();
      *piVar2 = 0x22;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0xffffffff;
      }
      else if ((uVar7 & 2) == 0) {
        uVar6 = 0x7fffffff;
      }
      else {
        uVar6 = 0x80000000;
      }
    }
    else if ((uVar7 & 2) != 0) {
      uVar6 = -uVar6;
    }
  }
  if (local_98 != '\0') {
    *(uint *)(local_a4[0] + 0x350) = *(uint *)(local_a4[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_1016a27e;
}

