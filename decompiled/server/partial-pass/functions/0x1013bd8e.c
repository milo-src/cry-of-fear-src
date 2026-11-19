// rea decompile_all
// name: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_date
// address: 0x1013bd8e
// body: available
// range: 0x1013bd8e-0x1013c21b inclusive
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
   >::do_get_date(class std::istreambuf_iterator<char,struct std::char_traits<char> >,class
   std::istreambuf_iterator<char,struct std::char_traits<char> >,class std::ios_base &,int &,struct
   tm *)const 
   
   Library: Visual Studio 2019 Release */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::do_get_date
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          undefined4 *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6,int param_7,uint *param_8,int param_9)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  dateorder dVar5;
  undefined4 *puVar6;
  uint uVar7;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *ptVar8;
  undefined4 uVar9;
  ctype<char> *pcVar10;
  uint *puVar11;
  undefined1 local_28 [8];
  locale local_20 [8];
  int *local_18;
  time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x18;
  local_8 = 0x1013bd9a;
  local_14 = this;
  locale::locale(local_20,*(locale **)(param_7 + 0x30));
  local_8 = 0;
  piVar4 = (int *)FUN_1002f750(local_20);
  local_8 = 0xffffffff;
  local_18 = piVar4;
  FUN_100307e0();
  dVar5 = date_order(this);
  if (dVar5 == 0) {
    dVar5 = 2;
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  puVar11 = param_8;
  if (!bVar2) {
    uVar9 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
      uVar9 = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
    }
    ptVar8 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
             (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(piVar4[3] + (int)ptVar8 * 2) >> 2 & 1) == 0) {
      puVar6 = (undefined4 *)
               get_monthname(local_14,local_20,param_3,uVar9,param_5,param_6,param_7,puVar11,param_9
                            );
      dVar5 = 2;
LAB_1013beab:
      param_3 = *puVar6;
      uVar9 = puVar6[1];
      param_4._0_1_ = (char)uVar9;
      param_4._1_1_ = (byte)((uint)uVar9 >> 8);
      param_4._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
    }
    else if (dVar5 == 2) {
      pcVar10 = (ctype<char> *)(param_9 + 0x10);
      uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0xc,pcVar10);
      *puVar11 = *puVar11 | uVar7;
      *(int *)pcVar10 = *(int *)pcVar10 + -1;
      piVar4 = local_18;
    }
    else {
      if (dVar5 != 1) {
        puVar6 = (undefined4 *)
                 get_year(local_14,local_20,param_3,uVar9,param_5,param_6,param_7,puVar11,param_9);
        goto LAB_1013beab;
      }
      uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0x1f,(ctype<char> *)(param_9 + 0xc));
      *puVar11 = *puVar11 | uVar7;
    }
  }
  while (bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                           ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                            (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5),
        !bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    if ((*(byte *)(piVar4[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (!bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar4 + 0x28);
    guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
    cVar3 = (*pcVar1)();
    if (((cVar3 == ':') || (cVar3 == ',')) || (cVar3 == '/')) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  piVar4 = local_18;
  while (!bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    puVar11 = param_8;
    if ((*(byte *)(piVar4[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
    puVar11 = param_8;
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (!bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    ptVar8 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
             (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(local_18[3] + (int)ptVar8 * 2) >> 2 & 1) == 0) {
      if (dVar5 == 2) {
        *puVar11 = *puVar11 | 2;
      }
      else {
        puVar6 = (undefined4 *)
                 get_monthname(local_14,local_20,param_3,
                               CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4)),param_5
                               ,param_6,param_7,puVar11,param_9);
        param_3 = *puVar6;
        uVar9 = puVar6[1];
        param_4._0_1_ = (char)uVar9;
        param_4._1_1_ = (byte)((uint)uVar9 >> 8);
        param_4._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
        if (dVar5 == 4) {
          dVar5 = 3;
        }
      }
    }
    else if ((dVar5 == 1) || (dVar5 == 3)) {
      pcVar10 = (ctype<char> *)(param_9 + 0x10);
      uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0xc,pcVar10);
      *puVar11 = *puVar11 | uVar7;
      *(int *)pcVar10 = *(int *)pcVar10 + -1;
    }
    else {
      uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                      (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,1,
                      (int *)0x1f,(ctype<char> *)(param_9 + 0xc));
      *puVar11 = *puVar11 | uVar7;
    }
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  piVar4 = local_18;
  while (bVar2 == false) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    if ((*(byte *)(piVar4[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (!bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    pcVar1 = *(code **)(*piVar4 + 0x28);
    guard_check_icall(CONCAT13(param_5._0_1_,CONCAT21(param_4._2_2_,param_4._1_1_)),0);
    cVar3 = (*pcVar1)();
    if (((cVar3 == ':') || (cVar3 == ',')) || (cVar3 == '/')) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  piVar4 = local_18;
  while (!bVar2) {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    puVar11 = param_8;
    if ((*(byte *)(piVar4[3] + (uint)param_4._1_1_ * 2) & 0x48) == 0) break;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc
              ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                      ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                       (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
    puVar11 = param_8;
  }
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
LAB_1013c126:
    *puVar11 = *puVar11 | 2;
  }
  else {
    if ((char)param_4 == '\0') {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek
                ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3);
    }
    ptVar8 = (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *)
             (uint)param_4._1_1_;
    if (((uint)(int)*(short *)(local_18[3] + (int)ptVar8 * 2) >> 2 & 1) == 0) {
      if (dVar5 != 4) goto LAB_1013c126;
      puVar6 = (undefined4 *)
               get_monthname(local_14,local_20,param_3,
                             CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4)),param_5,
                             param_6,param_7,puVar11,param_9);
    }
    else {
      if (dVar5 == 4) {
        pcVar10 = (ctype<char> *)(param_9 + 0x10);
        uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                        (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                        1,(int *)0xc,pcVar10);
        *puVar11 = *puVar11 | uVar7;
        *(int *)pcVar10 = *(int *)pcVar10 + -1;
        goto LAB_1013c1f3;
      }
      if (dVar5 == 3) {
        uVar7 = _Getint(ptVar8,(istreambuf_iterator<char,std::char_traits<char>_> *)local_14,
                        (istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,(int)&param_5,
                        1,(int *)0x1f,(ctype<char> *)(param_9 + 0xc));
        *puVar11 = *puVar11 | uVar7;
        goto LAB_1013c1f3;
      }
      puVar6 = (undefined4 *)
               get_year(local_14,local_28,param_3,
                        CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4)),param_5,
                        param_6,param_7,puVar11,param_9);
    }
    param_3 = *puVar6;
    uVar9 = puVar6[1];
    param_4._0_1_ = (char)uVar9;
    param_4._1_1_ = (byte)((uint)uVar9 >> 8);
    param_4._2_2_ = (undefined2)((uint)uVar9 >> 0x10);
  }
LAB_1013c1f3:
  bVar2 = istreambuf_iterator<char,std::char_traits<char>_>::equal
                    ((istreambuf_iterator<char,std::char_traits<char>_> *)&param_3,
                     (istreambuf_iterator<char,struct_std::char_traits<char>_> *)&param_5);
  if (bVar2) {
    *puVar11 = *puVar11 | 1;
  }
  *param_2 = param_3;
  param_2[1] = CONCAT22(param_4._2_2_,CONCAT11(param_4._1_1_,(char)param_4));
  return;
}

