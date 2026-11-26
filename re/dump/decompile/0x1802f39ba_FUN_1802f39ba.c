// 0x1802f39ba  FUN_1802f39ba
// size=46 thunk=false
// signature: undefined FUN_1802f39ba()
// status: ok


void FUN_1802f39ba(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe0);
  }
  return;
}


