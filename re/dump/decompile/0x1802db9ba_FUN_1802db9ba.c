// 0x1802db9ba  FUN_1802db9ba
// size=46 thunk=false
// signature: undefined FUN_1802db9ba()
// status: ok


void FUN_1802db9ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x130);
  }
  return;
}


