// rea decompile_all
// name: FUN_1011adc0
// address: 0x1011adc0
// body: available
// range: 0x1011adc0-0x1011b0aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1011adc0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_10c;
  undefined4 local_108 [64];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (param_5 < 1) {
    local_10c = param_5;
    FUN_1011b190(param_2,&local_10c,1);
  }
  else {
    piVar6 = (int *)(param_4 + 8);
    local_10c = param_5;
    iVar3 = 0;
    do {
      iVar2 = FUN_10116420(*piVar6 + param_3,
                           (int)(short)piVar6[1] * *(int *)(&DAT_1021b140 + piVar6[-2] * 4));
      piVar6 = piVar6 + 4;
      iVar5 = iVar3 + 1;
      if (iVar2 == 0) {
        iVar5 = iVar3;
      }
      local_10c = local_10c + -1;
      iVar3 = iVar5;
    } while (local_10c != 0);
    local_10c = param_5 - iVar5;
    FUN_1011b190(param_2,&local_10c,1);
    puVar7 = (undefined4 *)(param_4 + 4);
    do {
      iVar5 = puVar7[1] + param_3;
      iVar3 = FUN_10116420(iVar5,*(int *)(&DAT_1021b140 + puVar7[-1] * 4) *
                                 (int)*(short *)(puVar7 + 2));
      if (iVar3 == 0) {
        switch(puVar7[-1]) {
        case 0:
          FUN_1011b110(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 1:
        case 0x10:
        case 0x11:
          FUN_1011b320(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
          sVar1 = *(short *)(puVar7 + 2);
          if (0x40 < sVar1) {
            (*DAT_1022303c)(4,"Can\'t save more than %d entities in an array!!!\n",0x40);
            sVar1 = *(short *)(puVar7 + 2);
          }
          iVar2 = 0;
          iVar3 = iVar5;
          if (0 < sVar1) {
            do {
              local_10c = iVar3;
              switch(puVar7[-1]) {
              case 2:
                uVar4 = FUN_101164d0(*(undefined4 *)(iVar5 + iVar2 * 4));
                break;
              case 3:
                uVar4 = *(undefined4 *)(iVar5 + iVar2 * 4);
                goto LAB_1011af89;
              case 4:
                uVar4 = FUN_10017790();
LAB_1011af89:
                uVar4 = FUN_10116550(uVar4);
                break;
              case 5:
                uVar4 = FUN_10116530(*(undefined4 *)(iVar5 + iVar2 * 4));
                break;
              case 6:
                uVar4 = FUN_101164f0(*(undefined4 *)(iVar5 + iVar2 * 4));
                break;
              default:
                goto switchD_1011af53_default;
              }
              local_108[iVar2] = uVar4;
switchD_1011af53_default:
              iVar2 = iVar2 + 1;
              local_10c = local_10c + 8;
              sVar1 = *(short *)(puVar7 + 2);
              iVar3 = local_10c;
            } while (iVar2 < sVar1);
          }
          FUN_1011b190(*puVar7,local_108,(int)sVar1);
          break;
        case 7:
          FUN_1011b440(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 8:
          FUN_1011b220(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 9:
        case 10:
        case 0xc:
          FUN_1011b190(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 0xb:
          FUN_1011b130(param_1,*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        case 0xd:
          FUN_1011ad60(*puVar7,*(short *)(puVar7 + 2) * 2,iVar5);
          break;
        case 0xe:
          FUN_1011ad60(*puVar7,(int)*(short *)(puVar7 + 2),iVar5);
          break;
        case 0xf:
          FUN_1011b3c0(*puVar7,iVar5,(int)*(short *)(puVar7 + 2));
          break;
        default:
          (*DAT_1022303c)(4,"Bad field type\n");
        }
      }
      puVar7 = puVar7 + 4;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

