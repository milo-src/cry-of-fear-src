// rea decompile_all
// name: FUN_100a2050
// address: 0x100a2050
// body: available
// range: 0x100a2050-0x100a2316 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a2050(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  float in_stack_00000010;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar2 = FUN_10118460(0,"player");
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_100125e0(*(undefined4 *)(iVar2 + 4));
  if (iVar2 == 0) {
    return;
  }
  cVar1 = FUN_100dd000(0x80,0,0);
  uVar6 = (uint)(cVar1 != '\0');
  cVar1 = FUN_100dd000(0x100,0,0);
  uVar5 = uVar6;
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 2;
  }
  cVar1 = FUN_100dd000(0x200,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 4;
  }
  cVar1 = FUN_100dd000(0x400,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 8;
  }
  cVar1 = FUN_100dd000(0x800,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x10;
  }
  cVar1 = FUN_100dd000(0x1000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x20;
  }
  cVar1 = FUN_100dd000(0x2000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x40;
  }
  cVar1 = FUN_100dd000(0x4000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x80;
  }
  cVar1 = FUN_100dd000(0x8000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x100;
  }
  cVar1 = FUN_100dd000(0x10000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x200;
  }
  cVar1 = FUN_100dd000(0x20000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x400;
  }
  cVar1 = FUN_100dd000(0x40000,0,0);
  if (cVar1 != '\0') {
    uVar5 = 1;
    uVar6 = uVar6 | 0x800;
  }
  if ((*(int *)(in_ECX + 0xe0) != 0) && (*(int *)(in_ECX + 0xdc) != 0)) {
    iVar3 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe0));
    piVar4 = (int *)FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xdc));
    if (in_stack_00000010 == 0.0) {
      if (iVar3 != 0) {
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x14c) = 0;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x150) = 0x437f0000;
      }
      if (piVar4 == (int *)0x0) goto LAB_100a22c1;
      uVar8 = 0;
      uVar7 = 1;
    }
    else {
      if (iVar3 != 0) {
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x14c) = 5;
        *(undefined4 *)(*(int *)(iVar3 + 4) + 0x150) = 0;
      }
      if (piVar4 == (int *)0x0) goto LAB_100a22c1;
      uVar8 = 0x44268000;
      uVar7 = 0;
    }
    (**(code **)(*piVar4 + 0xe8))(iVar2,iVar2,uVar7,uVar8);
  }
LAB_100a22c1:
  if (in_stack_00000010 == 0.0) {
    (*DAT_10223000)(1,DAT_10226698,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
    (*DAT_10223014)(uVar6);
    (*DAT_10223008)(uVar5);
    (*DAT_10223008)(*(undefined4 *)(iVar2 + 0x424));
    (*DAT_10223008)(1);
    (*DAT_10223004)();
  }
  return;
}

