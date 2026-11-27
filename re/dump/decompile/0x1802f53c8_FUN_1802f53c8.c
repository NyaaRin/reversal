// 0x1802f53c8  FUN_1802f53c8
// size=46 thunk=false
// signature: undefined FUN_1802f53c8()
// status: ok


void FUN_1802f53c8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0x160);
  }
  return;
}


