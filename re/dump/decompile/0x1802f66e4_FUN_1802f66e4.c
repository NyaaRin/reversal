// 0x1802f66e4  FUN_1802f66e4
// size=46 thunk=false
// signature: undefined FUN_1802f66e4()
// status: ok


void FUN_1802f66e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x20000000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xdfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x4f0);
  }
  return;
}


