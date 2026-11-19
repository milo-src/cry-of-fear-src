// rea decompile_all
// name: FUN_10055860
// address: 0x10055860
// body: available
// range: 0x10055860-0x10055ee2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10055860(void)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  char *pcVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int local_c;
  
  FUN_100c0430();
  iVar3 = (**(code **)(*in_ECX + 0xbc))();
  if ((((iVar3 != 0) && (*(char *)((int)in_ECX + 0x373) == '\0')) && ((in_ECX[0x60] & 1U) == 0)) &&
     ((in_ECX[0x60] & 0x10U) != 0)) {
    iVar3 = FUN_10017780();
    if ((iVar3 != 0) && ((char)in_ECX[0xdc] == '\0')) {
      *(undefined2 *)(in_ECX + 0xdc) = 0x101;
      in_ECX[0xdb] = (int)(*DAT_10223188 + 2.0);
    }
    iVar3 = FUN_10017780();
    if (((iVar3 != 0) && ((char)in_ECX[0xdc] == '\x01')) &&
       (((float)in_ECX[0xdb] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdb] &&
        (*(char *)((int)in_ECX + 0x372) == '\0')))) {
      iVar3 = FUN_100177a0();
      pcVar7 = "player";
      pbVar4 = (byte *)((int)DAT_10223188[0x26] + **(int **)(iVar3 + 4));
      do {
        bVar2 = *pbVar4;
        bVar9 = bVar2 < (byte)*pcVar7;
        if (bVar2 != *pcVar7) {
LAB_10055961:
          uVar5 = -(uint)bVar9 | 1;
          goto LAB_10055966;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar9 = bVar2 < (byte)pcVar7[1];
        if (bVar2 != pcVar7[1]) goto LAB_10055961;
        pbVar4 = pbVar4 + 2;
        pcVar7 = pcVar7 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_10055966:
      if (uVar5 == 0) {
        iVar3 = FUN_100177a0();
        iVar3 = FUN_100125e0(*(undefined4 *)(iVar3 + 4));
        if (((iVar3 == 0) || (iVar6 = *(int *)(iVar3 + 0x252c), iVar6 == 0)) ||
           (*(char *)(iVar6 + 0x13c) == '\0')) {
          iVar6 = *(int *)(iVar3 + 0x252c);
          bVar9 = false;
          bVar11 = false;
          if (iVar6 != 0) goto LAB_100559b0;
        }
        else {
          bVar11 = true;
LAB_100559b0:
          bVar9 = bVar11;
          if (*(int *)(iVar6 + 0x168) == 0xf) {
            iVar8 = *(int *)(iVar6 + 0x204);
            if (((iVar8 == 3) || (iVar8 == 7)) ||
               ((iVar8 == 0x15 || ((iVar8 == 0x13 || (iVar8 == 0x17)))))) {
              bVar9 = true;
            }
            iVar8 = *(int *)(iVar6 + 0x200);
            if ((((iVar8 == 3) || (iVar8 == 7)) || (iVar8 == 0x15)) ||
               ((iVar8 == 0x13 || (iVar8 == 0x17)))) {
              bVar9 = true;
            }
          }
        }
        if (((*(float *)(*(int *)(iVar3 + 4) + 0x28c) == 0.0) && (iVar6 != 0)) &&
           ((bVar9 && (*(char *)((int)in_ECX + 0x371) != '\0')))) {
          *(undefined1 *)(in_ECX + 0xdc) = 1;
          *(undefined1 *)((int)in_ECX + 0x372) = 1;
          in_ECX[0xdb] = (int)(*DAT_10223188 + 1.0);
        }
      }
    }
  }
  if ((char)in_ECX[0xdc] == '\0') {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0xdb] || *DAT_10223188 == (float)in_ECX[0xdb]) {
    return;
  }
  if (*(char *)((int)in_ECX + 0x372) == '\0') {
    return;
  }
  iVar3 = (*DAT_10223068)(1);
  if ((iVar3 == 0) && (iVar3 = (*DAT_1022305c)(0), iVar3 == 0)) {
    return;
  }
  iVar3 = *(int *)(iVar3 + 0x7c);
  if (iVar3 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x252c) == 0) {
    return;
  }
  iVar6 = (**(code **)(*in_ECX + 0xbc))();
  if (iVar6 == 0) {
    return;
  }
  in_ECX[0xdd] = iVar3;
  iVar6 = *(int *)(iVar3 + 0x252c);
  bVar9 = false;
  iVar8 = *(int *)(iVar6 + 0x168);
  if ((((iVar8 == 0xf) && (*(char *)(iVar6 + 0x178) == '\0')) &&
      (fVar1 = *DAT_10223188,
      *(float *)(iVar6 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar6 + 0x1cc))) &&
     ((*(float *)(iVar6 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar6 + 0x1d0) &&
      (*(float *)(iVar6 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar6 + 0x1d4))))) {
    iVar6 = *(int *)(iVar3 + 0x1e70);
    if ((((iVar6 == 3) || ((iVar6 == 7 || (iVar6 == 0x15)))) || (iVar6 == 0x13)) || (iVar6 == 0x17))
    {
      iVar8 = iVar6;
    }
    iVar3 = *(int *)(iVar3 + 0x1e74);
    if ((((iVar3 == 3) || (iVar3 == 7)) || (iVar3 == 0x15)) || ((iVar3 == 0x13 || (iVar3 == 0x17))))
    {
      iVar8 = iVar3;
    }
    bVar9 = true;
    iVar3 = FUN_100e0310(iVar8);
    FUN_100f1a50((int)DAT_10223188[0x26] + **(int **)(iVar3 + 4));
  }
  switch(iVar8) {
  case 3:
    local_c = FUN_100e0310(iVar8);
    if (local_c == 0) {
      return;
    }
    if (*(char *)(local_c + 0x1f8) != '\0') {
      return;
    }
    bVar11 = *(char *)(local_c + 0x178) == '\0';
    break;
  default:
    goto switchD_10055b90_caseD_5;
  case 0xb:
    iVar3 = FUN_100e0310(iVar8);
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x178) == '\0')) &&
       ((*(int *)(iVar3 + 0x200) == 0 &&
        ((((*(char *)(iVar3 + 0x208) == '\0' && (*(char *)(iVar3 + 0x106) == '\0')) &&
          (fVar1 = *DAT_10223188,
          *(float *)(iVar3 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1cc))) &&
         ((*(float *)(iVar3 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d0) &&
          (*(float *)(iVar3 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d4))))))))) {
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
      (**(code **)(*in_ECX + 0x1b0))(0x15);
      *(undefined2 *)(in_ECX + 0xdc) = 0;
      *(undefined1 *)((int)in_ECX + 0x373) = 1;
      if (bVar9) {
        iVar3 = FUN_100e0310(iVar8);
        *(undefined4 *)(iVar3 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar3 + 0x140) = 1;
      }
    }
  case 4:
    local_c = FUN_100e0310(iVar8);
    if (local_c == 0) {
      return;
    }
    if (*(char *)(local_c + 0x178) != '\0') {
      return;
    }
    bVar11 = *(int *)(local_c + 0x1f8) == 0;
    break;
  case 0xe:
    iVar3 = FUN_100e0310(iVar8);
    if (((iVar3 != 0) && (*(char *)(iVar3 + 0x178) == '\0')) &&
       ((fVar1 = *DAT_10223188,
        *(float *)(iVar3 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1cc) &&
        ((*(float *)(iVar3 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d0) &&
         (*(float *)(iVar3 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d4))))))) {
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
      (**(code **)(*in_ECX + 0x1b0))(0x15);
      *(undefined2 *)(in_ECX + 0xdc) = 0;
      *(undefined1 *)((int)in_ECX + 0x373) = 1;
      if (bVar9) {
        iVar3 = FUN_100e0310(iVar8);
        *(undefined4 *)(iVar3 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar3 + 0x140) = 1;
      }
    }
  case 0x1b:
    iVar3 = FUN_100e0310(iVar8);
    if ((((iVar3 != 0) && (*(char *)(iVar3 + 0x178) == '\0')) &&
        (fVar1 = *DAT_10223188,
        *(float *)(iVar3 + 0x1cc) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1cc))) &&
       ((*(float *)(iVar3 + 0x1d0) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d0) &&
        (*(float *)(iVar3 + 0x1d4) <= fVar1 && fVar1 != *(float *)(iVar3 + 0x1d4))))) {
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
      (**(code **)(*in_ECX + 0x1b0))(0x15);
      *(undefined2 *)(in_ECX + 0xdc) = 0;
      *(undefined1 *)((int)in_ECX + 0x373) = 1;
      if (bVar9) {
        iVar3 = FUN_100e0310(iVar8);
        *(undefined4 *)(iVar3 + 0x140) = 0x29a;
      }
      else {
        *(undefined4 *)(iVar3 + 0x140) = 1;
      }
    }
  case 7:
  case 9:
  case 0x13:
  case 0x17:
  case 0x1a:
    local_c = FUN_100e0310(iVar8);
    if (local_c == 0) {
      return;
    }
    if (*(char *)(local_c + 0x178) != '\0') {
      return;
    }
    fVar1 = *DAT_10223188;
    if (fVar1 < *(float *)(local_c + 0x1cc) || fVar1 == *(float *)(local_c + 0x1cc)) {
      return;
    }
    if (fVar1 < *(float *)(local_c + 0x1d0) || fVar1 == *(float *)(local_c + 0x1d0)) {
      return;
    }
    bVar11 = fVar1 == *(float *)(local_c + 0x1d4);
    bVar10 = fVar1 < *(float *)(local_c + 0x1d4);
    goto LAB_10055e81;
  case 0x15:
    local_c = FUN_100e0310(iVar8);
    if (local_c == 0) {
      return;
    }
    if (*(char *)(local_c + 0x178) != '\0') {
      return;
    }
    if (*(char *)(local_c + 0x1fc) != '\0') {
      return;
    }
    bVar11 = *(char *)(local_c + 0x1fd) == '\0';
  }
  if (((bVar11) &&
      (fVar1 = *DAT_10223188,
      *(float *)(local_c + 0x1cc) <= fVar1 && fVar1 != *(float *)(local_c + 0x1cc))) &&
     (*(float *)(local_c + 0x1d0) <= fVar1 && fVar1 != *(float *)(local_c + 0x1d0))) {
    bVar11 = fVar1 == *(float *)(local_c + 0x1d4);
    bVar10 = fVar1 < *(float *)(local_c + 0x1d4);
LAB_10055e81:
    if (!bVar10 && !bVar11) {
      (**(code **)(*in_ECX + 0x16c))();
      FUN_100c1a70();
      (**(code **)(*in_ECX + 0x1b0))(0x15);
      *(undefined1 *)((int)in_ECX + 0x373) = 1;
      *(undefined2 *)(in_ECX + 0xdc) = 0;
      if (bVar9) {
        iVar3 = FUN_100e0310(iVar8);
        *(undefined4 *)(iVar3 + 0x140) = 0x29a;
        return;
      }
      *(undefined4 *)(local_c + 0x140) = 1;
    }
  }
switchD_10055b90_caseD_5:
  return;
}

