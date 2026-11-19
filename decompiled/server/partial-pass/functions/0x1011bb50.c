// rea decompile_all
// name: FUN_1011bb50
// address: 0x1011bb50
// body: available
// range: 0x1011bb50-0x1011bfbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011bb50(void)

{
  int iVar1;
  int in_ECX;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 local_c;
  
  if (*(int *)(in_ECX + 0x160) == 0) {
    return;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x160) + 4);
  dVar5 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                  *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24));
  if (dVar5 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  if (((float)dVar5 <= 10.0) || ((*(uint *)(iVar1 + 0x1a8) & 0x44000) != 0)) {
    DAT_10231f0a = '\0';
  }
  else {
    fVar2 = *(float *)(in_ECX + 0x19c);
    if (fVar2 < 3.0) {
      DAT_10231f5c = 3;
      fVar2 = 3.0;
      *(undefined4 *)(in_ECX + 0x19c) = 0x40400000;
    }
    if (DAT_10231f0a == '\0') {
      *(float *)(in_ECX + 0x19c) = fVar2 * 1.5;
      DAT_10231f0a = '\x01';
    }
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x1a8) & 0x40000) == 0) {
    DAT_10231f0f = '\0';
  }
  else {
    if (*(float *)(in_ECX + 0x19c) <= 7.0 && *(float *)(in_ECX + 0x19c) != 7.0) {
      DAT_10231f5c = 7;
      *(undefined4 *)(in_ECX + 0x19c) = 0x40e00000;
    }
    if (DAT_10231f0f == '\0') {
      DAT_10231f0f = '\x01';
      *(float *)(in_ECX + 0x19c) = *(float *)(in_ECX + 0x19c) * 3.0;
    }
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x1a8) & 0x4000) == 0) {
    DAT_10231f0e = '\0';
  }
  else {
    if (DAT_10231f0e == '\0') {
      DAT_10231f0e = '\x01';
      fVar2 = *(float *)(in_ECX + 0x19c) * 0.5;
      *(float *)(in_ECX + 0x19c) = fVar2;
    }
    else {
      fVar2 = *(float *)(in_ECX + 0x19c);
    }
    if ((10.0 < (float)dVar5) && (fVar2 < 2.0)) {
      DAT_10231f5c = 2;
      *(undefined4 *)(in_ECX + 0x19c) = 0x40000000;
    }
  }
  if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x160) + 4) + 0x1a8) & 0x200) == 0) {
    if (DAT_10231f0b == '\0') {
      DAT_10231f0b = '\x01';
      fVar2 = *(float *)(in_ECX + 0x19c) + 8.0;
      *(float *)(in_ECX + 0x19c) = fVar2;
    }
    else {
      fVar2 = *(float *)(in_ECX + 0x19c);
    }
    if (fVar2 < 8.0) {
      DAT_10231f5c = 8;
      *(undefined4 *)(in_ECX + 0x19c) = 0x41000000;
    }
    if (DAT_10231f0b == '\0') goto LAB_1011bd73;
  }
  else {
    if (DAT_10231f0b != '\0') {
      DAT_10231f0b = '\0';
    }
LAB_1011bd73:
    if (((DAT_10231f0a == '\0') && (DAT_10231f0e == '\0')) && (DAT_10231f0f == '\0')) {
      DAT_10231f5c = 0;
    }
  }
  if (*(int *)(in_ECX + 0x168) == 0xf) {
    *(undefined4 *)(in_ECX + 0x19c) = 0x40e00000;
    fVar2 = 7.0;
LAB_1011bebd:
    uVar3 = 0x3d7a0f91;
    local_c = 0x3d7a0f91;
LAB_1011bf24:
    *(ulonglong *)(in_ECX + 0x18c) = CONCAT44(uVar3,uVar3);
  }
  else {
    fVar2 = *(float *)(in_ECX + 0x19c);
    if (1.0 <= fVar2) {
      if ((fVar2 < 1.0) || (2.0 <= fVar2)) {
        if ((fVar2 < 2.0) || (3.0 <= fVar2)) {
          if ((fVar2 < 3.0) || (4.0 <= fVar2)) {
            if ((fVar2 < 4.0) || (5.0 <= fVar2)) {
              if ((fVar2 < 5.0) || (6.0 <= fVar2)) {
                if ((fVar2 < 6.0) || (7.0 <= fVar2)) {
                  if ((7.0 <= fVar2) && (fVar2 < 8.0)) goto LAB_1011bebd;
                  if ((fVar2 < 8.0) || (9.0 <= fVar2)) {
                    if ((fVar2 < 9.0) || (10.0 <= fVar2)) {
                      if (fVar2 < 10.0) goto LAB_1011bf39;
                      uVar3 = 0x3db280f1;
                      local_c = 0x3db280f1;
                    }
                    else {
                      uVar3 = 0x3da0afa3;
                      local_c = 0x3da0afa3;
                    }
                  }
                  else {
                    uVar3 = 0x3d8ede55;
                    local_c = 0x3d8ede55;
                  }
                }
                else {
                  uVar3 = 0x3d566278;
                  local_c = 0x3d566278;
                }
              }
              else {
                uVar3 = 0x3d32aae3;
                local_c = 0x3d32aae3;
              }
            }
            else {
              uVar3 = 0x3d0ef34d;
              local_c = 0x3d0ef34d;
            }
          }
          else {
            uVar3 = 0x3cd67770;
            local_c = 0x3cd67770;
          }
        }
        else {
          uVar3 = 0x3c8ef34d;
          local_c = 0x3c8ef34d;
        }
      }
      else {
        uVar3 = 0x3c0f0846;
        local_c = 0x3c0f0846;
      }
      goto LAB_1011bf24;
    }
    *(undefined8 *)(in_ECX + 0x18c) = DAT_10222f34;
    local_c = DAT_10222f3c;
  }
  *(undefined4 *)(in_ECX + 0x194) = local_c;
LAB_1011bf39:
  if (*(float *)(in_ECX + 0x1a0) <= *DAT_10223188 && *DAT_10223188 != *(float *)(in_ECX + 0x1a0)) {
    fVar2 = fVar2 - 1.0;
    *(float *)(in_ECX + 0x19c) = fVar2;
    *(float *)(in_ECX + 0x1a0) = *DAT_10223188 + 0.1;
  }
  if (fVar2 < 0.0) {
    *(undefined4 *)(in_ECX + 0x19c) = 0;
    fVar2 = 0.0;
  }
  fVar4 = (float)DAT_10231f5c;
  if (fVar2 < fVar4) {
    *(float *)(in_ECX + 0x19c) = fVar4;
    fVar2 = fVar4;
  }
  if (10.0 < fVar2) {
    *(undefined4 *)(in_ECX + 0x19c) = 0x41200000;
  }
  return;
}

