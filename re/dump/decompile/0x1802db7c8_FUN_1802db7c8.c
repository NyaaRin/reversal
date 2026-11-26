// 0x1802db7c8  FUN_1802db7c8
// size=46 thunk=false
// signature: undefined FUN_1802db7c8()
// status: ok


void FUN_1802db7c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xb0);
  }
  return;
}


