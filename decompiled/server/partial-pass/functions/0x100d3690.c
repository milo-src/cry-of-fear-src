// rea decompile_all
// name: FUN_100d3690
// address: 0x100d3690
// body: available
// range: 0x100d3690-0x100d4390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100d3690(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  CFuncTrackTrain *in_ECX;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *pcVar13;
  undefined8 uVar14;
  float local_50;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined8 local_20;
  undefined4 local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if (*(float *)(*(int *)(in_ECX + 4) + 0x1fc) == 0.0) {
    FUN_100c4ed0();
    FUN_10017ad0();
    uVar14 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d0),
                      "TRAIN(%s): Speed is 0\n");
LAB_100d3709:
    (*DAT_1022303c)(2,uVar14);
    FUN_100d84b0();
    return;
  }
  if (*(int *)(in_ECX + 0xe0) == 0) {
    FUN_100c4ed0();
    FUN_10017ad0();
    uVar14 = CONCAT44(*(int *)(DAT_10223188 + 0x98) + *(int *)(*(int *)(in_ECX + 4) + 0x1d0),
                      "TRAIN(%s): Lost path\n");
    goto LAB_100d3709;
  }
  FUN_100d88a0();
  iVar4 = *(int *)(in_ECX + 4);
  local_38 = *(float *)(iVar4 + 8);
  local_34 = *(float *)(iVar4 + 0xc);
  local_30 = *(float *)(iVar4 + 0x10) - *(float *)(in_ECX + 0xe8);
  iVar3 = FUN_100d2200(&local_38,*(float *)(iVar4 + 0x1fc) * 0.1,1);
  local_30 = *(float *)(in_ECX + 0xe8) + local_30;
  FUN_100c4ed0();
  iVar4 = *(int *)(in_ECX + 4);
  fVar10 = *(float *)(in_ECX + 0xe4);
  local_2c = *(float *)(iVar4 + 8);
  local_28 = *(float *)(iVar4 + 0xc);
  local_24 = *(float *)(iVar4 + 0x10) - *(float *)(in_ECX + 0xe8);
  if (fVar10 <= 0.0) {
    fVar10 = 100.0;
  }
  FUN_100d2200(&local_2c,fVar10,0);
  local_24 = *(float *)(in_ECX + 0xe8) + local_24;
  iVar4 = *(int *)(in_ECX + 4);
  if ((*(uint *)(iVar4 + 0x1a4) & 0x800000) == 0) {
    local_c = local_24 - *(float *)(iVar4 + 0x10);
    local_10 = local_28 - *(float *)(iVar4 + 0xc);
    local_14 = local_2c - *(float *)(iVar4 + 8);
    FUN_1011a8d0(&local_20,&local_14);
    local_20 = CONCAT44(local_20._4_4_ + 180.0,(undefined4)local_20);
    FUN_100d4a40(&local_20);
    FUN_100d4a40(*(int *)(in_ECX + 4) + 0x50);
    if ((iVar3 == 0) || ((local_14 == 0.0 && (local_10 == 0.0)))) {
      local_20 = *(undefined8 *)(*(int *)(in_ECX + 4) + 0x50);
      local_18 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x58);
    }
    iVar4 = *(int *)(in_ECX + 4);
    if ((*(byte *)(iVar4 + 0x1a4) & 1) == 0) {
      FUN_101173c0((undefined4)local_20,*(undefined4 *)(iVar4 + 0x50));
      iVar4 = *(int *)(in_ECX + 4);
    }
    if ((*(byte *)(iVar4 + 0x1a4) & 0x10) == 0) {
      FUN_101173c0(local_20._4_4_,*(undefined4 *)(iVar4 + 0x54));
    }
    fVar10 = *(float *)(in_ECX + 0x11c);
    if (fVar10 != 0.0) {
      fVar11 = *(float *)(*(int *)(in_ECX + 4) + 0x60);
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x58);
      if (-5.0 <= fVar11) {
        fVar7 = fVar10;
        if (fVar11 <= 5.0) {
          fVar5 = (float10)FUN_10117500(0,uVar1,fVar10 * 4.0,uVar1);
          FUN_101173c0((float)fVar5);
          goto LAB_100d3ada;
        }
      }
      else {
        fVar7 = -fVar10;
      }
      fVar5 = (float10)FUN_10117500(fVar7,uVar1,fVar10 + fVar10,uVar1);
      FUN_101173c0((float)fVar5);
    }
