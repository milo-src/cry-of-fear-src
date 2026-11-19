// rea decompile_all
// name: FUN_1008e010
// address: 0x1008e010
// body: available
// range: 0x1008e010-0x1008e23c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1008e010(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (param_4 == 0) {
    fVar5 = 3.0;
  }
  else {
    fVar5 = 0.5;
  }
  if (param_3 == 0) {
    if ((param_2[2] == 0) ||
       (*DAT_10223188 < (float)param_2[6] || *DAT_10223188 == (float)param_2[6])) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((param_2[3] == 0) || (*(char *)((int)param_2 + 0x21) != '\0')) ||
       (*DAT_10223188 < (float)param_2[7] || *DAT_10223188 == (float)param_2[7])) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar2) && (bVar3)) {
      uVar6 = 0x3e800000;
LAB_1008e192:
      FUN_100fc9f0(*(undefined4 *)(param_1 + 0x20c),3,(int)DAT_10223188[0x26] + param_2[2],uVar6,
                   0x3f4ccccd,0,100);
      param_2[6] = (int)(fVar5 + *DAT_10223188);
    }
    else {
      uVar6 = 0x3f800000;
      if (bVar2) goto LAB_1008e192;
    }
    if (!bVar3) {
      return;
    }
    iVar1 = param_2[5];
    iVar4 = FUN_100fe510(*(undefined4 *)(param_1 + 0x20c),(int)DAT_10223188[0x26] + param_2[3],
                         0x3f59999a,0x3f4ccccd,0,100,iVar1,0);
    param_2[5] = iVar4;
    param_2[4] = 0;
    *(bool *)((int)param_2 + 0x21) = iVar1 == iVar4;
    goto LAB_1008e222;
  }
  if ((*param_2 == 0) || (*DAT_10223188 < (float)param_2[6] || *DAT_10223188 == (float)param_2[6]))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (((param_2[1] == 0) || ((char)param_2[8] != '\0')) ||
     (*DAT_10223188 < (float)param_2[7] || *DAT_10223188 == (float)param_2[7])) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    uVar6 = 0x3e800000;
LAB_1008e09f:
    FUN_100fc9f0(*(undefined4 *)(param_1 + 0x20c),3,(int)DAT_10223188[0x26] + *param_2,uVar6,
                 0x3f4ccccd,0,100);
    param_2[6] = (int)(fVar5 + *DAT_10223188);
  }
  else {
    uVar6 = 0x3f800000;
    if (bVar2) goto LAB_1008e09f;
  }
  if (!bVar3) {
    return;
  }
  iVar1 = param_2[4];
  iVar4 = FUN_100fe510(*(undefined4 *)(param_1 + 0x20c),(int)DAT_10223188[0x26] + param_2[1],
                       0x3f59999a,0x3f4ccccd,0,100,iVar1,0);
  param_2[4] = iVar4;
  param_2[5] = 0;
  *(bool *)(param_2 + 8) = iVar1 == iVar4;
LAB_1008e222:
  param_2[7] = (int)(*DAT_10223188 + 6.0);
  return;
}

