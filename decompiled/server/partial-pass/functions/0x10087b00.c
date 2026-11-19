// rea decompile_all
// name: FUN_10087b00
// address: 0x10087b00
// body: available
// range: 0x10087b00-0x10087d9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10087b00(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  if (*(char *)(in_ECX + 0x220) == '\0') {
    iVar6 = 10;
    do {
      iVar3 = FUN_1002a8e0(0);
      (*DAT_102230b0)(0,0x167);
      (*DAT_102230b0)(0,0x167);
      (*DAT_102230b0)(0,0x167);
      FUN_1008ac80("models/generic_gore.mdl");
      uVar4 = (*DAT_102230b0)(0,3);
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x114) = uVar4;
      iVar5 = *(int *)(in_ECX + 4);
      iVar2 = *(int *)(iVar3 + 4);
      *(undefined8 *)(iVar2 + 8) = *(undefined8 *)(iVar5 + 8);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      iVar5 = (*DAT_102230b0)(0,0x167);
      *(float *)(*(int *)(iVar3 + 4) + 0x50) = (float)iVar5;
      iVar5 = (*DAT_102230b0)(0,0x167);
      *(float *)(*(int *)(iVar3 + 4) + 0x54) = (float)iVar5;
      iVar5 = (*DAT_102230b0)(0,0x167);
      *(float *)(*(int *)(iVar3 + 4) + 0x58) = (float)iVar5;
      fVar7 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
      fVar8 = (float10)(*DAT_102230b4)(0xc2c80000,0x42c80000);
      fVar9 = (float10)(*DAT_102230b4)(0x43480000,0x43960000);
      iVar5 = *(int *)(iVar3 + 4);
      *(ulonglong *)(iVar5 + 0x20) = CONCAT44((float)fVar8,(float)fVar7);
      *(float *)(iVar5 + 0x28) = (float)fVar9;
      iVar5 = (*DAT_102230b0)(0,1);
      if (iVar5 == 0) {
        fVar1 = *(float *)(*(int *)(iVar3 + 4) + 0x10);
        iVar5 = (*DAT_102230b0)(0,(int)*(float *)(*(int *)(in_ECX + 4) + 0xe4));
        *(float *)(*(int *)(iVar3 + 4) + 0x10) = fVar1 - (float)iVar5;
      }
      else {
        iVar5 = (*DAT_102230b0)(0,(int)*(float *)(*(int *)(in_ECX + 4) + 0xf0));
        *(float *)(*(int *)(iVar3 + 4) + 0x10) =
             *(float *)(*(int *)(iVar3 + 4) + 0x10) + (float)iVar5;
      }
      fVar7 = (float10)(*DAT_102230b4)(0x437a0000,0x43c80000);
      *(float *)(*(int *)(iVar3 + 4) + 0x5c) = (float)fVar7;
      fVar7 = (float10)(*DAT_102230b4)(0x437a0000,0x43c80000);
      *(float *)(*(int *)(iVar3 + 4) + 0x60) = (float)fVar7;
      FUN_1008a440();
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0x248) = 1;
      (*DAT_10223000)(2,DAT_10226490,0,0);
      uVar4 = (*DAT_10223064)(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x20c));
      (*DAT_10223010)(uVar4);
      (*DAT_10223020)("aurora/blood_effect.aur");
      (*DAT_10223008)(0);
      (*DAT_10223020)("models/generic_gore.mdl");
      (*DAT_10223010)(0);
      (*DAT_10223004)();
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,"common/bodysplat.wav",0x3f800000,
                 0x3f4ccccd,0,100);
    FUN_10119900();
  }
  return;
}

