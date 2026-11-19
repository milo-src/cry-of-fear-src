// rea decompile_all
// name: FUN_10041fd0
// address: 0x10041fd0
// body: available
// range: 0x10041fd0-0x100422aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041fd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *in_ECX;
  int unaff_EDI;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  undefined1 local_c [8];
  
  switch(*param_1) {
  case 9:
    iVar1 = FUN_10017790();
    if (iVar1 == 0) goto LAB_100420cf;
    iVar1 = *in_ECX;
    uVar2 = FUN_10017790();
    iVar3 = FUN_100177a0(uVar2,local_c);
    iVar1 = (**(code **)(iVar1 + 0x158))(in_ECX[1] + 8,*(int *)(iVar3 + 4) + 8);
    if (iVar1 == 2) {
      FUN_100c1ab0();
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      *(undefined8 *)(in_ECX + 0xb1) = *(undefined8 *)(iVar1 + 8);
      in_ECX[0xb3] = *(int *)(iVar1 + 0x10);
      iVar1 = FUN_100c1a20(2);
      in_ECX[0xae] = iVar1;
      iVar1 = FUN_100177a0();
      iVar1 = *(int *)(iVar1 + 4);
      *(undefined8 *)(in_ECX + 0x8e) = *(undefined8 *)(iVar1 + 8);
      in_ECX[0x90] = *(int *)(iVar1 + 0x10);
      in_ECX[0x91] = 0x82;
      goto LAB_1004228c;
    }
    iVar1 = in_ECX[1];
    iVar3 = *(int *)(unaff_EDI + 4);
    fVar7 = *(float *)(iVar3 + 8) - *(float *)(iVar1 + 8);
    fVar4 = *(float *)(iVar3 + 0xc) - *(float *)(iVar1 + 0xc);
    fVar6 = *(float *)(iVar3 + 0x10) - *(float *)(iVar1 + 0x10);
    dVar5 = (double)(fVar7 * fVar7 + fVar4 * fVar4 + fVar6 * fVar6);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1c4))
                      (*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                       *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x178),
                       *(undefined4 *)(iVar3 + 0x17c),*(undefined4 *)(iVar3 + 0x180),param_1[1],
                       (float)dVar5 + 1024.0);
    if (iVar1 != 0) goto LAB_1004228c;
    pcVar8 = "GetPathToEnemy failed!!\n";
    break;
  case 10:
    iVar1 = in_ECX[1];
    fVar7 = (float)in_ECX[0xbe] - *(float *)(iVar1 + 0xc);
    fVar6 = (float)in_ECX[0xbd] - *(float *)(iVar1 + 8);
    fVar4 = (float)in_ECX[0xbf] - *(float *)(iVar1 + 0x10);
    dVar5 = (double)(fVar7 * fVar7 + fVar6 * fVar6 + fVar4 * fVar4);
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    iVar1 = (**(code **)(*in_ECX + 0x1c4))
                      (in_ECX[0xbd],in_ECX[0xbe],in_ECX[0xbf],*(undefined4 *)(iVar1 + 0x178),
                       *(undefined4 *)(iVar1 + 0x17c),*(undefined4 *)(iVar1 + 0x180),param_1[1],
                       (float)dVar5 + 1024.0);
    if (iVar1 != 0) goto LAB_1004228c;
    pcVar8 = "GetPathToEnemyLKP failed!!\n";
    break;
  case 0x14:
  case 0x15:
    in_ECX[0xb4] = 5;
LAB_1004228c:
    if ((in_ECX[0x60] & 0x40000000U) != 0) {
      return;
    }
    in_ECX[0x8b] = 4;
    return;
  case 0x57:
    *(undefined8 *)(in_ECX + 0xb1) = *(undefined8 *)(in_ECX[1] + 8);
    in_ECX[0xb3] = *(int *)(in_ECX[1] + 0x10);
  default:
    FUN_1000bc60(param_1);
    return;
  }
  (*DAT_1022303c)(2,pcVar8);
LAB_100420cf:
  in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
  return;
}

