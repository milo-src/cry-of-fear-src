// rea decompile_all
// name: FUN_1008f0e0
// address: 0x1008f0e0
// body: available
// range: 0x1008f0e0-0x1008f2ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008f0e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *in_ECX;
  int iVar4;
  code *pcVar5;
  
  (**(code **)(*in_ECX + 0x30))();
  FUN_10101e00(in_ECX[1]);
  iVar4 = in_ECX[1];
  if ((*(byte *)(iVar4 + 0x1a4) & 2) != 0) {
    *(ulonglong *)(iVar4 + 0x44) =
         CONCAT44(*(float *)(iVar4 + 0x48) * -1.0,*(float *)(iVar4 + 0x44) * -1.0);
    *(float *)(iVar4 + 0x4c) = *(float *)(iVar4 + 0x4c) * -1.0;
    iVar4 = in_ECX[1];
  }
  fVar1 = (float)in_ECX[0x42];
  *(undefined8 *)(in_ECX + 0x4d) = *(undefined8 *)(iVar4 + 0x50);
  in_ECX[0x4f] = *(int *)(iVar4 + 0x58);
  fVar2 = *(float *)(iVar4 + 0x4c);
  fVar3 = *(float *)(iVar4 + 0x58);
  *(ulonglong *)(in_ECX + 0x50) =
       CONCAT44(*(float *)(iVar4 + 0x48) * fVar1 + *(float *)(iVar4 + 0x54),
                fVar1 * *(float *)(iVar4 + 0x44) + *(float *)(iVar4 + 0x50));
  in_ECX[0x52] = (int)(fVar2 * fVar1 + fVar3);
  *(uint *)(iVar4 + 0x10c) = ~(*(uint *)(iVar4 + 0x1a4) >> 1) & 4;
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  FUN_10119fe0();
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar4 = in_ECX[1];
  if (*(float *)(iVar4 + 0x1fc) == 0.0) {
    *(undefined4 *)(iVar4 + 0x1fc) = 0x42c80000;
    iVar4 = in_ECX[1];
  }
  if ((*(byte *)(iVar4 + 0x1a4) & 1) != 0) {
    *(undefined8 *)(iVar4 + 0x50) = *(undefined8 *)(in_ECX + 0x50);
    *(int *)(iVar4 + 0x58) = in_ECX[0x52];
    *(undefined8 *)(in_ECX + 0x50) = *(undefined8 *)(in_ECX + 0x4d);
    in_ECX[0x52] = in_ECX[0x4f];
    in_ECX[0x4d] = in_ECX[0x4d];
    in_ECX[0x4e] = in_ECX[0x4e];
    in_ECX[0x4f] = in_ECX[0x4f];
    iVar4 = in_ECX[1];
    *(ulonglong *)(iVar4 + 0x44) =
         CONCAT44(*(float *)(iVar4 + 0x48) * -1.0,*(float *)(iVar4 + 0x44) * -1.0);
    *(float *)(iVar4 + 0x4c) = *(float *)(iVar4 + 0x4c) * -1.0;
    iVar4 = in_ECX[1];
  }
  in_ECX[0x40] = 1;
  pcVar5 = (code *)0x0;
  if ((*(uint *)(iVar4 + 0x1a4) & 0x500) != 0x100) {
    pcVar5 = CBaseDoor::DoorTouch;
  }
  in_ECX[0x1f] = (int)pcVar5;
  return;
}

