// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getfmt
// address: 0x10139e29
// body: available
// range: 0x10139e29-0x10139f58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    protected: class std::istreambuf_iterator<char,struct std::char_traits<char> > __thiscall
   std::time_get<char,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   >::_Getfmt(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *,char const *)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getfmt
          (undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,uint *param_8,undefined4 param_9,
          char *param_10)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  locale local_20 [8];
  int *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x10139e35;
  locale::locale(local_20,*(locale **)(param_7 + 0x30));
  local_8 = 0;
  piVar6 = (int *)FUN_1002f750(local_20);
  local_8 = 0xffffffff;
  local_14 = piVar6;
  FUN_100307e0();
  puVar3 = param_8;
  pcVar8 = param_10;
  do {
    cVar4 = *pcVar8;
    if (cVar4 == '\0') {
LAB_10139f30:
      bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                        ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                         (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
      if (bVar5) {
        *puVar3 = *puVar3 | 1;
      }
      *param_2 = param_3;
      param_2[1] = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
      return;
    }
    if (cVar4 == '%') {
      pcVar8 = pcVar8 + 1;
      pcVar1 = *(code **)(*local_18 + 0x24);
      guard_check_icall(local_20,param_3,
                        CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4)),param_5,
                        param_6,param_7,puVar3,param_9,*pcVar8,0);
      puVar7 = (undefined4 *)(*pcVar1)();
      param_3 = *puVar7;
      uVar2 = puVar7[1];
      param_4._0_1_ = (char)uVar2;
      param_4._1_1_ = (byte)((uint)uVar2 >> 8);
      param_4._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
      piVar6 = local_14;
    }
    else if (cVar4 == ' ') {
      while (bVar5 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                               ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                                (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5
                               ), !bVar5) {
        if ((char)param_4 == '\0') {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
        }
        if ((*(byte *)(piVar6[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
        istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                  ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      }
    }
    else {
      if ((char)param_4 == '\0') {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                  ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      }
      pcVar1 = *(code **)(*piVar6 + 0x28);
      guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
      cVar4 = (*pcVar1)();
      if (cVar4 != *pcVar8) {
        *puVar3 = *puVar3 | 2;
        goto LAB_10139f30;
      }
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      piVar6 = local_14;
    }
    pcVar8 = pcVar8 + 1;
  } while( true );
}

