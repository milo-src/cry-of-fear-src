// rea decompile_all
// name: FUN_100202e0
// address: 0x100202e0
// body: available
// range: 0x100202e0-0x100205a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100202e0(void)

{
  int iVar1;
  float *pfVar2;
  int *in_ECX;
  float10 fVar3;
  double dVar4;
  undefined4 uVar5;
  
  fVar3 = (float10)FUN_1011ab20();
  pfVar2 = DAT_10223188;
  if ((float)fVar3 < (float)in_ECX[0x76]) {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0x73]) {
    return;
  }
  if (*DAT_10223188 < (float)in_ECX[0x74]) {
    return;
  }
  iVar1 = *(int *)(in_ECX[0x58] + 4);
  dVar4 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                  *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24));
  if (dVar4 < 0.0) {
    __libm_sse2_sqrt_precise();
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  switch((int)*(float *)(in_ECX[1] + 0x168)) {
  case 1:
    if ((10.0 < (float)dVar4) && ((*(uint *)(iVar1 + 0x1a8) & 0x200) == 0)) {
      (**(code **)(*in_ECX + 0x198))(1,1,0);
      if ((*(uint *)(*(int *)(in_ECX[0x58] + 4) + 0x1a8) & 0x40000) == 0) {
        in_ECX[0x76] = (int)(*DAT_10223188 + 1.6);
        return;
      }
      in_ECX[0x76] = (int)(*DAT_10223188 + 0.8);
      return;
    }
    goto LAB_10020406;
  case 2:
    if ((10.0 < (float)dVar4) && ((*(uint *)(iVar1 + 0x1a8) & 0x40000) != 0)) {
      (**(code **)(*in_ECX + 0x198))(2,1,0);
      in_ECX[0x76] = (int)(*DAT_10223188 + 0.666);
      return;
    }
    goto LAB_10020406;
  case 3:
    if (((*(char *)(in_ECX[0x58] + 0x50c) != '\0') ||
        ((0.0 < *(float *)(iVar1 + 0x164) && (350.0 <= *(float *)(in_ECX[0x58] + 0x22c4))))) &&
       ((*(uint *)(iVar1 + 0x1a8) & 0x200) == 0)) {
      (**(code **)(*in_ECX + 0x198))(4,1,0);
      in_ECX[0x76] = (int)(*DAT_10223188 + 0.666);
      return;
    }
LAB_10020406:
    in_ECX[0x76] = (int)(*pfVar2 + 0.1);
    return;
  default:
    goto switchD_10020383_caseD_4;
  case 10:
    uVar5 = 6;
    break;
  case 0xb:
    (**(code **)(*in_ECX + 0x198))(8,1,0);
    in_ECX[0x76] = (int)*DAT_10223188;
    in_ECX[0x73] = (int)(*DAT_10223188 + 0.66);
    *(undefined4 *)(in_ECX[1] + 0x168) = 0x41a00000;
    return;
  case 0xc:
    uVar5 = 7;
    break;
  case 0xd:
    uVar5 = 9;
  }
  (**(code **)(*in_ECX + 0x198))(uVar5,1,0);
  in_ECX[0x76] = (int)*DAT_10223188;
  *(undefined4 *)(in_ECX[1] + 0x168) = 0x41a00000;
  in_ECX[0x73] = (int)(*DAT_10223188 + 0.66);
switchD_10020383_caseD_4:
  return;
}

