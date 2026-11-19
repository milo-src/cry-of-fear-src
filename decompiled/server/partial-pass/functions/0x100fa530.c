// rea decompile_all
// name: FUN_100fa530
// address: 0x100fa530
// body: available
// range: 0x100fa530-0x100fa8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100fa530(void)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  CBaseEntity *in_ECX;
  int iVar5;
  float fVar6;
  double dVar7;
  float local_20;
  float local_1c;
  float local_18;
  undefined1 local_14 [16];
  
  iVar4 = *(int *)(in_ECX + 0x34c);
  if (iVar4 == 0) {
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 4;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 3;
  }
  else {
    FUN_10017740(0);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) =
         *(undefined4 *)(*(int *)(in_ECX + 0x34c) + 0x3b0);
    if ((*(uint *)(*(int *)(*(int *)(in_ECX + 0x34c) + 4) + 0x1a4) & 0x100) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 1;
    }
  }
  *(undefined4 *)(in_ECX + 0x34c) = 0;
  FUN_10017740(0);
  iVar5 = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (*(int *)(iVar5 + 0x174) == 1) {
    *(undefined4 *)(iVar5 + 0x164) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x13c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x10c) = 0;
    FUN_100c2a70(8);
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 2;
    iVar5 = *(int *)(in_ECX + 4);
    local_18 = *(float *)(iVar5 + 0xe4) + 2.0;
    local_1c = *(float *)(iVar5 + 0xec);
    local_20 = *(float *)(iVar5 + 0xe8);
    FUN_1011a030(iVar5,iVar5 + 0xdc,&local_20);
    if ((iVar4 == 0) || ((*(byte *)(*(int *)(iVar4 + 4) + 0x1a4) & 8) == 0)) {
      CBaseEntity::SUB_StartFadeOut(in_ECX);
    }
    else {
      *(undefined4 *)(in_ECX + 0x80) = 0;
      *(undefined4 *)(in_ECX + 0x78) = 0;
      *(undefined4 *)(in_ECX + 0x7c) = 0;
    }
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x13c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x108) = 0;
    *(uint *)(*(int *)(in_ECX + 4) + 0x118) = *(uint *)(*(int *)(in_ECX + 4) + 0x118) | 0x20;
    return 0;
  }
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x370) != 0)) {
    if ((*(byte *)(*(int *)(iVar4 + 4) + 0x1a4) & 0x80) == 0) {
      FUN_1000e850(0,&local_20,local_14);
      fVar6 = local_20;
      iVar4 = *(int *)(in_ECX + 4);
      fVar1 = *(float *)(iVar4 + 8);
      uVar2 = *(undefined4 *)(iVar4 + 0x10);
      fVar3 = *(float *)(iVar4 + 0xc);
      dVar7 = (double)((fVar3 - local_1c) * (fVar3 - local_1c) +
                      (fVar1 - local_20) * (fVar1 - local_20));
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if ((float)dVar7 < 8.0) {
        fVar6 = fVar1;
        local_20 = fVar1;
        local_1c = fVar3;
        local_18 = (float)uVar2;
      }
      *(float *)(iVar4 + 8) = fVar6;
      *(float *)(*(int *)(in_ECX + 4) + 0xc) = local_1c;
      *(float *)(*(int *)(in_ECX + 4) + 0x10) = *(float *)(*(int *)(in_ECX + 4) + 0x10) + 1.0;
      *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) = *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) | 0x200;
      iVar4 = (*DAT_10222fb0)(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
      if (iVar4 < 0) {
        iVar4 = *(int *)(in_ECX + 4);
        *(float *)(iVar4 + 8) = fVar1;
        *(float *)(iVar4 + 0xc) = fVar3;
        *(undefined4 *)(iVar4 + 0x10) = uVar2;
      }
      else if (iVar4 == 0) {
        *(float *)(*(int *)(in_ECX + 4) + 0x10) = local_18;
        *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) =
             *(uint *)(*(int *)(in_ECX + 4) + 0x1a8) & 0xfffffdff;
      }
      FUN_10119fe0();
      *(uint *)(*(int *)(in_ECX + 4) + 0x118) = *(uint *)(*(int *)(in_ECX + 4) + 0x118) | 0x20;
      iVar5 = *(int *)(in_ECX + 4);
    }
    *(undefined4 *)(in_ECX + 0x214) = 0;
  }
  *(undefined4 *)(iVar5 + 0x194) = 0;
  if (*(float *)(*(int *)(in_ECX + 4) + 0x164) <= 0.0) {
    *(uint *)(in_ECX + 0x180) = *(uint *)(in_ECX + 0x180) | 0x100;
    *(undefined4 *)(in_ECX + 0x228) = 8;
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 1;
    FUN_100bda70();
    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x174) = 0;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x228) = 1;
  return 1;
}

