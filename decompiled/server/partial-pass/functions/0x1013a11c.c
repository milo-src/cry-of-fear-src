// rea decompile_all
// name: std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getmfld
// address: 0x1013a11c
// body: available
// range: 0x1013a11c-0x1013abfd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char>
   > >::_Getmfld(class std::istreambuf_iterator<char,struct std::char_traits<char> > &,class
   std::istreambuf_iterator<char,struct std::char_traits<char> > &,bool,class std::ios_base &,char
   (&)[12])const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getmfld
          (money_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          istreambuf_iterator<char,std::char_traits<char>_> *param_1,
          istreambuf_iterator<char,std::char_traits<char>_> *param_2,bool param_3,ios_base *param_4,
          char *param_5)

{
  char cVar1;
  code *pcVar2;
  undefined3 uVar3;
  istreambuf_iterator<char,std::char_traits<char>_> iVar4;
  bool bVar5;
  _Mpunct<char> *p_Var6;
  ctype<char> *pcVar7;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar8;
  uint uVar9;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar10;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar11;
  uint uVar12;
  int iVar13;
  undefined3 in_stack_0000000d;
  char *in_stack_00000018;
  uint local_c0;
  locale local_a4 [4];
  uint local_a0;
  char local_9c [4];
  locale local_98 [4];
  ctype<char> *local_94;
  char *local_90;
  char *local_8c;
  uint local_88;
  istreambuf_iterator<char,std::char_traits<char>_> *local_84;
  int local_80;
  istreambuf_iterator<char,std::char_traits<char>_> *local_7c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_78;
  istreambuf_iterator<char,std::char_traits<char>_> *local_74;
  uint local_70;
  istreambuf_iterator<char,std::char_traits<char>_> *local_6c;
  uint local_68;
  _Mpunct<char> *local_64;
  char local_5f;
  istreambuf_iterator<char,std::char_traits<char>_> local_5e;
  char local_5d;
  istreambuf_iterator<char,std::char_traits<char>_> *local_5c [4];
  uint local_4c;
  uint local_48;
  istreambuf_iterator<char,std::char_traits<char>_> *local_44 [4];
  int local_34;
  uint local_30;
  istreambuf_iterator<char,std::char_traits<char>_> *local_2c [4];
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xb4;
  local_8 = 0x1013a12b;
  local_68 = 0;
  local_7c = param_1;
  local_6c = _param_3;
  local_90 = in_stack_00000018;
  local_8c = param_5;
  locale::locale(local_98,*(locale **)(param_5 + 0x30));
  if ((char)param_4 == '\0') {
    local_8 = 2;
    p_Var6 = (_Mpunct<char> *)FUN_101393ee(local_98);
  }
  else {
    local_8 = 1;
    p_Var6 = (_Mpunct<char> *)FUN_10139359(local_98);
  }
  local_64 = p_Var6;
  FUN_100307e0();
  local_48 = 0xf;
  local_5d = '\0';
  local_5f = '\0';
  local_4c = 0;
  local_5c[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                ((uint)local_5c[0] & 0xffffff00);
  local_8 = 3;
  pcVar2 = *(code **)(*(int *)p_Var6 + 0x2c);
  guard_check_icall(local_9c);
  (*pcVar2)();
  *(undefined4 *)(local_7c + 0x10) = 0;
  *(undefined4 *)(local_7c + 0x14) = 0xf;
  *local_7c = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  uVar12 = 1;
  local_70 = 1;
  local_68 = 1;
  locale::locale(local_a4,*(locale **)(local_8c + 0x30));
  local_8._0_1_ = 4;
  pcVar7 = (ctype<char> *)FUN_1002f750(local_a4);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_94 = pcVar7;
  FUN_100307e0();
  ctype<char>::widen(pcVar7,"0123456789-","0123456789abcdefghijklmnopqrstuvwxyz",local_90);
  local_88 = 0;
  do {
    p_Var6 = local_64;
    piVar11 = local_6c;
    if (3 < local_88) {
      if (local_4c < 2) goto LAB_1013ab9e;
      piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
      if (0xf < local_48) {
        piVar11 = local_5c[0];
      }
      goto LAB_1013ab31;
    }
    cVar1 = local_9c[local_88];
    if (cVar1 == ' ') {
LAB_1013aa93:
      if (local_88 != 3) {
        local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
        bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
        pcVar7 = local_94;
        if (bVar5) {
          do {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            uVar12 = local_70;
            if ((*(byte *)(*(int *)(pcVar7 + 0xc) + (uint)(byte)param_2[5] * 2) & 0x48) == 0) break;
            local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x1;
            istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
            bVar5 = operator!=<char,std::char_traits<char>_>(param_2,piVar11);
            uVar12 = local_70;
          } while (bVar5);
        }
        if ((local_9c[local_88] == ' ') &&
           (local_5e == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) {
          local_5d = '\x01';
        }
      }
      goto LAB_1013a295;
    }
    if (cVar1 == '$') {
      pcVar2 = *(code **)(*(int *)local_64 + 0x18);
      guard_check_icall(local_2c);
      (*pcVar2)();
      piVar11 = local_6c;
      uVar12 = uVar12 | 0x80;
      local_8 = CONCAT31(local_8._1_3_,5);
      local_70 = uVar12;
      local_68 = uVar12;
      if (((local_8c[0x14] & 8U) == 0) &&
         (bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c), bVar5)) {
        if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
        }
        piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
        if (0xf < local_18) {
          piVar8 = local_2c[0];
        }
        if (param_2[5] == *piVar8) goto LAB_1013a9cb;
LAB_1013aa05:
        FUN_1013842c(0);
      }
      else {
LAB_1013a9cb:
        if ((local_88 == 3) && (local_4c < 2)) {
          bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                            (param_2,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)
                                     piVar11);
          if (!bVar5) {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
            if (0xf < local_18) {
              piVar11 = local_2c[0];
            }
            if (param_2[5] == *piVar11) goto LAB_1013aa0f;
          }
          goto LAB_1013aa05;
        }
      }
LAB_1013aa0f:
      piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
      if (0xf < local_18) {
        piVar11 = local_2c[0];
      }
      bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
      piVar8 = local_6c;
      if (bVar5) {
        do {
          piVar10 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
          if (0xf < local_18) {
            piVar10 = local_2c[0];
          }
          uVar12 = local_70;
          if (piVar11 == piVar10 + local_1c) break;
          if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
          }
          uVar12 = local_70;
          if (param_2[5] != *piVar11) break;
          piVar11 = piVar11 + 1;
          istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
          bVar5 = operator!=<char,std::char_traits<char>_>(param_2,piVar8);
          uVar12 = local_70;
        } while (bVar5);
      }
      piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
      if (0xf < local_18) {
        piVar8 = local_2c[0];
      }
      if (piVar11 != piVar8 + local_1c) {
        local_5d = '\x01';
      }
      local_8 = CONCAT31(local_8._1_3_,3);
LAB_1013a4c3:
      FUN_10125c94();
    }
    else {
      if (cVar1 == '+') {
        bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
        if (!bVar5) goto LAB_1013a295;
        pcVar2 = *(code **)(*(int *)local_64 + 0x1c);
        guard_check_icall(local_2c);
        (*pcVar2)();
        uVar9 = uVar12 | 0x102;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_68 = uVar9;
        if (local_1c == 0) {
LAB_1013a72b:
          local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
        }
        else {
          pcVar2 = *(code **)(*(int *)local_64 + 0x1c);
          guard_check_icall(local_44);
          (*pcVar2)();
          uVar9 = uVar12 | 0x306;
          local_8 = 7;
          local_68 = uVar9;
          piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
          if (0xf < local_30) {
            piVar11 = local_44[0];
          }
          if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
          }
          local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x1;
          if (*piVar11 != param_2[5]) goto LAB_1013a72b;
        }
        if ((uVar9 & 4) != 0) {
          uVar9 = uVar9 & 0xfffffffb;
          local_68 = uVar9;
          FUN_10125c94();
        }
        local_8 = 3;
        if ((uVar9 & 2) != 0) {
          uVar9 = uVar9 & 0xfffffffd;
          local_68 = uVar9;
          FUN_10125c94();
        }
        if (local_5e == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          pcVar2 = *(code **)(*(int *)local_64 + 0x20);
          guard_check_icall(local_2c);
          (*pcVar2)();
          uVar12 = uVar9 | 0x808;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_68 = uVar12;
          if (local_1c == 0) {
LAB_1013a82b:
            local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
          }
          else {
            pcVar2 = *(code **)(*(int *)local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            uVar12 = uVar9 | 0x1818;
            local_8 = 9;
            local_68 = uVar12;
            piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
            if (0xf < local_30) {
              piVar11 = local_44[0];
            }
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x1;
            if (*piVar11 != param_2[5]) goto LAB_1013a82b;
          }
          if ((uVar12 & 0x10) != 0) {
            uVar12 = uVar12 & 0xffffffef;
            local_68 = uVar12;
            FUN_10125c94();
          }
          local_8 = 3;
          if ((uVar12 & 8) != 0) {
            uVar12 = uVar12 & 0xfffffff7;
            local_68 = uVar12;
            FUN_10125c94();
          }
          if (local_5e != (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
            pcVar2 = *(code **)(*(int *)local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            local_a0 = local_a0 & 0xffffff00;
            uVar12 = uVar12 | 0x2000;
            local_70 = uVar12;
            local_68 = uVar12;
            basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Move_assign
                      ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_5c,
                       local_44,local_a0);
            FUN_10125c94();
            local_5f = '\x01';
            goto LAB_1013a295;
          }
          pcVar2 = *(code **)(*(int *)local_64 + 0x1c);
          guard_check_icall(local_2c);
          (*pcVar2)();
          local_68 = uVar12 | 0x4020;
          local_8 = CONCAT31(local_8._1_3_,10);
          local_70 = local_68;
          if (local_1c == 0) {
LAB_1013a919:
            local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
          }
          else {
            pcVar2 = *(code **)(*(int *)local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            local_68 = uVar12 | 0xc060;
            local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)0x1;
            local_70 = local_68;
            if (local_34 != 0) goto LAB_1013a919;
          }
          uVar12 = local_68;
          local_70 = local_68;
          if ((local_68 & 0x40) != 0) {
            uVar12 = local_68 & 0xffffffbf;
            local_70 = uVar12;
            local_68 = uVar12;
            FUN_10125c94();
          }
          local_8 = 3;
          if ((uVar12 & 0x20) != 0) {
            uVar12 = uVar12 & 0xffffffdf;
            local_70 = uVar12;
            local_68 = uVar12;
            FUN_10125c94();
          }
          if (local_5e != (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
            local_5f = '\x01';
          }
          goto LAB_1013a295;
        }
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
        pcVar2 = *(code **)(*(int *)local_64 + 0x1c);
        guard_check_icall(local_44);
        (*pcVar2)();
        local_c0 = local_c0 & 0xffffff00;
        uVar12 = uVar9 | 0x400;
        local_70 = uVar12;
        local_68 = uVar12;
        basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Move_assign
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_5c,
                   local_44,local_c0);
        goto LAB_1013a4c3;
      }
      if (cVar1 == 'v') {
        local_80 = 0;
        local_84 = (istreambuf_iterator<char,std::char_traits<char>_> *)
                   _Mpunct<char>::frac_digits(local_64);
        pcVar2 = *(code **)(*(int *)p_Var6 + 0x14);
        guard_check_icall(local_44);
        (*pcVar2)();
        uVar12 = uVar12 | 0x10000;
        local_8._0_1_ = 0xb;
        local_70 = uVar12;
        local_68 = uVar12;
        if (local_34 == 0) {
LAB_1013a5d1:
          piVar11 = local_6c;
          bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
          if (bVar5) {
            do {
              if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
              }
              uVar9 = _Find_elem<char,12>(local_90,(char)param_2[5]);
              uVar12 = local_70;
              if (9 < uVar9) break;
              FUN_10038070("0123456789-"[uVar9]);
              istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
              bVar5 = operator!=<char,std::char_traits<char>_>(param_2,piVar11);
              uVar12 = local_70;
            } while (bVar5);
          }
LAB_1013a50b:
          local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)
                     _Mpunct<char>::decimal_point(local_64);
          bVar5 = operator!=<char,std::char_traits<char>_>(param_2,piVar11);
          piVar8 = local_84;
          if ((bVar5) && (local_5e != (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) {
            if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
            }
            piVar8 = local_84;
            if (param_2[5] == local_5e) {
              istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
              bVar5 = operator!=<char,std::char_traits<char>_>(param_2,piVar11);
              piVar8 = local_84;
              while (bVar5 != false) {
                if ((int)piVar8 <= local_80) goto LAB_1013a660;
                if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                  istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
                }
                uVar9 = _Find_elem<char,12>(local_90,(char)param_2[5]);
                if (9 < uVar9) goto LAB_1013a654;
                FUN_10038070("0123456789-"[uVar9]);
                local_80 = local_80 + 1;
                istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
                bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
              }
              if (local_80 < (int)piVar8) {
LAB_1013a654:
                local_5d = '\x01';
              }
            }
          }
LAB_1013a660:
          if (*(int *)(local_7c + 0x10) == 0) {
            local_5d = '\x01';
          }
          else if (local_80 < (int)piVar8) {
            iVar13 = (int)piVar8 - local_80;
            do {
              FUN_10038070(0x30);
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
        else {
          local_5e = (istreambuf_iterator<char,std::char_traits<char>_>)
                     _Mpunct<char>::thousands_sep(local_64);
          if (local_5e == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) goto LAB_1013a5d1;
          piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
          if (0xf < local_30) {
            piVar11 = local_44[0];
          }
          if (0x7e < (byte)*piVar11) goto LAB_1013a5d1;
          local_18 = 0xf;
          local_1c = 0;
          local_2c[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                        ((uint)local_2c[0] & 0xffffff00);
          local_8._0_1_ = 0xc;
          FUN_10038070(0);
          iVar13 = 0;
          bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
          if (bVar5) {
            local_74 = local_2c[0];
            piVar11 = local_2c[0];
            uVar3 = extraout_var;
            do {
              if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
                uVar3 = extraout_var_00;
              }
              local_78 = (istreambuf_iterator<char,std::char_traits<char>_> *)
                         CONCAT31(uVar3,param_2[5]);
              uVar12 = _Find_elem<char,12>(local_90,(char)param_2[5]);
              if (uVar12 < 10) {
                FUN_10038070("0123456789-"[uVar12]);
                piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                if (0xf < local_18) {
                  piVar8 = piVar11;
                }
                if (piVar8[iVar13] != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f) {
                  piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                  if (0xf < local_18) {
                    piVar8 = piVar11;
                  }
                  piVar8[iVar13] =
                       (istreambuf_iterator<char,std::char_traits<char>_>)
                       ((char)piVar8[iVar13] + '\x01');
                  goto LAB_1013a3e3;
                }
              }
              else {
                piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                if (0xf < local_18) {
                  piVar8 = piVar11;
                }
                if (piVar8[iVar13] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) break;
                if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
                  istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
                  iVar4 = param_2[5];
                }
                else {
                  iVar4 = SUB41(local_78,0);
                }
                if (iVar4 != local_5e) break;
                FUN_10038070(0);
                iVar13 = iVar13 + 1;
LAB_1013a3e3:
                local_74 = local_2c[0];
                piVar11 = local_2c[0];
              }
              istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
              bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c);
              uVar3 = extraout_var_01;
            } while (bVar5);
            uVar12 = local_70;
            if (iVar13 != 0) {
              piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
              if (0xf < local_18) {
                piVar11 = local_74;
              }
              if ((char)piVar11[iVar13] < '\x01') {
                local_5d = '\x01';
              }
              else {
                iVar13 = iVar13 + 1;
              }
            }
          }
          else {
            local_74 = local_2c[0];
          }
          piVar11 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_44;
          if (0xf < local_30) {
            piVar11 = local_44[0];
          }
          if (local_5d == '\0') {
            while ((iVar13 != 0 &&
                   (iVar4 = *piVar11,
                   iVar4 != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f))) {
              iVar13 = iVar13 + -1;
              if (iVar13 != 0) {
                piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                if (0xf < local_18) {
                  piVar8 = local_74;
                }
                if (iVar4 == piVar8[iVar13]) goto LAB_1013a464;
LAB_1013a481:
                local_5d = '\x01';
                goto LAB_1013a485;
              }
LAB_1013a464:
              if (iVar13 == 0) {
                piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_2c;
                if (0xf < local_18) {
                  piVar8 = local_74;
                }
                if ((char)iVar4 < (char)*piVar8) goto LAB_1013a481;
              }
              if ('\0' < (char)piVar11[1]) {
                piVar11 = piVar11 + 1;
              }
            }
            local_8._0_1_ = 0xb;
            piVar11 = local_6c;
            if (0xf < local_18) {
              local_78 = (istreambuf_iterator<char,std::char_traits<char>_> *)(local_18 + 1);
              if ((istreambuf_iterator<char,std::char_traits<char>_> *)0xfff < local_78) {
                _Adjust_manually_vector_aligned(&local_74,(uint *)&local_78);
              }
              FUN_1013dba5(local_74,local_78);
              piVar11 = local_6c;
            }
            goto LAB_1013a50b;
          }
LAB_1013a485:
          if (0xf < local_18) {
            local_78 = (istreambuf_iterator<char,std::char_traits<char>_> *)(local_18 + 1);
            local_84 = local_74;
            if ((istreambuf_iterator<char,std::char_traits<char>_> *)0xfff < local_78) {
              _Adjust_manually_vector_aligned(&local_84,(uint *)&local_78);
            }
            FUN_1013dba5(local_84,local_78);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        goto LAB_1013a4c3;
      }
      if (cVar1 == 'x') goto LAB_1013aa93;
    }
LAB_1013a295:
    local_88 = local_88 + 1;
  } while (local_5d == '\0');
LAB_1013ab88:
  piVar11 = local_7c;
  if (0xf < *(uint *)(local_7c + 0x14)) {
    piVar11 = *(istreambuf_iterator<char,std::char_traits<char>_> **)local_7c;
  }
  *(undefined4 *)(local_7c + 0x10) = 0;
  *piVar11 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
LAB_1013abb4:
  if (0xf < local_48) {
    local_8c = (char *)(local_48 + 1);
    local_78 = local_5c[0];
    if ((char *)0xfff < local_8c) {
      _Adjust_manually_vector_aligned(&local_78,(uint *)&local_8c);
    }
    FUN_1013dba5(local_78,local_8c);
  }
  FUN_1013ecd2();
  return;
LAB_1013ab31:
  piVar11 = piVar11 + 1;
  piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
  if (0xf < local_48) {
    piVar8 = local_5c[0];
  }
  if ((piVar11 == piVar8 + local_4c) ||
     (bVar5 = operator!=<char,std::char_traits<char>_>(param_2,local_6c), !bVar5))
  goto LAB_1013ab76;
  if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
    istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
  }
  if (param_2[5] != *piVar11) goto LAB_1013ab76;
  istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
  goto LAB_1013ab31;
LAB_1013ab76:
  piVar8 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_5c;
  if (0xf < local_48) {
    piVar8 = local_5c[0];
  }
  if (piVar11 == piVar8 + local_4c) {
LAB_1013ab9e:
    if (local_5f != '\0') {
      FUN_10126956(0,1,0x2d);
    }
    goto LAB_1013abb4;
  }
  goto LAB_1013ab88;
}

