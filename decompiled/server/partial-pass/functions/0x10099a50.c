// rea decompile_all
// name: FUN_10099a50
// address: 0x10099a50
// body: available
// range: 0x10099a50-0x10099e89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10099a50(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined1 auStack_78 [16];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  iVar2 = 0;
  do {
    iVar1 = *(int *)(in_ECX + 4);
    local_c0 = *(float *)(iVar1 + 8);
    local_bc = *(float *)(iVar1 + 0xc);
    local_b8 = *(float *)(iVar1 + 0x10);
    fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fStack_a8 = (float)fVar3;
    fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fStack_a4 = (float)fVar3;
    fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
    fVar7 = fStack_a4;
    fVar6 = fStack_a8;
    fVar8 = (float)fVar3;
    dVar5 = (double)(fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8 + fVar8 * fVar8);
    fStack_a0 = fVar8;
    if (dVar5 < 0.0) {
      __libm_sse2_sqrt_precise();
    }
    else {
      dVar5 = SQRT(dVar5);
    }
    if ((float)dVar5 == 0.0) {
      fVar8 = 1.0;
      fVar6 = 0.0;
      fVar7 = 0.0;
    }
    else {
      fVar4 = 1.0 / (float)dVar5;
      fVar6 = fVar6 * fVar4;
      fVar7 = fVar7 * fVar4;
      fVar8 = fVar8 * fVar4;
    }
    fVar4 = *(float *)(in_ECX + 0x10c);
    fStack_90 = fVar6 * fVar4 + local_c0;
    fStack_8c = fVar7 * fVar4 + local_bc;
    fStack_88 = fVar8 * fVar4 + local_b8;
    FUN_1011a800(&local_c0,&fStack_90,1,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),auStack_40);
    if (fStack_30 != 1.0) {
      do {
        fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
        fStack_9c = (float)fVar3;
        fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
        fStack_98 = (float)fVar3;
        fVar3 = (float10)(*DAT_102230b4)(0xbf800000,0x3f800000);
        fStack_b0 = fStack_98;
        fStack_b4 = fStack_9c;
        fStack_ac = (float)fVar3;
        fStack_94 = fStack_ac;
      } while (0.0 < fStack_98 * fVar7 + fStack_9c * fVar6 + fStack_ac * fVar8);
      dVar5 = (double)(fStack_98 * fStack_98 + fStack_9c * fStack_9c + fStack_ac * fStack_ac);
      if (dVar5 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      if ((float)dVar5 == 0.0) {
        fVar8 = 1.0;
        fVar6 = 0.0;
        fVar7 = 0.0;
      }
      else {
        fVar8 = 1.0 / (float)dVar5;
        fVar6 = fStack_b4 * fVar8;
        fVar7 = fStack_b0 * fVar8;
        fVar8 = fStack_ac * fVar8;
      }
      fVar4 = *(float *)(in_ECX + 0x10c);
      fStack_84 = fVar6 * fVar4 + local_c0;
      fStack_80 = fVar7 * fVar4 + local_bc;
      fStack_7c = fVar8 * fVar4 + local_b8;
      FUN_1011a800(&local_c0,&fStack_84,1,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),auStack_78);
      if (fStack_68 != 1.0) {
        dVar5 = (double)((fStack_28 - fStack_60) * (fStack_28 - fStack_60) +
                         (fStack_2c - fStack_64) * (fStack_2c - fStack_64) +
                        (fStack_24 - fStack_5c) * (fStack_24 - fStack_5c));
        if (dVar5 < 0.0) {
          __libm_sse2_sqrt_precise();
        }
        else {
          dVar5 = SQRT(dVar5);
        }
        if (*(float *)(in_ECX + 0x10c) * 0.1 <= (float)dVar5) {
          FUN_1011a800(&fStack_2c,&fStack_64,1,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c),
                       auStack_78);
          if (fStack_68 == 1.0) {
            FUN_100a9f80(&fStack_2c,&fStack_64);
            return;
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}

