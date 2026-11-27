// 0x1802f62b2  FUN_1802f62b2
// size=46 thunk=false
// signature: undefined FUN_1802f62b2()
// status: ok


void FUN_1802f62b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xff7fffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xf0);
  }
  return;
}


