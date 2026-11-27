// 0x1802e73e4  FUN_1802e73e4
// size=46 thunk=false
// signature: undefined FUN_1802e73e4()
// status: ok


void FUN_1802e73e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x2000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfdffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x168);
  }
  return;
}


