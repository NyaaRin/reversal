// 0x1802e9ab5  FUN_1802e9ab5
// size=46 thunk=false
// signature: undefined FUN_1802e9ab5()
// status: ok


void FUN_1802e9ab5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0x7fffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x318);
  }
  return;
}


