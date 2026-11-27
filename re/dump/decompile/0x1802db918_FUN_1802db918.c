// 0x1802db918  FUN_1802db918
// size=46 thunk=false
// signature: undefined FUN_1802db918()
// status: ok


void FUN_1802db918(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x40000000) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xbfffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x110);
  }
  return;
}


