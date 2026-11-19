// rea decompile_all
// name: FUN_100bfc50
// address: 0x100bfc50
// body: available
// range: 0x100bfc50-0x100c00d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100bfc50(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  bool bVar10;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  uint local_1a0;
  int local_19c;
  int local_198 [100];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  local_1a0 = 0;
  pcVar9 = "monster_booksimon";
  in_ECX[0x60] = in_ECX[0x60] & 0xff9fffe1;
  in_ECX[4] = 0;
  pbVar7 = (byte *)(*(int *)(-(uint)(*(int *)(in_ECX[1] + 0x20c) != 0) &
                            *(int *)(in_ECX[1] + 0x20c) + 0x80U) + *(int *)(DAT_10223188 + 0x98));
  do {
    bVar1 = *pbVar7;
    bVar10 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_100bfcc4:
      uVar3 = -(uint)bVar10 | 1;
      goto LAB_100bfcc9;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar7[1];
    bVar10 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_100bfcc4;
    pbVar7 = pbVar7 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  uVar3 = 0;
LAB_100bfcc9:
  if (((uVar3 == 0) && (iVar4 = FUN_10017780(), iVar4 == 0)) &&
     (*(float *)(in_ECX[1] + 0x168) == 0.0)) {
    uVar5 = FUN_1010a470();
    uVar5 = (*DAT_102230b0)(1,uVar5);
    local_19c = FUN_10119680(uVar5);
    if ((local_19c != 0) && (iVar4 = FUN_10017780(), iVar4 == 0)) {
      FUN_10017740(local_19c);
      piVar2 = in_ECX + 0xbd;
      piVar6 = piVar2;
      uVar5 = FUN_10017790(piVar2);
      FUN_100c1670(uVar5,piVar6);
      in_ECX[0x60] = in_ECX[0x60] | 0x10000;
      FUN_10017740(local_19c);
      iVar4 = FUN_100177a0();
      iVar4 = *(int *)(iVar4 + 4);
      *(undefined8 *)piVar2 = *(undefined8 *)(iVar4 + 8);
      iVar4 = *(int *)(iVar4 + 0x10);
      in_ECX[0x60] = in_ECX[0x60] | 0x200000;
      in_ECX[0xbf] = iVar4;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  iVar4 = in_ECX[1];
  uVar3 = 0;
  if ((*(byte *)(iVar4 + 0x1a4) & 0x10) == 0) {
    local_1c4 = (float)param_1;
    local_1b4 = *(float *)(iVar4 + 0xc) + local_1c4;
    local_1b8 = local_1c4 + *(float *)(iVar4 + 8);
    local_1b0 = *(float *)(iVar4 + 0x10) + local_1c4;
    local_1c0 = *(float *)(iVar4 + 0xc) - local_1c4;
    local_1bc = *(float *)(iVar4 + 0x10) - local_1c4;
    local_1c4 = *(float *)(iVar4 + 8) - local_1c4;
    iVar4 = FUN_10118390(local_198,100,&local_1c4,&local_1b8,0x28);
    local_1a4 = 0;
    local_19c = iVar4;
    if (0 < iVar4) {
      do {
        piVar2 = (int *)local_198[local_1a4];
        if (((piVar2 != in_ECX) &&
            (piVar6 = (int *)piVar2[1], (*(byte *)(piVar6 + 0x69) & 0x10) == 0)) &&
           (0.0 < (float)piVar6[0x59])) {
          local_1a8 = piVar6[0x7e];
          if ((local_1a8 == 0) || (local_1ac = *(int *)(in_ECX[1] + 0x1d0), local_1ac == 0)) {
LAB_100bff2d:
            bVar10 = false;
            if (((DAT_10222ee4 != (int *)0x0) &&
                (iVar4 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar4 != 0)) &&
               (*(float *)(piVar2[1] + 0x260) == 3.0)) {
              bVar10 = true;
            }
            iVar4 = (**(code **)(*in_ECX + 0x138))(piVar2);
            if (((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x154))(piVar2), iVar4 != 0)) &&
               (((*(byte *)(piVar2[1] + 0x1a8) & 0x80) == 0 &&
                ((iVar4 = (**(code **)(*in_ECX + 0x114))(piVar2), iVar4 != 0 && (!bVar10)))))) {
              iVar4 = (**(code **)(*piVar2 + 0xd0))();
              if (iVar4 != 0) {
                if ((*(byte *)(in_ECX[1] + 0x1a4) & 1) != 0) {
                  piVar6 = (int *)(**(code **)(*piVar2 + 0x78))();
                  iVar4 = (**(code **)(*piVar6 + 0x154))();
                  if (iVar4 == 0) goto switchD_100c0039_caseD_fffffffe;
                  *(uint *)(in_ECX[1] + 0x1a4) = *(uint *)(in_ECX[1] + 0x1a4) & 0xfffffffe;
                }
                local_1a0 = local_1a0 | 0x200000;
              }
              uVar3 = local_1a0;
              piVar2[4] = in_ECX[4];
              in_ECX[4] = (int)piVar2;
              piVar6 = (int *)FUN_10017790();
              if (piVar2 == piVar6) {
                uVar3 = uVar3 | 0x10;
                local_1a0 = uVar3;
              }
              uVar5 = (**(code **)(*in_ECX + 0x138))(piVar2);
              switch(uVar5) {
              default:
                (*DAT_1022303c)(2,"%s can\'t assess %s\n",
                                *(int *)in_ECX[1] + *(int *)(DAT_10223188 + 0x98),
                                *(int *)piVar2[1] + *(int *)(DAT_10223188 + 0x98));
                break;
              case 1:
                local_1a0 = uVar3 | 8;
                break;
              case 2:
                local_1a0 = uVar3 | 2;
                break;
              case 3:
                local_1a0 = uVar3 | 0x400000;
                break;
              case 0xfffffffe:
                break;
              case 0xffffffff:
                local_1a0 = uVar3 | 4;
              }
            }
          }
          else {
            pcVar9 = "monster_target";
            iVar4 = *(int *)(DAT_10223188 + 0x98);
            pbVar7 = (byte *)(*piVar6 + iVar4);
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < (byte)*pcVar9;
              if (bVar1 != *pcVar9) {
LAB_100bfee3:
                uVar3 = -(uint)bVar10 | 1;
                goto LAB_100bfee8;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < (byte)pcVar9[1];
              if (bVar1 != pcVar9[1]) goto LAB_100bfee3;
              pbVar7 = pbVar7 + 2;
              pcVar9 = pcVar9 + 2;
            } while (bVar1 != 0);
            uVar3 = 0;
LAB_100bfee8:
            if (uVar3 != 0) goto LAB_100bff2d;
            pbVar8 = (byte *)(local_1a8 + iVar4);
            pbVar7 = (byte *)(local_1ac + iVar4);
            do {
              bVar1 = *pbVar7;
              bVar10 = bVar1 < *pbVar8;
              if (bVar1 != *pbVar8) {
LAB_100bff20:
                uVar3 = -(uint)bVar10 | 1;
                goto LAB_100bff25;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar7[1];
              bVar10 = bVar1 < pbVar8[1];
              if (bVar1 != pbVar8[1]) goto LAB_100bff20;
              pbVar7 = pbVar7 + 2;
              pbVar8 = pbVar8 + 2;
            } while (bVar1 != 0);
            uVar3 = 0;
LAB_100bff25:
            if (uVar3 == 0) goto LAB_100bff2d;
          }
switchD_100c0039_caseD_fffffffe:
          iVar4 = local_19c;
        }
        local_1a4 = local_1a4 + 1;
        uVar3 = local_1a0;
      } while (local_1a4 < iVar4);
    }
  }
  in_ECX[0x60] = in_ECX[0x60] | uVar3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

