// 0x1802ea0e9  FUN_1802ea0e9
// size=46 thunk=false
// signature: undefined FUN_1802ea0e9()
// status: ok


void FUN_1802ea0e9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x388);
  }
  return;
}


