// rea decompile_all
// name: FUN_1004d2b0
// address: 0x1004d2b0
// body: available
// range: 0x1004d2b0-0x1004d423 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004d2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,double param_6)

{
  uint uVar1;
  char *_Format;
  num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_> *this;
  char ***pppcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_3c;
  char *local_38;
  char **local_34 [4];
  size_t local_24;
  uint local_20;
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_1019db6d;
  local_10 = ExceptionList;
  local_14 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_24 = 0;
  local_20 = 0xf;
  local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
  iVar4 = *(int *)(param_4 + 0x18);
  uVar1 = *(uint *)(param_4 + 0x14) & 0x3000;
  local_8 = 0;
  uVar5 = SUB84(param_6,0);
  uVar6 = (undefined4)((ulonglong)param_6 >> 0x20);
  if ((*(int *)(param_4 + 0x1c) < 1) &&
     (((*(int *)(param_4 + 0x1c) < 0 || (iVar4 == 0)) && (uVar1 != 0x2000)))) {
    iVar4 = 6;
    iVar3 = 6;
  }
  else {
    iVar3 = iVar4;
    if ((uVar1 == 0x2000) && (10000000000.0 < ABS(param_6))) {
      FUN_10171541(uVar5,uVar6,&local_3c,local_14);
      iVar3 = iVar4 + (int)(((local_3c ^ (int)local_3c >> 0x1f) - ((int)local_3c >> 0x1f)) * 0x7597)
                      / 100000;
    }
  }
  FUN_1004d9c0(iVar3 + 0x32,0);
  pppcVar2 = local_34;
  if (0xf < local_20) {
    pppcVar2 = (char ***)local_34[0];
  }
  _Format = std::num_put<char,std::ostreambuf_iterator<char,std::char_traits<char>_>_>::_Ffmt
                      (this,local_38,(char)local_1c,0);
  iVar4 = _sprintf_s((char *)pppcVar2,local_24,_Format,iVar4,uVar5,uVar6);
  pppcVar2 = local_34;
  if (0xf < local_20) {
    pppcVar2 = (char ***)local_34[0];
  }
  FUN_1004c510(local_38,param_1,param_2,param_3,param_4,param_5,pppcVar2,iVar4);
  if (0xf < local_20) {
    std::_Deallocate<8,0>(local_34[0],local_20 + 1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

