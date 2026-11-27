// 0x1802edc3f  FUN_1802edc3f
// size=38 thunk=false
// signature: undefined FUN_1802edc3f()
// status: ok


void FUN_1802edc3f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


