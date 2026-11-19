// rea decompile_all
// name: FUN_1010e570
// address: 0x1010e570
// body: available
// range: 0x1010e570-0x1010e83a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1010e570(void)

{
  int iVar1;
  undefined8 *puVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_14 [16];
  
  piVar3 = *(int **)(in_ECX + 0xfc);
  if (piVar3 != (int *)0x0) {
    fVar7 = *(float *)(in_ECX + 0x110) - *(float *)(*(int *)(in_ECX + 4) + 0x1fc) * DAT_10223188[1];
    *(float *)(in_ECX + 0x110) = fVar7;
    if (fVar7 <= 0.0) {
      if (*(int *)(piVar3[1] + 0x1d8) != 0) {
        FUN_10101ff0((int)DAT_10223188[0x26] + *(int *)(piVar3[1] + 0x1d8));
        piVar3 = *(int **)(in_ECX + 0xfc);
        if ((*(byte *)(piVar3[1] + 0x1a4) & 4) != 0) {
          *(undefined4 *)(piVar3[1] + 0x1d8) = 0;
          piVar3 = *(int **)(in_ECX + 0xfc);
        }
      }
      iVar1 = (**(code **)(*piVar3 + 0xdc))();
      *(int *)(in_ECX + 0xfc) = iVar1;
      if (iVar1 == 0) {
        iVar1 = *(int *)(in_ECX + 4);
        *(undefined8 *)(iVar1 + 0x20) = DAT_10222f34;
        *(undefined4 *)(iVar1 + 0x28) = DAT_10222f3c;
      }
      else {
        iVar4 = *(int *)(iVar1 + 4);
        if (*(float *)(iVar4 + 0x1fc) != 0.0) {
          *(float *)(in_ECX + 0x114) = *(float *)(iVar4 + 0x1fc);
          iVar4 = *(int *)(iVar1 + 4);
        }
        iVar1 = *(int *)(in_ECX + 4);
        fVar8 = *(float *)(iVar4 + 0xc) - *(float *)(iVar1 + 0xc);
        fVar9 = *(float *)(iVar4 + 8) - *(float *)(iVar1 + 8);
        fVar7 = *(float *)(iVar4 + 0x10) - *(float *)(iVar1 + 0x10);
        dVar6 = (double)(fVar8 * fVar8 + fVar9 * fVar9 + fVar7 * fVar7);
        if (dVar6 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar6 = SQRT(dVar6);
        }
        *(float *)(in_ECX + 0x110) = (float)dVar6;
        puVar2 = (undefined8 *)FUN_10017e70(auStack_14);
        *(undefined8 *)(iVar1 + 0x44) = *puVar2;
        *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(puVar2 + 1);
        fVar5 = (float10)(**(code **)(**(int **)(in_ECX + 0xfc) + 0x98))();
        *(float *)(in_ECX + 0x10c) = (float)fVar5 + *DAT_10223188;
      }
    }
    if (*(float *)(in_ECX + 0x10c) < *DAT_10223188 || *(float *)(in_ECX + 0x10c) == *DAT_10223188) {
      fVar5 = (float10)FUN_101174a0(*(undefined4 *)(in_ECX + 0x114),
                                    *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1fc),
                                    DAT_10223188[1] * *(float *)(in_ECX + 0x11c));
    }
    else {
      fVar5 = (float10)FUN_101174a0(0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x1fc),
                                    DAT_10223188[1] * *(float *)(in_ECX + 0x120));
    }
    *(float *)(*(int *)(in_ECX + 4) + 0x1fc) = (float)fVar5;
    iVar1 = *(int *)(in_ECX + 4);
    fVar7 = *(float *)(iVar1 + 0x1fc);
    fVar9 = DAT_10223188[1] + DAT_10223188[1];
    fVar8 = 1.0 - fVar9;
    *(ulonglong *)(iVar1 + 0x20) =
         CONCAT44(*(float *)(iVar1 + 0x48) * fVar7 * fVar9 + *(float *)(iVar1 + 0x24) * fVar8,
                  fVar7 * *(float *)(iVar1 + 0x44) * fVar9 + *(float *)(iVar1 + 0x20) * fVar8);
    *(float *)(iVar1 + 0x28) =
         *(float *)(iVar1 + 0x4c) * fVar7 * fVar9 + *(float *)(iVar1 + 0x28) * fVar8;
  }
  return;
}

