// 0x1802db607  FUN_1802db607
// size=41 thunk=false
// signature: undefined FUN_1802db607()
// status: ok


void FUN_1802db607(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


