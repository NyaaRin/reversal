// 0x1802f955e  FUN_1802f955e
// size=46 thunk=false
// signature: undefined FUN_1802f955e()
// status: ok


void FUN_1802f955e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x80) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x100);
  }
  return;
}


