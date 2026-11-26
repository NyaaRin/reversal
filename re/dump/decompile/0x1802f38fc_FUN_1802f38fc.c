// 0x1802f38fc  FUN_1802f38fc
// size=46 thunk=false
// signature: undefined FUN_1802f38fc()
// status: ok


void FUN_1802f38fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x80) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0xf8));
  }
  return;
}


