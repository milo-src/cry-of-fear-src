
void FUN_1004aa80(int param_1)

{
  if (param_1 != 0) {
    if (param_1 != 1) {
      (*DAT_101b26ac)("Unknown userdoc ActionSignal %i.\n",param_1);
      return;
    }
    FUN_100a9120();
    (*DAT_101b2654)("closedocument");
  }
  return;
}

