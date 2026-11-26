// 0x1802f6cee  FUN_1802f6cee
// size=43 thunk=false
// signature: undefined FUN_1802f6cee()
// status: ok


void FUN_1802f6cee(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffeffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x70);
  }
  return;
}


