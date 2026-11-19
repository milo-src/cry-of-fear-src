
undefined4 FUN_10008640(undefined4 param_1)

{
  undefined4 uVar1;
  undefined **local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  BitmapTGA *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_101317e4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = MemoryInputStream::vftable;
  local_20 = 0;
  local_18 = 0;
  local_1c = 0;
  local_20 = (*DAT_101b2744)(param_1,5,&local_1c,DAT_10190600 ^ (uint)&stack0xfffffffc);
  if (local_20 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  local_18 = 0;
  local_14 = (BitmapTGA *)FUN_100b44cb(0x30);
  local_8 = 0;
  if (local_14 == (BitmapTGA *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = vgui::BitmapTGA::BitmapTGA(local_14,(InputStream *)&local_24,true);
  }
  local_8 = 0xffffffff;
  (*DAT_101b274c)(local_20);
  ExceptionList = local_10;
  return uVar1;
}

