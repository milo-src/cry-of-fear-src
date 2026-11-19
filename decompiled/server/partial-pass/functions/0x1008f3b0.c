// rea decompile_all
// name: FUN_1008f3b0
// address: 0x1008f3b0
// body: available
// range: 0x1008f3b0-0x1008f577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008f3b0(undefined4 param_1,undefined4 param_2,int param_3,float param_4)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (param_3 == 2) {
    fVar2 = 1.0;
    if (param_4 <= 1.0) {
      fVar2 = param_4;
    }
    iVar1 = FUN_10102320();
    if (iVar1 == 0) {
      iVar1 = *(int *)(in_ECX + 4);
      fVar8 = *(float *)(in_ECX + 0x120) +
              (*(float *)(in_ECX + 300) - *(float *)(in_ECX + 0x120)) * fVar2;
      fVar9 = *(float *)(in_ECX + 0x124) +
              (*(float *)(in_ECX + 0x130) - *(float *)(in_ECX + 0x124)) * fVar2;
      fVar3 = *(float *)(iVar1 + 0x1fc);
      fVar7 = *(float *)(in_ECX + 0x11c) +
              (*(float *)(in_ECX + 0x128) - *(float *)(in_ECX + 0x11c)) * fVar2;
      if (fVar3 == 0.0) {
        fVar6 = fVar8 - *(float *)(iVar1 + 0xc);
        fVar5 = fVar7 - *(float *)(iVar1 + 8);
        fVar3 = fVar9 - *(float *)(iVar1 + 0x10);
        dVar4 = (double)(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3);
        if (dVar4 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar4 = SQRT(dVar4);
        }
        fVar3 = (float)dVar4 * 10.0;
      }
      if (fVar3 != 0.0) {
        if (*(int *)(in_ECX + 0x184) == 0) {
          *(undefined4 *)(in_ECX + 0x184) = 2;
          FUN_100fc9f0(*(undefined4 *)(iVar1 + 0x20c),6,
                       *(int *)(iVar1 + 0x1f0) + *(int *)(DAT_10223188 + 0x98),0x3f800000,0x3f4ccccd
                       ,0,100);
        }
        *(float *)(in_ECX + 0x188) = fVar2;
        FUN_101025c0(fVar7,fVar8,fVar9,fVar3);
        *(code **)(in_ECX + 0x154) = CMomentaryDoor::MomentaryMoveDone;
      }
    }
  }
  return;
}

