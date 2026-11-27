// 0x1802db572  FUN_1802db572
// size=46 thunk=false
// signature: undefined FUN_1802db572()
// status: ok


void FUN_1802db572(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xe8);
  }
  return;
}


