// rea decompile_all
// name: FUN_10057510
// address: 0x10057510
// body: available
// range: 0x10057510-0x10057738 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10057510(int param_1,undefined4 param_2,float param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_2c;
  float local_20;
  
  if (param_4 == 2) {
    iVar1 = in_ECX[1];
    fVar7 = *(float *)(iVar1 + 8) - (*(float *)(param_1 + 0xd0) + *(float *)(param_1 + 0xc4)) * 0.5;
    local_2c = *(float *)(iVar1 + 0xc) -
               (*(float *)(param_1 + 0xd4) + *(float *)(param_1 + 200)) * 0.5;
    fVar6 = *(float *)(iVar1 + 0x10) -
            (*(float *)(param_1 + 0xd8) + *(float *)(param_1 + 0xcc)) * 0.5;
    dVar5 = (double)(local_2c * local_2c + fVar7 * fVar7 + fVar6 * fVar6);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    local_20 = 0.0;
    if ((float)dVar5 == 0.0) {
      local_2c = 0.0;
      fVar6 = 1.0;
    }
    else {
      fVar4 = 1.0 / (float)dVar5;
      local_20 = fVar7 * fVar4;
      local_2c = local_2c * fVar4;
      fVar6 = fVar6 * fVar4;
    }
    fVar3 = (float10)FUN_10087da0(param_3);
    iVar1 = in_ECX[1];
    fVar7 = (float)fVar3;
    param_3 = param_3 * 0.3;
    *(ulonglong *)(iVar1 + 0x20) =
         CONCAT44(local_2c * fVar7 + *(float *)(iVar1 + 0x24),
                  local_20 * fVar7 + *(float *)(iVar1 + 0x20));
    *(float *)(iVar1 + 0x28) = fVar6 * fVar7 + *(float *)(iVar1 + 0x28);
  }
  if ((int)*(float *)(in_ECX[1] + 600) == 1) {
    if (((param_4 & 0x4000000) == 0) && (param_4 != 0x4000000)) goto LAB_100576f4;
  }
  else if (((int)*(float *)(in_ECX[1] + 600) != 2) || (((param_4 & 2) == 0 && (param_4 != 2)))) {
LAB_100576f4:
    iVar1 = (**(code **)(*in_ECX + 0xbc))();
    if ((iVar1 != 0) && ((char)in_ECX[0x7f] == '\0')) {
      (**(code **)(*in_ECX + 0x238))();
    }
    uVar2 = FUN_1008bc50(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}

