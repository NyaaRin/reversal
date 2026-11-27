// 0x180305d8e  FUN_180305d8e
// size=41 thunk=false
// signature: undefined FUN_180305d8e()
// status: ok


void FUN_180305d8e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


