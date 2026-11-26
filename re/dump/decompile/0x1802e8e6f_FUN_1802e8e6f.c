// 0x1802e8e6f  FUN_1802e8e6f
// size=38 thunk=false
// signature: undefined FUN_1802e8e6f()
// status: ok


void FUN_1802e8e6f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


