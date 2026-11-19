// rea decompile_all
// name: FUN_100c1ad0
// address: 0x100c1ad0
// body: available
// range: 0x100c1ad0-0x100c1ebc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100c1ad0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *in_ECX;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float local_148;
  float fStack_144;
  float local_140;
  int local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  undefined4 local_120;
  float local_11c;
  int local_118;
  undefined8 *local_114;
  float *local_110;
  float *local_10c;
  float local_108 [4];
  undefined8 local_f8;
  float local_ec [57];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_120 = param_1;
  iVar10 = 0;
  iVar6 = in_ECX[0xaf];
  if (iVar6 < 8) {
    piVar5 = in_ECX + iVar6 * 4 + 0x91;
    do {
      if ((*piVar5 == 0) || (iVar10 = iVar10 + 1, (char)*piVar5 < '\0')) break;
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 4;
    } while (iVar6 < 8);
    if (1 < iVar10) {
      iVar6 = in_ECX[1];
      iVar9 = 0;
      local_118 = 0;
      local_138 = *(float *)(iVar6 + 8);
      fStack_134 = *(float *)(iVar6 + 0xc);
      local_130 = *(float *)(iVar6 + 0x10);
      local_13c = iVar10 + -1;
      if (0 < local_13c) {
        local_114 = &local_f8;
        pfVar8 = local_108;
        local_10c = local_ec;
        local_110 = local_108 + 3;
        do {
          local_11c = (float)((in_ECX[0xaf] + local_118) * 0x10);
          iVar6 = FUN_100c23e0(in_ECX[(in_ECX[0xaf] + local_118) * 4 + 0x91]);
          if (iVar6 == 0) {
            pfVar7 = (float *)((int)local_11c + 0x238U + (int)in_ECX);
            fVar1 = pfVar7[1];
            fVar2 = pfVar7[2];
            fVar3 = pfVar7[3];
            iVar9 = iVar9 + 1;
            local_110 = local_110 + 4;
            local_114 = local_114 + 2;
            *pfVar8 = *pfVar7;
            pfVar8[1] = fVar1;
            pfVar8[2] = fVar2;
            pfVar8[3] = fVar3;
            pfVar8 = pfVar8 + 4;
            local_10c = local_10c + 4;
LAB_100c1ddf:
            local_138 = *pfVar8;
            fStack_134 = pfVar8[1];
            local_110 = local_110 + 4;
            local_130 = pfVar8[2];
            local_114 = local_114 + 2;
            local_10c = local_10c + 4;
            iVar9 = iVar9 + 1;
            pfVar8 = pfVar8 + 4;
          }
          else {
            iVar6 = (**(code **)(*in_ECX + 0x158))
                              (&local_138,(int)local_11c + 0x248U + (int)in_ECX,local_120,0);
            if (iVar6 != 2) {
              iVar6 = in_ECX[0xaf] + local_118;
              local_12c = ((float)in_ECX[iVar6 * 4 + 0x8e] + (float)in_ECX[iVar6 * 4 + 0x92]) * 0.5;
              fStack_128 = ((float)in_ECX[iVar6 * 4 + 0x8f] + (float)in_ECX[iVar6 * 4 + 0x93]) * 0.5
              ;
              local_124 = ((float)in_ECX[iVar6 * 4 + 0x90] + (float)in_ECX[iVar6 * 4 + 0x94]) * 0.5;
              local_148 = ((float)in_ECX[iVar6 * 4 + 0x8e] + local_138) * 0.5;
              fStack_144 = ((float)in_ECX[iVar6 * 4 + 0x8f] + fStack_134) * 0.5;
              local_140 = ((float)in_ECX[iVar6 * 4 + 0x90] + local_130) * 0.5;
              local_11c = (float)(in_ECX[iVar6 * 4 + 0x91] & 0xfffffe7fU | 8);
              iVar6 = (**(code **)(*in_ECX + 0x158))(&local_138,&local_12c,local_120,0);
              if (iVar6 == 2) {
                *(ulonglong *)pfVar8 = CONCAT44(fStack_128,local_12c);
                *local_110 = local_11c;
                pfVar8[2] = local_124;
              }
              else {
                iVar6 = (**(code **)(*in_ECX + 0x158))(&local_148,&local_12c,local_120,0);
                if (iVar6 == 2) {
                  iVar9 = iVar9 + 1;
                  *(ulonglong *)pfVar8 = CONCAT44(fStack_144,local_148);
                  pfVar8[2] = local_140;
                  *local_110 = local_11c;
                  local_110 = local_110 + 4;
                  *local_10c = local_11c;
                  *local_114 = CONCAT44(fStack_128,local_12c);
                  *(float *)(local_114 + 1) = local_124;
                  local_114 = local_114 + 2;
                  pfVar8 = pfVar8 + 4;
                  local_10c = local_10c + 4;
                }
                else {
                  pfVar7 = (float *)(in_ECX + (in_ECX[0xaf] + local_118) * 4 + 0x8e);
                  fVar1 = pfVar7[1];
                  fVar2 = pfVar7[2];
                  fVar3 = pfVar7[3];
                  *pfVar8 = *pfVar7;
                  pfVar8[1] = fVar1;
                  pfVar8[2] = fVar2;
                  pfVar8[3] = fVar3;
                }
              }
              goto LAB_100c1ddf;
            }
          }
          local_118 = local_118 + 1;
        } while (local_118 < local_13c);
      }
      pfVar8 = (float *)(in_ECX + 0x8e);
      pfVar7 = (float *)(in_ECX + (in_ECX[0xaf] + local_118) * 4 + 0x8e);
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      fVar4 = pfVar7[3];
      in_ECX[0xaf] = 0;
      pfVar7 = local_108;
      local_108[iVar9 * 4] = fVar1;
      local_108[iVar9 * 4 + 1] = fVar2;
      local_108[iVar9 * 4 + 2] = fVar3;
      local_108[iVar9 * 4 + 3] = fVar4;
      local_108[(iVar9 + 1) * 4 + 3] = 0.0;
      iVar6 = 0;
      while (iVar6 < iVar9 + 1) {
        fVar1 = *pfVar7;
        fVar2 = pfVar7[1];
        fVar3 = pfVar7[2];
        fVar4 = pfVar7[3];
        iVar6 = iVar6 + 1;
        pfVar7 = pfVar7 + 4;
        *pfVar8 = fVar1;
        pfVar8[1] = fVar2;
        pfVar8[2] = fVar3;
        pfVar8[3] = fVar4;
        pfVar8 = pfVar8 + 4;
        if (7 < iVar6) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      in_ECX[iVar6 * 4 + 0x91] = 0;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

