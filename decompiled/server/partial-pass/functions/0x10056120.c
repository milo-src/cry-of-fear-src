// rea decompile_all
// name: FUN_10056120
// address: 0x10056120
// body: available
// range: 0x10056120-0x100563cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10056120(int param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  undefined1 local_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c));
  if (param_1 == 0x1e) {
    if (*(int *)(in_ECX[1] + 0x114) == 0) {
      iVar1 = FUN_1000e950(0x16);
      *(undefined4 *)(in_ECX[1] + 0x114) = 1;
      FUN_1000e7c0(1,&local_10,local_1c);
      FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"crazylady/baby_burst.wav",0x3f800000,
                   0x3f4ccccd,0,100);
      (*DAT_10223000)(4,0x17,&local_10,0);
      (*DAT_10223008)(0x73);
      (*DAT_1022301c)(local_10);
      (*DAT_1022301c)(local_c);
      (*DAT_1022301c)(local_8);
      (*DAT_10223010)((int)DAT_10231f24);
      (*DAT_10223010)((int)DAT_10231f20);
      (*DAT_10223008)(0xf7);
      (*DAT_10223008)(0x10);
      (*DAT_10223004)();
      goto LAB_1005633d;
    }
    iVar1 = 0x1e;
  }
  else {
    iVar1 = param_1;
    if (param_1 == 0x1f) {
      if (*(int *)(in_ECX[1] + 0x114) == 0) {
        iVar1 = FUN_1000e950(0x16);
        *(undefined4 *)(in_ECX[1] + 0x114) = 1;
        FUN_1000e7c0(1,&local_10,local_1c);
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),0,"crazylady/baby_burst.wav",0x3f800000,
                     0x3f4ccccd,0,100);
        (*DAT_10223000)(4,0x17,&local_10,0);
        (*DAT_10223008)(0x73);
        (*DAT_1022301c)(local_10);
        (*DAT_1022301c)(local_c);
        (*DAT_1022301c)(local_8);
        (*DAT_10223010)((int)DAT_10231f24);
        (*DAT_10223010)((int)DAT_10231f20);
        (*DAT_10223008)(0xf7);
        (*DAT_10223008)(0x10);
        (*DAT_10223004)();
        goto LAB_1005633d;
      }
      iVar1 = 0x1e;
    }
  }
  iVar1 = FUN_1000e950(iVar1);
LAB_1005633d:
  piVar2 = (int *)in_ECX[1];
  in_ECX[0x85] = param_1;
  if (iVar1 < 0) {
    (*DAT_1022303c)(1,"%s has no sequence for act:%d\n",*(int *)(DAT_10223188 + 0x98) + *piVar2,
                    param_1);
    *(undefined4 *)(in_ECX[1] + 300) = 0;
    FUN_100c1f50(param_1);
    return;
  }
  if ((piVar2[0x4b] != iVar1) || (in_ECX[0x3f] == 0)) {
    piVar2[0x4d] = 0;
    piVar2 = (int *)in_ECX[1];
  }
  piVar2[0x4b] = iVar1;
  FUN_1000e9e0();
  (**(code **)(*in_ECX + 0x1c0))();
  FUN_100c1f50(param_1);
  return;
}

