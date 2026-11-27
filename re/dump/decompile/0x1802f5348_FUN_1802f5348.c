// 0x1802f5348  FUN_1802f5348
// size=46 thunk=false
// signature: undefined FUN_1802f5348()
// status: ok


void FUN_1802f5348(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x8000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffff7fff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x140);
  }
  return;
}


