// 0x1802e5b35  FUN_1802e5b35
// size=46 thunk=false
// signature: undefined FUN_1802e5b35()
// status: ok


void FUN_1802e5b35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1c8);
  }
  return;
}


