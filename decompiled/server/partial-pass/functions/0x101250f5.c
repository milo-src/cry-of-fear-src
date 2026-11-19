// rea decompile_all
// name: std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getifld
// address: 0x101250f5
// body: available
// range: 0x101250f5-0x101254b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Single Match
    private: int __cdecl std::num_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::_Getifld(char *,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > &,class std::istreambuf_iterator<char,struct std::char_traits<char> >
   &,int,class std::locale const &)const 
   
   Library: Visual Studio 2019 Release */

int __thiscall
std::num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getifld
          (num_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,char *param_1
          ,istreambuf_iterator<char,std::char_traits<char>_> *param_2,
          istreambuf_iterator<char,std::char_traits<char>_> *param_3,int param_4,locale *param_5)

{
  code *pcVar1;
  bool bVar2;
  istreambuf_iterator<char,std::char_traits<char>_> iVar3;
  numpunct<char> *this_00;
  int *piVar4;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar5;
  istreambuf_iterator<char,std::char_traits<char>_> *piVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  istreambuf_iterator<char,std::char_traits<char>_> *in_stack_00000018;
  char local_78;
  istreambuf_iterator<char,std::char_traits<char>_> *local_70;
  istreambuf_iterator<char,std::char_traits<char>_> *local_6c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_68;
  char local_63;
  istreambuf_iterator<char,std::char_traits<char>_> local_62;
  char local_61;
  istreambuf_iterator<char,std::char_traits<char>_> *local_60 [4];
  int local_50;
  uint local_4c;
  istreambuf_iterator<char,std::char_traits<char>_> *local_48 [4];
  undefined4 local_38;
  uint local_34;
  istreambuf_iterator<char,std::char_traits<char>_> local_30 [22];
  istreambuf_iterator<char,std::char_traits<char>_> local_1a;
  istreambuf_iterator<char,std::char_traits<char>_> local_19;
  istreambuf_iterator<char,std::char_traits<char>_> local_18;
  istreambuf_iterator<char,std::char_traits<char>_> local_17;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x6c;
  local_8 = 0x10125101;
  local_70 = param_2;
  local_68 = in_stack_00000018;
  this_00 = (numpunct<char> *)FUN_10049950();
  pcVar1 = *(code **)(*(int *)this_00 + 0x14);
  guard_check_icall(local_60);
  (*pcVar1)();
  local_8 = 0;
  if (local_50 == 0) {
    local_62 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  }
  else {
    local_62 = (istreambuf_iterator<char,std::char_traits<char>_>)
               numpunct<char>::thousands_sep(this_00);
  }
  piVar4 = (int *)FUN_1002f750(local_68);
  pcVar1 = *(code **)(*piVar4 + 0x1c);
  guard_check_icall("0123456789ABCDEFabcdef-+Xx",&DAT_101e8567,local_30);
  (*pcVar1)();
  piVar5 = local_70;
  local_6c = local_70;
  bVar2 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)param_4);
  if (bVar2) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar3 = param_3[5];
    if (iVar3 == local_19) {
      *piVar5 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2b;
    }
    else {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar3 = param_3[5];
      }
      if (iVar3 != local_1a) goto LAB_101251ce;
      *piVar5 = (istreambuf_iterator<char,std::char_traits<char>_>)0x2d;
    }
    local_6c = piVar5 + 1;
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
LAB_101251ce:
  uVar9 = (uint)param_5 & 0xe00;
  local_68 = (istreambuf_iterator<char,std::char_traits<char>_> *)0xa;
  if (uVar9 == 0x400) {
    bVar8 = 8;
  }
  else if (uVar9 == 0x800) {
    bVar8 = 0x10;
  }
  else {
    bVar8 = -(uVar9 != 0) & 10;
  }
  local_63 = '\0';
  bVar2 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)param_4);
  if (bVar2) {
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    if (param_3[5] != local_30[0]) goto LAB_10125296;
    local_61 = '\x01';
    local_78 = '\x01';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
    bVar2 = operator!=<char,std::char_traits<char>_>
                      (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)param_4);
    cVar7 = local_78;
    if (!bVar2) {
LAB_1012528d:
      if (bVar8 == 0) {
        bVar8 = 8;
        goto LAB_101252a6;
      }
      goto LAB_101252a2;
    }
    if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
      istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
    }
    iVar3 = param_3[5];
    if (iVar3 != local_17) {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
        iVar3 = param_3[5];
      }
      if (iVar3 != local_18) goto LAB_1012528d;
    }
    if ((bVar8 != 0) && (bVar8 != 0x10)) goto LAB_101252a2;
    bVar8 = 0x10;
    local_61 = '\0';
    local_78 = '\0';
    istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
  }
  else {
LAB_10125296:
    local_61 = '\0';
    local_78 = '\0';
    cVar7 = '\0';
    if (bVar8 == 0) goto LAB_101252b8;
LAB_101252a2:
    local_78 = cVar7;
    if (bVar8 == 10) goto LAB_101252b8;
  }
