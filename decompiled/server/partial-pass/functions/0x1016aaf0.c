// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<wchar_t>_>
// address: 0x1016aaf0
// body: available
// range: 0x1016aaf0-0x1016b1c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1016b0c3) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::c_string_character_source<wchar_t> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<wchar_t>,int,bool)
   
   Library: Visual Studio 2019 Release */

__uint64 __cdecl
__crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<wchar_t>_>
          (__crt_locale_pointers *param_1,wchar_t *param_2,int *param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint extraout_ECX;
  int iVar5;
  wchar_t wVar6;
  uint uVar7;
  undefined4 unaff_EDI;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int local_bc [3];
  char local_b0;
  wchar_t *local_ac;
  undefined4 local_a8;
  uint local_a4;
  int local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  bVar2 = c_string_character_source<wchar_t>::validate
                    ((c_string_character_source<wchar_t> *)&param_2);
  uVar9 = param_4;
  if (bVar2) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_bc,param_1);
      local_c = 0;
      local_14 = 0;
      local_ac = param_2;
      wVar6 = *param_2;
      while( true ) {
        param_2 = param_2 + 1;
        iVar5 = _iswctype(wVar6,8);
        if (iVar5 == 0) break;
        wVar6 = *param_2;
      }
      local_8 = (uint)param_5;
      if (wVar6 == L'-') {
        local_8 = local_8 | 2;
LAB_1016aba2:
        wVar6 = *param_2;
        param_2 = param_2 + 1;
      }
      else if (wVar6 == L'+') goto LAB_1016aba2;
      uVar7 = (uint)(ushort)wVar6;
      local_10 = 0x3a;
      iVar5 = 0xff10;
      local_94 = 0x66a;
      local_18 = 0x6f0;
      local_1c = 0x6fa;
      local_20 = 0x966;
      local_24 = 0x970;
      local_28 = 0x9e6;
      local_2c = 0x9f0;
      local_30 = 0xa66;
      local_34 = 0xa70;
      local_38 = 0xae6;
      local_3c = 0xaf0;
      local_40 = 0xb66;
      local_44 = 0xb70;
      local_48 = 0xc66;
      local_4c = 0xc70;
      local_50 = 0xce6;
      local_54 = 0xcf0;
      local_58 = 0xd66;
      local_5c = 0xd70;
      local_60 = 0xe50;
      local_64 = 0xe5a;
      local_68 = 0xed0;
      local_6c = 0xeda;
      local_70 = 0xf20;
      local_74 = 0xf2a;
      local_78 = 0x1040;
      local_7c = 0x104a;
      local_80 = 0x17e0;
      local_84 = 0x17ea;
      local_88 = 0x1810;
      local_8c = 0x181a;
      local_90 = 0xff1a;
      if ((uVar9 != 0) && (uVar9 != 0x10)) goto LAB_1016aeb5;
      if ((ushort)wVar6 < 0x30) goto LAB_1016ae40;
      if ((ushort)wVar6 < 0x3a) {
        iVar5 = uVar7 - 0x30;
LAB_1016ae3b:
        if (iVar5 == -1) goto LAB_1016ae40;
      }
      else {
        if (0xff0f < (ushort)wVar6) {
          if ((ushort)wVar6 < 0xff1a) {
LAB_1016ad12:
            iVar5 = uVar7 - iVar5;
          }
          else {
            iVar5 = -1;
          }
          goto LAB_1016ae3b;
        }
        if (0x65f < (ushort)wVar6) {
          if ((ushort)wVar6 < 0x66a) {
            iVar5 = uVar7 - 0x660;
            goto LAB_1016ae3b;
          }
          if ((0x6ef < (ushort)wVar6) &&
             ((iVar5 = 0x6f0, (ushort)wVar6 < 0x6fa ||
              ((0x965 < (ushort)wVar6 &&
               ((iVar5 = local_20, (ushort)wVar6 < 0x970 ||
                ((iVar5 = 0x9e6, 0x9e5 < (ushort)wVar6 &&
                 (((ushort)wVar6 < 0x9f0 ||
                  ((iVar5 = 0xa66, 0xa65 < (ushort)wVar6 &&
                   (((ushort)wVar6 < 0xa70 ||
                    ((iVar5 = 0xae6, 0xae5 < (ushort)wVar6 &&
                     (((ushort)wVar6 < 0xaf0 ||
                      ((iVar5 = 0xb66, 0xb65 < (ushort)wVar6 &&
                       (((ushort)wVar6 < 0xb70 ||
                        ((iVar5 = 0xc66, 0xc65 < (ushort)wVar6 &&
                         (((ushort)wVar6 < 0xc70 ||
                          ((iVar5 = 0xce6, 0xce5 < (ushort)wVar6 &&
                           (((ushort)wVar6 < 0xcf0 ||
                            ((iVar5 = 0xd66, 0xd65 < (ushort)wVar6 &&
                             (((ushort)wVar6 < 0xd70 ||
                              ((iVar5 = 0xe50, 0xe4f < (ushort)wVar6 &&
                               (((ushort)wVar6 < 0xe5a ||
                                ((iVar5 = 0xed0, 0xecf < (ushort)wVar6 &&
                                 (((ushort)wVar6 < 0xeda ||
                                  ((iVar5 = 0xf20, 0xf1f < (ushort)wVar6 &&
                                   (((ushort)wVar6 < 0xf2a ||
                                    ((iVar5 = 0x1040, 0x103f < (ushort)wVar6 &&
                                     (((ushort)wVar6 < 0x104a ||
                                      ((iVar5 = 0x17e0, 0x17df < (ushort)wVar6 &&
                                       (((ushort)wVar6 < 0x17ea ||
                                        ((iVar5 = 0x1810, 0x180f < (ushort)wVar6 &&
                                         ((ushort)wVar6 < 0x181a))))))))))))))))))))))))))))))))))))
                       )))))))))))))))))))))) goto LAB_1016ad12;
        }
LAB_1016ae40:
        if (((uVar7 < 0x41) || (0x5a < uVar7)) && (0x19 < uVar7 - 0x61)) {
          iVar5 = -1;
        }
        else {
          uVar4 = uVar7;
          if (uVar7 - 0x61 < 0x1a) {
            uVar4 = uVar7 - 0x20;
          }
          iVar5 = uVar4 - 0x37;
        }
      }
      if (iVar5 == 0) {
        wVar6 = *param_2;
        if ((wVar6 == L'x') || (wVar6 == L'X')) {
          if (uVar9 == 0) {
            uVar9 = 0x10;
            param_4 = uVar9;
          }
          uVar7 = (uint)(ushort)param_2[1];
          param_2 = param_2 + 2;
        }
        else {
          if (uVar9 == 0) {
            uVar9 = 8;
            param_4 = uVar9;
          }
          param_2 = param_2 + 1;
          c_string_character_source<wchar_t>::unget
                    ((c_string_character_source<wchar_t> *)&param_2,wVar6);
        }
      }
      else if (uVar9 == 0) {
        uVar9 = 10;
        param_4 = uVar9;
      }
