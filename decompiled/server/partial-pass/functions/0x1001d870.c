// rea decompile_all
// name: FUN_1001d870
// address: 0x1001d870
// body: available
// range: 0x1001d870-0x1001da80 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d870(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_208 [256];
  char local_108 [255];
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 0x7c) != 0) {
    if ((*(int *)(param_1 + 0x254) != 0) &&
       (*(char *)(*(int *)(param_1 + 0x254) + *(int *)(DAT_10223188 + 0x98)) != '\0')) {
      uVar1 = (*DAT_102230f4)(param_2,&DAT_101a8dc4);
      iVar2 = FUN_1000aba0(*(int *)(DAT_10223188 + 0x98) + *(int *)(param_1 + 0x254),uVar1);
      if (iVar2 == 0) {
        pcVar3 = (char *)(*DAT_102230f4)(param_2,&DAT_101a8dc4);
        _strncpy(local_108,pcVar3,0xff);
        local_9 = 0;
        pcVar3 = local_108;
        do {
          if (*pcVar3 == '\0') break;
          if (*pcVar3 == '%') {
            *pcVar3 = ' ';
          }
          pcVar3 = pcVar3 + 1;
        } while (pcVar3 != (char *)0x0);
        uVar1 = (*DAT_10223064)(param_1,param_2,&DAT_101a8dc4,local_108);
        (*DAT_102230fc)(uVar1);
        uVar1 = (*DAT_102230f4)(param_2,&DAT_101a8dc4);
        FUN_1001f160(local_208,"* %s changed name to %s\n",
                     *(int *)(DAT_10223188 + 0x98) + *(int *)(param_1 + 0x254),uVar1);
        (*DAT_10223000)(2,DAT_10226518,0,0);
        uVar1 = (*DAT_10223064)(param_1);
        (*DAT_10223008)(uVar1);
        (*DAT_10223020)(local_208);
        (*DAT_10223004)();
        if (DAT_10222ee8 == 0) {
          uVar1 = (*DAT_102230f4)(param_2,&DAT_101a8dc4);
          uVar1 = (*DAT_1022310c)(param_1,uVar1);
          uVar1 = (*DAT_10223184)(param_1,uVar1);
          uVar1 = (*DAT_1022310c)(param_1,uVar1);
          iVar2 = *(int *)(DAT_10223188 + 0x98) + *(int *)(param_1 + 0x254);
          pcVar3 = "\"%s<%i><%s><%i>\" changed name to \"%s\"\n";
        }
        else {
          uVar1 = (*DAT_102230f4)();
          uVar1 = (*DAT_102230f4)(param_2,"model",uVar1);
          uVar1 = (*DAT_10223184)(param_1,uVar1);
          uVar1 = (*DAT_1022310c)(param_1,uVar1);
          iVar2 = *(int *)(DAT_10223188 + 0x98) + *(int *)(param_1 + 0x254);
          pcVar3 = "\"%s<%i><%s><%s>\" changed name to \"%s\"\n";
        }
        FUN_10119200(pcVar3,iVar2,uVar1);
      }
    }
    iVar2 = *DAT_10222ee4;
    uVar1 = FUN_100125e0(param_1 + 0x80,param_2);
    (**(code **)(iVar2 + 0x6c))(uVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

