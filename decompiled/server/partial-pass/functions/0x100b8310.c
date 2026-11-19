// rea decompile_all
// name: FUN_100b8310
// address: 0x100b8310
// body: available
// range: 0x100b8310-0x100b875a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100b8310(float *param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int in_ECX;
  float10 fVar6;
  float10 fVar7;
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_8;
  
  piVar4 = (int *)FUN_10118500(0,*(int *)(DAT_10223188 + 0x98) +
                                 *(int *)(*(int *)(in_ECX + 4) + 0x1d4),param_2);
  FUN_100b8240(&local_18);
  switch(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x188)) {
  case 1:
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x100))(local_3c);
    fVar1 = pfVar5[1];
    fVar2 = pfVar5[2];
    *param_1 = *pfVar5 + local_18;
    param_1[1] = fVar1 + local_14;
    param_1[2] = fVar2 + local_10;
    return;
  case 2:
    iVar3 = piVar4[1];
    fVar1 = *(float *)(iVar3 + 0xc);
    *param_1 = (*(float *)(iVar3 + 0xe8) + *(float *)(iVar3 + 0xdc)) * 0.5 +
               *(float *)(iVar3 + 8) + local_18;
    fVar2 = *(float *)(iVar3 + 0x10);
    param_1[1] = (*(float *)(iVar3 + 0xec) + *(float *)(iVar3 + 0xe0)) * 0.5 + fVar1 + local_14;
    param_1[2] = fVar2 + local_10 + *(float *)(iVar3 + 0xf0);
    return;
  case 3:
    iVar3 = piVar4[1];
    fVar1 = *(float *)(iVar3 + 0xc);
    *param_1 = (*(float *)(iVar3 + 0xe8) + *(float *)(iVar3 + 0xdc)) * 0.5 +
               *(float *)(iVar3 + 8) + local_18;
    fVar2 = *(float *)(iVar3 + 0x10);
    param_1[1] = (*(float *)(iVar3 + 0xec) + *(float *)(iVar3 + 0xe0)) * 0.5 + fVar1 + local_14;
    param_1[2] = (*(float *)(iVar3 + 0xf0) + *(float *)(iVar3 + 0xe4)) * 0.5 + fVar2 + local_10;
    return;
  case 4:
    iVar3 = piVar4[1];
    fVar1 = *(float *)(iVar3 + 0xc);
    *param_1 = (*(float *)(iVar3 + 0xe8) + *(float *)(iVar3 + 0xdc)) * 0.5 +
               *(float *)(iVar3 + 8) + local_18;
    fVar2 = *(float *)(iVar3 + 0x10);
    param_1[1] = (*(float *)(iVar3 + 0xec) + *(float *)(iVar3 + 0xe0)) * 0.5 + fVar1 + local_14;
    param_1[2] = fVar2 + local_10 + *(float *)(iVar3 + 0xe4);
    return;
  case 5:
    FUN_1000e7c0(0,&local_24,local_30);
    *param_1 = local_24 + local_18;
    param_1[1] = local_20 + local_14;
    param_1[2] = local_1c + local_10;
    return;
  case 6:
    FUN_1000e7c0(1,&local_24,local_30);
    *param_1 = local_24 + local_18;
    param_1[1] = local_20 + local_14;
    param_1[2] = local_1c + local_10;
    return;
  case 7:
    FUN_1000e7c0(2,&local_24,local_30);
    *param_1 = local_24 + local_18;
    param_1[1] = local_20 + local_14;
    param_1[2] = local_1c + local_10;
    return;
  case 8:
    FUN_1000e7c0(3,&local_24,local_30);
    *param_1 = local_24 + local_18;
    param_1[1] = local_20 + local_14;
    param_1[2] = local_1c + local_10;
    return;
  case 9:
    fVar6 = (float10)(*DAT_102230b4)(*(undefined4 *)(piVar4[1] + 0xdc),
                                     *(undefined4 *)(piVar4[1] + 0xe8));
    fVar7 = (float10)(*DAT_102230b4)(*(undefined4 *)(piVar4[1] + 0xe0),
                                     *(undefined4 *)(piVar4[1] + 0xec));
    local_8 = (float)fVar7;
    fVar7 = (float10)(*DAT_102230b4)(*(undefined4 *)(piVar4[1] + 0xe4),
                                     *(undefined4 *)(piVar4[1] + 0xf0));
    iVar3 = piVar4[1];
    *param_1 = *(float *)(iVar3 + 8) + local_18 + (float)fVar6;
    param_1[1] = *(float *)(iVar3 + 0xc) + local_14 + local_8;
    param_1[2] = *(float *)(iVar3 + 0x10) + local_10 + (float)fVar7;
    return;
  default:
    iVar3 = piVar4[1];
    *param_1 = *(float *)(iVar3 + 8) + local_18;
    param_1[1] = *(float *)(iVar3 + 0xc) + local_14;
    param_1[2] = *(float *)(iVar3 + 0x10) + local_10;
    return;
  }
}

