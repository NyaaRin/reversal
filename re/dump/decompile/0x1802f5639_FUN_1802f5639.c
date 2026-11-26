// 0x1802f5639  FUN_1802f5639
// size=46 thunk=false
// signature: undefined FUN_1802f5639()
// status: ok


void FUN_1802f5639(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xc0);
  }
  return;
}


