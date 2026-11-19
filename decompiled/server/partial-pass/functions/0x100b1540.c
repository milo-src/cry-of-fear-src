// rea decompile_all
// name: FUN_100b1540
// address: 0x100b1540
// body: available
// range: 0x100b1540-0x100b18d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b1540(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  float fVar7;
  char *pcVar8;
  
  *(undefined4 *)(in_ECX[1] + 0xb8) = 0;
  *(undefined4 *)(in_ECX[1] + 0x10c) = 0;
  *(undefined4 *)(in_ECX[1] + 0x170) = 0;
  if (*(float *)(param_1 + 0x10) != 1.0) {
    iVar4 = in_ECX[1];
    fVar1 = *(float *)(param_1 + 0x2c);
    fVar7 = *(float *)(iVar4 + 0x1e4) - 24.0;
    fVar2 = *(float *)(param_1 + 0x1c);
    *(ulonglong *)(iVar4 + 8) =
         CONCAT44(*(float *)(param_1 + 0x28) * fVar7 * 0.6 + *(float *)(param_1 + 0x18),
                  *(float *)(param_1 + 0x24) * fVar7 * 0.6 + *(float *)(param_1 + 0x14));
    *(float *)(iVar4 + 0x10) = fVar1 * fVar7 * 0.6 + fVar2;
  }
  iVar4 = FUN_10119780(in_ECX[1] + 8);
  (*DAT_10223000)(5,0x17,in_ECX[1] + 8,0);
  (*DAT_10223008)(3);
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 8));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0xc));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0x10));
  sVar3 = DAT_10231f10;
  if (iVar4 == -3) {
    sVar3 = DAT_10231f18;
  }
  (*DAT_10223010)((int)sVar3);
  (*DAT_10223008)((int)((*(float *)(in_ECX[1] + 0x1e4) - 50.0) * 0.6));
  (*DAT_10223008)(0xf);
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  (*DAT_10223000)(5,DAT_1022655c,in_ECX[1] + 8,0);
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 8));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0xc));
  (*DAT_1022301c)(*(undefined4 *)(in_ECX[1] + 0x10));
  (*DAT_10223008)(0x23);
  (*DAT_10223008)(0xf);
  (*DAT_10223008)(0x1e);
  (*DAT_10223004)();
  FUN_10100820(1,in_ECX[1] + 8,0x400,0x40400000);
  iVar5 = *(int *)(in_ECX[1] + 0x19c);
  *(undefined4 *)(in_ECX[1] + 0x19c) = 0;
  FUN_1008a9e0(in_ECX[1],-(uint)(iVar5 != 0) & iVar5 + 0x80U,*(undefined4 *)(in_ECX[1] + 0x1e4),0,
               param_2);
  fVar6 = (float10)(*DAT_102230b4)(0,0x3f800000);
  FUN_101180b0(param_1,(0.5 <= (float)fVar6) + '\v');
  (*DAT_102230b4)(0,0x3f800000);
  iVar5 = (*DAT_102230b0)(0,2);
  if (iVar5 == 0) {
    pcVar8 = "weapons/debris1.wav";
  }
  else if (iVar5 == 1) {
    pcVar8 = "weapons/debris2.wav";
  }
  else {
    if (iVar5 != 2) goto LAB_100b1851;
    pcVar8 = "weapons/debris3.wav";
  }
  FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),2,pcVar8,0x3f0ccccd,0x3f4ccccd,0,100);
LAB_100b1851:
  *(uint *)(in_ECX[1] + 0x118) = *(uint *)(in_ECX[1] + 0x118) | 0x80;
  iVar5 = in_ECX[1];
  in_ECX[0x1e] = (int)CGrenade::Smoke;
  *(undefined8 *)(iVar5 + 0x20) = DAT_10222f34;
  *(undefined4 *)(iVar5 + 0x28) = DAT_10222f3c;
  (**(code **)(*in_ECX + 8))(0x3e99999a);
  if (iVar4 != -3) {
    iVar4 = (*DAT_102230b0)(0,3);
    if (0 < iVar4) {
      do {
        FUN_10017950("spark_shower",in_ECX[1] + 8,param_1 + 0x24,0);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

