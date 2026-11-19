// rea decompile_all
// name: __crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<char>_>
// address: 0x1016a84a
// body: available
// range: 0x1016a84a-0x1016aaef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x1016aa1d) */
/* Library Function - Single Match
    unsigned __int64 __cdecl __crt_strtox::parse_integer<unsigned __int64,class
   __crt_strtox::c_string_character_source<char> >(struct __crt_locale_pointers * const,class
   __crt_strtox::c_string_character_source<char>,int,bool)
   
   Library: Visual Studio 2019 Release */

__uint64 __cdecl
__crt_strtox::parse_integer<unsigned___int64,__crt_strtox::c_string_character_source<char>_>
          (__crt_locale_pointers *param_1,char *param_2,int *param_3,uint param_4,byte param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int *piVar3;
  uint extraout_ECX;
  char cVar4;
  int unaff_EBX;
  uint uVar5;
  undefined3 uVar8;
  uint uVar6;
  uint uVar7;
  int iVar9;
  undefined4 unaff_EDI;
  ulonglong uVar10;
  longlong lVar11;
  int local_40;
  undefined1 local_3c [8];
  char local_34;
  char *local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  char local_10;
  undefined3 uStack_f;
  uint local_c;
  char local_5;
  
  bVar2 = c_string_character_source<char>::validate((c_string_character_source<char> *)&param_2);
  if (bVar2) {
    if ((param_4 == 0) || ((1 < (int)param_4 && ((int)param_4 < 0x25)))) {
      _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&local_40,param_1);
      uVar5 = 0;
      local_14 = 0;
      local_30 = param_2;
      do {
        cVar4 = *param_2;
        uVar8 = (undefined3)((uint)unaff_EBX >> 8);
        unaff_EBX = CONCAT31(uVar8,cVar4);
        param_2 = param_2 + 1;
        _local_10 = CONCAT31(uStack_f,cVar4);
        local_5 = cVar4;
        iVar9 = __ischartype_l(cVar4,8,local_3c);
      } while (iVar9 != 0);
      local_c = (uint)param_5;
      if (cVar4 == '-') {
        local_c = local_c | 2;
LAB_1016a8f5:
        local_5 = *param_2;
        unaff_EBX = CONCAT31(uVar8,local_5);
        param_2 = param_2 + 1;
        _local_10 = CONCAT31(uStack_f,local_5);
      }
      else if (cVar4 == '+') goto LAB_1016a8f5;
      if ((param_4 == 0) || (param_4 == 0x10)) {
        cVar4 = (char)unaff_EBX;
        if ((byte)(cVar4 - 0x30U) < 10) {
          iVar9 = cVar4 + -0x30;
        }
        else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          iVar9 = cVar4 + -0x57;
        }
        else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          iVar9 = cVar4 + -0x37;
        }
        else {
          iVar9 = -1;
        }
        if (iVar9 == 0) {
          cVar4 = *param_2;
          local_1c = CONCAT31(local_1c._1_3_,cVar4);
          if ((cVar4 == 'x') || (cVar4 == 'X')) {
            if (param_4 == 0) {
              param_4 = 0x10;
            }
            local_5 = param_2[1];
            _local_10 = CONCAT31(uStack_f,local_5);
            param_2 = param_2 + 2;
          }
          else {
            if (param_4 == 0) {
              param_4 = 8;
            }
            param_2 = param_2 + 1;
            c_string_character_source<char>::unget
                      ((c_string_character_source<char> *)&param_2,cVar4);
          }
        }
        else if (param_4 == 0) {
          param_4 = 10;
        }
      }
      local_28 = (int)param_4 >> 0x1f;
      local_2c = param_4;
      uVar10 = __aulldvrm(0xffffffff,0xffffffff,param_4,local_28);
      uVar1 = (ulonglong)local_14;
      uVar6 = local_c;
      local_24 = extraout_ECX;
      local_20 = unaff_EBX;
      cVar4 = local_5;
      while( true ) {
        iVar9 = (int)(uVar1 >> 0x20);
        local_14 = (uint)uVar1;
        local_1c = (undefined4)(uVar10 >> 0x20);
        local_18 = (undefined4)uVar10;
        if ((byte)(cVar4 - 0x30U) < 10) {
          local_c = (int)cVar4 - 0x30;
        }
        else if ((byte)(cVar4 + 0x9fU) < 0x1a) {
          local_c = (int)cVar4 - 0x57;
        }
        else if ((byte)(cVar4 + 0xbfU) < 0x1a) {
          local_c = (int)cVar4 - 0x37;
        }
        else {
          local_c = 0xffffffff;
        }
        if ((local_c == 0xffffffff) || (param_4 <= local_c)) break;
        uVar7 = uVar6 | 8;
        if ((uVar1 < uVar10) || ((uVar10 == uVar1 && ((local_20 != 0 || (local_c <= local_24)))))) {
          lVar11 = __allmul(local_2c,local_28,uVar1);
          uVar10 = CONCAT44(local_1c,local_18);
          uVar1 = lVar11 + (ulonglong)local_c;
        }
        else {
          uVar7 = uVar6 | 0xc;
        }
        cVar4 = *param_2;
        param_2 = param_2 + 1;
        _local_10 = CONCAT31(uStack_f,cVar4);
        uVar6 = uVar7;
      }
      local_c = uVar6;
      c_string_character_source<char>::unget
                ((c_string_character_source<char> *)&param_2,(char)_local_10);
      uVar7 = local_14;
      if ((uVar6 & 8) == 0) {
        iVar9 = 0;
        param_2 = local_30;
      }
      else {
        bVar2 = is_overflow_condition<unsigned___int64>(local_c,CONCAT44(unaff_EDI,iVar9));
        if (bVar2) {
          piVar3 = __errno();
          *piVar3 = 0x22;
          if ((local_c & 1) == 0) {
            iVar9 = -1;
            uVar5 = -1;
          }
          else if ((local_c & 2) == 0) {
            uVar5 = -1;
            iVar9 = 0x7fffffff;
          }
          else {
            iVar9 = -0x80000000;
          }
        }
        else {
          uVar5 = uVar7;
          if ((local_c & 2) != 0) {
            uVar5 = -uVar7;
            iVar9 = -(iVar9 + (uint)(uVar7 != 0));
          }
        }
      }
      if (local_34 != '\0') {
        *(uint *)(local_40 + 0x350) = *(uint *)(local_40 + 0x350) & 0xfffffffd;
      }
      goto LAB_1016a888;
    }
    piVar3 = __errno();
    *piVar3 = 0x16;
    FUN_1016fa52();
  }
  uVar5 = 0;
  iVar9 = 0;
LAB_1016a888:
  if (param_3 != (int *)0x0) {
    *param_3 = (int)param_2;
  }
  return CONCAT44(iVar9,uVar5);
}

