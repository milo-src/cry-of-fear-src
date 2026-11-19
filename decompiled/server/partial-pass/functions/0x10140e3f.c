// rea decompile_all
// name: FindSITargetTypeInstance
// address: 0x10140e3f
// body: available
// range: 0x10140e3f-0x10140f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 5f15b8f948658c87fb431d4755fcdee71b03f57e6b43970f1a340052e84a3cf6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; Ghidra Program checkpoint mode is disabled: closing discards metadata edits; original executable bytes are unchanged. For stock ELF/PE/Mach-O on Linux/macOS, set REA_GHIDRA_CHECKPOINT_DIR to a private absolute directory before starting REA (restart MCP after changing its startup environment).; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Windows Ghidra P0 accepts native x86, x86-64, ARMNT (Thumb-2) and ARM64 PE applications and DLLs, DOS MZ images, and explicitly selected raw 6502 images; managed, hostile, sensitive, and mutable-path targets are unsupported.; The Windows bridge uses authenticated IPv4 loopback because Node path-based IPC does not expose Java AF_UNIX sockets; the endpoint file contains no bearer token.; Windows sessions require the matching packaged Windows x64 native addon, local NTFS/ReFS targets and runtimes, and Windows 10 or later. Native handles enforce path admission, private DACLs, and Job Object ownership automatically.; The Ghidra Program references PDB hl.pdb (GUID 0df27cb6-7a64-4411-8b7f-c289db2bc9ff, age (hex) c, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    struct _s_RTTIBaseClassDescriptor const * __cdecl FindSITargetTypeInstance(struct
   _s_RTTICompleteObjectLocator const *,struct TypeDescriptor *,struct TypeDescriptor *)
   
   Library: Visual Studio 2019 Release */

_s_RTTIBaseClassDescriptor * __cdecl
FindSITargetTypeInstance
          (_s_RTTICompleteObjectLocator *param_1,TypeDescriptor *param_2,TypeDescriptor *param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  _s_RTTIBaseClassDescriptor *p_Var5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  TypeDescriptor *pTVar10;
  bool bVar11;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 8);
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      p_Var5 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + uVar7 * 4);
      uVar7 = uVar7 + 1;
      if (*(TypeDescriptor **)p_Var5 == param_3) {
        while( true ) {
          if (uVar4 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar6 = *(int **)(iVar3 + uVar7 * 4);
          if ((*(byte *)(piVar6 + 5) & 4) != 0) break;
          if ((TypeDescriptor *)*piVar6 == param_2) {
            return p_Var5;
          }
          uVar7 = uVar7 + 1;
        }
        return (_s_RTTIBaseClassDescriptor *)0x0;
      }
    } while (uVar7 < uVar4);
    uVar7 = 0;
    do {
      p_Var5 = *(_s_RTTIBaseClassDescriptor **)(iVar3 + uVar7 * 4);
      pbVar8 = (byte *)(*(int *)p_Var5 + 8);
      pTVar10 = param_3 + 1;
      do {
        bVar1 = *pbVar8;
        bVar11 = bVar1 < *(byte *)&pTVar10->pVFTable;
        if (bVar1 != *(byte *)&pTVar10->pVFTable) {
LAB_10140ea1:
          uVar9 = -(uint)bVar11 | 1;
          goto LAB_10140ea6;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar2 = *(byte *)((int)&pTVar10->pVFTable + 1);
        bVar11 = bVar1 < bVar2;
        if (bVar1 != bVar2) goto LAB_10140ea1;
        pbVar8 = pbVar8 + 2;
        pTVar10 = (TypeDescriptor *)((int)&pTVar10->pVFTable + 2);
      } while (bVar1 != 0);
      uVar9 = 0;
LAB_10140ea6:
      uVar7 = uVar7 + 1;
      if (uVar9 == 0) {
        do {
          if (uVar4 <= uVar7) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          piVar6 = *(int **)(iVar3 + uVar7 * 4);
          if ((*(byte *)(piVar6 + 5) & 4) != 0) {
            return (_s_RTTIBaseClassDescriptor *)0x0;
          }
          pTVar10 = param_2 + 1;
          pbVar8 = (byte *)(*piVar6 + 8);
          do {
            bVar1 = *pbVar8;
            bVar11 = bVar1 < *(byte *)&pTVar10->pVFTable;
            if (bVar1 != *(byte *)&pTVar10->pVFTable) {
LAB_10140ef4:
              uVar9 = -(uint)bVar11 | 1;
              goto LAB_10140ef9;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar2 = *(byte *)((int)&pTVar10->pVFTable + 1);
            bVar11 = bVar1 < bVar2;
            if (bVar1 != bVar2) goto LAB_10140ef4;
            pbVar8 = pbVar8 + 2;
            pTVar10 = (TypeDescriptor *)((int)&pTVar10->pVFTable + 2);
          } while (bVar1 != 0);
          uVar9 = 0;
LAB_10140ef9:
          if (uVar9 == 0) {
            return p_Var5;
          }
          uVar7 = uVar7 + 1;
        } while( true );
      }
    } while (uVar7 < uVar4);
  }
  return (_s_RTTIBaseClassDescriptor *)0x0;
}

