// rea decompile_all
// name: FUN_10104670
// address: 0x10104670
// body: available
// range: 0x10104670-0x101048b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_10104670(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  double dVar6;
  float local_64;
  int *local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined8 uStack_4c;
  float fStack_44;
  undefined1 auStack_40 [16];
  float fStack_30;
  
  local_5c = (int *)0x0;
  local_64 = 1e+07;
  uVar3 = 0;
  piVar5 = (int *)0x0;
  iVar2 = in_ECX[1];
  local_58 = *(float *)(iVar2 + 8);
  local_54 = *(float *)(iVar2 + 0xc);
  local_50 = *(float *)(iVar2 + 0xd8);
  if (param_1 == 0) {
    uVar3 = 5;
  }
  do {
    if (param_1 == 0) {
      iVar2 = (**(code **)(*in_ECX + 0x250))(uVar3);
      pcVar4 = (&PTR_s_monster_human_alpha_10219cc8)[iVar2];
      if (pcVar4 != (char *)0x0) goto LAB_101046f5;
    }
    else {
      pcVar4 = "player";
LAB_101046f5:
      for (piVar5 = (int *)FUN_10118460(piVar5,pcVar4); piVar5 != (int *)0x0;
          piVar5 = (int *)FUN_10118460(piVar5,pcVar4)) {
        if ((((piVar5 != in_ECX) && (iVar2 = (**(code **)(*piVar5 + 0xbc))(), iVar2 != 0)) &&
            (iVar2 = (**(code **)(*piVar5 + 0x78))(), iVar2 != 0)) &&
           ((*(int *)(iVar2 + 0x224) != 6 && (*(int *)(iVar2 + 0x224) != 5)))) {
          uVar1 = *(undefined8 *)(piVar5[1] + 8);
          uStack_4c._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          uStack_4c._0_4_ = (float)uVar1;
          fStack_44 = *(float *)(piVar5[1] + 0xd8);
          dVar6 = (double)((local_54 - uStack_4c._4_4_) * (local_54 - uStack_4c._4_4_) +
                           (local_58 - (float)uStack_4c) * (local_58 - (float)uStack_4c) +
                          (local_50 - fStack_44) * (local_50 - fStack_44));
          uStack_4c = uVar1;
          if (dVar6 < 0.0) {
            __libm_sse2_sqrt_precise();
          }
          else {
            dVar6 = SQRT(dVar6);
          }
          if (((float)dVar6 < local_64) &&
             (FUN_1011a800(&local_58,&uStack_4c,1,*(undefined4 *)(in_ECX[1] + 0x20c),auStack_40),
             fStack_30 == 1.0)) {
            dVar6 = (double)((local_54 - uStack_4c._4_4_) * (local_54 - uStack_4c._4_4_) +
                             (local_58 - (float)uStack_4c) * (local_58 - (float)uStack_4c) +
                            (local_50 - fStack_44) * (local_50 - fStack_44));
            if (dVar6 < 0.0) {
              __libm_sse2_sqrt_precise();
            }
            else {
              dVar6 = SQRT(dVar6);
            }
            if ((float)dVar6 < 500.0) {
              local_64 = (float)dVar6;
              local_5c = piVar5;
            }
          }
        }
      }
    }
    uVar3 = uVar3 - 1;
    if (0x7fffffff < uVar3) {
      return local_5c;
    }
  } while( true );
}

