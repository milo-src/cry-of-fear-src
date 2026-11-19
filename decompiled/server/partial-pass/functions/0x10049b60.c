// rea decompile_all
// name: FUN_10049b60
// address: 0x10049b60
// body: available
// range: 0x10049b60-0x10049d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10049d8f to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10049b60(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  basic_filebuf<char,std::char_traits<char>_> *this;
  int *piVar1;
  uint uVar2;
  int iVar3;
  _Locimp *p_Var4;
  _iobuf *p_Var5;
  codecvt<char,char,_Mbstatet> *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *in_ECX;
  char *pcVar9;
  undefined1 local_38 [20];
  undefined1 local_24 [4];
  basic_filebuf<char,std::char_traits<char>_> *local_20;
  uint local_1c;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_1019d91f;
  local_10 = ExceptionList;
  uVar2 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_4 != 0) {
    *in_ECX = (int)&PTR_101b1438;
    in_ECX[0x1a] = (int)std::basic_ios<char,std::char_traits<char>_>::vftable;
    local_8 = 0;
  }
  local_1c = (uint)(param_4 != 0);
  this = (basic_filebuf<char,std::char_traits<char>_> *)(in_ECX + 1);
  local_14 = in_ECX;
  FUN_10049da0(this,0,0);
  local_8 = 1;
  *(undefined ***)((int)in_ECX + *(int *)(*in_ECX + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*in_ECX + 4) + -4 + (int)in_ECX) = *(int *)(*in_ECX + 4) + -0x68;
  *(undefined ***)this = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  local_20 = this;
  iVar3 = FUN_1013e1e9(8,uVar2);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    local_8 = CONCAT31(local_8._1_3_,2);
    p_Var4 = std::locale::_Init(true);
    *(_Locimp **)(iVar3 + 4) = p_Var4;
  }
  local_18 = in_ECX + 2;
  local_20 = (basic_filebuf<char,std::char_traits<char>_> *)(in_ECX + 3);
  in_ECX[0xe] = iVar3;
  *(undefined ***)this = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *(undefined1 *)((int)in_ECX + 0x41) = 0;
  in_ECX[4] = (int)local_18;
  in_ECX[5] = (int)local_20;
  in_ECX[8] = (int)(in_ECX + 6);
  in_ECX[9] = (int)(in_ECX + 7);
  in_ECX[0xc] = (int)(in_ECX + 10);
  in_ECX[0xd] = (int)(in_ECX + 0xb);
  *(int *)local_20 = 0;
  in_ECX[7] = 0;
  in_ECX[0xb] = 0;
  *local_18 = 0;
  in_ECX[6] = 0;
  in_ECX[10] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x11] = DAT_10222e1c;
  in_ECX[0x12] = DAT_10222e20;
  in_ECX[0xf] = 0;
  local_8._0_1_ = 3;
  p_Var5 = (_iobuf *)FUN_101231f0(param_1,param_2 | 2,param_3);
  if (p_Var5 == (_iobuf *)0x0) {
    iVar3 = *(int *)(*local_14 + 4);
    uVar2 = 4;
    if (*(int *)((int)local_14 + iVar3 + 0x38) != 0) {
      uVar2 = 0;
    }
    uVar2 = uVar2 | *(uint *)((int)local_14 + iVar3 + 0xc) & 0x15 | 2;
    *(uint *)((int)local_14 + iVar3 + 0xc) = uVar2;
    uVar2 = *(uint *)((int)local_14 + iVar3 + 0x10) & uVar2;
    if (uVar2 != 0) {
      if ((uVar2 & 4) == 0) {
        pcVar9 = "ios_base::failbit set";
        if ((uVar2 & 2) == 0) {
          pcVar9 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar9 = "ios_base::badbit set";
      }
      uVar8 = FUN_10037d50(local_24,1);
      FUN_10030100(pcVar9,uVar8);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_38,&DAT_102048cc);
    }
  }
  else {
    std::basic_filebuf<char,std::char_traits<char>_>::_Init(this,p_Var5,1);
    piVar1 = *(int **)(in_ECX[0xe] + 4);
    local_20 = (basic_filebuf<char,std::char_traits<char>_> *)piVar1;
    (**(code **)(*piVar1 + 4))();
    local_8 = CONCAT31(local_8._1_3_,4);
    pcVar6 = (codecvt<char,char,_Mbstatet> *)FUN_1002f5f0(local_24);
    std::basic_filebuf<char,std::char_traits<char>_>::_Initcvt(this,pcVar6);
    if ((piVar1 != (int *)0x0) &&
       (puVar7 = (undefined4 *)(**(code **)(*piVar1 + 8))(), puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
  }
  ExceptionList = local_10;
  return local_14;
}

