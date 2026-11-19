// rea decompile_all
// name: Getffldx
// address: 0x1012d5b3
// body: available
// range: 0x1012d5b3-0x1012dd37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getffldx(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::ios_base &,int *)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getffldx(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2019 Release */

void Getffldx(undefined4 param_1,char *param_2,int param_3,undefined4 param_4,int param_5,
             int *param_6)

{
  code *pcVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  uint uVar5;
  char ****ppppcVar6;
  lconv *plVar7;
  short sVar8;
  char ****ppppcVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  locale local_a8 [4];
  int local_a4;
  char *local_a0;
  char *local_9c;
  char ***local_98;
  int local_94;
  int local_90;
  char ***local_8c;
  undefined4 local_88;
  char local_82;
  char local_81;
  char ***local_80 [4];
  int local_70;
  uint local_6c;
  char ***local_68 [4];
  undefined4 local_58;
  uint local_54;
  short local_50 [22];
  short local_24;
  short local_22;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa0;
  local_8 = 0x1012d5c2;
  local_a0 = param_2;
  local_88 = param_4;
  std::locale::locale(local_a8,*(locale **)(param_5 + 0x30));
  local_8 = 0;
  piVar4 = (int *)FUN_1012998f(local_a8);
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar4 + 0x14);
  guard_check_icall(local_80);
  (*pcVar1)();
  local_8 = 1;
  std::locale::locale(local_a8,*(locale **)(param_5 + 0x30));
  local_8._0_1_ = 2;
  piVar4 = (int *)FUN_1012903f(local_a8);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar4 + 0x2c);
  guard_check_icall("0123456789ABCDEFabcdef-+XxPp",&DAT_101e91b1,local_50);
  (*pcVar1)();
  uVar11 = local_88;
  pcVar12 = local_a0;
  local_82 = '\0';
  cVar2 = operator!=<>(param_3,local_88);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar8 = *(short *)(param_3 + 6);
    if (sVar8 == local_22) {
      *pcVar12 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar8 = *(short *)(param_3 + 6);
      }
      if (sVar8 != local_24) goto LAB_1012d6e9;
      *pcVar12 = '-';
    }
    pcVar12 = pcVar12 + 1;
    Inc();
  }