LAB_100d3ada:
    FUN_100c4b90();
  }
  if (iVar3 == 0) {
    FUN_100d84b0();
    iVar4 = *(int *)(in_ECX + 4);
    fVar10 = local_38 - *(float *)(iVar4 + 8);
    fVar11 = local_34 - *(float *)(iVar4 + 0xc);
    fVar7 = local_30 - *(float *)(iVar4 + 0x10);
    if ((*(uint *)(iVar4 + 0x1a4) & 0x800000) == 0) {
      FUN_100c4b90();
      iVar4 = *(int *)(in_ECX + 4);
    }
    dVar9 = (double)(fVar10 * fVar10 + fVar11 * fVar11 + fVar7 * fVar7);
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(iVar4 + 0x1fc);
    *(undefined4 *)(iVar4 + 0x1fc) = 0;
    if ((float)dVar9 <= 0.0) {
      FUN_100c4ed0();
      CFuncTrackTrain::DeadEnd(in_ECX);
      return;
    }
    fVar10 = *(float *)(in_ECX + 0x120);
    FUN_100c4ed0();
    *(code **)(in_ECX + 0x78) = CFuncTrackTrain::DeadEnd;
    FUN_100d6810((float)dVar9 / fVar10,0);
    return;
  }
  iVar4 = *(int *)(in_ECX + 0xe0);
  if (iVar3 == iVar4) goto LAB_100d41df;
  fVar10 = *(float *)(*(int *)(in_ECX + 4) + 0x1fc);
  *(int *)(in_ECX + 0xe0) = iVar3;
  if (0.0 <= fVar10) {
    iVar4 = iVar3;
  }
  local_50 = *(float *)(iVar4 + 4);
  if (*(int *)((int)local_50 + 0x1d8) != 0) {
    FUN_10101ff0(*(int *)(DAT_10223188 + 0x98) + *(int *)((int)local_50 + 0x1d8));
    local_50 = *(float *)(iVar4 + 4);
    if ((*(byte *)((int)local_50 + 0x1a4) & 2) != 0) {
      *(undefined4 *)((int)local_50 + 0x1d8) = 0;
      local_50 = *(float *)(iVar4 + 4);
    }
  }
  if ((*(byte *)((int)local_50 + 0x1a4) & 8) != 0) {
    *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) | 2;
    local_50 = *(float *)(iVar4 + 4);
  }
  if ((*(float *)((int)local_50 + 0x1c0) == 1.0) &&
     ((*(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0x800000) != 0)) {
    FUN_100c48e0();
    local_50 = *(float *)(iVar4 + 4);
  }
  fVar10 = *(float *)((int)local_50 + 0x168);
  fVar11 = (float)((int)(*(float *)(*(int *)(in_ECX + 4) + 0x1fc) * 4.0) /
                  (int)*(float *)(in_ECX + 0xec)) * 0.25;
  if (fVar10 == 2.0) {
    *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0xff3fffff;
  }
  else if ((*(uint *)((int)local_50 + 0x1a4) & 0x80000) != 0) {
    if (fVar10 == 1.0) {
      *(undefined8 *)(in_ECX + 0x124) = *(undefined8 *)((int)local_50 + 0x5c);
      *(undefined4 *)(in_ECX + 300) = *(undefined4 *)((int)local_50 + 100);
      FUN_100c4b90();
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) | 0xc00000;
    }
    else if (fVar10 == 0.0) {
      FUN_100c4b90();
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) | 0x800000;
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) & 0xffbfffff
      ;
    }
  }
  if (*(float *)(*(int *)(in_ECX + 4) + 0x1fc) <= 0.0) {
    iVar3 = FUN_100d1f30();
  }
  else {
    iVar3 = FUN_100d1f00();
  }
  fVar10 = *(float *)(*(int *)(iVar4 + 4) + 0x1fc);
  if (fVar10 != 0.0) {
    switch((int)*(float *)(*(int *)(iVar4 + 4) + 0x1bc)) {
    case 0:
      iVar4 = *(int *)(in_ECX + 4);
      if ((*(byte *)(iVar4 + 0x1a4) & 2) != 0) {
        *(float *)(iVar4 + 0x1fc) = fVar10;
        iVar4 = *(int *)(in_ECX + 4);
      }
      dVar9 = (double)*(float *)(iVar4 + 0x1fc);
      iVar4 = *(int *)(iVar4 + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
      pcVar13 = "TrackTrain %s speed set to %4.2f\n";
      break;
    case 1:
      fVar7 = *(float *)(in_ECX + 0xec);
      *(float *)(in_ECX + 0xec) = fVar10 + fVar7;
      *(int *)(*(int *)(in_ECX + 4) + 0x188) = (int)(fVar10 + fVar7);
      *(float *)(*(int *)(in_ECX + 4) + 0x1fc) = *(float *)(in_ECX + 0xec) * fVar11;
      iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
      dVar9 = (double)*(float *)(*(int *)(in_ECX + 4) + 0x1fc);
      pcVar13 = "TrackTrain %s speed accel to %4.2f\n";
      break;
    case 2:
      iVar4 = *(int *)(in_ECX + 4);
      iVar2 = *(int *)(iVar3 + 4);
      fVar12 = *(float *)(iVar4 + 0xc) - *(float *)(iVar2 + 0xc);
      fVar8 = *(float *)(iVar4 + 8) - *(float *)(iVar2 + 8);
      fVar7 = *(float *)(iVar4 + 0x10) - *(float *)(iVar2 + 0x10);
      dVar9 = (double)(fVar12 * fVar12 + fVar8 * fVar8 + fVar7 * fVar7);
      if (dVar9 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar9 = SQRT(dVar9);
      }
      *(float *)(in_ECX + 0xec) = (float)dVar9 / fVar10;
      *(int *)(iVar4 + 0x188) = (int)((float)dVar9 / fVar10);
      *(float *)(*(int *)(in_ECX + 4) + 0x1fc) = *(float *)(in_ECX + 0xec) * fVar11;
      iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
      dVar9 = (double)*(float *)(*(int *)(in_ECX + 4) + 0x1fc);
      pcVar13 = "TrackTrain %s speed to %4.2f (timed)\n";
      break;
    case 3:
      *(float *)(in_ECX + 0xec) = fVar10;
      *(int *)(*(int *)(in_ECX + 4) + 0x188) = (int)fVar10;
      *(float *)(*(int *)(in_ECX + 4) + 0x1fc) = *(float *)(in_ECX + 0xec) * fVar11;
      iVar4 = *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98);
      dVar9 = (double)*(float *)(*(int *)(in_ECX + 4) + 0x1fc);
      pcVar13 = "TrackTrain %s master speed set to %4.2f\n";
      break;
    default:
      goto switchD_100d3d93_default;
    }
    (*DAT_1022303c)(2,pcVar13,iVar4,dVar9);
  }
