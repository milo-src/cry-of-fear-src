// rea decompile_all
// name: FUN_10016c80
// address: 0x10016c80
// body: available
// range: 0x10016c80-0x10016ff2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016c80(int param_1,int *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined8 local_2f0;
  int local_2e8;
  undefined8 local_2e4;
  undefined1 local_2d0 [4];
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_1019d1db;
  local_10 = ExceptionList;
  uVar2 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (((param_1 == 0) || (piVar4 = *(int **)(param_1 + 0x7c), piVar4 == (int *)0x0)) ||
     (param_2 == (int *)0x0)) goto LAB_10016fd7;
  FUN_10116020(param_2);
  local_2cc = 0;
  local_2c8 = 1;
  local_8 = 0;
  uStack_7 = 0;
  if (param_3 == 0) {
    local_2c4 = local_2e8;
    local_2e4 = local_2f0;
LAB_10016ea1:
    uVar2 = (**(code **)(*piVar4 + 0x40))();
    if ((uVar2 & 4) == 0) {
      (**(code **)(*piVar4 + 0x3c))(local_2d0);
      (**(code **)(*piVar4 + 0x30))();
    }
    else {
      (**(code **)(*piVar4 + 0x3c))();
      (**(code **)(*piVar4 + 0x2c))();
    }
    if (param_1 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_1 + 0x7c);
    }
    if (param_3 == 0) {
      if ((piVar4 != (int *)0x0) && (*(int *)(piVar4[1] + 4) != 0)) {
        iVar3 = FUN_101206e0(*(int *)(piVar4[1] + 4));
        if (iVar3 == 0) {
          (*DAT_1022303c)(4,"Global Entity %s (%s) not in table!!!\n",
                          ((int *)piVar4[1])[1] + *(int *)(DAT_10223188 + 0x98),
                          *(int *)piVar4[1] + *(int *)(DAT_10223188 + 0x98));
          FUN_10120670(*(undefined4 *)(piVar4[1] + 4),*(undefined4 *)(DAT_10223188 + 0xc),1);
        }
        else {
          if (*(int *)(iVar3 + 0x60) == 2) {
            FUN_10116080();
            goto LAB_10016fd7;
          }
          iVar3 = FUN_1000aba0(*(int *)(DAT_10223188 + 0x98) + *(int *)(DAT_10223188 + 0xc),
                               iVar3 + 0x40);
          if (iVar3 == 0) {
            FUN_10017e20();
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_2 + 0x151) = local_2e4;
      param_2[0x153] = local_2c4;
      if (piVar4 != (int *)0x0) {
        FUN_10119fe0(piVar4,piVar4[1] + 8);
        (**(code **)(*piVar4 + 0xa0))();
      }
    }
    FUN_10116080();
  }
  else {
    FUN_10116020(param_2);
    local_8 = 1;
    FUN_10116c30("ENTVARS",&local_2c0);
    iVar3 = *(int *)(param_2[10] + 8 + param_2[7] * 0x18);
    param_2[2] = iVar3;
    param_2[1] = *param_2 + iVar3;
    iVar3 = FUN_101206e0(local_2bc,uVar2);
    iVar3 = FUN_1000aba0(param_2 + 0x155,iVar3 + 0x40);
    if (iVar3 != 0) {
      local_2e4 = *(undefined8 *)(param_2 + 0x151);
      local_2c4 = param_2[0x153];
      piVar4 = (int *)FUN_10017b00(local_2c0,local_2bc);
      if (piVar4 != (int *)0x0) {
        local_2cc = 1;
        iVar3 = piVar4[1];
        fVar1 = *(float *)(iVar3 + 0xe4);
        *(ulonglong *)(param_2 + 0x151) =
             CONCAT44(local_1e0 + ((float)param_2[0x152] - *(float *)(iVar3 + 0xe0)),
                      local_1e4 + ((float)param_2[0x151] - *(float *)(iVar3 + 0xdc)));
        param_2[0x153] = (int)(local_1dc + ((float)param_2[0x153] - fVar1));
        param_1 = *(int *)(piVar4[1] + 0x20c);
        FUN_10120730(*(undefined4 *)(piVar4[1] + 4),*(undefined4 *)(DAT_10223188 + 0xc));
        local_8 = 0;
        FUN_10116080();
        goto LAB_10016ea1;
      }
    }
    FUN_10116080();
    FUN_10116080();
  }
LAB_10016fd7:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

