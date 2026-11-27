// 0x1802e9dad  FUN_1802e9dad
// size=46 thunk=false
// signature: undefined FUN_1802e9dad()
// status: ok


void FUN_1802e9dad(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x308);
  }
  return;
}


