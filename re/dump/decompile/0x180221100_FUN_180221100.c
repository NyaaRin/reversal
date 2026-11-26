// 0x180221100  FUN_180221100
// size=61 thunk=false
// signature: undefined FUN_180221100()
// status: ok


undefined8 FUN_180221100(void *param_1)

{
  FUN_18013eee0();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