LAB_101252a6:
  local_68 = (istreambuf_iterator<char,std::char_traits<char>_> *)
             (((bVar8 != 8) - 1 & 0xfffffff2) + 0x16);
LAB_101252b8:
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                ((uint)local_48[0] & 0xffffff00);
  basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_48,1,local_78)
  ;
  iVar10 = 0;
  piVar5 = local_70 + 0x1f;
  local_8 = CONCAT31(local_8._1_3_,1);
  bVar2 = operator!=<char,std::char_traits<char>_>
                    (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)param_4);
  cVar7 = local_61;
  if (bVar2) {
    do {
      if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
        istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
      }
      iVar3 = param_3[5];
      piVar6 = (istreambuf_iterator<char,std::char_traits<char>_> *)
               _Find_elem<char,27>((char *)local_30,(char)iVar3);
      if (piVar6 < local_68) {
        iVar3 = piVar6[0x101e854c];
        *local_6c = iVar3;
        if (((local_63 != '\0') ||
            (iVar3 != (istreambuf_iterator<char,std::char_traits<char>_>)0x30)) &&
           (local_6c < piVar5)) {
          local_6c = local_6c + 1;
          local_63 = '\x01';
        }
        local_61 = '\x01';
        piVar6 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
        if (0xf < local_34) {
          piVar6 = local_48[0];
        }
        if (piVar6[iVar10] != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f) {
          piVar6 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
          if (0xf < local_34) {
            piVar6 = local_48[0];
          }
          piVar6[iVar10] =
               (istreambuf_iterator<char,std::char_traits<char>_>)((char)piVar6[iVar10] + '\x01');
        }
      }
      else {
        piVar6 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
        if (0xf < local_34) {
          piVar6 = local_48[0];
        }
        if ((piVar6[iVar10] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) ||
           (local_62 == (istreambuf_iterator<char,std::char_traits<char>_>)0x0)) break;
        if (param_3[4] == (istreambuf_iterator<char,std::char_traits<char>_>)0x0) {
          istreambuf_iterator<char,std::char_traits<char>_>::_Peek(param_3);
          iVar3 = param_3[5];
        }
        if (iVar3 != local_62) break;
        FUN_10038070(0);
        iVar10 = iVar10 + 1;
      }
      istreambuf_iterator<char,std::char_traits<char>_>::_Inc(param_3);
      bVar2 = operator!=<char,std::char_traits<char>_>
                        (param_3,(istreambuf_iterator<char,std::char_traits<char>_> *)param_4);
    } while (bVar2);
    cVar7 = local_61;
    if (iVar10 != 0) {
      piVar5 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
      if (0xf < local_34) {
        piVar5 = local_48[0];
      }
      if ((char)piVar5[iVar10] < '\x01') {
        cVar7 = '\0';
      }
      else {
        iVar10 = iVar10 + 1;
      }
    }
  }
  piVar5 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_60;
  if (0xf < local_4c) {
    piVar5 = local_60[0];
  }
  piVar6 = local_70;
  if (cVar7 != '\0') {
    while ((iVar10 != 0 &&
           (iVar3 = *piVar5, iVar3 != (istreambuf_iterator<char,std::char_traits<char>_>)0x7f))) {
      iVar10 = iVar10 + -1;
      if (iVar10 != 0) {
        local_68 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
        if (0xf < local_34) {
          local_68 = local_48[0];
        }
        if (iVar3 != local_68[iVar10]) goto LAB_10125461;
      }
      if (iVar10 == 0) {
        local_68 = (istreambuf_iterator<char,std::char_traits<char>_> *)local_48;
        if (0xf < local_34) {
          local_68 = local_48[0];
        }
        if ((char)iVar3 < (char)*local_68) goto LAB_10125461;
      }
      if ('\0' < (char)piVar5[1]) {
        piVar5 = piVar5 + 1;
      }
    }
    piVar6 = local_6c;
    if (local_63 == '\0') {
      *local_6c = (istreambuf_iterator<char,std::char_traits<char>_>)0x30;
      piVar6 = local_6c + 1;
    }
  }
LAB_10125461:
  *piVar6 = (istreambuf_iterator<char,std::char_traits<char>_>)0x0;
  if (0xf < local_34) {
    local_68 = (istreambuf_iterator<char,std::char_traits<char>_> *)(local_34 + 1);
    local_70 = local_48[0];
    if ((istreambuf_iterator<char,std::char_traits<char>_> *)0xfff < local_68) {
      _Adjust_manually_vector_aligned(&local_70,(uint *)&local_68);
    }
    FUN_1013dba5(local_70,local_68);
  }
  local_38 = 0;
  local_34 = 0xf;
  local_48[0] = (istreambuf_iterator<char,std::char_traits<char>_> *)
                ((uint)local_48[0] & 0xffffff00);
  FUN_10125c94();
  iVar10 = FUN_1013ecd2();
  return iVar10;
}

