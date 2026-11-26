// 0x1802e520a  FUN_1802e520a
// size=46 thunk=false
// signature: undefined FUN_1802e520a()
// status: ok


void FUN_1802e520a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa0);
  }
  return;
}


