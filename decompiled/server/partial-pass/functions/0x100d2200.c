// rea decompile_all
// name: FUN_100d2200
// address: 0x100d2200
// body: available
// range: 0x100d2200-0x100d2658 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100d2200(float *param_1,float param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined8 local_20;
  float local_14;
  float fStack_10;
  float local_c;
  
  local_38 = *param_1;
  local_40 = param_1[1];
  local_20 = *(undefined8 *)param_1;
  local_3c = param_1[2];
  local_44 = param_2;
  if (0.0 <= param_2) {
    if (param_2 <= 0.0) {
LAB_100d2648:
      *(undefined8 *)param_1 = local_20;
      param_1[2] = local_3c;
      return in_ECX;
    }
    while( true ) {
      iVar2 = param_3;
      uVar1 = FUN_100d1f00(param_3);
      iVar2 = FUN_100d2ba0(uVar1,iVar2);
      if (iVar2 == 0) {
        if (param_3 == 0) {
          uVar1 = FUN_100d1f30(in_ECX,param_1,local_44);
          FUN_100d27c0(uVar1,in_ECX,param_1,local_44);
        }
        return 0;
      }
      iVar2 = FUN_100d1f00();
      iVar2 = *(int *)(iVar2 + 4);
      fVar3 = *(float *)(iVar2 + 0xc) - local_40;
      fVar7 = *(float *)(iVar2 + 8) - local_38;
      fVar6 = *(float *)(iVar2 + 0x10) - local_3c;
      dVar5 = (double)(fVar3 * fVar3 + fVar7 * fVar7 + fVar6 * fVar6);
      if (dVar5 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      fVar4 = (float)dVar5;
      if (fVar4 == 0.0) {
        iVar2 = param_3;
        FUN_100d1f00(param_3);
        uVar1 = FUN_100d1f00();
        iVar2 = FUN_100d2ba0(uVar1,iVar2);
        if (iVar2 == 0) {
          if (local_44 == param_2) {
            return 0;
          }
          return in_ECX;
        }
      }
      if (local_44 < fVar4) break;
      local_44 = local_44 - fVar4;
      iVar2 = FUN_100d1f00();
      local_20 = *(undefined8 *)(*(int *)(iVar2 + 4) + 8);
      local_3c = *(float *)(*(int *)(iVar2 + 4) + 0x10);
      in_ECX = FUN_100d1f00();
      *(undefined8 *)param_1 = local_20;
      param_1[2] = local_3c;
      if (local_44 <= 0.0) goto LAB_100d2648;
      fStack_10 = (float)((ulonglong)local_20 >> 0x20);
      local_40 = fStack_10;
      local_14 = (float)local_20;
      local_38 = local_14;
    }
    local_44 = local_44 / fVar4;
    fVar3 = local_44 * fVar3;
    fVar6 = local_44 * fVar6;
    local_44 = local_44 * fVar7;
LAB_100d2434:
    *param_1 = local_44 + local_38;
    param_1[1] = fVar3 + local_40;
    param_1[2] = fVar6 + local_3c;
    return in_ECX;
  }
  local_44 = -param_2;
  local_c = local_3c;
  do {
    if (local_44 <= 0.0) {
      *(undefined8 *)param_1 = local_20;
      param_1[2] = local_c;
      return in_ECX;
    }
    iVar2 = *(int *)(in_ECX + 4);
    fVar3 = *(float *)(iVar2 + 0xc) - local_40;
    fVar7 = *(float *)(iVar2 + 8) - local_38;
    fVar6 = *(float *)(iVar2 + 0x10) - local_3c;
    dVar5 = (double)(fVar3 * fVar3 + fVar7 * fVar7 + fVar6 * fVar6);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    fVar4 = (float)dVar5;
    if (fVar4 == 0.0) {
      iVar2 = param_3;
      uVar1 = FUN_100d1f30(param_3);
      iVar2 = FUN_100d2ba0(uVar1,iVar2);
      if (iVar2 == 0) {
        if (param_3 != 0) {
          return 0;
        }
        uVar1 = FUN_100d1f00(in_ECX,param_1,local_44);
        FUN_100d27c0(uVar1,in_ECX,param_1,local_44);
        return 0;
      }
    }
    else {
      if (local_44 < fVar4) {
        local_44 = local_44 / fVar4;
        fVar3 = local_44 * fVar3;
        fVar6 = local_44 * fVar6;
        local_44 = local_44 * fVar7;
        goto LAB_100d2434;
      }
      local_44 = local_44 - fVar4;
      local_20 = *(undefined8 *)(*(int *)(in_ECX + 4) + 8);
      local_3c = *(float *)(*(int *)(in_ECX + 4) + 0x10);
      *(undefined8 *)param_1 = local_20;
      param_1[2] = local_3c;
      iVar2 = param_3;
      uVar1 = FUN_100d1f30(param_3);
      iVar2 = FUN_100d2ba0(uVar1,iVar2);
      if (iVar2 == 0) {
        return 0;
      }
      fStack_10 = (float)((ulonglong)local_20 >> 0x20);
      local_40 = fStack_10;
      local_14 = (float)local_20;
      local_38 = local_14;
      local_c = local_3c;
    }
    in_ECX = FUN_100d1f30();
  } while( true );
}

