
/* public: void __thiscall CBasePlayer::GameStart(void) */

void __thiscall CBasePlayer::GameStart(CBasePlayer *this)

{
  undefined1 local_108 [256];
  uint local_8;
  
                    /* 0xdfc10  136  ?GameStart@CBasePlayer@@QAEXXZ */
  local_8 = DAT_1021baf4 ^ (uint)&stack0xfffffffc;
  if (DAT_10226470 != 0) {
    FUN_1001f160(local_108,"map %s\n",DAT_10226470);
    DAT_10226470 = 0;
    (*DAT_10222fec)(*(undefined4 *)(*(int *)(this + 4) + 0x20c),local_108);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (*DAT_10222fec)(*(undefined4 *)(*(int *)(this + 4) + 0x20c),"map c_intro\n");
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

