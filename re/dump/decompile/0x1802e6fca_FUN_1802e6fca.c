// 0x1802e6fca  FUN_1802e6fca
// size=46 thunk=false
// signature: undefined FUN_1802e6fca()
// status: ok


void FUN_1802e6fca(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x88);
  }
  return;
}


