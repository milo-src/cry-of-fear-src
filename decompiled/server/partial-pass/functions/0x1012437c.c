// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld
// address: 0x1012437c
// body: available
// range: 0x1012437c-0x10124a29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getffld(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,class std::ios_base &,int *)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getffld
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,istreambuf_iterator<char,std::char_traits<char>_> *param_2,
          istreambuf_iterator<char,std::char_traits<char>_> *param_3,ios_base *param_4,int *param_5)

{
  code *pcVar1;
  undefined3 uVar2;
  bool bVar3;
  istreambuf_iterator<char,std::char_traits<char>_> iVar4;
  istreambuf_iterator<char,std::char_traits<char>_> iVar5;
  numpunct<char> *this_00;
  int *piVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar7;
  char ****ppppcVar8;
  undefined3 extraout_var_01;
  lconv *plVar9;
  int iVar10;
  char ****ppppcVar11;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar12;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar13;
  int iVar14;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar15;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar16;
  int *in_stack_00000018;
  locale local_74 [4];
  char ***local_70;
  int local_6c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_68;
  istreambuf_iterator<char,std::char_traits<char>_> *local_64;
  int local_60;
  istreambuf_iterator<char,std::char_traits<char>_> *local_5c;
  char local_58;
  char local_57;
  istreambuf_iterator<char,std::char_traits<char>_> local_56;
  char local_55;
  istreambuf_iterator<char,std::char_traits<char>_> *local_54 [4];
  int local_44;
  uint local_40;
  char ***local_3c [4];
  undefined4 local_2c;
  uint local_28;
  istreambuf_iterator<char,std::char_traits<char>_> local_24 [10];
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  istreambuf_iterator<char,std::char_traits<char>_> local_18;
  istreambuf_iterator<char,std::char_traits<char>_> local_17;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x7c;
  local_8 = 0x10124388;
  local_5c = (istreambuf_iterator<char,std::char_traits<char>_> *)param_4;
  if ((param_5[5] & 0x3000U) == 0x3000) {
    _Getffldx((num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)param_4,
              param_1,param_2,param_3,param_4,param_5);
    goto LAB_10124a24;
  }
  locale::locale(local_74,(locale *)param_5[0xc]);
  local_8 = 0;
  this_00 = (numpunct<char> *)FUN_10049950(local_74);
  local_8 = 0xffffffff;
  FUN_100307e0();
  pcVar1 = *(code **)(*(int *)this_00 + 0x14);
  guard_check_icall(local_54);
  (*pcVar1)();
  local_8 = 1;
  local_68 = param_2;
  local_58 = '\0';
  local_57 = '\0';
  locale::locale(local_74,(locale *)param_5[0xc]);
  local_8._0_1_ = 2;
  piVar6 = (int *)FUN_1002f750(local_74);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_100307e0();
  pcVar1 = *(code **)(*piVar6 + 0x1c);
  guard_check_icall("0123456789-+Ee",&DAT_101e854b,local_24);
  (*pcVar1)();
  piVar16 = local_5c;
  bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
  piVar13 = local_68;
  if (bVar3) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar4 = param_3[5];
    if (iVar4 == local_19) {
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar4 = param_3[5];
      }
      piVar13 = local_68;
      if (iVar4 != local_1a) goto LAB_101244b9;
      *param_2 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    piVar13 = param_2 + 1;
  }
