// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffldx
// address: 0x10124a2a
// body: available
// range: 0x10124a2a-0x101250f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getffldx(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffldx
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,istreambuf_iterator<char,std::char_traits<char>_> *param_2,
          istreambuf_iterator<char,std::char_traits<char>_> *param_3,ios_base *param_4,int *param_5)

{
  char cVar1;
  code *pcVar2;
  undefined3 uVar3;
  bool bVar4;
  istreambuf_iterator<char,std::char_traits<char>_> iVar5;
  istreambuf_iterator<char,std::char_traits<char>_> iVar6;
  numpunct<char> *this_00;
  int *piVar7;
  int iVar8;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar9;
  char ****ppppcVar10;
  undefined3 extraout_var_01;
  lconv *plVar11;
  char ****ppppcVar12;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar13;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar14;
  int iVar15;
  ios_base *piVar16;
  int *in_stack_00000018;
  istreambuf_iterator<char,std::char_traits<char>_> *local_88;
  locale local_80 [4];
  char ***local_7c;
  char ***local_78;
  int local_74;
  int local_70;
  ios_base *local_6c;
  char local_67;
  istreambuf_iterator<char,std::char_traits<char>_> local_66;
  char local_65;
  char ***local_64 [4];
  int local_54;
  uint local_50;
  char ***local_4c [4];
  undefined4 local_3c;
  uint local_38;
  istreambuf_iterator<char,std::char_traits<char>_> local_34 [22];
  istreambuf_iterator<char,std::char_traits<char>_> local_1e;
  istreambuf_iterator<char,std::char_traits<char>_> local_1d;
  istreambuf_iterator<char,std::char_traits<char>_> local_1c;
  istreambuf_iterator<char,std::char_traits<char>_> local_1b;
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x10124a39;
  local_6c = param_4;
  locale::locale(local_80,(locale *)param_5[0xc]);
  local_8 = 0;
  this_00 = (numpunct<char> *)FUN_10049950(local_80);
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar2 = *(code **)(*(int *)this_00 + 0x14);
  guard_check_icall(local_64);
  (*pcVar2)();
  local_8 = 1;
  locale::locale(local_80,(locale *)param_5[0xc]);
  local_8._0_1_ = 2;
  piVar7 = (int *)FUN_1002f750(local_80);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100307e0();
  pcVar2 = *(code **)(*piVar7 + 0x1c);
  guard_check_icall("0123456789ABCDEFabcdef-+XxPp",&DAT_101e8585,local_34);
  (*pcVar2)();
  piVar16 = local_6c;
  local_67 = '\0';
  bVar4 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
  piVar13 = param_2;
  if (bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar5 = param_3[5];
    if (iVar5 == local_1d) {
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar5 = param_3[5];
      }
      if (iVar5 != local_1e) goto LAB_10124b47;
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    piVar13 = param_2 + 1;
  }
LAB_10124b47:
  *(undefined2 *)piVar13 = 0x7830;
  piVar13 = piVar13 + 2;
  local_65 = '\0';
  local_74 = 0;
  local_70 = 0;
  bVar4 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
  if (bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] == local_34[0]) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = operator!=<char,std::char_traits<char>_>
                        (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
      if (bVar4) {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        iVar5 = param_3[5];
        if (iVar5 != local_1b) {
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
            iVar5 = param_3[5];
          }
          if (iVar5 != local_1c) goto LAB_10124bc9;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      }
      else {
LAB_10124bc9:
        local_65 = '\x01';
      }
    }
  }
  iVar8 = ((*in_stack_00000018 != 1000000000) - 1 & 0x2dc) + 0x24;
  local_78 = (char ***)local_64;
  if (0xf < local_50) {
    local_78 = local_64[0];
  }
  local_88 = piVar13;
  if ((*(char *)local_78 == '\x7f') || (*(char *)local_78 < '\x01')) {
    bVar4 = operator!=<char,std::char_traits<char>_>
                      (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
    if (bVar4) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        uVar9 = _Find_elem<char,29>((char *)local_34,(char)param_3[5]);
        local_88 = piVar13;
        if (0x15 < uVar9) break;
        if (local_74 < iVar8) {
          if ((uVar9 != 0) || (local_74 != 0)) {
            *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                        ("0123456789ABCDEFabcdef-+XxPp" + uVar9);
            piVar13 = piVar13 + 1;
            local_74 = local_74 + 1;
          }
        }
        else {
          local_70 = local_70 + 1;
        }
        local_65 = '\x01';
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = operator!=<char,std::char_traits<char>_>
                          (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
        local_88 = piVar13;
      } while (bVar4);
    }
  }
  else {
    if (local_54 == 0) {
      local_66 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
    }
    else {
      local_66 = (istreambuf_iterator<char,std::char_traits<char>_>)
                 numpunct<char>::thousands_sep(this_00);
    }
    local_3c = 0;
    local_38 = 0xf;
    local_4c[0] = (char ***)((uint)local_4c[0] & 0xffffff00);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_4c,1,'\0');
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar15 = 0;
    bVar4 = operator!=<char,std::char_traits<char>_>
                      (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
    uVar3 = extraout_var;
    uVar9 = local_38;
    ppppcVar10 = (char ****)local_4c[0];
    if (bVar4) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          uVar3 = extraout_var_00;
        }
        local_7c = (char ***)CONCAT31(uVar3,param_3[5]);
        uVar9 = _Find_elem<char,29>((char *)local_34,(char)param_3[5]);
        if (uVar9 < 0x16) {
          local_65 = '\x01';
          if (local_74 < iVar8) {
            if ((uVar9 != 0) || (local_74 != 0)) {
              *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                          ("0123456789ABCDEFabcdef-+XxPp" + uVar9);
              piVar13 = piVar13 + 1;
              local_74 = local_74 + 1;
              local_88 = piVar13;
            }
          }
          else {
            local_70 = local_70 + 1;
          }
          ppppcVar10 = local_4c;
          if (0xf < local_38) {
            ppppcVar10 = (char ****)local_4c[0];
          }
          if (*(char *)((int)ppppcVar10 + iVar15) != '\x7f') {
            ppppcVar10 = local_4c;
            if (0xf < local_38) {
              ppppcVar10 = (char ****)local_4c[0];
            }
            *(char *)((int)ppppcVar10 + iVar15) = *(char *)((int)ppppcVar10 + iVar15) + '\x01';
          }
        }
        else {
          ppppcVar10 = local_4c;
          if (0xf < local_38) {
            ppppcVar10 = (char ****)local_4c[0];
          }
          if ((*(char *)((int)ppppcVar10 + iVar15) == '\0') ||
             (local_66 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
            iVar5 = param_3[5];
          }
          else {
            iVar5 = SUB41(local_7c,0);
          }
          if (iVar5 != local_66) break;
          FUN_10038070(0);
          iVar15 = iVar15 + 1;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = operator!=<char,std::char_traits<char>_>
                          (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
        uVar3 = extraout_var_01;
      } while (bVar4);
      uVar9 = local_38;
      ppppcVar10 = (char ****)local_4c[0];
      if (iVar15 == 0) goto LAB_10124d5c;
      ppppcVar12 = local_4c;
      if (0xf < local_38) {
        ppppcVar12 = (char ****)local_4c[0];
      }
      if ('\0' < *(char *)((int)ppppcVar12 + iVar15)) {
        iVar15 = iVar15 + 1;
        goto LAB_10124d5c;
      }
LAB_10124daf:
      local_67 = '\x01';
    }
    else {
LAB_10124d5c:
      while ((iVar15 != 0 && (cVar1 = *(char *)local_78, cVar1 != '\x7f'))) {
        iVar15 = iVar15 + -1;
        if (iVar15 != 0) {
          local_7c = (char ***)local_4c;
          if (0xf < uVar9) {
            local_7c = (char ***)ppppcVar10;
          }
          if (cVar1 != *(char *)((int)local_7c + iVar15)) goto LAB_10124daf;
        }
        if (iVar15 == 0) {
          local_7c = (char ***)local_4c;
          if (0xf < uVar9) {
            local_7c = (char ***)ppppcVar10;
          }
          if (cVar1 < *(char *)local_7c) goto LAB_10124daf;
        }
        if ('\0' < *(char *)((int)local_78 + 1)) {
          local_78 = (char ***)((int)local_78 + 1);
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar16 = local_6c;
    if (0xf < uVar9) {
      local_7c = (char ***)(uVar9 + 1);
      local_78 = (char ***)ppppcVar10;
      if ((char ****)0xfff < local_7c) {
        _Adjust_manually_vector_aligned(&local_78,(uint *)&local_7c);
      }
      FUN_1013dba5(local_78,local_7c);
      piVar16 = local_6c;
    }
  }
  if ((local_65 != '\0') && (local_74 == 0)) {
    *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
    piVar13 = piVar13 + 1;
    local_88 = piVar13;
  }
  bVar4 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
  if (bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar5 = param_3[5];
    iVar6 = (istreambuf_iterator<char,std::char_traits<char>_>)
            numpunct<char>::decimal_point(this_00);
    if (iVar5 == iVar6) {
      plVar11 = _localeconv();
      *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar11->decimal_point;
      piVar13 = piVar13 + 1;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      local_88 = piVar13;
    }
  }
  if (local_74 == 0) {
    bVar4 = operator!=<char,std::char_traits<char>_>
                      (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
    iVar15 = local_70;
    if (bVar4) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        piVar13 = local_88;
        if (param_3[5] != local_34[0]) break;
        local_65 = '\x01';
        iVar15 = iVar15 + -1;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar4 = operator!=<char,std::char_traits<char>_>
                          (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16);
      } while (bVar4);
    }
    local_70 = iVar15;
    if (local_70 < 0) {
      *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar13 = piVar13 + 1;
      local_70 = local_70 + 1;
    }
  }
  while (bVar4 = operator!=<char,std::char_traits<char>_>
                           (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16),
        bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar9 = _Find_elem<char,29>((char *)local_34,(char)param_3[5]);
    if (0x15 < uVar9) break;
    if (local_74 < iVar8) {
      *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                  ("0123456789ABCDEFabcdef-+XxPp" + uVar9);
      piVar13 = piVar13 + 1;
      local_74 = local_74 + 1;
    }
    local_65 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  piVar14 = piVar13;
  if ((local_65 == '\0') ||
     (bVar4 = operator!=<char,std::char_traits<char>_>
                        (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)piVar16),
     !bVar4)) {
LAB_101250c7:
    if ((local_67 != '\0') || (local_65 == '\0')) {
      piVar14 = param_2;
    }
    *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
    *in_stack_00000018 = local_70;
    FUN_10125c94();
    iVar8 = FUN_1013ecd2();
    return iVar8;
  }
  if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
  }
  iVar5 = param_3[5];
  if (iVar5 != local_19) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      iVar5 = param_3[5];
    }
    if (iVar5 != local_1a) goto LAB_101250c7;
  }
  *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x70;
  piVar14 = piVar13 + 1;
  istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  local_65 = '\0';
  iVar8 = 0;
  bVar4 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
  if (bVar4) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar5 = param_3[5];
    if (iVar5 == local_1d) {
      *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar5 = param_3[5];
      }
      if (iVar5 != local_1e) goto LAB_10125026;
      *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    piVar14 = piVar13 + 2;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_10125026:
  bVar4 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
  if (bVar4) {
    do {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_34[0]) {
        if (local_65 == '\0') goto LAB_10125077;
        break;
      }
      local_65 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar4 = operator!=<char,std::char_traits<char>_>
                        (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
    } while (bVar4);
    *piVar14 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
    piVar14 = piVar14 + 1;
  }
LAB_10125077:
  do {
    bVar4 = operator!=<char,std::char_traits<char>_>
                      (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)local_6c);
    if (!bVar4) goto LAB_101250c7;
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar9 = _Find_elem<char,29>((char *)local_34,(char)param_3[5]);
    if (0x15 < uVar9) goto LAB_101250c7;
    if (iVar8 < 8) {
      *piVar14 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                  ("0123456789ABCDEFabcdef-+XxPp" + uVar9);
      piVar14 = piVar14 + 1;
      iVar8 = iVar8 + 1;
    }
    local_65 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  } while( true );
}

