
undefined4 __cdecl FUN_100579f0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  
  fVar2 = (float)(param_1 * 9);
  fVar1 = (float)param_2 * 16.0;
  uVar6 = (undefined2)((uint)(param_1 * 9) >> 0x10);
  uVar5 = CONCAT22(uVar6,(ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                         (ushort)(fVar1 == fVar2) << 0xe);
  if ((fVar1 == fVar2) == 0) {
    dVar3 = (double)param_1 * 5.0;
    dVar4 = (double)param_2 * 8.0;
    uVar5 = CONCAT22(uVar6,(ushort)(dVar4 < dVar3) << 8 | (ushort)(NAN(dVar4) || NAN(dVar3)) << 10 |
                           (ushort)(dVar4 == dVar3) << 0xe);
    if ((dVar4 == dVar3) == 0) {
      return uVar5;
    }
  }
  return CONCAT31((int3)((uint)uVar5 >> 8),1);
}

