// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_time
// address: 0x1013c25c
// body: available
// range: 0x1013c25c-0x1013c37d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: virtual class std::istreambuf_iterator<char,struct std::char_traits<char> >
   __thiscall std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::do_get_time(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_time
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
          undefined4 param_6,int param_7,uint *param_8,ctype<char> *param_9)

{
  code *pcVar1;
  uint *puVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_01;
  locale local_1c [8];
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x1013c268;
  local_14 = this;
  locale::locale(local_1c,*(locale **)(param_7 + 0x30));
  local_8 = 0;
  piVar4 = (int *)FUN_1002f750(local_1c);
  local_8 = 0xffffffff;
  FUN_100307e0();
  uVar5 = _Getint((time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
                  (param_9 + 8),(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                  (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                  (int *)0x17,param_9 + 8);
  puVar2 = param_8;
  *param_8 = *param_8 | uVar5;
  if (*param_8 == 0) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar4 + 0x28);
    guard_check_icall(CONCAT13(param_5,param_4._1_3_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 != ':') goto LAB_1013c30e;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    uVar5 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x3b,param_9 + 4);
    *puVar2 = *puVar2 | uVar5;
  }
  else {
LAB_1013c30e:
    *puVar2 = *puVar2 | 2;
  }
  if (*puVar2 == 0) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar4 + 0x28);
    guard_check_icall(CONCAT13(param_5,param_4._1_3_),0);
    cVar3 = (*pcVar1)();
    if (cVar3 == ':') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar5 = _Getint(this_01,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                      (int *)0x3b,param_9);
      *puVar2 = *puVar2 | uVar5;
      goto LAB_1013c368;
    }
  }
  *puVar2 = *puVar2 | 2;
LAB_1013c368:
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

