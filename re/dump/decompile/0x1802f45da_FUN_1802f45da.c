// 0x1802f45da  FUN_1802f45da
// size=43 thunk=false
// signature: undefined FUN_1802f45da()
// status: ok


void FUN_1802f45da(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x48);
  }
  return;
}


