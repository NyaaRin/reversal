// 0x1802f8485  FUN_1802f8485
// size=46 thunk=false
// signature: undefined FUN_1802f8485()
// status: ok


void FUN_1802f8485(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x80) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x228);
  }
  return;
}


