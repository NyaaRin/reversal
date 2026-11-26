// 0x1802e5d55  FUN_1802e5d55
// size=46 thunk=false
// signature: undefined FUN_1802e5d55()
// status: ok


void FUN_1802e5d55(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x2000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffdfff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a8);
  }
  return;
}


