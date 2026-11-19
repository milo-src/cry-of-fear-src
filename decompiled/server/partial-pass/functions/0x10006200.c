// rea decompile_all
// name: FUN_10006200
// address: 0x10006200
// body: available
// range: 0x10006200-0x1000651a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10006516 to 0x1013dd48 ___report_rangecheckfailure (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006200(void)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  char local_208 [512];
  uint local_8;
  
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (DAT_10220c5c != 0) goto LAB_10006508;
  _memset(&DAT_10220ff0,0,0x1a00);
  _memset(&DAT_102229f0,0,0x200);
  DAT_10220fe8 = 0;
  _memset(local_208,0,0x200);
  pcVar3 = (char *)(**(code **)(DAT_10220c50 + 0x4f558))(DAT_10220c50 + 0x4f3f4,&DAT_101a13f0);
  if (pcVar3 == (char *)0x0) {
LAB_100062e2:
    local_20c = (**(code **)(DAT_10220c50 + 0x4f5a4))("sound/materials.txt");
    local_210 = (**(code **)(DAT_10220c50 + 0x4f5a8))("sound/materials.txt",5,0);
  }
  else {
    pcVar6 = pcVar3;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar6 - (int)(pcVar3 + 1)) < 3) goto LAB_100062e2;
    local_20c = (**(code **)(DAT_10220c50 + 0x4f5a4))(pcVar3);
    local_210 = (**(code **)(DAT_10220c50 + 0x4f5a8))(pcVar3,5,0);
    (**(code **)(DAT_10220c50 + 0x4f56c))("Loading CUSTOM materials %s\n",pcVar3);
  }
  iVar5 = local_210;
  if (local_210 != 0) {
    local_214 = 0;
    iVar4 = (**(code **)(DAT_10220c50 + 0x4f5b0))(local_210,local_20c,&local_214,local_208,0x1ff);
    while ((iVar4 != 0 && (DAT_10220fe8 < 0x200))) {
      uVar2 = 0;
      cVar1 = local_208[0];
      while ((cVar1 != '\0' && (iVar5 = _isspace((int)local_208[uVar2]), iVar5 != 0))) {
        cVar1 = local_208[uVar2 + 1];
        uVar2 = uVar2 + 1;
      }
      cVar1 = local_208[uVar2];
      if (((cVar1 != '\0') && (cVar1 != '/')) && (iVar5 = _isalpha((int)cVar1), iVar5 != 0)) {
        iVar5 = _toupper((int)local_208[uVar2]);
        (&DAT_102229f0)[DAT_10220fe8] = (char)iVar5;
        cVar1 = local_208[uVar2 + 1];
        while ((uVar7 = uVar2 + 1, cVar1 != '\0' && (iVar5 = _isspace((int)cVar1), iVar5 != 0))) {
          cVar1 = local_208[uVar2 + 2];
          uVar2 = uVar7;
        }
        pcVar3 = local_208 + uVar2 + 1;
        if (*pcVar3 != '\0') {
          do {
            iVar5 = _isspace((int)local_208[uVar7]);
            uVar8 = uVar7;
            if (iVar5 != 0) break;
            uVar8 = uVar7 + 1;
            iVar5 = uVar7 + 1;
            uVar7 = uVar8;
          } while (local_208[iVar5] != '\0');
          if (local_208[uVar8] != '\0') {
            uVar7 = uVar2 + 0xd;
            if ((int)uVar8 < (int)(uVar2 + 0xd)) {
              uVar7 = uVar8;
            }
            if (0x1ff < uVar7) {
                    /* WARNING: Subroutine does not return */
              ___report_rangecheckfailure();
            }
            iVar5 = DAT_10220fe8 * 0xd;
            DAT_10220fe8 = DAT_10220fe8 + 1;
            local_208[uVar7] = '\0';
            iVar5 = iVar5 - (int)pcVar3;
            do {
              cVar1 = *pcVar3;
              pcVar3 = pcVar3 + 1;
              pcVar3[iVar5 + 0x10220fef] = cVar1;
            } while (cVar1 != '\0');
          }
        }
      }
      iVar5 = local_210;
      iVar4 = (**(code **)(DAT_10220c50 + 0x4f5b0))(local_210,local_20c,&local_214,local_208,0x1ff);
    }
    (**(code **)(DAT_10220c50 + 0x4f5ac))(iVar5);
    FUN_100090e0();
    DAT_10220c5c = 1;
  }
LAB_10006508:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

