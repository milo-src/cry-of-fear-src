// rea decompile_all
// name: FUN_1004ca10
// address: 0x1004ca10
// body: available
// range: 0x1004ca10-0x1004cead inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004cea4 to 0x100376c0 FUN_100376c0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004cea9 to 0x1004cfa0 FUN_1004cfa0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ca10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *param_5,
                 undefined4 param_6,int ***param_7,uint param_8)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 uVar8;
  int ***pppiVar9;
  int *piVar10;
  undefined4 *puVar11;
  int ****ppppiVar12;
  undefined1 *puVar13;
  uint uVar14;
  char ****ppppcVar15;
  int iVar16;
  undefined1 local_58 [4];
  int *local_54;
  int ***local_50;
  uint local_4c;
  undefined1 local_45;
  char ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  int ***local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019db35;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_50 = param_7;
  if ((param_8 == 0) || ((*(char *)param_7 != '+' && (*(char *)param_7 != '-')))) {
    local_4c = 0;
  }
  else {
    local_4c = 1;
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) && (local_4c + 2 <= param_8)) &&
      (*(char *)((int)param_7 + local_4c) == '0')) &&
     ((cVar2 = *(char *)((int)param_7 + local_4c + 1), cVar2 == 'x' || (cVar2 == 'X')))) {
    local_4c = local_4c + 2;
  }
  uVar14 = local_4c;
  piVar3 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  local_54 = piVar3;
  (**(code **)(*piVar3 + 4))(local_14);
  local_8 = 0;
  piVar10 = (int *)FUN_1002f750(local_58);
  local_8 = 0xffffffff;
  if ((piVar3 != (int *)0x0) &&
     (puVar11 = (undefined4 *)(**(code **)(*piVar3 + 8))(), puVar11 != (undefined4 *)0x0)) {
    (**(code **)*puVar11)(1);
  }
  FUN_10049f70(param_8,0);
  ppppiVar12 = local_2c;
  if (0xf < local_18) {
    ppppiVar12 = (int ****)local_2c[0];
  }
  local_8 = 1;
  (**(code **)(*piVar10 + 0x1c))(local_50,(char *)((int)local_50 + param_8),ppppiVar12);
  local_54 = *(int **)(*(int *)(param_5 + 0x30) + 4);
  (**(code **)(*local_54 + 4))();
  local_8._0_1_ = 2;
  ppppiVar12 = (int ****)FUN_10049950(local_58);
  local_8._0_1_ = 1;
  local_50 = (int ***)ppppiVar12;
  if ((local_54 != (int *)0x0) &&
     (puVar11 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar11 != (undefined4 *)0x0)) {
    (**(code **)*puVar11)(1);
  }
  (*(code *)(*ppppiVar12)[5])(local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  ppppcVar15 = local_44;
  if (0xf < local_30) {
    ppppcVar15 = (char ****)local_44[0];
  }
  if ((*(char *)ppppcVar15 != '\x7f') && ('\0' < *(char *)ppppcVar15)) {
    local_45 = (*(code *)(*local_50)[4])();
    cVar2 = *(char *)ppppcVar15;
    uVar4 = local_1c;
    uVar7 = local_18;
    while (((local_1c = uVar4, local_18 = uVar7, cVar2 != '\x7f' && ('\0' < cVar2)) &&
           ((uint)(int)cVar2 < param_8 - uVar14))) {
      param_8 = param_8 - (int)cVar2;
      if (uVar4 < param_8) {
                    /* WARNING: Subroutine does not return */
        FUN_1004cfa0();
      }
      if (uVar7 == uVar4) {
        if (uVar4 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
          FUN_100376c0();
        }
        uVar14 = uVar4 + 1 | 0xf;
        if (uVar14 < 0x80000000) {
          if (0x7fffffff - (uVar7 >> 1) < uVar7) {
            uVar14 = 0x7fffffff;
          }
          else {
            uVar1 = (uVar7 >> 1) + uVar7;
            if (uVar14 < uVar1) {
              uVar14 = uVar1;
            }
          }
        }
        else {
          uVar14 = 0x7fffffff;
        }
        local_50 = (int ***)FUN_1002f1e0(uVar14 + 1);
        pppiVar9 = local_2c[0];
        uVar8 = local_45;
        local_1c = uVar4 + 1;
        puVar13 = (undefined1 *)(param_8 + (int)local_50);
        iVar16 = (uVar4 - param_8) + 1;
        local_54 = (int *)(puVar13 + 1);
        local_18 = uVar14;
        if (uVar7 < 0x10) {
          FUN_10140130(local_50,local_2c,param_8);
          *puVar13 = uVar8;
          FUN_10140130(puVar13 + 1,(int)local_2c + param_8,iVar16);
          FUN_1002f280(local_2c,&local_50);
        }
        else {
          FUN_10140130(local_50,local_2c[0],param_8);
          *puVar13 = uVar8;
          FUN_10140130(local_54,param_8 + (int)pppiVar9,iVar16);
          std::_Deallocate<8,0>(pppiVar9,uVar7 + 1);
          local_2c[0] = local_50;
        }
      }
      else {
        local_1c = uVar4 + 1;
        ppppiVar12 = local_2c;
        if (0xf < uVar7) {
          ppppiVar12 = (int ****)local_2c[0];
        }
        puVar13 = (undefined1 *)((int)ppppiVar12 + param_8);
        FUN_101406b0(puVar13 + 1,puVar13,(uVar4 - param_8) + 1);
        *puVar13 = local_45;
      }
      if ('\0' < *(char *)((int)ppppcVar15 + 1)) {
        ppppcVar15 = (char ****)((int)ppppcVar15 + 1);
      }
      uVar14 = local_4c;
      uVar4 = local_1c;
      uVar7 = local_18;
      cVar2 = *(char *)ppppcVar15;
    }
  }
  local_4c = local_1c;
  uVar4 = *(uint *)(param_5 + 0x20);
  if (((*(int *)(param_5 + 0x24) < 0) || ((*(int *)(param_5 + 0x24) < 1 && (uVar4 == 0)))) ||
     (uVar4 <= local_1c)) {
    iVar16 = 0;
  }
  else {
    iVar16 = uVar4 - local_1c;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x1c0) == 0x40) {
    ppppiVar12 = local_2c;
    if (0xf < local_18) {
      ppppiVar12 = (int ****)local_2c[0];
    }
    puVar11 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        (param_5,param_1,local_58,param_3,param_4,ppppiVar12,uVar14);
  }
  else if ((*(uint *)(param_5 + 0x14) & 0x1c0) == 0x100) {
    ppppiVar12 = local_2c;
    if (0xf < local_18) {
      ppppiVar12 = (int ****)local_2c[0];
    }
    puVar11 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        (param_5,param_1,local_58,param_3,param_4,ppppiVar12,uVar14);
    puVar11 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                        ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         *puVar11,param_1,local_58,
                         (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         *puVar11,puVar11[1],param_6,iVar16);
    iVar16 = 0;
  }
  else {
    puVar11 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                        (param_5,param_1,local_58,param_3,param_4,param_6,iVar16);
    iVar16 = 0;
    ppppiVar12 = local_2c;
    if (0xf < local_18) {
      ppppiVar12 = (int ****)local_2c[0];
    }
    puVar11 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         puVar11[1],param_1,local_58,*puVar11,
                         (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         puVar11[1],ppppiVar12,uVar14);
  }
  ppppiVar12 = local_2c;
  if (0xf < local_18) {
    ppppiVar12 = (int ****)local_2c[0];
  }
  local_4c = local_4c - uVar14;
  puVar11 = (undefined4 *)
            std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                      ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                       puVar11[1],param_1,local_58,*puVar11,
                       (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                       puVar11[1],(int)ppppiVar12 + uVar14,local_4c);
  pnVar5 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar11;
  uVar6 = puVar11[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
            (pnVar5,param_1,param_2,pnVar5,uVar6,param_6,iVar16);
  if (0xf < local_30) {
    std::_Deallocate<8,0>(local_44[0],local_30 + 1);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (char ***)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    std::_Deallocate<8,0>(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

