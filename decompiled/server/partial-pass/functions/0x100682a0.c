// rea decompile_all
// name: FUN_100682a0
// address: 0x100682a0
// body: available
// range: 0x100682a0-0x1006848a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100682a0(void)

{
  float fVar1;
  int iVar2;
  CRifle *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  fVar1 = *DAT_10223188;
  if ((((*(float *)(in_ECX + 0x1cc) <= fVar1) && (*(float *)(in_ECX + 0x1d0) <= fVar1)) &&
      (*(float *)(in_ECX + 0x1d4) <= fVar1)) &&
     ((*(int *)(in_ECX + 0x128) == 0 && (*(int *)(in_ECX + 0x140) == 0)))) {
    if (in_ECX[0x106] == (CRifle)0x0) {
      in_ECX[0x106] = (CRifle)0x1;
      (**(code **)(*(int *)in_ECX + 0x198))(7);
      (**(code **)(*(int *)in_ECX + 8))(0x3dcccccd);
      *(code **)(in_ECX + 0x78) = CRifle::Zoom;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      FUN_10119c00(*(undefined4 *)(in_ECX + 0x160),&local_10,0x3dcccccd,0x3f800000,0xff,5);
    }
    else {
      in_ECX[0x106] = (CRifle)0x0;
      (**(code **)(*(int *)in_ECX + 0x198))(8,1,0);
      CRifle::PostZoom(in_ECX);
      iVar2 = *(int *)(in_ECX + 0x160);
      if (*(char *)(iVar2 + 0x3bc) != '\0') {
        *(undefined1 *)(iVar2 + 0x3bc) = 0;
        (*DAT_10223000)(8,DAT_102266c4,0,
                        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c));
        (*DAT_10223008)(0);
        (*DAT_10223004)();
        FUN_100fc9f0(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x20c),2,
                     "player/vocal/breathing/release_breath.wav",0x3f800000,0x3f4ccccd,0,100);
        iVar2 = *(int *)(in_ECX + 0x160);
      }
      (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x20c));
      (*DAT_1022301c)(0x44268000);
      (*DAT_10223008)(0);
      (*DAT_10223008)(0);
      (*DAT_10223004)();
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x274) = 0x42b40000;
    }
    fVar1 = *DAT_10223188 + 0.25;
    *(float *)(in_ECX + 0x1cc) = fVar1;
    *(float *)(in_ECX + 0x1d0) = fVar1;
    *(float *)(in_ECX + 0x1d4) = fVar1;
    *(float *)(in_ECX + 0x1d8) = fVar1;
  }
  return;
}

