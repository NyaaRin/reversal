// 0x1802e98e9  FUN_1802e98e9
// size=46 thunk=false
// signature: undefined FUN_1802e98e9()
// status: ok


void FUN_1802e98e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffdfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x598);
  }
  return;
}


