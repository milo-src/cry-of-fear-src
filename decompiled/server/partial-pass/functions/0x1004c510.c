// rea decompile_all
// name: FUN_1004c510
// address: 0x1004c510
// body: available
// range: 0x1004c510-0x1004ca08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004c9ff to 0x100376c0 FUN_100376c0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x1004ca04 to 0x1004cfa0 FUN_1004cfa0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004c510(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *param_5,
                 undefined4 param_6,char *****param_7,uint param_8)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *pnVar5;
  undefined4 uVar6;
  uint uVar7;
  char ****ppppcVar8;
  undefined1 uVar9;
  uint uVar10;
  lconv *plVar11;
  size_t sVar12;
  undefined4 *puVar13;
  char *****pppppcVar14;
  char *pcVar15;
  char *****pppppcVar16;
  uint uVar17;
  int iVar18;
  char ****local_68;
  size_t local_64;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *local_60;
  undefined2 local_5c [2];
  undefined1 local_58 [4];
  int *local_54;
  uint local_50;
  int *local_4c;
  char local_45;
  char ****local_44 [4];
  undefined4 local_34;
  uint local_30;
  char ****local_2c [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019dae5;
  local_10 = ExceptionList;
  uVar10 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_60 = param_5;
  local_68 = (char ****)param_7;
  if ((param_8 == 0) || ((*(char *)param_7 != '+' && (*(char *)param_7 != '-')))) {
    local_50 = 0;
  }
  else {
    local_50 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    pcVar15 = "pP";
    if (((local_50 + 2 <= param_8) && (*(char *)((int)param_7 + local_50) == '0')) &&
       ((cVar2 = *(char *)((int)param_7 + local_50 + 1), cVar2 == 'x' || (cVar2 == 'X')))) {
      local_50 = local_50 + 2;
    }
  }
  else {
    pcVar15 = "eE";
  }
  uVar17 = local_50;
  local_14 = uVar10;
  local_64 = _strcspn((char *)param_7,pcVar15);
  local_5c[0] = 0x2e;
  plVar11 = _localeconv();
  local_5c[0] = CONCAT11(local_5c[0]._1_1_,*plVar11->decimal_point);
  sVar12 = _strcspn((char *)param_7,(char *)local_5c);
  piVar3 = *(int **)(*(int *)(local_60 + 0x30) + 4);
  local_54 = piVar3;
  (**(code **)(*piVar3 + 4))(uVar10);
  local_8 = 0;
  local_4c = (int *)FUN_1002f750(local_58);
  local_8 = 0xffffffff;
  if ((piVar3 != (int *)0x0) &&
     (puVar13 = (undefined4 *)(**(code **)(*piVar3 + 8))(), puVar13 != (undefined4 *)0x0)) {
    (**(code **)*puVar13)(1);
  }
  FUN_10049f70(param_8,0);
  pppppcVar14 = local_2c;
  if (0xf < local_18) {
    pppppcVar14 = (char *****)local_2c[0];
  }
  local_8 = 1;
  (**(code **)(*local_4c + 0x1c))(local_68,(int)local_68 + param_8,pppppcVar14);
  local_54 = *(int **)(*(int *)(local_60 + 0x30) + 4);
  (**(code **)(*local_54 + 4))();
  local_8._0_1_ = 2;
  local_4c = (int *)FUN_10049950(local_58);
  local_8._0_1_ = 1;
  if ((local_54 != (int *)0x0) &&
     (puVar13 = (undefined4 *)(**(code **)(*local_54 + 8))(), puVar13 != (undefined4 *)0x0)) {
    (**(code **)*puVar13)(1);
  }
  (**(code **)(*local_4c + 0x14))(local_44);
  local_8 = CONCAT31(local_8._1_3_,3);
  local_45 = (**(code **)(*local_4c + 0x10))();
  if (sVar12 != param_8) {
    uVar9 = (**(code **)(*local_4c + 0xc))();
    pppppcVar14 = local_2c;
    if (0xf < local_18) {
      pppppcVar14 = (char *****)local_2c[0];
    }
    *(undefined1 *)((int)pppppcVar14 + sVar12) = uVar9;
  }
  if (sVar12 == param_8) {
    sVar12 = local_64;
  }
  pppppcVar14 = local_44;
  if (0xf < local_30) {
    pppppcVar14 = (char *****)local_44[0];
  }
  cVar2 = *(char *)pppppcVar14;
  uVar10 = local_1c;
  uVar7 = local_18;
  while (((local_1c = uVar10, local_18 = uVar7, cVar2 != '\x7f' && ('\0' < cVar2)) &&
         ((uint)(int)cVar2 < sVar12 - uVar17))) {
    sVar12 = sVar12 - (int)cVar2;
    if (uVar10 < sVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_1004cfa0();
    }
    if (uVar7 == uVar10) {
      if (uVar10 == 0x7fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_100376c0();
      }
      uVar17 = uVar10 + 1 | 0xf;
      if (uVar17 < 0x80000000) {
        if (0x7fffffff - (uVar7 >> 1) < uVar7) {
          uVar17 = 0x7fffffff;
        }
        else {
          uVar4 = uVar7 + (uVar7 >> 1);
          if (uVar17 < uVar4) {
            uVar17 = uVar4;
          }
        }
      }
      else {
        uVar17 = 0x7fffffff;
      }
      local_68 = (char ****)FUN_1002f1e0(uVar17 + 1);
      ppppcVar8 = local_2c[0];
      local_1c = uVar10 + 1;
      local_4c = (int *)(int)local_45;
      puVar1 = (undefined1 *)((int)local_68 + sVar12);
      local_64 = (uVar10 - sVar12) + 1;
      local_54 = (int *)(puVar1 + 1);
      local_18 = uVar17;
      if (uVar7 < 0x10) {
        FUN_10140130(local_68,local_2c,sVar12);
        *puVar1 = local_4c._0_1_;
        FUN_10140130(puVar1 + 1,(int)local_2c + sVar12,local_64);
        FUN_1002f280(local_2c,&local_68);
      }
      else {
        FUN_10140130(local_68,local_2c[0],sVar12);
        *puVar1 = local_4c._0_1_;
        FUN_10140130(local_54,(int)ppppcVar8 + sVar12,local_64);
        std::_Deallocate<8,0>(ppppcVar8,uVar7 + 1);
        local_2c[0] = local_68;
      }
    }
    else {
      local_1c = uVar10 + 1;
      pppppcVar16 = local_2c;
      if (0xf < uVar7) {
        pppppcVar16 = (char *****)local_2c[0];
      }
      pcVar15 = (char *)((int)pppppcVar16 + sVar12);
      FUN_101406b0(pcVar15 + 1,pcVar15,(uVar10 - sVar12) + 1);
      *pcVar15 = local_45;
    }
    if ('\0' < *(char *)((int)pppppcVar14 + 1)) {
      pppppcVar14 = (char *****)((int)pppppcVar14 + 1);
    }
    uVar17 = local_50;
    uVar10 = local_1c;
    uVar7 = local_18;
    cVar2 = *(char *)pppppcVar14;
  }
  uVar4 = *(uint *)(local_60 + 0x20);
  if (((*(int *)(local_60 + 0x24) < 0) || ((*(int *)(local_60 + 0x24) < 1 && (uVar4 == 0)))) ||
     (uVar4 <= uVar10)) {
    iVar18 = 0;
  }
  else {
    iVar18 = uVar4 - uVar10;
  }
  local_50 = uVar10;
  if ((*(uint *)(local_60 + 0x14) & 0x1c0) == 0x40) {
    pppppcVar14 = local_2c;
    if (0xf < uVar7) {
      pppppcVar14 = (char *****)local_2c[0];
    }
    puVar13 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        (local_60,param_1,local_58,param_3,param_4,pppppcVar14,uVar17);
  }
  else if ((*(uint *)(local_60 + 0x14) & 0x1c0) == 0x100) {
    pppppcVar14 = local_2c;
    if (0xf < uVar7) {
      pppppcVar14 = (char *****)local_2c[0];
    }
    puVar13 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        (local_60,param_1,local_58,param_3,param_4,pppppcVar14,uVar17);
    puVar13 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                        ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         *puVar13,param_1,local_58,
                         (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         *puVar13,puVar13[1],param_6,iVar18);
    iVar18 = 0;
  }
  else {
    puVar13 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
                        (local_60,param_1,local_58,param_3,param_4,param_6,iVar18);
    iVar18 = 0;
    pppppcVar14 = local_2c;
    if (0xf < local_18) {
      pppppcVar14 = (char *****)local_2c[0];
    }
    puVar13 = (undefined4 *)
              std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                        ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         puVar13[1],param_1,local_58,*puVar13,
                         (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                         puVar13[1],pppppcVar14,uVar17);
  }
  pppppcVar14 = local_2c;
  if (0xf < local_18) {
    pppppcVar14 = (char *****)local_2c[0];
  }
  local_50 = local_50 - uVar17;
  puVar13 = (undefined4 *)
            std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Put
                      ((num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                       puVar13[1],param_1,local_58,*puVar13,
                       (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)
                       puVar13[1],(int)pppppcVar14 + uVar17,local_50);
  pnVar5 = (num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *)*puVar13;
  uVar6 = puVar13[1];
  *(undefined4 *)(local_60 + 0x20) = 0;
  *(undefined4 *)(local_60 + 0x24) = 0;
  std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Rep
            (pnVar5,param_1,param_2,pnVar5,uVar6,param_6,iVar18);
  if (0xf < local_30) {
    std::_Deallocate<8,0>(local_44[0],local_30 + 1);
  }
  local_34 = 0;
  local_30 = 0xf;
  local_44[0] = (char ****)((uint)local_44[0] & 0xffffff00);
  if (0xf < local_18) {
    std::_Deallocate<8,0>(local_2c[0],local_18 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

