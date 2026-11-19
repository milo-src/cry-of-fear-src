// rea decompile_all
// name: FUN_100bfae0
// address: 0x100bfae0
// body: available
// range: 0x100bfae0-0x100bfc42 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bfae0(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  int *in_ECX;
  float10 fVar6;
  double dVar7;
  uint uStack_1c;
  undefined1 auStack_14 [16];
  
  in_ECX[0x60] = in_ECX[0x60] & 0xfff9ffbf;
  in_ECX[0xb5] = -1;
  in_ECX[0xb6] = 0;
  uStack_1c = (**(code **)(*in_ECX + 0x1e8))();
  if (in_ECX[0x8c] != 0) {
    uStack_1c = uStack_1c & *(uint *)(in_ECX[0x8c] + 0xc);
  }
  fVar1 = (float)FUN_10100560();
  in_ECX[0x60] = in_ECX[0x60] & 0xfff9ffbf;
  fVar6 = (float10)(**(code **)(*in_ECX + 500))();
  while (fVar1 != -NAN) {
    pfVar2 = (float *)FUN_10100910(fVar1);
    if ((pfVar2 != (float *)0x0) && (((uint)pfVar2[3] & uStack_1c) != 0)) {
      pfVar3 = (float *)(**(code **)(*in_ECX + 0x104))(auStack_14);
      dVar7 = (double)((pfVar2[1] - pfVar3[1]) * (pfVar2[1] - pfVar3[1]) +
                       (*pfVar2 - *pfVar3) * (*pfVar2 - *pfVar3) +
                      (pfVar2[2] - pfVar3[2]) * (pfVar2[2] - pfVar3[2]));
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if ((float)dVar7 <= (float)(int)pfVar2[4] * (float)fVar6) {
        pfVar2[7] = (float)in_ECX[0xb5];
        iVar4 = FUN_101005f0();
        if (iVar4 == 0) {
          if (((uint)pfVar2[3] & 0x18) == 0) {
            uVar5 = in_ECX[0x60] | 0x40000;
          }
          else {
            uVar5 = in_ECX[0x60] | 0x40040;
          }
          in_ECX[0x60] = uVar5;
        }
        else {
          in_ECX[0x60] = in_ECX[0x60] | 0x20000;
        }
        in_ECX[0xb6] = in_ECX[0xb6] | (uint)pfVar2[3];
        in_ECX[0xb5] = (int)fVar1;
      }
    }
    fVar1 = pfVar2[6];
  }
  return;
}

