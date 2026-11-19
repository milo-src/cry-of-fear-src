// rea decompile_all
// name: Getifld
// address: 0x1012e767
// body: available
// range: 0x1012e767-0x1012eb89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    private: int __cdecl std::num_get<unsigned short,class std::istreambuf_iterator<unsigned
   short,struct std::char_traits<unsigned short> > >::_Getifld(char *,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,class
   std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> > &,int,class
   std::locale const &)const 
    private: int __cdecl std::num_get<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >::_Getifld(char *,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,int,class std::locale const &)const 
   
   Library: Visual Studio 2019 Release */

void Getifld(undefined4 param_1,char ****param_2,int param_3,undefined4 param_4,uint param_5,
            char ***param_6)

{
  code *pcVar1;
  char ***pppcVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  char ****ppppcVar7;
  char ****ppppcVar8;
  byte bVar9;
  int iVar10;
  short local_98;
  char local_94;
  char ***local_8c;
  char ***local_88;
  char ***local_84;
  char local_7e;
  char local_7d;
  char ***local_7c [4];
  int local_6c;
  uint local_68;
  char ***local_64 [4];
  undefined4 local_54;
  uint local_50;
  short local_4c [22];
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x88;
  local_8 = 0x1012e776;
  local_8c = (char ***)param_2;
  local_84 = param_6;
  piVar6 = (int *)FUN_1012998f(param_6);
  pcVar1 = *(code **)(*piVar6 + 0x14);
  guard_check_icall(local_7c);
  (*pcVar1)();
  local_8 = 0;
  if (local_6c == 0) {
    local_98 = 0;
  }
  else {
    local_98 = thousands_sep();
  }
  piVar6 = (int *)FUN_1012903f(local_84);
  pcVar1 = *(code **)(*piVar6 + 0x2c);
  guard_check_icall("0123456789ABCDEFabcdef-+Xx",&DAT_101e9153,local_4c);
  (*pcVar1)();
  pppcVar2 = local_8c;
  local_88 = local_8c;
  cVar3 = operator!=<>(param_3,param_4);
  if (cVar3 != '\0') {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar5 = *(short *)(param_3 + 6);
    if (sVar5 == local_1e) {
      *(char *)pppcVar2 = '+';
    }
    else {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar5 = *(short *)(param_3 + 6);
      }
      if (sVar5 != local_20) goto LAB_1012e862;
      *(char *)pppcVar2 = '-';
    }
    local_88 = (char ***)((int)pppcVar2 + 1);
    Inc();
  }
LAB_1012e862:
  param_5 = param_5 & 0xe00;
  local_84 = (char ***)0xa;
  if (param_5 == 0x400) {
    bVar9 = 8;
  }
  else if (param_5 == 0x800) {
    bVar9 = 0x10;
  }
  else {
    bVar9 = -(param_5 != 0) & 10;
  }
  local_7e = '\0';
  cVar3 = operator!=<>(param_3,param_4);
  if (cVar3 == '\0') {
LAB_1012e93c:
    local_7d = '\0';
    local_94 = '\0';
    cVar3 = '\0';
    if (bVar9 == 0) goto LAB_1012e961;
LAB_1012e94b:
    local_94 = cVar3;
    if (bVar9 == 10) goto LAB_1012e961;
  }
  else {
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    if (*(short *)(param_3 + 6) != local_4c[0]) goto LAB_1012e93c;
    local_7d = '\x01';
    local_94 = '\x01';
    Inc();
    cVar4 = operator!=<>(param_3,param_4);
    cVar3 = local_94;
    if (cVar4 == '\0') {
LAB_1012e933:
      if (bVar9 == 0) {
        bVar9 = 8;
        goto LAB_1012e94f;
      }
      goto LAB_1012e94b;
    }
    if (*(char *)(param_3 + 4) == '\0') {
      Peek();
    }
    sVar5 = *(short *)(param_3 + 6);
    if (sVar5 != local_1a) {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
        sVar5 = *(short *)(param_3 + 6);
      }
      if (sVar5 != local_1c) goto LAB_1012e933;
    }
    if ((bVar9 != 0) && (bVar9 != 0x10)) goto LAB_1012e94b;
    bVar9 = 0x10;
    local_7d = '\0';
    local_94 = '\0';
    Inc();
  }
LAB_1012e94f:
  local_84 = (char ***)(((bVar9 != 8) - 1 & 0xfffffff2) + 0x16);
