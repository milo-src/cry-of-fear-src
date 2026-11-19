
undefined4 FUN_1008a420(float param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  size_t _Count;
  char *_Source;
  int iVar5;
  undefined *puVar6;
  float fVar7;
  
  if (((DAT_101b2600 == 0) || (cVar3 = FUN_100a5290(), cVar3 != '\0')) &&
     (*(float *)(*(int *)(in_ECX + 0x14) + 0xc) != 0.0)) {
    fVar7 = *(float *)(*(int *)(in_ECX + 0x18) + 0xc) + param_1;
    if (fVar7 <= DAT_10545758) {
      DAT_10545758 = fVar7;
    }
    if (DAT_10545758 <= param_1) {
      if (DAT_10545128 == '\0') {
        *(uint *)(in_ECX + 0x10) = *(uint *)(in_ECX + 0x10) & 0xfffffffe;
      }
      else {
        DAT_10545758 = fVar7;
        FUN_1008a9e0();
      }
    }
    _Source = &DAT_10545128;
    iVar5 = 0;
    do {
      if (((*_Source != '\0') && (*_Source == '\x02')) &&
         (*(int *)((int)&DAT_10545728 + iVar5) != 0)) {
        _Count = 0x40;
        if ((int)*(size_t *)((int)&DAT_10545740 + iVar5) < 0x40) {
          _Count = *(size_t *)((int)&DAT_10545740 + iVar5);
        }
        _strncpy(&DAT_10545768,_Source,_Count);
        uVar4 = *(uint *)((int)&DAT_10545740 + iVar5);
        if ((int)uVar4 < 0x3f) {
          if (0x3f < uVar4) {
                    /* WARNING: Subroutine does not return */
            ___report_rangecheckfailure();
          }
        }
        else {
          uVar4 = 0x3f;
        }
        (&DAT_10545768)[uVar4] = 0;
        puVar1 = *(undefined4 **)((int)&DAT_10545728 + iVar5);
        (*DAT_101b2678)(*puVar1,puVar1[1],puVar1[2]);
      }
      _Source = _Source + 0x100;
      iVar5 = iVar5 + 4;
    } while ((int)_Source < 0x10545628);
    if ((DAT_101b2600 != 0) && (*(int *)(DAT_101b2600 + 0x142c) != 0)) {
      puVar6 = &DAT_10545129;
      iVar5 = 0x3b4;
      do {
        piVar2 = *(int **)(iVar5 + *(int *)(DAT_101b2600 + 0x142c));
        (**(code **)(*piVar2 + 0x200))(piVar2,puVar6);
        iVar5 = iVar5 + 4;
        puVar6 = puVar6 + 0x100;
      } while (iVar5 < 0x3c8);
    }
  }
  return 1;
}

