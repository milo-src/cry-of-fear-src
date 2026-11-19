// rea decompile_all
// name: FUN_100bc940
// address: 0x100bc940
// body: available
// range: 0x100bc940-0x100bcbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_100bc940(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  float *pfVar4;
  int iVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined1 local_40 [16];
  float fStack_30;
  
  if (param_8 == 0.0) {
    param_8 = 784.0;
  }
  if (param_8 * 0.5 < param_7) {
    param_7 = param_8 * 0.5;
  }
  if ((DAT_102238b0 == 0) || (DAT_102238b4 == 0)) {
    (*DAT_1022303c)(2,"Graph not ready for BuildNearestRoute!\n");
  }
  else {
    iVar1 = FUN_100cd530(*(int *)(in_ECX + 4) + 8,in_ECX);
    uVar2 = FUN_100cde50(in_ECX);
    if (iVar1 == -1) {
      (*DAT_1022303c)(2,"BuildNearestRoute() - %s has no nearest node!\n",
                      *(int *)(DAT_10223188 + 0x98) + **(int **)(in_ECX + 4));
      return 0;
    }
    iVar5 = 0;
    local_58 = param_1 + param_4;
    local_54 = param_2 + param_5;
    local_50 = param_3 + param_6;
    if (0 < DAT_102238c8) {
      do {
        iVar3 = (DAT_10225978 + iVar5) % DAT_102238c8;
        DAT_10225978 = iVar3 + 1;
        pfVar4 = (float *)(iVar3 * 0x58 + DAT_102238bc);
        iVar3 = FUN_100ce830(iVar1,iVar3,uVar2,0);
        if (iVar3 != iVar1) {
          auVar7._0_8_ = (double)((param_2 - pfVar4[1]) * (param_2 - pfVar4[1]) +
                                  (param_1 - *pfVar4) * (param_1 - *pfVar4) +
                                 (param_3 - pfVar4[2]) * (param_3 - pfVar4[2]));
          auVar7._8_8_ = 0;
          if (auVar7._0_8_ < 0.0) {
            __libm_sse2_sqrt_precise();
            dVar6 = auVar7._0_8_;
          }
          else {
            dVar6 = SQRT(auVar7._0_8_);
          }
          if ((param_7 < (float)dVar6) && ((float)dVar6 < param_8)) {
            iVar3 = *(int *)(in_ECX + 4);
            local_48 = *(float *)(iVar3 + 0x17c) + pfVar4[1];
            local_44 = *(float *)(iVar3 + 0x180) + pfVar4[2];
            local_4c = *(float *)(iVar3 + 0x178) + *pfVar4;
            FUN_1011a800(&local_4c,&local_58,1,*(undefined4 *)(iVar3 + 0x20c),local_40);
            if (fStack_30 == 1.0) {
              iVar3 = FUN_100bcbc0(pfVar4,0x40,0);
              if (iVar3 != 0) {
                *(undefined8 *)(in_ECX + 0x2c4) = *(undefined8 *)pfVar4;
                *(float *)(in_ECX + 0x2cc) = pfVar4[2];
                return 1;
              }
            }
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < DAT_102238c8);
      return 0;
    }
  }
  return 0;
}

