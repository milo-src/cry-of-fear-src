// rea decompile_all
// name: Getmfld
// address: 0x1012fe37
// body: available
// range: 0x1012fe37-0x10130956 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Getmfld(class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > &,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > &,bool,class std::ios_base &,unsigned short
   (&)[12])const 
    private: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getmfld(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,bool,class std::ios_base &,wchar_t (&)[12])const 
   
   Library: Visual Studio 2019 Release */

void Getmfld(undefined4 *param_1,int param_2,undefined4 param_3,char param_4,uint param_5,
            undefined4 param_6)

{
  byte bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  ushort uVar6;
  short sVar7;
  int *piVar8;
  byte ****ppppbVar9;
  short ****ppppsVar10;
  uint uVar11;
  short ****ppppsVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint local_b4;
  char local_a0 [4];
  int *local_9c;
  undefined4 local_98;
  locale local_94 [4];
  uint local_90;
  uint local_8c;
  uint local_88;
  short ***local_84;
  int local_80;
  undefined4 *local_7c;
  short ***local_78;
  uint local_74;
  byte ***local_70;
  undefined4 local_6c;
  uint local_68;
  int *local_64;
  char local_5f;
  char local_5e;
  char local_5d;
  undefined4 local_5c;
  uint local_4c;
  uint local_48;
  byte ***local_44 [4];
  int local_34;
  uint local_30;
  short ***local_2c [4];
  int local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xa8;
  local_8 = 0x1012fe46;
  local_68 = 0;
  local_7c = param_1;
  local_6c = param_3;
  local_98 = param_6;
  local_8c = param_5;
  std::locale::locale(local_94,*(locale **)(param_5 + 0x30));
  if (param_4 == '\0') {
    local_8 = 2;
    piVar8 = (int *)FUN_101296a6(local_94);
  }
  else {
    local_8 = 1;
    piVar8 = (int *)FUN_10129611(local_94);
  }
  local_64 = piVar8;
  FUN_100307e0();
  local_4c = 0;
  local_5f = '\0';
  local_5d = '\0';
  local_48 = 7;
  local_5c = (short ****)((uint)local_5c._2_2_ << 0x10);
  local_8 = 3;
  pcVar2 = *(code **)(*piVar8 + 0x2c);
  guard_check_icall(local_a0);
  (*pcVar2)();
  local_7c[4] = 0;
  local_7c[5] = 0xf;
  *(undefined1 *)local_7c = 0;
  uVar14 = 1;
  local_74 = 1;
  local_68 = 1;
  std::locale::locale(local_94,*(locale **)(local_8c + 0x30));
  local_8._0_1_ = 4;
  piVar8 = (int *)FUN_101290d4(local_94);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_9c = piVar8;
  FUN_100307e0();
  widen("0123456789-","0123456789-+Ee",local_98);
  local_88 = 0;
  do {
    piVar4 = local_64;
    if (3 < local_88) {
      if (local_4c < 2) goto LAB_101308f1;
      ppppsVar12 = (short ****)&local_5c;
      if (7 < local_48) {
        ppppsVar12 = local_5c;
      }
      goto LAB_1013087e;
    }
    cVar5 = local_a0[local_88];
    if (cVar5 == ' ') {
LAB_101307c7:
      if (local_88 != 3) {
        local_5e = '\0';
        cVar5 = operator!=<>(param_2,local_6c);
        uVar3 = local_6c;
        while (cVar5 != '\0') {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          pcVar2 = *(code **)(*piVar8 + 0x10);
          guard_check_icall(0x48,*(undefined2 *)(param_2 + 6));
          cVar5 = (*pcVar2)();
          uVar14 = local_74;
          if (cVar5 == '\0') break;
          local_5e = '\x01';
          Inc();
          cVar5 = operator!=<>(param_2,uVar3);
          uVar14 = local_74;
          piVar8 = local_9c;
        }
        if ((local_a0[local_88] == ' ') && (local_5e == '\0')) {
          local_5d = '\x01';
        }
      }
      goto LAB_1012ffb5;
    }
    if (cVar5 == '$') {
      pcVar2 = *(code **)(*local_64 + 0x18);
      guard_check_icall(local_2c);
      (*pcVar2)();
      uVar3 = local_6c;
      uVar14 = uVar14 | 0x80;
      local_8 = CONCAT31(local_8._1_3_,5);
      local_74 = uVar14;
      local_68 = uVar14;
      if (((*(byte *)(local_8c + 0x14) & 8) == 0) &&
         (cVar5 = operator!=<>(param_2,local_6c), cVar5 != '\0')) {
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        ppppsVar12 = local_2c;
        if (7 < local_18) {
          ppppsVar12 = (short ****)local_2c[0];
        }
        if (*(short *)(param_2 + 6) == *(short *)ppppsVar12) goto LAB_101306ec;
LAB_10130728:
        ppppsVar12 = local_2c;
        if (7 < local_18) {
          ppppsVar12 = (short ****)local_2c[0];
        }
        local_1c = 0;
        *(short *)ppppsVar12 = 0;
      }
      else {
LAB_101306ec:
        if ((local_88 == 3) && (local_4c < 2)) {
          cVar5 = equal(uVar3);
          if (cVar5 == '\0') {
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            ppppsVar12 = local_2c;
            if (7 < local_18) {
              ppppsVar12 = (short ****)local_2c[0];
            }
            if (*(short *)(param_2 + 6) == *(short *)ppppsVar12) goto LAB_1013073d;
          }
          goto LAB_10130728;
        }
      }
LAB_1013073d:
      ppppsVar12 = local_2c;
      if (7 < local_18) {
        ppppsVar12 = (short ****)local_2c[0];
      }
      cVar5 = operator!=<>(param_2,local_6c);
      uVar3 = local_6c;
      while (cVar5 != '\0') {
        ppppsVar10 = local_2c;
        if (7 < local_18) {
          ppppsVar10 = (short ****)local_2c[0];
        }
        uVar14 = local_74;
        if (ppppsVar12 == (short ****)((int)ppppsVar10 + local_1c * 2)) break;
        if (*(char *)(param_2 + 4) == '\0') {
          Peek();
        }
        uVar14 = local_74;
        if (*(short *)(param_2 + 6) != *(short *)ppppsVar12) break;
        ppppsVar12 = (short ****)((int)ppppsVar12 + 2);
        Inc();
        cVar5 = operator!=<>(param_2,uVar3);
        uVar14 = local_74;
      }
      ppppsVar10 = local_2c;
      if (7 < local_18) {
        ppppsVar10 = (short ****)local_2c[0];
      }
      if (ppppsVar12 != (short ****)((int)ppppsVar10 + local_1c * 2)) {
        local_5d = '\x01';
      }
      local_8 = CONCAT31(local_8._1_3_,3);
LAB_101304bf:
      FID_conflict__Tidy_deallocate();
    }
    else if (cVar5 == '+') {
      cVar5 = operator!=<>(param_2,local_6c);
      if (cVar5 != '\0') {
        pcVar2 = *(code **)(*local_64 + 0x1c);
        guard_check_icall(local_2c);
        (*pcVar2)();
        uVar11 = uVar14 | 0x102;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_68 = uVar11;
        if (local_1c == 0) {
LAB_10130440:
          local_5e = '\0';
        }
        else {
          pcVar2 = *(code **)(*local_64 + 0x1c);
          guard_check_icall(local_44);
          (*pcVar2)();
          uVar11 = uVar14 | 0x306;
          local_8 = 7;
          local_68 = uVar11;
          ppppbVar9 = local_44;
          if (7 < local_30) {
            ppppbVar9 = (byte ****)local_44[0];
          }
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          local_5e = '\x01';
          if (*(short *)ppppbVar9 != *(short *)(param_2 + 6)) goto LAB_10130440;
        }
        if ((uVar11 & 4) != 0) {
          uVar11 = uVar11 & 0xfffffffb;
          local_68 = uVar11;
          FID_conflict__Tidy_deallocate();
        }
        local_8 = 3;
        if ((uVar11 & 2) != 0) {
          uVar11 = uVar11 & 0xfffffffd;
          local_68 = uVar11;
          FID_conflict__Tidy_deallocate();
        }
        if (local_5e == '\0') {
          pcVar2 = *(code **)(*local_64 + 0x20);
          guard_check_icall(local_2c);
          (*pcVar2)();
          uVar14 = uVar11 | 0x808;
          local_8 = CONCAT31(local_8._1_3_,8);
          local_68 = uVar14;
          if (local_1c == 0) {
LAB_1013054a:
            local_5e = '\0';
          }
          else {
            pcVar2 = *(code **)(*local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            uVar14 = uVar11 | 0x1818;
            local_8 = 9;
            local_68 = uVar14;
            ppppbVar9 = local_44;
            if (7 < local_30) {
              ppppbVar9 = (byte ****)local_44[0];
            }
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            local_5e = '\x01';
            if (*(short *)ppppbVar9 != *(short *)(param_2 + 6)) goto LAB_1013054a;
          }
          if ((uVar14 & 0x10) != 0) {
            uVar14 = uVar14 & 0xffffffef;
            local_68 = uVar14;
            FID_conflict__Tidy_deallocate();
          }
          local_8 = 3;
          if ((uVar14 & 8) != 0) {
            uVar14 = uVar14 & 0xfffffff7;
            local_68 = uVar14;
            FID_conflict__Tidy_deallocate();
          }
          if (local_5e != '\0') {
            Inc();
            pcVar2 = *(code **)(*local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            local_90 = local_90 & 0xffffff00;
            uVar14 = uVar14 | 0x2000;
            local_74 = uVar14;
            local_68 = uVar14;
            FID_conflict__Move_assign(local_44,local_90);
            FID_conflict__Tidy_deallocate();
            local_5f = '\x01';
            goto LAB_1012ffb5;
          }
          pcVar2 = *(code **)(*local_64 + 0x1c);
          guard_check_icall(local_2c);
          (*pcVar2)();
          local_68 = uVar14 | 0x4020;
          local_8 = CONCAT31(local_8._1_3_,10);
          local_74 = local_68;
          if (local_1c == 0) {
LAB_10130638:
            local_5e = '\0';
          }
          else {
            pcVar2 = *(code **)(*local_64 + 0x20);
            guard_check_icall(local_44);
            (*pcVar2)();
            local_68 = uVar14 | 0xc060;
            local_5e = '\x01';
            local_74 = local_68;
            if (local_34 != 0) goto LAB_10130638;
          }
          uVar14 = local_68;
          local_74 = local_68;
          if ((local_68 & 0x40) != 0) {
            uVar14 = local_68 & 0xffffffbf;
            local_74 = uVar14;
            local_68 = uVar14;
            FID_conflict__Tidy_deallocate();
          }
          local_8 = 3;
          if ((uVar14 & 0x20) != 0) {
            uVar14 = uVar14 & 0xffffffdf;
            local_74 = uVar14;
            local_68 = uVar14;
            FID_conflict__Tidy_deallocate();
          }
          if (local_5e != '\0') {
            local_5f = '\x01';
          }
          goto LAB_1012ffb5;
        }
        Inc();
        pcVar2 = *(code **)(*local_64 + 0x1c);
        guard_check_icall(local_44);
        (*pcVar2)();
        local_b4 = local_b4 & 0xffffff00;
        uVar14 = uVar11 | 0x400;
        local_74 = uVar14;
        local_68 = uVar14;
        FID_conflict__Move_assign(local_44,local_b4);
        goto LAB_101304bf;
      }
    }
    else {
      if (cVar5 != 'v') {
        if (cVar5 == 'x') goto LAB_101307c7;
        goto LAB_1012ffb5;
      }
      local_80 = 0;
      local_84 = (short ***)frac_digits();
      pcVar2 = *(code **)(*piVar4 + 0x14);
      guard_check_icall(local_44);
      (*pcVar2)();
      uVar14 = uVar14 | 0x10000;
      local_8._0_1_ = 0xb;
      local_74 = uVar14;
      local_68 = uVar14;
      if (local_34 == 0) {
LAB_10130244:
        uVar3 = local_6c;
        cVar5 = operator!=<>(param_2,local_6c);
        while (cVar5 != '\0') {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          uVar11 = _Find_elem<>(local_98,*(undefined2 *)(param_2 + 6));
          uVar14 = local_74;
          if (9 < uVar11) break;
          FUN_10038070("0123456789-"[uVar11]);
          Inc();
          cVar5 = operator!=<>(param_2,uVar3);
          uVar14 = local_74;
        }
LAB_101302ab:
        sVar7 = decimal_point();
        cVar5 = operator!=<>(param_2,local_6c);
        ppppsVar12 = (short ****)local_84;
        if ((cVar5 != '\0') && (sVar7 != 0)) {
          if (*(char *)(param_2 + 4) == '\0') {
            Peek();
          }
          ppppsVar12 = (short ****)local_84;
          if (*(short *)(param_2 + 6) == sVar7) {
            Inc();
            cVar5 = operator!=<>(param_2,local_6c);
            ppppsVar12 = (short ****)local_84;
            while (cVar5 != '\0') {
              if ((int)ppppsVar12 <= local_80) goto LAB_10130374;
              if (*(char *)(param_2 + 4) == '\0') {
                Peek();
              }
              uVar11 = _Find_elem<>(local_98,*(undefined2 *)(param_2 + 6));
              if (9 < uVar11) goto LAB_10130368;
              FUN_10038070("0123456789-"[uVar11]);
              local_80 = local_80 + 1;
              Inc();
              cVar5 = operator!=<>(param_2,local_6c);
            }
            if (local_80 < (int)ppppsVar12) {
LAB_10130368:
              local_5d = '\x01';
            }
          }
        }
LAB_10130374:
        if (local_7c[4] == 0) {
          local_5d = '\x01';
        }
        else if (local_80 < (int)ppppsVar12) {
          iVar15 = (int)ppppsVar12 - local_80;
          do {
            FUN_10038070(0x30);
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
      }
      else {
        uVar6 = thousands_sep();
        local_78 = (short ***)(uint)uVar6;
        if (uVar6 == 0) goto LAB_10130244;
        ppppbVar9 = local_44;
        if (0xf < local_30) {
          ppppbVar9 = (byte ****)local_44[0];
        }
        if (0x7e < *(byte *)ppppbVar9) goto LAB_10130244;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = (short ***)((uint)local_2c[0] & 0xffffff00);
        local_8._0_1_ = 0xc;
        FUN_10038070(0);
        iVar15 = 0;
        cVar5 = operator!=<>(param_2,local_6c);
        ppppsVar12 = (short ****)local_2c[0];
        if (cVar5 != '\0') {
          local_70 = (byte ***)local_2c[0];
          ppppsVar12 = (short ****)local_2c[0];
          do {
            if (*(char *)(param_2 + 4) == '\0') {
              Peek();
            }
            uVar14 = _Find_elem<>(local_98,*(undefined2 *)(param_2 + 6));
            if (uVar14 < 10) {
              FUN_10038070("0123456789-"[uVar14]);
              ppppsVar10 = local_2c;
              if (0xf < local_18) {
                ppppsVar10 = ppppsVar12;
              }
              if (*(char *)((int)ppppsVar10 + iVar15) != '\x7f') {
                ppppsVar10 = local_2c;
                if (0xf < local_18) {
                  ppppsVar10 = ppppsVar12;
                }
                *(char *)((int)ppppsVar10 + iVar15) = *(char *)((int)ppppsVar10 + iVar15) + '\x01';
                goto LAB_1013010c;
              }
            }
            else {
              ppppsVar10 = local_2c;
              if (0xf < local_18) {
                ppppsVar10 = ppppsVar12;
              }
              if (*(char *)((int)ppppsVar10 + iVar15) == '\0') break;
              sVar7 = *(short *)(param_2 + 6);
              if (*(char *)(param_2 + 4) == '\0') {
                Peek();
                sVar7 = *(short *)(param_2 + 6);
              }
              if (sVar7 != (short)local_78) break;
              FUN_10038070(0);
              iVar15 = iVar15 + 1;
LAB_1013010c:
              local_70 = (byte ***)local_2c[0];
              ppppsVar12 = (short ****)local_2c[0];
            }
            Inc();
            cVar5 = operator!=<>(param_2,local_6c);
          } while (cVar5 != '\0');
          ppppsVar12 = (short ****)local_70;
          uVar14 = local_74;
          if (iVar15 != 0) {
            ppppsVar10 = local_2c;
            if (0xf < local_18) {
              ppppsVar10 = (short ****)local_70;
            }
            if (*(char *)((int)ppppsVar10 + iVar15) < '\x01') {
              local_5d = '\x01';
            }
            else {
              iVar15 = iVar15 + 1;
            }
          }
        }
        local_70 = (byte ***)local_44;
        if (0xf < local_30) {
          local_70 = local_44[0];
        }
        if (local_5d == '\0') {
          while ((iVar15 != 0 && (bVar1 = *(byte *)local_70, bVar1 != 0x7f))) {
            iVar15 = iVar15 + -1;
            if (iVar15 != 0) {
              ppppsVar10 = local_2c;
              if (0xf < local_18) {
                ppppsVar10 = ppppsVar12;
              }
              if (bVar1 == *(byte *)((int)ppppsVar10 + iVar15)) goto LAB_1013019b;
LAB_101301bd:
              local_5d = '\x01';
              goto LAB_101301c1;
            }
LAB_1013019b:
            if (iVar15 == 0) {
              ppppsVar10 = local_2c;
              if (0xf < local_18) {
                ppppsVar10 = ppppsVar12;
              }
              if ((char)bVar1 < *(char *)ppppsVar10) goto LAB_101301bd;
            }
            if ('\0' < (char)*(byte *)((int)local_70 + 1)) {
              local_70 = (byte ***)((int)local_70 + 1);
            }
          }
          local_8._0_1_ = 0xb;
          if (0xf < local_18) {
            local_70 = (byte ***)(local_18 + 1);
            local_78 = (short ***)ppppsVar12;
            if ((byte ****)0xfff < local_70) {
              std::_Adjust_manually_vector_aligned(&local_78,(uint *)&local_70);
            }
            FUN_1013dba5(local_78,local_70);
          }
          goto LAB_101302ab;
        }
LAB_101301c1:
        if (0xf < local_18) {
          local_78 = (short ***)(local_18 + 1);
          local_84 = (short ***)ppppsVar12;
          if ((short ****)0xfff < local_78) {
            std::_Adjust_manually_vector_aligned(&local_84,(uint *)&local_78);
          }
          FUN_1013dba5(local_84,local_78);
        }
      }
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_10125c94();
    }
LAB_1012ffb5:
    local_88 = local_88 + 1;
    piVar8 = local_9c;
  } while (local_5d == '\0');
LAB_101308db:
  puVar13 = local_7c;
  if (0xf < (uint)local_7c[5]) {
    puVar13 = (undefined4 *)*local_7c;
  }
  local_7c[4] = 0;
  *(undefined1 *)puVar13 = 0;
LAB_10130907:
  if (7 < local_48) {
    local_8c = local_48 * 2 + 2;
    local_78 = (short ***)local_5c;
    if (0xfff < local_8c) {
      std::_Adjust_manually_vector_aligned(&local_78,&local_8c);
    }
    FUN_1013dba5(local_78,local_8c);
  }
  FUN_1013ecd2();
  return;
LAB_1013087e:
  ppppsVar12 = (short ****)((int)ppppsVar12 + 2);
  ppppsVar10 = (short ****)&local_5c;
  if (7 < local_48) {
    ppppsVar10 = local_5c;
  }
  if ((ppppsVar12 == (short ****)((int)ppppsVar10 + local_4c * 2)) ||
     (cVar5 = operator!=<>(param_2,local_6c), cVar5 == '\0')) goto LAB_101308c8;
  if (*(char *)(param_2 + 4) == '\0') {
    Peek();
  }
  if (*(short *)(param_2 + 6) != *(short *)ppppsVar12) goto LAB_101308c8;
  Inc();
  goto LAB_1013087e;
LAB_101308c8:
  ppppsVar10 = (short ****)&local_5c;
  if (7 < local_48) {
    ppppsVar10 = local_5c;
  }
  if (ppppsVar12 == (short ****)((int)ppppsVar10 + local_4c * 2)) {
LAB_101308f1:
    if (local_5f != '\0') {
      FUN_10126956(0,1,0x2d);
    }
    goto LAB_10130907;
  }
  goto LAB_101308db;
}

