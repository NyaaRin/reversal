// 0x180221bc0  FUN_180221bc0
// size=61 thunk=false
// signature: undefined FUN_180221bc0()
// status: ok


undefined8 FUN_180221bc0(void *param_1)

{
  FUN_1801fb3a0();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return 0;
}


