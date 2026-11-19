// rea decompile_all
// name: FUN_100a51c0
// address: 0x100a51c0
// body: available
// range: 0x100a51c0-0x100a58be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100a51c0(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uVar9;
  
  iVar4 = FUN_10118460(0,"player");
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_100125e0(*(undefined4 *)(iVar4 + 4));
  if (iVar4 == 0) {
    return;
  }
  uVar6 = 0;
  if (*(char *)(iVar4 + 0x680) == '\0') {
    iVar5 = FUN_10092ce0(iVar4);
  }
  else {
    iVar5 = FUN_10092f60();
  }
  if (*(char *)(iVar4 + 0x680) == '\0') {
    uVar6 = 7;
    if (4 < iVar5) {
      uVar6 = 0;
    }
    if (iVar5 - 5U < 4) {
      uVar6 = 6;
    }
    if (iVar5 - 0xdU < 4) {
      uVar6 = 5;
    }
    if (iVar5 - 0x11U < 4) {
      uVar6 = 4;
    }
    if (iVar5 - 0x15U < 4) {
      uVar6 = 3;
    }
    if (iVar5 < 0x1c) {
      if (0x18 < iVar5) {
        uVar6 = 2;
      }
      goto LAB_100a5281;
    }
  }
  else {
    iVar5 = FUN_10092f60(iVar4);
    if (iVar5 < 3) {
      uVar6 = 7;
    }
    if (iVar5 - 3U < 2) {
      uVar6 = 6;
    }
    if (iVar5 - 5U < 6) {
      uVar6 = 5;
    }
    if (iVar5 - 0xbU < 4) {
      uVar6 = 4;
    }
    if (iVar5 - 0xfU < 2) {
      uVar6 = 3;
    }
    if (iVar5 == 0x11) {
      uVar6 = 2;
      goto LAB_100a5281;
    }
    if (iVar5 < 0x12) goto LAB_100a5281;
  }
  uVar6 = 1;
LAB_100a5281:
  cVar3 = *(char *)(iVar4 + 0x680);
  cVar1 = FUN_100dd000(0,0,1);
  cVar2 = FUN_100dd000(1,0,0);
  uVar7 = (uint)(cVar2 != '\0');
  cVar2 = FUN_100dd000(2,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 2;
  }
  cVar2 = FUN_100dd000(4,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 4;
  }
  cVar2 = FUN_100dd000(8,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 8;
  }
  cVar2 = FUN_100dd000(0x10,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x10;
  }
  cVar2 = FUN_100dd000(0x20,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x20;
  }
  cVar2 = FUN_100dd000(0x40,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x40;
  }
  cVar2 = FUN_100dd000(0x80,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x80;
  }
  cVar2 = FUN_100dd000(0x100,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x100;
  }
  cVar2 = FUN_100dd000(0x200,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x200;
  }
  cVar2 = FUN_100dd000(0x400,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x400;
  }
  cVar2 = FUN_100dd000(0x800,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x800;
  }
  cVar2 = FUN_100dd000(0x1000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x1000;
  }
  cVar2 = FUN_100dd000(0x2000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x2000;
  }
  cVar2 = FUN_100dd000(0x4000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x4000;
  }
  cVar2 = FUN_100dd000(0x8000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x8000;
  }
  cVar2 = FUN_100dd000(0x10000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x10000;
  }
  cVar2 = FUN_100dd000(0x20000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x20000;
  }
  cVar2 = FUN_100dd000(0x40000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x40000;
  }
  cVar2 = FUN_100dd000(0x80000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x80000;
  }
  cVar2 = FUN_100dd000(0x100000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x100000;
  }
  cVar2 = FUN_100dd000(0x200000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x200000;
  }
  cVar2 = FUN_100dd000(0x400000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x400000;
  }
  cVar2 = FUN_100dd000(0x800000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x800000;
  }
  cVar2 = FUN_100dd000(0x1000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x1000000;
  }
  cVar2 = FUN_100dd000(0x2000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x2000000;
  }
  cVar2 = FUN_100dd000(0x4000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x4000000;
  }
  cVar2 = FUN_100dd000(0x8000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x8000000;
  }
  cVar2 = FUN_100dd000(0x10000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x10000000;
  }
  cVar2 = FUN_100dd000(0x20000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x20000000;
  }
  cVar2 = FUN_100dd000(0x40000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x40000000;
  }
  cVar2 = FUN_100dd000(0x80000000,0,0);
  if (cVar2 != '\0') {
    uVar7 = uVar7 | 0x80000000;
  }
  if (((*(char *)(iVar4 + 0x678) != '\0') && (*(char *)(iVar4 + 0x679) != '\0')) &&
     (*(char *)(iVar4 + 0x680) != '\0')) {
    cVar2 = FUN_100dd000(0x1000000,0,0);
    if (cVar2 == '\0') {
      FUN_100f2ed0(0x1000000,0,0,0);
    }
    uVar7 = 0x1000000;
  }
  (*DAT_10223000)(1,DAT_1022668c,0,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x20c));
  (*DAT_10223008)(*(int *)(*(int *)(in_ECX + 4) + 0x1d8) != 0);
  (*DAT_10223020)(&DAT_101c2d70);
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x63c));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x640));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x644));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x648));
  fVar8 = (float10)FUN_100dbfb0();
  (*DAT_1022301c)((float)fVar8);
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x650));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x654));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x658));
  (*DAT_10223010)((int)*(float *)(iVar4 + 0x65c));
  (*DAT_10223010)((int)*(float *)(iVar4 + 0x660));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x664));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x668));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x66c));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x670));
  (*DAT_10223010)(*(undefined4 *)(iVar4 + 0x674));
  if ((*(char *)(iVar4 + 0x678) == '\0') || (*(char *)(iVar4 + 0x679) == '\0')) {
    uVar9 = 0;
  }
  else {
    uVar9 = 1;
  }
  (*DAT_10223008)(uVar9);
  (*DAT_10223008)(0x1e);
  (*DAT_10223008)((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 1) != 0);
  (*DAT_10223008)(*(undefined4 *)(iVar4 + 0x67c));
  (*DAT_10223014)(uVar7);
  (*DAT_10223008)(0);
  (*DAT_10223008)(uVar6);
  (*DAT_10223008)(*(char *)(iVar4 + 0x680) != '\0');
  (*DAT_10223008)(1);
  if ((DAT_10222ee4 == (int *)0x0) || (iVar5 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*DAT_10223008)(uVar6);
  (*DAT_10223008)(cVar3 != '\0');
  (*DAT_10223008)(cVar1 != '\0');
  cVar3 = FUN_100dd000(0,1,0);
  (*DAT_10223008)(cVar3 != '\0');
  cVar3 = FUN_100dd000(0,0,1);
  (*DAT_10223008)(cVar3 != '\0');
  if ((*(char *)(iVar4 + 0x678) == '\0') ||
     (iVar4 = FUN_1013f5f0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),"c_ending"),
     iVar4 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  (*DAT_10223008)(uVar6);
  (*DAT_10223004)();
  return;
}

