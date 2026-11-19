// rea decompile_all
// name: Getfmt
// address: 0x1012e4bd
// body: available
// range: 0x1012e4bd-0x1012e611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short>
   > __thiscall std::time_get<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >::_Getfmt(class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> >,class std::ios_base &,int &,struct tm *,char
   const *)const 
    protected: class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> > __thiscall
   std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   >::_Getfmt(class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class
   std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >,class std::ios_base &,int
   &,struct tm *,char const *)const 
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void Getfmt(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,int param_6,uint *param_7,undefined4 param_8,char *param_9)

{
  code *pcVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  char *pcVar7;
  locale local_20 [8];
  int *local_18;
  int *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x10;
  local_8 = 0x1012e4c9;
  std::locale::locale(local_20,*(locale **)(param_6 + 0x30));
  local_8 = 0;
  piVar5 = (int *)FUN_1012903f(local_20);
  local_8 = 0xffffffff;
  local_14 = piVar5;
  FUN_100307e0();
  puVar3 = param_7;
  pcVar7 = param_9;
  do {
    cVar4 = *pcVar7;
    if (cVar4 == '\0') {
LAB_1012e5e9:
      cVar4 = equal(&param_4);
      if (cVar4 != '\0') {
        *puVar3 = *puVar3 | 1;
      }
      *param_1 = param_2;
      param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
      return;
    }
    if (cVar4 == '%') {
      pcVar7 = pcVar7 + 1;
      pcVar1 = *(code **)(*local_18 + 0x24);
      guard_check_icall(local_20,param_2,
                        CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                        CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar3,param_8,
                        *pcVar7,0);
      puVar6 = (undefined4 *)(*pcVar1)();
      param_2 = *puVar6;
      uVar2 = puVar6[1];
      param_3._0_1_ = (char)uVar2;
      param_3._1_1_ = (undefined1)((uint)uVar2 >> 8);
      param_3._2_2_ = (undefined2)((uint)uVar2 >> 0x10);
    }
    else if (cVar4 == ' ') {
      cVar4 = equal(&param_4);
      while (cVar4 == '\0') {
        if ((char)param_3 == '\0') {
          Peek();
        }
        pcVar1 = *(code **)(*piVar5 + 0x10);
        guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
        cVar4 = (*pcVar1)();
        if (cVar4 == '\0') break;
        Inc();
        cVar4 = equal(&param_4);
        piVar5 = local_14;
      }
    }
    else {
      if ((char)param_3 == '\0') {
        Peek();
      }
      pcVar1 = *(code **)(*piVar5 + 0x38);
      guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
      cVar4 = (*pcVar1)();
      if (cVar4 != *pcVar7) {
        *puVar3 = *puVar3 | 2;
        goto LAB_1012e5e9;
      }
      Inc();
    }
    pcVar7 = pcVar7 + 1;
    piVar5 = local_14;
  } while( true );
}

