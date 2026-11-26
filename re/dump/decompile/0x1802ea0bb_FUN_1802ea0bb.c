// 0x1802ea0bb  FUN_1802ea0bb
// size=46 thunk=false
// signature: undefined FUN_1802ea0bb()
// status: ok


void FUN_1802ea0bb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x1000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfeffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


