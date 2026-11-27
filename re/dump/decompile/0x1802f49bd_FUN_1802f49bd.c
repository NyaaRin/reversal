// 0x1802f49bd  FUN_1802f49bd
// size=46 thunk=false
// signature: undefined FUN_1802f49bd()
// status: ok


void FUN_1802f49bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x80000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfff7ffff;
    Features_Visual_ESP_Editor_Elements_CircleElement_vfunc09(param_2 + 0xa8);
  }
  return;
}