LAB_101244b9:
  *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
  piVar12 = piVar13 + 1;
  local_55 = '\0';
  local_6c = 0;
  local_60 = 0;
  iVar10 = ((*in_stack_00000018 != 1000000000) - 1 & 0x2dc) + 0x24;
  local_64 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_54;
  if (0xf < local_40) {
    local_64 = local_54[0];
  }
  local_68 = piVar12;
  if ((*local_64 == (istreambuf_iterator<char,std::char_traits<char>_>)0x7f) ||
     ((char)*local_64 < '\x01')) {
    bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16);
    piVar15 = local_68;
    if (bVar3) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        uVar7 = _Find_elem<char,15>((char *)local_24,(char)param_3[5]);
        piVar15 = piVar12;
        if (9 < uVar7) break;
        if (local_6c < iVar10) {
          if ((uVar7 != 0) || (local_6c != 0)) {
            *piVar12 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                        ("0123456789-+Ee" + uVar7);
            piVar12 = piVar12 + 1;
            local_6c = local_6c + 1;
          }
        }
        else {
          local_60 = local_60 + 1;
          if (uVar7 != 0) {
            local_57 = '\x01';
          }
        }
        local_55 = '\x01';
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16);
        piVar15 = piVar12;
      } while (bVar3);
    }
  }
  else {
    if (local_44 == 0) {
      local_56 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
    }
    else {
      local_56 = (istreambuf_iterator<char,std::char_traits<char>_>)
                 numpunct<char>::thousands_sep(this_00);
    }
    local_2c = 0;
    local_28 = 0xf;
    local_3c[0] = (char ***)((uint)local_3c[0] & 0xffffff00);
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_3c,1,'\0');
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar14 = 0;
    bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
    uVar2 = extraout_var;
    uVar7 = local_28;
    ppppcVar8 = (char ****)local_3c[0];
    if (bVar3) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          uVar2 = extraout_var_00;
        }
        local_70 = (char ***)CONCAT31(uVar2,param_3[5]);
        uVar7 = _Find_elem<char,15>((char *)local_24,(char)param_3[5]);
        if (uVar7 < 10) {
          local_55 = '\x01';
          if (local_6c < iVar10) {
            if ((uVar7 != 0) || (local_6c != 0)) {
              *piVar12 = *(istreambuf_iterator<char,std::char_traits<char>_> *)
                          ("0123456789-+Ee" + uVar7);
              piVar12 = piVar12 + 1;
              local_6c = local_6c + 1;
              local_68 = piVar12;
            }
          }
          else {
            local_60 = local_60 + 1;
            if (uVar7 != 0) {
              local_57 = '\x01';
            }
          }
          ppppcVar8 = local_3c;
          if (0xf < local_28) {
            ppppcVar8 = (char ****)local_3c[0];
          }
          if (*(char *)((int)ppppcVar8 + iVar14) != '\x7f') {
            ppppcVar8 = local_3c;
            if (0xf < local_28) {
              ppppcVar8 = (char ****)local_3c[0];
            }
            *(char *)((int)ppppcVar8 + iVar14) = *(char *)((int)ppppcVar8 + iVar14) + '\x01';
          }
        }
        else {
          ppppcVar8 = local_3c;
          if (0xf < local_28) {
            ppppcVar8 = (char ****)local_3c[0];
          }
          if ((*(char *)((int)ppppcVar8 + iVar14) == '\0') ||
             (local_56 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
          if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
            iVar4 = param_3[5];
          }
          else {
            iVar4 = SUB41(local_70,0);
          }
          if (iVar4 != local_56) break;
          FUN_10038070(0);
          iVar14 = iVar14 + 1;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
        uVar2 = extraout_var_01;
      } while (bVar3);
      uVar7 = local_28;
      ppppcVar8 = (char ****)local_3c[0];
      if (iVar14 == 0) goto LAB_1012465c;
      ppppcVar11 = local_3c;
      if (0xf < local_28) {
        ppppcVar11 = (char ****)local_3c[0];
      }
      if ('\0' < *(char *)((int)ppppcVar11 + iVar14)) {
        iVar14 = iVar14 + 1;
        goto LAB_1012465c;
      }
LAB_101246aa:
      local_58 = '\x01';
    }
    else {
LAB_1012465c:
      while ((iVar14 != 0 &&
             (local_56 = *local_64,
             local_56 != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f))) {
        iVar14 = iVar14 + -1;
        if (iVar14 != 0) {
          ppppcVar11 = local_3c;
          if (0xf < uVar7) {
            ppppcVar11 = ppppcVar8;
          }
          if (local_56 !=
              *(istreambuf_iterator<char,std::char_traits<char>_> *)((int)ppppcVar11 + iVar14))
          goto LAB_101246aa;
        }
        if (iVar14 == 0) {
          ppppcVar11 = local_3c;
          if (0xf < uVar7) {
            ppppcVar11 = ppppcVar8;
          }
          if ((char)local_56 < *(char *)ppppcVar11) goto LAB_101246aa;
        }
        if ('\0' < (char)local_64[1]) {
          local_64 = local_64 + 1;
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar16 = local_5c;
    piVar15 = local_68;
    if (0xf < uVar7) {
      local_64 = (istreambuf_iterator<char,std::char_traits<char>_> *)(uVar7 + 1);
      local_70 = (char ***)ppppcVar8;
      if ((istreambuf_iterator<char,std::char_traits<char>_> *)0xfff < local_64) {
        _Adjust_manually_vector_aligned(&local_70,(uint *)&local_64);
      }
      FUN_1013dba5(local_70,local_64);
      piVar16 = local_5c;
      piVar15 = local_68;
    }
  }
  local_68 = piVar15;
  bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16);
  if (bVar3) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar4 = param_3[5];
    iVar5 = (istreambuf_iterator<char,std::char_traits<char>_>)
            numpunct<char>::decimal_point(this_00);
    if (iVar4 == iVar5) {
      plVar9 = _localeconv();
      *piVar12 = *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar9->decimal_point;
      piVar12 = piVar12 + 1;
      local_68 = piVar12;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    }
  }
  if ((*in_stack_00000018 != 1000000000) && (local_6c == 0)) {
    bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16);
    iVar14 = local_60;
    if (bVar3) {
      do {
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        }
        piVar12 = local_68;
        if (param_3[5] != local_24[0]) break;
        local_55 = '\x01';
        iVar14 = iVar14 + -1;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
        bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16);
        piVar12 = local_68;
      } while (bVar3);
    }
    local_60 = iVar14;
    if (local_60 < 0) {
      *piVar12 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar12 = piVar12 + 1;
      local_60 = local_60 + 1;
    }
  }
  while (bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16), bVar3) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar7 = _Find_elem<char,15>((char *)local_24,(char)param_3[5]);
    if (9 < uVar7) break;
    if (local_6c < iVar10) {
      *piVar12 = *(istreambuf_iterator<char,std::char_traits<char>_> *)("0123456789-+Ee" + uVar7);
      piVar12 = piVar12 + 1;
      local_6c = local_6c + 1;
    }
    else if (uVar7 != 0) {
      local_57 = '\x01';
    }
    local_55 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  piVar15 = piVar12;
  if (local_57 != '\0') {
    while (piVar15 = piVar15 + -1, piVar15 != piVar13) {
      plVar9 = _localeconv();
      iVar4 = *piVar15;
      if (iVar4 != *(istreambuf_iterator<char,std::char_traits<char>_> *)plVar9->decimal_point) {
        if (iVar4 != (istreambuf_iterator<char,std::char_traits<char>_>)0x39) {
          *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)((char)iVar4 + '\x01');
          piVar16 = local_5c;
          if (piVar15 != piVar13) goto LAB_101248c4;
          break;
        }
        *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      }
    }
    local_60 = local_60 + 1;
    *piVar15 = (istreambuf_iterator<char,std::char_traits<char>_>)0x31;
    piVar16 = local_5c;
  }
