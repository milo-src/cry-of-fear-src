// rea decompile_all
// name: FUN_10040a40
// address: 0x10040a40
// body: available
// range: 0x10040a40-0x10040e50 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040a40(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 fVar5;
  undefined1 local_74 [48];
  int local_44;
  undefined1 local_3c [12];
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  switch(*param_1) {
  case 2:
    FUN_10119320(*(int *)(in_ECX + 4) + 0x50);
    FUN_1000e7c0(0,&local_18,local_3c);
    iVar3 = FUN_100177a0();
    iVar3 = *(int *)(iVar3 + 4);
    iVar2 = FUN_100177a0();
    iVar2 = *(int *)(iVar2 + 4);
    local_24 = (*(float *)(iVar3 + 0x178) + *(float *)(iVar2 + 8)) - local_18;
    local_20 = (*(float *)(iVar3 + 0x17c) + *(float *)(iVar2 + 0xc)) - local_14;
    local_1c = (*(float *)(iVar3 + 0x180) + *(float *)(iVar2 + 0x10)) - local_10;
    FUN_10017e70(&local_30);
    fVar4 = (float10)(*DAT_102230b4)(0xbd4ccccd,0x3d4ccccd);
    fVar5 = (float10)(*DAT_102230b4)(0xbd4ccccd,0x3d4ccccd);
    local_8 = (float)(fVar5 + (float10)local_2c);
    fVar5 = (float10)(*DAT_102230b4)(0xbd4ccccd,0);
    local_c = (float)(fVar5 + (float10)local_28);
    FUN_10040460();
    FUN_10041ce0(*(undefined4 *)(in_ECX + 4),local_18,local_14,local_10,
                 (float)(fVar4 + (float10)local_30) * 900.0,local_8 * 900.0,local_c * 900.0);
    return;
  case 3:
    iVar3 = FUN_10087950(0x425c0000,(int)DAT_102267cc,4,0,0);
    if (iVar3 == 0) {
      return;
    }
    if ((*(byte *)(*(int *)(iVar3 + 4) + 0x1a8) & 0x28) == 0) goto LAB_10040c8b;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x70) = 0xc1900000;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x68) = 0x40a00000;
    iVar3 = *(int *)(iVar3 + 4);
    local_28 = *(float *)(iVar3 + 0x28) - *(float *)(DAT_10223188 + 0x48) * 200.0;
    fVar1 = *(float *)(DAT_10223188 + 0x3c);
    *(ulonglong *)(iVar3 + 0x20) =
         CONCAT44((*(float *)(iVar3 + 0x24) - *(float *)(DAT_10223188 + 0x44) * 200.0) -
                  *(float *)(DAT_10223188 + 0x38) * 50.0,
                  (*(float *)(iVar3 + 0x20) - *(float *)(DAT_10223188 + 0x40) * 200.0) -
                  *(float *)(DAT_10223188 + 0x34) * 50.0);
    break;
  case 4:
    iVar3 = FUN_10087950(0x425c0000,(int)DAT_102267cc,4,0,0);
    if (iVar3 == 0) {
      return;
    }
    if ((*(byte *)(*(int *)(iVar3 + 4) + 0x1a8) & 0x28) == 0) goto LAB_10040c8b;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x70) = 0x41900000;
    *(undefined4 *)(*(int *)(iVar3 + 4) + 0x68) = 0x40a00000;
    iVar3 = *(int *)(iVar3 + 4);
    local_28 = *(float *)(DAT_10223188 + 0x48) * 200.0 + *(float *)(iVar3 + 0x28);
    fVar1 = *(float *)(DAT_10223188 + 0x3c);
    *(ulonglong *)(iVar3 + 0x20) =
         CONCAT44((*(float *)(DAT_10223188 + 0x44) * 200.0 + *(float *)(iVar3 + 0x24)) -
                  *(float *)(DAT_10223188 + 0x38) * 50.0,
                  (*(float *)(DAT_10223188 + 0x40) * 200.0 + *(float *)(iVar3 + 0x20)) -
                  *(float *)(DAT_10223188 + 0x34) * 50.0);
    break;
  case 5:
  case 6:
    FUN_10119240(*(int *)(in_ECX + 4) + 0x50);
    iVar3 = *(int *)(in_ECX + 4);
    local_24 = *(float *)(iVar3 + 8);
    local_20 = *(float *)(iVar3 + 0xc);
    local_1c = *(float *)(iVar3 + 0x10);
    local_30 = local_24 - *(float *)(DAT_10223188 + 0x34) * 96.0;
    local_2c = local_20 - *(float *)(DAT_10223188 + 0x38) * 96.0;
    local_28 = local_1c - *(float *)(DAT_10223188 + 0x3c) * 96.0;
    FUN_1011a7e0(&local_24,&local_30,0,1,*(undefined4 *)(iVar3 + 0x20c),local_74);
    if (local_44 == 0) {
      return;
    }
    (**(code **)(**(int **)(local_44 + 0x7c) + 100))
              (*(undefined4 *)(in_ECX + 4),*(undefined4 *)(in_ECX + 4),DAT_102267cc,4);
    goto LAB_10040c8b;
  default:
    FUN_100bf310(param_1);
    return;
  }
  local_28 = local_28 - fVar1 * 50.0;
  *(float *)(iVar3 + 0x28) = local_28;
LAB_10040c8b:
  iVar3 = (*DAT_102230b0)(0,0);
  FUN_100fc9f0(*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),1,
               (&PTR_s_flygare_flygare_slice_wav_10212310)[iVar3],0x3f800000,0x3f4ccccd,0,100);
  return;
}

