// rea decompile_all
// name: FUN_1004bf00
// address: 0x1004bf00
// body: available
// range: 0x1004bf00-0x1004c0f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004bf00(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_88 [128];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((((param_1 == (int *)0x0) || (iVar2 = (**(code **)(*param_1 + 0xd0))(), iVar2 == 0)) ||
      (*(char *)(in_ECX + 0x100) != '\0')) ||
     (*DAT_10223188 <= *(float *)(in_ECX + 0x128) && *(float *)(in_ECX + 0x128) != *DAT_10223188))
  goto LAB_1004c0e8;
  if ((*(int *)(in_ECX + 0x124) == 0) ||
     (iVar2 = FUN_10118590(0,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x124)), iVar2 == 0)) {
LAB_1004bfc6:
    iVar2 = *(int *)(*(int *)(in_ECX + 4) + 0x19c);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 0xd0))();
      if (((iVar2 != 0) && (*(int *)(in_ECX + 0x104) != 0)) &&
         (iVar2 = FUN_100125e0(param_1[1]), iVar2 != 0)) {
        *(undefined4 *)(iVar2 + 0x5ec) = *(undefined4 *)(in_ECX + 0x104);
      }
      iVar2 = FUN_1004b0e0();
      if (iVar2 == 0) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 0x19c) = *(undefined4 *)(param_1[1] + 0x20c);
        FUN_1004bb90();
      }
      else {
        if (*(int *)(in_ECX + 0x118) != 0) {
          FUN_10119810(param_1,(int)DAT_10223188[0x26] + *(int *)(in_ECX + 0x118),5,0);
        }
        iVar2 = *(int *)(*(int *)(in_ECX + 4) + 500);
        if (iVar2 != 0) {
          FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),4,
                       (int)DAT_10223188[0x26] + iVar2,0x3f800000,0x3f4ccccd,0,100);
        }
      }
    }
    else {
      FUN_1001f160(local_88,&DAT_101b0c90,
                   *(int *)(*(int *)(*(int *)(iVar2 + 0x7c) + 4) + 0x1d4) + (int)DAT_10223188[0x26])
      ;
      FUN_10119810(param_1,local_88,5,0);
    }
  }
  else {
    uVar1 = *(undefined4 *)(iVar2 + 4);
    iVar2 = FUN_1000aaf0(uVar1,"inter_door");
    if (iVar2 == 0) goto LAB_1004bfc6;
    iVar2 = FUN_10049650(uVar1);
    if ((iVar2 != 0) && (iVar2 = FUN_1004b0e0(), iVar2 != 0)) {
      FUN_1004be50(param_1);
    }
    *(undefined4 *)(in_ECX + 0x124) = 0;
  }
  *(float *)(in_ECX + 0x128) = *DAT_10223188 + 1.0;
LAB_1004c0e8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

