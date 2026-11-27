// 0x1802f7a78  FUN_1802f7a78
// size=41 thunk=false
// signature: undefined FUN_1802f7a78()
// status: ok


void FUN_1802f7a78(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}