LAB_1012e961:
  local_54 = 0;
  local_50 = 0xf;
  local_64[0] = (char ***)((uint)local_64[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_64,1,local_94)
  ;
  iVar10 = 0;
  ppppcVar7 = (char ****)((int)local_8c + 0x1f);
  local_8 = CONCAT31(local_8._1_3_,1);
  cVar4 = operator!=<>(param_3,param_4);
  cVar3 = local_7d;
  if (cVar4 != '\0') {
    do {
      if (*(char *)(param_3 + 4) == '\0') {
        Peek();
      }
      ppppcVar8 = (char ****)_Find_elem<>(local_4c,*(undefined2 *)(param_3 + 6));
      if (ppppcVar8 < local_84) {
        cVar3 = *(char *)(ppppcVar8 + 0x407a44e);
        *(char *)local_88 = cVar3;
        if (((local_7e != '\0') || (cVar3 != '0')) && (local_88 < ppppcVar7)) {
          local_88 = (char ***)((int)local_88 + 1);
          local_7e = '\x01';
        }
        local_7d = '\x01';
        ppppcVar8 = local_64;
        if (0xf < local_50) {
          ppppcVar8 = (char ****)local_64[0];
        }
        if (*(char *)((int)ppppcVar8 + iVar10) != '\x7f') {
          ppppcVar8 = local_64;
          if (0xf < local_50) {
            ppppcVar8 = (char ****)local_64[0];
          }
          *(char *)((int)ppppcVar8 + iVar10) = *(char *)((int)ppppcVar8 + iVar10) + '\x01';
        }
      }
      else {
        ppppcVar8 = local_64;
        if (0xf < local_50) {
          ppppcVar8 = (char ****)local_64[0];
        }
        if ((*(char *)((int)ppppcVar8 + iVar10) == '\0') || (local_98 == 0)) break;
        sVar5 = *(short *)(param_3 + 6);
        if (*(char *)(param_3 + 4) == '\0') {
          Peek();
          sVar5 = *(short *)(param_3 + 6);
        }
        if (sVar5 != local_98) break;
        FUN_10038070(0);
        iVar10 = iVar10 + 1;
      }
      Inc();
      cVar3 = operator!=<>(param_3,param_4);
    } while (cVar3 != '\0');
    cVar3 = local_7d;
    if (iVar10 != 0) {
      ppppcVar7 = local_64;
      if (0xf < local_50) {
        ppppcVar7 = (char ****)local_64[0];
      }
      if (*(char *)((int)ppppcVar7 + iVar10) < '\x01') {
        cVar3 = '\0';
      }
      else {
        iVar10 = iVar10 + 1;
      }
    }
  }
  ppppcVar7 = local_7c;
  if (0xf < local_68) {
    ppppcVar7 = (char ****)local_7c[0];
  }
  ppppcVar8 = (char ****)local_8c;
  if (cVar3 != '\0') {
    while ((iVar10 != 0 && (cVar3 = *(char *)ppppcVar7, cVar3 != '\x7f'))) {
      iVar10 = iVar10 + -1;
      if (iVar10 != 0) {
        local_84 = (char ***)local_64;
        if (0xf < local_50) {
          local_84 = local_64[0];
        }
        if (cVar3 != *(char *)((int)local_84 + iVar10)) goto LAB_1012eb2e;
      }
      if (iVar10 == 0) {
        local_84 = (char ***)local_64;
        if (0xf < local_50) {
          local_84 = local_64[0];
        }
        if (cVar3 < *(char *)local_84) goto LAB_1012eb2e;
      }
      if ('\0' < *(char *)((int)ppppcVar7 + 1)) {
        ppppcVar7 = (char ****)((int)ppppcVar7 + 1);
      }
    }
    ppppcVar8 = (char ****)local_88;
    if (local_7e == '\0') {
      *(char *)local_88 = '0';
      ppppcVar8 = (char ****)((int)local_88 + 1);
    }
  }
LAB_1012eb2e:
  *(char *)ppppcVar8 = '\0';
  if (0xf < local_50) {
    local_84 = (char ***)(local_50 + 1);
    local_8c = local_64[0];
    if ((char ****)0xfff < local_84) {
      std::_Adjust_manually_vector_aligned(&local_8c,(uint *)&local_84);
    }
    FUN_1013dba5(local_8c,local_84);
  }
  local_54 = 0;
  local_50 = 0xf;
  local_64[0] = (char ***)((uint)local_64[0] & 0xffffff00);
  FUN_10125c94();
  FUN_1013ecd2();
  return;
}

