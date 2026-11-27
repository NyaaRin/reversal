// 0x1802e9eef  FUN_1802e9eef
// size=46 thunk=false
// signature: undefined FUN_1802e9eef()
// status: ok


void FUN_1802e9eef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffbfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


