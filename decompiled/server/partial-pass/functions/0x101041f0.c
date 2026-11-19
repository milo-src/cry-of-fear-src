// rea decompile_all
// name: FUN_101041f0
// address: 0x101041f0
// body: available
// range: 0x101041f0-0x10104534 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_101041f0(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_10;
  
  iVar2 = (**(code **)(*in_ECX + 0x244))();
  if (iVar2 == 0) {
    return 0;
  }
  if ((*(uint *)(in_ECX[1] + 0x1a4) & 0x100) == 0) {
    local_10 = in_ECX[0xdf];
    iVar2 = in_ECX[0xde];
    uVar8 = 0x404ccccd;
    uVar7 = 0x40333333;
  }
  else {
    local_10 = in_ECX[0xe8];
    iVar2 = in_ECX[0xe9];
    uVar8 = 0x40a66666;
    uVar7 = 0x4099999a;
  }
  fVar6 = (float10)(*DAT_102230b4)(uVar7,uVar8);
  fVar1 = (float)fVar6;
  FUN_10104d40();
  piVar3 = (int *)FUN_10017790();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0xd0))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*piVar3 + 0xbc))();
      if (iVar4 != 0) {
        in_ECX[0xf8] = in_ECX[99];
        in_ECX[0xf9] = in_ECX[100];
        if ((*(byte *)(in_ECX + 0xda) & 4) == 0) {
          iVar4 = FUN_100177a0();
          iVar4 = *(int *)(iVar4 + 4);
          iVar5 = FUN_100177a0();
          if (*(float *)(iVar4 + 0x164) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b4) * 0.125) {
            (**(code **)(*in_ECX + 0x1a0))(in_ECX[0xec],fVar1,0x3f800000,0x40000000);
            in_ECX[0xda] = in_ECX[0xda] | 4;
            return 1;
          }
        }
        if ((*(byte *)(in_ECX + 0xda) & 2) == 0) {
          iVar4 = FUN_100177a0();
          iVar4 = *(int *)(iVar4 + 4);
          iVar5 = FUN_100177a0();
          if (*(float *)(iVar4 + 0x164) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b4) * 0.25) {
            (**(code **)(*in_ECX + 0x1a0))(in_ECX[0xeb],fVar1,0x3f800000,0x40000000);
            in_ECX[0xda] = in_ECX[0xda] | 2;
            return 1;
          }
        }
        if ((*(byte *)(in_ECX + 0xda) & 1) == 0) {
          iVar4 = FUN_100177a0();
          iVar4 = *(int *)(iVar4 + 4);
          iVar5 = FUN_100177a0();
          if (*(float *)(iVar4 + 0x164) <= *(float *)(*(int *)(iVar5 + 4) + 0x1b4) * 0.5) {
            (**(code **)(*in_ECX + 0x1a0))(in_ECX[0xea],fVar1,0x3f800000,0x40000000);
            in_ECX[0xda] = in_ECX[0xda] | 1;
            return 1;
          }
        }
      }
    }
  }
  piVar3 = (int *)FUN_10104670(0);
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x9c))();
    if (iVar4 == 0) {
      iVar4 = (*DAT_102230b0)(0,99);
      if (iVar4 < 0x4b) {
        (**(code **)(*in_ECX + 0x1a0))(iVar2,fVar1,0x3f800000,0x40000000);
        FUN_10017740(piVar3);
        (**(code **)(*piVar3 + 0x24c))();
        piVar3[0xf7] = in_ECX[0xf7];
        in_ECX[0xdb] = in_ECX[0xdb] + 1;
        return 1;
      }
    }
  }
  iVar2 = (*DAT_102230b0)(0,1);
  if (iVar2 != 0) {
    iVar2 = FUN_10104670(1);
    if (iVar2 != 0) {
      FUN_10017740(iVar2);
      (**(code **)(*in_ECX + 0x1a0))(local_10,fVar1,0x3f800000,0x40000000);
      in_ECX[0xdb] = in_ECX[0xdb] + 1;
      return 1;
    }
  }
  FUN_10105f30(0);
  DAT_10230d78 = 0;
  return 0;
}

