// rea decompile_all
// name: do_get_date
// address: 0x101356a8
// body: available
// range: 0x101356a8-0x10135b55 inclusive
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
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >
   >::do_get_date(class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned
   short> >,class std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short>
   >,class std::ios_base &,int &,struct tm *)const 
    protected: virtual class std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >
   __thiscall std::time_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::do_get_date(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> >,class std::ios_base &,int &,struct tm *)const 
   
   Library: Visual Studio 2019 Release */

void do_get_date(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6,uint *param_7,int param_8)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  locale local_1c [4];
  int local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x101356b4;
  std::locale::locale(local_1c,*(locale **)(param_6 + 0x30));
  local_8 = 0;
  piVar5 = (int *)FUN_1012903f(local_1c);
  local_8 = 0xffffffff;
  FUN_100307e0();
  local_18 = date_order();
  if (local_18 == 0) {
    local_18 = 2;
  }
  cVar4 = equal(&param_4);
  puVar2 = param_7;
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      puVar6 = (undefined4 *)
               get_monthname(local_1c,param_2,
                             CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                             CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                             param_8);
      param_2 = *puVar6;
      uVar7 = puVar6[1];
      local_18 = 2;
LAB_101357e5:
      param_3._0_1_ = (char)uVar7;
      param_3._1_1_ = (undefined1)((uint)uVar7 >> 8);
      param_3._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
    }
    else if (local_18 == 2) {
      piVar9 = (int *)(param_8 + 0x10);
      uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar5);
      *puVar2 = *puVar2 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      if (local_18 != 1) {
        puVar6 = (undefined4 *)
                 get_year(local_24,param_2,
                          CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                          CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,param_8
                         );
        param_2 = *puVar6;
        uVar7 = puVar6[1];
        goto LAB_101357e5;
      }
      uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar5);
      *puVar2 = *puVar2 | uVar8;
    }
  }
  while (cVar4 = equal(&param_4), cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') break;
    Inc();
  }
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') goto LAB_1013589b;
  if ((char)param_3 == '\0') {
    Peek();
  }
  pcVar1 = *(code **)(*piVar5 + 0x38);
  guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_1013589b;
  do {
    Inc();
LAB_1013589b:
    cVar4 = equal(&param_4);
    if (cVar4 != '\0') break;
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  cVar4 = equal(&param_4);
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    iVar3 = local_18;
    if (cVar4 == '\0') {
      if (local_18 == 2) {
        *puVar2 = *puVar2 | 2;
      }
      else {
        puVar6 = (undefined4 *)
                 get_monthname(local_24,param_2,
                               CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                               CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                               param_8);
        param_2 = *puVar6;
        uVar7 = puVar6[1];
        param_3._0_1_ = (char)uVar7;
        param_3._1_1_ = (undefined1)((uint)uVar7 >> 8);
        param_3._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
        if (iVar3 == 4) {
          local_18 = 3;
        }
      }
    }
    else if ((local_18 == 1) || (local_18 == 3)) {
      piVar9 = (int *)(param_8 + 0x10);
      uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar5);
      *puVar2 = *puVar2 | uVar8;
      *piVar9 = *piVar9 + -1;
    }
    else {
      uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar5);
      *puVar2 = *puVar2 | uVar8;
    }
  }
  while (cVar4 = equal(&param_4), cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') break;
    Inc();
  }
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') goto LAB_10135a37;
  if ((char)param_3 == '\0') {
    Peek();
  }
  pcVar1 = *(code **)(*piVar5 + 0x38);
  guard_check_icall(CONCAT22((undefined2)param_4,param_3._2_2_),0);
  cVar4 = (*pcVar1)();
  if (((cVar4 != ':') && (cVar4 != ',')) && (cVar4 != '/')) goto LAB_10135a37;
  do {
    Inc();
LAB_10135a37:
    cVar4 = equal(&param_4);
    if (cVar4 != '\0') break;
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(0x48,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
  } while (cVar4 != '\0');
  cVar4 = equal(&param_4);
  if (cVar4 == '\0') {
    if ((char)param_3 == '\0') {
      Peek();
    }
    pcVar1 = *(code **)(*piVar5 + 0x10);
    guard_check_icall(4,CONCAT22((undefined2)param_4,param_3._2_2_));
    cVar4 = (*pcVar1)();
    if (cVar4 == '\0') {
      if (local_18 != 4) goto LAB_10135a57;
      puVar6 = (undefined4 *)
               get_monthname(local_24,param_2,
                             CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                             CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,
                             param_8);
    }
    else {
      if (local_18 == 4) {
        piVar9 = (int *)(param_8 + 0x10);
        uVar8 = Getint(local_14,&param_2,&param_4,1,0xc,piVar9,piVar5);
        *puVar2 = *puVar2 | uVar8;
        *piVar9 = *piVar9 + -1;
        goto LAB_10135b2d;
      }
      if (local_18 == 3) {
        uVar8 = Getint(local_14,&param_2,&param_4,1,0x1f,param_8 + 0xc,piVar5);
        *puVar2 = *puVar2 | uVar8;
        goto LAB_10135b2d;
      }
      puVar6 = (undefined4 *)
               get_year(local_2c,param_2,
                        CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3)),
                        CONCAT22(param_4._2_2_,(undefined2)param_4),param_5,param_6,puVar2,param_8);
    }
    param_2 = *puVar6;
    uVar7 = puVar6[1];
    param_3._0_1_ = (char)uVar7;
    param_3._1_1_ = (undefined1)((uint)uVar7 >> 8);
    param_3._2_2_ = (undefined2)((uint)uVar7 >> 0x10);
  }
  else {
LAB_10135a57:
    *puVar2 = *puVar2 | 2;
  }
LAB_10135b2d:
  cVar4 = equal(&param_4);
  if (cVar4 != '\0') {
    *puVar2 = *puVar2 | 1;
  }
  *param_1 = param_2;
  param_1[1] = CONCAT22(param_3._2_2_,CONCAT11(param_3._1_1_,(char)param_3));
  return;
}

