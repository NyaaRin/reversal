// 0x1802f83e4  FUN_1802f83e4
// size=43 thunk=false
// signature: undefined FUN_1802f83e4()
// status: ok


void FUN_1802f83e4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x200) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x78);
  }
  return;
}


