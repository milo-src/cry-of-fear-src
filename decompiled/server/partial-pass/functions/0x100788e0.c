// rea decompile_all
// name: FUN_100788e0
// address: 0x100788e0
// body: available
// range: 0x100788e0-0x10078b48 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788e0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  char *pcVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 auStack_20 [3];
  undefined1 auStack_14 [16];
  
  iVar1 = FUN_10017780();
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_100177a0();
    iVar1 = (**(code **)(*piVar2 + 0xd0))();
    if ((iVar1 != 0) &&
       ((float)in_ECX[0xdf] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0xdf])) {
      iVar1 = in_ECX[1];
      iVar3 = FUN_100177a0();
      fVar6 = *(float *)(*(int *)(iVar3 + 4) + 0xc) - *(float *)(iVar1 + 0xc);
      fVar8 = *(float *)(*(int *)(iVar3 + 4) + 8) - *(float *)(iVar1 + 8);
      dVar7 = (double)(fVar6 * fVar6 + fVar8 * fVar8);
      if (dVar7 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar7 = SQRT(dVar7);
      }
      if (((((in_ECX[0x60] & 0x20U) == 0) && ((in_ECX[0x60] & 0x10U) != 0)) &&
          ((float)dVar7 <= 1024.0)) && (1 < in_ECX[0xdd])) {
        in_ECX[0xdd] = in_ECX[0xdd] + -1;
        *(undefined1 *)(in_ECX[1] + 0x140) = 0;
        iVar1 = (*DAT_102230b0)(0xfffffffb,5);
        pcVar4 = "weapons/glock/glock_fire.wav";
        if (*(int *)(in_ECX[1] + 0x248) != 0) {
          pcVar4 = "weapons/p345/p345_fire.wav";
        }
        FUN_100fc9f0(*(undefined4 *)(in_ECX[1] + 0x20c),1,pcVar4,0x3f800000,0x3f4ccccd,0,iVar1 + 100
                    );
        iVar1 = FUN_100177a0();
        FUN_100125e0(*(undefined4 *)(iVar1 + 4));
        FUN_1000e7c0(1,&uStack_2c,auStack_14);
        fVar5 = (float10)(*DAT_102230b4)(0x3e4ccccd,0x3f4ccccd);
        in_ECX[0xdf] = (int)(float)(fVar5 + (float10)*DAT_10223188);
        in_ECX[0xda] = (int)(*DAT_10223188 + 0.1);
        (**(code **)(*in_ECX + 0x224))(auStack_20,&uStack_2c);
        fVar6 = *(float *)(in_ECX[1] + 600);
        fVar8 = _DAT_102267a8;
        if (0.0 < fVar6) {
          fVar8 = fVar6 * _DAT_102267a8;
        }
        FUN_100884f0(1,unaff_ESI,unaff_EBX,uStack_2c,uStack_28,uStack_24,auStack_20[0],0x3d8ede55,
                     0x3d8ede55,0x3d8ede55,0x44400000,7,1,(int)fVar8,in_ECX[1]);
      }
    }
  }
  return;
}

