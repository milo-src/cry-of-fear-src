// rea decompile_all
// name: do_get
// address: 0x101343ac
// body: available
// range: 0x101343ac-0x101345e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,bool &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,bool &)const 
   
   Library: Visual Studio 2019 Release */

void do_get(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 *param_6,uint *param_7,undefined1 *param_8)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  int iVar8;
  locale local_78 [8];
  char *local_70;
  undefined4 *local_6c;
  int *local_68;
  undefined4 ***local_64 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_3c;
  uint local_38;
  char local_34 [44];
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar3 = param_8;
  puVar2 = param_7;
  uStack_4 = 0x68;
  local_8 = 0x101343b8;
  local_70 = param_1;
  local_6c = param_6;
  if ((param_6[5] & 0x4000) == 0) {
    std::locale::locale(local_78,(locale *)param_6[0xc]);
    local_8 = 4;
    local_70 = (char *)Getifld(local_68,local_34,&param_2,&param_4,local_6c[5],local_78);
    local_8 = 0xffffffff;
    FUN_100307e0();
    if (local_34[0] == '\0') {
      *puVar3 = 0;
    }
    else {
      iVar8 = __Stolx(local_34,&local_70,local_70,&local_6c);
      if ((local_70 == local_34) || (local_6c != (undefined4 *)0x0)) {
        *puVar3 = 1;
      }
      else {
        *puVar3 = iVar8 != 0;
        if ((iVar8 == 0) || (iVar8 == 1)) goto LAB_1013452e;
      }
    }
    *puVar2 = 2;
  }
  else {
    std::locale::locale(local_78,(locale *)param_6[0xc]);
    local_8 = 0;
    piVar5 = (int *)FUN_1012998f(local_78);
    local_8 = 0xffffffff;
    local_68 = piVar5;
    FUN_100307e0();
    local_3c = 0;
    local_38 = 7;
    local_4c = (undefined4 *)((uint)local_4c._2_2_ << 0x10);
    FID_conflict_assign(1,0);
    local_8 = 1;
    pcVar1 = *(code **)(*piVar5 + 0x18);
    guard_check_icall(local_64);
    (*pcVar1)();
    local_8._0_1_ = 2;
    ppppuVar6 = local_64;
    if (7 < local_50) {
      ppppuVar6 = (undefined4 ****)local_64[0];
    }
    FID_conflict_append(ppppuVar6,local_54);
    local_8._0_1_ = 1;
    FID_conflict__Tidy_deallocate();
    FID_conflict_push_back(0);
    pcVar1 = *(code **)(*local_68 + 0x1c);
    guard_check_icall(local_64);
    (*pcVar1)();
    local_8._0_1_ = 3;
    ppppuVar6 = local_64;
    if (7 < local_50) {
      ppppuVar6 = (undefined4 ****)local_64[0];
    }
    FID_conflict_append(ppppuVar6,local_54);
    local_8 = CONCAT31(local_8._1_3_,1);
    FID_conflict__Tidy_deallocate();
    puVar7 = &local_4c;
    if (7 < local_38) {
      puVar7 = local_4c;
    }
    iVar8 = _Getloctxt<>(&param_2,&param_4,2,puVar7);
    if (iVar8 == 0) {
      *puVar3 = 0;
    }
    else if (iVar8 == 1) {
      *puVar3 = 1;
    }
    else {
      *puVar3 = 0;
      *puVar2 = 2;
    }
    local_8 = 0xffffffff;
    param_1 = local_70;
    if (7 < local_38) {
      local_68 = (int *)(local_38 * 2 + 2);
      local_6c = local_4c;
      if ((int *)0xfff < local_68) {
        std::_Adjust_manually_vector_aligned(&local_6c,(uint *)&local_68);
      }
      FUN_1013dba5(local_6c,local_68);
      param_1 = local_70;
    }
  }
LAB_1013452e:
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  *(undefined4 *)param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  FUN_1013ecd2();
  return;
}

