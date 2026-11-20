
void FUN_01df2656(undefined4 param_1)

{
  HWND hWnd;
  CHAR local_404 [1024];
  
  FUN_01e725ae(local_404,0x400,param_1,&stack0x00000008);
  if (DAT_02499f94 != 0) {
    FUN_01e73b31(&DAT_01ed8720,&DAT_01ecefe4,local_404);
                    /* WARNING: Subroutine does not return */
    _longjmp((int *)&DAT_027fc1a0,2);
  }
  DAT_02499f94 = 1;
  if ((DAT_0251f320 != 0) && (DAT_0250d944 != (code *)0x0)) {
    (*DAT_0250d944)(local_404,0);
  }
  FUN_01dd4a80(s_FATAL_ERROR__shutting_down____s_01ecefe8,local_404);
  if (DAT_0250de38 != 0) {
    MessageBoxA((HWND)0x0,local_404,s_Fatal_error___Dedicated_server_01ecf00c,0x10);
                    /* WARNING: Subroutine does not return */
    __exit(-1);
  }
  FUN_01df27b5(local_404);
  hWnd = GetForegroundWindow();
  DestroyWindow(hWnd);
  MessageBoxA((HWND)0x0,local_404,s_Fatal_Error_01ecf02c,0x10);
  FUN_01df7711();
                    /* WARNING: Subroutine does not return */
  __exit(-1);
}

