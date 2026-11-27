// 0x1802f5b0b  FUN_1802f5b0b
// size=38 thunk=false
// signature: undefined FUN_1802f5b0b()
// status: ok


void FUN_1802f5b0b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x50);
  }
  return;
}


