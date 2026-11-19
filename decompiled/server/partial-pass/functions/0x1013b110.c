// rea decompile_all
// name: std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
// address: 0x1013b110
// body: available
// range: 0x1013b110-0x1013b71d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: class std::ostreambuf_iterator<char,struct std::char_traits<char> > __thiscall
   std::money_put<char,class std::ostreambuf_iterator<char,struct std::char_traits<char> >
   >::_Putmfld(class std::ostreambuf_iterator<char,struct std::char_traits<char> >,bool,class
   std::ios_base &,char,bool,class std::basic_string<char,struct std::char_traits<char>,class
   std::allocator<char> >,char)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::money_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Putmfld
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
          int param_6,undefined1 param_7,char param_8,undefined4 ****param_9)

{
  char cVar1;
  char cVar2;
  _Mpunct<char> *this;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 ****ppppuVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  char ****ppppcVar13;
  uint in_stack_00000030;
  uint in_stack_00000034;
  undefined1 in_stack_00000038;
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
  undefined4 local_98;
  uint local_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 ***local_88;
  undefined1 local_84 [4];
  uint local_80;
  char local_79;
  _Mpunct<char> *local_78;
  undefined1 local_74 [24];
  char ***local_5c [5];
  uint local_48;
  undefined4 ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xe0;
  local_a8 = param_2;
  local_90 = CONCAT31(local_90._1_3_,param_7);
  local_9c = param_6;
  local_98 = CONCAT31(local_98._1_3_,in_stack_00000038);
  local_8 = 0;
  locale::locale(local_a4,*(locale **)(param_6 + 0x30));
  if (param_5 == '\0') {
    local_8 = CONCAT31(local_8._1_3_,2);
    this = (_Mpunct<char> *)FUN_101393ee(local_a4);
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,1);
    this = (_Mpunct<char> *)FUN_10139359(local_a4);
  }
  local_8 = local_8 & 0xffffff00;
  local_78 = this;
  FUN_100307e0();
  pcVar10 = *(code **)(*(int *)this + 0x14);
  guard_check_icall(local_5c);
  (*pcVar10)();
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar3 = _Mpunct<char>::frac_digits(this);
  uVar3 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  local_8c = uVar3;
  if (uVar3 < in_stack_00000030) {
    ppppcVar13 = local_5c;
    if (0xf < local_48) {
      ppppcVar13 = (char ****)local_5c[0];
    }
    if (*(char *)ppppcVar13 != '\x7f') {
      ppppcVar13 = local_5c;
      if (0xf < local_48) {
        ppppcVar13 = (char ****)local_5c[0];
      }
      if ('\0' < *(char *)ppppcVar13) {
        cVar2 = _Mpunct<char>::thousands_sep(local_78);
        local_80 = CONCAT31(local_80._1_3_,cVar2);
        ppppcVar13 = local_5c;
        if (0xf < local_48) {
          ppppcVar13 = (char ****)local_5c[0];
        }
        uVar7 = in_stack_00000030 - local_8c;
        while (((cVar2 = *(char *)ppppcVar13, uVar3 = local_8c, cVar2 != '\x7f' && ('\0' < cVar2))
               && ((uint)(int)cVar2 < uVar7))) {
          uVar7 = uVar7 - (int)cVar2;
          FUN_10126956(uVar7,1,local_80);
          if ('\0' < *(char *)((int)ppppcVar13 + 1)) {
            ppppcVar13 = (char ****)((int)ppppcVar13 + 1);
          }
        }
      }
    }
  }
  else {
    FUN_10126956(0,(uVar3 - in_stack_00000030) + 1,local_98);
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,4);
  if (param_8 == '\0') {
    pcVar10 = *(code **)(*(int *)local_78 + 0x28);
    guard_check_icall(&local_80);
    (*pcVar10)();
    pcVar10 = *(code **)(*(int *)local_78 + 0x1c);
  }
  else {
    pcVar10 = *(code **)(*(int *)local_78 + 0x2c);
    guard_check_icall(&local_80);
    (*pcVar10)();
    pcVar10 = *(code **)(*(int *)local_78 + 0x20);
  }
  local_94 = local_80;
  guard_check_icall(local_74);
  (*pcVar10)();
  local_80 = local_80 & 0xffffff00;
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Move_assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_2c,local_74,
             local_80);
  FUN_10125c94();
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
  local_8 = CONCAT31(local_8._1_3_,5);
  if ((*(byte *)(local_9c + 0x14) & 8) != 0) {
    pcVar10 = *(code **)(*(int *)local_78 + 0x18);
    guard_check_icall(local_74);
    (*pcVar10)();
    local_80 = local_80 & 0xffffff00;
    basic_string<char,std::char_traits<char>,std::allocator<char>_>::_Move_assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_44,local_74,
               local_80);
    FUN_10125c94();
  }
  cVar2 = '\0';
  uVar7 = 0;
  local_79 = '\0';
  uVar11 = 0;
  do {
    cVar1 = *(char *)((int)&local_94 + uVar11);
    if (cVar1 == ' ') {
      uVar7 = uVar7 + 1;
LAB_1013b394:
      if (uVar11 != 3) {
        local_79 = '\x01';
        cVar2 = '\x01';
      }
    }
    else if (cVar1 == '$') {
      uVar7 = uVar7 + local_34;
    }
    else if (cVar1 == '+') {
      uVar7 = uVar7 + local_1c;
    }
    else if (cVar1 == 'v') {
      if (uVar3 < in_stack_00000030) {
        iVar12 = 0;
      }
      else {
        iVar12 = (uVar3 - in_stack_00000030) + 1;
      }
      uVar7 = uVar7 + (uVar3 != 0) + in_stack_00000030 + iVar12;
      cVar2 = local_79;
    }
    else if (cVar1 == 'x') goto LAB_1013b394;
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if (((*(int *)(local_9c + 0x24) < 0) ||
      ((*(int *)(local_9c + 0x24) < 1 && (*(int *)(local_9c + 0x20) == 0)))) ||
     (*(uint *)(local_9c + 0x20) <= uVar7)) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(uint *)(local_9c + 0x20) - uVar7;
  }
  local_a0 = *(uint *)(local_9c + 0x14) & 0x1c0;
  if ((local_a0 != 0x40) && ((local_a0 != 0x100 || (cVar2 == '\0')))) {
    puVar4 = (undefined4 *)_Rep(local_84,param_3,param_4,local_90,iVar12);
    iVar12 = 0;
    param_3 = *puVar4;
    param_4 = puVar4[1];
  }
  local_80 = 0;
  uVar8 = param_3;
  uVar9 = param_4;
  do {
    uVar7 = local_8c;
    cVar2 = *(char *)((int)&local_94 + local_80);
    if (cVar2 == ' ') {
      puVar4 = (undefined4 *)_Rep(local_f0,uVar8,uVar9,local_90,1);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      param_3 = uVar8;
      param_4 = uVar9;
LAB_1013b5ca:
      if (local_a0 != 0x100) goto LAB_1013b5fb;
      puVar4 = (undefined4 *)_Rep(local_b0,uVar8,uVar9,local_90,iVar12);
      iVar12 = 0;
LAB_1013b5f0:
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      param_3 = uVar8;
      param_4 = uVar9;
    }
    else {
      if (cVar2 == '$') {
        ppppuVar5 = local_44;
        if (0xf < local_30) {
          ppppuVar5 = (undefined4 ****)local_44[0];
        }
        puVar6 = local_e8;
        uVar7 = local_34;
LAB_1013b55b:
        puVar4 = (undefined4 *)_Put(puVar6,uVar8,uVar9,ppppuVar5,uVar7);
        goto LAB_1013b5f0;
      }
      if (cVar2 == '+') {
        if (local_1c != 0) {
          ppppuVar5 = local_2c;
          if (0xf < local_18) {
            ppppuVar5 = (undefined4 ****)local_2c[0];
          }
          uVar7 = 1;
          puVar6 = local_e0;
          goto LAB_1013b55b;
        }
      }
      else {
        if (cVar2 == 'v') {
          if (uVar3 == 0) {
            ppppuVar5 = &param_9;
            if (0xf < in_stack_00000034) {
              ppppuVar5 = param_9;
            }
            puVar6 = local_b8;
            uVar7 = in_stack_00000030;
          }
          else if (uVar3 < in_stack_00000030) {
            local_88 = &param_9;
            if (0xf < in_stack_00000034) {
              local_88 = param_9;
            }
            puVar4 = (undefined4 *)_Put(local_d0,uVar8,uVar9,local_88,in_stack_00000030 - uVar3);
            param_3 = *puVar4;
            param_4 = puVar4[1];
            cVar2 = _Mpunct<char>::decimal_point(local_78);
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,cVar2);
            ppppuVar5 = &param_9;
            if (0xf < in_stack_00000034) {
              ppppuVar5 = param_9;
            }
            ppppuVar5 = (undefined4 ****)((in_stack_00000030 - uVar7) + (int)ppppuVar5);
            puVar6 = local_d8;
            uVar3 = uVar7;
            uVar8 = param_3;
            uVar9 = param_4;
          }
          else {
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(char)local_98)
            ;
            cVar2 = _Mpunct<char>::decimal_point(local_78);
            ostreambuf_iterator<char,std::char_traits<char>_>::operator=
                      ((ostreambuf_iterator<char,std::char_traits<char>_> *)&param_3,cVar2);
            puVar4 = (undefined4 *)_Rep(local_c0,param_3,param_4,local_98,uVar3 - in_stack_00000030)
            ;
            param_3 = *puVar4;
            param_4 = puVar4[1];
            ppppuVar5 = &param_9;
            if (0xf < in_stack_00000034) {
              ppppuVar5 = param_9;
            }
            puVar6 = local_c8;
            uVar8 = param_3;
            uVar9 = param_4;
            uVar7 = in_stack_00000030;
          }
          goto LAB_1013b55b;
        }
        if (cVar2 == 'x') goto LAB_1013b5ca;
      }
    }
