// 0x1802f6f26  FUN_1802f6f26
// size=46 thunk=false
// signature: undefined FUN_1802f6f26()
// status: ok


void FUN_1802f6f26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x268);
  }
  return;
}


