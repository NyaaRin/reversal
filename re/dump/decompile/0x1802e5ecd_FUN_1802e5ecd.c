// 0x1802e5ecd  FUN_1802e5ecd
// size=46 thunk=false
// signature: undefined FUN_1802e5ecd()
// status: ok


void FUN_1802e5ecd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffefffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


