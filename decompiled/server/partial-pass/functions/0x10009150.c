// rea decompile_all
// name: FUN_10009150
// address: 0x10009150
// body: available
// range: 0x10009150-0x100094cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009150(void)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  iVar3 = DAT_10220c50;
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (*(int *)(DAT_10220c50 + 0x1fc) == 3) {
    fVar6 = (float10)FUN_10002fd0(DAT_10220c50 + 0x5c);
    fVar7 = (float)fVar6;
    if (1.0 <= fVar7) {
      fVar9 = *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 4);
      if (fVar9 <= fVar7) {
        fVar9 = fVar7;
      }
      fVar8 = fVar7 - (fVar9 * *(float *)(*(int *)(DAT_10220c50 + 0x4f4f4) + 0x1c) * 1.5 *
                       *(float *)(DAT_10220c50 + 0x10) + 0.0);
      fVar9 = 0.0;
      if (0.0 <= fVar8) {
        fVar9 = fVar8;
      }
      FUN_10003490(DAT_10220c50 + 0x5c,fVar9 / fVar7,DAT_10220c50 + 0x5c);
    }
    else {
      *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
      *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
      *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
    }
    fVar7 = *(float *)(DAT_10220c50 + 0x45468);
    fVar9 = *(float *)(DAT_10220c50 + 0x4546c);
    FUN_100033d0(DAT_10220c50 + 0x14);
    FUN_100033d0(DAT_10220c50 + 0x20);
    fVar10 = *(float *)(DAT_10220c50 + 0x20) * fVar9 + *(float *)(DAT_10220c50 + 0x14) * fVar7;
    fVar8 = *(float *)(DAT_10220c50 + 0x24) * fVar9 + *(float *)(DAT_10220c50 + 0x18) * fVar7;
    local_18 = *(float *)(DAT_10220c50 + 0x45470) +
               *(float *)(DAT_10220c50 + 0x28) * fVar9 + *(float *)(DAT_10220c50 + 0x1c) * fVar7;
    local_14 = CONCAT44(fVar8,fVar10);
    local_20 = CONCAT44(fVar8,fVar10);
    local_c = local_18;
    fVar6 = (float10)FUN_100033d0(&local_20);
    fVar7 = (float)fVar6;
    iVar3 = *(int *)(DAT_10220c50 + 0x4f4f4);
    if (*(float *)(iVar3 + 0xc) < fVar7) {
      FUN_10003490(&local_14,*(float *)(iVar3 + 0xc) / fVar7,&local_14);
      iVar3 = *(int *)(DAT_10220c50 + 0x4f4f4);
      fVar7 = *(float *)(iVar3 + 0xc);
    }
    iVar2 = DAT_10220c50;
    pfVar1 = (float *)(DAT_10220c50 + 0x5c);
    fVar9 = fVar7 - (*(float *)(DAT_10220c50 + 0x60) * local_20._4_4_ +
                     *(float *)(DAT_10220c50 + 0x5c) * (float)local_20 +
                    *(float *)(DAT_10220c50 + 100) * local_18);
    if (0.0 < fVar9) {
      fVar7 = *(float *)(iVar3 + 0x10) * *(float *)(DAT_10220c50 + 0x10) * fVar7;
      if (fVar7 <= fVar9) {
        fVar9 = fVar7;
      }
      *pfVar1 = (float)local_20 * fVar9 + *(float *)(DAT_10220c50 + 0x5c);
      *(float *)(iVar2 + 0x60) = local_20._4_4_ * fVar9 + *(float *)(iVar2 + 0x60);
      *(float *)(iVar2 + 100) = local_18 * fVar9 + *(float *)(iVar2 + 100);
      FUN_100032d0(DAT_10220c50 + 0x38,*(undefined4 *)(iVar2 + 0x10),pfVar1,DAT_10220c50 + 0x38);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  else if (0 < *(int *)(DAT_10220c50 + 0x200)) {
    iVar2 = *(int *)(DAT_10220c50 + 0x24c);
    iVar4 = 0;
    if (0 < iVar2) {
      piVar5 = (int *)(DAT_10220c50 + 0x2a0);
      do {
        if (*piVar5 == *(int *)(DAT_10220c50 + 0x200)) goto LAB_1000942b;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x38;
      } while (iVar4 < iVar2);
    }
    if (iVar4 != iVar2) {
LAB_1000942b:
      iVar4 = iVar4 * 0xe0;
      *(undefined4 *)(DAT_10220c50 + 0x44) = *(undefined4 *)(iVar4 + 0x2a4 + DAT_10220c50);
      *(undefined4 *)(DAT_10220c50 + 0x48) = *(undefined4 *)(iVar4 + 0x2a8 + iVar3);
      *(undefined4 *)(DAT_10220c50 + 0x4c) = *(undefined4 *)(iVar4 + 0x2ac + iVar3);
      *(undefined4 *)(DAT_10220c50 + 0x38) = *(undefined4 *)(iVar4 + 0x274 + iVar3);
      *(undefined4 *)(DAT_10220c50 + 0x3c) = *(undefined4 *)(iVar4 + 0x278 + iVar3);
      *(undefined4 *)(DAT_10220c50 + 0x40) = *(undefined4 *)(iVar4 + 0x27c + iVar3);
      *(undefined4 *)(DAT_10220c50 + 0x5c) = DAT_10220c40;
      *(undefined4 *)(DAT_10220c50 + 0x60) = DAT_10220c44;
      *(undefined4 *)(DAT_10220c50 + 100) = DAT_10220c48;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

