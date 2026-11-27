// 0x1802ec07f  FUN_1802ec07f
// size=38 thunk=false
// signature: undefined FUN_1802ec07f()
// status: ok


void FUN_1802ec07f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 8) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x38);
  }
  return;
}


