// rea decompile_all
// name: FUN_101059e0
// address: 0x101059e0
// body: available
// range: 0x101059e0-0x10105d62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_101059e0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  float fVar5;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  switch(*param_1) {
  case 0x50:
    FUN_10017740(0);
  default:
    FUN_1000bc60(param_1);
    return;
  case 0x5e:
    (**(code **)(*in_ECX + 0x240))(0,1);
    iVar2 = *in_ECX;
    fVar4 = (float10)(*DAT_102230b4)(0x40000000,0x40200000,0x3f800000,0x3f4ccccd);
    (**(code **)(iVar2 + 0x1a0))(in_ECX[0xe4],(float)fVar4);
    break;
  case 0x5f:
    iVar2 = in_ECX[1];
    local_10 = *(float *)(iVar2 + 0x50);
    local_8 = *(float *)(iVar2 + 0x58);
    local_c = *(float *)(iVar2 + 0xac) + 180.0;
    (*DAT_10222f98)(&local_10,&local_1c,0,0);
    fVar1 = (float)param_1[1];
    iVar2 = in_ECX[1];
    local_10 = *(float *)(iVar2 + 8) + local_1c * fVar1;
    local_c = *(float *)(iVar2 + 0xc) + local_18 * fVar1;
    local_8 = *(float *)(iVar2 + 0x10) + local_14 * fVar1;
    iVar2 = FUN_100c1080(3,0x40000000,&local_10);
    if (iVar2 == 0) {
      fVar4 = (float10)(**(code **)(*in_ECX + 0x1d0))();
      iVar2 = in_ECX[1];
      iVar3 = in_ECX[1];
      iVar2 = (**(code **)(*in_ECX + 0x1c8))
                        (*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),
                         *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar2 + 0x178),
                         *(undefined4 *)(iVar2 + 0x17c),*(undefined4 *)(iVar2 + 0x180),0,
                         (float)fVar4);
      if (iVar2 == 0) {
        in_ECX[0x60] = in_ECX[0x60] | 0x40000000;
        return;
      }
      in_ECX[0x84] = (int)(*DAT_10223188 + 2.0);
    }
    break;
  case 0x60:
    in_ECX[0xb4] = 3;
    return;
  case 0x61:
    FUN_10104ec0();
    break;
  case 0x62:
    FUN_101041f0();
    break;
  case 99:
    FUN_10104110();
    break;
  case 100:
    FUN_10017740(0);
    break;
  case 0x65:
    iVar2 = *in_ECX;
    fVar4 = (float10)(*DAT_102230b4)(0x40333333,0x404ccccd,0x3f800000,0x3f4ccccd);
    (**(code **)(iVar2 + 0x1a0))(in_ECX[0xe5],(float)fVar4);
    break;
  case 0x66:
    FUN_10104540();
    break;
  case 0x67:
  case 0x68:
  case 0x6b:
    in_ECX[0x83] = (int)((float)param_1[1] + *DAT_10223188);
    return;
  case 0x69:
    goto switchD_10105a03_caseD_69;
  case 0x6a:
    iVar2 = FUN_10017780();
    if (iVar2 != 0) {
      *(undefined4 *)(in_ECX[1] + 0xb0) = 0x42700000;
      iVar2 = in_ECX[1];
      iVar3 = FUN_100177a0();
      iVar3 = *(int *)(iVar3 + 4);
      fVar4 = (float10)FUN_100c2760(*(float *)(iVar3 + 8) - *(float *)(iVar2 + 8),
                                    *(float *)(iVar3 + 0xc) - *(float *)(iVar2 + 0xc),
                                    *(float *)(iVar3 + 0x10) - *(float *)(iVar2 + 0x10));
      iVar2 = in_ECX[1];
      fVar1 = *(float *)(iVar2 + 0x54);
      fVar5 = (float)fVar4 - fVar1;
      if (180.0 < fVar5) {
        fVar5 = fVar5 - 360.0;
      }
      if (fVar5 < -180.0) {
        fVar5 = fVar5 + 360.0;
      }
      if (0.0 <= fVar5) {
        fVar5 = fVar5 - 45.0;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        *(float *)(iVar2 + 0xac) = fVar5 + fVar1;
      }
      else {
        fVar5 = fVar5 + 45.0;
        if (0.0 <= fVar5) {
          fVar5 = 0.0;
        }
        *(float *)(iVar2 + 0xac) = fVar5 + fVar1;
      }
    }
  }
  if ((in_ECX[0x60] & 0x40000000U) == 0) {
    in_ECX[0x8b] = 4;
    return;
  }
switchD_10105a03_caseD_69:
  return;
}

