// 0x1802e9a59  FUN_1802e9a59
// size=46 thunk=false
// signature: undefined FUN_1802e9a59()
// status: ok


void FUN_1802e9a59(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2f8);
  }
  return;
}


