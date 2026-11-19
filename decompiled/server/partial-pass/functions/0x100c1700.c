// rea decompile_all
// name: FUN_100c1700
// address: 0x100c1700
// body: available
// range: 0x100c1700-0x100c199f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c1700(void)

{
  char *pcVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  char *pcVar4;
  
  (*DAT_1022303c)(1,&DAT_101d5124,(int)DAT_10223188[0x26] + *(int *)in_ECX[1]);
  if ((uint)in_ECX[0x89] < 8) {
    (*DAT_1022303c)(1,"State: %s, ",(&PTR_DAT_102176bc)[in_ECX[0x89]]);
  }
  iVar3 = 0;
  if (DAT_102111c8 != 0) {
    iVar2 = DAT_102111c8;
    do {
      if (iVar2 == in_ECX[0x85]) {
        (*DAT_1022303c)(1,"Activity %s, ",*(undefined4 *)(iVar3 * 8 + 0x102111cc));
        break;
      }
      iVar2 = (&DAT_102111d0)[iVar3 * 2];
      iVar3 = iVar3 + 1;
    } while (iVar2 != 0);
  }
  if (in_ECX[0x8c] == 0) {
    (*DAT_1022303c)();
  }
  else {
    pcVar1 = *(char **)(in_ECX[0x8c] + 0x10);
    pcVar4 = "Unknown";
    if (pcVar1 != (char *)0x0) {
      pcVar4 = pcVar1;
    }
    (*DAT_1022303c)(1,"Schedule %s, ",pcVar4);
    iVar3 = FUN_1000afe0();
    if (iVar3 != 0) {
      (*DAT_1022303c)();
    }
  }
  iVar3 = FUN_10017780();
  if (iVar3 == 0) {
    (*DAT_1022303c)(1,"No enemy");
  }
  else {
    FUN_100177a0();
    (*DAT_1022303c)();
  }
  iVar3 = (**(code **)(*in_ECX + 0x9c))();
  if (iVar3 != 0) {
    (*DAT_1022303c)(1," Moving ");
    if ((float)in_ECX[0x84] <= *DAT_10223188) {
      iVar3 = (**(code **)(*in_ECX + 0x168))();
      if (in_ECX[0x86] == iVar3) {
        (*DAT_1022303c)(1,": In stopped anim. ");
      }
    }
    else {
      (*DAT_1022303c)(1,": Stopped for %.2f. ",(double)((float)in_ECX[0x84] - *DAT_10223188));
    }
  }
  iVar3 = (**(code **)(*in_ECX + 0x7c))();
  if (iVar3 != 0) {
    iVar2 = FUN_10017780();
    if (iVar2 == 0) {
      (*DAT_1022303c)();
    }
    (*DAT_1022303c)();
    iVar2 = FUN_10017790();
    if (iVar2 != iVar3) {
      (*DAT_1022303c)(1,&DAT_101d51d4);
    }
    (*DAT_1022303c)(1,"Leader.");
  }
  (*DAT_1022303c)(1,&DAT_101a84c8);
  (*DAT_1022303c)(1,"Yaw speed:%3.1f,Health: %3.1f\n",(double)*(float *)(in_ECX[1] + 0xb0),
                  (double)*(float *)(in_ECX[1] + 0x164));
  iVar3 = in_ECX[1];
  if ((*(byte *)(iVar3 + 0x1a4) & 0x10) != 0) {
    (*DAT_1022303c)();
    iVar3 = in_ECX[1];
  }
  if ((*(uint *)(iVar3 + 0x1a4) & 0x100) != 0) {
    (*DAT_1022303c)(1," Pre-Disaster! ");
  }
  (*DAT_1022303c)(1,&DAT_101a84c8);
  return;
}