LAB_1012d6e9:
  pcVar12[0] = '0';
  pcVar12[1] = 'x';
  pcVar12 = pcVar12 + 2;
  local_81 = '\0';
  local_94 = 0;
  local_90 = 0;
  local_9c = pcVar12;
  cVar2 = operator!=<>(param_3,uVar11);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) == local_50[0]) {
      Inc();
      cVar2 = operator!=<>(param_3,uVar11);
      if (cVar2 == '\0') {
LAB_1012d777:
        local_81 = '\x01';
      }
      else {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        sVar8 = *(short *)(param_3 + 6);
        if (sVar8 != local_1e) {
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
            sVar8 = *(short *)(param_3 + 6);
          }
          if (sVar8 != local_20) goto LAB_1012d777;
        }
        Inc();
      }
    }
  }
  local_a4 = ((*param_6 != 1000000000) - 1 & 0x2dc) + 0x24;
  local_98 = (char ***)local_80;
  if (0xf < local_6c) {
    local_98 = local_80[0];
  }
  if ((*(char *)local_98 == '\x7f') || (*(char *)local_98 < '\x01')) {
    cVar2 = operator!=<>(param_3,uVar11);
    pcVar13 = local_9c;
    while (cVar2 != '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      uVar5 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
      pcVar13 = pcVar12;
      if (0x15 < uVar5) break;
      if (local_94 < local_a4) {
        if ((uVar5 != 0) || (local_94 != 0)) {
          *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar5];
          pcVar12 = pcVar12 + 1;
          local_94 = local_94 + 1;
        }
      }
      else {
        local_90 = local_90 + 1;
      }
      local_81 = '\x01';
      Inc();
      cVar2 = operator!=<>(param_3,uVar11);
      pcVar13 = pcVar12;
    }
  }
  else {
    if (local_70 == 0) {
      local_8c = (char ***)0x0;
    }
    else {
      uVar5 = thousands_sep();
      local_8c = (char ***)(uVar5 & 0xffff);
    }
    local_58 = 0;
    local_54 = 0xf;
    local_68[0] = (char ***)((uint)local_68[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_68,1,'\0');
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar10 = 0;
    cVar2 = operator!=<>(param_3,local_88);
    uVar5 = local_54;
    ppppcVar6 = (char ****)local_68[0];
    if (cVar2 == '\0') {
LAB_1012d931:
      while ((iVar10 != 0 && (cVar2 = *(char *)local_98, cVar2 != '\x7f'))) {
        iVar10 = iVar10 + -1;
        if (iVar10 != 0) {
          local_8c = (char ***)local_68;
          if (0xf < local_54) {
            local_8c = (char ***)ppppcVar6;
          }
          uVar5 = local_54;
          if (cVar2 != *(char *)((int)local_8c + iVar10)) goto LAB_1012d99e;
        }
        if (iVar10 == 0) {
          local_8c = (char ***)local_68;
          if (0xf < local_54) {
            local_8c = (char ***)ppppcVar6;
          }
          uVar5 = local_54;
          if (cVar2 < *(char *)local_8c) goto LAB_1012d99e;
        }
        if ('\0' < *(char *)((int)local_98 + 1)) {
          local_98 = (char ***)((int)local_98 + 1);
        }
      }
    }
    else {
      do {
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
        }
        uVar5 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
        if (uVar5 < 0x16) {
          local_81 = '\x01';
          if (local_94 < local_a4) {
            if ((uVar5 != 0) || (local_94 != 0)) {
              *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar5];
              pcVar12 = pcVar12 + 1;
              local_94 = local_94 + 1;
              local_9c = pcVar12;
            }
          }
          else {
            local_90 = local_90 + 1;
          }
          ppppcVar6 = local_68;
          if (0xf < local_54) {
            ppppcVar6 = (char ****)local_68[0];
          }
          if (*(char *)((int)ppppcVar6 + iVar10) != '\x7f') {
            ppppcVar6 = local_68;
            if (0xf < local_54) {
              ppppcVar6 = (char ****)local_68[0];
            }
            *(char *)((int)ppppcVar6 + iVar10) = *(char *)((int)ppppcVar6 + iVar10) + '\x01';
          }
        }
        else {
          ppppcVar6 = local_68;
          if (0xf < local_54) {
            ppppcVar6 = (char ****)local_68[0];
          }
          if ((*(char *)((int)ppppcVar6 + iVar10) == '\0') || ((short)local_8c == 0)) break;
          sVar8 = *(short *)(param_3 + 6);
          if (*(char *)(param_3 + 4) == '\0') {
            Peek();
            sVar8 = *(short *)(param_3 + 6);
          }
          if (sVar8 != (short)local_8c) break;
          FUN_10038070(0);
          iVar10 = iVar10 + 1;
        }
        Inc();
        cVar2 = operator!=<>(param_3,local_88);
      } while (cVar2 != '\0');
      uVar5 = local_54;
      ppppcVar6 = (char ****)local_68[0];
      if (iVar10 == 0) goto LAB_1012d931;
      ppppcVar9 = local_68;
      if (0xf < local_54) {
        ppppcVar9 = (char ****)local_68[0];
      }
      if ('\0' < *(char *)((int)ppppcVar9 + iVar10)) {
        iVar10 = iVar10 + 1;
        goto LAB_1012d931;
      }
LAB_1012d99e:
      local_82 = '\x01';
      uVar5 = local_54;
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar11 = local_88;
    pcVar13 = local_9c;
    if (0xf < uVar5) {
      local_8c = (char ***)(uVar5 + 1);
      local_98 = (char ***)ppppcVar6;
      if ((char ****)0xfff < local_8c) {
        std::_Adjust_manually_vector_aligned(&local_98,(uint *)&local_8c);
      }
      FUN_1013dba5(local_98,local_8c);
      uVar11 = local_88;
      pcVar13 = local_9c;
    }
  }
  local_9c = pcVar13;
  if ((local_81 != '\0') && (local_94 == 0)) {
    *pcVar12 = '0';
    pcVar12 = pcVar12 + 1;
    local_9c = pcVar12;
  }
  cVar2 = operator!=<>(param_3,uVar11);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar8 = *(short *)(param_3 + 6);
    sVar3 = decimal_point();
    uVar11 = local_88;
    if (sVar8 == sVar3) {
      plVar7 = _localeconv();
      *pcVar12 = *plVar7->decimal_point;
      pcVar12 = pcVar12 + 1;
      local_9c = pcVar12;
      Inc();
      uVar11 = local_88;
    }
  }
  if (local_94 == 0) {
    cVar2 = operator!=<>(param_3,uVar11);
    iVar10 = local_90;
    while (cVar2 != '\0') {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      pcVar12 = local_9c;
      if (*(short *)(param_3 + 6) != local_50[0]) break;
      local_81 = '\x01';
      iVar10 = iVar10 + -1;
      Inc();
      cVar2 = operator!=<>(param_3,uVar11);
      pcVar12 = local_9c;
    }
    local_90 = iVar10;
    if (iVar10 < 0) {
      *pcVar12 = '0';
      pcVar12 = pcVar12 + 1;
      local_90 = iVar10 + 1;
    }
  }
  while (cVar2 = operator!=<>(param_3,uVar11), cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar5 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
    if (0x15 < uVar5) break;
    if (local_94 < local_a4) {
      *pcVar12 = "0123456789ABCDEFabcdef-+XxPp"[uVar5];
      pcVar12 = pcVar12 + 1;
      local_94 = local_94 + 1;
    }
    local_81 = '\x01';
    Inc();
  }
  pcVar13 = pcVar12;
  if ((local_81 == '\0') || (cVar2 = operator!=<>(param_3,uVar11), cVar2 == '\0')) {
LAB_1012dd07:
    if ((local_82 != '\0') || (local_81 == '\0')) {
      pcVar13 = local_a0;
    }
    *pcVar13 = '\0';
    *param_6 = local_90;
    FUN_10125c94();
    FUN_1013ecd2();
    return;
  }
  if (*(char *)(param_3 + 4) == '\0') {
    Peek();
  }
  sVar8 = *(short *)(param_3 + 6);
  if (sVar8 != local_1a) {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
      sVar8 = *(short *)(param_3 + 6);
    }
    if (sVar8 != local_1c) goto LAB_1012dd07;
  }
  *pcVar12 = 'p';
  pcVar13 = pcVar12 + 1;
  Inc();
  local_81 = '\0';
  iVar10 = 0;
  cVar2 = operator!=<>(param_3,local_88);
  if (cVar2 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar8 = *(short *)(param_3 + 6);
    if (sVar8 == local_22) {
      *pcVar13 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar8 = *(short *)(param_3 + 6);
      }
      if (sVar8 != local_24) goto LAB_1012dc5b;
      *pcVar13 = '-';
    }
    pcVar13 = pcVar12 + 2;
    Inc();
  }
LAB_1012dc5b:
  cVar2 = operator!=<>(param_3,local_88);
  if (cVar2 != '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      if (*(short *)(param_3 + 6) != local_50[0]) {
        if (local_81 == '\0') goto LAB_1012dcb4;
        break;
      }
      local_81 = '\x01';
      Inc();
      cVar2 = operator!=<>(param_3,local_88);
    } while (cVar2 != '\0');
    *pcVar13 = '0';
    pcVar13 = pcVar13 + 1;
  }
LAB_1012dcb4:
  do {
    cVar2 = operator!=<>(param_3,local_88);
    if (cVar2 == '\0') goto LAB_1012dd07;
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    uVar5 = _Find_elem<>(local_50,*(undefined2 *)(param_3 + 6));
    if (0x15 < uVar5) goto LAB_1012dd07;
    if (iVar10 < 8) {
      *pcVar13 = "0123456789ABCDEFabcdef-+XxPp"[uVar5];
      pcVar13 = pcVar13 + 1;
      iVar10 = iVar10 + 1;
    }
    local_81 = '\x01';
    Inc();
  } while( true );
}

