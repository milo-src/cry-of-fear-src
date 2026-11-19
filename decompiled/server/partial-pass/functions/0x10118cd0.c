// rea decompile_all
// name: FUN_10118cd0
// address: 0x10118cd0
// body: available
// range: 0x10118cd0-0x10118ecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10118cd0(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  char *pcVar5;
  char local_208 [511];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (param_1 != (int *)0x0) {
    iVar4 = (**(code **)(*param_1 + 0xd4))();
    if (iVar4 != 0) {
      (*DAT_10223000)(1,0x17,0,*(undefined4 *)(param_1[1] + 0x20c));
      (*DAT_10223008)(0x1d);
      (*DAT_10223008)(*(undefined1 *)(param_2 + 9));
      sVar2 = FUN_101166a0(*param_2,0x46000000);
      (*DAT_10223010)((int)sVar2);
      sVar2 = FUN_101166a0(param_2[1],0x46000000);
      (*DAT_10223010)((int)sVar2);
      (*DAT_10223008)(param_2[2]);
      (*DAT_10223008)(*(undefined1 *)(param_2 + 3));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0xd));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0xe));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0xf));
      (*DAT_10223008)(*(undefined1 *)(param_2 + 4));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0x11));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0x12));
      (*DAT_10223008)(*(undefined1 *)((int)param_2 + 0x13));
      uVar3 = FUN_101166d0(param_2[5],0x43800000);
      (*DAT_10223010)(uVar3);
      uVar3 = FUN_101166d0(param_2[6],0x43800000);
      (*DAT_10223010)(uVar3);
      uVar3 = FUN_101166d0(param_2[7],0x43800000);
      (*DAT_10223010)(uVar3);
      if (param_2[2] == 2) {
        uVar3 = FUN_101166d0(param_2[8],0x43800000);
        (*DAT_10223010)(uVar3);
      }
      pcVar5 = param_3;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar5 - (int)(param_3 + 1)) < 0x200) {
        (*DAT_10223020)(param_3);
      }
      else {
        _strncpy(local_208,param_3,0x1ff);
        local_9 = 0;
        (*DAT_10223020)(local_208);
      }
      (*DAT_10223004)();
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

