// rea decompile_all
// name: FUN_100f9db0
// address: 0x100f9db0
// body: available
// range: 0x100f9db0-0x100f9e32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100f9e2e to 0x101400bc __CxxThrowException@8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f9db0(void)

{
  int iVar1;
  basic_filebuf<char,struct_std::char_traits<char>_> *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  char *pcVar5;
  undefined1 local_20 [20];
  undefined1 local_c [8];
  
  pbVar2 = std::basic_filebuf<char,std::char_traits<char>_>::close
                     ((basic_filebuf<char,std::char_traits<char>_> *)(in_ECX + 1));
  if (pbVar2 == (basic_filebuf<char,struct_std::char_traits<char>_> *)0x0) {
    iVar1 = *(int *)(*in_ECX + 4);
    uVar3 = 4;
    if (*(int *)((int)in_ECX + iVar1 + 0x38) != 0) {
      uVar3 = 0;
    }
    uVar3 = uVar3 | *(uint *)((int)in_ECX + iVar1 + 0xc) & 0x15 | 2;
    *(uint *)((int)in_ECX + iVar1 + 0xc) = uVar3;
    uVar3 = *(uint *)((int)in_ECX + iVar1 + 0x10) & uVar3;
    if (uVar3 != 0) {
      if ((uVar3 & 4) == 0) {
        pcVar5 = "ios_base::failbit set";
        if ((uVar3 & 2) == 0) {
          pcVar5 = "ios_base::eofbit set";
        }
      }
      else {
        pcVar5 = "ios_base::badbit set";
      }
      uVar4 = FUN_10037d50(local_c,1);
      FUN_10030100(pcVar5,uVar4);
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_20,&DAT_102048cc);
    }
  }
  return;
}

