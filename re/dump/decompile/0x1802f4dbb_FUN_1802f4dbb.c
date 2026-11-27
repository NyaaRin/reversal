// 0x1802f4dbb  FUN_1802f4dbb
// size=46 thunk=false
// signature: undefined FUN_1802f4dbb()
// status: ok


void FUN_1802f4dbb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffff7f;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x148);
  }
  return;
}