switchD_100d3d93_default:
  if (*(float *)(*(int *)(iVar3 + 4) + 0x1c0) == 1.0) {
    *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4) | 0xc00000;
    local_20 = *(undefined8 *)(*(int *)(in_ECX + 4) + 0x50);
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x58);
    FUN_100d4a40();
    FUN_100c48e0();
    iVar4 = *(int *)(iVar3 + 4);
    iVar2 = *(int *)(in_ECX + 4);
    fVar10 = *(float *)(iVar4 + 8) - *(float *)(iVar2 + 8);
    fVar7 = *(float *)(iVar4 + 0xc) - *(float *)(iVar2 + 0xc);
    fVar8 = *(float *)(iVar4 + 0x10) - *(float *)(iVar2 + 0x10);
    if (fVar11 <= 0.0) {
      fVar5 = (float10)FUN_101173c0(*(undefined4 *)(iVar2 + 0x50),*(undefined4 *)(iVar4 + 0x50));
      fVar6 = (float10)FUN_101173c0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x54),
                                    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x54));
      uVar1 = *(undefined4 *)(*(int *)(in_ECX + 4) + 0x58);
      iVar4 = *(int *)(iVar3 + 4);
    }
    else {
      fVar5 = (float10)FUN_101173c0(*(undefined4 *)(iVar4 + 0x50),*(undefined4 *)(iVar2 + 0x50));
      fVar6 = (float10)FUN_101173c0(*(undefined4 *)(*(int *)(iVar3 + 4) + 0x54),
                                    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x54));
      uVar1 = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x58);
      iVar4 = *(int *)(in_ECX + 4);
    }
    local_50 = (float)fVar5;
    fVar11 = (float)fVar6;
    fVar5 = (float10)FUN_101173c0(uVar1,*(undefined4 *)(iVar4 + 0x58));
    if (fVar11 <= 0.0) {
      fVar11 = fVar11 + 180.0;
    }
    else {
      fVar11 = fVar11 - 180.0;
    }
    dVar9 = (double)(fVar7 * fVar7 + fVar10 * fVar10 + fVar8 * fVar8);
    if (dVar9 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    fVar10 = (float)dVar9 / *(float *)(in_ECX + 0xec);
    local_c = (float)fVar5 / fVar10;
    *(ulonglong *)(in_ECX + 0x124) = CONCAT44(fVar11 / fVar10,local_50 / fVar10);
    *(float *)(in_ECX + 300) = local_c;
    FUN_100c4b90();
  }
LAB_100d41df:
  *(code **)(in_ECX + 0x78) = CFuncTrackTrain::PostponeNext;
  FUN_100d6810(0x3f000000,1);
  return;
}

