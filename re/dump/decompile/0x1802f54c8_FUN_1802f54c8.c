// 0x1802f54c8  FUN_1802f54c8
// size=46 thunk=false
// signature: undefined FUN_1802f54c8()
// status: ok


void FUN_1802f54c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xf7ffffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x1a0);
  }
  return;
}


