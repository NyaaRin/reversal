// 0x1802e937a  FUN_1802e937a
// size=46 thunk=false
// signature: undefined FUN_1802e937a()
// status: ok


void FUN_1802e937a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x158);
  }
  return;
}


