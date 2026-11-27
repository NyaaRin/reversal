// 0x180242210  FUN_180242210
// size=57 thunk=false
// signature: undefined FUN_180242210()
// status: ok


undefined8 FUN_180242210(undefined8 *param_1)

{
  (*(code *)param_1[1])(*param_1);
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}


