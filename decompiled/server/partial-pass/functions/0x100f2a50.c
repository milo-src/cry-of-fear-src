// rea decompile_all
// name: FUN_100f2a50
// address: 0x100f2a50
// body: available
// range: 0x100f2a50-0x100f2cfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f2a50(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  double dVar3;
  char *pcVar4;
  
  iVar1 = in_ECX[1];
  if ((*(float *)(iVar1 + 0x260) != 4.0) &&
     (((char)in_ECX[0x140] != '\x01' ||
      ((float)in_ECX[0x13f] < *DAT_10223188 || (float)in_ECX[0x13f] == *DAT_10223188)))) {
    if ((char)in_ECX[0xe6] == '\0') {
      dVar3 = (double)(*(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20) +
                      *(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24));
      if (dVar3 < 0.0) {
        __libm_sse2_sqrt_precise();
      }
      else {
        dVar3 = SQRT(dVar3);
      }
      iVar2 = -1;
      if ((((*(float *)(iVar1 + 0x260) < 2.0) || (*(float *)(iVar1 + 0x260) == 25.0)) &&
          (iVar1 = FUN_10017780(), iVar1 == 0)) &&
         (((char)in_ECX[0x143] == '\0' && (iVar1 = (**(code **)(*in_ECX + 0xbc))(), iVar1 != 0)))) {
        if ((float)dVar3 <= 10.0) {
          if (in_ECX[0x94b] == 0) {
            iVar2 = FUN_1000e9b0(&DAT_101aa610);
          }
          else {
            iVar2 = FUN_100e03a0();
          }
          pcVar4 = "idle";
        }
        else if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x40000) == 0) {
          if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x80000) == 0) {
            if (in_ECX[0x94b] == 0) {
              iVar2 = FUN_1000e9b0(&DAT_101bb7c0);
              pcVar4 = "run";
            }
            else {
              iVar2 = FUN_100e03a0();
              pcVar4 = "run";
            }
          }
          else if (in_ECX[0x94b] == 0) {
            iVar2 = FUN_1000e9b0("stamina");
            pcVar4 = "stamina";
          }
          else {
            iVar2 = FUN_100e03a0();
            pcVar4 = "stamina";
          }
        }
        else {
          iVar2 = FUN_1000e9b0("sprint");
          pcVar4 = "sprint";
        }
        iVar1 = FUN_1000e9b0(pcVar4);
        if (((-1 < iVar2) && (-1 < iVar1)) &&
           ((*(int *)(in_ECX[1] + 0x130) != iVar1 &&
            ((float)in_ECX[0x141] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x141])))) {
          *(int *)(in_ECX[1] + 0x130) = iVar1;
        }
        if ((*(uint *)(in_ECX[1] + 0x1a8) & 0x4000) != 0) {
          if ((float)dVar3 <= 10.0) {
            if (in_ECX[0x94b] == 0) {
              iVar2 = FUN_1000e9b0("crouch_idle");
            }
            else {
              iVar2 = FUN_100e03a0();
            }
            pcVar4 = "crouch_idle";
          }
          else if (in_ECX[0x94b] == 0) {
            iVar2 = FUN_1000e9b0("crouch_crouch");
            pcVar4 = "crouch_crouch";
          }
          else {
            iVar2 = FUN_100e03a0();
            pcVar4 = "crouch_crouch";
          }
          iVar1 = FUN_1000e9b0(pcVar4);
          if (((-1 < iVar1) && (*(int *)(in_ECX[1] + 0x130) != iVar1)) &&
             ((float)in_ECX[0x141] <= *DAT_10223188 && *DAT_10223188 != (float)in_ECX[0x141])) {
            *(int *)(in_ECX[1] + 0x130) = iVar1;
          }
        }
      }
      if (*(int *)(in_ECX[1] + 300) == iVar2) {
        return;
      }
      if (*DAT_10223188 <= (float)in_ECX[0x13d] && (float)in_ECX[0x13d] != *DAT_10223188) {
        return;
      }
      *(int *)(in_ECX[1] + 300) = iVar2;
    }
    else {
      *(undefined4 *)(iVar1 + 0x130) = 0xffffffff;
      *(undefined4 *)(in_ECX[1] + 300) = 0xffffffff;
    }
    *(undefined4 *)(in_ECX[1] + 0x134) = 0;
    FUN_1000e9e0();
  }
  return;
}

