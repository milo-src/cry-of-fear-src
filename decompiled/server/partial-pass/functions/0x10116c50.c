// rea decompile_all
// name: FUN_10116c50
// address: 0x10116c50
// body: available
// range: 0x10116c50-0x10116fbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10116c50(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,char *param_6,
                char *param_7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  int *in_ECX;
  float *pfVar5;
  char *pcVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  char *pcVar10;
  int iVar11;
  float local_28;
  float fStack_24;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_c = 0.0;
  local_10 = 0.0;
  iVar11 = *in_ECX;
  local_14 = 0.0;
  local_18 = 0.0;
  if ((iVar11 != 0) && (local_c = *(float *)(iVar11 + 0x550), *(int *)(iVar11 + 0x52c) != 0)) {
    local_18 = *(float *)(iVar11 + 0x54c);
    fStack_24 = (float)((ulonglong)*(undefined8 *)(iVar11 + 0x544) >> 0x20);
    local_14 = fStack_24;
    local_28 = (float)*(undefined8 *)(iVar11 + 0x544);
    local_10 = local_28;
  }
  iVar11 = 0;
  if (0 < param_3) {
    do {
      iVar8 = (param_4 + iVar11) % param_3;
      piVar2 = (int *)(iVar8 * 0x10 + param_2);
      iVar3 = __stricmp((char *)piVar2[1],param_6);
      if (iVar3 == 0) {
        if (((in_ECX[1] == 0) || ((*(byte *)((int)piVar2 + 0xe) & 1) == 0)) &&
           (param_6 = (char *)0x0, 0 < (short)piVar2[3])) {
          do {
            pfVar5 = (float *)(*(int *)(&DAT_1021b140 + *piVar2 * 4) * (int)param_6 + param_1 +
                              piVar2[2]);
            pfVar9 = (float *)(param_7 + *(int *)(&DAT_1021b140 + *piVar2 * 4) * (int)param_6);
            switch(*piVar2) {
            case 0:
            case 9:
              *pfVar5 = *pfVar9;
              break;
            case 1:
            case 0x10:
            case 0x11:
              iVar11 = (int)param_6;
              pcVar6 = param_7;
              if (0 < (int)param_6) {
                do {
                  cVar1 = *pcVar6;
                  while (cVar1 != '\0') {
                    pcVar6 = pcVar6 + 1;
                    cVar1 = *pcVar6;
                  }
                  pcVar6 = pcVar6 + 1;
                  iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
              }
              pcVar10 = pcVar6;
              do {
                cVar1 = *pcVar10;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              if (pcVar10 == pcVar6 + 1) {
                *pfVar5 = 0.0;
              }
              else {
                fVar4 = (float)(*DAT_10223054)(pcVar6);
                *pfVar5 = fVar4;
                if ((fVar4 != 0.0) && (in_ECX[2] != 0)) {
                  if (*piVar2 == 0x10) {
                    FUN_10116990(*(int *)(DAT_10223188 + 0x98) + (int)fVar4);
                  }
                  else if (*piVar2 == 0x11) {
                    FUN_10116a30(*(int *)(DAT_10223188 + 0x98) + (int)fVar4);
                  }
                }
              }
              break;
            case 2:
              iVar11 = FUN_10116490(*pfVar9);
              if (iVar11 == 0) {
                *pfVar5 = 0.0;
              }
              else {
                fVar4 = (float)(*DAT_10223060)(iVar11);
                *pfVar5 = fVar4;
              }
              break;
            case 3:
              fVar4 = *pfVar9;
              iVar11 = FUN_10116490(fVar4);
              if (iVar11 == 0) {
                *pfVar5 = 0.0;
                if (fVar4 != -NAN) {
                  (*DAT_1022303c)(1,"## Restore: invalid entitynum %d\n",fVar4);
                }
              }
              else {
                *pfVar5 = *(float *)(iVar11 + 0x7c);
              }
              break;
            case 4:
              iVar11 = FUN_10116490(*pfVar9);
              if (iVar11 == 0) {
                FUN_10017740(0);
              }
              else {
                FUN_10017740(*(undefined4 *)(iVar11 + 0x7c));
              }
              break;
            case 5:
              iVar11 = FUN_10116490(*pfVar9);
              *pfVar5 = (float)(-(uint)(iVar11 != 0) & iVar11 + 0x80U);
              break;
            case 6:
              fVar4 = (float)FUN_10116490(*pfVar9);
              *pfVar5 = fVar4;
              break;
            case 7:
              *pfVar5 = *pfVar9;
              pfVar5[1] = pfVar9[1];
              pfVar5[2] = pfVar9[2];
              break;
            case 8:
              *pfVar5 = *pfVar9 + local_10;
              pfVar5[1] = pfVar9[1] + local_14;
              pfVar5[2] = pfVar9[2] + local_18;
              break;
            case 10:
            case 0xc:
              *pfVar5 = *pfVar9;
              _DAT_1023105c = *pfVar9;
              break;
            case 0xb:
              pfVar7 = pfVar9;
              do {
                cVar1 = *(char *)pfVar7;
                pfVar7 = (float *)((int)pfVar7 + 1);
              } while (cVar1 != '\0');
              if (pfVar7 == (float *)((int)pfVar9 + 1)) {
                *pfVar5 = 0.0;
              }
              else {
                fVar4 = (float)(*DAT_10223080)(pfVar9);
                *pfVar5 = fVar4;
              }
              break;
            case 0xd:
              *(undefined2 *)pfVar5 = *(undefined2 *)pfVar9;
              break;
            case 0xe:
              *(undefined1 *)pfVar5 = *(undefined1 *)pfVar9;
              break;
            case 0xf:
              *pfVar5 = *pfVar9 + local_c;
              break;
            default:
              (*DAT_1022303c)(4,"Bad field type\n");
            }
            param_6 = (char *)((int)param_6 + 1);
          } while ((int)param_6 < (int)(short)piVar2[3]);
        }
        return iVar8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < param_3);
  }
  return -1;
}

