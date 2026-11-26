// 0x1802e7246  FUN_1802e7246
// size=46 thunk=false
// signature: undefined FUN_1802e7246()
// status: ok


void FUN_1802e7246(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x108);
  }
  return;
}


