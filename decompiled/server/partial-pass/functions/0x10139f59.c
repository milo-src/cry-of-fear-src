// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getint
// address: 0x10139f59
// body: available
// range: 0x10139f59-0x1013a11b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    private: int __cdecl std::time_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getint(class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,int,int,int &,class std::ctype<char> const &)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getint
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          istreambuf_iterator<char,std::char_traits<char>_> *param_1,
          istreambuf_iterator<char,std::char_traits<char>_> *param_2,int param_3,int param_4,
          int *param_5,ctype<char> *param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int *in_stack_0000001c;
  char *local_44;
  int local_40;
  char *local_3c;
  undefined4 local_38;
  istreambuf_iterator<char,std::char_traits<char>_> *local_34;
  int *local_30;
  char local_29;
  char local_28;
  char local_27 [30];
  char local_9;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar6 = &local_28;
  local_34 = (istreambuf_iterator<char,std::char_traits<char>_> *)param_3;
  local_30 = in_stack_0000001c;
  local_3c = pcVar6;
  bVar2 = operator!=<char,std::char_traits<char>_>
                    (param_2,(istreambuf_iterator<char,std::char_traits<char>_> *)param_3);
  if (bVar2) {
    if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
    }
    local_38 = CONCAT31(local_38._1_3_,param_2[5]);
    pcVar1 = *(code **)(*in_stack_0000001c + 0x28);
    guard_check_icall(local_38,0);
    cVar3 = (*pcVar1)();
    if ((cVar3 == '+') || (in_stack_0000001c = local_30, cVar3 == '-')) {
      pcVar6 = local_27;
      local_3c = pcVar6;
      local_28 = cVar3;
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
      in_stack_0000001c = local_30;
    }
  }
  local_29 = '\0';
  bVar2 = operator!=<char,std::char_traits<char>_>(param_2,local_34);
  cVar3 = local_29;
  if (bVar2) {
    do {
      if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
      }
      local_38 = CONCAT31(local_38._1_3_,param_2[5]);
      pcVar1 = *(code **)(*in_stack_0000001c + 0x28);
      guard_check_icall(local_38,0);
      cVar4 = (*pcVar1)();
      if (cVar4 != '0') break;
      cVar3 = '\x01';
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
      bVar2 = operator!=<char,std::char_traits<char>_>(param_2,local_34);
      in_stack_0000001c = local_30;
    } while (bVar2);
    pcVar6 = local_3c;
    local_29 = cVar3;
    if (cVar3 != '\0') {
      *local_3c = '0';
      pcVar6 = local_3c + 1;
    }
  }
  while (bVar2 = operator!=<char,std::char_traits<char>_>(param_2,local_34), bVar2) {
    if (param_2[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_2);
    }
    local_38 = CONCAT31(local_38._1_3_,param_2[5]);
    pcVar1 = *(code **)(*local_30 + 0x28);
    guard_check_icall(local_38,0);
    cVar3 = (*pcVar1)();
    if (9 < (byte)(cVar3 - 0x30U)) break;
    *pcVar6 = cVar3;
    if (pcVar6 < &local_9) {
      pcVar6 = pcVar6 + 1;
    }
    local_29 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_2);
  }
  if (local_29 == '\0') {
    pcVar6 = &local_28;
  }
  *pcVar6 = '\0';
  local_40 = 0;
  iVar5 = __Stolx(&local_28,&local_44,10,&local_40);
  istreambuf_iterator<char,std::char_traits<char>_>::equal
            (param_2,(istreambuf_iterator<char,struct_std::char_traits<char>_> *)local_34);
  if ((((local_44 != &local_28) && (local_40 == 0)) && (param_4 <= iVar5)) &&
     (iVar5 <= (int)param_5)) {
    *(int *)param_6 = iVar5;
  }
  iVar5 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar5;
}

