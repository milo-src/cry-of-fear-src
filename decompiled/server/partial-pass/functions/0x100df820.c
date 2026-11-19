// rea decompile_all
// name: FUN_100df820
// address: 0x100df820
// body: available
// range: 0x100df820-0x100dfa37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100df820(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  float local_74;
  int iStack_70;
  int iStack_68;
  int local_60 [2];
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  local_60[0] = param_3;
  local_60[1] = param_4;
  local_74 = 1e+06;
  local_58 = ((float)param_2[5] - *param_1) + ((float)param_2[5] - *param_1) + *param_1;
  local_54 = ((float)param_2[6] - param_1[1]) + ((float)param_2[6] - param_1[1]) + param_1[1];
  local_50 = ((float)param_2[7] - param_1[2]) + ((float)param_2[7] - param_1[2]) + param_1[2];
  FUN_1011a800(param_1,&local_58,0,param_5,&local_40);
  if (fStack_30 < 1.0) {
    *param_2 = local_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
    param_2[3] = uStack_34;
    param_2[4] = fStack_30;
    param_2[5] = fStack_2c;
    param_2[6] = fStack_28;
    param_2[7] = fStack_24;
    param_2[8] = uStack_20;
    param_2[9] = uStack_1c;
    param_2[10] = uStack_18;
    param_2[0xb] = uStack_14;
    *(undefined8 *)(param_2 + 0xc) = uStack_10;
    return;
  }
  iStack_68 = 0;
  do {
    pfVar1 = (float *)local_60[iStack_68];
    iStack_70 = 0;
    do {
      iVar2 = local_60[iStack_70];
      iVar3 = 0;
      do {
        fStack_4c = *pfVar1 + local_58;
        fStack_48 = *(float *)(iVar2 + 4) + local_54;
        fStack_44 = *(float *)(local_60[iVar3] + 8) + local_50;
        FUN_1011a800(param_1,&fStack_4c,0,param_5,&local_40);
        if (fStack_30 < 1.0) {
          dVar4 = (double)((fStack_28 - param_1[1]) * (fStack_28 - param_1[1]) +
                           (fStack_2c - *param_1) * (fStack_2c - *param_1) +
                          (fStack_24 - param_1[2]) * (fStack_24 - param_1[2]));
          if (dVar4 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar4 = SQRT(dVar4);
          }
          if ((float)dVar4 < local_74) {
            *param_2 = local_40;
            param_2[1] = uStack_3c;
            param_2[2] = uStack_38;
            param_2[3] = uStack_34;
            param_2[4] = fStack_30;
            param_2[5] = fStack_2c;
            param_2[6] = fStack_28;
            param_2[7] = fStack_24;
            param_2[8] = uStack_20;
            param_2[9] = uStack_1c;
            param_2[10] = uStack_18;
            param_2[0xb] = uStack_14;
            *(undefined8 *)(param_2 + 0xc) = uStack_10;
            local_74 = (float)dVar4;
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 2);
      iStack_70 = iStack_70 + 1;
    } while (iStack_70 < 2);
    iStack_68 = iStack_68 + 1;
  } while (iStack_68 < 2);
  return;
}

