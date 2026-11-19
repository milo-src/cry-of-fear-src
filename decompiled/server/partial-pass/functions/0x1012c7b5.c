// rea decompile_all
// name: Getffld
// address: 0x1012c7b5
// body: available
// range: 0x1012c7b5-0x1012ceb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getffld(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::ios_base &,int *)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getffld(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2019 Release */

void Getffld(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,int param_5,
            int *param_6)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  char ****ppppcVar7;
  lconv *plVar8;
  short sVar9;
  char ****ppppcVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  undefined4 uVar14;
  locale local_90 [4];
  char *local_8c;
  char *local_88;
  uint local_84;
  int local_80;
  char ***local_7c;
  char *local_78;
  int local_74;
  char local_6d;
  undefined4 local_6c;
  char local_67;
  char local_66;
  char local_65;
  char ***local_64 [4];
  int local_54;
  uint local_50;
  char ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  short local_34 [10];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x8c;
  local_8 = 0x1012c7c4;
  local_88 = param_2;
  local_6c = param_4;
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    Getffldx(param_1,param_2,param_3,param_4,param_5,param_6);
    goto LAB_1012ceae;
  }
  std::locale::locale(local_90,*(locale **)(param_5 + 0x30));
  local_8 = 0;
  piVar4 = (int *)FUN_1012998f(local_90);
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar4 + 0x14);
  guard_check_icall(local_64);
  (*pcVar1)();
  local_8 = 1;
  local_78 = local_88;
  local_67 = '\0';
  local_66 = '\0';
  std::locale::locale(local_90,*(locale **)(param_5 + 0x30));
  local_8._0_1_ = 2;
  piVar4 = (int *)FUN_1012903f(local_90);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar4 + 0x2c);
  guard_check_icall("0123456789-+Ee",&DAT_101e9137,local_34);
  (*pcVar1)();
  uVar14 = local_6c;
  cVar2 = operator!=<>(param_3,local_6c);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar9 = *(short *)(param_3 + 6);
    if (sVar9 == local_1e) {
      *local_88 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar9 = *(short *)(param_3 + 6);
      }
      if (sVar9 != local_20) goto LAB_1012c91d;
      *local_88 = '-';
    }
    pcVar11 = local_88 + 1;
    Inc();
    local_78 = pcVar11;
  }
