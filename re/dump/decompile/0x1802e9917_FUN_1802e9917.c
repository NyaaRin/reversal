// 0x1802e9917  FUN_1802e9917
// size=46 thunk=false
// signature: undefined FUN_1802e9917()
// status: ok


void FUN_1802e9917(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x400000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffbfffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2b8);
  }
  return;
}


