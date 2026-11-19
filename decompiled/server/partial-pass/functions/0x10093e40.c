// rea decompile_all
// name: FUN_10093e40
// address: 0x10093e40
// body: available
// range: 0x10093e40-0x10093fcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10093e40(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  float10 fVar7;
  
  fVar7 = (float10)(*DAT_1022302c)("violence_hgibs");
  if ((float)fVar7 == 0.0) {
    return (int *)0x0;
  }
  piVar4 = (int *)FUN_1002a8e0(0);
  iVar5 = piVar4[1];
  *(undefined8 *)(iVar5 + 8) = param_1;
  *(undefined4 *)(iVar5 + 0x10) = param_2;
  iVar5 = piVar4[1];
  *(undefined8 *)(iVar5 + 0x20) = param_3;
  *(undefined4 *)(iVar5 + 0x28) = param_4;
  if (*(int *)(in_ECX + 0x118) == 0xc3) {
    FUN_1008ac80("models/agibs.mdl");
    iVar5 = 0xc3;
  }
  else if (*(int *)(in_ECX + 0x118) == 0) {
    FUN_1008ac80("models/hgibs.mdl");
    iVar5 = 0xf7;
  }
  else {
    FUN_1008ac80("models/hgibs.mdl");
    iVar5 = *(int *)(in_ECX + 0x118);
  }
  piVar4[0x37] = iVar5;
  iVar5 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar5 + 0x114) < 2) {
    (*DAT_1022303c)(2,"GibShooter Body is <= 1!\n");
    iVar5 = *(int *)(in_ECX + 4);
  }
  uVar6 = (*DAT_102230b0)(1,*(int *)(iVar5 + 0x114) + -1);
  *(undefined4 *)(piVar4[1] + 0x114) = uVar6;
  fVar1 = (float)piVar4[0x16];
  fVar2 = *DAT_10223188;
  fVar7 = (float10)(*DAT_102230b4)(0x3f733333,0x3f866666);
  fVar3 = (float)(fVar7 * (float10)*(float *)(in_ECX + 0x100));
  piVar4[0x3a] = (int)fVar3;
  if (fVar3 < fVar1 - fVar2) {
    (**(code **)(*piVar4 + 8))(fVar3);
    piVar4[0x3a] = 0;
  }
  fVar7 = (float10)(*DAT_102230b4)(0x42c80000,0x43480000);
  *(float *)(piVar4[1] + 0x5c) = (float)fVar7;
  fVar7 = (float10)(*DAT_102230b4)(0x42c80000,0x43960000);
  *(float *)(piVar4[1] + 0x60) = (float)fVar7;
  return piVar4;
}

