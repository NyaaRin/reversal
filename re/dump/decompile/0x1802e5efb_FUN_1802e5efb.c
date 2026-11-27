// 0x1802e5efb  FUN_1802e5efb
// size=46 thunk=false
// signature: undefined FUN_1802e5efb()
// status: ok


void FUN_1802e5efb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2c8);
  }
  return;
}


