// rea decompile_all
// name: FUN_10106930
// address: 0x10106930
// body: available
// range: 0x10106930-0x10106b85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10106930(int param_1,undefined4 param_2)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 local_408 [1024];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  _Str1 = (char *)(*DAT_102230f4)(param_2,"model");
  iVar1 = __stricmp(_Str1,(char *)(param_1 + 0x2668));
  if (iVar1 != 0) {
    if (DAT_102146f8 != 0.0) {
      uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
      uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),"model",
                              param_1 + 0x2668);
      (*DAT_102230fc)(uVar2,uVar3);
      uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),&DAT_101dfb8c,
                              param_1 + 0x2668);
      (*DAT_102230fc)(uVar2,uVar3);
      FUN_1001f160(local_408,"* Not allowed to change teams in this game!\n");
      FUN_10119b50(local_408,param_1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar1 = (**(code **)(*in_ECX + 0xdc))(_Str1);
    if (iVar1 != 0) {
      FUN_1001f160(local_408,"* %s has changed to team \'%s\'\n",
                   *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4),_Str1);
      FUN_10119bb0(local_408,param_1);
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20c);
      uVar3 = (*DAT_10223184)(uVar2,param_1 + 0x2668,_Str1);
      uVar2 = (*DAT_1022310c)(uVar2,uVar3);
      FUN_10119200("\"%s<%i><%s><%s>\" joined team \"%s\"\n",
                   *(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(param_1 + 4) + 0x1d4),uVar2);
      (**(code **)(*in_ECX + 0xe0))(param_1,_Str1,1,1);
      FUN_101070d0(1);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    uVar2 = (*DAT_10223064)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c));
    uVar3 = (*DAT_102230f0)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x20c),"model",param_1 + 0x2668)
    ;
    (*DAT_102230fc)(uVar2,uVar3);
    FUN_1001f160(local_408,"* Can\'t change team to \'%s\'\n",_Str1);
    FUN_10119b50(local_408,param_1);
    FUN_1001f160(local_408,"* Server limits teams to \'%s\'\n",in_ECX + 0x3c);
    FUN_10119b50(local_408,param_1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