LAB_1016aeb5:
      local_a0 = (int)uVar9 >> 0x1f;
      local_a4 = uVar9;
      uVar10 = __aulldvrm(0xffffffff,0xffffffff,uVar9,local_a0);
      uVar1 = CONCAT44(local_14,local_c);
      local_9c = extraout_ECX;
      local_98 = uVar9;
      do {
        local_14 = (int)(uVar1 >> 0x20);
        local_c = (int)uVar1;
        local_10 = (undefined4)(uVar10 >> 0x20);
        local_a8 = (undefined4)uVar10;
        wVar6 = (wchar_t)uVar7;
        if ((ushort)wVar6 < 0x30) {
LAB_1016b072:
          if (((uVar7 < 0x41) || (0x5a < uVar7)) && (0x19 < uVar7 - 0x61)) {
            uVar9 = 0xffffffff;
          }
          else {
            if (uVar7 - 0x61 < 0x1a) {
              uVar7 = uVar7 - 0x20;
            }
            uVar9 = uVar7 - 0x37;
          }
        }
        else {
          if ((ushort)wVar6 < 0x3a) {
            uVar9 = uVar7 - 0x30;
          }
          else {
            iVar5 = 0xff10;
            if ((ushort)wVar6 < 0xff10) {
              if (((ushort)wVar6 < 0x660) ||
                 ((iVar5 = 0x660, (ushort)(wchar_t)local_94 <= (ushort)wVar6 &&
                  (((ushort)wVar6 < (ushort)(wchar_t)local_18 ||
                   ((iVar5 = local_18, (ushort)(wchar_t)local_1c <= (ushort)wVar6 &&
                    (((ushort)wVar6 < (ushort)(wchar_t)local_20 ||
                     ((iVar5 = local_20, (ushort)(wchar_t)local_24 <= (ushort)wVar6 &&
                      (((ushort)wVar6 < (ushort)(wchar_t)local_28 ||
                       ((iVar5 = local_28, (ushort)(wchar_t)local_2c <= (ushort)wVar6 &&
                        (((ushort)wVar6 < (ushort)(wchar_t)local_30 ||
                         ((iVar5 = local_30, (ushort)(wchar_t)local_34 <= (ushort)wVar6 &&
                          (((ushort)wVar6 < (ushort)(wchar_t)local_38 ||
                           ((iVar5 = local_38, (ushort)(wchar_t)local_3c <= (ushort)wVar6 &&
                            (((ushort)wVar6 < (ushort)(wchar_t)local_40 ||
                             ((iVar5 = local_40, (ushort)(wchar_t)local_44 <= (ushort)wVar6 &&
                              (((ushort)wVar6 < (ushort)(wchar_t)local_48 ||
                               ((iVar5 = local_48, (ushort)(wchar_t)local_4c <= (ushort)wVar6 &&
                                (((ushort)wVar6 < (ushort)(wchar_t)local_50 ||
                                 ((iVar5 = local_50, (ushort)(wchar_t)local_54 <= (ushort)wVar6 &&
                                  (((ushort)wVar6 < (ushort)(wchar_t)local_58 ||
                                   ((iVar5 = local_58, (ushort)(wchar_t)local_5c <= (ushort)wVar6 &&
                                    (((ushort)wVar6 < (ushort)(wchar_t)local_60 ||
                                     ((iVar5 = local_60, (ushort)(wchar_t)local_64 <= (ushort)wVar6
                                      && (((ushort)wVar6 < (ushort)(wchar_t)local_68 ||
                                          ((iVar5 = local_68,
                                           (ushort)(wchar_t)local_6c <= (ushort)wVar6 &&
                                           (((ushort)wVar6 < (ushort)(wchar_t)local_70 ||
                                            ((iVar5 = local_70,
                                             (ushort)(wchar_t)local_74 <= (ushort)wVar6 &&
                                             (((ushort)wVar6 < (ushort)(wchar_t)local_78 ||
                                              ((iVar5 = local_78,
                                               (ushort)(wchar_t)local_7c <= (ushort)wVar6 &&
                                               (((ushort)wVar6 < (ushort)(wchar_t)local_80 ||
                                                ((iVar5 = local_80,
                                                 (ushort)(wchar_t)local_84 <= (ushort)wVar6 &&
                                                 (((ushort)wVar6 < (ushort)(wchar_t)local_88 ||
                                                  (iVar5 = local_88,
                                                  (ushort)(wchar_t)local_8c <= (ushort)wVar6))))))))
                                              ))))))))))))))))))))))))))))))))))))))))))))))))))))))
              goto LAB_1016b072;
            }
            else if ((ushort)(wchar_t)local_90 <= (ushort)wVar6) {
              uVar9 = 0xffffffff;
              goto LAB_1016b06d;
            }
            uVar9 = uVar7 - iVar5;
          }
LAB_1016b06d:
          if (uVar9 == 0xffffffff) goto LAB_1016b072;
        }
        if ((uVar9 == 0xffffffff) || (param_4 <= uVar9)) goto LAB_1016b12e;
        if ((uVar1 < uVar10) || ((uVar10 == uVar1 && ((local_98 != 0 || (uVar9 <= local_9c)))))) {
          local_8 = local_8 | 8;
          lVar11 = __allmul(local_a4,local_a0,local_c,(short)(uVar1 >> 0x20));
          uVar10 = CONCAT44(local_10,local_a8);
          uVar1 = lVar11 + (ulonglong)uVar9;
        }
        else {
          local_8 = local_8 | 0xc;
        }
        uVar7 = (uint)(ushort)*param_2;
        param_2 = param_2 + 1;
      } while( true );
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1016fa52();
  }
  iVar8 = 0;
  iVar5 = 0;
