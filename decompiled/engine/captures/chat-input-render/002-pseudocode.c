
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d4acd1(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_28;
  int local_24;
  uint local_20;
  int local_1c;
  int local_18;
  undefined *local_14;
  int local_10;
  int local_c;
  float local_8;
  
  local_10 = 0;
  FUN_01d4afce();
  FUN_01d5dd55();
  local_1c = DAT_02d7d0d8 - DAT_01eb15ec;
  while (local_1c = local_1c + 1, local_1c <= DAT_02d7d0d8) {
    if (((-1 < local_1c) &&
        (local_8 = *(float *)(DAT_0207ace0 + (local_1c % DAT_01eb15ec) * 4), local_8 != 0.0)) &&
       (local_8 = (float)_DAT_027fc1e0 - local_8, local_8 <= _DAT_01eb15cc)) {
      local_14 = &DAT_02079bd8;
      _DAT_027fc364 = 0;
      _DAT_027fc814 = 1;
      local_c = 8;
      for (local_18 = 0; local_18 < DAT_01eb159c; local_18 = local_18 + 1) {
        uVar1 = FUN_01d0ee28();
        iVar2 = FUN_01d5ddf4(local_c,local_10,(int)(char)local_14[local_18],uVar1);
        local_c = local_c + iVar2;
      }
      uVar1 = FUN_01d0ee28();
      iVar2 = FUN_01d0f3c8(uVar1);
      local_10 = local_10 + iVar2;
    }
  }
  if (DAT_023ca258 == 1) {
    local_20 = DAT_027fc39c / 10;
    local_28 = 8;
    _DAT_027fc364 = 0;
    _DAT_027fc814 = 1;
    local_18 = 0;
    FUN_01d22bd1(&local_28,&local_10);
    if ((int)local_20 < DAT_023ca25c) {
      local_18 = DAT_023ca25c - local_20;
    }
    local_24 = local_28;
    local_24 = FUN_01d5de11(local_28,local_10,&DAT_01ebf2c0);
    local_24 = local_24 + 3;
    local_24 = FUN_01d5de11(local_24,local_10,&DAT_01eb17f8);
    local_24 = local_24 + 3;
    local_24 = FUN_01d5de11(local_24,local_10,&DAT_027f8c40 + local_18);
    uVar1 = FUN_01d0ee28();
    uVar3 = __ftol(uVar1);
    FUN_01d5ddf4(local_24 + 1,local_10,(uVar3 & 1) + 10);
    uVar1 = FUN_01d0ee28();
    iVar2 = FUN_01d0f3c8(uVar1);
    local_10 = local_10 + iVar2;
  }
  if (DAT_02d7d0d4 < local_10) {
    DAT_02d7d0d4 = local_10;
  }
  return;
}