LAB_101248c4:
  piVar13 = piVar12;
  if ((local_55 == '\0') ||
     (bVar3 = operator!=<char,std::char_traits<char>_>(param_3,piVar16), !bVar3)) {
LAB_10124a09:
    if ((local_58 != '\0') || (local_55 == '\0')) {
      piVar13 = param_2;
    }
    *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
    FUN_10125c94();
LAB_10124a24:
    iVar10 = FUN_1013ecd2();
    return iVar10;
  }
  if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
  }
  iVar4 = param_3[5];
  if (iVar4 != local_17) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      iVar4 = param_3[5];
    }
    if (iVar4 != local_18) goto LAB_10124a09;
  }
  *piVar12 = (istreambuf_iterator<char,std::char_traits<char>_>)0x65;
  piVar13 = piVar12 + 1;
  istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  local_55 = '\0';
  iVar10 = 0;
  bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
  if (bVar3) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar4 = param_3[5];
    if (iVar4 == local_19) {
      *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar4 = param_3[5];
      }
      if (iVar4 != local_1a) goto LAB_10124968;
      *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    piVar13 = piVar12 + 2;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_10124968:
  bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
  if (bVar3) {
    do {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      if (param_3[5] != local_24[0]) {
        if (local_55 == '\0') goto LAB_101249b9;
        break;
      }
      local_55 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
    } while (bVar3);
    *piVar13 = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
    piVar13 = piVar13 + 1;
  }
LAB_101249b9:
  do {
    bVar3 = operator!=<char,std::char_traits<char>_>(param_3,local_5c);
    if (!bVar3) goto LAB_10124a09;
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    uVar7 = _Find_elem<char,15>((char *)local_24,(char)param_3[5]);
    if (9 < uVar7) goto LAB_10124a09;
    if (iVar10 < 8) {
      *piVar13 = *(istreambuf_iterator<char,std::char_traits<char>_> *)("0123456789-+Ee" + uVar7);
      piVar13 = piVar13 + 1;
      iVar10 = iVar10 + 1;
    }
    local_55 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  } while( true );
}