LAB_1016ab33:
  if (param_3 != (int *)0x0) {
    *param_3 = (int)param_2;
  }
  return CONCAT44(iVar5,iVar8);
LAB_1016b12e:
  c_string_character_source<wchar_t>::unget((c_string_character_source<wchar_t> *)&param_2,wVar6);
  iVar8 = local_c;
  iVar5 = local_14;
  if ((local_8 & 8) == 0) {
    param_2 = local_ac;
    iVar8 = 0;
    iVar5 = 0;
  }
  else {
    bVar2 = is_overflow_condition<unsigned___int64>(local_8,CONCAT44(unaff_EDI,local_14));
    if (bVar2) {
      piVar3 = __errno();
      *piVar3 = 0x22;
      if ((local_8 & 1) == 0) {
        iVar8 = -1;
        iVar5 = -1;
      }
      else if ((local_8 & 2) == 0) {
        iVar8 = -1;
        iVar5 = 0x7fffffff;
      }
      else {
        iVar8 = 0;
        iVar5 = -0x80000000;
      }
    }
    else if ((local_8 & 2) != 0) {
      bVar2 = iVar8 != 0;
      iVar8 = -iVar8;
      iVar5 = -(iVar5 + (uint)bVar2);
    }
  }
  if (local_b0 != '\0') {
    *(uint *)(local_bc[0] + 0x350) = *(uint *)(local_bc[0] + 0x350) & 0xfffffffd;
  }
  goto LAB_1016ab33;
}

