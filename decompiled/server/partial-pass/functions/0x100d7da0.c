// rea decompile_all
// name: FUN_100d7da0
// address: 0x100d7da0
// body: available
// range: 0x100d7da0-0x100d7f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d7da0(void)

{
  int iVar1;
  int *in_ECX;
  float fVar2;
  
  fVar2 = *(float *)(in_ECX[1] + 0x1fc);
  if (fVar2 == 0.0) {
    fVar2 = 100.0;
  }
  in_ECX[0x3b] = (int)fVar2;
  *(undefined4 *)(in_ECX[1] + 0x1fc) = 0;
  iVar1 = in_ECX[1];
  *(undefined8 *)(iVar1 + 0x20) = DAT_10222f34;
  *(undefined4 *)(iVar1 + 0x28) = DAT_10222f3c;
  iVar1 = in_ECX[1];
  *(undefined8 *)(in_ECX + 0x4c) = *(undefined8 *)(iVar1 + 0x5c);
  in_ECX[0x4e] = *(int *)(iVar1 + 100);
  *(undefined8 *)(iVar1 + 0x5c) = DAT_10222f34;
  *(undefined4 *)(iVar1 + 100) = DAT_10222f3c;
  *(int *)(in_ECX[1] + 0x188) = (int)(float)in_ECX[0x3b];
  in_ECX[0x3c] = 0x3f800000;
  if (*(int *)(in_ECX[1] + 0x1cc) == 0) {
    iVar1 = *(int *)(in_ECX[1] + 0x1d0);
    if (iVar1 == 0) {
      (*DAT_1022303c)(1,"func_tracktrain with no target\n");
    }
    else {
      (*DAT_1022303c)(1,"func_tracktrain %s has no target\n",*(int *)(DAT_10223188 + 0x98) + iVar1);
    }
  }
  *(uint *)(in_ECX[1] + 0x10c) = ~(*(uint *)(in_ECX[1] + 0x1a4) >> 1) & 4;
  *(undefined4 *)(in_ECX[1] + 0x108) = 7;
  (*DAT_10222f50)(*(undefined4 *)(in_ECX[1] + 0x20c),
                  *(int *)(in_ECX[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98));
  iVar1 = in_ECX[1];
  FUN_1011a030(iVar1,iVar1 + 0xdc,iVar1 + 0xe8);
  FUN_10119fe0();
  iVar1 = in_ECX[1];
  *(undefined8 *)(iVar1 + 0x14) = *(undefined8 *)(iVar1 + 8);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = in_ECX[1];
  *(undefined8 *)(in_ECX + 0x3e) = *(undefined8 *)(iVar1 + 0xdc);
  in_ECX[0x40] = *(int *)(iVar1 + 0xe4);
  *(undefined8 *)(in_ECX + 0x41) = *(undefined8 *)(iVar1 + 0xe8);
  in_ECX[0x43] = *(int *)(iVar1 + 0xf0);
  in_ECX[0x43] = (int)((float)in_ECX[0x43] + 72.0);
  FUN_100d6810(0x3dcccccd,0);
  in_ECX[0x1e] = (int)CFuncTrackTrain::Find;
                    /* WARNING: Could not recover jumptable at 0x100d7f69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x30))();
  return;
}

