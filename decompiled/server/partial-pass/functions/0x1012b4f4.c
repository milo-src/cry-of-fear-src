// rea decompile_all
// name: Fput
// address: 0x1012b4f4
// body: available
// range: 0x1012b4f4-0x1012b83f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __cdecl std::num_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Fput(class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >,class std::ios_base &,unsigned short,char const *,unsigned
   int)const 
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Fput(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::ios_base &,wchar_t,char const *,unsigned int)const 
   
   Library: Visual Studio 2019 Release */

void Fput(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
         undefined4 param_6,char *param_7,uint param_8)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  lconv *plVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *_Control;
  size_t sVar10;
  char *****pppppcVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_6c [4];
  size_t local_68;
  locale local_64 [4];
  int *local_60;
  size_t local_5c;
  size_t local_58;
  uint local_54;
  undefined2 local_50 [2];
  locale local_4c [4];
  undefined4 *local_48;
  char ****local_44 [5];
  uint local_30;
  undefined4 local_2c;
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x60;
  local_8 = 0x1012b500;
  local_54 = param_5;
  local_58 = param_8;
  if ((param_8 == 0) || ((*param_7 != '+' && (*param_7 != '-')))) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  if ((*(uint *)(param_5 + 0x14) & 0x3000) == 0x3000) {
    _Control = "pP";
    if (((uVar13 + 2 <= param_8) && (param_7[uVar13] == '0')) &&
       ((param_7[uVar13 + 1] == 'x' || (param_7[uVar13 + 1] == 'X')))) {
      uVar13 = uVar13 + 2;
    }
  }
  else {
    _Control = "eE";
  }
  local_68 = _strcspn(param_7,_Control);
  local_50[0] = 0x2e;
  plVar6 = _localeconv();
  local_50[0] = CONCAT11(local_50[0]._1_1_,*plVar6->decimal_point);
  local_5c = _strcspn(param_7,(char *)local_50);
  std::locale::locale(local_64,*(locale **)(param_5 + 0x30));
  local_8 = 0;
  local_48 = (undefined4 *)FUN_1012903f(local_64);
  local_8 = 0xffffffff;
  FUN_100307e0();
  local_1c = 0;
  local_18 = 7;
  local_2c = (undefined4 *)((uint)local_2c._2_2_ << 0x10);
  FID_conflict_assign(local_58,0);
  local_8 = 1;
  puVar9 = &local_2c;
  if (7 < local_18) {
    puVar9 = local_2c;
  }
  widen(param_7,param_7 + local_58,puVar9);
  std::locale::locale(local_4c,*(locale **)(param_5 + 0x30));
  local_8._0_1_ = 2;
  piVar7 = (int *)FUN_1012998f(local_4c);
  local_8._0_1_ = 1;
  local_60 = piVar7;
  FUN_100307e0();
  pcVar2 = *(code **)(*piVar7 + 0x14);
  guard_check_icall(local_44);
  (*pcVar2)();
  local_8 = CONCAT31(local_8._1_3_,3);
  uVar8 = thousands_sep();
  sVar10 = local_5c;
  local_48 = (undefined4 *)(uVar8 & 0xffff);
  if (local_5c == local_58) {
    local_5c = local_68;
  }
  else {
    uVar5 = decimal_point();
    puVar9 = &local_2c;
    if (7 < local_18) {
      puVar9 = local_2c;
    }
    *(undefined2 *)((int)puVar9 + sVar10 * 2) = uVar5;
  }
  pppppcVar11 = local_44;
  if (0xf < local_30) {
    pppppcVar11 = (char *****)local_44[0];
  }
  cVar1 = *(char *)pppppcVar11;
  sVar10 = local_5c;
  while (((cVar1 != '\x7f' && (param_5 = local_54, '\0' < cVar1)) &&
         ((uint)(int)cVar1 < sVar10 - uVar13))) {
    sVar10 = sVar10 - (int)cVar1;
    FUN_101386fa(sVar10,1,local_48);
    if ('\0' < *(char *)((int)pppppcVar11 + 1)) {
      pppppcVar11 = (char *****)((int)pppppcVar11 + 1);
    }
    param_5 = local_54;
    cVar1 = *(char *)pppppcVar11;
  }
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(uint *)(param_5 + 0x20) <= local_1c)) {
    iVar12 = 0;
  }
  else {
    iVar12 = *(uint *)(param_5 + 0x20) - local_1c;
  }
  uVar8 = *(uint *)(param_5 + 0x14) & 0x1c0;
  local_68 = local_1c;
  if (uVar8 == 0x40) {
    puVar9 = &local_2c;
    if (7 < local_18) {
      puVar9 = local_2c;
    }
  }
  else {
    if (uVar8 == 0x100) {
      puVar9 = &local_2c;
      if (7 < local_18) {
        puVar9 = local_2c;
      }
      puVar9 = (undefined4 *)Put(param_1,local_4c,param_3,param_4,puVar9,uVar13);
      puVar9 = (undefined4 *)Rep(param_1,local_4c,*puVar9,puVar9[1],param_6,iVar12);
      iVar12 = 0;
      goto LAB_1012b794;
    }
    puVar9 = (undefined4 *)Rep(param_1,local_4c,param_3,param_4,param_6,iVar12);
    iVar12 = 0;
    param_3 = *puVar9;
    param_4 = puVar9[1];
    puVar9 = &local_2c;
    if (7 < local_18) {
      puVar9 = local_2c;
    }
  }
  puVar9 = (undefined4 *)Put(param_1,local_4c,param_3,param_4,puVar9,uVar13);
LAB_1012b794:
  local_48 = &local_2c;
  if (7 < local_18) {
    local_48 = local_2c;
  }
  puVar9 = (undefined4 *)
           Put(param_1,local_6c,*puVar9,puVar9[1],(int)local_48 + uVar13 * 2,local_68 - uVar13);
  uVar3 = *puVar9;
  uVar4 = puVar9[1];
  *(undefined4 *)(local_54 + 0x20) = 0;
  *(undefined4 *)(local_54 + 0x24) = 0;
  Rep(param_1,param_2,uVar3,uVar4,param_6,iVar12);
  FUN_10125c94();
  if (7 < local_18) {
    local_54 = local_18 * 2 + 2;
    local_48 = local_2c;
    if (0xfff < local_54) {
      std::_Adjust_manually_vector_aligned(&local_48,&local_54);
    }
    FUN_1013dba5(local_48,local_54);
  }
  FUN_1013ecd2();
  return;
}

