// rea decompile_all
// name: do_get
// address: 0x10134f5e
// body: available
// range: 0x10134f5e-0x1013526c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > __thiscall std::time_get<unsigned short,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > >::do_get(class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >,class
   std::ios_base &,int &,struct tm *,char,char)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,struct tm *,char,char)const 
   
   Library: Visual Studio 2019 Release */

void do_get(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
           undefined4 param_5,int param_6,uint *param_7,int param_8,undefined1 param_9)

{
  uint *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  locale local_20 [4];
  uint local_1c;
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  iVar4 = param_6;
  uStack_4 = 0x10;
  local_8 = 0x10134f6a;
  std::locale::locale(local_20,*(locale **)(param_6 + 0x30));
  local_8 = 0;
  local_14 = FUN_1012903f(local_20);
  local_8 = 0xffffffff;
  FUN_100307e0();
  puVar1 = param_7;
  local_1c = 0;
  *param_7 = 0;
  switch(param_9) {
  case 0x41:
  case 0x61:
    puVar3 = (undefined4 *)
             FID_conflict_get_weekday
                       (local_20,param_2,param_3,param_4,param_5,iVar4,param_7,param_8);
    goto LAB_10134fdb;
  case 0x42:
  case 0x62:
  case 0x68:
    puVar3 = (undefined4 *)
             get_monthname(local_20,param_2,param_3,param_4,param_5,iVar4,param_7,param_8);
    goto LAB_10134fdb;
  case 0x43:
    uVar5 = Getint();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) != 0) goto LAB_10135244;
    uVar6 = (local_1c - 0x13) * 100;
    goto LAB_1013505f;
  case 0x44:
    pcVar7 = "%m / %d / %y";
    break;
  default:
    *param_7 = 2;
    goto LAB_10135244;
  case 0x48:
    goto LAB_10135078;
  case 0x49:
    uVar5 = Getint();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) == 0) {
      *(uint *)(param_8 + 8) = -(uint)(local_1c != 0xc) & local_1c;
    }
    goto LAB_10135244;
  case 0x4d:
    goto LAB_10135078;
  case 0x52:
    pcVar7 = "%H : %M";
    break;
  case 0x53:
    goto LAB_10135078;
  case 0x54:
  case 0x58:
    pcVar7 = "%H : %M : %S";
    break;
  case 0x55:
  case 0x57:
    goto LAB_10135078;
  case 0x59:
    puVar3 = (undefined4 *)get_year(local_18,param_2,param_3,param_4,param_5,iVar4,param_7,param_8);
    goto LAB_10134fdb;
  case 99:
    pcVar7 = "%b %d %H : %M : %S %Y";
    break;
  case 100:
  case 0x65:
    goto LAB_10135078;
  case 0x6a:
    goto LAB_10135078;
  case 0x6d:
    uVar5 = Getint();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) == 0) {
      *(uint *)(param_8 + 0x10) = local_1c - 1;
    }
    goto LAB_10135244;
  case 0x6e:
  case 0x74:
    pcVar7 = " ";
    break;
  case 0x70:
    iVar4 = _Getloctxt<>(&param_2,&param_4,0,":AM:am:PM:pm");
    if (iVar4 < 0) {
      *puVar1 = *puVar1 | 2;
    }
    else if (1 < iVar4) {
      *(int *)(param_8 + 8) = *(int *)(param_8 + 8) + 0xc;
    }
    goto LAB_10135244;
  case 0x72:
    pcVar7 = "%I : %M : %S %p";
    break;
  case 0x77:
LAB_10135078:
    uVar6 = Getint();
    *puVar1 = *puVar1 | uVar6;
    goto LAB_10135244;
  case 0x78:
    pcVar7 = "%d / %m / %y";
    break;
  case 0x79:
    uVar5 = Getint();
    uVar6 = *puVar1;
    *puVar1 = uVar6 | uVar5;
    if (((uVar6 | uVar5) & 2) != 0) goto LAB_10135244;
    uVar6 = local_1c;
    if ((int)local_1c < 0x45) {
      uVar6 = local_1c + 100;
    }
LAB_1013505f:
    *(uint *)(param_8 + 0x14) = uVar6;
    goto LAB_10135244;
  }
  puVar3 = (undefined4 *)
           Getfmt(local_20,param_2,param_3,param_4,param_5,iVar4,param_7,param_8,pcVar7);
LAB_10134fdb:
  param_2 = *puVar3;
  param_3 = puVar3[1];
LAB_10135244:
  cVar2 = equal(&param_4);
  if (cVar2 != '\0') {
    *puVar1 = *puVar1 | 1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

