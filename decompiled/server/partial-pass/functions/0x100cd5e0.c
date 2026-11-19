// rea decompile_all
// name: FUN_100cd5e0
// address: 0x100cd5e0
// body: available
// range: 0x100cd5e0-0x100cd97e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100cd5e0(int *param_1,int param_2,int param_3,undefined4 param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float local_350;
  uint local_34c;
  int *local_348;
  int local_344;
  int local_340;
  int local_33c;
  int local_338;
  int local_334;
  uint local_330;
  int local_32c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_348 = param_1;
  local_338 = param_2;
  local_334 = param_3;
  if ((*in_ECX == 0) || (in_ECX[1] == 0)) {
    (*DAT_1022303c)(2,"Graph not ready!\n");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if ((param_2 < 0) || (iVar7 = in_ECX[6], iVar7 < param_2)) {
    (*DAT_1022303c)(2,"Can\'t build a path, iStart is %d!\n",param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_2 == param_3) {
    param_1[1] = param_3;
    *param_1 = param_2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (in_ECX[2] == 0) {
    FUN_100ca6e0();
    switch(param_4) {
    case 0:
      local_330 = 1;
      break;
    case 1:
      local_330 = 2;
      break;
    case 2:
      local_330 = 4;
      break;
    case 3:
      local_330 = 8;
      break;
    default:
      local_330 = local_34c;
    }
    iVar5 = 0;
    if (0 < iVar7) {
      iVar7 = 0;
      do {
        iVar5 = iVar5 + 1;
        *(undefined4 *)(iVar7 + 0x48 + in_ECX[3]) = 0xbf800000;
        iVar7 = iVar7 + 0x58;
      } while (iVar5 < in_ECX[6]);
    }
    *(undefined4 *)(local_338 * 0x58 + 0x48 + in_ECX[3]) = 0;
    *(int *)(local_338 * 0x58 + 0x4c + in_ECX[3]) = local_338;
    FUN_100ce040(local_338,0);
    while ((local_32c != 0 && (local_33c = FUN_100cef50(&local_350), local_33c != local_334))) {
      local_344 = local_33c * 0x58;
      iVar7 = 0;
      local_34c = in_ECX[3] + local_344;
      if (0 < *(int *)(local_34c + 0x20)) {
        do {
          iVar3 = local_33c;
          iVar5 = in_ECX[3];
          iVar6 = in_ECX[4];
          iVar4 = *(int *)(local_344 + 0x24 + iVar5) + iVar7;
          local_340 = *(int *)(iVar6 + 4 + iVar4 * 0x18);
          if ((*(uint *)(iVar6 + 0x10 + iVar4 * 0x18) & local_330) == local_330) {
            iVar4 = *(int *)(iVar6 + 8 + iVar4 * 0x18);
            if (iVar4 != 0) {
              iVar5 = FUN_100cd990(local_33c,iVar4,param_5,1);
              if (iVar5 == 0) goto LAB_100cd887;
              iVar5 = in_ECX[3];
              iVar6 = in_ECX[4];
            }
            iVar4 = local_340 * 0x58;
            fVar8 = *(float *)(iVar6 + 0x14 + (*(int *)(local_344 + 0x24 + iVar5) + iVar7) * 0x18) +
                    local_350;
            fVar2 = *(float *)(iVar4 + 0x48 + iVar5);
            if ((fVar2 < -0.5) || (fVar8 < fVar2 - 0.001)) {
              *(float *)(iVar4 + 0x48 + iVar5) = fVar8;
              *(int *)(iVar4 + 0x4c + in_ECX[3]) = iVar3;
              FUN_100ce040(local_340,fVar8);
            }
          }
LAB_100cd887:
          iVar7 = iVar7 + 1;
        } while (iVar7 < *(int *)(local_34c + 0x20));
      }
    }
    pfVar1 = (float *)(local_334 * 0x58 + 0x48 + in_ECX[3]);
    if (-0.5 < *pfVar1 || *pfVar1 == -0.5) {
      iVar7 = local_334;
      iVar5 = 1;
      do {
        iVar6 = iVar5;
        iVar7 = *(int *)(iVar7 * 0x58 + 0x4c + in_ECX[3]);
        iVar5 = iVar6 + 1;
        iVar3 = local_334;
      } while (iVar7 != local_338);
      for (; -1 < iVar6; iVar6 = iVar6 + -1) {
        local_348[iVar6] = iVar3;
        iVar3 = *(int *)(iVar3 * 0x58 + 0x4c + in_ECX[3]);
      }
LAB_100cd922:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else {
    iVar7 = 1;
    *param_1 = param_2;
    while (local_338 = param_2,
          param_2 = FUN_100ce830(param_2,local_334,param_4,(param_5 & 0x340) != 0),
          local_338 != param_2) {
      if (9 < iVar7) goto LAB_100cd922;
      local_348[iVar7] = param_2;
      iVar7 = iVar7 + 1;
      if (param_2 == local_334) {
        local_338 = param_2;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

