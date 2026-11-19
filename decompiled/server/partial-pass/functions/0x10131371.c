// rea decompile_all
// name: Iput
// address: 0x10131371
// body: available
// range: 0x10131371-0x10131657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: class std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   __cdecl std::num_put<unsigned short,class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Iput(class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >,class std::ios_base &,unsigned short,char *,unsigned int)const
   
    private: class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __cdecl
   std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Iput(class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::ios_base &,wchar_t,char *,unsigned int)const 
   
   Library: Visual Studio 2019 Release */

void Iput(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
         undefined4 param_6,int *param_7,uint param_8)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *****pppppcVar8;
  int iVar9;
  uint uVar10;
  locale local_54 [8];
  int *local_4c;
  int *local_48;
  char ****local_44 [5];
  uint local_30;
  undefined4 local_2c;
  int *local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x4c;
  local_8 = 0x1013137d;
  local_4c = param_7;
  if ((param_8 == 0) || (((char)*param_7 != '+' && ((char)*param_7 != '-')))) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  if (((((*(uint *)(param_5 + 0x14) & 0xe00) == 0x800) && (uVar10 + 2 <= param_8)) &&
      (*(char *)((int)param_7 + uVar10) == '0')) &&
     ((cVar1 = *(char *)((int)param_7 + uVar10 + 1), cVar1 == 'x' || (cVar1 == 'X')))) {
    uVar10 = uVar10 + 2;
  }
  std::locale::locale(local_54,*(locale **)(param_5 + 0x30));
  local_8 = 0;
  local_48 = (int *)FUN_101290d4(local_54);
  local_8 = 0xffffffff;
  FUN_100307e0();
  local_1c = (int *)0x0;
  local_18 = 7;
  local_2c = (int *)((uint)local_2c._2_2_ << 0x10);
  FID_conflict_assign(param_8,0);
  local_8 = 1;
  piVar5 = &local_2c;
  if (7 < local_18) {
    piVar5 = local_2c;
  }
  widen(local_4c,(char *)((int)local_4c + param_8),piVar5);
  std::locale::locale(local_54,*(locale **)(param_5 + 0x30));
  local_8._0_1_ = 2;
  piVar5 = (int *)FUN_10129a24(local_54);
  local_8._0_1_ = 1;
  local_48 = piVar5;
  FUN_100307e0();
  pcVar2 = *(code **)(*piVar5 + 0x14);
  guard_check_icall(local_44);
  (*pcVar2)();
  local_8 = CONCAT31(local_8._1_3_,3);
  pppppcVar8 = local_44;
  if (0xf < local_30) {
    pppppcVar8 = (char *****)local_44[0];
  }
  if ((*(char *)pppppcVar8 != '\x7f') && ('\0' < *(char *)pppppcVar8)) {
    uVar6 = thousands_sep();
    local_4c = (int *)(uVar6 & 0xffff);
    while (((cVar1 = *(char *)pppppcVar8, cVar1 != '\x7f' && ('\0' < cVar1)) &&
           ((uint)(int)cVar1 < param_8 - uVar10))) {
      param_8 = param_8 - (int)cVar1;
      FUN_1013876f(param_8,1,local_4c);
      if ('\0' < *(char *)((int)pppppcVar8 + 1)) {
        pppppcVar8 = (char *****)((int)pppppcVar8 + 1);
      }
    }
  }
  local_4c = local_1c;
  if (((*(int *)(param_5 + 0x24) < 0) ||
      ((*(int *)(param_5 + 0x24) < 1 && (*(int *)(param_5 + 0x20) == 0)))) ||
     (*(int **)(param_5 + 0x20) <= local_1c)) {
    iVar9 = 0;
  }
  else {
    iVar9 = (int)*(int **)(param_5 + 0x20) - (int)local_1c;
  }
  uVar6 = *(uint *)(param_5 + 0x14) & 0x1c0;
  if (uVar6 == 0x40) {
    piVar5 = &local_2c;
    if (7 < local_18) {
      piVar5 = local_2c;
    }
  }
  else {
    if (uVar6 == 0x100) {
      piVar5 = &local_2c;
      if (7 < local_18) {
        piVar5 = local_2c;
      }
      puVar7 = (undefined4 *)Put(param_1,local_54,param_3,param_4,piVar5,uVar10);
      puVar7 = (undefined4 *)Rep(param_1,local_54,*puVar7,puVar7[1],param_6,iVar9);
      iVar9 = 0;
      goto LAB_101315ac;
    }
    puVar7 = (undefined4 *)Rep(param_1,local_54,param_3,param_4,param_6,iVar9);
    iVar9 = 0;
    param_3 = *puVar7;
    param_4 = puVar7[1];
    piVar5 = &local_2c;
    if (7 < local_18) {
      piVar5 = local_2c;
    }
  }
  puVar7 = (undefined4 *)Put(param_1,local_54,param_3,param_4,piVar5,uVar10);
LAB_101315ac:
  local_48 = &local_2c;
  if (7 < local_18) {
    local_48 = local_2c;
  }
  puVar7 = (undefined4 *)
           Put(param_1,local_54,*puVar7,puVar7[1],(int)local_48 + uVar10 * 2,(int)local_4c - uVar10)
  ;
  uVar3 = *puVar7;
  uVar4 = puVar7[1];
  *(undefined4 *)(param_5 + 0x20) = 0;
  *(undefined4 *)(param_5 + 0x24) = 0;
  Rep(param_1,param_2,uVar3,uVar4,param_6,iVar9);
  FUN_10125c94();
  if (7 < local_18) {
    local_48 = (int *)(local_18 * 2 + 2);
    local_4c = local_2c;
    if ((int *)0xfff < local_48) {
      std::_Adjust_manually_vector_aligned(&local_4c,(uint *)&local_48);
    }
    FUN_1013dba5(local_4c,local_48);
  }
  FUN_1013ecd2();
  return;
}

