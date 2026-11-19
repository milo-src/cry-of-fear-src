// rea decompile_all
// name: FUN_1000ebe0
// address: 0x1000ebe0
// body: available
// range: 0x1000ebe0-0x1000ed9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ebe0(void)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  int local_28;
  undefined8 local_24;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  float local_c;
  float local_8;
  
  iVar2 = FUN_1000e730(*(undefined4 *)(*(int *)(in_ECX + 4) + 300),&local_4c,&local_58);
  if (iVar2 != 0) {
    local_28 = *(int *)(in_ECX + 4);
    dVar7 = (double)(*(float *)(local_28 + 0x54) * 0.017453292);
    local_24 = dVar7;
    FUN_1016bb00();
    local_8 = (float)dVar7;
    dVar7 = local_24;
    FUN_1016bcc0();
    fVar13 = 9999.0;
    pfVar5 = (float *)&local_70;
    fVar10 = -9999.0;
    fVar11 = 9999.0;
    fVar8 = (float)dVar7;
    local_68 = local_44;
    local_5c = local_50;
    local_10 = 2;
    fVar12 = -9999.0;
    local_40 = 9999.0;
    local_24 = (double)CONCAT44(fVar8,(undefined4)local_24);
    fVar14 = 9999.0;
    local_14 = -fVar8;
    local_70 = local_4c;
    local_64 = local_58;
    local_3c = 9999.0;
    local_34 = -9999.0;
    local_30 = -9999.0;
    local_c = -9999.0;
    do {
      pfVar4 = (float *)((int)&local_70 + 4);
      iVar2 = 2;
      local_18 = *pfVar5 * local_8;
      local_1c = *pfVar5 * fVar8;
      fVar6 = local_1c;
      do {
        pfVar3 = &local_68;
        local_38 = 2;
        fVar9 = *pfVar4 * -fVar8 + local_18;
        fVar6 = *pfVar4 * local_8 + fVar6;
        do {
          fVar1 = *pfVar3;
          if (fVar9 < fVar13) {
            fVar13 = fVar9;
          }
          if (fVar10 < fVar9) {
            fVar10 = fVar9;
          }
          if (fVar6 < fVar11) {
            fVar11 = fVar6;
          }
          if (fVar12 < fVar6) {
            fVar12 = fVar6;
          }
          if (fVar1 < fVar14) {
            fVar14 = fVar1;
          }
          if (local_c < fVar1) {
            local_c = fVar1;
          }
          pfVar3 = pfVar3 + 3;
          local_38 = local_38 + -1;
        } while (local_38 != 0);
        pfVar4 = pfVar4 + 3;
        local_34 = fVar10;
        local_3c = fVar11;
        local_30 = fVar12;
        local_40 = fVar13;
        iVar2 = iVar2 + -1;
        fVar6 = local_1c;
      } while (iVar2 != 0);
      pfVar5 = pfVar5 + 3;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
    local_2c = 0x3f800000;
    FUN_1011a030(local_28,&local_40,&local_34);
  }
  return;
}

