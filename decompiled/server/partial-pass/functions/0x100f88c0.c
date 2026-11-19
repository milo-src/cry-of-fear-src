// rea decompile_all
// name: FUN_100f88c0
// address: 0x100f88c0
// body: available
// range: 0x100f88c0-0x100f8b7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f88c0(int *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  
  if ((((((*(char *)((int)in_ECX + 0x501) == '\0') && (iVar1 = FUN_10017780(), iVar1 == 0)) &&
        ((char)in_ECX[0x13a] == '\0')) &&
       ((param_1 != (int *)0x0 && (iVar1 = (**(code **)(*param_1 + 0xd0))(), iVar1 != 0)))) &&
      ((iVar1 = (**(code **)(*in_ECX + 0xbc))(), iVar1 == 0 &&
       ((iVar1 = (**(code **)(*param_1 + 0xbc))(), iVar1 != 0 &&
        (iVar1 = FUN_100125e0(param_1[1]), iVar1 != 0)))))) &&
     ((iVar2 = FUN_10017780(), iVar2 == 0 && ((*(uint *)(in_ECX[1] + 0x1a8) & 0x200) != 0)))) {
    iVar2 = *(int *)(iVar1 + 4);
    *(undefined8 *)(iVar2 + 0x20) = DAT_10222f34;
    *(undefined4 *)(iVar2 + 0x28) = DAT_10222f3c;
    iVar2 = in_ECX[1];
    iVar5 = *(int *)(iVar1 + 4);
    *(undefined8 *)(iVar5 + 8) = *(undefined8 *)(iVar2 + 8);
    *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(float *)(*(int *)(iVar1 + 4) + 0x54) = *(float *)(in_ECX[1] + 0x54) + 90.0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x50) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x74) = 0;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0xa0) = 1;
    pcVar3 = "cpr_down";
    if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x4000) != 0) {
      pcVar3 = "crouch_cpr_down";
    }
    iVar2 = FUN_1000e9b0(pcVar3);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    if ((*(int *)(in_ECX[1] + 300) != iVar2) || (in_ECX[0x3f] == 0)) {
      *(undefined4 *)(in_ECX[1] + 0x134) = 0;
    }
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x130) = 0;
    uVar4 = (*DAT_10223070)(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x20c),iVar2);
    fVar6 = (float10)FUN_1000f390(uVar4);
    *(float *)(iVar1 + 0x4f4) = (float)(fVar6 + (float10)*DAT_10223188);
    if (*(int *)(*(int *)(iVar1 + 4) + 300) != iVar2) {
      *(int *)(*(int *)(iVar1 + 4) + 300) = iVar2;
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x134) = 0;
      FUN_1000e9e0();
    }
    pcVar3 = "taller_lie";
    if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x4000) != 0) {
      pcVar3 = "crouch_taller_lie";
    }
    iVar2 = FUN_1000e9b0(pcVar3);
    if (iVar2 == -1) {
      iVar2 = 0;
    }
    iVar5 = in_ECX[1];
    if ((*(int *)(iVar5 + 300) != iVar2) || (in_ECX[0x3f] == 0)) {
      *(undefined4 *)(iVar5 + 0x134) = 0;
      iVar5 = in_ECX[1];
    }
    *(undefined4 *)(iVar5 + 0x130) = 0;
    uVar4 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),iVar2);
    fVar6 = (float10)FUN_1000f390(uVar4);
    in_ECX[0x13d] = (int)(float)(fVar6 + (float10)*DAT_10223188);
    if (*(int *)(in_ECX[1] + 300) != iVar2) {
      *(int *)(in_ECX[1] + 300) = iVar2;
      *(undefined4 *)(in_ECX[1] + 0x134) = 0;
      FUN_1000e9e0();
    }
    fVar6 = (float10)(*DAT_1022302c)("sv_coopcprtime");
    iVar2 = (int)fVar6;
    if (iVar2 < 1) {
      iVar2 = 5;
    }
    FUN_10017740(in_ECX);
    *(float *)(iVar1 + 0x26ac) = (float)iVar2 + *DAT_10223188;
    FUN_10017740(iVar1);
    FUN_100f68a0();
  }
  return;
}

