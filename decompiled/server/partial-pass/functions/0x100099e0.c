// rea decompile_all
// name: FUN_100099e0
// address: 0x100099e0
// body: available
// range: 0x100099e0-0x10009dce inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100099e0(void)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  float local_34;
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  pcVar2 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1c8c);
  iVar3 = _atoi(pcVar2);
  pcVar2 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1c90);
  local_2c = _atoi(pcVar2);
  pcVar2 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1c94);
  local_30 = _atoi(pcVar2);
  pcVar2 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a1470);
  iVar4 = _atoi(pcVar2);
  if ((iVar4 != 0) && (*(int *)(DAT_10220c50 + 0x98) != 0)) {
    local_2c = (int)((double)local_2c * 1.25);
    local_30 = (int)((double)local_30 * 1.25);
  }
  if ((0 < *(int *)(DAT_10220c50 + 0x94)) || ((*(uint *)(DAT_10220c50 + 0xb8) & 0x1000) != 0))
  goto LAB_10009dbf;
  FUN_10003de0();
  fVar8 = (float10)FUN_10002fd0(DAT_10220c50 + 0x5c);
  iVar4 = *(int *)(DAT_10220c50 + 0xdc);
  if (((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) == 0) && (iVar4 != 5)) {
    local_24 = 120.0;
    local_28 = 210.0;
    local_34 = 0.0;
LAB_10009b64:
    if (*(int *)(DAT_10220c50 + 0xe0) == -1) goto LAB_10009dbf;
  }
  else {
    local_24 = 60.0;
    local_28 = 80.0;
    local_34 = 100.0;
    if (iVar4 != 5) goto LAB_10009b64;
  }
  fVar9 = (float10)FUN_10002fd0(DAT_10220c50 + 0x5c);
  if ((0.0 < (float)fVar9) && ((local_24 <= (float)fVar8 || (*(int *)(DAT_10220c50 + 0x94) == 0))))
  {
    local_14 = *(undefined4 *)(DAT_10220c50 + 0x38);
    local_10 = *(undefined4 *)(DAT_10220c50 + 0x3c);
    bVar1 = local_28 <= (float)fVar8;
    local_20 = *(undefined4 *)(DAT_10220c50 + 0x38);
    local_1c = *(undefined4 *)(DAT_10220c50 + 0x3c);
    fVar10 = *(float *)(DAT_10220c50 + 0x4f530 + *(int *)(DAT_10220c50 + 0xbc) * 0xc) -
             *(float *)(DAT_10220c50 + 0x4f500 + *(int *)(DAT_10220c50 + 0xbc) * 0xc);
    local_c = *(float *)(DAT_10220c50 + 0x40) - fVar10 * 0.3;
    local_18 = *(float *)(DAT_10220c50 + 0x40) - fVar10 * 0.5;
    if (iVar4 == 5) {
      fVar10 = 0.35;
      uVar7 = 8;
      *(undefined4 *)(DAT_10220c50 + 0x94) = 0x15e;
    }
    else {
      iVar4 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_14,0);
      if (iVar4 == -3) {
        fVar10 = 0.65;
        uVar7 = 7;
        *(undefined4 *)(DAT_10220c50 + 0x94) = 600;
      }
      else {
        iVar5 = (**(code **)(DAT_10220c50 + 0x4f578))(&local_20,0);
        iVar4 = DAT_10220c50;
        if (iVar5 == -3) {
          uVar7 = 6;
          if (bVar1) {
            fVar10 = 0.5;
          }
          else {
            fVar10 = 0.2;
          }
          uVar6 = 300;
          if (!bVar1) {
            uVar6 = 400;
          }
          *(undefined4 *)(DAT_10220c50 + 0x94) = uVar6;
        }
        else {
          uVar7 = FUN_10006e30(*(undefined1 *)(DAT_10220c50 + 0x1f0));
          if (bVar1) {
            fVar10 = 0.5;
          }
          else {
            fVar10 = 0.2;
          }
          *(int *)(iVar4 + 0x94) = local_2c;
          if (((*(ushort *)(DAT_10220c50 + 0x45476) & 0x1000) != 0) &&
             ((*(uint *)(DAT_10220c50 + 0xb8) & 0x40000) != 0)) {
            *(int *)(DAT_10220c50 + 0x94) = local_30;
          }
          if ((*(uint *)(DAT_10220c50 + 0xb8) & 0x80000) != 0) {
            *(int *)(DAT_10220c50 + 0x94) = iVar3;
          }
        }
      }
    }
    *(int *)(DAT_10220c50 + 0x94) = (int)((float)*(int *)(DAT_10220c50 + 0x94) + local_34);
    if ((*(uint *)(DAT_10220c50 + 0xb8) & 0x4000) != 0) {
      fVar10 = fVar10 * 0.35;
    }
    FUN_10007550(uVar7,fVar10);
  }
LAB_10009dbf:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

