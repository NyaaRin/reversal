// 0x1802f501e  FUN_1802f501e
// size=46 thunk=false
// signature: undefined FUN_1802f501e()
// status: ok


void FUN_1802f501e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 0x80) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x188);
  }
  return;
}


