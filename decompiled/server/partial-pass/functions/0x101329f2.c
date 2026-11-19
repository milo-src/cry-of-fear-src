// rea decompile_all
// name: Putmfld
// address: 0x101329f2
// body: available
// range: 0x101329f2-0x10133022 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __thiscall std::money_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Putmfld(class std::ostreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,bool,class std::ios_base &,unsigned
   short,bool,class std::basic_string<unsigned short,struct std::char_traits<unsigned short>,class
   std::allocator<unsigned short> >,unsigned short)const 
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __thiscall
   std::money_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Putmfld(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,bool,class
   std::ios_base &,wchar_t,bool,class std::basic_string<wchar_t,struct
   std::char_traits<wchar_t>,class std::allocator<wchar_t> >,wchar_t)const 
   
   Library: Visual Studio 2019 Release */

void Putmfld(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,int param_5,
            ushort param_6,char param_7,undefined4 *param_8)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined4 uVar10;
  code *pcVar11;
  uint uVar12;
  int iVar13;
  char ****ppppcVar14;
  uint in_stack_00000030;
  uint in_stack_00000034;
  ushort in_stack_00000038;
  undefined1 local_f0 [8];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined1 local_c0 [8];
  undefined1 local_b8 [8];
  undefined1 local_b0 [8];
  undefined4 local_a8;
  locale local_a4 [4];
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined4 *local_88;
  undefined1 local_84 [4];
  uint local_80;
  char local_79;
  int *local_78;
  undefined1 local_74 [24];
  char ***local_5c [5];
  uint local_48;
  undefined4 local_44;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  uint local_1c;
  uint local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe0;
  local_90 = (uint)param_6;
  local_98 = (uint)in_stack_00000038;
  local_a8 = param_1;
  local_9c = param_5;
  local_8 = 0;
  std::locale::locale(local_a4,*(locale **)(param_5 + 0x30));
  if (param_4 == '\0') {
    local_8 = CONCAT31(local_8._1_3_,2);
    piVar3 = (int *)FUN_101296a6(local_a4);
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar3 = (int *)FUN_10129611(local_a4);
  }
  local_8 = local_8 & 0xffffff00;
  local_78 = piVar3;
  FUN_100307e0();
  pcVar11 = *(code **)(*piVar3 + 0x14);
  guard_check_icall(local_5c);
  (*pcVar11)();
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar4 = frac_digits();
  uVar4 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  local_8c = uVar4;
  if (uVar4 < in_stack_00000030) {
    ppppcVar14 = local_5c;
    if (0xf < local_48) {
      ppppcVar14 = (char ****)local_5c[0];
    }
    if (*(char *)ppppcVar14 != '\x7f') {
      ppppcVar14 = local_5c;
      if (0xf < local_48) {
        ppppcVar14 = (char ****)local_5c[0];
      }
      if ('\0' < *(char *)ppppcVar14) {
        local_80 = thousands_sep();
        local_80 = local_80 & 0xffff;
        ppppcVar14 = local_5c;
        if (0xf < local_48) {
          ppppcVar14 = (char ****)local_5c[0];
        }
        uVar7 = in_stack_00000030 - local_8c;
        while( true ) {
          cVar9 = *(char *)ppppcVar14;
          uVar4 = local_8c;
          if (((cVar9 == '\x7f') || (cVar9 < '\x01')) || (uVar7 <= (uint)(int)cVar9)) break;
          uVar7 = uVar7 - (int)cVar9;
          FUN_1013876f(uVar7,1,local_80);
          if ('\0' < *(char *)((int)ppppcVar14 + 1)) {
            ppppcVar14 = (char ****)((int)ppppcVar14 + 1);
          }
        }
      }
    }
  }
  else {
    FUN_1013876f(0,(uVar4 - in_stack_00000030) + 1,local_98);
  }
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_7 == '\0') {
    pcVar11 = *(code **)(*local_78 + 0x28);
    guard_check_icall(&local_80);
    (*pcVar11)();
    pcVar11 = *(code **)(*local_78 + 0x1c);
  }
  else {
    pcVar11 = *(code **)(*local_78 + 0x2c);
    guard_check_icall(&local_80);
    (*pcVar11)();
    pcVar11 = *(code **)(*local_78 + 0x20);
  }
  local_94 = local_80;
  guard_check_icall(local_74);
  (*pcVar11)();
  local_80 = local_80 & 0xffffff00;
  FID_conflict__Move_assign(local_74,local_80);
  FID_conflict__Tidy_deallocate();
  local_34 = 0;
  local_30 = 7;
  local_44 = (undefined4 *)((uint)local_44._2_2_ << 0x10);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_9c + 0x14) & 8) != 0) {
    pcVar11 = *(code **)(*local_78 + 0x18);
    guard_check_icall(local_74);
    (*pcVar11)();
    local_80 = local_80 & 0xffffff00;
    FID_conflict__Move_assign(local_74,local_80);
    FID_conflict__Tidy_deallocate();
  }
  cVar9 = '\0';
  uVar7 = 0;
  local_79 = '\0';
  uVar12 = 0;
  do {
    cVar1 = *(char *)((int)&local_94 + uVar12);
    if (cVar1 == ' ') {
      uVar7 = uVar7 + 1;
LAB_10132c80:
      if (uVar12 != 3) {
        local_79 = '\x01';
        cVar9 = '\x01';
      }
    }
    else if (cVar1 == '$') {
      uVar7 = uVar7 + local_34;
    }
    else if (cVar1 == '+') {
      uVar7 = uVar7 + local_1c;
    }
    else if (cVar1 == 'v') {
      if (uVar4 < in_stack_00000030) {
        iVar13 = 0;
      }
      else {
        iVar13 = (uVar4 - in_stack_00000030) + 1;
      }
      uVar7 = uVar7 + (uVar4 != 0) + in_stack_00000030 + iVar13;
      cVar9 = local_79;
    }
    else if (cVar1 == 'x') goto LAB_10132c80;
    uVar12 = uVar12 + 1;
  } while (uVar12 < 4);
  if (((*(int *)(local_9c + 0x24) < 0) ||
      ((*(int *)(local_9c + 0x24) < 1 && (*(int *)(local_9c + 0x20) == 0)))) ||
     (*(uint *)(local_9c + 0x20) <= uVar7)) {
    iVar13 = 0;
  }
  else {
    iVar13 = *(uint *)(local_9c + 0x20) - uVar7;
  }
  local_a0 = *(uint *)(local_9c + 0x14) & 0x1c0;
  if ((local_a0 != 0x40) && ((local_a0 != 0x100 || (cVar9 == '\0')))) {
    puVar5 = (undefined4 *)Rep(local_84,param_2,param_3,local_90,iVar13);
    iVar13 = 0;
    param_2 = *puVar5;
    param_3 = puVar5[1];
  }
  local_80 = 0;
  uVar8 = param_2;
  uVar10 = param_3;
  do {
    uVar7 = local_8c;
    cVar9 = *(char *)((int)&local_94 + local_80);
    if (cVar9 == ' ') {
      puVar5 = (undefined4 *)Rep(local_f0,uVar8,uVar10,local_90,1);
      uVar8 = *puVar5;
      uVar10 = puVar5[1];
      param_2 = uVar8;
      param_3 = uVar10;
LAB_10132ebd:
      if (local_a0 != 0x100) goto LAB_10132eee;
      puVar5 = (undefined4 *)Rep(local_b0,uVar8,uVar10,local_90,iVar13);
      iVar13 = 0;
LAB_10132ee3:
      uVar8 = *puVar5;
      uVar10 = puVar5[1];
      param_2 = uVar8;
      param_3 = uVar10;
    }
    else {
      if (cVar9 == '$') {
        puVar5 = &local_44;
        if (7 < local_30) {
          puVar5 = local_44;
        }
        puVar6 = local_e8;
        uVar7 = local_34;
LAB_10132e4e:
        puVar5 = (undefined4 *)Put(puVar6,uVar8,uVar10,puVar5,uVar7);
        goto LAB_10132ee3;
      }
      if (cVar9 == '+') {
        if (local_1c != 0) {
          puVar5 = &local_2c;
          if (7 < local_18) {
            puVar5 = local_2c;
          }
          uVar7 = 1;
          puVar6 = local_e0;
          goto LAB_10132e4e;
        }
      }
      else {
        if (cVar9 == 'v') {
          if (uVar4 == 0) {
            puVar5 = &param_8;
            if (7 < in_stack_00000034) {
              puVar5 = param_8;
            }
            puVar6 = local_b8;
            uVar7 = in_stack_00000030;
          }
          else if (uVar4 < in_stack_00000030) {
            local_88 = &param_8;
            if (7 < in_stack_00000034) {
              local_88 = param_8;
            }
            puVar5 = (undefined4 *)Put(local_d0,uVar8,uVar10,local_88,in_stack_00000030 - uVar4);
            uVar8 = *puVar5;
            uVar10 = puVar5[1];
            uVar2 = decimal_point();
            FID_conflict_operator_(uVar2);
            puVar5 = &param_8;
            if (7 < in_stack_00000034) {
              puVar5 = param_8;
            }
            puVar5 = (undefined4 *)((int)puVar5 + (in_stack_00000030 - uVar7) * 2);
            puVar6 = local_d8;
            uVar4 = uVar7;
          }
          else {
            FID_conflict_operator_(local_98);
            uVar2 = decimal_point();
            FID_conflict_operator_(uVar2);
            puVar5 = (undefined4 *)Rep(local_c0,param_2,param_3,local_98,uVar4 - in_stack_00000030);
            uVar8 = *puVar5;
            uVar10 = puVar5[1];
            puVar5 = &param_8;
            if (7 < in_stack_00000034) {
              puVar5 = param_8;
            }
            puVar6 = local_c8;
            uVar7 = in_stack_00000030;
          }
          goto LAB_10132e4e;
        }
        if (cVar9 == 'x') goto LAB_10132ebd;
      }
    }
LAB_10132eee:
    local_80 = local_80 + 1;
    if (3 < local_80) {
      if (1 < local_1c) {
        puVar5 = &local_2c;
        if (7 < local_18) {
          puVar5 = local_2c;
        }
        puVar5 = (undefined4 *)Put(local_b0,uVar8,uVar10,(int)puVar5 + 2,local_1c - 1);
        uVar8 = *puVar5;
        uVar10 = puVar5[1];
      }
      *(undefined4 *)(local_9c + 0x20) = 0;
      *(undefined4 *)(local_9c + 0x24) = 0;
      Rep(local_a8,uVar8,uVar10,local_90,iVar13);
      if (7 < local_30) {
        local_80 = local_30 * 2 + 2;
        local_88 = local_44;
        if (0xfff < local_80) {
          std::_Adjust_manually_vector_aligned(&local_88,&local_80);
        }
        FUN_1013dba5(local_88,local_80);
      }
      local_34 = 0;
      local_44 = (undefined4 *)((uint)local_44 & 0xffff0000);
      local_30 = 7;
      if (7 < local_18) {
        local_80 = local_18 * 2 + 2;
        local_88 = local_2c;
        if (0xfff < local_80) {
          std::_Adjust_manually_vector_aligned(&local_88,&local_80);
        }
        FUN_1013dba5(local_88,local_80);
      }
      local_1c = 0;
      local_18 = 7;
      local_2c = (undefined4 *)((uint)local_2c & 0xffff0000);
      FUN_10125c94();
      FID_conflict__Tidy_deallocate();
      FUN_1013ecd2();
      return;
    }
  } while( true );
}

