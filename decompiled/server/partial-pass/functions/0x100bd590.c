// rea decompile_all
// name: FUN_100bd590
// address: 0x100bd590
// body: available
// range: 0x100bd590-0x100bd7a6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100bd590(float *param_1,float *param_2,int param_3,float *param_4)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fStack_30;
  float local_20;
  float local_1c;
  float local_18;
  undefined8 local_14;
  undefined4 local_c;
  
  local_14 = *(undefined8 *)(*(int *)(in_ECX + 4) + 8);
  local_c = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10);
  local_20 = *param_2 - *param_1;
  local_1c = param_2[1] - param_1[1];
  local_18 = param_2[2] - param_1[2];
  fVar3 = (float10)FUN_1011a930(&local_20);
  dVar6 = (double)((param_2[1] - param_1[1]) * (param_2[1] - param_1[1]) +
                  (*param_2 - *param_1) * (*param_2 - *param_1));
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar4 = (float)dVar6;
  FUN_10119fe0();
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a8) & 3) == 0) {
    (*DAT_10222fb0)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
  }
  fStack_30 = 0.0;
  if (0.0 < fVar4) {
    do {
      fVar5 = 16.0;
      fVar7 = fStack_30 + 16.0;
      if (fVar4 - 1.0 <= fVar7) {
        fVar5 = (fVar4 - fStack_30) - 1.0;
      }
      iVar1 = (*DAT_10222fb4)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),(float)fVar3,fVar5,2);
      if (iVar1 == 0) {
        if (param_4 != (float *)0x0) {
          *param_4 = fStack_30;
        }
        if ((param_3 == 0) ||
           (*(int *)(*(int *)(param_3 + 4) + 0x20c) != *(int *)(DAT_10223188 + 0x74))) {
          uVar2 = 0;
          goto LAB_100bd75c;
        }
        break;
      }
      fStack_30 = fVar7;
    } while (fVar7 < fVar4);
  }
  uVar2 = 2;
  if (((*(byte *)(*(int *)(in_ECX + 4) + 0x1a8) & 3) == 0) &&
     (((param_3 == 0 || ((*(uint *)(*(int *)(param_3 + 4) + 0x1a8) & 0x200) != 0)) &&
      (uVar2 = 2, 64.0 < ABS(param_2[2] - *(float *)(*(int *)(in_ECX + 4) + 0x10)))))) {
    uVar2 = 1;
  }
LAB_100bd75c:
  FUN_10119fe0();
  return uVar2;
}

