// rea decompile_all
// name: FUN_1006eec0
// address: 0x1006eec0
// body: available
// range: 0x1006eec0-0x1006f06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006eec0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  CBookSimon *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(int *)(*(int *)(in_ECX + 4) + 0x248) == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
    if ((((iVar2 != 0) || (iVar2 = (*DAT_1022305c)(0), iVar2 != 0)) &&
        (piVar1 = *(int **)(iVar2 + 0x7c), piVar1 != (int *)0x0)) &&
       (iVar2 = (**(code **)(*piVar1 + 0xd0))(), iVar2 != 0)) {
      uVar3 = FUN_100125e0(piVar1[1]);
      *(undefined4 *)(in_ECX + 0x388) = uVar3;
    }
    if (*(float *)(*(int *)(in_ECX + 4) + 0x168) != 0.0) {
      CBookSimon::RealKilled(in_ECX);
      return;
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x248) = 1;
    DAT_10222f20 = 0;
    if ((DAT_10222f14 != 0) && (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 != 0)) {
      (*DAT_10223000)(2,DAT_102266d8,0,0);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
    }
    iVar2 = 1;
    if (0 < *(int *)(DAT_10223188 + 0x90)) {
      do {
        iVar4 = FUN_10119680(iVar2);
        if (iVar4 != 0) {
          local_10 = 0;
          local_c = 0;
          local_8 = 0;
          FUN_10119c00(iVar4,&local_10,0x40000000,0x3f000000,0xff,0);
          (*DAT_10223000)(1,DAT_1022667c,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
          (*DAT_10223008)(1);
          (*DAT_10223008)(0);
          (*DAT_10223004)();
          FUN_100ea600(0x3f800000);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 <= *(int *)(DAT_10223188 + 0x90));
    }
    *(code **)(in_ECX + 0x78) = CBookSimon::RealKilled;
    (**(code **)(*(int *)in_ECX + 8))(0x40000000);
    *(uint *)(*(int *)(in_ECX + 4) + 0x118) = *(uint *)(*(int *)(in_ECX + 4) + 0x118) | 0x80;
  }
  return;
}

