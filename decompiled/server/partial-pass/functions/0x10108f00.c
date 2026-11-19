// rea decompile_all
// name: FUN_10108f00
// address: 0x10108f00
// body: available
// range: 0x10108f00-0x1010950c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10108f00(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined8 local_1c;
  undefined4 local_14;
  undefined8 local_10;
  undefined4 local_8;
  
  iVar4 = (**(code **)(*param_1 + 0x78))();
  uVar2 = *(uint *)(*(int *)(in_ECX + 4) + 0x1a4);
  if ((((uVar2 & 1) == 0) && (iVar4 != 0)) && (*(int *)(iVar4 + 0x224) == 8)) {
    if ((uVar2 & 4) == 0) {
      return;
    }
    (*DAT_1022303c)(1,"DEBUG: env_customize %s does nothing; can\'t apply to a corpse.\n",
                    *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + *(int *)(DAT_10223188 + 0x98));
    return;
  }
  if ((uVar2 & 4) != 0) {
    iVar5 = *(int *)(DAT_10223188 + 0x98);
    (*DAT_1022303c)(1,"DEBUG: env_customize \"%s\" affects %s \"%s\": [",
                    *(int *)(*(int *)(in_ECX + 4) + 0x1d0) + iVar5,*(int *)param_1[1] + iVar5,
                    ((int *)param_1[1])[0x74] + iVar5);
  }
  if (*(int *)(in_ECX + 0xe0) != 0) {
    iVar5 = param_1[1];
    local_1c = *(undefined8 *)(iVar5 + 0xdc);
    local_14 = *(undefined4 *)(iVar5 + 0xe4);
    local_10 = *(undefined8 *)(iVar5 + 0xe8);
    local_8 = *(undefined4 *)(iVar5 + 0xf0);
    (*DAT_10222f50)(*(undefined4 *)(iVar5 + 0x20c),
                    *(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe0));
    FUN_1011a030(param_1[1],&local_1c,&local_10);
    if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
      (*DAT_1022303c)(1," model=%s",*(int *)(DAT_10223188 + 0x98) + *(int *)(in_ECX + 0xe0));
    }
  }
  FUN_10110290(*(undefined4 *)(in_ECX + 0x10c),0,param_1);
  FUN_10110290(*(undefined4 *)(in_ECX + 0x110),1,param_1);
  FUN_10110290(*(undefined4 *)(in_ECX + 0x114),2,param_1);
  FUN_10110290(*(undefined4 *)(in_ECX + 0x118),3,param_1);
  if ((*(float *)(in_ECX + 0x108) != -1.0) &&
     (*(float *)(param_1[1] + 0x13c) = *(float *)(in_ECX + 0x108),
     (*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0)) {
    (*DAT_1022303c)(1," framerate=%f",(double)*(float *)(in_ECX + 0x108));
  }
  iVar5 = *(int *)(in_ECX + 4);
  if (*(int *)(iVar5 + 0x114) != -1) {
    *(int *)(param_1[1] + 0x114) = *(int *)(iVar5 + 0x114);
    iVar5 = *(int *)(in_ECX + 4);
    if ((*(byte *)(iVar5 + 0x1a4) & 4) != 0) {
      (*DAT_1022303c)(1," body = %d",*(undefined4 *)(iVar5 + 0x114));
      iVar5 = *(int *)(in_ECX + 4);
    }
  }
  iVar5 = *(int *)(iVar5 + 0x110);
  if (iVar5 != -1) {
    iVar3 = param_1[1];
    if (iVar5 == -2) {
      if (*(int *)(iVar3 + 0x110) == 0) {
        *(undefined4 *)(iVar3 + 0x110) = 1;
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
          (*DAT_1022303c)(1," skin=1");
        }
      }
      else {
        *(undefined4 *)(iVar3 + 0x110) = 0;
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
          (*DAT_1022303c)(1," skin=0");
        }
      }
    }
    else if (iVar5 == -99) {
      *(undefined4 *)(iVar3 + 0x110) = 0xffffffff;
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
        (*DAT_1022303c)(1," skin=-1");
      }
    }
    else {
      *(int *)(iVar3 + 0x110) = iVar5;
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
        (*DAT_1022303c)(1," skin=%d",*(undefined4 *)(param_1[1] + 0x110));
      }
    }
  }
  iVar5 = FUN_1010b4a0(*(undefined4 *)(in_ECX + 0xf4),~(*(uint *)(param_1[1] + 0x118) >> 7) & 1,
                       param_2,"visible");
  if (iVar5 == 1) {
    *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) & 0xffffff7f;
  }
  else if (iVar5 == 2) {
    *(uint *)(param_1[1] + 0x118) = *(uint *)(param_1[1] + 0x118) | 0x80;
  }
  iVar5 = FUN_1010b4a0(*(undefined4 *)(in_ECX + 0xf8),*(int *)(param_1[1] + 0x10c) != 0,param_2,
                       "solid");
  if (iVar5 == 1) {
    *(uint *)(param_1[1] + 0x10c) =
         (*(char *)(*(int *)(param_1[1] + 0xb8) + *(int *)(DAT_10223188 + 0x98)) == '*') + 3;
  }
  else if (iVar5 == 2) {
    *(undefined4 *)(param_1[1] + 0x10c) = 0;
  }
  if (iVar4 != 0) {
    if ((*(int *)(in_ECX + 0x104) != 0) &&
       (*(int *)(iVar4 + 0x31c) = *(int *)(in_ECX + 0x104),
       (*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0)) {
      (*DAT_1022303c)(1," bloodcolor=%d",*(undefined4 *)(in_ECX + 0x104));
    }
    if (0 < *(int *)(in_ECX + 0x100)) {
      iVar5 = FUN_1000aaf0(param_1[1],"monster_barney");
      if (((iVar5 == 0) && (iVar5 = FUN_1000aaf0(param_1[1],"monster_scientist"), iVar5 == 0)) &&
         (iVar5 = FUN_1000aaf0(param_1[1],"monster_sitting_scientist"), iVar5 == 0)) {
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
          (*DAT_1022303c)(1," voicePitch=unchanged");
        }
      }
      else {
        param_1[0xdc] = *(int *)(in_ECX + 0x100);
        if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
          (*DAT_1022303c)(1," voicePitch(talk)=%d",*(undefined4 *)(in_ECX + 0x100));
        }
      }
    }
    if (*(int *)(in_ECX + 0xe4) != 0) {
      *(int *)(iVar4 + 0x350) = *(int *)(in_ECX + 0xe4);
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
        (*DAT_1022303c)(1," class=%d",*(undefined4 *)(in_ECX + 0xe4));
      }
      iVar5 = FUN_10017780();
      if (iVar5 != 0) {
        FUN_10017740();
        *(uint *)(iVar4 + 0x180) = *(uint *)(iVar4 + 0x180) | 0x10000;
      }
    }
    if ((*(int *)(in_ECX + 0xe8) != -1) &&
       (*(int *)(iVar4 + 0x354) = *(int *)(in_ECX + 0xe8),
       (*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0)) {
      (*DAT_1022303c)(1," playerreact=%d",*(undefined4 *)(in_ECX + 0xe8));
    }
    iVar5 = FUN_1010b4a0(*(undefined4 *)(in_ECX + 0xec),
                         *(uint *)(*(int *)(iVar4 + 4) + 0x1a4) & 0x10,param_2,"prisoner");
    if (iVar5 == 1) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a4);
      *puVar1 = *puVar1 | 0x10;
      iVar5 = FUN_10017780();
      if (iVar5 != 0) {
        FUN_10017740();
        *(uint *)(iVar4 + 0x180) = *(uint *)(iVar4 + 0x180) | 0x10000;
      }
    }
    else if (iVar5 == 2) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a4);
      *puVar1 = *puVar1 & 0xffffffef;
    }
    iVar5 = FUN_1010b4a0(*(undefined4 *)(in_ECX + 0xf0),
                         *(uint *)(*(int *)(iVar4 + 4) + 0x1a8) & 0x800000,param_2,"monsterclip");
    if (iVar5 == 1) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a8);
      *puVar1 = *puVar1 | 0x800000;
    }
    else if (iVar5 == 2) {
      puVar1 = (uint *)(*(int *)(iVar4 + 4) + 0x1a8);
      *puVar1 = *puVar1 & 0xff7fffff;
    }
    iVar5 = FUN_1010b4a0(*(undefined4 *)(in_ECX + 0xfc),*(uint *)(iVar4 + 0x2ec) & 1,param_2,
                         "provoked");
    if (iVar5 == 1) {
      *(uint *)(iVar4 + 0x2ec) = *(uint *)(iVar4 + 0x2ec) | 1;
    }
    else if (iVar5 == 2) {
      *(uint *)(iVar4 + 0x2ec) = *(uint *)(iVar4 + 0x2ec) & 0xfffffffe;
    }
  }
  if ((*(byte *)(*(int *)(in_ECX + 4) + 0x1a4) & 4) != 0) {
    (*DAT_1022303c)(1,&DAT_101e1590);
  }
  return;
}