LAB_1013b5fb:
    local_80 = local_80 + 1;
    if (3 < local_80) {
      if (1 < local_1c) {
        ppppuVar5 = local_2c;
        if (0xf < local_18) {
          ppppuVar5 = (undefined4 ****)local_2c[0];
        }
        puVar4 = (undefined4 *)_Put(local_b0,uVar8,uVar9,(int)ppppuVar5 + 1,local_1c - 1);
        uVar8 = *puVar4;
        uVar9 = puVar4[1];
        param_3 = uVar8;
        param_4 = uVar9;
      }
      *(undefined4 *)(local_9c + 0x20) = 0;
      *(undefined4 *)(local_9c + 0x24) = 0;
      _Rep(local_a8,uVar8,uVar9,local_90,iVar12);
      if (0xf < local_30) {
        local_80 = local_30 + 1;
        local_88 = local_44[0];
        if (0xfff < local_80) {
          _Adjust_manually_vector_aligned(&local_88,&local_80);
        }
        FUN_1013dba5(local_88,local_80);
      }
      local_34 = 0;
      local_30 = 0xf;
      local_44[0] = (undefined4 ***)((uint)local_44[0] & 0xffffff00);
      if (0xf < local_18) {
        local_80 = local_18 + 1;
        local_88 = local_2c[0];
        if (0xfff < local_80) {
          _Adjust_manually_vector_aligned(&local_88,&local_80);
        }
        FUN_1013dba5(local_88,local_80);
      }
      local_1c = 0;
      local_18 = 0xf;
      local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
      FUN_10125c94();
      FUN_10125c94();
      FUN_1013ecd2();
      return;
    }
  } while( true );
}

