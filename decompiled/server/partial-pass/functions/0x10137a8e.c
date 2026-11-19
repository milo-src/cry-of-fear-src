// rea decompile_all
// name: do_put
// address: 0x10137a8e
// body: available
// range: 0x10137a8e-0x10137c41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::ostreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::num_put<unsigned short,class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_put(class
   std::ostreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,unsigned short,bool)const 
    protected: virtual class std::ostreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::num_put<wchar_t,class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_put(class std::ostreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,wchar_t,bool)const 
   
   Library: Visual Studio 2019 Release */

void do_put(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,ushort param_5,
           char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int iVar6;
  locale local_54 [4];
  uint local_50;
  uint local_4c;
  int *local_48;
  undefined1 local_44 [24];
  undefined4 local_2c;
  uint local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x10137a9a;
  local_4c = (uint)param_5;
  local_48 = in_ECX;
  if ((*(uint *)(param_4 + 0x14) & 0x4000) == 0) {
    iVar6 = *in_ECX;
    guard_check_icall(param_1,param_2,param_3,param_4,local_4c,param_6);
    (**(code **)(iVar6 + 0x24))();
  }
  else {
    std::locale::locale(local_54,*(locale **)(param_4 + 0x30));
    local_8 = 0;
    piVar3 = (int *)FUN_10129a24(local_54);
    FUN_100307e0();
    local_1c = 0;
    local_18 = 7;
    local_2c = (int *)((uint)local_2c._2_2_ << 0x10);
    iVar6 = *piVar3;
    local_8 = 1;
    if (param_6 == '\0') {
      guard_check_icall(local_44);
      (**(code **)(iVar6 + 0x18))();
    }
    else {
      guard_check_icall(local_44);
      (**(code **)(iVar6 + 0x1c))();
    }
    local_50 = local_50 & 0xffffff00;
    FID_conflict__Move_assign(local_44,local_50);
    FID_conflict__Tidy_deallocate();
    if ((*(int *)(param_4 + 0x24) < 0) ||
       (((*(int *)(param_4 + 0x24) < 1 && (*(int *)(param_4 + 0x20) == 0)) ||
        (*(uint *)(param_4 + 0x20) <= local_1c)))) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(uint *)(param_4 + 0x20) - local_1c;
    }
    if ((*(uint *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar4 = (undefined4 *)Rep(local_48,local_54,param_2,param_3,local_4c,iVar6);
      iVar6 = 0;
      param_2 = *puVar4;
      param_3 = puVar4[1];
    }
    piVar3 = local_2c;
    piVar5 = &local_2c;
    if (7 < local_18) {
      piVar5 = local_2c;
    }
    puVar4 = (undefined4 *)Put(local_48,local_54,param_2,param_3,piVar5,local_1c);
    uVar1 = *puVar4;
    uVar2 = puVar4[1];
    *(undefined4 *)(param_4 + 0x20) = 0;
    *(undefined4 *)(param_4 + 0x24) = 0;
    Rep(local_48,param_1,uVar1,uVar2,local_4c,iVar6);
    if (7 < local_18) {
      local_4c = local_18 * 2 + 2;
      local_48 = piVar3;
      if (0xfff < local_4c) {
        std::_Adjust_manually_vector_aligned(&local_48,&local_4c);
      }
      FUN_1013dba5(local_48,local_4c);
    }
  }
  FUN_1013ecd2();
  return;
}

