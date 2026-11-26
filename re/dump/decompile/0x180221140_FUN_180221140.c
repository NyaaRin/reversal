// 0x180221140  FUN_180221140
// size=77 thunk=false
// signature: undefined FUN_180221140()
// status: ok


undefined8 FUN_180221140(undefined8 *param_1)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_18 = *param_1;
  local_10 = *(undefined1 *)(param_1 + 1);
  (*(code *)param_1[2])(&local_18);
  _Cnd_do_broadcast_at_thread_exit();
  free(param_1);
  return 0;
}


