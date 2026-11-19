// rea decompile_all
// name: _Getloctxt<>
// address: 0x10127db0
// body: available
// range: 0x10127db0-0x10127f79 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3_GS replaced with injection: EH_prolog3 */
/* Library Function - Multiple Matches With Same Base Name
    int __cdecl std::_Getloctxt<unsigned short,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > >(class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,class std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> > &,unsigned int,unsigned short const *)
    int __cdecl std::_Getloctxt<wchar_t,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > >(class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,class std::istreambuf_iterator<wchar_t,struct
   std::char_traits<wchar_t> > &,unsigned int,wchar_t const *)
   
   Library: Visual Studio 2019 Release */

void _Getloctxt<>(int param_1,uint param_2,undefined4 ****param_3,short *param_4)

{
  char cVar1;
  short sVar2;
  undefined4 ****ppppuVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint local_3c;
  undefined4 ***local_38;
  undefined4 ***local_34;
  char local_2d;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x34;
  local_8 = 0x10127dbc;
  iVar5 = 0;
  local_3c = param_2;
  sVar2 = *param_4;
  local_38 = param_3;
  while (sVar2 != 0) {
    if (sVar2 == *param_4) {
      local_38 = (undefined4 ***)((int)local_38 + 1);
    }
    iVar5 = iVar5 + 1;
    sVar2 = param_4[iVar5];
  }
  local_1c = 0;
  local_18 = 0xf;
  local_2c[0] = (undefined4 ***)((uint)local_2c[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_2c,
             (uint)local_38,'\0');
  local_8 = 0;
  uVar7 = 1;
  while( true ) {
    local_2d = '\0';
    iVar5 = 0;
    local_34 = (undefined4 ****)0x0;
    uVar4 = local_18;
    if ((undefined4 ****)local_38 == (undefined4 ****)0x0) break;
    do {
      sVar2 = param_4[iVar5];
      if (sVar2 != 0) {
        do {
          if (sVar2 == *param_4) break;
          iVar5 = iVar5 + 1;
          sVar2 = param_4[iVar5];
        } while (sVar2 != 0);
      }
      ppppuVar3 = local_2c;
      if (0xf < uVar4) {
        ppppuVar3 = (undefined4 ****)local_2c[0];
      }
      if (*(char *)((int)ppppuVar3 + (int)local_34) == '\0') {
        iVar5 = iVar5 + uVar7;
        if ((param_4[iVar5] == *param_4) || (param_4[iVar5] == 0)) {
          uVar6 = uVar7;
          if (0x7e < uVar7) {
            uVar6 = 0x7f;
          }
          ppppuVar3 = local_2c;
          if (0xf < uVar4) {
            ppppuVar3 = (undefined4 ****)local_2c[0];
          }
          *(char *)((int)ppppuVar3 + (int)local_34) = (char)uVar6;
          uVar4 = local_18;
        }
        else {
          cVar1 = equal(local_3c);
          if (cVar1 == '\0') {
            if (*(char *)(param_1 + 4) == '\0') {
              Peek();
            }
            if (param_4[iVar5] == *(short *)(param_1 + 6)) {
              local_2d = '\x01';
              uVar4 = local_18;
              goto LAB_10127f05;
            }
          }
          uVar4 = uVar7;
          if (0x7e < uVar7) {
            uVar4 = 0x7f;
          }
          ppppuVar3 = local_2c;
          if (0xf < local_18) {
            ppppuVar3 = (undefined4 ****)local_2c[0];
          }
          *(char *)((int)ppppuVar3 + (int)local_34) = (char)uVar4;
          uVar4 = local_18;
        }
      }
      else {
        ppppuVar3 = local_2c;
        if (0xf < uVar4) {
          ppppuVar3 = (undefined4 ****)local_2c[0];
        }
        iVar5 = iVar5 + *(char *)((int)ppppuVar3 + (int)local_34);
      }
LAB_10127f05:
      local_34 = (undefined4 ***)((int)local_34 + 1);
    } while (local_34 < local_38);
    if ((local_2d == '\0') || (cVar1 = equal(local_3c), uVar4 = local_18, cVar1 != '\0')) break;
    uVar7 = uVar7 + 1;
    Inc();
  }
  if (0xf < uVar4) {
    local_3c = uVar4 + 1;
    local_38 = local_2c[0];
    if (0xfff < local_3c) {
      std::_Adjust_manually_vector_aligned(&local_38,&local_3c);
    }
    FUN_1013dba5(local_38,local_3c);
  }
  FUN_1013ecd2();
  return;
}

