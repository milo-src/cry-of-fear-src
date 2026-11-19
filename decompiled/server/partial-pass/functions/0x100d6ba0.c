// rea decompile_all
// name: FUN_100d6ba0
// address: 0x100d6ba0
// body: available
// range: 0x100d6ba0-0x100d6f11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d6ba0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  
  iVar5 = FUN_10118590(0,*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc));
  in_ECX[0x65] = 0;
  if (iVar5 == 0) {
    (*DAT_1022303c)(1,"Missing train target \"%s\"\n",
                    *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX[1] + 0x1cc));
    return;
  }
  iVar5 = *(int *)(iVar5 + 4);
  *(undefined4 *)(in_ECX[1] + 0x1d8) = *(undefined4 *)(iVar5 + 0x1d0);
  *(undefined4 *)(in_ECX[1] + 0x1cc) = *(undefined4 *)(iVar5 + 0x1cc);
  iVar6 = in_ECX[1];
  in_ECX[99] = iVar5;
  if (((*(float *)(iVar6 + 0x5c) != (float)DAT_10222f34) ||
      (*(float *)(iVar6 + 0x60) != DAT_10222f34._4_4_)) || (*(float *)(iVar6 + 100) != DAT_10222f3c)
     ) {
    *(undefined8 *)(in_ECX + 0x67) = *(undefined8 *)(iVar6 + 0x5c);
    in_ECX[0x69] = *(int *)(iVar6 + 100);
    FUN_100c4b90();
    iVar6 = in_ECX[1];
  }
  if ((*(byte *)(iVar6 + 0x1a4) & 2) == 0) {
    fVar1 = *(float *)(iVar5 + 0x10);
    fVar2 = *(float *)(iVar6 + 0xf0);
    fVar3 = *(float *)(iVar6 + 0xe4);
    fVar4 = *(float *)(iVar6 + 0x10);
    *(ulonglong *)(in_ECX + 0x1a) =
         CONCAT44(((*(float *)(iVar5 + 0xc) -
                   (*(float *)(iVar6 + 0xec) + *(float *)(iVar6 + 0xe0)) * 0.5) +
                  (float)in_ECX[0x1b]) - *(float *)(iVar6 + 0xc),
                  ((*(float *)(iVar5 + 8) -
                   (*(float *)(iVar6 + 0xe8) + *(float *)(iVar6 + 0xdc)) * 0.5) +
                  (float)in_ECX[0x1a]) - *(float *)(iVar6 + 8));
    in_ECX[0x1c] = (int)(((fVar1 - (fVar2 + fVar3) * 0.5) + (float)in_ECX[0x1c]) - fVar4);
  }
  else {
    fVar1 = *(float *)(iVar5 + 0x10);
    fVar2 = *(float *)(iVar6 + 0x10);
    *(ulonglong *)(in_ECX + 0x1a) =
         CONCAT44(((float)in_ECX[0x1b] + *(float *)(iVar5 + 0xc)) - *(float *)(iVar6 + 0xc),
                  (*(float *)(iVar5 + 8) + (float)in_ECX[0x1a]) - *(float *)(iVar6 + 8));
    in_ECX[0x1c] = (int)(((float)in_ECX[0x1c] + fVar1) - fVar2);
  }
  FUN_100c4550();
  iVar5 = in_ECX[1];
  if ((*(int *)(iVar5 + 0x1d0) != 0) && ((*(uint *)(iVar5 + 0x1a4) & 4) == 0)) {
    *(uint *)(iVar5 + 0x1a4) = *(uint *)(iVar5 + 0x1a4) | 1;
    return;
  }
  (**(code **)(*in_ECX + 8))(0x3fc00000);
  in_ECX[0x1e] = (int)CFuncTrain::ThinkDoNext;
  return;
}

