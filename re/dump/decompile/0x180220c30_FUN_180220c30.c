// 0x180220c30  FUN_180220c30
// size=53 thunk=false
// signature: undefined FUN_180220c30()
// status: ok


undefined8 FUN_180220c30(undefined8 *param_1)

{
  (*(code *)*param_1)();
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}