LAB_1012c91d:
  *local_78 = '0';
  pcVar11 = local_78 + 1;
  local_65 = '\0';
  local_80 = 0;
  local_74 = 0;
  iVar5 = ((*param_6 != 1000000000) - 1 & 0x2dc) + 0x24;
  local_7c = (char ***)local_64;
  if (0xf < local_50) {
    local_7c = local_64[0];
  }
  local_8c = local_78;
  if ((*(char *)local_7c == '\x7f') || (*(char *)local_7c < '\x01')) {
    local_78 = pcVar11;
    cVar2 = operator!=<>(param_3,uVar14);
    pcVar13 = local_78;
    while (cVar2 != '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar6 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
      pcVar13 = pcVar11;
      if (9 < uVar6) break;
      if (local_80 < iVar5) {
        if ((uVar6 != 0) || (local_80 != 0)) {
          *pcVar11 = "0123456789-+Ee"[uVar6];
          pcVar11 = pcVar11 + 1;
          local_80 = local_80 + 1;
        }
      }
      else {
        local_74 = local_74 + 1;
        if (uVar6 != 0) {
          local_66 = '\x01';
        }
      }
      local_65 = '\x01';
      Inc();
      cVar2 = operator!=<>(param_3,uVar14);
      pcVar13 = pcVar11;
    }
  }
  else {
    if (local_54 == 0) {
      local_84 = 0;
      local_78 = pcVar11;
    }
    else {
      local_78 = pcVar11;
      local_84 = thousands_sep();
      local_84 = local_84 & 0xffff;
    }
    local_3c = 0;
    local_38 = 0xf;
    local_4c[0] = (char ***)((uint)local_4c[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_4c,1,'\0');
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar12 = 0;
    cVar2 = operator!=<>(param_3,local_6c);
    uVar6 = local_38;
    ppppcVar7 = (char ****)local_4c[0];
    if (cVar2 == '\0') {
LAB_1012cac9:
      while ((iVar12 != 0 && (local_6d = *(char *)local_7c, local_6d != '\x7f'))) {
        iVar12 = iVar12 + -1;
        if (iVar12 != 0) {
          ppppcVar10 = local_4c;
          if (0xf < uVar6) {
            ppppcVar10 = ppppcVar7;
          }
          uVar6 = local_38;
          if (local_6d != *(char *)((int)ppppcVar10 + iVar12)) goto LAB_1012cb17;
        }
        if (iVar12 == 0) {
          ppppcVar10 = local_4c;
          if (0xf < uVar6) {
            ppppcVar10 = ppppcVar7;
          }
          uVar6 = local_38;
          if (local_6d < *(char *)ppppcVar10) goto LAB_1012cb17;
        }
        if ('\0' < *(char *)((int)local_7c + 1)) {
          local_7c = (char ***)((int)local_7c + 1);
        }
      }
    }
    else {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        uVar6 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
        if (uVar6 < 10) {
          local_65 = '\x01';
          if (local_80 < iVar5) {
            if ((uVar6 != 0) || (local_80 != 0)) {
              *pcVar11 = "0123456789-+Ee"[uVar6];
              pcVar11 = pcVar11 + 1;
              local_80 = local_80 + 1;
              local_78 = pcVar11;
            }
          }
          else {
            local_74 = local_74 + 1;
            if (uVar6 != 0) {
              local_66 = '\x01';
            }
          }
          ppppcVar7 = local_4c;
          if (0xf < local_38) {
            ppppcVar7 = (char ****)local_4c[0];
          }
          if (*(char *)((int)ppppcVar7 + iVar12) != '\x7f') {
            ppppcVar7 = local_4c;
            if (0xf < local_38) {
              ppppcVar7 = (char ****)local_4c[0];
            }
            *(char *)((int)ppppcVar7 + iVar12) = *(char *)((int)ppppcVar7 + iVar12) + '\x01';
          }
        }
        else {
          ppppcVar7 = local_4c;
          if (0xf < local_38) {
            ppppcVar7 = (char ****)local_4c[0];
          }
          if ((*(char *)((int)ppppcVar7 + iVar12) == '\0') || ((short)local_84 == 0)) break;
          sVar9 = *(short *)(param_3 + 6);
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
            sVar9 = *(short *)(param_3 + 6);
          }
          if (sVar9 != (short)local_84) break;
          FUN_10038070(0);
          iVar12 = iVar12 + 1;
        }
        Inc();
        cVar2 = operator!=<>(param_3,local_6c);
      } while (cVar2 != '\0');
      uVar6 = local_38;
      ppppcVar7 = (char ****)local_4c[0];
      if (iVar12 == 0) goto LAB_1012cac9;
      ppppcVar10 = local_4c;
      if (0xf < local_38) {
        ppppcVar10 = (char ****)local_4c[0];
      }
      if ('\0' < *(char *)((int)ppppcVar10 + iVar12)) {
        iVar12 = iVar12 + 1;
        goto LAB_1012cac9;
      }
LAB_1012cb17:
      local_67 = '\x01';
      uVar6 = local_38;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar14 = local_6c;
    pcVar13 = local_78;
    if (0xf < uVar6) {
      local_84 = uVar6 + 1;
      local_7c = (char ***)ppppcVar7;
      if (0xfff < local_84) {
        std::_Adjust_manually_vector_aligned(&local_7c,&local_84);
      }
      FUN_1013dba5(local_7c,local_84);
      uVar14 = local_6c;
      pcVar13 = local_78;
    }
  }
  local_78 = pcVar13;
  cVar2 = operator!=<>(param_3,uVar14);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar9 = *(short *)(param_3 + 6);
    sVar3 = decimal_point();
    pcVar11 = local_78;
    if (sVar9 == sVar3) {
      plVar8 = _localeconv();
      *local_78 = *plVar8->decimal_point;
      pcVar11 = local_78 + 1;
      local_78 = pcVar11;
      Inc();
    }
  }
  if ((*param_6 != 1000000000) && (local_80 == 0)) {
    cVar2 = operator!=<>(param_3,uVar14);
    iVar12 = local_74;
    while (cVar2 != '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      pcVar11 = local_78;
      if (*(short *)(param_3 + 6) != local_34[0]) break;
      local_65 = '\x01';
      iVar12 = iVar12 + -1;
      Inc();
      cVar2 = operator!=<>(param_3,uVar14);
      pcVar11 = local_78;
    }
    local_74 = iVar12;
    if (iVar12 < 0) {
      *pcVar11 = '0';
      pcVar11 = pcVar11 + 1;
      local_74 = iVar12 + 1;
    }
  }
  while (cVar2 = operator!=<>(param_3,uVar14), cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar6 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
    if (9 < uVar6) break;
    if (local_80 < iVar5) {
      *pcVar11 = "0123456789-+Ee"[uVar6];
      pcVar11 = pcVar11 + 1;
      local_80 = local_80 + 1;
    }
    else if (uVar6 != 0) {
      local_66 = '\x01';
    }
    local_65 = '\x01';
    Inc();
  }
  pcVar13 = pcVar11;
  if (local_66 != '\0') {
    while (pcVar13 = pcVar13 + -1, pcVar13 != local_8c) {
      plVar8 = _localeconv();
      cVar2 = *pcVar13;
      if (cVar2 != *plVar8->decimal_point) {
        if (cVar2 != '9') {
          *pcVar13 = cVar2 + '\x01';
          uVar14 = local_6c;
          if (pcVar13 != local_8c) goto LAB_1012cd41;
          break;
        }
        *pcVar13 = '0';
      }
    }
    local_74 = local_74 + 1;
    *pcVar13 = '1';
    uVar14 = local_6c;
  }
