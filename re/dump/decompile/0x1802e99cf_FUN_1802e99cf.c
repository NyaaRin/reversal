// 0x1802e99cf  FUN_1802e99cf
// size=46 thunk=false
// signature: undefined FUN_1802e99cf()
// status: ok


void FUN_1802e99cf(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x4000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfbffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x2d8);
  }
  return;
}


