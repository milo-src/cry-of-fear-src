// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
// address: 0x1013b9e9
// body: available
// range: 0x1013b9e9-0x1013bcf7 inclusive
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
   >::do_get(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *,char,char)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,uint *param_8,ctype<char> *param_9,char param_10)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  ctype<char> *pcVar4;
  uint uVar5;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this_00;
  uint uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  locale local_20 [4];
  uint local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar7 = param_7;
  uStack_4 = 0x10;
  local_8 = 0x1013b9f5;
  locale::locale(local_20,*(locale **)(param_7 + 0x30));
  local_8 = 0;
  local_14 = FUN_1002f750(local_20);
  local_8 = 0xffffffff;
  FUN_100307e0();
  puVar1 = param_8;
  this_00 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
            (param_10 + -0x41);
  local_1c = 0;
  *param_8 = 0;
  switch(param_10) {
  case 'A':
  case 'a':
    puVar3 = (undefined4 *)
             FID_conflict_get_weekday
                       (local_20,param_3,param_4,param_5,param_6,iVar7,param_8,param_9);
    goto LAB_1013ba66;
  case 'B':
  case 'b':
  case 'h':
    puVar3 = (undefined4 *)
             get_monthname(this,local_20,param_3,param_4,param_5,param_6,iVar7,param_8,param_9);
    goto LAB_1013ba66;
  case 'C':
    uVar5 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x63,(ctype<char> *)&local_1c);
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) != 0) goto LAB_1013bccf;
    uVar6 = (local_1c - 0x13) * 100;
    goto LAB_1013baea;
  case 'D':
    pcVar9 = "%m / %d / %y";
    break;
  default:
    *param_8 = 2;
    goto LAB_1013bccf;
  case 'H':
    pcVar4 = param_9 + 8;
    piVar8 = (int *)0x17;
    goto LAB_1013bb31;
  case 'I':
    uVar5 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                    (int *)0xc,(ctype<char> *)&local_1c);
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) == 0) {
      *(uint *)(param_9 + 8) = -(uint)(local_1c != 0xc) & local_1c;
    }
    goto LAB_1013bccf;
  case 'M':
    pcVar4 = param_9 + 4;
    piVar8 = (int *)0x3b;
    goto LAB_1013bb31;
  case 'R':
    pcVar9 = "%H : %M";
    break;
  case 'S':
    piVar8 = (int *)0x3c;
    pcVar4 = param_9;
    goto LAB_1013bb31;
  case 'T':
  case 'X':
    pcVar9 = "%H : %M : %S";
    break;
  case 'U':
  case 'W':
    piVar8 = (int *)0x35;
    pcVar4 = param_9 + 0x1c;
    goto LAB_1013bb31;
  case 'Y':
    puVar3 = (undefined4 *)
             get_year(this,local_18,param_3,param_4,param_5,param_6,iVar7,param_8,param_9);
    goto LAB_1013ba66;
  case 'c':
    pcVar9 = "%b %d %H : %M : %S %Y";
    break;
  case 'd':
  case 'e':
    pcVar4 = param_9 + 0xc;
    piVar8 = (int *)0x1f;
    goto LAB_1013bb01;
  case 'j':
    pcVar4 = param_9 + 0x1c;
    piVar8 = (int *)0x16e;
LAB_1013bb01:
    iVar7 = 1;
    goto LAB_1013bb03;
  case 'm':
    uVar5 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                    (int *)0xc,(ctype<char> *)&local_1c);
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) == 0) {
      *(uint *)(param_9 + 0x10) = local_1c - 1;
    }
    goto LAB_1013bccf;
  case 'n':
  case 't':
    pcVar9 = " ";
    break;
  case 'p':
    iVar7 = _Getloctxt<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,std::char_traits<char>_> *)&param_5,0,
                       ":AM:am:PM:pm");
    if (iVar7 < 0) {
      *puVar1 = *puVar1 | 2;
    }
    else if (1 < iVar7) {
      *(int *)(param_9 + 8) = *(int *)(param_9 + 8) + 0xc;
    }
    goto LAB_1013bccf;
  case 'r':
    pcVar9 = "%I : %M : %S %p";
    break;
  case 'w':
    piVar8 = (int *)0x6;
    pcVar4 = param_9 + 0x18;
LAB_1013bb31:
    iVar7 = 0;
LAB_1013bb03:
    uVar6 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                    iVar7,piVar8,pcVar4);
    *puVar1 = *puVar1 | uVar6;
    goto LAB_1013bccf;
  case 'x':
    pcVar9 = "%d / %m / %y";
    break;
  case 'y':
    uVar5 = _Getint(this_00,(istreambuf_iterator<char,std::char_traits<char>_> *)this,
                    (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,0,
                    (int *)0x63,(ctype<char> *)&local_1c);
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) != 0) goto LAB_1013bccf;
    uVar6 = local_1c;
    if ((int)local_1c < 0x45) {
      uVar6 = local_1c + 100;
    }
LAB_1013baea:
    *(uint *)(param_9 + 0x14) = uVar6;
    goto LAB_1013bccf;
  }
  puVar3 = (undefined4 *)
           _Getfmt(this,local_20,param_3,param_4,param_5,param_6,iVar7,param_8,param_9,pcVar9);
LAB_1013ba66:
  param_3 = *puVar3;
  param_4 = puVar3[1];
LAB_1013bccf:
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar1 = *puVar1 | 1;
  }
  *param_2 = param_3;
  param_2[1] = param_4;
  return;
}

