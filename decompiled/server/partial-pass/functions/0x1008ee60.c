// rea decompile_all
// name: FUN_1008ee60
// address: 0x1008ee60
// body: available
// range: 0x1008ee60-0x1008f0da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008ee60(void)

{
  float fVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  float fVar4;
  double dVar5;
  
  FUN_10102b80(in_ECX[1]);
  *(undefined4 *)(in_ECX[1] + 0x10c) = 4;
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  FUN_10119fe0();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar3 = in_ECX[1];
  if (*(float *)(iVar3 + 0x1e4) == 0.0) {
    *(undefined4 *)(iVar3 + 0x1e4) = 0x40000000;
    iVar3 = in_ECX[1];
  }
  in_ECX[0x61] = 0;
  *(undefined8 *)(in_ECX + 0x47) = *(undefined8 *)(iVar3 + 8);
  in_ECX[0x49] = *(int *)(iVar3 + 0x10);
  fVar1 = *(float *)(iVar3 + 0x4c);
  dVar5 = (double)((*(float *)(iVar3 + 0xfc) - 2.0) * fVar1);
  fVar4 = (float)((ABS((double)((*(float *)(iVar3 + 0xf4) - 2.0) * *(float *)(iVar3 + 0x44))) +
                   ABS((double)((*(float *)(iVar3 + 0xf8) - 2.0) * *(float *)(iVar3 + 0x48))) +
                  ABS((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(ABS(dVar5),0)))) -
                 (double)(float)in_ECX[0x44]);
  *(ulonglong *)(in_ECX + 0x4a) =
       CONCAT44(*(float *)(iVar3 + 0x48) * fVar4 + (float)in_ECX[0x48],
                *(float *)(iVar3 + 0x44) * fVar4 + (float)in_ECX[0x47]);
  in_ECX[0x4c] = (int)(fVar1 * fVar4 + (float)in_ECX[0x49]);
  if ((*(byte *)(iVar3 + 0x1a4) & 1) != 0) {
    FUN_100c4550();
    iVar3 = in_ECX[0x4a];
    iVar2 = in_ECX[0x4c];
    *(undefined8 *)(in_ECX + 0x4a) = *(undefined8 *)(in_ECX + 0x47);
    in_ECX[0x4c] = in_ECX[0x49];
    in_ECX[0x47] = iVar3;
    in_ECX[0x48] = in_ECX[0x4b];
    in_ECX[0x49] = iVar2;
  }
  iVar3 = in_ECX[5];
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    fVar1 = *(float *)(iVar2 + 0x10);
    *(ulonglong *)(in_ECX + 0x47) =
         CONCAT44((float)in_ECX[0x48] - *(float *)(iVar2 + 0xc),
                  (float)in_ECX[0x47] - *(float *)(iVar2 + 8));
    in_ECX[0x49] = (int)((float)in_ECX[0x49] - fVar1);
    iVar3 = *(int *)(iVar3 + 4);
    fVar1 = *(float *)(iVar3 + 0x10);
    *(ulonglong *)(in_ECX + 0x4a) =
         CONCAT44((float)in_ECX[0x4b] - *(float *)(iVar3 + 0xc),
                  (float)in_ECX[0x4a] - *(float *)(iVar3 + 8));
    in_ECX[0x4c] = (int)((float)in_ECX[0x4c] - fVar1);
  }
  in_ECX[0x1f] = 0;
  (**(code **)(*in_ECX + 0x30))();
  return;
}

