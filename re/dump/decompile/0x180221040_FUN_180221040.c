// 0x180221040  FUN_180221040
// size=94 thunk=false
// signature: undefined FUN_180221040()
// status: ok


undefined8 FUN_180221040(void *param_1)

{
  FUN_18013dfa0();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    FUN_18020e450((longlong)param_1 + 0x28);
    FUN_18020e450(param_1);
    free(param_1);
  }
  return 0;
}


