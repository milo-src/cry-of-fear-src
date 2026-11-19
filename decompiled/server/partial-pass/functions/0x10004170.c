// rea decompile_all
// name: FUN_10004170
// address: 0x10004170
// body: available
// range: 0x10004170-0x100044aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004170(void)

{
  float *pfVar1;
  int iVar2;
  char *_Str;
  int iVar3;
  float *pfVar4;
  float10 fVar5;
  double dVar6;
  float fVar7;
  float *local_24;
  ushort *local_20;
  float local_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint local_c;
  
  iVar2 = DAT_10220c50;
  local_c = DAT_1021baf4 ^ (uint)&local_24;
  local_20 = (ushort *)(DAT_10220c50 + 0x45476);
  if (((*local_20 & 0x1000) == 0) || ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) == 0)) {
    fVar7 = *(float *)(DAT_10220c50 + 0x4546c);
    pfVar1 = (float *)(DAT_10220c50 + 0x4546c);
    if ((fVar7 != 0.0) && (*(float *)(DAT_10220c50 + 0x45468) != 0.0)) {
      *(float *)(DAT_10220c50 + 0x45468) = *(float *)(DAT_10220c50 + 0x45468) * 0.5;
      fVar7 = *pfVar1;
    }
  }
  else {
    fVar7 = 0.0;
    *(undefined4 *)(DAT_10220c50 + 0x4546c) = 0;
  }
  iVar3 = DAT_10220c50;
  pfVar4 = (float *)(iVar2 + 0x4546c);
  local_1c = *(float *)(DAT_10220c50 + 0x45468);
  local_24 = (float *)(DAT_10220c50 + 0x45468);
  pfVar1 = (float *)(DAT_10220c50 + 0x45470);
  dVar6 = (double)(fVar7 * fVar7 + local_1c * local_1c +
                  *(float *)(DAT_10220c50 + 0x45470) * *(float *)(DAT_10220c50 + 0x45470));
  if (dVar6 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar6 = SQRT(dVar6);
  }
  fVar7 = (float)dVar6;
  if ((fVar7 != 0.0) && (*(float *)(iVar3 + 500) < fVar7)) {
    fVar7 = *(float *)(iVar3 + 500) / fVar7;
    *local_24 = local_1c * fVar7;
    *pfVar4 = *pfVar4 * fVar7;
    *pfVar1 = *pfVar1 * fVar7;
    iVar3 = DAT_10220c50;
  }
  if (((*(uint *)(iVar3 + 0xb8) & 0x1001000) != 0) || (*(int *)(iVar3 + 0xd0) != 0)) {
    *local_24 = 0.0;
    *pfVar4 = 0.0;
    *pfVar1 = 0.0;
    *local_20 = 0;
    iVar3 = DAT_10220c50;
  }
  FUN_10005260(iVar3 + 0xa0);
  _Str = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1d94);
  _atoi(_Str);
  if (*(float *)(DAT_10220c50 + 0x214) <= 50.0 && *(float *)(DAT_10220c50 + 0x214) != 50.0) {
    if (*(int *)(DAT_10220c50 + 0xd0) == 0) {
      if (0.0 < *(float *)(DAT_10220c50 + 0x45488)) {
        *(undefined4 *)(DAT_10220c50 + 0x4545c) = *(undefined4 *)(DAT_10220c50 + 0x45480);
        *(undefined4 *)(DAT_10220c50 + 0x45460) = *(undefined4 *)(DAT_10220c50 + 0x45484);
      }
      fStack_18 = *(float *)(DAT_10220c50 + 0x4545c) + *(float *)(DAT_10220c50 + 0xa0);
      fStack_14 = *(float *)(DAT_10220c50 + 0xa4) + *(float *)(DAT_10220c50 + 0x45460);
      fStack_10 = *(float *)(DAT_10220c50 + 0xa8) + *(float *)(DAT_10220c50 + 0x45464);
      fVar5 = (float10)FUN_10003bb0(&fStack_18,DAT_10220c50 + 0x5c,
                                    *(undefined4 *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 100),
                                    *(undefined4 *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x68));
      local_20 = (ushort *)(float)(fVar5 * (float10)4.0);
      *(ushort **)(DAT_10220c50 + 0x4c) = local_20;
      *(float *)(DAT_10220c50 + 0x44) = fStack_18;
      *(float *)(DAT_10220c50 + 0x48) = fStack_14;
    }
    else {
      *(undefined4 *)(DAT_10220c50 + 0x44) = *(undefined4 *)(DAT_10220c50 + 0x50);
      *(undefined4 *)(DAT_10220c50 + 0x48) = *(undefined4 *)(DAT_10220c50 + 0x54);
      *(undefined4 *)(DAT_10220c50 + 0x4c) = *(undefined4 *)(DAT_10220c50 + 0x58);
    }
  }
  if (*(int *)(DAT_10220c50 + 0xd0) == 0) {
    if (*(float *)(DAT_10220c50 + 0x88) == -8.0) {
      *(undefined4 *)(DAT_10220c50 + 0x88) = 0x41e00000;
    }
  }
  else {
    *(undefined4 *)(DAT_10220c50 + 0x88) = 0xc1000000;
  }
  if (180.0 < *(float *)(DAT_10220c50 + 0x48)) {
    *(float *)(DAT_10220c50 + 0x48) = *(float *)(DAT_10220c50 + 0x48) - 360.0;
  }
  __security_check_cookie(local_c ^ (uint)&local_24);
  return;
}

