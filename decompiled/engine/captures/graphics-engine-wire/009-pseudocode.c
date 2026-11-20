
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da63bd(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  if (((param_1 == 1) || (param_1 == 8)) && (param_4 == 0)) {
    FUN_01df2656(s_MSG_ONE_or_MSG_ONE_UNRELIABLE_wi_01ec243c);
  }
  if (((param_1 != 8) && (param_1 != 1)) && (param_4 != 0)) {
    FUN_01df2656(s_Invalid_message__cannot_use_broa_01ec2474);
  }
  if (DAT_0242f300 != 0) {
    FUN_01df2656(s_New_message_started_when_msg___d_01ec24b8,DAT_0242f2fc);
  }
  if (param_2 == 0) {
    FUN_01df2656(s_Tried_to_create_a_message_with_a_01ec24f0);
  }
  DAT_0242f300 = 1;
  DAT_0242f2fc = param_2;
  DAT_0242f2f4 = param_4;
  DAT_0242f2f8 = param_1;
  if ((param_1 == 4) || (param_1 == 5)) {
    if (param_3 != (undefined4 *)0x0) {
      _DAT_0242eb24 = *param_3;
      _DAT_0242eb28 = param_3[1];
      _DAT_0242eb2c = param_3[2];
    }
    FUN_01d7f691();
  }
  DAT_01ec1aa8 = 0;
  DAT_01ec1a9c = 1;
  return;
}

