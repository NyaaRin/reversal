// 0x1802210a0  FUN_1802210a0
// size=84 thunk=false
// signature: undefined FUN_1802210a0()
// status: ok


undefined8 FUN_1802210a0(void *param_1)

{
  FUN_18013ed20();
  _Cnd_do_broadcast_at_thread_exit();
  if (param_1 != (void *)0x0) {
    FUN_18020e450(param_1);
    free(param_1);
  }
  return 0;
}


