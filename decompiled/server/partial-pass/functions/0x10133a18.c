// rea decompile_all
// name: do_get
// address: 0x10133a18
// body: available
// range: 0x10133a18-0x10133af1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::money_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,bool,class
   std::ios_base &,int &,class std::basic_string<unsigned short,struct std::char_traits<unsigned
   short>,class std::allocator<unsigned short> > &)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::money_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,bool,class std::ios_base &,int &,class
   std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >
   &)const 
   
   Library: Visual Studio 2019 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,undefined4 param_6,undefined4 param_7,uint *param_8,
           undefined4 *param_9)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  char ****ppppcVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 auStack_8c [10];
  undefined4 uStack_78;
  char ***pppcStack_74;
  undefined4 *puStack_70;
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  uint uStack_64;
  undefined1 *puStack_60;
  undefined4 *local_4c;
  uint local_48;
  char ***local_44 [4];
  uint local_34;
  uint local_30;
  undefined1 local_2c [20];
  undefined2 local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar2 = param_9;
  puVar1 = param_8;
  uStack_4 = 0x3c;
  local_8 = 0x10133a24;
  puStack_60 = local_2c;
  local_4c = param_1;
  uStack_64 = param_7;
  uStack_68 = param_6;
  puStack_6c = (undefined1 *)&param_4;
  puStack_70 = &param_2;
  pppcStack_74 = (char ***)local_44;
  uStack_78 = 0x10133a4c;
  Getmfld();
  local_48 = local_34;
  uVar7 = 0;
  puStack_60 = (undefined1 *)&param_4;
  local_8 = 0;
  uStack_64 = 0x10133a63;
  cVar4 = equal();
  uVar3 = local_48;
  if (cVar4 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  if (local_48 == 0) {
    *puVar1 = *puVar1 | 2;
  }
  else {
    puStack_60 = (undefined1 *)0x0;
    uStack_64 = local_48;
    uStack_68 = 0x10133a80;
    FID_conflict_resize();
    ppppcVar5 = local_44;
    if (0xf < local_30) {
      ppppcVar5 = (char ****)local_44[0];
    }
    if (*(char *)ppppcVar5 == '-') {
      puVar6 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar6 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)puVar6 = local_18;
      uVar7 = 1;
    }
    for (; uVar7 < uVar3; uVar7 = uVar7 + 1) {
      ppppcVar5 = local_44;
      if (0xf < local_30) {
        ppppcVar5 = (char ****)local_44[0];
      }
      puVar6 = puVar2;
      if (7 < (uint)puVar2[5]) {
        puVar6 = (undefined4 *)*puVar2;
      }
      *(undefined2 *)((int)puVar6 + uVar7 * 2) = auStack_8c[*(char *)((int)ppppcVar5 + uVar7)];
    }
  }
  *local_4c = param_2;
  local_4c[1] = param_3;
  puStack_60 = (undefined1 *)0x10133ae8;
  FUN_10125c94();
  puStack_60 = (undefined1 *)0x10133aef;
  FUN_1013ecd2();
  return;
}

