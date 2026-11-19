// rea decompile_all
// name: FUN_10037e30
// address: 0x10037e30
// body: available
// range: 0x10037e30-0x10037f96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037e30(int param_1)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  int in_ECX;
  char cVar6;
  size_t _Count;
  char *local_34;
  int local_30;
  char local_2c;
  undefined1 auStack_2b [3];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (param_1 == -1) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar1 = **(uint **)(in_ECX + 0x20);
  cVar6 = (char)param_1;
  if (uVar1 != 0) {
    iVar4 = **(int **)(in_ECX + 0x30);
    if (uVar1 < iVar4 + uVar1) {
      **(int **)(in_ECX + 0x30) = iVar4 + -1;
      pcVar2 = (char *)**(int **)(in_ECX + 0x20);
      **(int **)(in_ECX + 0x20) = (int)(pcVar2 + 1);
      *pcVar2 = cVar6;
      goto LAB_10037e87;
    }
  }
  if (*(int *)(in_ECX + 0x4c) != 0) {
    if (**(int **)(in_ECX + 0xc) == in_ECX + 0x3c) {
      iVar4 = *(int *)(in_ECX + 0x54);
      iVar3 = *(int *)(in_ECX + 0x50);
      **(int **)(in_ECX + 0xc) = iVar3;
      **(int **)(in_ECX + 0x1c) = iVar3;
      **(int **)(in_ECX + 0x2c) = iVar4 - iVar3;
    }
    if (*(int **)(in_ECX + 0x38) == (int *)0x0) {
      _fputc((int)cVar6,*(FILE **)(in_ECX + 0x4c));
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    _local_2c = CONCAT31(auStack_2b,cVar6);
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x38) + 0x1c))
                      (in_ECX + 0x40,&local_2c,auStack_2b,&local_34,local_28,&local_8,&local_30);
    if (-1 < iVar4) {
      if (iVar4 < 2) {
        _Count = local_30 - (int)local_28;
        if (((_Count == 0) ||
            (sVar5 = _fwrite(local_28,1,_Count,*(FILE **)(in_ECX + 0x4c)), _Count == sVar5)) &&
           (*(undefined1 *)(in_ECX + 0x3d) = 1, local_34 != &local_2c)) {
LAB_10037e87:
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      else if (iVar4 == 3) {
        std::_Fputc<char>((char)_local_2c,*(_iobuf **)(in_ECX + 0x4c));
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

