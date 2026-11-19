// rea decompile_all
// name: FUN_10051250
// address: 0x10051250
// body: available
// range: 0x10051250-0x1005153a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10051250(void)

{
  char cVar1;
  float fVar2;
  char *pcVar3;
  wchar_t *pwVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *in_ECX;
  float10 fVar8;
  double dVar9;
  
  pcVar3 = (char *)FUN_100dff70("ironsight_forward",(int)DAT_10223188[0x26] + in_ECX[0x44]);
  pcVar5 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != pcVar5) {
    pwVar4 = (wchar_t *)FUN_100dff70("ironsight_forward",(int)DAT_10223188[0x26] + in_ECX[0x44]);
    dVar9 = FID_conflict__atof(pwVar4);
    in_ECX[0x5f] = (int)(float)dVar9;
  }
  pcVar3 = (char *)FUN_100dff70("ironsight_right",(int)DAT_10223188[0x26] + in_ECX[0x44]);
  pcVar5 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != pcVar5) {
    pwVar4 = (wchar_t *)FUN_100dff70("ironsight_right",(int)DAT_10223188[0x26] + in_ECX[0x44]);
    dVar9 = FID_conflict__atof(pwVar4);
    in_ECX[0x60] = (int)(float)dVar9;
  }
  pcVar3 = (char *)FUN_100dff70("ironsight_up",(int)DAT_10223188[0x26] + in_ECX[0x44]);
  pcVar5 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != pcVar5) {
    pwVar4 = (wchar_t *)FUN_100dff70("ironsight_up",(int)DAT_10223188[0x26] + in_ECX[0x44]);
    dVar9 = FID_conflict__atof(pwVar4);
    in_ECX[0x61] = (int)(float)dVar9;
  }
  pcVar3 = (char *)FUN_100dff70("ironsight_zoom",(int)DAT_10223188[0x26] + in_ECX[0x44]);
  pcVar5 = pcVar3 + 1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 != pcVar5) {
    pcVar5 = (char *)FUN_100dff70("ironsight_zoom",(int)DAT_10223188[0x26] + in_ECX[0x44]);
    iVar6 = _atoi(pcVar5);
    in_ECX[0x62] = iVar6;
  }
  (*DAT_10223000)(1,DAT_10226668,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
  (*DAT_1022301c)(in_ECX[0x5f]);
  (*DAT_1022301c)(in_ECX[0x60]);
  (*DAT_1022301c)(in_ECX[0x61]);
  (*DAT_10223008)(in_ECX[0x62]);
  (*DAT_10223008)(1);
  (*DAT_10223004)();
  (*DAT_10223000)(1,DAT_102265cc,0,*(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x20c));
  (*DAT_1022301c)(0x43af0000);
  (*DAT_10223008)(0);
  (*DAT_10223008)(0);
  (*DAT_10223004)();
  *(float *)(*(int *)(in_ECX[0x58] + 4) + 0x274) = (float)in_ECX[0x62];
  (**(code **)(*in_ECX + 0x198))(0x12,1,0);
  *(undefined1 *)(in_ECX + 0x5e) = 1;
  fVar2 = *DAT_10223188 + 0.3;
  in_ECX[0x75] = (int)fVar2;
  in_ECX[0x74] = (int)fVar2;
  in_ECX[0x73] = (int)fVar2;
  uVar7 = (*DAT_10223070)(*(undefined4 *)(in_ECX[1] + 0x20c),
                          *(undefined4 *)(*(int *)(in_ECX[0x58] + 4) + 0x21c));
  fVar8 = (float10)FUN_1000f390(uVar7);
  in_ECX[0x76] = (int)(float)(fVar8 + (float10)*DAT_10223188);
  return;
}

