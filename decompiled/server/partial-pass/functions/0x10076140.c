// rea decompile_all
// name: FUN_10076140
// address: 0x10076140
// body: available
// range: 0x10076140-0x100762a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10076140(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0xbb) & 0x80) == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
    if ((((iVar2 != 0) || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
        (piVar1 = *(int **)(iVar2 + 0x7c), piVar1 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*piVar1 + 0xd0))(), iVar2 != 0)) {
      if ((in_ECX[0x80] & 0x4000000U) == 0) {
        piVar1[0x19d] = piVar1[0x19d] + 1;
      }
      else {
        piVar1[0x19c] = piVar1[0x19c] + 1;
      }
      FUN_100befc0(*(int *)in_ECX[1] + *(int *)(DAT_10223188 + 0x98),piVar1);
    }
    in_ECX[0xbb] = in_ECX[0xbb] | 0x80;
    FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,"stranger/st_voiceloop.wav",0,0,0x20,100);
    in_ECX[0x60] = in_ECX[0x60] | 0x100;
    in_ECX[0x8a] = 8;
    iVar2 = *(int *)(in_ECX[1] + 0x19c);
    if (((iVar2 != 0) || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
       (*(int **)(iVar2 + 0x7c) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar2 + 0x7c) + 0x54))(in_ECX[1]);
    }
    iVar2 = FUN_1008ac70(param_2);
    if (iVar2 == 0) {
      iVar2 = in_ECX[1];
      if ((*(byte *)(iVar2 + 0x1a8) & 0x20) != 0) {
        in_ECX[0x1f] = 0;
        (**(code **)(*in_ECX + 0x144))();
        iVar2 = in_ECX[1];
      }
      if (*(float *)(iVar2 + 0x164) <= -99.0 && *(float *)(iVar2 + 0x164) != -99.0) {
        *(undefined4 *)(iVar2 + 0x164) = 0;
      }
      in_ECX[0x8a] = 8;
      return;
    }
  }
  else {
    iVar2 = FUN_1008ac70(param_2);
    if (iVar2 == 0) {
      return;
    }
  }
  FUN_10087940();
  return;
}

