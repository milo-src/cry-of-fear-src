// rea decompile_all
// name: FUN_100f3d90
// address: 0x100f3d90
// body: available
// range: 0x100f3d90-0x100f4023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100f3d90(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int in_ECX;
  byte *pbVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  float10 fVar9;
  char local_88 [16];
  undefined4 local_78;
  char acStack_74 [12];
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if ((DAT_10222ee4 == (int *)0x0) || (iVar2 = (**(code **)(*DAT_10222ee4 + 0x20))(), iVar2 == 0)) {
    iVar2 = 1;
    piVar7 = (int *)(in_ECX + 0x514);
    piVar6 = piVar7;
    do {
      pbVar3 = (byte *)(*piVar6 + *(int *)(DAT_10223188 + 0x98));
      pbVar5 = (byte *)(*(int *)(DAT_10223188 + 0x98) + param_1);
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_100f3e20:
          uVar4 = -(uint)bVar8 | 1;
          goto LAB_100f3e25;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_100f3e20;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      uVar4 = 0;
LAB_100f3e25:
      if (uVar4 == 0) goto LAB_100f4012;
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar2 < 0x20);
    iVar2 = 1;
    while (*piVar7 != 0) {
      iVar2 = iVar2 + 1;
      piVar7 = piVar7 + 1;
      if (0x1f < iVar2) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    *(int *)(in_ECX + 0x510 + iVar2 * 4) = param_1;
    fVar9 = (float10)(*DAT_1022302c)("cof_subtitlelanguage");
    switch((int)fVar9) {
    default:
      builtin_strncpy(local_88 + 8,"/hints.t",8);
      local_78._0_1_ = 'x';
      local_78._1_1_ = 't';
      local_78._2_1_ = '\0';
      break;
    case 2:
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_68._0_1_ = 'x';
      local_68._1_1_ = 't';
      local_68._2_1_ = '\0';
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 'd';
      builtin_strncpy(acStack_74,"utch/hints.t",0xc);
      break;
    case 3:
      local_68._0_1_ = 't';
      local_68._1_1_ = 'x';
      local_68._2_1_ = 't';
      local_68._3_1_ = '\0';
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 'f';
      builtin_strncpy(acStack_74,"rench/hints.",0xc);
      break;
    case 4:
      local_68._0_1_ = 't';
      local_68._1_1_ = 'x';
      local_68._2_1_ = 't';
      local_68._3_1_ = '\0';
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 'g';
      builtin_strncpy(acStack_74,"erman/hints.",0xc);
      break;
    case 5:
      local_68._0_1_ = 't';
      local_68._1_1_ = 's';
      local_68._2_1_ = '.';
      local_68._3_1_ = 't';
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_64 = 0x7478;
      local_62 = 0;
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 'n';
      builtin_strncpy(acStack_74,"orwegian/hin",0xc);
      break;
    case 6:
      local_68._0_1_ = '.';
      local_68._1_1_ = 't';
      local_68._2_1_ = 'x';
      local_68._3_1_ = 't';
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_64 = (ushort)local_64._1_1_ << 8;
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 's';
      builtin_strncpy(acStack_74,"panish/hints",0xc);
      break;
    case 7:
      local_68._0_1_ = '.';
      local_68._1_1_ = 't';
      local_68._2_1_ = 'x';
      local_68._3_1_ = 't';
      builtin_strncpy(local_88 + 8,"/languag",8);
      local_64 = (ushort)local_64._1_1_ << 8;
      local_78._0_1_ = 'e';
      local_78._1_1_ = 's';
      local_78._2_1_ = '/';
      local_78._3_1_ = 's';
      builtin_strncpy(acStack_74,"wedish/hints",0xc);
    }
    builtin_strncpy(local_88,"txtfiles",8);
    (*DAT_10223000)(1,DAT_10226674,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 0x20c));
    (*DAT_10223020)(*(int *)(DAT_10223188 + 0x98) + param_1);
    (*DAT_10223020)(local_88);
    (*DAT_10223004)();
  }
LAB_100f4012:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

