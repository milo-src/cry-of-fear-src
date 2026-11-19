// rea decompile_all
// name: FUN_10004fa0
// address: 0x10004fa0
// body: available
// range: 0x10004fa0-0x1000525f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004fa0(void)

{
  undefined4 *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  _memset(&DAT_10220c60,0,0x288);
  iVar3 = 0;
  fVar6 = -0.125;
  puVar1 = &DAT_10220c64;
  do {
    iVar3 = iVar3 + 1;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1[1] = fVar6;
    puVar1 = puVar1 + 3;
    fVar6 = fVar6 + 0.125;
  } while (fVar6 <= 0.125);
  fVar6 = -0.125;
  pfVar2 = (float *)(&DAT_10220c64 + iVar3 * 3);
  do {
    *pfVar2 = fVar6;
    iVar3 = iVar3 + 1;
    pfVar2[-1] = 0.0;
    pfVar2[1] = 0.0;
    pfVar2 = pfVar2 + 3;
    fVar6 = fVar6 + 0.125;
  } while (fVar6 <= 0.125);
  fVar6 = -0.125;
  puVar1 = &DAT_10220c64 + iVar3 * 3;
  do {
    puVar1[-1] = fVar6;
    iVar3 = iVar3 + 1;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
    fVar6 = fVar6 + 0.125;
  } while (fVar6 <= 0.125);
  fVar6 = -0.125;
  do {
    fVar7 = -0.125;
    do {
      fVar5 = -0.125;
      pfVar2 = (float *)(&DAT_10220c64 + iVar3 * 3);
      do {
        iVar4 = iVar3;
        pfVar2[1] = fVar5;
        iVar3 = iVar4 + 1;
        pfVar2[-1] = fVar6;
        fVar5 = fVar5 + 0.25;
        *pfVar2 = fVar7;
        pfVar2 = pfVar2 + 3;
      } while (fVar5 <= 0.125);
      fVar7 = fVar7 + 0.25;
    } while (fVar7 <= 0.125);
    fVar6 = fVar6 + 0.25;
  } while (fVar6 <= 0.125);
  iVar4 = iVar4 + 4;
  fVar6 = -2.0;
  (&DAT_10220c60)[iVar3 * 3] = 0;
  (&DAT_10220c64)[iVar3 * 3] = 0;
  (&DAT_10220c68)[iVar3 * 3] = 0;
  (&DAT_10220c6c)[iVar3 * 3] = 0;
  (&DAT_10220c70)[iVar3 * 3] = 0;
  (&DAT_10220c74)[iVar3 * 3] = 0x3f800000;
  (&DAT_10220c78)[iVar3 * 3] = 0;
  (&DAT_10220c7c)[iVar3 * 3] = 0;
  (&DAT_10220c80)[iVar3 * 3] = 0x40c00000;
  local_14[0] = 0.0;
  pfVar2 = (float *)(&DAT_10220c64 + iVar4 * 3);
  local_14[1] = 1.0;
  local_14[2] = 6.0;
  do {
    *pfVar2 = fVar6;
    iVar4 = iVar4 + 1;
    pfVar2[-1] = 0.0;
    pfVar2[1] = 0.0;
    pfVar2 = pfVar2 + 3;
    fVar6 = fVar6 + 2.0;
  } while (fVar6 <= 2.0);
  fVar6 = -2.0;
  puVar1 = &DAT_10220c64 + iVar4 * 3;
  do {
    puVar1[-1] = fVar6;
    iVar4 = iVar4 + 1;
    fVar6 = fVar6 + 2.0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 3;
  } while (fVar6 <= 2.0);
  iVar3 = 0;
  do {
    fVar6 = local_14[iVar3];
    fVar7 = -2.0;
    do {
      fVar5 = -2.0;
      pfVar2 = (float *)(&DAT_10220c64 + iVar4 * 3);
      do {
        *pfVar2 = fVar5;
        iVar4 = iVar4 + 1;
        pfVar2[-1] = fVar7;
        fVar5 = fVar5 + 2.0;
        pfVar2[1] = fVar6;
        pfVar2 = pfVar2 + 3;
      } while (fVar5 <= 2.0);
      fVar7 = fVar7 + 2.0;
    } while (fVar7 <= 2.0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