LAB_1012cd41:
  pcVar13 = pcVar11;
  if ((local_65 == '\0') || (cVar2 = operator!=<>(param_3,uVar14), cVar2 == '\0')) {
LAB_1012ce90:
    if ((local_67 != '\0') || (local_65 == '\0')) {
      pcVar13 = local_88;
    }
    *pcVar13 = '\0';
    FUN_10125c94();
LAB_1012ceae:
    FUN_1013ecd2();
    return;
  }
  if (*(char *)(param_3 + 4) == '\0') {
    Peek();
  }
  sVar9 = *(short *)(param_3 + 6);
  if (sVar9 != local_1a) {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
      sVar9 = *(short *)(param_3 + 6);
    }
    if (sVar9 != local_1c) goto LAB_1012ce90;
  }
  *pcVar11 = 'e';
  pcVar13 = pcVar11 + 1;
  Inc();
  local_65 = '\0';
  iVar5 = 0;
  cVar2 = operator!=<>(param_3,local_6c);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar9 = *(short *)(param_3 + 6);
    if (sVar9 == local_1e) {
      *pcVar13 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar9 = *(short *)(param_3 + 6);
      }
      if (sVar9 != local_20) goto LAB_1012cded;
      *pcVar13 = '-';
    }
    pcVar13 = pcVar11 + 2;
    Inc();
  }
LAB_1012cded:
  cVar2 = operator!=<>(param_3,local_6c);
  if (cVar2 != '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_34[0]) {
        if (local_65 == '\0') goto LAB_1012ce40;
        break;
      }
      local_65 = '\x01';
      Inc();
      cVar2 = operator!=<>(param_3,local_6c);
    } while (cVar2 != '\0');
    *pcVar13 = '0';
    pcVar13 = pcVar13 + 1;
  }
LAB_1012ce40:
  do {
    cVar2 = operator!=<>(param_3,local_6c);
    if (cVar2 == '\0') goto LAB_1012ce90;
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar6 = _Find_elem<>(local_34,*(undefined2 *)(param_3 + 6));
    if (9 < uVar6) goto LAB_1012ce90;
    if (iVar5 < 8) {
      *pcVar13 = "0123456789-+Ee"[uVar6];
      pcVar13 = pcVar13 + 1;
      iVar5 = iVar5 + 1;
    }
    local_65 = '\x01';
    Inc();
  } while( true );
}

